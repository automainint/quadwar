#!/usr/bin/python3

def main():
  import xml.etree.ElementTree
  import os, shutil

  funcs_whitelist = ['glCreateProgram',
                     'glProgramBinary',
                     'glCreateShader',
                     'glShaderSource',
                     'glCompileShader',
                     'glGetShaderiv',
                     'glGetShaderInfoLog',
                     'glAttachShader',
                     'glLinkProgram',
                     'glGetProgramiv',
                     'glGetProgramInfoLog',
                     'glGetProgramBinary',
                     'glDeleteProgram',
                     'glDeleteShader',
                     'glDeleteShader',
                     'glBindAttribLocation',
                     'glGetUniformLocation',
                     'glGenVertexArrays',
                     'glBindVertexArray',
                     'glGenBuffers',
                     'glBindBuffer',
                     'glBufferData',
                     'glVertexAttribPointer',
                     'glEnableVertexAttribArray',
                     'glBindVertexArray',
                     'glDeleteBuffers',
                     'glDeleteVertexArrays',
                     'glViewport',
                     'glClearColor',
                     'glClearDepthf',
                     'glClear',
                     'glEnable',
                     'glDisable',
                     'glUseProgram',
                     'glUniformMatrix4fv',
                     'glUniform2f',
                     'glUniform3f',
                     'glUniform4f',
                     'glUniform2fv',
                     'glUniform3fv',
                     'glUniform4fv',
                     'glUniform1i',
                     'glBindVertexArray',
                     'glDrawArrays',
                     'glGetString',
                     'glBlendFunc',
                     'glGenFramebuffers',
                     'glDeleteFramebuffers',
                     'glBindFramebuffer',
                     'glFramebufferTexture2D',
                     'glGenTextures',
                     'glDeleteTextures',
                     'glBindTexture',
                     'glTexImage2D',
                     'glTexImage3D',
                     'glTexParameteri',
                     'glPixelStorei']

  folder = os.path.join('source', 'quadwar', 'gl')
  gl_folder = '.gen_gl'

  def update_repo():
    if os.path.exists(gl_folder):
      os.chdir(gl_folder)
      os.system('git pull --quiet --depth 1 --ff-only')
      os.chdir('..')
    else:
      url = 'https://github.com/KhronosGroup/OpenGL-Registry'
      os.system('git clone --quiet --depth 1 ' + url + ' ' + gl_folder)

  def adjust_typedef(text):
    if text != None:
      s = text
      if s[0:8] == 'typedef ':
        s = s[8:]
      if s[len(s) - 1] == ' ':
        s = s[0:len(s) - 1];
      return s
    return ''

  def adjust_khronos(text):
    if text != None:
      if text == 'khronos_int8_t':
        return 'int8_t'
      if text == 'khronos_int16_t':
        return 'int16_t'
      if text == 'khronos_int32_t':
        return 'int32_t'
      if text == 'khronos_int64_t':
        return 'int64_t'
      if text == 'khronos_uint8_t':
        return 'uint8_t'
      if text == 'khronos_uint16_t':
        return 'uint16_t'
      if text == 'khronos_uint32_t':
        return 'uint32_t'
      if text == 'khronos_uint64_t':
        return 'uint64_t'
      if text == 'khronos_intptr_t':
        return 'ptrdiff_t'
      if text == 'khronos_uintptr_t':
        return 'size_t'
      if text == 'khronos_ssize_t':
        return 'ptrdiff_t'
      if text == 'khronos_usize_t':
        return 'size_t'
      if text == 'khronos_float_t':
        return 'float'
      return text
    return ''

  def adjust_type(text):
    if text:
      if text == 'unsigned int':
        return 'uint32_t'
      if text == 'unsigned short':
        return 'uint16_t'
      if text == 'unsigned char':
        return 'uint8_t'
      if text == 'int':
        return 'int32_t'
      return text
    return ''

  def adjust_arg(arg):
    c = arg[len(arg) - 1]
    if c != ' ' and c != '*':
      return arg + ' '
    return arg

  def args_str(args):
    if len(args) == 0:
      return '(void)';
    s = ''
    for arg in args:
      if len(s) > 0:
        s += ', '
      s += adjust_arg(arg[0]) + arg[1]
    return '(' + s + ')'

  update_repo()

  gl_xml_path = os.path.join(gl_folder, 'xml', 'gl.xml')
  gl_xml = xml.etree.ElementTree.parse(gl_xml_path)
  root = gl_xml.getroot()

  types = list()
  enums = list()
  funcs = list()

  types.append('typedef uint32_t GLhandleARB;')

  for child in root:
    if child.tag == 'types':
      for type in child:
        for name in type:
          decl = adjust_typedef(type.text)
          if len(decl) > 0 and name.text != None:
            decl = adjust_khronos(decl)
            decl = adjust_type(decl)
            if type.find('apientry') != None:
              decl += 'GL_API *'
            types.append('typedef ' + decl + ('' if decl[len(decl) - 1] == '*' else ' ') + name.text + name.tail)
    elif child.tag == 'enums':
      for en in child:
        at = en.attrib
        if 'value' in at and 'name' in at:
          name = at['name']
          enums.append([name, at['value'].lower()])
    elif child.tag == 'commands':
      for cmd in child:
        proto = cmd.find('proto')
        proto_full = ''
        if proto.text != None:
          proto_full = proto.text
        ptype = proto.find('ptype')
        if ptype != None:
          proto_full = proto_full + ptype.text + ptype.tail
        name = proto.find('name').text
        args = list()
        for par in cmd:
          if par.tag == 'param':
            atype = par.find('ptype')
            aname = par.find('name')
            type_full = ''
            if par.text != None:
              type_full += par.text
            if atype != None:
              type_full += atype.text;
              if atype.tail != None:
                type_full += atype.tail
            if aname != None:
              args.append([type_full, aname.text])
            else:
              args.append([type_full, ''])
        if name in funcs_whitelist:
          funcs.append([name, proto_full, args, 0, ''])

  enums_buf = enums
  enums = list()
  enums64 = list()
  enumsSigned = list()

  def is_64(x):
    value = int(x, 0)
    return value > 0xffffffff

  def is_signed(x):
    value = int(x, 0)
    return value < 0

  for i, en in enumerate(enums_buf):
    if en != None:
      last_en = en
      for j in range(i + 1, len(enums_buf)):
        if enums_buf[j] != None and enums_buf[j][0] == en[0]:
          last_en = enums_buf[j]
          enums_buf[j] = None
      if is_signed(last_en[1]):
        enumsSigned.append(last_en)
      elif is_64(last_en[1]):
        enums64.append(last_en)
      else:
        enums.append(last_en)

  os.makedirs(folder, exist_ok=True)

  out = open(os.path.join(folder, 'types.inl.h'), 'w')

  out.write('#ifndef QUADWAR_GL_TYPES_INL_H\n')
  out.write('#define QUADWAR_GL_TYPES_INL_H\n\n')

  out.write('#include <stddef.h>\n')
  out.write('#include <stdint.h>\n\n')
  out.write('#if (_MSC_VER >= 800) || defined(_STDCALL_SUPPORTED)\n')
  out.write('#  define GL_API __stdcall\n')
  out.write('#else\n')
  out.write('#  define GL_API\n')
  out.write('#endif\n\n')
  for type in types:
    out.write(type + '\n')

  out.write('\n')
  out.write('#endif\n')

  out = open(os.path.join(folder, 'enums.inl.h'), 'w')

  out.write('#ifndef QUADWAR_GL_ENUMS_INL_H\n')
  out.write('#define QUADWAR_GL_ENUMS_INL_H\n\n')

  out.write('#include "types.inl.h"\n\n')

  for i, en in enumerate(enums):
    out.write('#define ' + en[0] + ' ' + en[1] + '\n')
  out.write('\n')

  for i, en in enumerate(enums64):
    out.write('#define ' + en[0] + ' ' + en[1] + '\n')
  out.write('\n')

  for i, en in enumerate(enumsSigned):
    out.write('#define ' + en[0] + ' (' + en[1] + ')\n')
  out.write('\n')

  out.write('#endif\n')

  out = open(os.path.join(folder, 'decls.inl.h'), 'w')

  out.write('#ifndef QUADWAR_GL_DECLS_INL_H\n')
  out.write('#define QUADWAR_GL_DECLS_INL_H\n\n')
  out.write('#include "types.inl.h"\n\n')

  for f in funcs:
    out.write('typedef ' + adjust_arg(f[1]) + '(GL_API *' + 'pfn_' + f[0] + ')' + args_str(f[2]) + ';\n')

  out.write('\n')

  for f in funcs:
    out.write('extern pfn_' + f[0] + ' qw_' + f[0] + ';\n')

  out.write('\n')
  out.write('#endif\n')

  out = open(os.path.join(folder, 'funcs.inl.h'), 'w')

  out.write('#ifndef QUADWAR_GL_FUNCS_INL_H\n')
  out.write('#define QUADWAR_GL_FUNCS_INL_H\n\n')

  out.write('#include "decls.inl.h"\n\n')

  for f in funcs:
    out.write('pfn_' + f[0] + ' qw_' + f[0] + ' = NULL;\n')

  out.write('\n')
  out.write('#endif\n')

  out = open(os.path.join(folder, 'loads.inl.h'), 'w')

  for f in funcs:
    out.write('LOAD_(qw_' + f[0] + ', "' + f[0] + '");\n')

if __name__ == '__main__':
  main()
