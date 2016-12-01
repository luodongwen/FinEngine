//
// Created by iFinVer on 2016/11/21.
//

#ifndef MYOPENGLES_GL_CONTEXT_H
#define MYOPENGLES_GL_CONTEXT_H

#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <jni.h>
#include "shaders.h"

class GLContextHolder{
public:
    EGLContext eglContext;

    EGLSurface eglSurface;

    EGLDisplay eglDisplay;

    GLuint program;

    GLuint *positions;

    int textureNums;

    GLuint *textures;

    GLuint vertexBuff;

    GLsizei vertexStride;

    GLsizei texStride;

    GLuint offsetVertex;

    GLuint offsetTex;

    jboolean isSurfaceThreadExclusive;
};

#endif //MYOPENGLES_GL_CONTEXT_H
