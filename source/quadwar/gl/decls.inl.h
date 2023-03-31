#ifndef QUADWAR_GL_DECLS_INL_H
#define QUADWAR_GL_DECLS_INL_H

#include "types.inl.h"
#include "enums.inl.h"
#include <stdio.h>
#include <string.h>

typedef void (GL_API *pfn_glAttachShader)(GLuint program, GLuint shader);
typedef void (GL_API *pfn_glBindAttribLocation)(GLuint program, GLuint index, const GLchar *name);
typedef void (GL_API *pfn_glBindBuffer)(GLenum target, GLuint buffer);
typedef void (GL_API *pfn_glBindFramebuffer)(GLenum target, GLuint framebuffer);
typedef void (GL_API *pfn_glBindTexture)(GLenum target, GLuint texture);
typedef void (GL_API *pfn_glBindVertexArray)(GLuint array);
typedef void (GL_API *pfn_glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GL_API *pfn_glBlendEquation)(GLenum mode);
typedef void (GL_API *pfn_glBlendFunc)(GLenum sfactor, GLenum dfactor);
typedef void (GL_API *pfn_glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (GL_API *pfn_glBufferData)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (GL_API *pfn_glClear)(GLbitfield mask);
typedef void (GL_API *pfn_glClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GL_API *pfn_glClearDepthf)(GLfloat d);
typedef void (GL_API *pfn_glCompileShader)(GLuint shader);
typedef GLuint (GL_API *pfn_glCreateProgram)(void);
typedef GLuint (GL_API *pfn_glCreateShader)(GLenum type);
typedef void (GL_API *pfn_glDeleteBuffers)(GLsizei n, const GLuint *buffers);
typedef void (GL_API *pfn_glDeleteFramebuffers)(GLsizei n, const GLuint *framebuffers);
typedef void (GL_API *pfn_glDeleteProgram)(GLuint program);
typedef void (GL_API *pfn_glDeleteShader)(GLuint shader);
typedef void (GL_API *pfn_glDeleteTextures)(GLsizei n, const GLuint *textures);
typedef void (GL_API *pfn_glDeleteVertexArrays)(GLsizei n, const GLuint *arrays);
typedef void (GL_API *pfn_glDisable)(GLenum cap);
typedef void (GL_API *pfn_glDisableVertexAttribArray)(GLuint index);
typedef void (GL_API *pfn_glDrawArrays)(GLenum mode, GLint first, GLsizei count);
typedef void (GL_API *pfn_glEnable)(GLenum cap);
typedef void (GL_API *pfn_glEnableVertexAttribArray)(GLuint index);
typedef void (GL_API *pfn_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GL_API *pfn_glGenBuffers)(GLsizei n, GLuint *buffers);
typedef void (GL_API *pfn_glGenFramebuffers)(GLsizei n, GLuint *framebuffers);
typedef void (GL_API *pfn_glGenTextures)(GLsizei n, GLuint *textures);
typedef void (GL_API *pfn_glGenVertexArrays)(GLsizei n, GLuint *arrays);
typedef GLenum (GL_API *pfn_glGetError)(void);
typedef void (GL_API *pfn_glGetIntegerv)(GLenum pname, GLint *data);
typedef void (GL_API *pfn_glGetProgramBinary)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (GL_API *pfn_glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GL_API *pfn_glGetProgramiv)(GLuint program, GLenum pname, GLint *params);
typedef void (GL_API *pfn_glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GL_API *pfn_glGetShaderiv)(GLuint shader, GLenum pname, GLint *params);
typedef const GLubyte *(GL_API *pfn_glGetString)(GLenum name);
typedef const GLubyte *(GL_API *pfn_glGetStringi)(GLenum name, GLuint index);
typedef GLint (GL_API *pfn_glGetUniformLocation)(GLuint program, const GLchar *name);
typedef void (GL_API *pfn_glLinkProgram)(GLuint program);
typedef void (GL_API *pfn_glPixelStorei)(GLenum pname, GLint param);
typedef void (GL_API *pfn_glProgramBinary)(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (GL_API *pfn_glShaderSource)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (GL_API *pfn_glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GL_API *pfn_glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GL_API *pfn_glTexParameteri)(GLenum target, GLenum pname, GLint param);
typedef void (GL_API *pfn_glUniform1i)(GLint location, GLint v0);
typedef void (GL_API *pfn_glUniform2f)(GLint location, GLfloat v0, GLfloat v1);
typedef void (GL_API *pfn_glUniform2fv)(GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_API *pfn_glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GL_API *pfn_glUniform3fv)(GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_API *pfn_glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GL_API *pfn_glUniform4fv)(GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_API *pfn_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_API *pfn_glUseProgram)(GLuint program);
typedef void (GL_API *pfn_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void (GL_API *pfn_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);

extern pfn_glAttachShader qw_glAttachShader;
extern pfn_glBindAttribLocation qw_glBindAttribLocation;
extern pfn_glBindBuffer qw_glBindBuffer;
extern pfn_glBindFramebuffer qw_glBindFramebuffer;
extern pfn_glBindTexture qw_glBindTexture;
extern pfn_glBindVertexArray qw_glBindVertexArray;
extern pfn_glBlendColor qw_glBlendColor;
extern pfn_glBlendEquation qw_glBlendEquation;
extern pfn_glBlendFunc qw_glBlendFunc;
extern pfn_glBlendFuncSeparate qw_glBlendFuncSeparate;
extern pfn_glBufferData qw_glBufferData;
extern pfn_glClear qw_glClear;
extern pfn_glClearColor qw_glClearColor;
extern pfn_glClearDepthf qw_glClearDepthf;
extern pfn_glCompileShader qw_glCompileShader;
extern pfn_glCreateProgram qw_glCreateProgram;
extern pfn_glCreateShader qw_glCreateShader;
extern pfn_glDeleteBuffers qw_glDeleteBuffers;
extern pfn_glDeleteFramebuffers qw_glDeleteFramebuffers;
extern pfn_glDeleteProgram qw_glDeleteProgram;
extern pfn_glDeleteShader qw_glDeleteShader;
extern pfn_glDeleteTextures qw_glDeleteTextures;
extern pfn_glDeleteVertexArrays qw_glDeleteVertexArrays;
extern pfn_glDisable qw_glDisable;
extern pfn_glDisableVertexAttribArray qw_glDisableVertexAttribArray;
extern pfn_glDrawArrays qw_glDrawArrays;
extern pfn_glEnable qw_glEnable;
extern pfn_glEnableVertexAttribArray qw_glEnableVertexAttribArray;
extern pfn_glFramebufferTexture2D qw_glFramebufferTexture2D;
extern pfn_glGenBuffers qw_glGenBuffers;
extern pfn_glGenFramebuffers qw_glGenFramebuffers;
extern pfn_glGenTextures qw_glGenTextures;
extern pfn_glGenVertexArrays qw_glGenVertexArrays;
extern pfn_glGetError qw_glGetError;
extern pfn_glGetIntegerv qw_glGetIntegerv;
extern pfn_glGetProgramBinary qw_glGetProgramBinary;
extern pfn_glGetProgramInfoLog qw_glGetProgramInfoLog;
extern pfn_glGetProgramiv qw_glGetProgramiv;
extern pfn_glGetShaderInfoLog qw_glGetShaderInfoLog;
extern pfn_glGetShaderiv qw_glGetShaderiv;
extern pfn_glGetString qw_glGetString;
extern pfn_glGetStringi qw_glGetStringi;
extern pfn_glGetUniformLocation qw_glGetUniformLocation;
extern pfn_glLinkProgram qw_glLinkProgram;
extern pfn_glPixelStorei qw_glPixelStorei;
extern pfn_glProgramBinary qw_glProgramBinary;
extern pfn_glShaderSource qw_glShaderSource;
extern pfn_glTexImage2D qw_glTexImage2D;
extern pfn_glTexImage3D qw_glTexImage3D;
extern pfn_glTexParameteri qw_glTexParameteri;
extern pfn_glUniform1i qw_glUniform1i;
extern pfn_glUniform2f qw_glUniform2f;
extern pfn_glUniform2fv qw_glUniform2fv;
extern pfn_glUniform3f qw_glUniform3f;
extern pfn_glUniform3fv qw_glUniform3fv;
extern pfn_glUniform4f qw_glUniform4f;
extern pfn_glUniform4fv qw_glUniform4fv;
extern pfn_glUniformMatrix4fv qw_glUniformMatrix4fv;
extern pfn_glUseProgram qw_glUseProgram;
extern pfn_glVertexAttribPointer qw_glVertexAttribPointer;
extern pfn_glViewport qw_glViewport;

static void qw_gl_log_error(char const *const f) {
  if (qw_glGetError == NULL) {
    printf("glGetError not found.\n");
    return;
  }
  GLenum e = qw_glGetError();
  if (e != GL_NO_ERROR)
    printf("%s failed: ", f);
  switch (e) {
    case GL_NO_ERROR:                                                                  break;
    case GL_INVALID_ENUM:                  printf("Invalid enum.\n");                  break;
    case GL_INVALID_VALUE:                 printf("Invalid value.\n");                 break;
    case GL_INVALID_OPERATION:             printf("Invalid operation.\n");             break;
    case GL_INVALID_FRAMEBUFFER_OPERATION: printf("Invalid framebuffer operation.\n"); break;
    case GL_OUT_OF_MEMORY:                 printf("Out of memory.\n");                 break;
    case GL_STACK_UNDERFLOW:               printf("Stack underflow.\n");               break;
    case GL_STACK_OVERFLOW:                printf("Stack overflow.\n");                break;
    default:                               printf("Unknown error: %d\n", (int) e);
  }
}

static void qwlog_glAttachShader(GLuint program, GLuint shader){
  if (qw_glAttachShader == NULL) {
    printf("glAttachShader not found.\n");
  } else {
    qw_glAttachShader(program, shader);
    qw_gl_log_error("glAttachShader");
  }
}
static void qwlog_glBindAttribLocation(GLuint program, GLuint index, const GLchar *name){
  if (qw_glBindAttribLocation == NULL) {
    printf("glBindAttribLocation not found.\n");
  } else {
    qw_glBindAttribLocation(program, index, name);
    qw_gl_log_error("glBindAttribLocation");
  }
}
static void qwlog_glBindBuffer(GLenum target, GLuint buffer){
  if (qw_glBindBuffer == NULL) {
    printf("glBindBuffer not found.\n");
  } else {
    qw_glBindBuffer(target, buffer);
    qw_gl_log_error("glBindBuffer");
  }
}
static void qwlog_glBindFramebuffer(GLenum target, GLuint framebuffer){
  if (qw_glBindFramebuffer == NULL) {
    printf("glBindFramebuffer not found.\n");
  } else {
    qw_glBindFramebuffer(target, framebuffer);
    qw_gl_log_error("glBindFramebuffer");
  }
}
static void qwlog_glBindTexture(GLenum target, GLuint texture){
  if (qw_glBindTexture == NULL) {
    printf("glBindTexture not found.\n");
  } else {
    qw_glBindTexture(target, texture);
    qw_gl_log_error("glBindTexture");
  }
}
static void qwlog_glBindVertexArray(GLuint array){
  if (qw_glBindVertexArray == NULL) {
    printf("glBindVertexArray not found.\n");
  } else {
    qw_glBindVertexArray(array);
    qw_gl_log_error("glBindVertexArray");
  }
}
static void qwlog_glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){
  if (qw_glBlendColor == NULL) {
    printf("glBlendColor not found.\n");
  } else {
    qw_glBlendColor(red, green, blue, alpha);
    qw_gl_log_error("glBlendColor");
  }
}
static void qwlog_glBlendEquation(GLenum mode){
  if (qw_glBlendEquation == NULL) {
    printf("glBlendEquation not found.\n");
  } else {
    qw_glBlendEquation(mode);
    qw_gl_log_error("glBlendEquation");
  }
}
static void qwlog_glBlendFunc(GLenum sfactor, GLenum dfactor){
  if (qw_glBlendFunc == NULL) {
    printf("glBlendFunc not found.\n");
  } else {
    qw_glBlendFunc(sfactor, dfactor);
    qw_gl_log_error("glBlendFunc");
  }
}
static void qwlog_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha){
  if (qw_glBlendFuncSeparate == NULL) {
    printf("glBlendFuncSeparate not found.\n");
  } else {
    qw_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    qw_gl_log_error("glBlendFuncSeparate");
  }
}
static void qwlog_glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage){
  if (qw_glBufferData == NULL) {
    printf("glBufferData not found.\n");
  } else {
    qw_glBufferData(target, size, data, usage);
    qw_gl_log_error("glBufferData");
  }
}
static void qwlog_glClear(GLbitfield mask){
  if (qw_glClear == NULL) {
    printf("glClear not found.\n");
  } else {
    qw_glClear(mask);
    qw_gl_log_error("glClear");
  }
}
static void qwlog_glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){
  if (qw_glClearColor == NULL) {
    printf("glClearColor not found.\n");
  } else {
    qw_glClearColor(red, green, blue, alpha);
    qw_gl_log_error("glClearColor");
  }
}
static void qwlog_glClearDepthf(GLfloat d){
  if (qw_glClearDepthf == NULL) {
    printf("glClearDepthf not found.\n");
  } else {
    qw_glClearDepthf(d);
    qw_gl_log_error("glClearDepthf");
  }
}
static void qwlog_glCompileShader(GLuint shader){
  if (qw_glCompileShader == NULL) {
    printf("glCompileShader not found.\n");
  } else {
    qw_glCompileShader(shader);
    qw_gl_log_error("glCompileShader");
  }
}
static GLuint qwlog_glCreateProgram(void){
  GLuint result;
  memset(&result, 0, sizeof result);
  if (qw_glCreateProgram == NULL) {
    printf("glCreateProgram not found.\n");
  } else {
    result = qw_glCreateProgram();
    qw_gl_log_error("glCreateProgram");
  }
  return result;
}
static GLuint qwlog_glCreateShader(GLenum type){
  GLuint result;
  memset(&result, 0, sizeof result);
  if (qw_glCreateShader == NULL) {
    printf("glCreateShader not found.\n");
  } else {
    result = qw_glCreateShader(type);
    qw_gl_log_error("glCreateShader");
  }
  return result;
}
static void qwlog_glDeleteBuffers(GLsizei n, const GLuint *buffers){
  if (qw_glDeleteBuffers == NULL) {
    printf("glDeleteBuffers not found.\n");
  } else {
    qw_glDeleteBuffers(n, buffers);
    qw_gl_log_error("glDeleteBuffers");
  }
}
static void qwlog_glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers){
  if (qw_glDeleteFramebuffers == NULL) {
    printf("glDeleteFramebuffers not found.\n");
  } else {
    qw_glDeleteFramebuffers(n, framebuffers);
    qw_gl_log_error("glDeleteFramebuffers");
  }
}
static void qwlog_glDeleteProgram(GLuint program){
  if (qw_glDeleteProgram == NULL) {
    printf("glDeleteProgram not found.\n");
  } else {
    qw_glDeleteProgram(program);
    qw_gl_log_error("glDeleteProgram");
  }
}
static void qwlog_glDeleteShader(GLuint shader){
  if (qw_glDeleteShader == NULL) {
    printf("glDeleteShader not found.\n");
  } else {
    qw_glDeleteShader(shader);
    qw_gl_log_error("glDeleteShader");
  }
}
static void qwlog_glDeleteTextures(GLsizei n, const GLuint *textures){
  if (qw_glDeleteTextures == NULL) {
    printf("glDeleteTextures not found.\n");
  } else {
    qw_glDeleteTextures(n, textures);
    qw_gl_log_error("glDeleteTextures");
  }
}
static void qwlog_glDeleteVertexArrays(GLsizei n, const GLuint *arrays){
  if (qw_glDeleteVertexArrays == NULL) {
    printf("glDeleteVertexArrays not found.\n");
  } else {
    qw_glDeleteVertexArrays(n, arrays);
    qw_gl_log_error("glDeleteVertexArrays");
  }
}
static void qwlog_glDisable(GLenum cap){
  if (qw_glDisable == NULL) {
    printf("glDisable not found.\n");
  } else {
    qw_glDisable(cap);
    qw_gl_log_error("glDisable");
  }
}
static void qwlog_glDisableVertexAttribArray(GLuint index){
  if (qw_glDisableVertexAttribArray == NULL) {
    printf("glDisableVertexAttribArray not found.\n");
  } else {
    qw_glDisableVertexAttribArray(index);
    qw_gl_log_error("glDisableVertexAttribArray");
  }
}
static void qwlog_glDrawArrays(GLenum mode, GLint first, GLsizei count){
  if (qw_glDrawArrays == NULL) {
    printf("glDrawArrays not found.\n");
  } else {
    qw_glDrawArrays(mode, first, count);
    qw_gl_log_error("glDrawArrays");
  }
}
static void qwlog_glEnable(GLenum cap){
  if (qw_glEnable == NULL) {
    printf("glEnable not found.\n");
  } else {
    qw_glEnable(cap);
    qw_gl_log_error("glEnable");
  }
}
static void qwlog_glEnableVertexAttribArray(GLuint index){
  if (qw_glEnableVertexAttribArray == NULL) {
    printf("glEnableVertexAttribArray not found.\n");
  } else {
    qw_glEnableVertexAttribArray(index);
    qw_gl_log_error("glEnableVertexAttribArray");
  }
}
static void qwlog_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){
  if (qw_glFramebufferTexture2D == NULL) {
    printf("glFramebufferTexture2D not found.\n");
  } else {
    qw_glFramebufferTexture2D(target, attachment, textarget, texture, level);
    qw_gl_log_error("glFramebufferTexture2D");
  }
}
static void qwlog_glGenBuffers(GLsizei n, GLuint *buffers){
  if (qw_glGenBuffers == NULL) {
    printf("glGenBuffers not found.\n");
  } else {
    qw_glGenBuffers(n, buffers);
    qw_gl_log_error("glGenBuffers");
  }
}
static void qwlog_glGenFramebuffers(GLsizei n, GLuint *framebuffers){
  if (qw_glGenFramebuffers == NULL) {
    printf("glGenFramebuffers not found.\n");
  } else {
    qw_glGenFramebuffers(n, framebuffers);
    qw_gl_log_error("glGenFramebuffers");
  }
}
static void qwlog_glGenTextures(GLsizei n, GLuint *textures){
  if (qw_glGenTextures == NULL) {
    printf("glGenTextures not found.\n");
  } else {
    qw_glGenTextures(n, textures);
    qw_gl_log_error("glGenTextures");
  }
}
static void qwlog_glGenVertexArrays(GLsizei n, GLuint *arrays){
  if (qw_glGenVertexArrays == NULL) {
    printf("glGenVertexArrays not found.\n");
  } else {
    qw_glGenVertexArrays(n, arrays);
    qw_gl_log_error("glGenVertexArrays");
  }
}
static GLenum qwlog_glGetError(void){
  GLenum result;
  memset(&result, 0, sizeof result);
  if (qw_glGetError == NULL) {
    printf("glGetError not found.\n");
  } else {
    result = qw_glGetError();
    qw_gl_log_error("glGetError");
  }
  return result;
}
static void qwlog_glGetIntegerv(GLenum pname, GLint *data){
  if (qw_glGetIntegerv == NULL) {
    printf("glGetIntegerv not found.\n");
  } else {
    qw_glGetIntegerv(pname, data);
    qw_gl_log_error("glGetIntegerv");
  }
}
static void qwlog_glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary){
  if (qw_glGetProgramBinary == NULL) {
    printf("glGetProgramBinary not found.\n");
  } else {
    qw_glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
    qw_gl_log_error("glGetProgramBinary");
  }
}
static void qwlog_glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog){
  if (qw_glGetProgramInfoLog == NULL) {
    printf("glGetProgramInfoLog not found.\n");
  } else {
    qw_glGetProgramInfoLog(program, bufSize, length, infoLog);
    qw_gl_log_error("glGetProgramInfoLog");
  }
}
static void qwlog_glGetProgramiv(GLuint program, GLenum pname, GLint *params){
  if (qw_glGetProgramiv == NULL) {
    printf("glGetProgramiv not found.\n");
  } else {
    qw_glGetProgramiv(program, pname, params);
    qw_gl_log_error("glGetProgramiv");
  }
}
static void qwlog_glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog){
  if (qw_glGetShaderInfoLog == NULL) {
    printf("glGetShaderInfoLog not found.\n");
  } else {
    qw_glGetShaderInfoLog(shader, bufSize, length, infoLog);
    qw_gl_log_error("glGetShaderInfoLog");
  }
}
static void qwlog_glGetShaderiv(GLuint shader, GLenum pname, GLint *params){
  if (qw_glGetShaderiv == NULL) {
    printf("glGetShaderiv not found.\n");
  } else {
    qw_glGetShaderiv(shader, pname, params);
    qw_gl_log_error("glGetShaderiv");
  }
}
static const GLubyte *qwlog_glGetString(GLenum name){
  const GLubyte *result;
  memset(&result, 0, sizeof result);
  if (qw_glGetString == NULL) {
    printf("glGetString not found.\n");
  } else {
    result = qw_glGetString(name);
    qw_gl_log_error("glGetString");
  }
  return result;
}
static const GLubyte *qwlog_glGetStringi(GLenum name, GLuint index){
  const GLubyte *result;
  memset(&result, 0, sizeof result);
  if (qw_glGetStringi == NULL) {
    printf("glGetStringi not found.\n");
  } else {
    result = qw_glGetStringi(name, index);
    qw_gl_log_error("glGetStringi");
  }
  return result;
}
static GLint qwlog_glGetUniformLocation(GLuint program, const GLchar *name){
  GLint result;
  memset(&result, 0, sizeof result);
  if (qw_glGetUniformLocation == NULL) {
    printf("glGetUniformLocation not found.\n");
  } else {
    result = qw_glGetUniformLocation(program, name);
    qw_gl_log_error("glGetUniformLocation");
  }
  return result;
}
static void qwlog_glLinkProgram(GLuint program){
  if (qw_glLinkProgram == NULL) {
    printf("glLinkProgram not found.\n");
  } else {
    qw_glLinkProgram(program);
    qw_gl_log_error("glLinkProgram");
  }
}
static void qwlog_glPixelStorei(GLenum pname, GLint param){
  if (qw_glPixelStorei == NULL) {
    printf("glPixelStorei not found.\n");
  } else {
    qw_glPixelStorei(pname, param);
    qw_gl_log_error("glPixelStorei");
  }
}
static void qwlog_glProgramBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length){
  if (qw_glProgramBinary == NULL) {
    printf("glProgramBinary not found.\n");
  } else {
    qw_glProgramBinary(program, binaryFormat, binary, length);
    qw_gl_log_error("glProgramBinary");
  }
}
static void qwlog_glShaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length){
  if (qw_glShaderSource == NULL) {
    printf("glShaderSource not found.\n");
  } else {
    qw_glShaderSource(shader, count, string, length);
    qw_gl_log_error("glShaderSource");
  }
}
static void qwlog_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels){
  if (qw_glTexImage2D == NULL) {
    printf("glTexImage2D not found.\n");
  } else {
    qw_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    qw_gl_log_error("glTexImage2D");
  }
}
static void qwlog_glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels){
  if (qw_glTexImage3D == NULL) {
    printf("glTexImage3D not found.\n");
  } else {
    qw_glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
    qw_gl_log_error("glTexImage3D");
  }
}
static void qwlog_glTexParameteri(GLenum target, GLenum pname, GLint param){
  if (qw_glTexParameteri == NULL) {
    printf("glTexParameteri not found.\n");
  } else {
    qw_glTexParameteri(target, pname, param);
    qw_gl_log_error("glTexParameteri");
  }
}
static void qwlog_glUniform1i(GLint location, GLint v0){
  if (qw_glUniform1i == NULL) {
    printf("glUniform1i not found.\n");
  } else {
    qw_glUniform1i(location, v0);
    qw_gl_log_error("glUniform1i");
  }
}
static void qwlog_glUniform2f(GLint location, GLfloat v0, GLfloat v1){
  if (qw_glUniform2f == NULL) {
    printf("glUniform2f not found.\n");
  } else {
    qw_glUniform2f(location, v0, v1);
    qw_gl_log_error("glUniform2f");
  }
}
static void qwlog_glUniform2fv(GLint location, GLsizei count, const GLfloat *value){
  if (qw_glUniform2fv == NULL) {
    printf("glUniform2fv not found.\n");
  } else {
    qw_glUniform2fv(location, count, value);
    qw_gl_log_error("glUniform2fv");
  }
}
static void qwlog_glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2){
  if (qw_glUniform3f == NULL) {
    printf("glUniform3f not found.\n");
  } else {
    qw_glUniform3f(location, v0, v1, v2);
    qw_gl_log_error("glUniform3f");
  }
}
static void qwlog_glUniform3fv(GLint location, GLsizei count, const GLfloat *value){
  if (qw_glUniform3fv == NULL) {
    printf("glUniform3fv not found.\n");
  } else {
    qw_glUniform3fv(location, count, value);
    qw_gl_log_error("glUniform3fv");
  }
}
static void qwlog_glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){
  if (qw_glUniform4f == NULL) {
    printf("glUniform4f not found.\n");
  } else {
    qw_glUniform4f(location, v0, v1, v2, v3);
    qw_gl_log_error("glUniform4f");
  }
}
static void qwlog_glUniform4fv(GLint location, GLsizei count, const GLfloat *value){
  if (qw_glUniform4fv == NULL) {
    printf("glUniform4fv not found.\n");
  } else {
    qw_glUniform4fv(location, count, value);
    qw_gl_log_error("glUniform4fv");
  }
}
static void qwlog_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){
  if (qw_glUniformMatrix4fv == NULL) {
    printf("glUniformMatrix4fv not found.\n");
  } else {
    qw_glUniformMatrix4fv(location, count, transpose, value);
    qw_gl_log_error("glUniformMatrix4fv");
  }
}
static void qwlog_glUseProgram(GLuint program){
  if (qw_glUseProgram == NULL) {
    printf("glUseProgram not found.\n");
  } else {
    qw_glUseProgram(program);
    qw_gl_log_error("glUseProgram");
  }
}
static void qwlog_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer){
  if (qw_glVertexAttribPointer == NULL) {
    printf("glVertexAttribPointer not found.\n");
  } else {
    qw_glVertexAttribPointer(index, size, type, normalized, stride, pointer);
    qw_gl_log_error("glVertexAttribPointer");
  }
}
static void qwlog_glViewport(GLint x, GLint y, GLsizei width, GLsizei height){
  if (qw_glViewport == NULL) {
    printf("glViewport not found.\n");
  } else {
    qw_glViewport(x, y, width, height);
    qw_gl_log_error("glViewport");
  }
}

#endif
