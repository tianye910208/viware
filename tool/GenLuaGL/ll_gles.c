#include "vi_sys.h"
#include "vi_lua.h"
#ifdef VI3D_SYS_WIN
#include <malloc.h>
#endif

//void glActiveTexture(GLenum texture)
static int _llfunc_glActiveTexture(lua_State* L) {
    GLenum texture = (GLenum)luaL_checkinteger(L, 1);

    glActiveTexture(texture);

    return 0;
}

//void glAttachShader(GLuint program, GLuint shader)
static int _llfunc_glAttachShader(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLuint shader = (GLuint)luaL_checkinteger(L, 2);

    glAttachShader(program, shader);

    return 0;
}

//void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
static int _llfunc_glBindAttribLocation(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLuint index = (GLuint)luaL_checkinteger(L, 2);
    const GLchar * name = (const GLchar *)luaL_checkstring(L, 3);

    glBindAttribLocation(program, index, name);

    return 0;
}

//void glBindBuffer(GLenum target, GLuint buffer)
static int _llfunc_glBindBuffer(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLuint buffer = (GLuint)luaL_checkinteger(L, 2);

    glBindBuffer(target, buffer);

    return 0;
}

//void glBindFramebuffer(GLenum target, GLuint framebuffer)
static int _llfunc_glBindFramebuffer(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLuint framebuffer = (GLuint)luaL_checkinteger(L, 2);

    glBindFramebuffer(target, framebuffer);

    return 0;
}

//void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
static int _llfunc_glBindRenderbuffer(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLuint renderbuffer = (GLuint)luaL_checkinteger(L, 2);

    glBindRenderbuffer(target, renderbuffer);

    return 0;
}

//void glBindTexture(GLenum target, GLuint texture)
static int _llfunc_glBindTexture(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLuint texture = (GLuint)luaL_checkinteger(L, 2);

    glBindTexture(target, texture);

    return 0;
}

//void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
static int _llfunc_glBlendColor(lua_State* L) {
    GLclampf red = (GLclampf)luaL_checknumber(L, 1);
    GLclampf green = (GLclampf)luaL_checknumber(L, 2);
    GLclampf blue = (GLclampf)luaL_checknumber(L, 3);
    GLclampf alpha = (GLclampf)luaL_checknumber(L, 4);

    glBlendColor(red, green, blue, alpha);

    return 0;
}

//void glBlendEquation(GLenum mode)
static int _llfunc_glBlendEquation(lua_State* L) {
    GLenum mode = (GLenum)luaL_checkinteger(L, 1);

    glBlendEquation(mode);

    return 0;
}

//void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
static int _llfunc_glBlendEquationSeparate(lua_State* L) {
    GLenum modeRGB = (GLenum)luaL_checkinteger(L, 1);
    GLenum modeAlpha = (GLenum)luaL_checkinteger(L, 2);

    glBlendEquationSeparate(modeRGB, modeAlpha);

    return 0;
}

//void glBlendFunc(GLenum sfactor, GLenum dfactor)
static int _llfunc_glBlendFunc(lua_State* L) {
    GLenum sfactor = (GLenum)luaL_checkinteger(L, 1);
    GLenum dfactor = (GLenum)luaL_checkinteger(L, 2);

    glBlendFunc(sfactor, dfactor);

    return 0;
}

//void glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
static int _llfunc_glBlendFuncSeparate(lua_State* L) {
    GLenum srcRGB = (GLenum)luaL_checkinteger(L, 1);
    GLenum dstRGB = (GLenum)luaL_checkinteger(L, 2);
    GLenum srcAlpha = (GLenum)luaL_checkinteger(L, 3);
    GLenum dstAlpha = (GLenum)luaL_checkinteger(L, 4);

    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);

    return 0;
}

//void glBufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage)
static int _llfunc_glBufferData(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLsizeiptr size = (GLsizeiptr)luaL_checkinteger(L, 2);
    const GLvoid * data = (const GLvoid *)luaL_checkstring(L, 3);
    GLenum usage = (GLenum)luaL_checkinteger(L, 4);

    glBufferData(target, size, data, usage);

    return 0;
}

//void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data)
static int _llfunc_glBufferSubData(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLintptr offset = (GLintptr)luaL_checkinteger(L, 2);
    GLsizeiptr size = (GLsizeiptr)luaL_checkinteger(L, 3);
    const GLvoid * data = (const GLvoid *)luaL_checkstring(L, 4);

    glBufferSubData(target, offset, size, data);

    return 0;
}

//GLenum glCheckFramebufferStatus(GLenum target)
static int _llfunc_glCheckFramebufferStatus(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);

    GLenum _ll_ret = glCheckFramebufferStatus(target);

    lua_pushinteger(L, (lua_Integer)_ll_ret);
    return 1;
}

//void glClear(GLbitfield mask)
static int _llfunc_glClear(lua_State* L) {
    GLbitfield mask = (GLbitfield)luaL_checkinteger(L, 1);

    glClear(mask);

    return 0;
}

//void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
static int _llfunc_glClearColor(lua_State* L) {
    GLclampf red = (GLclampf)luaL_checknumber(L, 1);
    GLclampf green = (GLclampf)luaL_checknumber(L, 2);
    GLclampf blue = (GLclampf)luaL_checknumber(L, 3);
    GLclampf alpha = (GLclampf)luaL_checknumber(L, 4);

    glClearColor(red, green, blue, alpha);

    return 0;
}

//void glClearDepthf(GLclampf depth)
static int _llfunc_glClearDepthf(lua_State* L) {
    GLclampf depth = (GLclampf)luaL_checknumber(L, 1);

    glClearDepthf(depth);

    return 0;
}

//void glClearStencil(GLint s)
static int _llfunc_glClearStencil(lua_State* L) {
    GLint s = (GLint)luaL_checkinteger(L, 1);

    glClearStencil(s);

    return 0;
}

//void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
static int _llfunc_glColorMask(lua_State* L) {
    GLboolean red = (GLboolean)lua_toboolean(L, 1);
    GLboolean green = (GLboolean)lua_toboolean(L, 2);
    GLboolean blue = (GLboolean)lua_toboolean(L, 3);
    GLboolean alpha = (GLboolean)lua_toboolean(L, 4);

    glColorMask(red, green, blue, alpha);

    return 0;
}

//void glCompileShader(GLuint shader)
static int _llfunc_glCompileShader(lua_State* L) {
    GLuint shader = (GLuint)luaL_checkinteger(L, 1);

    glCompileShader(shader);

    return 0;
}

//void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data)
static int _llfunc_glCompressedTexImage2D(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLint level = (GLint)luaL_checkinteger(L, 2);
    GLenum internalformat = (GLenum)luaL_checkinteger(L, 3);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 4);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 5);
    GLint border = (GLint)luaL_checkinteger(L, 6);
    GLsizei imageSize = (GLsizei)luaL_checkinteger(L, 7);
    const GLvoid * data = (const GLvoid *)luaL_checkstring(L, 8);

    glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);

    return 0;
}

//void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data)
static int _llfunc_glCompressedTexSubImage2D(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLint level = (GLint)luaL_checkinteger(L, 2);
    GLint xoffset = (GLint)luaL_checkinteger(L, 3);
    GLint yoffset = (GLint)luaL_checkinteger(L, 4);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 5);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 6);
    GLenum format = (GLenum)luaL_checkinteger(L, 7);
    GLsizei imageSize = (GLsizei)luaL_checkinteger(L, 8);
    const GLvoid * data = (const GLvoid *)luaL_checkstring(L, 9);

    glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);

    return 0;
}

//void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
static int _llfunc_glCopyTexImage2D(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLint level = (GLint)luaL_checkinteger(L, 2);
    GLenum internalformat = (GLenum)luaL_checkinteger(L, 3);
    GLint x = (GLint)luaL_checkinteger(L, 4);
    GLint y = (GLint)luaL_checkinteger(L, 5);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 6);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 7);
    GLint border = (GLint)luaL_checkinteger(L, 8);

    glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);

    return 0;
}

//void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
static int _llfunc_glCopyTexSubImage2D(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLint level = (GLint)luaL_checkinteger(L, 2);
    GLint xoffset = (GLint)luaL_checkinteger(L, 3);
    GLint yoffset = (GLint)luaL_checkinteger(L, 4);
    GLint x = (GLint)luaL_checkinteger(L, 5);
    GLint y = (GLint)luaL_checkinteger(L, 6);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 7);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 8);

    glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);

    return 0;
}

//GLuint glCreateProgram(
static int _llfunc_glCreateProgram(lua_State* L) {

    GLuint _ll_ret = glCreateProgram();

    lua_pushinteger(L, (lua_Integer)_ll_ret);
    return 1;
}

//GLuint glCreateShader(GLenum shaderType)
static int _llfunc_glCreateShader(lua_State* L) {
    GLenum shaderType = (GLenum)luaL_checkinteger(L, 1);

    GLuint _ll_ret = glCreateShader(shaderType);

    lua_pushinteger(L, (lua_Integer)_ll_ret);
    return 1;
}

//void glCullFace(GLenum mode)
static int _llfunc_glCullFace(lua_State* L) {
    GLenum mode = (GLenum)luaL_checkinteger(L, 1);

    glCullFace(mode);

    return 0;
}

//void glDeleteBuffers(GLsizei n, const GLuint * buffers)
static int _llfunc_glDeleteBuffers(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLuint *buffers = (GLuint *)alloca(sizeof(GLuint)*_ll_tabn);
#else
    GLuint buffers[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        buffers[i] = (GLuint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glDeleteBuffers(n, (const GLuint *)buffers);

    return 0;
}

//void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
static int _llfunc_glDeleteFramebuffers(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLuint *framebuffers = (GLuint *)alloca(sizeof(GLuint)*_ll_tabn);
#else
    GLuint framebuffers[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        framebuffers[i] = (GLuint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glDeleteFramebuffers(n, (const GLuint *)framebuffers);

    return 0;
}

//void glDeleteProgram(GLuint program)
static int _llfunc_glDeleteProgram(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);

    glDeleteProgram(program);

    return 0;
}

//void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
static int _llfunc_glDeleteRenderbuffers(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLuint *renderbuffers = (GLuint *)alloca(sizeof(GLuint)*_ll_tabn);
#else
    GLuint renderbuffers[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        renderbuffers[i] = (GLuint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glDeleteRenderbuffers(n, (const GLuint *)renderbuffers);

    return 0;
}

//void glDeleteShader(GLuint shader)
static int _llfunc_glDeleteShader(lua_State* L) {
    GLuint shader = (GLuint)luaL_checkinteger(L, 1);

    glDeleteShader(shader);

    return 0;
}

//void glDeleteTextures(GLsizei n, const GLuint * textures)
static int _llfunc_glDeleteTextures(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLuint *textures = (GLuint *)alloca(sizeof(GLuint)*_ll_tabn);
#else
    GLuint textures[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        textures[i] = (GLuint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glDeleteTextures(n, (const GLuint *)textures);

    return 0;
}

//void glDepthFunc(GLenum func)
static int _llfunc_glDepthFunc(lua_State* L) {
    GLenum func = (GLenum)luaL_checkinteger(L, 1);

    glDepthFunc(func);

    return 0;
}

//void glDepthMask(GLboolean flag)
static int _llfunc_glDepthMask(lua_State* L) {
    GLboolean flag = (GLboolean)lua_toboolean(L, 1);

    glDepthMask(flag);

    return 0;
}

//void glDepthRangef(GLclampf nearVal, GLclampf farVal)
static int _llfunc_glDepthRangef(lua_State* L) {
    GLclampf nearVal = (GLclampf)luaL_checknumber(L, 1);
    GLclampf farVal = (GLclampf)luaL_checknumber(L, 2);

    glDepthRangef(nearVal, farVal);

    return 0;
}

//void glDetachShader(GLuint program, GLuint shader)
static int _llfunc_glDetachShader(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLuint shader = (GLuint)luaL_checkinteger(L, 2);

    glDetachShader(program, shader);

    return 0;
}

//void glDrawArrays(GLenum mode, GLint first, GLsizei count)
static int _llfunc_glDrawArrays(lua_State* L) {
    GLenum mode = (GLenum)luaL_checkinteger(L, 1);
    GLint first = (GLint)luaL_checkinteger(L, 2);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 3);

    glDrawArrays(mode, first, count);

    return 0;
}

//void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices)
static int _llfunc_glDrawElements(lua_State* L) {
    GLenum mode = (GLenum)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    GLenum type = (GLenum)luaL_checkinteger(L, 3);
    const GLvoid * indices = (const GLvoid *)luaL_checkstring(L, 4);

    glDrawElements(mode, count, type, indices);

    return 0;
}

//void glEnable(GLenum cap)
static int _llfunc_glEnable(lua_State* L) {
    GLenum cap = (GLenum)luaL_checkinteger(L, 1);

    glEnable(cap);

    return 0;
}

//void glDisable(GLenum cap)
static int _llfunc_glDisable(lua_State* L) {
    GLenum cap = (GLenum)luaL_checkinteger(L, 1);

    glDisable(cap);

    return 0;
}

//void glEnableVertexAttribArray(GLuint index)
static int _llfunc_glEnableVertexAttribArray(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);

    glEnableVertexAttribArray(index);

    return 0;
}

//void glDisableVertexAttribArray(GLuint index)
static int _llfunc_glDisableVertexAttribArray(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);

    glDisableVertexAttribArray(index);

    return 0;
}

//void glFinish(
static int _llfunc_glFinish(lua_State* L) {

    glFinish();

    return 0;
}

//void glFlush(
static int _llfunc_glFlush(lua_State* L) {

    glFlush();

    return 0;
}

//void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
static int _llfunc_glFramebufferRenderbuffer(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum attachment = (GLenum)luaL_checkinteger(L, 2);
    GLenum renderbuffertarget = (GLenum)luaL_checkinteger(L, 3);
    GLuint renderbuffer = (GLuint)luaL_checkinteger(L, 4);

    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);

    return 0;
}

//void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
static int _llfunc_glFramebufferTexture2D(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum attachment = (GLenum)luaL_checkinteger(L, 2);
    GLenum textarget = (GLenum)luaL_checkinteger(L, 3);
    GLuint texture = (GLuint)luaL_checkinteger(L, 4);
    GLint level = (GLint)luaL_checkinteger(L, 5);

    glFramebufferTexture2D(target, attachment, textarget, texture, level);

    return 0;
}

//void glFrontFace(GLenum mode)
static int _llfunc_glFrontFace(lua_State* L) {
    GLenum mode = (GLenum)luaL_checkinteger(L, 1);

    glFrontFace(mode);

    return 0;
}

//void glGenBuffers(GLsizei n, GLuint * buffers)
static int _llfunc_glGenBuffers(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    
#ifdef VI3D_SYS_WIN
    GLuint *buffers = (GLuint *)alloca(sizeof(GLuint)*n);
#else
    GLuint buffers[n];
#endif

    glGenBuffers(n, buffers);

    lua_newtable(L);
    for(int i = 0; i < n; i ++) {
        lua_pushinteger(L, (lua_Integer)buffers[i]);
        lua_rawseti(L, -2, i+1);
    }
    return 1;
}

//void glGenerateMipmap(GLenum target)
static int _llfunc_glGenerateMipmap(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);

    glGenerateMipmap(target);

    return 0;
}

//void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
static int _llfunc_glGenFramebuffers(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    
#ifdef VI3D_SYS_WIN
    GLuint *framebuffers = (GLuint *)alloca(sizeof(GLuint)*n);
#else
    GLuint framebuffers[n];
#endif

    glGenFramebuffers(n, framebuffers);

    lua_newtable(L);
    for(int i = 0; i < n; i ++) {
        lua_pushinteger(L, (lua_Integer)framebuffers[i]);
        lua_rawseti(L, -2, i+1);
    }
    return 1;
}

//void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
static int _llfunc_glGenRenderbuffers(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    
#ifdef VI3D_SYS_WIN
    GLuint *renderbuffers = (GLuint *)alloca(sizeof(GLuint)*n);
#else
    GLuint renderbuffers[n];
#endif

    glGenRenderbuffers(n, renderbuffers);

    lua_newtable(L);
    for(int i = 0; i < n; i ++) {
        lua_pushinteger(L, (lua_Integer)renderbuffers[i]);
        lua_rawseti(L, -2, i+1);
    }
    return 1;
}

//void glGenTextures(GLsizei n, GLuint * textures)
static int _llfunc_glGenTextures(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    
#ifdef VI3D_SYS_WIN
    GLuint *textures = (GLuint *)alloca(sizeof(GLuint)*n);
#else
    GLuint textures[n];
#endif

    glGenTextures(n, textures);

    lua_newtable(L);
    for(int i = 0; i < n; i ++) {
        lua_pushinteger(L, (lua_Integer)textures[i]);
        lua_rawseti(L, -2, i+1);
    }
    return 1;
}

//void glGetBooleanv(GLenum pname, GLboolean * params)
static int _llfunc_glGetBooleanv(lua_State* L) {
    GLenum pname = (GLenum)luaL_checkinteger(L, 1);
    GLboolean params;

    glGetBooleanv(pname, &params);

    lua_pushboolean(L, (int)params);
    return 1;
}

//void glGetFloatv(GLenum pname, GLfloat * params)
static int _llfunc_glGetFloatv(lua_State* L) {
    GLenum pname = (GLenum)luaL_checkinteger(L, 1);
    GLfloat params;

    glGetFloatv(pname, &params);

    lua_pushnumber(L, (lua_Number)params);
    return 1;
}

//void glGetIntegerv(GLenum pname, GLint * params)
static int _llfunc_glGetIntegerv(lua_State* L) {
    GLenum pname = (GLenum)luaL_checkinteger(L, 1);
    GLint params;

    glGetIntegerv(pname, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
static int _llfunc_glGetActiveAttrib(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLuint index = (GLuint)luaL_checkinteger(L, 2);
    GLsizei bufSize = (GLsizei)luaL_checkinteger(L, 3);
    GLsizei length;
    GLint size;
    GLenum type;
    
#ifdef VI3D_SYS_WIN
    GLchar *name = (GLchar *)alloca(sizeof(GLchar)*bufSize);
#else
    GLchar name[bufSize];
#endif

    glGetActiveAttrib(program, index, bufSize, &length, &size, &type, name);

    lua_pushinteger(L, (lua_Integer)length);
    lua_pushinteger(L, (lua_Integer)size);
    lua_pushinteger(L, (lua_Integer)type);
    lua_pushstring(L, (const char*)name);
    return 4;
}

//void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
static int _llfunc_glGetActiveUniform(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLuint index = (GLuint)luaL_checkinteger(L, 2);
    GLsizei bufSize = (GLsizei)luaL_checkinteger(L, 3);
    GLsizei length;
    GLint size;
    GLenum type;
    
#ifdef VI3D_SYS_WIN
    GLchar *name = (GLchar *)alloca(sizeof(GLchar)*bufSize);
#else
    GLchar name[bufSize];
#endif

    glGetActiveUniform(program, index, bufSize, &length, &size, &type, name);

    lua_pushinteger(L, (lua_Integer)length);
    lua_pushinteger(L, (lua_Integer)size);
    lua_pushinteger(L, (lua_Integer)type);
    lua_pushstring(L, (const char*)name);
    return 4;
}

//GLint glGetAttribLocation(GLuint program, const GLchar * name)
static int _llfunc_glGetAttribLocation(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    const GLchar * name = (const GLchar *)luaL_checkstring(L, 2);

    GLint _ll_ret = glGetAttribLocation(program, name);

    lua_pushinteger(L, (lua_Integer)_ll_ret);
    return 1;
}

//void glGetBufferParameteriv(GLenum target, GLenum value, GLint * data)
static int _llfunc_glGetBufferParameteriv(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum value = (GLenum)luaL_checkinteger(L, 2);
    GLint data;

    glGetBufferParameteriv(target, value, &data);

    lua_pushinteger(L, (lua_Integer)data);
    return 1;
}

//GLenum glGetError(
static int _llfunc_glGetError(lua_State* L) {

    GLenum _ll_ret = glGetError();

    lua_pushinteger(L, (lua_Integer)_ll_ret);
    return 1;
}

//void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
static int _llfunc_glGetFramebufferAttachmentParameteriv(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum attachment = (GLenum)luaL_checkinteger(L, 2);
    GLenum pname = (GLenum)luaL_checkinteger(L, 3);
    GLint params;

    glGetFramebufferAttachmentParameteriv(target, attachment, pname, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//void glGetProgramInfoLog(GLuint program, GLsizei maxLength, GLsizei * length, GLchar * infoLog)
static int _llfunc_glGetProgramInfoLog(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLsizei maxLength = (GLsizei)luaL_checkinteger(L, 2);
    GLsizei length;
    
#ifdef VI3D_SYS_WIN
    GLchar *infoLog = (GLchar *)alloca(sizeof(GLchar)*maxLength);
#else
    GLchar infoLog[maxLength];
#endif

    glGetProgramInfoLog(program, maxLength, &length, infoLog);

    lua_pushinteger(L, (lua_Integer)length);
    lua_pushstring(L, (const char*)infoLog);
    return 2;
}

//void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
static int _llfunc_glGetProgramiv(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLint params;

    glGetProgramiv(program, pname, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
static int _llfunc_glGetRenderbufferParameteriv(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLint params;

    glGetRenderbufferParameteriv(target, pname, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//void glGetShaderInfoLog(GLuint shader, GLsizei maxLength, GLsizei * length, GLchar * infoLog)
static int _llfunc_glGetShaderInfoLog(lua_State* L) {
    GLuint shader = (GLuint)luaL_checkinteger(L, 1);
    GLsizei maxLength = (GLsizei)luaL_checkinteger(L, 2);
    GLsizei length;
    
#ifdef VI3D_SYS_WIN
    GLchar *infoLog = (GLchar *)alloca(sizeof(GLchar)*maxLength);
#else
    GLchar infoLog[maxLength];
#endif

    glGetShaderInfoLog(shader, maxLength, &length, infoLog);

    lua_pushinteger(L, (lua_Integer)length);
    lua_pushstring(L, (const char*)infoLog);
    return 2;
}

//void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
static int _llfunc_glGetShaderiv(lua_State* L) {
    GLuint shader = (GLuint)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLint params;

    glGetShaderiv(shader, pname, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//void glGetShaderPrecisionFormat(GLenum shaderType, GLenum precisionType, GLint * range, GLint * precision)
static int _llfunc_glGetShaderPrecisionFormat(lua_State* L) {
    GLenum shaderType = (GLenum)luaL_checkinteger(L, 1);
    GLenum precisionType = (GLenum)luaL_checkinteger(L, 2);
    GLint range;
    GLint precision;

    glGetShaderPrecisionFormat(shaderType, precisionType, &range, &precision);

    lua_pushinteger(L, (lua_Integer)range);
    lua_pushinteger(L, (lua_Integer)precision);
    return 2;
}

//void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
static int _llfunc_glGetShaderSource(lua_State* L) {
    GLuint shader = (GLuint)luaL_checkinteger(L, 1);
    GLsizei bufSize = (GLsizei)luaL_checkinteger(L, 2);
    GLsizei length;
    
#ifdef VI3D_SYS_WIN
    GLchar *source = (GLchar *)alloca(sizeof(GLchar)*bufSize);
#else
    GLchar source[bufSize];
#endif

    glGetShaderSource(shader, bufSize, &length, source);

    lua_pushinteger(L, (lua_Integer)length);
    lua_pushstring(L, (const char*)source);
    return 2;
}

//const GLubyte* glGetString(GLenum name)
static int _llfunc_glGetString(lua_State* L) {
    GLenum name = (GLenum)luaL_checkinteger(L, 1);

    const GLubyte* _ll_ret = glGetString(name);

    lua_pushstring(L, (const char*)_ll_ret);
    return 1;
}

//void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
static int _llfunc_glGetTexParameterfv(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLfloat params;

    glGetTexParameterfv(target, pname, &params);

    lua_pushnumber(L, (lua_Number)params);
    return 1;
}

//void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
static int _llfunc_glGetTexParameteriv(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLint params;

    glGetTexParameteriv(target, pname, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
static int _llfunc_glGetUniformfv(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLint location = (GLint)luaL_checkinteger(L, 2);
    GLfloat params;

    glGetUniformfv(program, location, &params);

    lua_pushnumber(L, (lua_Number)params);
    return 1;
}

//void glGetUniformiv(GLuint program, GLint location, GLint * params)
static int _llfunc_glGetUniformiv(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    GLint location = (GLint)luaL_checkinteger(L, 2);
    GLint params;

    glGetUniformiv(program, location, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//GLint glGetUniformLocation(GLuint program, const GLchar * name)
static int _llfunc_glGetUniformLocation(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);
    const GLchar * name = (const GLchar *)luaL_checkstring(L, 2);

    GLint _ll_ret = glGetUniformLocation(program, name);

    lua_pushinteger(L, (lua_Integer)_ll_ret);
    return 1;
}

//void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
static int _llfunc_glGetVertexAttribfv(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLfloat params;

    glGetVertexAttribfv(index, pname, &params);

    lua_pushnumber(L, (lua_Number)params);
    return 1;
}

//void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
static int _llfunc_glGetVertexAttribiv(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLint params;

    glGetVertexAttribiv(index, pname, &params);

    lua_pushinteger(L, (lua_Integer)params);
    return 1;
}

//void glHint(GLenum target, GLenum mode)
static int _llfunc_glHint(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum mode = (GLenum)luaL_checkinteger(L, 2);

    glHint(target, mode);

    return 0;
}

//GLboolean glIsBuffer(GLuint buffer)
static int _llfunc_glIsBuffer(lua_State* L) {
    GLuint buffer = (GLuint)luaL_checkinteger(L, 1);

    GLboolean _ll_ret = glIsBuffer(buffer);

    lua_pushboolean(L, (int)_ll_ret);
    return 1;
}

//GLboolean glIsEnabled(GLenum cap)
static int _llfunc_glIsEnabled(lua_State* L) {
    GLenum cap = (GLenum)luaL_checkinteger(L, 1);

    GLboolean _ll_ret = glIsEnabled(cap);

    lua_pushboolean(L, (int)_ll_ret);
    return 1;
}

//GLboolean glIsFramebuffer(GLuint framebuffer)
static int _llfunc_glIsFramebuffer(lua_State* L) {
    GLuint framebuffer = (GLuint)luaL_checkinteger(L, 1);

    GLboolean _ll_ret = glIsFramebuffer(framebuffer);

    lua_pushboolean(L, (int)_ll_ret);
    return 1;
}

//GLboolean glIsProgram(GLuint program)
static int _llfunc_glIsProgram(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);

    GLboolean _ll_ret = glIsProgram(program);

    lua_pushboolean(L, (int)_ll_ret);
    return 1;
}

//GLboolean glIsRenderbuffer(GLuint renderbuffer)
static int _llfunc_glIsRenderbuffer(lua_State* L) {
    GLuint renderbuffer = (GLuint)luaL_checkinteger(L, 1);

    GLboolean _ll_ret = glIsRenderbuffer(renderbuffer);

    lua_pushboolean(L, (int)_ll_ret);
    return 1;
}

//GLboolean glIsShader(GLuint shader)
static int _llfunc_glIsShader(lua_State* L) {
    GLuint shader = (GLuint)luaL_checkinteger(L, 1);

    GLboolean _ll_ret = glIsShader(shader);

    lua_pushboolean(L, (int)_ll_ret);
    return 1;
}

//GLboolean glIsTexture(GLuint texture)
static int _llfunc_glIsTexture(lua_State* L) {
    GLuint texture = (GLuint)luaL_checkinteger(L, 1);

    GLboolean _ll_ret = glIsTexture(texture);

    lua_pushboolean(L, (int)_ll_ret);
    return 1;
}

//void glLineWidth(GLfloat width)
static int _llfunc_glLineWidth(lua_State* L) {
    GLfloat width = (GLfloat)luaL_checknumber(L, 1);

    glLineWidth(width);

    return 0;
}

//void glLinkProgram(GLuint program)
static int _llfunc_glLinkProgram(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);

    glLinkProgram(program);

    return 0;
}

//void glPixelStorei(GLenum pname, GLint param)
static int _llfunc_glPixelStorei(lua_State* L) {
    GLenum pname = (GLenum)luaL_checkinteger(L, 1);
    GLint param = (GLint)luaL_checkinteger(L, 2);

    glPixelStorei(pname, param);

    return 0;
}

//void glPolygonOffset(GLfloat factor, GLfloat units)
static int _llfunc_glPolygonOffset(lua_State* L) {
    GLfloat factor = (GLfloat)luaL_checknumber(L, 1);
    GLfloat units = (GLfloat)luaL_checknumber(L, 2);

    glPolygonOffset(factor, units);

    return 0;
}

//void glReleaseShaderCompiler(
static int _llfunc_glReleaseShaderCompiler(lua_State* L) {

    glReleaseShaderCompiler();

    return 0;
}

//void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
static int _llfunc_glRenderbufferStorage(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum internalformat = (GLenum)luaL_checkinteger(L, 2);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 3);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 4);

    glRenderbufferStorage(target, internalformat, width, height);

    return 0;
}

//void glSampleCoverage(GLclampf value, GLboolean invert)
static int _llfunc_glSampleCoverage(lua_State* L) {
    GLclampf value = (GLclampf)luaL_checknumber(L, 1);
    GLboolean invert = (GLboolean)lua_toboolean(L, 2);

    glSampleCoverage(value, invert);

    return 0;
}

//void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
static int _llfunc_glScissor(lua_State* L) {
    GLint x = (GLint)luaL_checkinteger(L, 1);
    GLint y = (GLint)luaL_checkinteger(L, 2);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 3);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 4);

    glScissor(x, y, width, height);

    return 0;
}

//void glShaderBinary(GLsizei n, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
static int _llfunc_glShaderBinary(lua_State* L) {
    GLsizei n = (GLsizei)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLuint *shaders = (GLuint *)alloca(sizeof(GLuint)*_ll_tabn);
#else
    GLuint shaders[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        shaders[i] = (GLuint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }
    GLenum binaryformat = (GLenum)luaL_checkinteger(L, 3);
    const void * binary = (const void *)luaL_checkstring(L, 4);
    GLsizei length = (GLsizei)luaL_checkinteger(L, 5);

    glShaderBinary(n, (const GLuint *)shaders, binaryformat, binary, length);

    return 0;
}

//void glStencilFunc(GLenum func, GLint ref, GLuint mask)
static int _llfunc_glStencilFunc(lua_State* L) {
    GLenum func = (GLenum)luaL_checkinteger(L, 1);
    GLint ref = (GLint)luaL_checkinteger(L, 2);
    GLuint mask = (GLuint)luaL_checkinteger(L, 3);

    glStencilFunc(func, ref, mask);

    return 0;
}

//void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
static int _llfunc_glStencilFuncSeparate(lua_State* L) {
    GLenum face = (GLenum)luaL_checkinteger(L, 1);
    GLenum func = (GLenum)luaL_checkinteger(L, 2);
    GLint ref = (GLint)luaL_checkinteger(L, 3);
    GLuint mask = (GLuint)luaL_checkinteger(L, 4);

    glStencilFuncSeparate(face, func, ref, mask);

    return 0;
}

//void glStencilMask(GLuint mask)
static int _llfunc_glStencilMask(lua_State* L) {
    GLuint mask = (GLuint)luaL_checkinteger(L, 1);

    glStencilMask(mask);

    return 0;
}

//void glStencilMaskSeparate(GLenum face, GLuint mask)
static int _llfunc_glStencilMaskSeparate(lua_State* L) {
    GLenum face = (GLenum)luaL_checkinteger(L, 1);
    GLuint mask = (GLuint)luaL_checkinteger(L, 2);

    glStencilMaskSeparate(face, mask);

    return 0;
}

//void glStencilOp(GLenum sfail, GLenum dpfail, GLenum dppass)
static int _llfunc_glStencilOp(lua_State* L) {
    GLenum sfail = (GLenum)luaL_checkinteger(L, 1);
    GLenum dpfail = (GLenum)luaL_checkinteger(L, 2);
    GLenum dppass = (GLenum)luaL_checkinteger(L, 3);

    glStencilOp(sfail, dpfail, dppass);

    return 0;
}

//void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
static int _llfunc_glStencilOpSeparate(lua_State* L) {
    GLenum face = (GLenum)luaL_checkinteger(L, 1);
    GLenum sfail = (GLenum)luaL_checkinteger(L, 2);
    GLenum dpfail = (GLenum)luaL_checkinteger(L, 3);
    GLenum dppass = (GLenum)luaL_checkinteger(L, 4);

    glStencilOpSeparate(face, sfail, dpfail, dppass);

    return 0;
}

//void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * data)
static int _llfunc_glTexImage2D(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLint level = (GLint)luaL_checkinteger(L, 2);
    GLint internalformat = (GLint)luaL_checkinteger(L, 3);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 4);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 5);
    GLint border = (GLint)luaL_checkinteger(L, 6);
    GLenum format = (GLenum)luaL_checkinteger(L, 7);
    GLenum type = (GLenum)luaL_checkinteger(L, 8);
    const GLvoid * data = (const GLvoid *)luaL_checkstring(L, 9);

    glTexImage2D(target, level, internalformat, width, height, border, format, type, data);

    return 0;
}

//void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
static int _llfunc_glTexParameterf(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLfloat param = (GLfloat)luaL_checknumber(L, 3);

    glTexParameterf(target, pname, param);

    return 0;
}

//void glTexParameteri(GLenum target, GLenum pname, GLint param)
static int _llfunc_glTexParameteri(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    GLint param = (GLint)luaL_checkinteger(L, 3);

    glTexParameteri(target, pname, param);

    return 0;
}

//void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
static int _llfunc_glTexParameterfv(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLfloat *params = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat params[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        params[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glTexParameterfv(target, pname, (const GLfloat *)params);

    return 0;
}

//void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
static int _llfunc_glTexParameteriv(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLenum pname = (GLenum)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLint *params = (GLint *)alloca(sizeof(GLint)*_ll_tabn);
#else
    GLint params[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        params[i] = (GLint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glTexParameteriv(target, pname, (const GLint *)params);

    return 0;
}

//void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * data)
static int _llfunc_glTexSubImage2D(lua_State* L) {
    GLenum target = (GLenum)luaL_checkinteger(L, 1);
    GLint level = (GLint)luaL_checkinteger(L, 2);
    GLint xoffset = (GLint)luaL_checkinteger(L, 3);
    GLint yoffset = (GLint)luaL_checkinteger(L, 4);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 5);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 6);
    GLenum format = (GLenum)luaL_checkinteger(L, 7);
    GLenum type = (GLenum)luaL_checkinteger(L, 8);
    const GLvoid * data = (const GLvoid *)luaL_checkstring(L, 9);

    glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, data);

    return 0;
}

//void glUniform1f(GLint location, GLfloat v0)
static int _llfunc_glUniform1f(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);

    glUniform1f(location, v0);

    return 0;
}

//void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
static int _llfunc_glUniform2f(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);
    GLfloat v1 = (GLfloat)luaL_checknumber(L, 3);

    glUniform2f(location, v0, v1);

    return 0;
}

//void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
static int _llfunc_glUniform3f(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);
    GLfloat v1 = (GLfloat)luaL_checknumber(L, 3);
    GLfloat v2 = (GLfloat)luaL_checknumber(L, 4);

    glUniform3f(location, v0, v1, v2);

    return 0;
}

//void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
static int _llfunc_glUniform4f(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);
    GLfloat v1 = (GLfloat)luaL_checknumber(L, 3);
    GLfloat v2 = (GLfloat)luaL_checknumber(L, 4);
    GLfloat v3 = (GLfloat)luaL_checknumber(L, 5);

    glUniform4f(location, v0, v1, v2, v3);

    return 0;
}

//void glUniform1i(GLint location, GLint v0)
static int _llfunc_glUniform1i(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLint v0 = (GLint)luaL_checkinteger(L, 2);

    glUniform1i(location, v0);

    return 0;
}

//void glUniform2i(GLint location, GLint v0, GLint v1)
static int _llfunc_glUniform2i(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLint v0 = (GLint)luaL_checkinteger(L, 2);
    GLint v1 = (GLint)luaL_checkinteger(L, 3);

    glUniform2i(location, v0, v1);

    return 0;
}

//void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
static int _llfunc_glUniform3i(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLint v0 = (GLint)luaL_checkinteger(L, 2);
    GLint v1 = (GLint)luaL_checkinteger(L, 3);
    GLint v2 = (GLint)luaL_checkinteger(L, 4);

    glUniform3i(location, v0, v1, v2);

    return 0;
}

//void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
static int _llfunc_glUniform4i(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLint v0 = (GLint)luaL_checkinteger(L, 2);
    GLint v1 = (GLint)luaL_checkinteger(L, 3);
    GLint v2 = (GLint)luaL_checkinteger(L, 4);
    GLint v3 = (GLint)luaL_checkinteger(L, 5);

    glUniform4i(location, v0, v1, v2, v3);

    return 0;
}

//void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
static int _llfunc_glUniform1fv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLfloat *value = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glUniform1fv(location, count, (const GLfloat *)value);

    return 0;
}

//void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
static int _llfunc_glUniform2fv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLfloat *value = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glUniform2fv(location, count, (const GLfloat *)value);

    return 0;
}

//void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
static int _llfunc_glUniform3fv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLfloat *value = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glUniform3fv(location, count, (const GLfloat *)value);

    return 0;
}

//void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
static int _llfunc_glUniform4fv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLfloat *value = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glUniform4fv(location, count, (const GLfloat *)value);

    return 0;
}

//void glUniform1iv(GLint location, GLsizei count, const GLint * value)
static int _llfunc_glUniform1iv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLint *value = (GLint *)alloca(sizeof(GLint)*_ll_tabn);
#else
    GLint value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glUniform1iv(location, count, (const GLint *)value);

    return 0;
}

//void glUniform2iv(GLint location, GLsizei count, const GLint * value)
static int _llfunc_glUniform2iv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLint *value = (GLint *)alloca(sizeof(GLint)*_ll_tabn);
#else
    GLint value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glUniform2iv(location, count, (const GLint *)value);

    return 0;
}

//void glUniform3iv(GLint location, GLsizei count, const GLint * value)
static int _llfunc_glUniform3iv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLint *value = (GLint *)alloca(sizeof(GLint)*_ll_tabn);
#else
    GLint value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glUniform3iv(location, count, (const GLint *)value);

    return 0;
}

//void glUniform4iv(GLint location, GLsizei count, const GLint * value)
static int _llfunc_glUniform4iv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    int _ll_tabn = (int)luaL_len(L, 3);
#ifdef VI3D_SYS_WIN
    GLint *value = (GLint *)alloca(sizeof(GLint)*_ll_tabn);
#else
    GLint value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 3, i+1);
        value[i] = (GLint)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    glUniform4iv(location, count, (const GLint *)value);

    return 0;
}

//void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
static int _llfunc_glUniformMatrix2fv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    GLboolean transpose = (GLboolean)lua_toboolean(L, 3);
    int _ll_tabn = (int)luaL_len(L, 4);
#ifdef VI3D_SYS_WIN
    GLfloat *value = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 4, i+1);
        value[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glUniformMatrix2fv(location, count, transpose, (const GLfloat *)value);

    return 0;
}

//void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
static int _llfunc_glUniformMatrix3fv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    GLboolean transpose = (GLboolean)lua_toboolean(L, 3);
    int _ll_tabn = (int)luaL_len(L, 4);
#ifdef VI3D_SYS_WIN
    GLfloat *value = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 4, i+1);
        value[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glUniformMatrix3fv(location, count, transpose, (const GLfloat *)value);

    return 0;
}

//void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
static int _llfunc_glUniformMatrix4fv(lua_State* L) {
    GLint location = (GLint)luaL_checkinteger(L, 1);
    GLsizei count = (GLsizei)luaL_checkinteger(L, 2);
    GLboolean transpose = (GLboolean)lua_toboolean(L, 3);
    int _ll_tabn = (int)luaL_len(L, 4);
#ifdef VI3D_SYS_WIN
    GLfloat *value = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat value[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 4, i+1);
        value[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glUniformMatrix4fv(location, count, transpose, (const GLfloat *)value);

    return 0;
}

//void glUseProgram(GLuint program)
static int _llfunc_glUseProgram(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);

    glUseProgram(program);

    return 0;
}

//void glValidateProgram(GLuint program)
static int _llfunc_glValidateProgram(lua_State* L) {
    GLuint program = (GLuint)luaL_checkinteger(L, 1);

    glValidateProgram(program);

    return 0;
}

//void glVertexAttrib1f(GLuint index, GLfloat v0)
static int _llfunc_glVertexAttrib1f(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);

    glVertexAttrib1f(index, v0);

    return 0;
}

//void glVertexAttrib2f(GLuint index, GLfloat v0, GLfloat v1)
static int _llfunc_glVertexAttrib2f(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);
    GLfloat v1 = (GLfloat)luaL_checknumber(L, 3);

    glVertexAttrib2f(index, v0, v1);

    return 0;
}

//void glVertexAttrib3f(GLuint index, GLfloat v0, GLfloat v1, GLfloat v2)
static int _llfunc_glVertexAttrib3f(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);
    GLfloat v1 = (GLfloat)luaL_checknumber(L, 3);
    GLfloat v2 = (GLfloat)luaL_checknumber(L, 4);

    glVertexAttrib3f(index, v0, v1, v2);

    return 0;
}

//void glVertexAttrib4f(GLuint index, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
static int _llfunc_glVertexAttrib4f(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    GLfloat v0 = (GLfloat)luaL_checknumber(L, 2);
    GLfloat v1 = (GLfloat)luaL_checknumber(L, 3);
    GLfloat v2 = (GLfloat)luaL_checknumber(L, 4);
    GLfloat v3 = (GLfloat)luaL_checknumber(L, 5);

    glVertexAttrib4f(index, v0, v1, v2, v3);

    return 0;
}

//void glVertexAttrib1fv(GLuint index, const GLfloat * v)
static int _llfunc_glVertexAttrib1fv(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLfloat *v = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat v[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        v[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glVertexAttrib1fv(index, (const GLfloat *)v);

    return 0;
}

//void glVertexAttrib2fv(GLuint index, const GLfloat * v)
static int _llfunc_glVertexAttrib2fv(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLfloat *v = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat v[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        v[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glVertexAttrib2fv(index, (const GLfloat *)v);

    return 0;
}

//void glVertexAttrib3fv(GLuint index, const GLfloat * v)
static int _llfunc_glVertexAttrib3fv(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLfloat *v = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat v[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        v[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glVertexAttrib3fv(index, (const GLfloat *)v);

    return 0;
}

//void glVertexAttrib4fv(GLuint index, const GLfloat * v)
static int _llfunc_glVertexAttrib4fv(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    int _ll_tabn = (int)luaL_len(L, 2);
#ifdef VI3D_SYS_WIN
    GLfloat *v = (GLfloat *)alloca(sizeof(GLfloat)*_ll_tabn);
#else
    GLfloat v[_ll_tabn];
#endif
    for(int i = 0; i < _ll_tabn; i++) {
        lua_rawgeti(L, 2, i+1);
        v[i] = (GLfloat)luaL_checknumber(L, -1);
        lua_pop(L, 1);
    }

    glVertexAttrib4fv(index, (const GLfloat *)v);

    return 0;
}

//void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
static int _llfunc_glVertexAttribPointer(lua_State* L) {
    GLuint index = (GLuint)luaL_checkinteger(L, 1);
    GLint size = (GLint)luaL_checkinteger(L, 2);
    GLenum type = (GLenum)luaL_checkinteger(L, 3);
    GLboolean normalized = (GLboolean)lua_toboolean(L, 4);
    GLsizei stride = (GLsizei)luaL_checkinteger(L, 5);
    const GLvoid * pointer = (const GLvoid *)luaL_checkstring(L, 6);

    glVertexAttribPointer(index, size, type, normalized, stride, pointer);

    return 0;
}

//void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
static int _llfunc_glViewport(lua_State* L) {
    GLint x = (GLint)luaL_checkinteger(L, 1);
    GLint y = (GLint)luaL_checkinteger(L, 2);
    GLsizei width = (GLsizei)luaL_checkinteger(L, 3);
    GLsizei height = (GLsizei)luaL_checkinteger(L, 4);

    glViewport(x, y, width, height);

    return 0;
}


static const luaL_Reg __lib_gles[] = {
    {"glActiveTexture", _llfunc_glActiveTexture},
    {"glAttachShader", _llfunc_glAttachShader},
    {"glBindAttribLocation", _llfunc_glBindAttribLocation},
    {"glBindBuffer", _llfunc_glBindBuffer},
    {"glBindFramebuffer", _llfunc_glBindFramebuffer},
    {"glBindRenderbuffer", _llfunc_glBindRenderbuffer},
    {"glBindTexture", _llfunc_glBindTexture},
    {"glBlendColor", _llfunc_glBlendColor},
    {"glBlendEquation", _llfunc_glBlendEquation},
    {"glBlendEquationSeparate", _llfunc_glBlendEquationSeparate},
    {"glBlendFunc", _llfunc_glBlendFunc},
    {"glBlendFuncSeparate", _llfunc_glBlendFuncSeparate},
    {"glBufferData", _llfunc_glBufferData},
    {"glBufferSubData", _llfunc_glBufferSubData},
    {"glCheckFramebufferStatus", _llfunc_glCheckFramebufferStatus},
    {"glClear", _llfunc_glClear},
    {"glClearColor", _llfunc_glClearColor},
    {"glClearDepthf", _llfunc_glClearDepthf},
    {"glClearStencil", _llfunc_glClearStencil},
    {"glColorMask", _llfunc_glColorMask},
    {"glCompileShader", _llfunc_glCompileShader},
    {"glCompressedTexImage2D", _llfunc_glCompressedTexImage2D},
    {"glCompressedTexSubImage2D", _llfunc_glCompressedTexSubImage2D},
    {"glCopyTexImage2D", _llfunc_glCopyTexImage2D},
    {"glCopyTexSubImage2D", _llfunc_glCopyTexSubImage2D},
    {"glCreateProgram", _llfunc_glCreateProgram},
    {"glCreateShader", _llfunc_glCreateShader},
    {"glCullFace", _llfunc_glCullFace},
    {"glDeleteBuffers", _llfunc_glDeleteBuffers},
    {"glDeleteFramebuffers", _llfunc_glDeleteFramebuffers},
    {"glDeleteProgram", _llfunc_glDeleteProgram},
    {"glDeleteRenderbuffers", _llfunc_glDeleteRenderbuffers},
    {"glDeleteShader", _llfunc_glDeleteShader},
    {"glDeleteTextures", _llfunc_glDeleteTextures},
    {"glDepthFunc", _llfunc_glDepthFunc},
    {"glDepthMask", _llfunc_glDepthMask},
    {"glDepthRangef", _llfunc_glDepthRangef},
    {"glDetachShader", _llfunc_glDetachShader},
    {"glDrawArrays", _llfunc_glDrawArrays},
    {"glDrawElements", _llfunc_glDrawElements},
    {"glEnable", _llfunc_glEnable},
    {"glDisable", _llfunc_glDisable},
    {"glEnableVertexAttribArray", _llfunc_glEnableVertexAttribArray},
    {"glDisableVertexAttribArray", _llfunc_glDisableVertexAttribArray},
    {"glFinish", _llfunc_glFinish},
    {"glFlush", _llfunc_glFlush},
    {"glFramebufferRenderbuffer", _llfunc_glFramebufferRenderbuffer},
    {"glFramebufferTexture2D", _llfunc_glFramebufferTexture2D},
    {"glFrontFace", _llfunc_glFrontFace},
    {"glGenBuffers", _llfunc_glGenBuffers},
    {"glGenerateMipmap", _llfunc_glGenerateMipmap},
    {"glGenFramebuffers", _llfunc_glGenFramebuffers},
    {"glGenRenderbuffers", _llfunc_glGenRenderbuffers},
    {"glGenTextures", _llfunc_glGenTextures},
    {"glGetBooleanv", _llfunc_glGetBooleanv},
    {"glGetFloatv", _llfunc_glGetFloatv},
    {"glGetIntegerv", _llfunc_glGetIntegerv},
    {"glGetActiveAttrib", _llfunc_glGetActiveAttrib},
    {"glGetActiveUniform", _llfunc_glGetActiveUniform},
    {"glGetAttribLocation", _llfunc_glGetAttribLocation},
    {"glGetBufferParameteriv", _llfunc_glGetBufferParameteriv},
    {"glGetError", _llfunc_glGetError},
    {"glGetFramebufferAttachmentParameteriv", _llfunc_glGetFramebufferAttachmentParameteriv},
    {"glGetProgramInfoLog", _llfunc_glGetProgramInfoLog},
    {"glGetProgramiv", _llfunc_glGetProgramiv},
    {"glGetRenderbufferParameteriv", _llfunc_glGetRenderbufferParameteriv},
    {"glGetShaderInfoLog", _llfunc_glGetShaderInfoLog},
    {"glGetShaderiv", _llfunc_glGetShaderiv},
    {"glGetShaderPrecisionFormat", _llfunc_glGetShaderPrecisionFormat},
    {"glGetShaderSource", _llfunc_glGetShaderSource},
    {"glGetString", _llfunc_glGetString},
    {"glGetTexParameterfv", _llfunc_glGetTexParameterfv},
    {"glGetTexParameteriv", _llfunc_glGetTexParameteriv},
    {"glGetUniformfv", _llfunc_glGetUniformfv},
    {"glGetUniformiv", _llfunc_glGetUniformiv},
    {"glGetUniformLocation", _llfunc_glGetUniformLocation},
    {"glGetVertexAttribfv", _llfunc_glGetVertexAttribfv},
    {"glGetVertexAttribiv", _llfunc_glGetVertexAttribiv},
    {"glHint", _llfunc_glHint},
    {"glIsBuffer", _llfunc_glIsBuffer},
    {"glIsEnabled", _llfunc_glIsEnabled},
    {"glIsFramebuffer", _llfunc_glIsFramebuffer},
    {"glIsProgram", _llfunc_glIsProgram},
    {"glIsRenderbuffer", _llfunc_glIsRenderbuffer},
    {"glIsShader", _llfunc_glIsShader},
    {"glIsTexture", _llfunc_glIsTexture},
    {"glLineWidth", _llfunc_glLineWidth},
    {"glLinkProgram", _llfunc_glLinkProgram},
    {"glPixelStorei", _llfunc_glPixelStorei},
    {"glPolygonOffset", _llfunc_glPolygonOffset},
    {"glReleaseShaderCompiler", _llfunc_glReleaseShaderCompiler},
    {"glRenderbufferStorage", _llfunc_glRenderbufferStorage},
    {"glSampleCoverage", _llfunc_glSampleCoverage},
    {"glScissor", _llfunc_glScissor},
    {"glShaderBinary", _llfunc_glShaderBinary},
    {"glStencilFunc", _llfunc_glStencilFunc},
    {"glStencilFuncSeparate", _llfunc_glStencilFuncSeparate},
    {"glStencilMask", _llfunc_glStencilMask},
    {"glStencilMaskSeparate", _llfunc_glStencilMaskSeparate},
    {"glStencilOp", _llfunc_glStencilOp},
    {"glStencilOpSeparate", _llfunc_glStencilOpSeparate},
    {"glTexImage2D", _llfunc_glTexImage2D},
    {"glTexParameterf", _llfunc_glTexParameterf},
    {"glTexParameteri", _llfunc_glTexParameteri},
    {"glTexParameterfv", _llfunc_glTexParameterfv},
    {"glTexParameteriv", _llfunc_glTexParameteriv},
    {"glTexSubImage2D", _llfunc_glTexSubImage2D},
    {"glUniform1f", _llfunc_glUniform1f},
    {"glUniform2f", _llfunc_glUniform2f},
    {"glUniform3f", _llfunc_glUniform3f},
    {"glUniform4f", _llfunc_glUniform4f},
    {"glUniform1i", _llfunc_glUniform1i},
    {"glUniform2i", _llfunc_glUniform2i},
    {"glUniform3i", _llfunc_glUniform3i},
    {"glUniform4i", _llfunc_glUniform4i},
    {"glUniform1fv", _llfunc_glUniform1fv},
    {"glUniform2fv", _llfunc_glUniform2fv},
    {"glUniform3fv", _llfunc_glUniform3fv},
    {"glUniform4fv", _llfunc_glUniform4fv},
    {"glUniform1iv", _llfunc_glUniform1iv},
    {"glUniform2iv", _llfunc_glUniform2iv},
    {"glUniform3iv", _llfunc_glUniform3iv},
    {"glUniform4iv", _llfunc_glUniform4iv},
    {"glUniformMatrix2fv", _llfunc_glUniformMatrix2fv},
    {"glUniformMatrix3fv", _llfunc_glUniformMatrix3fv},
    {"glUniformMatrix4fv", _llfunc_glUniformMatrix4fv},
    {"glUseProgram", _llfunc_glUseProgram},
    {"glValidateProgram", _llfunc_glValidateProgram},
    {"glVertexAttrib1f", _llfunc_glVertexAttrib1f},
    {"glVertexAttrib2f", _llfunc_glVertexAttrib2f},
    {"glVertexAttrib3f", _llfunc_glVertexAttrib3f},
    {"glVertexAttrib4f", _llfunc_glVertexAttrib4f},
    {"glVertexAttrib1fv", _llfunc_glVertexAttrib1fv},
    {"glVertexAttrib2fv", _llfunc_glVertexAttrib2fv},
    {"glVertexAttrib3fv", _llfunc_glVertexAttrib3fv},
    {"glVertexAttrib4fv", _llfunc_glVertexAttrib4fv},
    {"glVertexAttribPointer", _llfunc_glVertexAttribPointer},
    {"glViewport", _llfunc_glViewport},
    {NULL, NULL}
};

int ll_gles_open(lua_State* L) {
    lua_pushglobaltable(L);
    luaL_setfuncs(L, __lib_gles, 0);
    return 1;
}

