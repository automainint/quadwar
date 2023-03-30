#ifndef QUADWAR_GL_DECLS_INL_H
#define QUADWAR_GL_DECLS_INL_H

#include "types.inl.h"

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
typedef void (GL_API *pfn_glGetProgramBinary)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (GL_API *pfn_glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GL_API *pfn_glGetProgramiv)(GLuint program, GLenum pname, GLint *params);
typedef void (GL_API *pfn_glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GL_API *pfn_glGetShaderiv)(GLuint shader, GLenum pname, GLint *params);
typedef const GLubyte *(GL_API *pfn_glGetString)(GLenum name);
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
extern pfn_glGetProgramBinary qw_glGetProgramBinary;
extern pfn_glGetProgramInfoLog qw_glGetProgramInfoLog;
extern pfn_glGetProgramiv qw_glGetProgramiv;
extern pfn_glGetShaderInfoLog qw_glGetShaderInfoLog;
extern pfn_glGetShaderiv qw_glGetShaderiv;
extern pfn_glGetString qw_glGetString;
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

#endif
