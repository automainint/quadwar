//#define FEATURE_GL_VERSION_1_0
//#define FEATURE_GL_VERSION_1_1
//#define FEATURE_GL_VERSION_1_2
//#define FEATURE_GL_VERSION_1_3
//#define FEATURE_GL_VERSION_1_4
//#define FEATURE_GL_VERSION_1_5
//#define FEATURE_GL_VERSION_2_0
//#define FEATURE_GL_VERSION_2_1
//#define FEATURE_GL_VERSION_3_0
//#define FEATURE_GL_VERSION_3_1
//#define FEATURE_GL_VERSION_3_2
//#define FEATURE_GL_VERSION_3_3
//#define FEATURE_GL_VERSION_4_0
//#define FEATURE_GL_VERSION_4_1
//#define FEATURE_GL_VERSION_4_2
//#define FEATURE_GL_VERSION_4_3
//#define FEATURE_GL_VERSION_4_4
//#define FEATURE_GL_VERSION_4_5
//#define FEATURE_GL_VERSION_4_6
//#define FEATURE_GL_VERSION_ES_CM_1_0
//#define FEATURE_GL_ES_VERSION_2_0
//#define FEATURE_GL_ES_VERSION_3_0
//#define FEATURE_GL_ES_VERSION_3_1
//#define FEATURE_GL_ES_VERSION_3_2
//#define FEATURE_GL_SC_VERSION_2_0

#ifdef FEATURE_GL_VERSION_1_0
  ok = ok && LOAD_(glCullFace, "glCullFace");
  ok = ok && LOAD_(glFrontFace, "glFrontFace");
  ok = ok && LOAD_(glHint, "glHint");
  ok = ok && LOAD_(glLineWidth, "glLineWidth");
  ok = ok && LOAD_(glPointSize, "glPointSize");
  ok = ok && LOAD_(glPolygonMode, "glPolygonMode");
  ok = ok && LOAD_(glScissor, "glScissor");
  ok = ok && LOAD_(glTexParameterf, "glTexParameterf");
  ok = ok && LOAD_(glTexParameterfv, "glTexParameterfv");
  ok = ok && LOAD_(glTexParameteri, "glTexParameteri");
  ok = ok && LOAD_(glTexParameteriv, "glTexParameteriv");
  ok = ok && LOAD_(glTexImage1D, "glTexImage1D");
  ok = ok && LOAD_(glTexImage2D, "glTexImage2D");
  ok = ok && LOAD_(glDrawBuffer, "glDrawBuffer");
  ok = ok && LOAD_(glClear, "glClear");
  ok = ok && LOAD_(glClearColor, "glClearColor");
  ok = ok && LOAD_(glClearStencil, "glClearStencil");
  ok = ok && LOAD_(glClearDepth, "glClearDepth");
  ok = ok && LOAD_(glStencilMask, "glStencilMask");
  ok = ok && LOAD_(glColorMask, "glColorMask");
  ok = ok && LOAD_(glDepthMask, "glDepthMask");
  ok = ok && LOAD_(glDisable, "glDisable");
  ok = ok && LOAD_(glEnable, "glEnable");
  ok = ok && LOAD_(glFinish, "glFinish");
  ok = ok && LOAD_(glFlush, "glFlush");
  ok = ok && LOAD_(glBlendFunc, "glBlendFunc");
  ok = ok && LOAD_(glLogicOp, "glLogicOp");
  ok = ok && LOAD_(glStencilFunc, "glStencilFunc");
  ok = ok && LOAD_(glStencilOp, "glStencilOp");
  ok = ok && LOAD_(glDepthFunc, "glDepthFunc");
  ok = ok && LOAD_(glPixelStoref, "glPixelStoref");
  ok = ok && LOAD_(glPixelStorei, "glPixelStorei");
  ok = ok && LOAD_(glReadBuffer, "glReadBuffer");
  ok = ok && LOAD_(glReadPixels, "glReadPixels");
  ok = ok && LOAD_(glGetBooleanv, "glGetBooleanv");
  ok = ok && LOAD_(glGetDoublev, "glGetDoublev");
  ok = ok && LOAD_(glGetError, "glGetError");
  ok = ok && LOAD_(glGetFloatv, "glGetFloatv");
  ok = ok && LOAD_(glGetIntegerv, "glGetIntegerv");
  ok = ok && LOAD_(glGetString, "glGetString");
  ok = ok && LOAD_(glGetTexImage, "glGetTexImage");
  ok = ok && LOAD_(glGetTexParameterfv, "glGetTexParameterfv");
  ok = ok && LOAD_(glGetTexParameteriv, "glGetTexParameteriv");
  ok = ok && LOAD_(glGetTexLevelParameterfv, "glGetTexLevelParameterfv");
  ok = ok && LOAD_(glGetTexLevelParameteriv, "glGetTexLevelParameteriv");
  ok = ok && LOAD_(glIsEnabled, "glIsEnabled");
  ok = ok && LOAD_(glDepthRange, "glDepthRange");
  ok = ok && LOAD_(glViewport, "glViewport");
  ok = ok && LOAD_(glNewList, "glNewList");
  ok = ok && LOAD_(glEndList, "glEndList");
  ok = ok && LOAD_(glCallList, "glCallList");
  ok = ok && LOAD_(glCallLists, "glCallLists");
  ok = ok && LOAD_(glDeleteLists, "glDeleteLists");
  ok = ok && LOAD_(glGenLists, "glGenLists");
  ok = ok && LOAD_(glListBase, "glListBase");
  ok = ok && LOAD_(glBegin, "glBegin");
  ok = ok && LOAD_(glBitmap, "glBitmap");
  ok = ok && LOAD_(glColor3b, "glColor3b");
  ok = ok && LOAD_(glColor3bv, "glColor3bv");
  ok = ok && LOAD_(glColor3d, "glColor3d");
  ok = ok && LOAD_(glColor3dv, "glColor3dv");
  ok = ok && LOAD_(glColor3f, "glColor3f");
  ok = ok && LOAD_(glColor3fv, "glColor3fv");
  ok = ok && LOAD_(glColor3i, "glColor3i");
  ok = ok && LOAD_(glColor3iv, "glColor3iv");
  ok = ok && LOAD_(glColor3s, "glColor3s");
  ok = ok && LOAD_(glColor3sv, "glColor3sv");
  ok = ok && LOAD_(glColor3ub, "glColor3ub");
  ok = ok && LOAD_(glColor3ubv, "glColor3ubv");
  ok = ok && LOAD_(glColor3ui, "glColor3ui");
  ok = ok && LOAD_(glColor3uiv, "glColor3uiv");
  ok = ok && LOAD_(glColor3us, "glColor3us");
  ok = ok && LOAD_(glColor3usv, "glColor3usv");
  ok = ok && LOAD_(glColor4b, "glColor4b");
  ok = ok && LOAD_(glColor4bv, "glColor4bv");
  ok = ok && LOAD_(glColor4d, "glColor4d");
  ok = ok && LOAD_(glColor4dv, "glColor4dv");
  ok = ok && LOAD_(glColor4f, "glColor4f");
  ok = ok && LOAD_(glColor4fv, "glColor4fv");
  ok = ok && LOAD_(glColor4i, "glColor4i");
  ok = ok && LOAD_(glColor4iv, "glColor4iv");
  ok = ok && LOAD_(glColor4s, "glColor4s");
  ok = ok && LOAD_(glColor4sv, "glColor4sv");
  ok = ok && LOAD_(glColor4ub, "glColor4ub");
  ok = ok && LOAD_(glColor4ubv, "glColor4ubv");
  ok = ok && LOAD_(glColor4ui, "glColor4ui");
  ok = ok && LOAD_(glColor4uiv, "glColor4uiv");
  ok = ok && LOAD_(glColor4us, "glColor4us");
  ok = ok && LOAD_(glColor4usv, "glColor4usv");
  ok = ok && LOAD_(glEdgeFlag, "glEdgeFlag");
  ok = ok && LOAD_(glEdgeFlagv, "glEdgeFlagv");
  ok = ok && LOAD_(glEnd, "glEnd");
  ok = ok && LOAD_(glIndexd, "glIndexd");
  ok = ok && LOAD_(glIndexdv, "glIndexdv");
  ok = ok && LOAD_(glIndexf, "glIndexf");
  ok = ok && LOAD_(glIndexfv, "glIndexfv");
  ok = ok && LOAD_(glIndexi, "glIndexi");
  ok = ok && LOAD_(glIndexiv, "glIndexiv");
  ok = ok && LOAD_(glIndexs, "glIndexs");
  ok = ok && LOAD_(glIndexsv, "glIndexsv");
  ok = ok && LOAD_(glNormal3b, "glNormal3b");
  ok = ok && LOAD_(glNormal3bv, "glNormal3bv");
  ok = ok && LOAD_(glNormal3d, "glNormal3d");
  ok = ok && LOAD_(glNormal3dv, "glNormal3dv");
  ok = ok && LOAD_(glNormal3f, "glNormal3f");
  ok = ok && LOAD_(glNormal3fv, "glNormal3fv");
  ok = ok && LOAD_(glNormal3i, "glNormal3i");
  ok = ok && LOAD_(glNormal3iv, "glNormal3iv");
  ok = ok && LOAD_(glNormal3s, "glNormal3s");
  ok = ok && LOAD_(glNormal3sv, "glNormal3sv");
  ok = ok && LOAD_(glRasterPos2d, "glRasterPos2d");
  ok = ok && LOAD_(glRasterPos2dv, "glRasterPos2dv");
  ok = ok && LOAD_(glRasterPos2f, "glRasterPos2f");
  ok = ok && LOAD_(glRasterPos2fv, "glRasterPos2fv");
  ok = ok && LOAD_(glRasterPos2i, "glRasterPos2i");
  ok = ok && LOAD_(glRasterPos2iv, "glRasterPos2iv");
  ok = ok && LOAD_(glRasterPos2s, "glRasterPos2s");
  ok = ok && LOAD_(glRasterPos2sv, "glRasterPos2sv");
  ok = ok && LOAD_(glRasterPos3d, "glRasterPos3d");
  ok = ok && LOAD_(glRasterPos3dv, "glRasterPos3dv");
  ok = ok && LOAD_(glRasterPos3f, "glRasterPos3f");
  ok = ok && LOAD_(glRasterPos3fv, "glRasterPos3fv");
  ok = ok && LOAD_(glRasterPos3i, "glRasterPos3i");
  ok = ok && LOAD_(glRasterPos3iv, "glRasterPos3iv");
  ok = ok && LOAD_(glRasterPos3s, "glRasterPos3s");
  ok = ok && LOAD_(glRasterPos3sv, "glRasterPos3sv");
  ok = ok && LOAD_(glRasterPos4d, "glRasterPos4d");
  ok = ok && LOAD_(glRasterPos4dv, "glRasterPos4dv");
  ok = ok && LOAD_(glRasterPos4f, "glRasterPos4f");
  ok = ok && LOAD_(glRasterPos4fv, "glRasterPos4fv");
  ok = ok && LOAD_(glRasterPos4i, "glRasterPos4i");
  ok = ok && LOAD_(glRasterPos4iv, "glRasterPos4iv");
  ok = ok && LOAD_(glRasterPos4s, "glRasterPos4s");
  ok = ok && LOAD_(glRasterPos4sv, "glRasterPos4sv");
  ok = ok && LOAD_(glRectd, "glRectd");
  ok = ok && LOAD_(glRectdv, "glRectdv");
  ok = ok && LOAD_(glRectf, "glRectf");
  ok = ok && LOAD_(glRectfv, "glRectfv");
  ok = ok && LOAD_(glRecti, "glRecti");
  ok = ok && LOAD_(glRectiv, "glRectiv");
  ok = ok && LOAD_(glRects, "glRects");
  ok = ok && LOAD_(glRectsv, "glRectsv");
  ok = ok && LOAD_(glTexCoord1d, "glTexCoord1d");
  ok = ok && LOAD_(glTexCoord1dv, "glTexCoord1dv");
  ok = ok && LOAD_(glTexCoord1f, "glTexCoord1f");
  ok = ok && LOAD_(glTexCoord1fv, "glTexCoord1fv");
  ok = ok && LOAD_(glTexCoord1i, "glTexCoord1i");
  ok = ok && LOAD_(glTexCoord1iv, "glTexCoord1iv");
  ok = ok && LOAD_(glTexCoord1s, "glTexCoord1s");
  ok = ok && LOAD_(glTexCoord1sv, "glTexCoord1sv");
  ok = ok && LOAD_(glTexCoord2d, "glTexCoord2d");
  ok = ok && LOAD_(glTexCoord2dv, "glTexCoord2dv");
  ok = ok && LOAD_(glTexCoord2f, "glTexCoord2f");
  ok = ok && LOAD_(glTexCoord2fv, "glTexCoord2fv");
  ok = ok && LOAD_(glTexCoord2i, "glTexCoord2i");
  ok = ok && LOAD_(glTexCoord2iv, "glTexCoord2iv");
  ok = ok && LOAD_(glTexCoord2s, "glTexCoord2s");
  ok = ok && LOAD_(glTexCoord2sv, "glTexCoord2sv");
  ok = ok && LOAD_(glTexCoord3d, "glTexCoord3d");
  ok = ok && LOAD_(glTexCoord3dv, "glTexCoord3dv");
  ok = ok && LOAD_(glTexCoord3f, "glTexCoord3f");
  ok = ok && LOAD_(glTexCoord3fv, "glTexCoord3fv");
  ok = ok && LOAD_(glTexCoord3i, "glTexCoord3i");
  ok = ok && LOAD_(glTexCoord3iv, "glTexCoord3iv");
  ok = ok && LOAD_(glTexCoord3s, "glTexCoord3s");
  ok = ok && LOAD_(glTexCoord3sv, "glTexCoord3sv");
  ok = ok && LOAD_(glTexCoord4d, "glTexCoord4d");
  ok = ok && LOAD_(glTexCoord4dv, "glTexCoord4dv");
  ok = ok && LOAD_(glTexCoord4f, "glTexCoord4f");
  ok = ok && LOAD_(glTexCoord4fv, "glTexCoord4fv");
  ok = ok && LOAD_(glTexCoord4i, "glTexCoord4i");
  ok = ok && LOAD_(glTexCoord4iv, "glTexCoord4iv");
  ok = ok && LOAD_(glTexCoord4s, "glTexCoord4s");
  ok = ok && LOAD_(glTexCoord4sv, "glTexCoord4sv");
  ok = ok && LOAD_(glVertex2d, "glVertex2d");
  ok = ok && LOAD_(glVertex2dv, "glVertex2dv");
  ok = ok && LOAD_(glVertex2f, "glVertex2f");
  ok = ok && LOAD_(glVertex2fv, "glVertex2fv");
  ok = ok && LOAD_(glVertex2i, "glVertex2i");
  ok = ok && LOAD_(glVertex2iv, "glVertex2iv");
  ok = ok && LOAD_(glVertex2s, "glVertex2s");
  ok = ok && LOAD_(glVertex2sv, "glVertex2sv");
  ok = ok && LOAD_(glVertex3d, "glVertex3d");
  ok = ok && LOAD_(glVertex3dv, "glVertex3dv");
  ok = ok && LOAD_(glVertex3f, "glVertex3f");
  ok = ok && LOAD_(glVertex3fv, "glVertex3fv");
  ok = ok && LOAD_(glVertex3i, "glVertex3i");
  ok = ok && LOAD_(glVertex3iv, "glVertex3iv");
  ok = ok && LOAD_(glVertex3s, "glVertex3s");
  ok = ok && LOAD_(glVertex3sv, "glVertex3sv");
  ok = ok && LOAD_(glVertex4d, "glVertex4d");
  ok = ok && LOAD_(glVertex4dv, "glVertex4dv");
  ok = ok && LOAD_(glVertex4f, "glVertex4f");
  ok = ok && LOAD_(glVertex4fv, "glVertex4fv");
  ok = ok && LOAD_(glVertex4i, "glVertex4i");
  ok = ok && LOAD_(glVertex4iv, "glVertex4iv");
  ok = ok && LOAD_(glVertex4s, "glVertex4s");
  ok = ok && LOAD_(glVertex4sv, "glVertex4sv");
  ok = ok && LOAD_(glClipPlane, "glClipPlane");
  ok = ok && LOAD_(glColorMaterial, "glColorMaterial");
  ok = ok && LOAD_(glFogf, "glFogf");
  ok = ok && LOAD_(glFogfv, "glFogfv");
  ok = ok && LOAD_(glFogi, "glFogi");
  ok = ok && LOAD_(glFogiv, "glFogiv");
  ok = ok && LOAD_(glLightf, "glLightf");
  ok = ok && LOAD_(glLightfv, "glLightfv");
  ok = ok && LOAD_(glLighti, "glLighti");
  ok = ok && LOAD_(glLightiv, "glLightiv");
  ok = ok && LOAD_(glLightModelf, "glLightModelf");
  ok = ok && LOAD_(glLightModelfv, "glLightModelfv");
  ok = ok && LOAD_(glLightModeli, "glLightModeli");
  ok = ok && LOAD_(glLightModeliv, "glLightModeliv");
  ok = ok && LOAD_(glLineStipple, "glLineStipple");
  ok = ok && LOAD_(glMaterialf, "glMaterialf");
  ok = ok && LOAD_(glMaterialfv, "glMaterialfv");
  ok = ok && LOAD_(glMateriali, "glMateriali");
  ok = ok && LOAD_(glMaterialiv, "glMaterialiv");
  ok = ok && LOAD_(glPolygonStipple, "glPolygonStipple");
  ok = ok && LOAD_(glShadeModel, "glShadeModel");
  ok = ok && LOAD_(glTexEnvf, "glTexEnvf");
  ok = ok && LOAD_(glTexEnvfv, "glTexEnvfv");
  ok = ok && LOAD_(glTexEnvi, "glTexEnvi");
  ok = ok && LOAD_(glTexEnviv, "glTexEnviv");
  ok = ok && LOAD_(glTexGend, "glTexGend");
  ok = ok && LOAD_(glTexGendv, "glTexGendv");
  ok = ok && LOAD_(glTexGenf, "glTexGenf");
  ok = ok && LOAD_(glTexGenfv, "glTexGenfv");
  ok = ok && LOAD_(glTexGeni, "glTexGeni");
  ok = ok && LOAD_(glTexGeniv, "glTexGeniv");
  ok = ok && LOAD_(glFeedbackBuffer, "glFeedbackBuffer");
  ok = ok && LOAD_(glSelectBuffer, "glSelectBuffer");
  ok = ok && LOAD_(glRenderMode, "glRenderMode");
  ok = ok && LOAD_(glInitNames, "glInitNames");
  ok = ok && LOAD_(glLoadName, "glLoadName");
  ok = ok && LOAD_(glPassThrough, "glPassThrough");
  ok = ok && LOAD_(glPopName, "glPopName");
  ok = ok && LOAD_(glPushName, "glPushName");
  ok = ok && LOAD_(glClearAccum, "glClearAccum");
  ok = ok && LOAD_(glClearIndex, "glClearIndex");
  ok = ok && LOAD_(glIndexMask, "glIndexMask");
  ok = ok && LOAD_(glAccum, "glAccum");
  ok = ok && LOAD_(glPopAttrib, "glPopAttrib");
  ok = ok && LOAD_(glPushAttrib, "glPushAttrib");
  ok = ok && LOAD_(glMap1d, "glMap1d");
  ok = ok && LOAD_(glMap1f, "glMap1f");
  ok = ok && LOAD_(glMap2d, "glMap2d");
  ok = ok && LOAD_(glMap2f, "glMap2f");
  ok = ok && LOAD_(glMapGrid1d, "glMapGrid1d");
  ok = ok && LOAD_(glMapGrid1f, "glMapGrid1f");
  ok = ok && LOAD_(glMapGrid2d, "glMapGrid2d");
  ok = ok && LOAD_(glMapGrid2f, "glMapGrid2f");
  ok = ok && LOAD_(glEvalCoord1d, "glEvalCoord1d");
  ok = ok && LOAD_(glEvalCoord1dv, "glEvalCoord1dv");
  ok = ok && LOAD_(glEvalCoord1f, "glEvalCoord1f");
  ok = ok && LOAD_(glEvalCoord1fv, "glEvalCoord1fv");
  ok = ok && LOAD_(glEvalCoord2d, "glEvalCoord2d");
  ok = ok && LOAD_(glEvalCoord2dv, "glEvalCoord2dv");
  ok = ok && LOAD_(glEvalCoord2f, "glEvalCoord2f");
  ok = ok && LOAD_(glEvalCoord2fv, "glEvalCoord2fv");
  ok = ok && LOAD_(glEvalMesh1, "glEvalMesh1");
  ok = ok && LOAD_(glEvalPoint1, "glEvalPoint1");
  ok = ok && LOAD_(glEvalMesh2, "glEvalMesh2");
  ok = ok && LOAD_(glEvalPoint2, "glEvalPoint2");
  ok = ok && LOAD_(glAlphaFunc, "glAlphaFunc");
  ok = ok && LOAD_(glPixelZoom, "glPixelZoom");
  ok = ok && LOAD_(glPixelTransferf, "glPixelTransferf");
  ok = ok && LOAD_(glPixelTransferi, "glPixelTransferi");
  ok = ok && LOAD_(glPixelMapfv, "glPixelMapfv");
  ok = ok && LOAD_(glPixelMapuiv, "glPixelMapuiv");
  ok = ok && LOAD_(glPixelMapusv, "glPixelMapusv");
  ok = ok && LOAD_(glCopyPixels, "glCopyPixels");
  ok = ok && LOAD_(glDrawPixels, "glDrawPixels");
  ok = ok && LOAD_(glGetClipPlane, "glGetClipPlane");
  ok = ok && LOAD_(glGetLightfv, "glGetLightfv");
  ok = ok && LOAD_(glGetLightiv, "glGetLightiv");
  ok = ok && LOAD_(glGetMapdv, "glGetMapdv");
  ok = ok && LOAD_(glGetMapfv, "glGetMapfv");
  ok = ok && LOAD_(glGetMapiv, "glGetMapiv");
  ok = ok && LOAD_(glGetMaterialfv, "glGetMaterialfv");
  ok = ok && LOAD_(glGetMaterialiv, "glGetMaterialiv");
  ok = ok && LOAD_(glGetPixelMapfv, "glGetPixelMapfv");
  ok = ok && LOAD_(glGetPixelMapuiv, "glGetPixelMapuiv");
  ok = ok && LOAD_(glGetPixelMapusv, "glGetPixelMapusv");
  ok = ok && LOAD_(glGetPolygonStipple, "glGetPolygonStipple");
  ok = ok && LOAD_(glGetTexEnvfv, "glGetTexEnvfv");
  ok = ok && LOAD_(glGetTexEnviv, "glGetTexEnviv");
  ok = ok && LOAD_(glGetTexGendv, "glGetTexGendv");
  ok = ok && LOAD_(glGetTexGenfv, "glGetTexGenfv");
  ok = ok && LOAD_(glGetTexGeniv, "glGetTexGeniv");
  ok = ok && LOAD_(glIsList, "glIsList");
  ok = ok && LOAD_(glFrustum, "glFrustum");
  ok = ok && LOAD_(glLoadIdentity, "glLoadIdentity");
  ok = ok && LOAD_(glLoadMatrixf, "glLoadMatrixf");
  ok = ok && LOAD_(glLoadMatrixd, "glLoadMatrixd");
  ok = ok && LOAD_(glMatrixMode, "glMatrixMode");
  ok = ok && LOAD_(glMultMatrixf, "glMultMatrixf");
  ok = ok && LOAD_(glMultMatrixd, "glMultMatrixd");
  ok = ok && LOAD_(glOrtho, "glOrtho");
  ok = ok && LOAD_(glPopMatrix, "glPopMatrix");
  ok = ok && LOAD_(glPushMatrix, "glPushMatrix");
  ok = ok && LOAD_(glRotated, "glRotated");
  ok = ok && LOAD_(glRotatef, "glRotatef");
  ok = ok && LOAD_(glScaled, "glScaled");
  ok = ok && LOAD_(glScalef, "glScalef");
  ok = ok && LOAD_(glTranslated, "glTranslated");
  ok = ok && LOAD_(glTranslatef, "glTranslatef");
#endif

#ifdef FEATURE_GL_VERSION_1_1
  ok = ok && LOAD_(glDrawArrays, "glDrawArrays");
  ok = ok && LOAD_(glDrawElements, "glDrawElements");
  ok = ok && LOAD_(glGetPointerv, "glGetPointerv");
  ok = ok && LOAD_(glPolygonOffset, "glPolygonOffset");
  ok = ok && LOAD_(glCopyTexImage1D, "glCopyTexImage1D");
  ok = ok && LOAD_(glCopyTexImage2D, "glCopyTexImage2D");
  ok = ok && LOAD_(glCopyTexSubImage1D, "glCopyTexSubImage1D");
  ok = ok && LOAD_(glCopyTexSubImage2D, "glCopyTexSubImage2D");
  ok = ok && LOAD_(glTexSubImage1D, "glTexSubImage1D");
  ok = ok && LOAD_(glTexSubImage2D, "glTexSubImage2D");
  ok = ok && LOAD_(glBindTexture, "glBindTexture");
  ok = ok && LOAD_(glDeleteTextures, "glDeleteTextures");
  ok = ok && LOAD_(glGenTextures, "glGenTextures");
  ok = ok && LOAD_(glIsTexture, "glIsTexture");
  ok = ok && LOAD_(glArrayElement, "glArrayElement");
  ok = ok && LOAD_(glColorPointer, "glColorPointer");
  ok = ok && LOAD_(glDisableClientState, "glDisableClientState");
  ok = ok && LOAD_(glEdgeFlagPointer, "glEdgeFlagPointer");
  ok = ok && LOAD_(glEnableClientState, "glEnableClientState");
  ok = ok && LOAD_(glIndexPointer, "glIndexPointer");
  ok = ok && LOAD_(glInterleavedArrays, "glInterleavedArrays");
  ok = ok && LOAD_(glNormalPointer, "glNormalPointer");
  ok = ok && LOAD_(glTexCoordPointer, "glTexCoordPointer");
  ok = ok && LOAD_(glVertexPointer, "glVertexPointer");
  ok = ok && LOAD_(glAreTexturesResident, "glAreTexturesResident");
  ok = ok && LOAD_(glPrioritizeTextures, "glPrioritizeTextures");
  ok = ok && LOAD_(glIndexub, "glIndexub");
  ok = ok && LOAD_(glIndexubv, "glIndexubv");
  ok = ok && LOAD_(glPopClientAttrib, "glPopClientAttrib");
  ok = ok && LOAD_(glPushClientAttrib, "glPushClientAttrib");
#endif

#ifdef FEATURE_GL_VERSION_1_2
  ok = ok && LOAD_(glDrawRangeElements, "glDrawRangeElements");
  ok = ok && LOAD_(glTexImage3D, "glTexImage3D");
  ok = ok && LOAD_(glTexSubImage3D, "glTexSubImage3D");
  ok = ok && LOAD_(glCopyTexSubImage3D, "glCopyTexSubImage3D");
#endif

#ifdef FEATURE_GL_VERSION_1_3
  ok = ok && LOAD_(glActiveTexture, "glActiveTexture");
  ok = ok && LOAD_(glSampleCoverage, "glSampleCoverage");
  ok = ok && LOAD_(glCompressedTexImage3D, "glCompressedTexImage3D");
  ok = ok && LOAD_(glCompressedTexImage2D, "glCompressedTexImage2D");
  ok = ok && LOAD_(glCompressedTexImage1D, "glCompressedTexImage1D");
  ok = ok && LOAD_(glCompressedTexSubImage3D, "glCompressedTexSubImage3D");
  ok = ok && LOAD_(glCompressedTexSubImage2D, "glCompressedTexSubImage2D");
  ok = ok && LOAD_(glCompressedTexSubImage1D, "glCompressedTexSubImage1D");
  ok = ok && LOAD_(glGetCompressedTexImage, "glGetCompressedTexImage");
  ok = ok && LOAD_(glClientActiveTexture, "glClientActiveTexture");
  ok = ok && LOAD_(glMultiTexCoord1d, "glMultiTexCoord1d");
  ok = ok && LOAD_(glMultiTexCoord1dv, "glMultiTexCoord1dv");
  ok = ok && LOAD_(glMultiTexCoord1f, "glMultiTexCoord1f");
  ok = ok && LOAD_(glMultiTexCoord1fv, "glMultiTexCoord1fv");
  ok = ok && LOAD_(glMultiTexCoord1i, "glMultiTexCoord1i");
  ok = ok && LOAD_(glMultiTexCoord1iv, "glMultiTexCoord1iv");
  ok = ok && LOAD_(glMultiTexCoord1s, "glMultiTexCoord1s");
  ok = ok && LOAD_(glMultiTexCoord1sv, "glMultiTexCoord1sv");
  ok = ok && LOAD_(glMultiTexCoord2d, "glMultiTexCoord2d");
  ok = ok && LOAD_(glMultiTexCoord2dv, "glMultiTexCoord2dv");
  ok = ok && LOAD_(glMultiTexCoord2f, "glMultiTexCoord2f");
  ok = ok && LOAD_(glMultiTexCoord2fv, "glMultiTexCoord2fv");
  ok = ok && LOAD_(glMultiTexCoord2i, "glMultiTexCoord2i");
  ok = ok && LOAD_(glMultiTexCoord2iv, "glMultiTexCoord2iv");
  ok = ok && LOAD_(glMultiTexCoord2s, "glMultiTexCoord2s");
  ok = ok && LOAD_(glMultiTexCoord2sv, "glMultiTexCoord2sv");
  ok = ok && LOAD_(glMultiTexCoord3d, "glMultiTexCoord3d");
  ok = ok && LOAD_(glMultiTexCoord3dv, "glMultiTexCoord3dv");
  ok = ok && LOAD_(glMultiTexCoord3f, "glMultiTexCoord3f");
  ok = ok && LOAD_(glMultiTexCoord3fv, "glMultiTexCoord3fv");
  ok = ok && LOAD_(glMultiTexCoord3i, "glMultiTexCoord3i");
  ok = ok && LOAD_(glMultiTexCoord3iv, "glMultiTexCoord3iv");
  ok = ok && LOAD_(glMultiTexCoord3s, "glMultiTexCoord3s");
  ok = ok && LOAD_(glMultiTexCoord3sv, "glMultiTexCoord3sv");
  ok = ok && LOAD_(glMultiTexCoord4d, "glMultiTexCoord4d");
  ok = ok && LOAD_(glMultiTexCoord4dv, "glMultiTexCoord4dv");
  ok = ok && LOAD_(glMultiTexCoord4f, "glMultiTexCoord4f");
  ok = ok && LOAD_(glMultiTexCoord4fv, "glMultiTexCoord4fv");
  ok = ok && LOAD_(glMultiTexCoord4i, "glMultiTexCoord4i");
  ok = ok && LOAD_(glMultiTexCoord4iv, "glMultiTexCoord4iv");
  ok = ok && LOAD_(glMultiTexCoord4s, "glMultiTexCoord4s");
  ok = ok && LOAD_(glMultiTexCoord4sv, "glMultiTexCoord4sv");
  ok = ok && LOAD_(glLoadTransposeMatrixf, "glLoadTransposeMatrixf");
  ok = ok && LOAD_(glLoadTransposeMatrixd, "glLoadTransposeMatrixd");
  ok = ok && LOAD_(glMultTransposeMatrixf, "glMultTransposeMatrixf");
  ok = ok && LOAD_(glMultTransposeMatrixd, "glMultTransposeMatrixd");
#endif

#ifdef FEATURE_GL_VERSION_1_4
  ok = ok && LOAD_(glBlendFuncSeparate, "glBlendFuncSeparate");
  ok = ok && LOAD_(glMultiDrawArrays, "glMultiDrawArrays");
  ok = ok && LOAD_(glMultiDrawElements, "glMultiDrawElements");
  ok = ok && LOAD_(glPointParameterf, "glPointParameterf");
  ok = ok && LOAD_(glPointParameterfv, "glPointParameterfv");
  ok = ok && LOAD_(glPointParameteri, "glPointParameteri");
  ok = ok && LOAD_(glPointParameteriv, "glPointParameteriv");
  ok = ok && LOAD_(glFogCoordf, "glFogCoordf");
  ok = ok && LOAD_(glFogCoordfv, "glFogCoordfv");
  ok = ok && LOAD_(glFogCoordd, "glFogCoordd");
  ok = ok && LOAD_(glFogCoorddv, "glFogCoorddv");
  ok = ok && LOAD_(glFogCoordPointer, "glFogCoordPointer");
  ok = ok && LOAD_(glSecondaryColor3b, "glSecondaryColor3b");
  ok = ok && LOAD_(glSecondaryColor3bv, "glSecondaryColor3bv");
  ok = ok && LOAD_(glSecondaryColor3d, "glSecondaryColor3d");
  ok = ok && LOAD_(glSecondaryColor3dv, "glSecondaryColor3dv");
  ok = ok && LOAD_(glSecondaryColor3f, "glSecondaryColor3f");
  ok = ok && LOAD_(glSecondaryColor3fv, "glSecondaryColor3fv");
  ok = ok && LOAD_(glSecondaryColor3i, "glSecondaryColor3i");
  ok = ok && LOAD_(glSecondaryColor3iv, "glSecondaryColor3iv");
  ok = ok && LOAD_(glSecondaryColor3s, "glSecondaryColor3s");
  ok = ok && LOAD_(glSecondaryColor3sv, "glSecondaryColor3sv");
  ok = ok && LOAD_(glSecondaryColor3ub, "glSecondaryColor3ub");
  ok = ok && LOAD_(glSecondaryColor3ubv, "glSecondaryColor3ubv");
  ok = ok && LOAD_(glSecondaryColor3ui, "glSecondaryColor3ui");
  ok = ok && LOAD_(glSecondaryColor3uiv, "glSecondaryColor3uiv");
  ok = ok && LOAD_(glSecondaryColor3us, "glSecondaryColor3us");
  ok = ok && LOAD_(glSecondaryColor3usv, "glSecondaryColor3usv");
  ok = ok && LOAD_(glSecondaryColorPointer, "glSecondaryColorPointer");
  ok = ok && LOAD_(glWindowPos2d, "glWindowPos2d");
  ok = ok && LOAD_(glWindowPos2dv, "glWindowPos2dv");
  ok = ok && LOAD_(glWindowPos2f, "glWindowPos2f");
  ok = ok && LOAD_(glWindowPos2fv, "glWindowPos2fv");
  ok = ok && LOAD_(glWindowPos2i, "glWindowPos2i");
  ok = ok && LOAD_(glWindowPos2iv, "glWindowPos2iv");
  ok = ok && LOAD_(glWindowPos2s, "glWindowPos2s");
  ok = ok && LOAD_(glWindowPos2sv, "glWindowPos2sv");
  ok = ok && LOAD_(glWindowPos3d, "glWindowPos3d");
  ok = ok && LOAD_(glWindowPos3dv, "glWindowPos3dv");
  ok = ok && LOAD_(glWindowPos3f, "glWindowPos3f");
  ok = ok && LOAD_(glWindowPos3fv, "glWindowPos3fv");
  ok = ok && LOAD_(glWindowPos3i, "glWindowPos3i");
  ok = ok && LOAD_(glWindowPos3iv, "glWindowPos3iv");
  ok = ok && LOAD_(glWindowPos3s, "glWindowPos3s");
  ok = ok && LOAD_(glWindowPos3sv, "glWindowPos3sv");
  ok = ok && LOAD_(glBlendColor, "glBlendColor");
  ok = ok && LOAD_(glBlendEquation, "glBlendEquation");
#endif

#ifdef FEATURE_GL_VERSION_1_5
  ok = ok && LOAD_(glGenQueries, "glGenQueries");
  ok = ok && LOAD_(glDeleteQueries, "glDeleteQueries");
  ok = ok && LOAD_(glIsQuery, "glIsQuery");
  ok = ok && LOAD_(glBeginQuery, "glBeginQuery");
  ok = ok && LOAD_(glEndQuery, "glEndQuery");
  ok = ok && LOAD_(glGetQueryiv, "glGetQueryiv");
  ok = ok && LOAD_(glGetQueryObjectiv, "glGetQueryObjectiv");
  ok = ok && LOAD_(glGetQueryObjectuiv, "glGetQueryObjectuiv");
  ok = ok && LOAD_(glBindBuffer, "glBindBuffer");
  ok = ok && LOAD_(glDeleteBuffers, "glDeleteBuffers");
  ok = ok && LOAD_(glGenBuffers, "glGenBuffers");
  ok = ok && LOAD_(glIsBuffer, "glIsBuffer");
  ok = ok && LOAD_(glBufferData, "glBufferData");
  ok = ok && LOAD_(glBufferSubData, "glBufferSubData");
  ok = ok && LOAD_(glGetBufferSubData, "glGetBufferSubData");
  ok = ok && LOAD_(glMapBuffer, "glMapBuffer");
  ok = ok && LOAD_(glUnmapBuffer, "glUnmapBuffer");
  ok = ok && LOAD_(glGetBufferParameteriv, "glGetBufferParameteriv");
  ok = ok && LOAD_(glGetBufferPointerv, "glGetBufferPointerv");
#endif

#ifdef FEATURE_GL_VERSION_2_0
  ok = ok && LOAD_(glBlendEquationSeparate, "glBlendEquationSeparate");
  ok = ok && LOAD_(glDrawBuffers, "glDrawBuffers");
  ok = ok && LOAD_(glStencilOpSeparate, "glStencilOpSeparate");
  ok = ok && LOAD_(glStencilFuncSeparate, "glStencilFuncSeparate");
  ok = ok && LOAD_(glStencilMaskSeparate, "glStencilMaskSeparate");
  ok = ok && LOAD_(glAttachShader, "glAttachShader");
  ok = ok && LOAD_(glBindAttribLocation, "glBindAttribLocation");
  ok = ok && LOAD_(glCompileShader, "glCompileShader");
  ok = ok && LOAD_(glCreateProgram, "glCreateProgram");
  ok = ok && LOAD_(glCreateShader, "glCreateShader");
  ok = ok && LOAD_(glDeleteProgram, "glDeleteProgram");
  ok = ok && LOAD_(glDeleteShader, "glDeleteShader");
  ok = ok && LOAD_(glDetachShader, "glDetachShader");
  ok = ok && LOAD_(glDisableVertexAttribArray, "glDisableVertexAttribArray");
  ok = ok && LOAD_(glEnableVertexAttribArray, "glEnableVertexAttribArray");
  ok = ok && LOAD_(glGetActiveAttrib, "glGetActiveAttrib");
  ok = ok && LOAD_(glGetActiveUniform, "glGetActiveUniform");
  ok = ok && LOAD_(glGetAttachedShaders, "glGetAttachedShaders");
  ok = ok && LOAD_(glGetAttribLocation, "glGetAttribLocation");
  ok = ok && LOAD_(glGetProgramiv, "glGetProgramiv");
  ok = ok && LOAD_(glGetProgramInfoLog, "glGetProgramInfoLog");
  ok = ok && LOAD_(glGetShaderiv, "glGetShaderiv");
  ok = ok && LOAD_(glGetShaderInfoLog, "glGetShaderInfoLog");
  ok = ok && LOAD_(glGetShaderSource, "glGetShaderSource");
  ok = ok && LOAD_(glGetUniformLocation, "glGetUniformLocation");
  ok = ok && LOAD_(glGetUniformfv, "glGetUniformfv");
  ok = ok && LOAD_(glGetUniformiv, "glGetUniformiv");
  ok = ok && LOAD_(glGetVertexAttribdv, "glGetVertexAttribdv");
  ok = ok && LOAD_(glGetVertexAttribfv, "glGetVertexAttribfv");
  ok = ok && LOAD_(glGetVertexAttribiv, "glGetVertexAttribiv");
  ok = ok && LOAD_(glGetVertexAttribPointerv, "glGetVertexAttribPointerv");
  ok = ok && LOAD_(glIsProgram, "glIsProgram");
  ok = ok && LOAD_(glIsShader, "glIsShader");
  ok = ok && LOAD_(glLinkProgram, "glLinkProgram");
  ok = ok && LOAD_(glShaderSource, "glShaderSource");
  ok = ok && LOAD_(glUseProgram, "glUseProgram");
  ok = ok && LOAD_(glUniform1f, "glUniform1f");
  ok = ok && LOAD_(glUniform2f, "glUniform2f");
  ok = ok && LOAD_(glUniform3f, "glUniform3f");
  ok = ok && LOAD_(glUniform4f, "glUniform4f");
  ok = ok && LOAD_(glUniform1i, "glUniform1i");
  ok = ok && LOAD_(glUniform2i, "glUniform2i");
  ok = ok && LOAD_(glUniform3i, "glUniform3i");
  ok = ok && LOAD_(glUniform4i, "glUniform4i");
  ok = ok && LOAD_(glUniform1fv, "glUniform1fv");
  ok = ok && LOAD_(glUniform2fv, "glUniform2fv");
  ok = ok && LOAD_(glUniform3fv, "glUniform3fv");
  ok = ok && LOAD_(glUniform4fv, "glUniform4fv");
  ok = ok && LOAD_(glUniform1iv, "glUniform1iv");
  ok = ok && LOAD_(glUniform2iv, "glUniform2iv");
  ok = ok && LOAD_(glUniform3iv, "glUniform3iv");
  ok = ok && LOAD_(glUniform4iv, "glUniform4iv");
  ok = ok && LOAD_(glUniformMatrix2fv, "glUniformMatrix2fv");
  ok = ok && LOAD_(glUniformMatrix3fv, "glUniformMatrix3fv");
  ok = ok && LOAD_(glUniformMatrix4fv, "glUniformMatrix4fv");
  ok = ok && LOAD_(glValidateProgram, "glValidateProgram");
  ok = ok && LOAD_(glVertexAttrib1d, "glVertexAttrib1d");
  ok = ok && LOAD_(glVertexAttrib1dv, "glVertexAttrib1dv");
  ok = ok && LOAD_(glVertexAttrib1f, "glVertexAttrib1f");
  ok = ok && LOAD_(glVertexAttrib1fv, "glVertexAttrib1fv");
  ok = ok && LOAD_(glVertexAttrib1s, "glVertexAttrib1s");
  ok = ok && LOAD_(glVertexAttrib1sv, "glVertexAttrib1sv");
  ok = ok && LOAD_(glVertexAttrib2d, "glVertexAttrib2d");
  ok = ok && LOAD_(glVertexAttrib2dv, "glVertexAttrib2dv");
  ok = ok && LOAD_(glVertexAttrib2f, "glVertexAttrib2f");
  ok = ok && LOAD_(glVertexAttrib2fv, "glVertexAttrib2fv");
  ok = ok && LOAD_(glVertexAttrib2s, "glVertexAttrib2s");
  ok = ok && LOAD_(glVertexAttrib2sv, "glVertexAttrib2sv");
  ok = ok && LOAD_(glVertexAttrib3d, "glVertexAttrib3d");
  ok = ok && LOAD_(glVertexAttrib3dv, "glVertexAttrib3dv");
  ok = ok && LOAD_(glVertexAttrib3f, "glVertexAttrib3f");
  ok = ok && LOAD_(glVertexAttrib3fv, "glVertexAttrib3fv");
  ok = ok && LOAD_(glVertexAttrib3s, "glVertexAttrib3s");
  ok = ok && LOAD_(glVertexAttrib3sv, "glVertexAttrib3sv");
  ok = ok && LOAD_(glVertexAttrib4Nbv, "glVertexAttrib4Nbv");
  ok = ok && LOAD_(glVertexAttrib4Niv, "glVertexAttrib4Niv");
  ok = ok && LOAD_(glVertexAttrib4Nsv, "glVertexAttrib4Nsv");
  ok = ok && LOAD_(glVertexAttrib4Nub, "glVertexAttrib4Nub");
  ok = ok && LOAD_(glVertexAttrib4Nubv, "glVertexAttrib4Nubv");
  ok = ok && LOAD_(glVertexAttrib4Nuiv, "glVertexAttrib4Nuiv");
  ok = ok && LOAD_(glVertexAttrib4Nusv, "glVertexAttrib4Nusv");
  ok = ok && LOAD_(glVertexAttrib4bv, "glVertexAttrib4bv");
  ok = ok && LOAD_(glVertexAttrib4d, "glVertexAttrib4d");
  ok = ok && LOAD_(glVertexAttrib4dv, "glVertexAttrib4dv");
  ok = ok && LOAD_(glVertexAttrib4f, "glVertexAttrib4f");
  ok = ok && LOAD_(glVertexAttrib4fv, "glVertexAttrib4fv");
  ok = ok && LOAD_(glVertexAttrib4iv, "glVertexAttrib4iv");
  ok = ok && LOAD_(glVertexAttrib4s, "glVertexAttrib4s");
  ok = ok && LOAD_(glVertexAttrib4sv, "glVertexAttrib4sv");
  ok = ok && LOAD_(glVertexAttrib4ubv, "glVertexAttrib4ubv");
  ok = ok && LOAD_(glVertexAttrib4uiv, "glVertexAttrib4uiv");
  ok = ok && LOAD_(glVertexAttrib4usv, "glVertexAttrib4usv");
  ok = ok && LOAD_(glVertexAttribPointer, "glVertexAttribPointer");
#endif

#ifdef FEATURE_GL_VERSION_2_1
  ok = ok && LOAD_(glUniformMatrix2x3fv, "glUniformMatrix2x3fv");
  ok = ok && LOAD_(glUniformMatrix3x2fv, "glUniformMatrix3x2fv");
  ok = ok && LOAD_(glUniformMatrix2x4fv, "glUniformMatrix2x4fv");
  ok = ok && LOAD_(glUniformMatrix4x2fv, "glUniformMatrix4x2fv");
  ok = ok && LOAD_(glUniformMatrix3x4fv, "glUniformMatrix3x4fv");
  ok = ok && LOAD_(glUniformMatrix4x3fv, "glUniformMatrix4x3fv");
#endif

#ifdef FEATURE_GL_VERSION_3_0
  ok = ok && LOAD_(glColorMaski, "glColorMaski");
  ok = ok && LOAD_(glGetBooleani_v, "glGetBooleani_v");
  ok = ok && LOAD_(glGetIntegeri_v, "glGetIntegeri_v");
  ok = ok && LOAD_(glEnablei, "glEnablei");
  ok = ok && LOAD_(glDisablei, "glDisablei");
  ok = ok && LOAD_(glIsEnabledi, "glIsEnabledi");
  ok = ok && LOAD_(glBeginTransformFeedback, "glBeginTransformFeedback");
  ok = ok && LOAD_(glEndTransformFeedback, "glEndTransformFeedback");
  ok = ok && LOAD_(glBindBufferRange, "glBindBufferRange");
  ok = ok && LOAD_(glBindBufferBase, "glBindBufferBase");
  ok = ok && LOAD_(glTransformFeedbackVaryings, "glTransformFeedbackVaryings");
  ok = ok && LOAD_(glGetTransformFeedbackVarying, "glGetTransformFeedbackVarying");
  ok = ok && LOAD_(glClampColor, "glClampColor");
  ok = ok && LOAD_(glBeginConditionalRender, "glBeginConditionalRender");
  ok = ok && LOAD_(glEndConditionalRender, "glEndConditionalRender");
  ok = ok && LOAD_(glVertexAttribIPointer, "glVertexAttribIPointer");
  ok = ok && LOAD_(glGetVertexAttribIiv, "glGetVertexAttribIiv");
  ok = ok && LOAD_(glGetVertexAttribIuiv, "glGetVertexAttribIuiv");
  ok = ok && LOAD_(glVertexAttribI1i, "glVertexAttribI1i");
  ok = ok && LOAD_(glVertexAttribI2i, "glVertexAttribI2i");
  ok = ok && LOAD_(glVertexAttribI3i, "glVertexAttribI3i");
  ok = ok && LOAD_(glVertexAttribI4i, "glVertexAttribI4i");
  ok = ok && LOAD_(glVertexAttribI1ui, "glVertexAttribI1ui");
  ok = ok && LOAD_(glVertexAttribI2ui, "glVertexAttribI2ui");
  ok = ok && LOAD_(glVertexAttribI3ui, "glVertexAttribI3ui");
  ok = ok && LOAD_(glVertexAttribI4ui, "glVertexAttribI4ui");
  ok = ok && LOAD_(glVertexAttribI1iv, "glVertexAttribI1iv");
  ok = ok && LOAD_(glVertexAttribI2iv, "glVertexAttribI2iv");
  ok = ok && LOAD_(glVertexAttribI3iv, "glVertexAttribI3iv");
  ok = ok && LOAD_(glVertexAttribI4iv, "glVertexAttribI4iv");
  ok = ok && LOAD_(glVertexAttribI1uiv, "glVertexAttribI1uiv");
  ok = ok && LOAD_(glVertexAttribI2uiv, "glVertexAttribI2uiv");
  ok = ok && LOAD_(glVertexAttribI3uiv, "glVertexAttribI3uiv");
  ok = ok && LOAD_(glVertexAttribI4uiv, "glVertexAttribI4uiv");
  ok = ok && LOAD_(glVertexAttribI4bv, "glVertexAttribI4bv");
  ok = ok && LOAD_(glVertexAttribI4sv, "glVertexAttribI4sv");
  ok = ok && LOAD_(glVertexAttribI4ubv, "glVertexAttribI4ubv");
  ok = ok && LOAD_(glVertexAttribI4usv, "glVertexAttribI4usv");
  ok = ok && LOAD_(glGetUniformuiv, "glGetUniformuiv");
  ok = ok && LOAD_(glBindFragDataLocation, "glBindFragDataLocation");
  ok = ok && LOAD_(glGetFragDataLocation, "glGetFragDataLocation");
  ok = ok && LOAD_(glUniform1ui, "glUniform1ui");
  ok = ok && LOAD_(glUniform2ui, "glUniform2ui");
  ok = ok && LOAD_(glUniform3ui, "glUniform3ui");
  ok = ok && LOAD_(glUniform4ui, "glUniform4ui");
  ok = ok && LOAD_(glUniform1uiv, "glUniform1uiv");
  ok = ok && LOAD_(glUniform2uiv, "glUniform2uiv");
  ok = ok && LOAD_(glUniform3uiv, "glUniform3uiv");
  ok = ok && LOAD_(glUniform4uiv, "glUniform4uiv");
  ok = ok && LOAD_(glTexParameterIiv, "glTexParameterIiv");
  ok = ok && LOAD_(glTexParameterIuiv, "glTexParameterIuiv");
  ok = ok && LOAD_(glGetTexParameterIiv, "glGetTexParameterIiv");
  ok = ok && LOAD_(glGetTexParameterIuiv, "glGetTexParameterIuiv");
  ok = ok && LOAD_(glClearBufferiv, "glClearBufferiv");
  ok = ok && LOAD_(glClearBufferuiv, "glClearBufferuiv");
  ok = ok && LOAD_(glClearBufferfv, "glClearBufferfv");
  ok = ok && LOAD_(glClearBufferfi, "glClearBufferfi");
  ok = ok && LOAD_(glGetStringi, "glGetStringi");
  ok = ok && LOAD_(glIsRenderbuffer, "glIsRenderbuffer");
  ok = ok && LOAD_(glBindRenderbuffer, "glBindRenderbuffer");
  ok = ok && LOAD_(glDeleteRenderbuffers, "glDeleteRenderbuffers");
  ok = ok && LOAD_(glGenRenderbuffers, "glGenRenderbuffers");
  ok = ok && LOAD_(glRenderbufferStorage, "glRenderbufferStorage");
  ok = ok && LOAD_(glGetRenderbufferParameteriv, "glGetRenderbufferParameteriv");
  ok = ok && LOAD_(glIsFramebuffer, "glIsFramebuffer");
  ok = ok && LOAD_(glBindFramebuffer, "glBindFramebuffer");
  ok = ok && LOAD_(glDeleteFramebuffers, "glDeleteFramebuffers");
  ok = ok && LOAD_(glGenFramebuffers, "glGenFramebuffers");
  ok = ok && LOAD_(glCheckFramebufferStatus, "glCheckFramebufferStatus");
  ok = ok && LOAD_(glFramebufferTexture1D, "glFramebufferTexture1D");
  ok = ok && LOAD_(glFramebufferTexture2D, "glFramebufferTexture2D");
  ok = ok && LOAD_(glFramebufferTexture3D, "glFramebufferTexture3D");
  ok = ok && LOAD_(glFramebufferRenderbuffer, "glFramebufferRenderbuffer");
  ok = ok && LOAD_(glGetFramebufferAttachmentParameteriv, "glGetFramebufferAttachmentParameteriv");
  ok = ok && LOAD_(glGenerateMipmap, "glGenerateMipmap");
  ok = ok && LOAD_(glBlitFramebuffer, "glBlitFramebuffer");
  ok = ok && LOAD_(glRenderbufferStorageMultisample, "glRenderbufferStorageMultisample");
  ok = ok && LOAD_(glFramebufferTextureLayer, "glFramebufferTextureLayer");
  ok = ok && LOAD_(glMapBufferRange, "glMapBufferRange");
  ok = ok && LOAD_(glFlushMappedBufferRange, "glFlushMappedBufferRange");
  ok = ok && LOAD_(glBindVertexArray, "glBindVertexArray");
  ok = ok && LOAD_(glDeleteVertexArrays, "glDeleteVertexArrays");
  ok = ok && LOAD_(glGenVertexArrays, "glGenVertexArrays");
  ok = ok && LOAD_(glIsVertexArray, "glIsVertexArray");
#endif

#ifdef FEATURE_GL_VERSION_3_1
  ok = ok && LOAD_(glDrawArraysInstanced, "glDrawArraysInstanced");
  ok = ok && LOAD_(glDrawElementsInstanced, "glDrawElementsInstanced");
  ok = ok && LOAD_(glTexBuffer, "glTexBuffer");
  ok = ok && LOAD_(glPrimitiveRestartIndex, "glPrimitiveRestartIndex");
  ok = ok && LOAD_(glCopyBufferSubData, "glCopyBufferSubData");
  ok = ok && LOAD_(glGetUniformIndices, "glGetUniformIndices");
  ok = ok && LOAD_(glGetActiveUniformsiv, "glGetActiveUniformsiv");
  ok = ok && LOAD_(glGetActiveUniformName, "glGetActiveUniformName");
  ok = ok && LOAD_(glGetUniformBlockIndex, "glGetUniformBlockIndex");
  ok = ok && LOAD_(glGetActiveUniformBlockiv, "glGetActiveUniformBlockiv");
  ok = ok && LOAD_(glGetActiveUniformBlockName, "glGetActiveUniformBlockName");
  ok = ok && LOAD_(glUniformBlockBinding, "glUniformBlockBinding");
  ok = ok && LOAD_(glBindBufferRange, "glBindBufferRange");
  ok = ok && LOAD_(glBindBufferBase, "glBindBufferBase");
  ok = ok && LOAD_(glGetIntegeri_v, "glGetIntegeri_v");
#endif

#ifdef FEATURE_GL_VERSION_3_2
  ok = ok && LOAD_(glDrawElementsBaseVertex, "glDrawElementsBaseVertex");
  ok = ok && LOAD_(glDrawRangeElementsBaseVertex, "glDrawRangeElementsBaseVertex");
  ok = ok && LOAD_(glDrawElementsInstancedBaseVertex, "glDrawElementsInstancedBaseVertex");
  ok = ok && LOAD_(glMultiDrawElementsBaseVertex, "glMultiDrawElementsBaseVertex");
  ok = ok && LOAD_(glProvokingVertex, "glProvokingVertex");
  ok = ok && LOAD_(glFenceSync, "glFenceSync");
  ok = ok && LOAD_(glIsSync, "glIsSync");
  ok = ok && LOAD_(glDeleteSync, "glDeleteSync");
  ok = ok && LOAD_(glClientWaitSync, "glClientWaitSync");
  ok = ok && LOAD_(glWaitSync, "glWaitSync");
  ok = ok && LOAD_(glGetInteger64v, "glGetInteger64v");
  ok = ok && LOAD_(glGetSynciv, "glGetSynciv");
  ok = ok && LOAD_(glGetInteger64i_v, "glGetInteger64i_v");
  ok = ok && LOAD_(glGetBufferParameteri64v, "glGetBufferParameteri64v");
  ok = ok && LOAD_(glFramebufferTexture, "glFramebufferTexture");
  ok = ok && LOAD_(glTexImage2DMultisample, "glTexImage2DMultisample");
  ok = ok && LOAD_(glTexImage3DMultisample, "glTexImage3DMultisample");
  ok = ok && LOAD_(glGetMultisamplefv, "glGetMultisamplefv");
  ok = ok && LOAD_(glSampleMaski, "glSampleMaski");
#endif

#ifdef FEATURE_GL_VERSION_3_3
  ok = ok && LOAD_(glBindFragDataLocationIndexed, "glBindFragDataLocationIndexed");
  ok = ok && LOAD_(glGetFragDataIndex, "glGetFragDataIndex");
  ok = ok && LOAD_(glGenSamplers, "glGenSamplers");
  ok = ok && LOAD_(glDeleteSamplers, "glDeleteSamplers");
  ok = ok && LOAD_(glIsSampler, "glIsSampler");
  ok = ok && LOAD_(glBindSampler, "glBindSampler");
  ok = ok && LOAD_(glSamplerParameteri, "glSamplerParameteri");
  ok = ok && LOAD_(glSamplerParameteriv, "glSamplerParameteriv");
  ok = ok && LOAD_(glSamplerParameterf, "glSamplerParameterf");
  ok = ok && LOAD_(glSamplerParameterfv, "glSamplerParameterfv");
  ok = ok && LOAD_(glSamplerParameterIiv, "glSamplerParameterIiv");
  ok = ok && LOAD_(glSamplerParameterIuiv, "glSamplerParameterIuiv");
  ok = ok && LOAD_(glGetSamplerParameteriv, "glGetSamplerParameteriv");
  ok = ok && LOAD_(glGetSamplerParameterIiv, "glGetSamplerParameterIiv");
  ok = ok && LOAD_(glGetSamplerParameterfv, "glGetSamplerParameterfv");
  ok = ok && LOAD_(glGetSamplerParameterIuiv, "glGetSamplerParameterIuiv");
  ok = ok && LOAD_(glQueryCounter, "glQueryCounter");
  ok = ok && LOAD_(glGetQueryObjecti64v, "glGetQueryObjecti64v");
  ok = ok && LOAD_(glGetQueryObjectui64v, "glGetQueryObjectui64v");
  ok = ok && LOAD_(glVertexAttribDivisor, "glVertexAttribDivisor");
  ok = ok && LOAD_(glVertexAttribP1ui, "glVertexAttribP1ui");
  ok = ok && LOAD_(glVertexAttribP1uiv, "glVertexAttribP1uiv");
  ok = ok && LOAD_(glVertexAttribP2ui, "glVertexAttribP2ui");
  ok = ok && LOAD_(glVertexAttribP2uiv, "glVertexAttribP2uiv");
  ok = ok && LOAD_(glVertexAttribP3ui, "glVertexAttribP3ui");
  ok = ok && LOAD_(glVertexAttribP3uiv, "glVertexAttribP3uiv");
  ok = ok && LOAD_(glVertexAttribP4ui, "glVertexAttribP4ui");
  ok = ok && LOAD_(glVertexAttribP4uiv, "glVertexAttribP4uiv");
  ok = ok && LOAD_(glVertexP2ui, "glVertexP2ui");
  ok = ok && LOAD_(glVertexP2uiv, "glVertexP2uiv");
  ok = ok && LOAD_(glVertexP3ui, "glVertexP3ui");
  ok = ok && LOAD_(glVertexP3uiv, "glVertexP3uiv");
  ok = ok && LOAD_(glVertexP4ui, "glVertexP4ui");
  ok = ok && LOAD_(glVertexP4uiv, "glVertexP4uiv");
  ok = ok && LOAD_(glTexCoordP1ui, "glTexCoordP1ui");
  ok = ok && LOAD_(glTexCoordP1uiv, "glTexCoordP1uiv");
  ok = ok && LOAD_(glTexCoordP2ui, "glTexCoordP2ui");
  ok = ok && LOAD_(glTexCoordP2uiv, "glTexCoordP2uiv");
  ok = ok && LOAD_(glTexCoordP3ui, "glTexCoordP3ui");
  ok = ok && LOAD_(glTexCoordP3uiv, "glTexCoordP3uiv");
  ok = ok && LOAD_(glTexCoordP4ui, "glTexCoordP4ui");
  ok = ok && LOAD_(glTexCoordP4uiv, "glTexCoordP4uiv");
  ok = ok && LOAD_(glMultiTexCoordP1ui, "glMultiTexCoordP1ui");
  ok = ok && LOAD_(glMultiTexCoordP1uiv, "glMultiTexCoordP1uiv");
  ok = ok && LOAD_(glMultiTexCoordP2ui, "glMultiTexCoordP2ui");
  ok = ok && LOAD_(glMultiTexCoordP2uiv, "glMultiTexCoordP2uiv");
  ok = ok && LOAD_(glMultiTexCoordP3ui, "glMultiTexCoordP3ui");
  ok = ok && LOAD_(glMultiTexCoordP3uiv, "glMultiTexCoordP3uiv");
  ok = ok && LOAD_(glMultiTexCoordP4ui, "glMultiTexCoordP4ui");
  ok = ok && LOAD_(glMultiTexCoordP4uiv, "glMultiTexCoordP4uiv");
  ok = ok && LOAD_(glNormalP3ui, "glNormalP3ui");
  ok = ok && LOAD_(glNormalP3uiv, "glNormalP3uiv");
  ok = ok && LOAD_(glColorP3ui, "glColorP3ui");
  ok = ok && LOAD_(glColorP3uiv, "glColorP3uiv");
  ok = ok && LOAD_(glColorP4ui, "glColorP4ui");
  ok = ok && LOAD_(glColorP4uiv, "glColorP4uiv");
  ok = ok && LOAD_(glSecondaryColorP3ui, "glSecondaryColorP3ui");
  ok = ok && LOAD_(glSecondaryColorP3uiv, "glSecondaryColorP3uiv");
#endif

#ifdef FEATURE_GL_VERSION_4_0
  ok = ok && LOAD_(glMinSampleShading, "glMinSampleShading");
  ok = ok && LOAD_(glBlendEquationi, "glBlendEquationi");
  ok = ok && LOAD_(glBlendEquationSeparatei, "glBlendEquationSeparatei");
  ok = ok && LOAD_(glBlendFunci, "glBlendFunci");
  ok = ok && LOAD_(glBlendFuncSeparatei, "glBlendFuncSeparatei");
  ok = ok && LOAD_(glDrawArraysIndirect, "glDrawArraysIndirect");
  ok = ok && LOAD_(glDrawElementsIndirect, "glDrawElementsIndirect");
  ok = ok && LOAD_(glUniform1d, "glUniform1d");
  ok = ok && LOAD_(glUniform2d, "glUniform2d");
  ok = ok && LOAD_(glUniform3d, "glUniform3d");
  ok = ok && LOAD_(glUniform4d, "glUniform4d");
  ok = ok && LOAD_(glUniform1dv, "glUniform1dv");
  ok = ok && LOAD_(glUniform2dv, "glUniform2dv");
  ok = ok && LOAD_(glUniform3dv, "glUniform3dv");
  ok = ok && LOAD_(glUniform4dv, "glUniform4dv");
  ok = ok && LOAD_(glUniformMatrix2dv, "glUniformMatrix2dv");
  ok = ok && LOAD_(glUniformMatrix3dv, "glUniformMatrix3dv");
  ok = ok && LOAD_(glUniformMatrix4dv, "glUniformMatrix4dv");
  ok = ok && LOAD_(glUniformMatrix2x3dv, "glUniformMatrix2x3dv");
  ok = ok && LOAD_(glUniformMatrix2x4dv, "glUniformMatrix2x4dv");
  ok = ok && LOAD_(glUniformMatrix3x2dv, "glUniformMatrix3x2dv");
  ok = ok && LOAD_(glUniformMatrix3x4dv, "glUniformMatrix3x4dv");
  ok = ok && LOAD_(glUniformMatrix4x2dv, "glUniformMatrix4x2dv");
  ok = ok && LOAD_(glUniformMatrix4x3dv, "glUniformMatrix4x3dv");
  ok = ok && LOAD_(glGetUniformdv, "glGetUniformdv");
  ok = ok && LOAD_(glGetSubroutineUniformLocation, "glGetSubroutineUniformLocation");
  ok = ok && LOAD_(glGetSubroutineIndex, "glGetSubroutineIndex");
  ok = ok && LOAD_(glGetActiveSubroutineUniformiv, "glGetActiveSubroutineUniformiv");
  ok = ok && LOAD_(glGetActiveSubroutineUniformName, "glGetActiveSubroutineUniformName");
  ok = ok && LOAD_(glGetActiveSubroutineName, "glGetActiveSubroutineName");
  ok = ok && LOAD_(glUniformSubroutinesuiv, "glUniformSubroutinesuiv");
  ok = ok && LOAD_(glGetUniformSubroutineuiv, "glGetUniformSubroutineuiv");
  ok = ok && LOAD_(glGetProgramStageiv, "glGetProgramStageiv");
  ok = ok && LOAD_(glPatchParameteri, "glPatchParameteri");
  ok = ok && LOAD_(glPatchParameterfv, "glPatchParameterfv");
  ok = ok && LOAD_(glBindTransformFeedback, "glBindTransformFeedback");
  ok = ok && LOAD_(glDeleteTransformFeedbacks, "glDeleteTransformFeedbacks");
  ok = ok && LOAD_(glGenTransformFeedbacks, "glGenTransformFeedbacks");
  ok = ok && LOAD_(glIsTransformFeedback, "glIsTransformFeedback");
  ok = ok && LOAD_(glPauseTransformFeedback, "glPauseTransformFeedback");
  ok = ok && LOAD_(glResumeTransformFeedback, "glResumeTransformFeedback");
  ok = ok && LOAD_(glDrawTransformFeedback, "glDrawTransformFeedback");
  ok = ok && LOAD_(glDrawTransformFeedbackStream, "glDrawTransformFeedbackStream");
  ok = ok && LOAD_(glBeginQueryIndexed, "glBeginQueryIndexed");
  ok = ok && LOAD_(glEndQueryIndexed, "glEndQueryIndexed");
  ok = ok && LOAD_(glGetQueryIndexediv, "glGetQueryIndexediv");
#endif

#ifdef FEATURE_GL_VERSION_4_1
  ok = ok && LOAD_(glReleaseShaderCompiler, "glReleaseShaderCompiler");
  ok = ok && LOAD_(glShaderBinary, "glShaderBinary");
  ok = ok && LOAD_(glGetShaderPrecisionFormat, "glGetShaderPrecisionFormat");
  ok = ok && LOAD_(glDepthRangef, "glDepthRangef");
  ok = ok && LOAD_(glClearDepthf, "glClearDepthf");
  ok = ok && LOAD_(glGetProgramBinary, "glGetProgramBinary");
  ok = ok && LOAD_(glProgramBinary, "glProgramBinary");
  ok = ok && LOAD_(glProgramParameteri, "glProgramParameteri");
  ok = ok && LOAD_(glUseProgramStages, "glUseProgramStages");
  ok = ok && LOAD_(glActiveShaderProgram, "glActiveShaderProgram");
  ok = ok && LOAD_(glCreateShaderProgramv, "glCreateShaderProgramv");
  ok = ok && LOAD_(glBindProgramPipeline, "glBindProgramPipeline");
  ok = ok && LOAD_(glDeleteProgramPipelines, "glDeleteProgramPipelines");
  ok = ok && LOAD_(glGenProgramPipelines, "glGenProgramPipelines");
  ok = ok && LOAD_(glIsProgramPipeline, "glIsProgramPipeline");
  ok = ok && LOAD_(glGetProgramPipelineiv, "glGetProgramPipelineiv");
  ok = ok && LOAD_(glProgramParameteri, "glProgramParameteri");
  ok = ok && LOAD_(glProgramUniform1i, "glProgramUniform1i");
  ok = ok && LOAD_(glProgramUniform1iv, "glProgramUniform1iv");
  ok = ok && LOAD_(glProgramUniform1f, "glProgramUniform1f");
  ok = ok && LOAD_(glProgramUniform1fv, "glProgramUniform1fv");
  ok = ok && LOAD_(glProgramUniform1d, "glProgramUniform1d");
  ok = ok && LOAD_(glProgramUniform1dv, "glProgramUniform1dv");
  ok = ok && LOAD_(glProgramUniform1ui, "glProgramUniform1ui");
  ok = ok && LOAD_(glProgramUniform1uiv, "glProgramUniform1uiv");
  ok = ok && LOAD_(glProgramUniform2i, "glProgramUniform2i");
  ok = ok && LOAD_(glProgramUniform2iv, "glProgramUniform2iv");
  ok = ok && LOAD_(glProgramUniform2f, "glProgramUniform2f");
  ok = ok && LOAD_(glProgramUniform2fv, "glProgramUniform2fv");
  ok = ok && LOAD_(glProgramUniform2d, "glProgramUniform2d");
  ok = ok && LOAD_(glProgramUniform2dv, "glProgramUniform2dv");
  ok = ok && LOAD_(glProgramUniform2ui, "glProgramUniform2ui");
  ok = ok && LOAD_(glProgramUniform2uiv, "glProgramUniform2uiv");
  ok = ok && LOAD_(glProgramUniform3i, "glProgramUniform3i");
  ok = ok && LOAD_(glProgramUniform3iv, "glProgramUniform3iv");
  ok = ok && LOAD_(glProgramUniform3f, "glProgramUniform3f");
  ok = ok && LOAD_(glProgramUniform3fv, "glProgramUniform3fv");
  ok = ok && LOAD_(glProgramUniform3d, "glProgramUniform3d");
  ok = ok && LOAD_(glProgramUniform3dv, "glProgramUniform3dv");
  ok = ok && LOAD_(glProgramUniform3ui, "glProgramUniform3ui");
  ok = ok && LOAD_(glProgramUniform3uiv, "glProgramUniform3uiv");
  ok = ok && LOAD_(glProgramUniform4i, "glProgramUniform4i");
  ok = ok && LOAD_(glProgramUniform4iv, "glProgramUniform4iv");
  ok = ok && LOAD_(glProgramUniform4f, "glProgramUniform4f");
  ok = ok && LOAD_(glProgramUniform4fv, "glProgramUniform4fv");
  ok = ok && LOAD_(glProgramUniform4d, "glProgramUniform4d");
  ok = ok && LOAD_(glProgramUniform4dv, "glProgramUniform4dv");
  ok = ok && LOAD_(glProgramUniform4ui, "glProgramUniform4ui");
  ok = ok && LOAD_(glProgramUniform4uiv, "glProgramUniform4uiv");
  ok = ok && LOAD_(glProgramUniformMatrix2fv, "glProgramUniformMatrix2fv");
  ok = ok && LOAD_(glProgramUniformMatrix3fv, "glProgramUniformMatrix3fv");
  ok = ok && LOAD_(glProgramUniformMatrix4fv, "glProgramUniformMatrix4fv");
  ok = ok && LOAD_(glProgramUniformMatrix2dv, "glProgramUniformMatrix2dv");
  ok = ok && LOAD_(glProgramUniformMatrix3dv, "glProgramUniformMatrix3dv");
  ok = ok && LOAD_(glProgramUniformMatrix4dv, "glProgramUniformMatrix4dv");
  ok = ok && LOAD_(glProgramUniformMatrix2x3fv, "glProgramUniformMatrix2x3fv");
  ok = ok && LOAD_(glProgramUniformMatrix3x2fv, "glProgramUniformMatrix3x2fv");
  ok = ok && LOAD_(glProgramUniformMatrix2x4fv, "glProgramUniformMatrix2x4fv");
  ok = ok && LOAD_(glProgramUniformMatrix4x2fv, "glProgramUniformMatrix4x2fv");
  ok = ok && LOAD_(glProgramUniformMatrix3x4fv, "glProgramUniformMatrix3x4fv");
  ok = ok && LOAD_(glProgramUniformMatrix4x3fv, "glProgramUniformMatrix4x3fv");
  ok = ok && LOAD_(glProgramUniformMatrix2x3dv, "glProgramUniformMatrix2x3dv");
  ok = ok && LOAD_(glProgramUniformMatrix3x2dv, "glProgramUniformMatrix3x2dv");
  ok = ok && LOAD_(glProgramUniformMatrix2x4dv, "glProgramUniformMatrix2x4dv");
  ok = ok && LOAD_(glProgramUniformMatrix4x2dv, "glProgramUniformMatrix4x2dv");
  ok = ok && LOAD_(glProgramUniformMatrix3x4dv, "glProgramUniformMatrix3x4dv");
  ok = ok && LOAD_(glProgramUniformMatrix4x3dv, "glProgramUniformMatrix4x3dv");
  ok = ok && LOAD_(glValidateProgramPipeline, "glValidateProgramPipeline");
  ok = ok && LOAD_(glGetProgramPipelineInfoLog, "glGetProgramPipelineInfoLog");
  ok = ok && LOAD_(glVertexAttribL1d, "glVertexAttribL1d");
  ok = ok && LOAD_(glVertexAttribL2d, "glVertexAttribL2d");
  ok = ok && LOAD_(glVertexAttribL3d, "glVertexAttribL3d");
  ok = ok && LOAD_(glVertexAttribL4d, "glVertexAttribL4d");
  ok = ok && LOAD_(glVertexAttribL1dv, "glVertexAttribL1dv");
  ok = ok && LOAD_(glVertexAttribL2dv, "glVertexAttribL2dv");
  ok = ok && LOAD_(glVertexAttribL3dv, "glVertexAttribL3dv");
  ok = ok && LOAD_(glVertexAttribL4dv, "glVertexAttribL4dv");
  ok = ok && LOAD_(glVertexAttribLPointer, "glVertexAttribLPointer");
  ok = ok && LOAD_(glGetVertexAttribLdv, "glGetVertexAttribLdv");
  ok = ok && LOAD_(glViewportArrayv, "glViewportArrayv");
  ok = ok && LOAD_(glViewportIndexedf, "glViewportIndexedf");
  ok = ok && LOAD_(glViewportIndexedfv, "glViewportIndexedfv");
  ok = ok && LOAD_(glScissorArrayv, "glScissorArrayv");
  ok = ok && LOAD_(glScissorIndexed, "glScissorIndexed");
  ok = ok && LOAD_(glScissorIndexedv, "glScissorIndexedv");
  ok = ok && LOAD_(glDepthRangeArrayv, "glDepthRangeArrayv");
  ok = ok && LOAD_(glDepthRangeIndexed, "glDepthRangeIndexed");
  ok = ok && LOAD_(glGetFloati_v, "glGetFloati_v");
  ok = ok && LOAD_(glGetDoublei_v, "glGetDoublei_v");
#endif

#ifdef FEATURE_GL_VERSION_4_2
  ok = ok && LOAD_(glDrawArraysInstancedBaseInstance, "glDrawArraysInstancedBaseInstance");
  ok = ok && LOAD_(glDrawElementsInstancedBaseInstance, "glDrawElementsInstancedBaseInstance");
  ok = ok && LOAD_(glDrawElementsInstancedBaseVertexBaseInstance, "glDrawElementsInstancedBaseVertexBaseInstance");
  ok = ok && LOAD_(glGetInternalformativ, "glGetInternalformativ");
  ok = ok && LOAD_(glGetActiveAtomicCounterBufferiv, "glGetActiveAtomicCounterBufferiv");
  ok = ok && LOAD_(glBindImageTexture, "glBindImageTexture");
  ok = ok && LOAD_(glMemoryBarrier, "glMemoryBarrier");
  ok = ok && LOAD_(glTexStorage1D, "glTexStorage1D");
  ok = ok && LOAD_(glTexStorage2D, "glTexStorage2D");
  ok = ok && LOAD_(glTexStorage3D, "glTexStorage3D");
  ok = ok && LOAD_(glDrawTransformFeedbackInstanced, "glDrawTransformFeedbackInstanced");
  ok = ok && LOAD_(glDrawTransformFeedbackStreamInstanced, "glDrawTransformFeedbackStreamInstanced");
#endif

#ifdef FEATURE_GL_VERSION_4_3
  ok = ok && LOAD_(glClearBufferData, "glClearBufferData");
  ok = ok && LOAD_(glClearBufferSubData, "glClearBufferSubData");
  ok = ok && LOAD_(glDispatchCompute, "glDispatchCompute");
  ok = ok && LOAD_(glDispatchComputeIndirect, "glDispatchComputeIndirect");
  ok = ok && LOAD_(glCopyImageSubData, "glCopyImageSubData");
  ok = ok && LOAD_(glFramebufferParameteri, "glFramebufferParameteri");
  ok = ok && LOAD_(glGetFramebufferParameteriv, "glGetFramebufferParameteriv");
  ok = ok && LOAD_(glGetInternalformati64v, "glGetInternalformati64v");
  ok = ok && LOAD_(glInvalidateTexSubImage, "glInvalidateTexSubImage");
  ok = ok && LOAD_(glInvalidateTexImage, "glInvalidateTexImage");
  ok = ok && LOAD_(glInvalidateBufferSubData, "glInvalidateBufferSubData");
  ok = ok && LOAD_(glInvalidateBufferData, "glInvalidateBufferData");
  ok = ok && LOAD_(glInvalidateFramebuffer, "glInvalidateFramebuffer");
  ok = ok && LOAD_(glInvalidateSubFramebuffer, "glInvalidateSubFramebuffer");
  ok = ok && LOAD_(glMultiDrawArraysIndirect, "glMultiDrawArraysIndirect");
  ok = ok && LOAD_(glMultiDrawElementsIndirect, "glMultiDrawElementsIndirect");
  ok = ok && LOAD_(glGetProgramInterfaceiv, "glGetProgramInterfaceiv");
  ok = ok && LOAD_(glGetProgramResourceIndex, "glGetProgramResourceIndex");
  ok = ok && LOAD_(glGetProgramResourceName, "glGetProgramResourceName");
  ok = ok && LOAD_(glGetProgramResourceiv, "glGetProgramResourceiv");
  ok = ok && LOAD_(glGetProgramResourceLocation, "glGetProgramResourceLocation");
  ok = ok && LOAD_(glGetProgramResourceLocationIndex, "glGetProgramResourceLocationIndex");
  ok = ok && LOAD_(glShaderStorageBlockBinding, "glShaderStorageBlockBinding");
  ok = ok && LOAD_(glTexBufferRange, "glTexBufferRange");
  ok = ok && LOAD_(glTexStorage2DMultisample, "glTexStorage2DMultisample");
  ok = ok && LOAD_(glTexStorage3DMultisample, "glTexStorage3DMultisample");
  ok = ok && LOAD_(glTextureView, "glTextureView");
  ok = ok && LOAD_(glBindVertexBuffer, "glBindVertexBuffer");
  ok = ok && LOAD_(glVertexAttribFormat, "glVertexAttribFormat");
  ok = ok && LOAD_(glVertexAttribIFormat, "glVertexAttribIFormat");
  ok = ok && LOAD_(glVertexAttribLFormat, "glVertexAttribLFormat");
  ok = ok && LOAD_(glVertexAttribBinding, "glVertexAttribBinding");
  ok = ok && LOAD_(glVertexBindingDivisor, "glVertexBindingDivisor");
  ok = ok && LOAD_(glDebugMessageControl, "glDebugMessageControl");
  ok = ok && LOAD_(glDebugMessageInsert, "glDebugMessageInsert");
  ok = ok && LOAD_(glDebugMessageCallback, "glDebugMessageCallback");
  ok = ok && LOAD_(glGetDebugMessageLog, "glGetDebugMessageLog");
  ok = ok && LOAD_(glPushDebugGroup, "glPushDebugGroup");
  ok = ok && LOAD_(glPopDebugGroup, "glPopDebugGroup");
  ok = ok && LOAD_(glObjectLabel, "glObjectLabel");
  ok = ok && LOAD_(glGetObjectLabel, "glGetObjectLabel");
  ok = ok && LOAD_(glObjectPtrLabel, "glObjectPtrLabel");
  ok = ok && LOAD_(glGetObjectPtrLabel, "glGetObjectPtrLabel");
  ok = ok && LOAD_(glGetPointerv, "glGetPointerv");
#endif

#ifdef FEATURE_GL_VERSION_4_4
  ok = ok && LOAD_(glBufferStorage, "glBufferStorage");
  ok = ok && LOAD_(glClearTexImage, "glClearTexImage");
  ok = ok && LOAD_(glClearTexSubImage, "glClearTexSubImage");
  ok = ok && LOAD_(glBindBuffersBase, "glBindBuffersBase");
  ok = ok && LOAD_(glBindBuffersRange, "glBindBuffersRange");
  ok = ok && LOAD_(glBindTextures, "glBindTextures");
  ok = ok && LOAD_(glBindSamplers, "glBindSamplers");
  ok = ok && LOAD_(glBindImageTextures, "glBindImageTextures");
  ok = ok && LOAD_(glBindVertexBuffers, "glBindVertexBuffers");
#endif

#ifdef FEATURE_GL_VERSION_4_5
  ok = ok && LOAD_(glClipControl, "glClipControl");
  ok = ok && LOAD_(glCreateTransformFeedbacks, "glCreateTransformFeedbacks");
  ok = ok && LOAD_(glTransformFeedbackBufferBase, "glTransformFeedbackBufferBase");
  ok = ok && LOAD_(glTransformFeedbackBufferRange, "glTransformFeedbackBufferRange");
  ok = ok && LOAD_(glGetTransformFeedbackiv, "glGetTransformFeedbackiv");
  ok = ok && LOAD_(glGetTransformFeedbacki_v, "glGetTransformFeedbacki_v");
  ok = ok && LOAD_(glGetTransformFeedbacki64_v, "glGetTransformFeedbacki64_v");
  ok = ok && LOAD_(glCreateBuffers, "glCreateBuffers");
  ok = ok && LOAD_(glNamedBufferStorage, "glNamedBufferStorage");
  ok = ok && LOAD_(glNamedBufferData, "glNamedBufferData");
  ok = ok && LOAD_(glNamedBufferSubData, "glNamedBufferSubData");
  ok = ok && LOAD_(glCopyNamedBufferSubData, "glCopyNamedBufferSubData");
  ok = ok && LOAD_(glClearNamedBufferData, "glClearNamedBufferData");
  ok = ok && LOAD_(glClearNamedBufferSubData, "glClearNamedBufferSubData");
  ok = ok && LOAD_(glMapNamedBuffer, "glMapNamedBuffer");
  ok = ok && LOAD_(glMapNamedBufferRange, "glMapNamedBufferRange");
  ok = ok && LOAD_(glUnmapNamedBuffer, "glUnmapNamedBuffer");
  ok = ok && LOAD_(glFlushMappedNamedBufferRange, "glFlushMappedNamedBufferRange");
  ok = ok && LOAD_(glGetNamedBufferParameteriv, "glGetNamedBufferParameteriv");
  ok = ok && LOAD_(glGetNamedBufferParameteri64v, "glGetNamedBufferParameteri64v");
  ok = ok && LOAD_(glGetNamedBufferPointerv, "glGetNamedBufferPointerv");
  ok = ok && LOAD_(glGetNamedBufferSubData, "glGetNamedBufferSubData");
  ok = ok && LOAD_(glCreateFramebuffers, "glCreateFramebuffers");
  ok = ok && LOAD_(glNamedFramebufferRenderbuffer, "glNamedFramebufferRenderbuffer");
  ok = ok && LOAD_(glNamedFramebufferParameteri, "glNamedFramebufferParameteri");
  ok = ok && LOAD_(glNamedFramebufferTexture, "glNamedFramebufferTexture");
  ok = ok && LOAD_(glNamedFramebufferTextureLayer, "glNamedFramebufferTextureLayer");
  ok = ok && LOAD_(glNamedFramebufferDrawBuffer, "glNamedFramebufferDrawBuffer");
  ok = ok && LOAD_(glNamedFramebufferDrawBuffers, "glNamedFramebufferDrawBuffers");
  ok = ok && LOAD_(glNamedFramebufferReadBuffer, "glNamedFramebufferReadBuffer");
  ok = ok && LOAD_(glInvalidateNamedFramebufferData, "glInvalidateNamedFramebufferData");
  ok = ok && LOAD_(glInvalidateNamedFramebufferSubData, "glInvalidateNamedFramebufferSubData");
  ok = ok && LOAD_(glClearNamedFramebufferiv, "glClearNamedFramebufferiv");
  ok = ok && LOAD_(glClearNamedFramebufferuiv, "glClearNamedFramebufferuiv");
  ok = ok && LOAD_(glClearNamedFramebufferfv, "glClearNamedFramebufferfv");
  ok = ok && LOAD_(glClearNamedFramebufferfi, "glClearNamedFramebufferfi");
  ok = ok && LOAD_(glBlitNamedFramebuffer, "glBlitNamedFramebuffer");
  ok = ok && LOAD_(glCheckNamedFramebufferStatus, "glCheckNamedFramebufferStatus");
  ok = ok && LOAD_(glGetNamedFramebufferParameteriv, "glGetNamedFramebufferParameteriv");
  ok = ok && LOAD_(glGetNamedFramebufferAttachmentParameteriv, "glGetNamedFramebufferAttachmentParameteriv");
  ok = ok && LOAD_(glCreateRenderbuffers, "glCreateRenderbuffers");
  ok = ok && LOAD_(glNamedRenderbufferStorage, "glNamedRenderbufferStorage");
  ok = ok && LOAD_(glNamedRenderbufferStorageMultisample, "glNamedRenderbufferStorageMultisample");
  ok = ok && LOAD_(glGetNamedRenderbufferParameteriv, "glGetNamedRenderbufferParameteriv");
  ok = ok && LOAD_(glCreateTextures, "glCreateTextures");
  ok = ok && LOAD_(glTextureBuffer, "glTextureBuffer");
  ok = ok && LOAD_(glTextureBufferRange, "glTextureBufferRange");
  ok = ok && LOAD_(glTextureStorage1D, "glTextureStorage1D");
  ok = ok && LOAD_(glTextureStorage2D, "glTextureStorage2D");
  ok = ok && LOAD_(glTextureStorage3D, "glTextureStorage3D");
  ok = ok && LOAD_(glTextureStorage2DMultisample, "glTextureStorage2DMultisample");
  ok = ok && LOAD_(glTextureStorage3DMultisample, "glTextureStorage3DMultisample");
  ok = ok && LOAD_(glTextureSubImage1D, "glTextureSubImage1D");
  ok = ok && LOAD_(glTextureSubImage2D, "glTextureSubImage2D");
  ok = ok && LOAD_(glTextureSubImage3D, "glTextureSubImage3D");
  ok = ok && LOAD_(glCompressedTextureSubImage1D, "glCompressedTextureSubImage1D");
  ok = ok && LOAD_(glCompressedTextureSubImage2D, "glCompressedTextureSubImage2D");
  ok = ok && LOAD_(glCompressedTextureSubImage3D, "glCompressedTextureSubImage3D");
  ok = ok && LOAD_(glCopyTextureSubImage1D, "glCopyTextureSubImage1D");
  ok = ok && LOAD_(glCopyTextureSubImage2D, "glCopyTextureSubImage2D");
  ok = ok && LOAD_(glCopyTextureSubImage3D, "glCopyTextureSubImage3D");
  ok = ok && LOAD_(glTextureParameterf, "glTextureParameterf");
  ok = ok && LOAD_(glTextureParameterfv, "glTextureParameterfv");
  ok = ok && LOAD_(glTextureParameteri, "glTextureParameteri");
  ok = ok && LOAD_(glTextureParameterIiv, "glTextureParameterIiv");
  ok = ok && LOAD_(glTextureParameterIuiv, "glTextureParameterIuiv");
  ok = ok && LOAD_(glTextureParameteriv, "glTextureParameteriv");
  ok = ok && LOAD_(glGenerateTextureMipmap, "glGenerateTextureMipmap");
  ok = ok && LOAD_(glBindTextureUnit, "glBindTextureUnit");
  ok = ok && LOAD_(glGetTextureImage, "glGetTextureImage");
  ok = ok && LOAD_(glGetCompressedTextureImage, "glGetCompressedTextureImage");
  ok = ok && LOAD_(glGetTextureLevelParameterfv, "glGetTextureLevelParameterfv");
  ok = ok && LOAD_(glGetTextureLevelParameteriv, "glGetTextureLevelParameteriv");
  ok = ok && LOAD_(glGetTextureParameterfv, "glGetTextureParameterfv");
  ok = ok && LOAD_(glGetTextureParameterIiv, "glGetTextureParameterIiv");
  ok = ok && LOAD_(glGetTextureParameterIuiv, "glGetTextureParameterIuiv");
  ok = ok && LOAD_(glGetTextureParameteriv, "glGetTextureParameteriv");
  ok = ok && LOAD_(glCreateVertexArrays, "glCreateVertexArrays");
  ok = ok && LOAD_(glDisableVertexArrayAttrib, "glDisableVertexArrayAttrib");
  ok = ok && LOAD_(glEnableVertexArrayAttrib, "glEnableVertexArrayAttrib");
  ok = ok && LOAD_(glVertexArrayElementBuffer, "glVertexArrayElementBuffer");
  ok = ok && LOAD_(glVertexArrayVertexBuffer, "glVertexArrayVertexBuffer");
  ok = ok && LOAD_(glVertexArrayVertexBuffers, "glVertexArrayVertexBuffers");
  ok = ok && LOAD_(glVertexArrayAttribBinding, "glVertexArrayAttribBinding");
  ok = ok && LOAD_(glVertexArrayAttribFormat, "glVertexArrayAttribFormat");
  ok = ok && LOAD_(glVertexArrayAttribIFormat, "glVertexArrayAttribIFormat");
  ok = ok && LOAD_(glVertexArrayAttribLFormat, "glVertexArrayAttribLFormat");
  ok = ok && LOAD_(glVertexArrayBindingDivisor, "glVertexArrayBindingDivisor");
  ok = ok && LOAD_(glGetVertexArrayiv, "glGetVertexArrayiv");
  ok = ok && LOAD_(glGetVertexArrayIndexediv, "glGetVertexArrayIndexediv");
  ok = ok && LOAD_(glGetVertexArrayIndexed64iv, "glGetVertexArrayIndexed64iv");
  ok = ok && LOAD_(glCreateSamplers, "glCreateSamplers");
  ok = ok && LOAD_(glCreateProgramPipelines, "glCreateProgramPipelines");
  ok = ok && LOAD_(glCreateQueries, "glCreateQueries");
  ok = ok && LOAD_(glGetQueryBufferObjecti64v, "glGetQueryBufferObjecti64v");
  ok = ok && LOAD_(glGetQueryBufferObjectiv, "glGetQueryBufferObjectiv");
  ok = ok && LOAD_(glGetQueryBufferObjectui64v, "glGetQueryBufferObjectui64v");
  ok = ok && LOAD_(glGetQueryBufferObjectuiv, "glGetQueryBufferObjectuiv");
  ok = ok && LOAD_(glMemoryBarrierByRegion, "glMemoryBarrierByRegion");
  ok = ok && LOAD_(glGetTextureSubImage, "glGetTextureSubImage");
  ok = ok && LOAD_(glGetCompressedTextureSubImage, "glGetCompressedTextureSubImage");
  ok = ok && LOAD_(glGetGraphicsResetStatus, "glGetGraphicsResetStatus");
  ok = ok && LOAD_(glGetnCompressedTexImage, "glGetnCompressedTexImage");
  ok = ok && LOAD_(glGetnTexImage, "glGetnTexImage");
  ok = ok && LOAD_(glGetnUniformdv, "glGetnUniformdv");
  ok = ok && LOAD_(glGetnUniformfv, "glGetnUniformfv");
  ok = ok && LOAD_(glGetnUniformiv, "glGetnUniformiv");
  ok = ok && LOAD_(glGetnUniformuiv, "glGetnUniformuiv");
  ok = ok && LOAD_(glReadnPixels, "glReadnPixels");
  ok = ok && LOAD_(glGetnMapdv, "glGetnMapdv");
  ok = ok && LOAD_(glGetnMapfv, "glGetnMapfv");
  ok = ok && LOAD_(glGetnMapiv, "glGetnMapiv");
  ok = ok && LOAD_(glGetnPixelMapfv, "glGetnPixelMapfv");
  ok = ok && LOAD_(glGetnPixelMapuiv, "glGetnPixelMapuiv");
  ok = ok && LOAD_(glGetnPixelMapusv, "glGetnPixelMapusv");
  ok = ok && LOAD_(glGetnPolygonStipple, "glGetnPolygonStipple");
  ok = ok && LOAD_(glGetnColorTable, "glGetnColorTable");
  ok = ok && LOAD_(glGetnConvolutionFilter, "glGetnConvolutionFilter");
  ok = ok && LOAD_(glGetnSeparableFilter, "glGetnSeparableFilter");
  ok = ok && LOAD_(glGetnHistogram, "glGetnHistogram");
  ok = ok && LOAD_(glGetnMinmax, "glGetnMinmax");
  ok = ok && LOAD_(glTextureBarrier, "glTextureBarrier");
#endif

#ifdef FEATURE_GL_VERSION_4_6
  ok = ok && LOAD_(glSpecializeShader, "glSpecializeShader");
  ok = ok && LOAD_(glMultiDrawArraysIndirectCount, "glMultiDrawArraysIndirectCount");
  ok = ok && LOAD_(glMultiDrawElementsIndirectCount, "glMultiDrawElementsIndirectCount");
  ok = ok && LOAD_(glPolygonOffsetClamp, "glPolygonOffsetClamp");
#endif

#ifdef FEATURE_GL_VERSION_ES_CM_1_0
  ok = ok && LOAD_(glAlphaFunc, "glAlphaFunc");
  ok = ok && LOAD_(glClearColor, "glClearColor");
  ok = ok && LOAD_(glClearDepthf, "glClearDepthf");
  ok = ok && LOAD_(glClipPlanef, "glClipPlanef");
  ok = ok && LOAD_(glColor4f, "glColor4f");
  ok = ok && LOAD_(glDepthRangef, "glDepthRangef");
  ok = ok && LOAD_(glFogf, "glFogf");
  ok = ok && LOAD_(glFogfv, "glFogfv");
  ok = ok && LOAD_(glFrustumf, "glFrustumf");
  ok = ok && LOAD_(glGetClipPlanef, "glGetClipPlanef");
  ok = ok && LOAD_(glGetFloatv, "glGetFloatv");
  ok = ok && LOAD_(glGetLightfv, "glGetLightfv");
  ok = ok && LOAD_(glGetMaterialfv, "glGetMaterialfv");
  ok = ok && LOAD_(glGetTexEnvfv, "glGetTexEnvfv");
  ok = ok && LOAD_(glGetTexParameterfv, "glGetTexParameterfv");
  ok = ok && LOAD_(glLightModelf, "glLightModelf");
  ok = ok && LOAD_(glLightModelfv, "glLightModelfv");
  ok = ok && LOAD_(glLightf, "glLightf");
  ok = ok && LOAD_(glLightfv, "glLightfv");
  ok = ok && LOAD_(glLineWidth, "glLineWidth");
  ok = ok && LOAD_(glLoadMatrixf, "glLoadMatrixf");
  ok = ok && LOAD_(glMaterialf, "glMaterialf");
  ok = ok && LOAD_(glMaterialfv, "glMaterialfv");
  ok = ok && LOAD_(glMultMatrixf, "glMultMatrixf");
  ok = ok && LOAD_(glMultiTexCoord4f, "glMultiTexCoord4f");
  ok = ok && LOAD_(glNormal3f, "glNormal3f");
  ok = ok && LOAD_(glOrthof, "glOrthof");
  ok = ok && LOAD_(glPointParameterf, "glPointParameterf");
  ok = ok && LOAD_(glPointParameterfv, "glPointParameterfv");
  ok = ok && LOAD_(glPointSize, "glPointSize");
  ok = ok && LOAD_(glPolygonOffset, "glPolygonOffset");
  ok = ok && LOAD_(glRotatef, "glRotatef");
  ok = ok && LOAD_(glScalef, "glScalef");
  ok = ok && LOAD_(glTexEnvf, "glTexEnvf");
  ok = ok && LOAD_(glTexEnvfv, "glTexEnvfv");
  ok = ok && LOAD_(glTexParameterf, "glTexParameterf");
  ok = ok && LOAD_(glTexParameterfv, "glTexParameterfv");
  ok = ok && LOAD_(glTranslatef, "glTranslatef");
  ok = ok && LOAD_(glActiveTexture, "glActiveTexture");
  ok = ok && LOAD_(glAlphaFuncx, "glAlphaFuncx");
  ok = ok && LOAD_(glBindBuffer, "glBindBuffer");
  ok = ok && LOAD_(glBindTexture, "glBindTexture");
  ok = ok && LOAD_(glBlendFunc, "glBlendFunc");
  ok = ok && LOAD_(glBufferData, "glBufferData");
  ok = ok && LOAD_(glBufferSubData, "glBufferSubData");
  ok = ok && LOAD_(glClear, "glClear");
  ok = ok && LOAD_(glClearColorx, "glClearColorx");
  ok = ok && LOAD_(glClearDepthx, "glClearDepthx");
  ok = ok && LOAD_(glClearStencil, "glClearStencil");
  ok = ok && LOAD_(glClientActiveTexture, "glClientActiveTexture");
  ok = ok && LOAD_(glClipPlanex, "glClipPlanex");
  ok = ok && LOAD_(glColor4ub, "glColor4ub");
  ok = ok && LOAD_(glColor4x, "glColor4x");
  ok = ok && LOAD_(glColorMask, "glColorMask");
  ok = ok && LOAD_(glColorPointer, "glColorPointer");
  ok = ok && LOAD_(glCompressedTexImage2D, "glCompressedTexImage2D");
  ok = ok && LOAD_(glCompressedTexSubImage2D, "glCompressedTexSubImage2D");
  ok = ok && LOAD_(glCopyTexImage2D, "glCopyTexImage2D");
  ok = ok && LOAD_(glCopyTexSubImage2D, "glCopyTexSubImage2D");
  ok = ok && LOAD_(glCullFace, "glCullFace");
  ok = ok && LOAD_(glDeleteBuffers, "glDeleteBuffers");
  ok = ok && LOAD_(glDeleteTextures, "glDeleteTextures");
  ok = ok && LOAD_(glDepthFunc, "glDepthFunc");
  ok = ok && LOAD_(glDepthMask, "glDepthMask");
  ok = ok && LOAD_(glDepthRangex, "glDepthRangex");
  ok = ok && LOAD_(glDisable, "glDisable");
  ok = ok && LOAD_(glDisableClientState, "glDisableClientState");
  ok = ok && LOAD_(glDrawArrays, "glDrawArrays");
  ok = ok && LOAD_(glDrawElements, "glDrawElements");
  ok = ok && LOAD_(glEnable, "glEnable");
  ok = ok && LOAD_(glEnableClientState, "glEnableClientState");
  ok = ok && LOAD_(glFinish, "glFinish");
  ok = ok && LOAD_(glFlush, "glFlush");
  ok = ok && LOAD_(glFogx, "glFogx");
  ok = ok && LOAD_(glFogxv, "glFogxv");
  ok = ok && LOAD_(glFrontFace, "glFrontFace");
  ok = ok && LOAD_(glFrustumx, "glFrustumx");
  ok = ok && LOAD_(glGetBooleanv, "glGetBooleanv");
  ok = ok && LOAD_(glGetBufferParameteriv, "glGetBufferParameteriv");
  ok = ok && LOAD_(glGetClipPlanex, "glGetClipPlanex");
  ok = ok && LOAD_(glGenBuffers, "glGenBuffers");
  ok = ok && LOAD_(glGenTextures, "glGenTextures");
  ok = ok && LOAD_(glGetError, "glGetError");
  ok = ok && LOAD_(glGetFixedv, "glGetFixedv");
  ok = ok && LOAD_(glGetIntegerv, "glGetIntegerv");
  ok = ok && LOAD_(glGetLightxv, "glGetLightxv");
  ok = ok && LOAD_(glGetMaterialxv, "glGetMaterialxv");
  ok = ok && LOAD_(glGetPointerv, "glGetPointerv");
  ok = ok && LOAD_(glGetString, "glGetString");
  ok = ok && LOAD_(glGetTexEnviv, "glGetTexEnviv");
  ok = ok && LOAD_(glGetTexEnvxv, "glGetTexEnvxv");
  ok = ok && LOAD_(glGetTexParameteriv, "glGetTexParameteriv");
  ok = ok && LOAD_(glGetTexParameterxv, "glGetTexParameterxv");
  ok = ok && LOAD_(glHint, "glHint");
  ok = ok && LOAD_(glIsBuffer, "glIsBuffer");
  ok = ok && LOAD_(glIsEnabled, "glIsEnabled");
  ok = ok && LOAD_(glIsTexture, "glIsTexture");
  ok = ok && LOAD_(glLightModelx, "glLightModelx");
  ok = ok && LOAD_(glLightModelxv, "glLightModelxv");
  ok = ok && LOAD_(glLightx, "glLightx");
  ok = ok && LOAD_(glLightxv, "glLightxv");
  ok = ok && LOAD_(glLineWidthx, "glLineWidthx");
  ok = ok && LOAD_(glLoadIdentity, "glLoadIdentity");
  ok = ok && LOAD_(glLoadMatrixx, "glLoadMatrixx");
  ok = ok && LOAD_(glLogicOp, "glLogicOp");
  ok = ok && LOAD_(glMaterialx, "glMaterialx");
  ok = ok && LOAD_(glMaterialxv, "glMaterialxv");
  ok = ok && LOAD_(glMatrixMode, "glMatrixMode");
  ok = ok && LOAD_(glMultMatrixx, "glMultMatrixx");
  ok = ok && LOAD_(glMultiTexCoord4x, "glMultiTexCoord4x");
  ok = ok && LOAD_(glNormal3x, "glNormal3x");
  ok = ok && LOAD_(glNormalPointer, "glNormalPointer");
  ok = ok && LOAD_(glOrthox, "glOrthox");
  ok = ok && LOAD_(glPixelStorei, "glPixelStorei");
  ok = ok && LOAD_(glPointParameterx, "glPointParameterx");
  ok = ok && LOAD_(glPointParameterxv, "glPointParameterxv");
  ok = ok && LOAD_(glPointSizex, "glPointSizex");
  ok = ok && LOAD_(glPolygonOffsetx, "glPolygonOffsetx");
  ok = ok && LOAD_(glPopMatrix, "glPopMatrix");
  ok = ok && LOAD_(glPushMatrix, "glPushMatrix");
  ok = ok && LOAD_(glReadPixels, "glReadPixels");
  ok = ok && LOAD_(glRotatex, "glRotatex");
  ok = ok && LOAD_(glSampleCoverage, "glSampleCoverage");
  ok = ok && LOAD_(glSampleCoveragex, "glSampleCoveragex");
  ok = ok && LOAD_(glScalex, "glScalex");
  ok = ok && LOAD_(glScissor, "glScissor");
  ok = ok && LOAD_(glShadeModel, "glShadeModel");
  ok = ok && LOAD_(glStencilFunc, "glStencilFunc");
  ok = ok && LOAD_(glStencilMask, "glStencilMask");
  ok = ok && LOAD_(glStencilOp, "glStencilOp");
  ok = ok && LOAD_(glTexCoordPointer, "glTexCoordPointer");
  ok = ok && LOAD_(glTexEnvi, "glTexEnvi");
  ok = ok && LOAD_(glTexEnvx, "glTexEnvx");
  ok = ok && LOAD_(glTexEnviv, "glTexEnviv");
  ok = ok && LOAD_(glTexEnvxv, "glTexEnvxv");
  ok = ok && LOAD_(glTexImage2D, "glTexImage2D");
  ok = ok && LOAD_(glTexParameteri, "glTexParameteri");
  ok = ok && LOAD_(glTexParameterx, "glTexParameterx");
  ok = ok && LOAD_(glTexParameteriv, "glTexParameteriv");
  ok = ok && LOAD_(glTexParameterxv, "glTexParameterxv");
  ok = ok && LOAD_(glTexSubImage2D, "glTexSubImage2D");
  ok = ok && LOAD_(glTranslatex, "glTranslatex");
  ok = ok && LOAD_(glVertexPointer, "glVertexPointer");
  ok = ok && LOAD_(glViewport, "glViewport");
#endif

#ifdef FEATURE_GL_ES_VERSION_2_0
  ok = ok && LOAD_(glActiveTexture, "glActiveTexture");
  ok = ok && LOAD_(glAttachShader, "glAttachShader");
  ok = ok && LOAD_(glBindAttribLocation, "glBindAttribLocation");
  ok = ok && LOAD_(glBindBuffer, "glBindBuffer");
  ok = ok && LOAD_(glBindFramebuffer, "glBindFramebuffer");
  ok = ok && LOAD_(glBindRenderbuffer, "glBindRenderbuffer");
  ok = ok && LOAD_(glBindTexture, "glBindTexture");
  ok = ok && LOAD_(glBlendColor, "glBlendColor");
  ok = ok && LOAD_(glBlendEquation, "glBlendEquation");
  ok = ok && LOAD_(glBlendEquationSeparate, "glBlendEquationSeparate");
  ok = ok && LOAD_(glBlendFunc, "glBlendFunc");
  ok = ok && LOAD_(glBlendFuncSeparate, "glBlendFuncSeparate");
  ok = ok && LOAD_(glBufferData, "glBufferData");
  ok = ok && LOAD_(glBufferSubData, "glBufferSubData");
  ok = ok && LOAD_(glCheckFramebufferStatus, "glCheckFramebufferStatus");
  ok = ok && LOAD_(glClear, "glClear");
  ok = ok && LOAD_(glClearColor, "glClearColor");
  ok = ok && LOAD_(glClearDepthf, "glClearDepthf");
  ok = ok && LOAD_(glClearStencil, "glClearStencil");
  ok = ok && LOAD_(glColorMask, "glColorMask");
  ok = ok && LOAD_(glCompileShader, "glCompileShader");
  ok = ok && LOAD_(glCompressedTexImage2D, "glCompressedTexImage2D");
  ok = ok && LOAD_(glCompressedTexSubImage2D, "glCompressedTexSubImage2D");
  ok = ok && LOAD_(glCopyTexImage2D, "glCopyTexImage2D");
  ok = ok && LOAD_(glCopyTexSubImage2D, "glCopyTexSubImage2D");
  ok = ok && LOAD_(glCreateProgram, "glCreateProgram");
  ok = ok && LOAD_(glCreateShader, "glCreateShader");
  ok = ok && LOAD_(glCullFace, "glCullFace");
  ok = ok && LOAD_(glDeleteBuffers, "glDeleteBuffers");
  ok = ok && LOAD_(glDeleteFramebuffers, "glDeleteFramebuffers");
  ok = ok && LOAD_(glDeleteProgram, "glDeleteProgram");
  ok = ok && LOAD_(glDeleteRenderbuffers, "glDeleteRenderbuffers");
  ok = ok && LOAD_(glDeleteShader, "glDeleteShader");
  ok = ok && LOAD_(glDeleteTextures, "glDeleteTextures");
  ok = ok && LOAD_(glDepthFunc, "glDepthFunc");
  ok = ok && LOAD_(glDepthMask, "glDepthMask");
  ok = ok && LOAD_(glDepthRangef, "glDepthRangef");
  ok = ok && LOAD_(glDetachShader, "glDetachShader");
  ok = ok && LOAD_(glDisable, "glDisable");
  ok = ok && LOAD_(glDisableVertexAttribArray, "glDisableVertexAttribArray");
  ok = ok && LOAD_(glDrawArrays, "glDrawArrays");
  ok = ok && LOAD_(glDrawElements, "glDrawElements");
  ok = ok && LOAD_(glEnable, "glEnable");
  ok = ok && LOAD_(glEnableVertexAttribArray, "glEnableVertexAttribArray");
  ok = ok && LOAD_(glFinish, "glFinish");
  ok = ok && LOAD_(glFlush, "glFlush");
  ok = ok && LOAD_(glFramebufferRenderbuffer, "glFramebufferRenderbuffer");
  ok = ok && LOAD_(glFramebufferTexture2D, "glFramebufferTexture2D");
  ok = ok && LOAD_(glFrontFace, "glFrontFace");
  ok = ok && LOAD_(glGenBuffers, "glGenBuffers");
  ok = ok && LOAD_(glGenerateMipmap, "glGenerateMipmap");
  ok = ok && LOAD_(glGenFramebuffers, "glGenFramebuffers");
  ok = ok && LOAD_(glGenRenderbuffers, "glGenRenderbuffers");
  ok = ok && LOAD_(glGenTextures, "glGenTextures");
  ok = ok && LOAD_(glGetActiveAttrib, "glGetActiveAttrib");
  ok = ok && LOAD_(glGetActiveUniform, "glGetActiveUniform");
  ok = ok && LOAD_(glGetAttachedShaders, "glGetAttachedShaders");
  ok = ok && LOAD_(glGetAttribLocation, "glGetAttribLocation");
  ok = ok && LOAD_(glGetBooleanv, "glGetBooleanv");
  ok = ok && LOAD_(glGetBufferParameteriv, "glGetBufferParameteriv");
  ok = ok && LOAD_(glGetError, "glGetError");
  ok = ok && LOAD_(glGetFloatv, "glGetFloatv");
  ok = ok && LOAD_(glGetFramebufferAttachmentParameteriv, "glGetFramebufferAttachmentParameteriv");
  ok = ok && LOAD_(glGetIntegerv, "glGetIntegerv");
  ok = ok && LOAD_(glGetProgramiv, "glGetProgramiv");
  ok = ok && LOAD_(glGetProgramInfoLog, "glGetProgramInfoLog");
  ok = ok && LOAD_(glGetRenderbufferParameteriv, "glGetRenderbufferParameteriv");
  ok = ok && LOAD_(glGetShaderiv, "glGetShaderiv");
  ok = ok && LOAD_(glGetShaderInfoLog, "glGetShaderInfoLog");
  ok = ok && LOAD_(glGetShaderPrecisionFormat, "glGetShaderPrecisionFormat");
  ok = ok && LOAD_(glGetShaderSource, "glGetShaderSource");
  ok = ok && LOAD_(glGetString, "glGetString");
  ok = ok && LOAD_(glGetTexParameterfv, "glGetTexParameterfv");
  ok = ok && LOAD_(glGetTexParameteriv, "glGetTexParameteriv");
  ok = ok && LOAD_(glGetUniformfv, "glGetUniformfv");
  ok = ok && LOAD_(glGetUniformiv, "glGetUniformiv");
  ok = ok && LOAD_(glGetUniformLocation, "glGetUniformLocation");
  ok = ok && LOAD_(glGetVertexAttribfv, "glGetVertexAttribfv");
  ok = ok && LOAD_(glGetVertexAttribiv, "glGetVertexAttribiv");
  ok = ok && LOAD_(glGetVertexAttribPointerv, "glGetVertexAttribPointerv");
  ok = ok && LOAD_(glHint, "glHint");
  ok = ok && LOAD_(glIsBuffer, "glIsBuffer");
  ok = ok && LOAD_(glIsEnabled, "glIsEnabled");
  ok = ok && LOAD_(glIsFramebuffer, "glIsFramebuffer");
  ok = ok && LOAD_(glIsProgram, "glIsProgram");
  ok = ok && LOAD_(glIsRenderbuffer, "glIsRenderbuffer");
  ok = ok && LOAD_(glIsShader, "glIsShader");
  ok = ok && LOAD_(glIsTexture, "glIsTexture");
  ok = ok && LOAD_(glLineWidth, "glLineWidth");
  ok = ok && LOAD_(glLinkProgram, "glLinkProgram");
  ok = ok && LOAD_(glPixelStorei, "glPixelStorei");
  ok = ok && LOAD_(glPolygonOffset, "glPolygonOffset");
  ok = ok && LOAD_(glReadPixels, "glReadPixels");
  ok = ok && LOAD_(glReleaseShaderCompiler, "glReleaseShaderCompiler");
  ok = ok && LOAD_(glRenderbufferStorage, "glRenderbufferStorage");
  ok = ok && LOAD_(glSampleCoverage, "glSampleCoverage");
  ok = ok && LOAD_(glScissor, "glScissor");
  ok = ok && LOAD_(glShaderBinary, "glShaderBinary");
  ok = ok && LOAD_(glShaderSource, "glShaderSource");
  ok = ok && LOAD_(glStencilFunc, "glStencilFunc");
  ok = ok && LOAD_(glStencilFuncSeparate, "glStencilFuncSeparate");
  ok = ok && LOAD_(glStencilMask, "glStencilMask");
  ok = ok && LOAD_(glStencilMaskSeparate, "glStencilMaskSeparate");
  ok = ok && LOAD_(glStencilOp, "glStencilOp");
  ok = ok && LOAD_(glStencilOpSeparate, "glStencilOpSeparate");
  ok = ok && LOAD_(glTexImage2D, "glTexImage2D");
  ok = ok && LOAD_(glTexParameterf, "glTexParameterf");
  ok = ok && LOAD_(glTexParameterfv, "glTexParameterfv");
  ok = ok && LOAD_(glTexParameteri, "glTexParameteri");
  ok = ok && LOAD_(glTexParameteriv, "glTexParameteriv");
  ok = ok && LOAD_(glTexSubImage2D, "glTexSubImage2D");
  ok = ok && LOAD_(glUniform1f, "glUniform1f");
  ok = ok && LOAD_(glUniform1fv, "glUniform1fv");
  ok = ok && LOAD_(glUniform1i, "glUniform1i");
  ok = ok && LOAD_(glUniform1iv, "glUniform1iv");
  ok = ok && LOAD_(glUniform2f, "glUniform2f");
  ok = ok && LOAD_(glUniform2fv, "glUniform2fv");
  ok = ok && LOAD_(glUniform2i, "glUniform2i");
  ok = ok && LOAD_(glUniform2iv, "glUniform2iv");
  ok = ok && LOAD_(glUniform3f, "glUniform3f");
  ok = ok && LOAD_(glUniform3fv, "glUniform3fv");
  ok = ok && LOAD_(glUniform3i, "glUniform3i");
  ok = ok && LOAD_(glUniform3iv, "glUniform3iv");
  ok = ok && LOAD_(glUniform4f, "glUniform4f");
  ok = ok && LOAD_(glUniform4fv, "glUniform4fv");
  ok = ok && LOAD_(glUniform4i, "glUniform4i");
  ok = ok && LOAD_(glUniform4iv, "glUniform4iv");
  ok = ok && LOAD_(glUniformMatrix2fv, "glUniformMatrix2fv");
  ok = ok && LOAD_(glUniformMatrix3fv, "glUniformMatrix3fv");
  ok = ok && LOAD_(glUniformMatrix4fv, "glUniformMatrix4fv");
  ok = ok && LOAD_(glUseProgram, "glUseProgram");
  ok = ok && LOAD_(glValidateProgram, "glValidateProgram");
  ok = ok && LOAD_(glVertexAttrib1f, "glVertexAttrib1f");
  ok = ok && LOAD_(glVertexAttrib1fv, "glVertexAttrib1fv");
  ok = ok && LOAD_(glVertexAttrib2f, "glVertexAttrib2f");
  ok = ok && LOAD_(glVertexAttrib2fv, "glVertexAttrib2fv");
  ok = ok && LOAD_(glVertexAttrib3f, "glVertexAttrib3f");
  ok = ok && LOAD_(glVertexAttrib3fv, "glVertexAttrib3fv");
  ok = ok && LOAD_(glVertexAttrib4f, "glVertexAttrib4f");
  ok = ok && LOAD_(glVertexAttrib4fv, "glVertexAttrib4fv");
  ok = ok && LOAD_(glVertexAttribPointer, "glVertexAttribPointer");
  ok = ok && LOAD_(glViewport, "glViewport");
#endif

#ifdef FEATURE_GL_ES_VERSION_3_0
  ok = ok && LOAD_(glReadBuffer, "glReadBuffer");
  ok = ok && LOAD_(glDrawRangeElements, "glDrawRangeElements");
  ok = ok && LOAD_(glTexImage3D, "glTexImage3D");
  ok = ok && LOAD_(glTexSubImage3D, "glTexSubImage3D");
  ok = ok && LOAD_(glCopyTexSubImage3D, "glCopyTexSubImage3D");
  ok = ok && LOAD_(glCompressedTexImage3D, "glCompressedTexImage3D");
  ok = ok && LOAD_(glCompressedTexSubImage3D, "glCompressedTexSubImage3D");
  ok = ok && LOAD_(glGenQueries, "glGenQueries");
  ok = ok && LOAD_(glDeleteQueries, "glDeleteQueries");
  ok = ok && LOAD_(glIsQuery, "glIsQuery");
  ok = ok && LOAD_(glBeginQuery, "glBeginQuery");
  ok = ok && LOAD_(glEndQuery, "glEndQuery");
  ok = ok && LOAD_(glGetQueryiv, "glGetQueryiv");
  ok = ok && LOAD_(glGetQueryObjectuiv, "glGetQueryObjectuiv");
  ok = ok && LOAD_(glUnmapBuffer, "glUnmapBuffer");
  ok = ok && LOAD_(glGetBufferPointerv, "glGetBufferPointerv");
  ok = ok && LOAD_(glDrawBuffers, "glDrawBuffers");
  ok = ok && LOAD_(glUniformMatrix2x3fv, "glUniformMatrix2x3fv");
  ok = ok && LOAD_(glUniformMatrix3x2fv, "glUniformMatrix3x2fv");
  ok = ok && LOAD_(glUniformMatrix2x4fv, "glUniformMatrix2x4fv");
  ok = ok && LOAD_(glUniformMatrix4x2fv, "glUniformMatrix4x2fv");
  ok = ok && LOAD_(glUniformMatrix3x4fv, "glUniformMatrix3x4fv");
  ok = ok && LOAD_(glUniformMatrix4x3fv, "glUniformMatrix4x3fv");
  ok = ok && LOAD_(glBlitFramebuffer, "glBlitFramebuffer");
  ok = ok && LOAD_(glRenderbufferStorageMultisample, "glRenderbufferStorageMultisample");
  ok = ok && LOAD_(glFramebufferTextureLayer, "glFramebufferTextureLayer");
  ok = ok && LOAD_(glMapBufferRange, "glMapBufferRange");
  ok = ok && LOAD_(glFlushMappedBufferRange, "glFlushMappedBufferRange");
  ok = ok && LOAD_(glBindVertexArray, "glBindVertexArray");
  ok = ok && LOAD_(glDeleteVertexArrays, "glDeleteVertexArrays");
  ok = ok && LOAD_(glGenVertexArrays, "glGenVertexArrays");
  ok = ok && LOAD_(glIsVertexArray, "glIsVertexArray");
  ok = ok && LOAD_(glGetIntegeri_v, "glGetIntegeri_v");
  ok = ok && LOAD_(glBeginTransformFeedback, "glBeginTransformFeedback");
  ok = ok && LOAD_(glEndTransformFeedback, "glEndTransformFeedback");
  ok = ok && LOAD_(glBindBufferRange, "glBindBufferRange");
  ok = ok && LOAD_(glBindBufferBase, "glBindBufferBase");
  ok = ok && LOAD_(glTransformFeedbackVaryings, "glTransformFeedbackVaryings");
  ok = ok && LOAD_(glGetTransformFeedbackVarying, "glGetTransformFeedbackVarying");
  ok = ok && LOAD_(glVertexAttribIPointer, "glVertexAttribIPointer");
  ok = ok && LOAD_(glGetVertexAttribIiv, "glGetVertexAttribIiv");
  ok = ok && LOAD_(glGetVertexAttribIuiv, "glGetVertexAttribIuiv");
  ok = ok && LOAD_(glVertexAttribI4i, "glVertexAttribI4i");
  ok = ok && LOAD_(glVertexAttribI4ui, "glVertexAttribI4ui");
  ok = ok && LOAD_(glVertexAttribI4iv, "glVertexAttribI4iv");
  ok = ok && LOAD_(glVertexAttribI4uiv, "glVertexAttribI4uiv");
  ok = ok && LOAD_(glGetUniformuiv, "glGetUniformuiv");
  ok = ok && LOAD_(glGetFragDataLocation, "glGetFragDataLocation");
  ok = ok && LOAD_(glUniform1ui, "glUniform1ui");
  ok = ok && LOAD_(glUniform2ui, "glUniform2ui");
  ok = ok && LOAD_(glUniform3ui, "glUniform3ui");
  ok = ok && LOAD_(glUniform4ui, "glUniform4ui");
  ok = ok && LOAD_(glUniform1uiv, "glUniform1uiv");
  ok = ok && LOAD_(glUniform2uiv, "glUniform2uiv");
  ok = ok && LOAD_(glUniform3uiv, "glUniform3uiv");
  ok = ok && LOAD_(glUniform4uiv, "glUniform4uiv");
  ok = ok && LOAD_(glClearBufferiv, "glClearBufferiv");
  ok = ok && LOAD_(glClearBufferuiv, "glClearBufferuiv");
  ok = ok && LOAD_(glClearBufferfv, "glClearBufferfv");
  ok = ok && LOAD_(glClearBufferfi, "glClearBufferfi");
  ok = ok && LOAD_(glGetStringi, "glGetStringi");
  ok = ok && LOAD_(glCopyBufferSubData, "glCopyBufferSubData");
  ok = ok && LOAD_(glGetUniformIndices, "glGetUniformIndices");
  ok = ok && LOAD_(glGetActiveUniformsiv, "glGetActiveUniformsiv");
  ok = ok && LOAD_(glGetUniformBlockIndex, "glGetUniformBlockIndex");
  ok = ok && LOAD_(glGetActiveUniformBlockiv, "glGetActiveUniformBlockiv");
  ok = ok && LOAD_(glGetActiveUniformBlockName, "glGetActiveUniformBlockName");
  ok = ok && LOAD_(glUniformBlockBinding, "glUniformBlockBinding");
  ok = ok && LOAD_(glDrawArraysInstanced, "glDrawArraysInstanced");
  ok = ok && LOAD_(glDrawElementsInstanced, "glDrawElementsInstanced");
  ok = ok && LOAD_(glFenceSync, "glFenceSync");
  ok = ok && LOAD_(glIsSync, "glIsSync");
  ok = ok && LOAD_(glDeleteSync, "glDeleteSync");
  ok = ok && LOAD_(glClientWaitSync, "glClientWaitSync");
  ok = ok && LOAD_(glWaitSync, "glWaitSync");
  ok = ok && LOAD_(glGetInteger64v, "glGetInteger64v");
  ok = ok && LOAD_(glGetSynciv, "glGetSynciv");
  ok = ok && LOAD_(glGetInteger64i_v, "glGetInteger64i_v");
  ok = ok && LOAD_(glGetBufferParameteri64v, "glGetBufferParameteri64v");
  ok = ok && LOAD_(glGenSamplers, "glGenSamplers");
  ok = ok && LOAD_(glDeleteSamplers, "glDeleteSamplers");
  ok = ok && LOAD_(glIsSampler, "glIsSampler");
  ok = ok && LOAD_(glBindSampler, "glBindSampler");
  ok = ok && LOAD_(glSamplerParameteri, "glSamplerParameteri");
  ok = ok && LOAD_(glSamplerParameteriv, "glSamplerParameteriv");
  ok = ok && LOAD_(glSamplerParameterf, "glSamplerParameterf");
  ok = ok && LOAD_(glSamplerParameterfv, "glSamplerParameterfv");
  ok = ok && LOAD_(glGetSamplerParameteriv, "glGetSamplerParameteriv");
  ok = ok && LOAD_(glGetSamplerParameterfv, "glGetSamplerParameterfv");
  ok = ok && LOAD_(glVertexAttribDivisor, "glVertexAttribDivisor");
  ok = ok && LOAD_(glBindTransformFeedback, "glBindTransformFeedback");
  ok = ok && LOAD_(glDeleteTransformFeedbacks, "glDeleteTransformFeedbacks");
  ok = ok && LOAD_(glGenTransformFeedbacks, "glGenTransformFeedbacks");
  ok = ok && LOAD_(glIsTransformFeedback, "glIsTransformFeedback");
  ok = ok && LOAD_(glPauseTransformFeedback, "glPauseTransformFeedback");
  ok = ok && LOAD_(glResumeTransformFeedback, "glResumeTransformFeedback");
  ok = ok && LOAD_(glGetProgramBinary, "glGetProgramBinary");
  ok = ok && LOAD_(glProgramBinary, "glProgramBinary");
  ok = ok && LOAD_(glProgramParameteri, "glProgramParameteri");
  ok = ok && LOAD_(glInvalidateFramebuffer, "glInvalidateFramebuffer");
  ok = ok && LOAD_(glInvalidateSubFramebuffer, "glInvalidateSubFramebuffer");
  ok = ok && LOAD_(glTexStorage2D, "glTexStorage2D");
  ok = ok && LOAD_(glTexStorage3D, "glTexStorage3D");
  ok = ok && LOAD_(glGetInternalformativ, "glGetInternalformativ");
#endif

#ifdef FEATURE_GL_ES_VERSION_3_1
  ok = ok && LOAD_(glDispatchCompute, "glDispatchCompute");
  ok = ok && LOAD_(glDispatchComputeIndirect, "glDispatchComputeIndirect");
  ok = ok && LOAD_(glDrawArraysIndirect, "glDrawArraysIndirect");
  ok = ok && LOAD_(glDrawElementsIndirect, "glDrawElementsIndirect");
  ok = ok && LOAD_(glFramebufferParameteri, "glFramebufferParameteri");
  ok = ok && LOAD_(glGetFramebufferParameteriv, "glGetFramebufferParameteriv");
  ok = ok && LOAD_(glGetProgramInterfaceiv, "glGetProgramInterfaceiv");
  ok = ok && LOAD_(glGetProgramResourceIndex, "glGetProgramResourceIndex");
  ok = ok && LOAD_(glGetProgramResourceName, "glGetProgramResourceName");
  ok = ok && LOAD_(glGetProgramResourceiv, "glGetProgramResourceiv");
  ok = ok && LOAD_(glGetProgramResourceLocation, "glGetProgramResourceLocation");
  ok = ok && LOAD_(glUseProgramStages, "glUseProgramStages");
  ok = ok && LOAD_(glActiveShaderProgram, "glActiveShaderProgram");
  ok = ok && LOAD_(glCreateShaderProgramv, "glCreateShaderProgramv");
  ok = ok && LOAD_(glBindProgramPipeline, "glBindProgramPipeline");
  ok = ok && LOAD_(glDeleteProgramPipelines, "glDeleteProgramPipelines");
  ok = ok && LOAD_(glGenProgramPipelines, "glGenProgramPipelines");
  ok = ok && LOAD_(glIsProgramPipeline, "glIsProgramPipeline");
  ok = ok && LOAD_(glGetProgramPipelineiv, "glGetProgramPipelineiv");
  ok = ok && LOAD_(glProgramUniform1i, "glProgramUniform1i");
  ok = ok && LOAD_(glProgramUniform2i, "glProgramUniform2i");
  ok = ok && LOAD_(glProgramUniform3i, "glProgramUniform3i");
  ok = ok && LOAD_(glProgramUniform4i, "glProgramUniform4i");
  ok = ok && LOAD_(glProgramUniform1ui, "glProgramUniform1ui");
  ok = ok && LOAD_(glProgramUniform2ui, "glProgramUniform2ui");
  ok = ok && LOAD_(glProgramUniform3ui, "glProgramUniform3ui");
  ok = ok && LOAD_(glProgramUniform4ui, "glProgramUniform4ui");
  ok = ok && LOAD_(glProgramUniform1f, "glProgramUniform1f");
  ok = ok && LOAD_(glProgramUniform2f, "glProgramUniform2f");
  ok = ok && LOAD_(glProgramUniform3f, "glProgramUniform3f");
  ok = ok && LOAD_(glProgramUniform4f, "glProgramUniform4f");
  ok = ok && LOAD_(glProgramUniform1iv, "glProgramUniform1iv");
  ok = ok && LOAD_(glProgramUniform2iv, "glProgramUniform2iv");
  ok = ok && LOAD_(glProgramUniform3iv, "glProgramUniform3iv");
  ok = ok && LOAD_(glProgramUniform4iv, "glProgramUniform4iv");
  ok = ok && LOAD_(glProgramUniform1uiv, "glProgramUniform1uiv");
  ok = ok && LOAD_(glProgramUniform2uiv, "glProgramUniform2uiv");
  ok = ok && LOAD_(glProgramUniform3uiv, "glProgramUniform3uiv");
  ok = ok && LOAD_(glProgramUniform4uiv, "glProgramUniform4uiv");
  ok = ok && LOAD_(glProgramUniform1fv, "glProgramUniform1fv");
  ok = ok && LOAD_(glProgramUniform2fv, "glProgramUniform2fv");
  ok = ok && LOAD_(glProgramUniform3fv, "glProgramUniform3fv");
  ok = ok && LOAD_(glProgramUniform4fv, "glProgramUniform4fv");
  ok = ok && LOAD_(glProgramUniformMatrix2fv, "glProgramUniformMatrix2fv");
  ok = ok && LOAD_(glProgramUniformMatrix3fv, "glProgramUniformMatrix3fv");
  ok = ok && LOAD_(glProgramUniformMatrix4fv, "glProgramUniformMatrix4fv");
  ok = ok && LOAD_(glProgramUniformMatrix2x3fv, "glProgramUniformMatrix2x3fv");
  ok = ok && LOAD_(glProgramUniformMatrix3x2fv, "glProgramUniformMatrix3x2fv");
  ok = ok && LOAD_(glProgramUniformMatrix2x4fv, "glProgramUniformMatrix2x4fv");
  ok = ok && LOAD_(glProgramUniformMatrix4x2fv, "glProgramUniformMatrix4x2fv");
  ok = ok && LOAD_(glProgramUniformMatrix3x4fv, "glProgramUniformMatrix3x4fv");
  ok = ok && LOAD_(glProgramUniformMatrix4x3fv, "glProgramUniformMatrix4x3fv");
  ok = ok && LOAD_(glValidateProgramPipeline, "glValidateProgramPipeline");
  ok = ok && LOAD_(glGetProgramPipelineInfoLog, "glGetProgramPipelineInfoLog");
  ok = ok && LOAD_(glBindImageTexture, "glBindImageTexture");
  ok = ok && LOAD_(glGetBooleani_v, "glGetBooleani_v");
  ok = ok && LOAD_(glMemoryBarrier, "glMemoryBarrier");
  ok = ok && LOAD_(glMemoryBarrierByRegion, "glMemoryBarrierByRegion");
  ok = ok && LOAD_(glTexStorage2DMultisample, "glTexStorage2DMultisample");
  ok = ok && LOAD_(glGetMultisamplefv, "glGetMultisamplefv");
  ok = ok && LOAD_(glSampleMaski, "glSampleMaski");
  ok = ok && LOAD_(glGetTexLevelParameteriv, "glGetTexLevelParameteriv");
  ok = ok && LOAD_(glGetTexLevelParameterfv, "glGetTexLevelParameterfv");
  ok = ok && LOAD_(glBindVertexBuffer, "glBindVertexBuffer");
  ok = ok && LOAD_(glVertexAttribFormat, "glVertexAttribFormat");
  ok = ok && LOAD_(glVertexAttribIFormat, "glVertexAttribIFormat");
  ok = ok && LOAD_(glVertexAttribBinding, "glVertexAttribBinding");
  ok = ok && LOAD_(glVertexBindingDivisor, "glVertexBindingDivisor");
#endif

#ifdef FEATURE_GL_ES_VERSION_3_2
  ok = ok && LOAD_(glBlendBarrier, "glBlendBarrier");
  ok = ok && LOAD_(glCopyImageSubData, "glCopyImageSubData");
  ok = ok && LOAD_(glDebugMessageControl, "glDebugMessageControl");
  ok = ok && LOAD_(glDebugMessageInsert, "glDebugMessageInsert");
  ok = ok && LOAD_(glDebugMessageCallback, "glDebugMessageCallback");
  ok = ok && LOAD_(glGetDebugMessageLog, "glGetDebugMessageLog");
  ok = ok && LOAD_(glPushDebugGroup, "glPushDebugGroup");
  ok = ok && LOAD_(glPopDebugGroup, "glPopDebugGroup");
  ok = ok && LOAD_(glObjectLabel, "glObjectLabel");
  ok = ok && LOAD_(glGetObjectLabel, "glGetObjectLabel");
  ok = ok && LOAD_(glObjectPtrLabel, "glObjectPtrLabel");
  ok = ok && LOAD_(glGetObjectPtrLabel, "glGetObjectPtrLabel");
  ok = ok && LOAD_(glGetPointerv, "glGetPointerv");
  ok = ok && LOAD_(glEnablei, "glEnablei");
  ok = ok && LOAD_(glDisablei, "glDisablei");
  ok = ok && LOAD_(glBlendEquationi, "glBlendEquationi");
  ok = ok && LOAD_(glBlendEquationSeparatei, "glBlendEquationSeparatei");
  ok = ok && LOAD_(glBlendFunci, "glBlendFunci");
  ok = ok && LOAD_(glBlendFuncSeparatei, "glBlendFuncSeparatei");
  ok = ok && LOAD_(glColorMaski, "glColorMaski");
  ok = ok && LOAD_(glIsEnabledi, "glIsEnabledi");
  ok = ok && LOAD_(glDrawElementsBaseVertex, "glDrawElementsBaseVertex");
  ok = ok && LOAD_(glDrawRangeElementsBaseVertex, "glDrawRangeElementsBaseVertex");
  ok = ok && LOAD_(glDrawElementsInstancedBaseVertex, "glDrawElementsInstancedBaseVertex");
  ok = ok && LOAD_(glFramebufferTexture, "glFramebufferTexture");
  ok = ok && LOAD_(glPrimitiveBoundingBox, "glPrimitiveBoundingBox");
  ok = ok && LOAD_(glGetGraphicsResetStatus, "glGetGraphicsResetStatus");
  ok = ok && LOAD_(glReadnPixels, "glReadnPixels");
  ok = ok && LOAD_(glGetnUniformfv, "glGetnUniformfv");
  ok = ok && LOAD_(glGetnUniformiv, "glGetnUniformiv");
  ok = ok && LOAD_(glGetnUniformuiv, "glGetnUniformuiv");
  ok = ok && LOAD_(glMinSampleShading, "glMinSampleShading");
  ok = ok && LOAD_(glPatchParameteri, "glPatchParameteri");
  ok = ok && LOAD_(glTexParameterIiv, "glTexParameterIiv");
  ok = ok && LOAD_(glTexParameterIuiv, "glTexParameterIuiv");
  ok = ok && LOAD_(glGetTexParameterIiv, "glGetTexParameterIiv");
  ok = ok && LOAD_(glGetTexParameterIuiv, "glGetTexParameterIuiv");
  ok = ok && LOAD_(glSamplerParameterIiv, "glSamplerParameterIiv");
  ok = ok && LOAD_(glSamplerParameterIuiv, "glSamplerParameterIuiv");
  ok = ok && LOAD_(glGetSamplerParameterIiv, "glGetSamplerParameterIiv");
  ok = ok && LOAD_(glGetSamplerParameterIuiv, "glGetSamplerParameterIuiv");
  ok = ok && LOAD_(glTexBuffer, "glTexBuffer");
  ok = ok && LOAD_(glTexBufferRange, "glTexBufferRange");
  ok = ok && LOAD_(glTexStorage3DMultisample, "glTexStorage3DMultisample");
#endif

#ifdef FEATURE_GL_SC_VERSION_2_0
  ok = ok && LOAD_(glActiveTexture, "glActiveTexture");
  ok = ok && LOAD_(glBindBuffer, "glBindBuffer");
  ok = ok && LOAD_(glBindFramebuffer, "glBindFramebuffer");
  ok = ok && LOAD_(glBindRenderbuffer, "glBindRenderbuffer");
  ok = ok && LOAD_(glBindTexture, "glBindTexture");
  ok = ok && LOAD_(glBlendColor, "glBlendColor");
  ok = ok && LOAD_(glBlendEquation, "glBlendEquation");
  ok = ok && LOAD_(glBlendEquationSeparate, "glBlendEquationSeparate");
  ok = ok && LOAD_(glBlendFunc, "glBlendFunc");
  ok = ok && LOAD_(glBlendFuncSeparate, "glBlendFuncSeparate");
  ok = ok && LOAD_(glBufferData, "glBufferData");
  ok = ok && LOAD_(glBufferSubData, "glBufferSubData");
  ok = ok && LOAD_(glCheckFramebufferStatus, "glCheckFramebufferStatus");
  ok = ok && LOAD_(glClear, "glClear");
  ok = ok && LOAD_(glClearColor, "glClearColor");
  ok = ok && LOAD_(glClearDepthf, "glClearDepthf");
  ok = ok && LOAD_(glClearStencil, "glClearStencil");
  ok = ok && LOAD_(glColorMask, "glColorMask");
  ok = ok && LOAD_(glCompressedTexSubImage2D, "glCompressedTexSubImage2D");
  ok = ok && LOAD_(glCreateProgram, "glCreateProgram");
  ok = ok && LOAD_(glCullFace, "glCullFace");
  ok = ok && LOAD_(glDepthFunc, "glDepthFunc");
  ok = ok && LOAD_(glDepthMask, "glDepthMask");
  ok = ok && LOAD_(glDepthRangef, "glDepthRangef");
  ok = ok && LOAD_(glDisable, "glDisable");
  ok = ok && LOAD_(glDisableVertexAttribArray, "glDisableVertexAttribArray");
  ok = ok && LOAD_(glDrawArrays, "glDrawArrays");
  ok = ok && LOAD_(glDrawRangeElements, "glDrawRangeElements");
  ok = ok && LOAD_(glEnable, "glEnable");
  ok = ok && LOAD_(glEnableVertexAttribArray, "glEnableVertexAttribArray");
  ok = ok && LOAD_(glFinish, "glFinish");
  ok = ok && LOAD_(glFlush, "glFlush");
  ok = ok && LOAD_(glFramebufferRenderbuffer, "glFramebufferRenderbuffer");
  ok = ok && LOAD_(glFramebufferTexture2D, "glFramebufferTexture2D");
  ok = ok && LOAD_(glFrontFace, "glFrontFace");
  ok = ok && LOAD_(glGenBuffers, "glGenBuffers");
  ok = ok && LOAD_(glGenerateMipmap, "glGenerateMipmap");
  ok = ok && LOAD_(glGenFramebuffers, "glGenFramebuffers");
  ok = ok && LOAD_(glGenRenderbuffers, "glGenRenderbuffers");
  ok = ok && LOAD_(glGenTextures, "glGenTextures");
  ok = ok && LOAD_(glGetAttribLocation, "glGetAttribLocation");
  ok = ok && LOAD_(glGetBooleanv, "glGetBooleanv");
  ok = ok && LOAD_(glGetBufferParameteriv, "glGetBufferParameteriv");
  ok = ok && LOAD_(glGetError, "glGetError");
  ok = ok && LOAD_(glGetFloatv, "glGetFloatv");
  ok = ok && LOAD_(glGetFramebufferAttachmentParameteriv, "glGetFramebufferAttachmentParameteriv");
  ok = ok && LOAD_(glGetGraphicsResetStatus, "glGetGraphicsResetStatus");
  ok = ok && LOAD_(glGetIntegerv, "glGetIntegerv");
  ok = ok && LOAD_(glGetProgramiv, "glGetProgramiv");
  ok = ok && LOAD_(glGetRenderbufferParameteriv, "glGetRenderbufferParameteriv");
  ok = ok && LOAD_(glGetString, "glGetString");
  ok = ok && LOAD_(glGetTexParameterfv, "glGetTexParameterfv");
  ok = ok && LOAD_(glGetTexParameteriv, "glGetTexParameteriv");
  ok = ok && LOAD_(glGetnUniformfv, "glGetnUniformfv");
  ok = ok && LOAD_(glGetnUniformiv, "glGetnUniformiv");
  ok = ok && LOAD_(glGetUniformLocation, "glGetUniformLocation");
  ok = ok && LOAD_(glGetVertexAttribfv, "glGetVertexAttribfv");
  ok = ok && LOAD_(glGetVertexAttribiv, "glGetVertexAttribiv");
  ok = ok && LOAD_(glGetVertexAttribPointerv, "glGetVertexAttribPointerv");
  ok = ok && LOAD_(glHint, "glHint");
  ok = ok && LOAD_(glIsEnabled, "glIsEnabled");
  ok = ok && LOAD_(glLineWidth, "glLineWidth");
  ok = ok && LOAD_(glPixelStorei, "glPixelStorei");
  ok = ok && LOAD_(glPolygonOffset, "glPolygonOffset");
  ok = ok && LOAD_(glProgramBinary, "glProgramBinary");
  ok = ok && LOAD_(glReadnPixels, "glReadnPixels");
  ok = ok && LOAD_(glRenderbufferStorage, "glRenderbufferStorage");
  ok = ok && LOAD_(glSampleCoverage, "glSampleCoverage");
  ok = ok && LOAD_(glScissor, "glScissor");
  ok = ok && LOAD_(glStencilFunc, "glStencilFunc");
  ok = ok && LOAD_(glStencilFuncSeparate, "glStencilFuncSeparate");
  ok = ok && LOAD_(glStencilMask, "glStencilMask");
  ok = ok && LOAD_(glStencilMaskSeparate, "glStencilMaskSeparate");
  ok = ok && LOAD_(glStencilOp, "glStencilOp");
  ok = ok && LOAD_(glStencilOpSeparate, "glStencilOpSeparate");
  ok = ok && LOAD_(glTexStorage2D, "glTexStorage2D");
  ok = ok && LOAD_(glTexParameterf, "glTexParameterf");
  ok = ok && LOAD_(glTexParameterfv, "glTexParameterfv");
  ok = ok && LOAD_(glTexParameteri, "glTexParameteri");
  ok = ok && LOAD_(glTexParameteriv, "glTexParameteriv");
  ok = ok && LOAD_(glTexSubImage2D, "glTexSubImage2D");
  ok = ok && LOAD_(glUniform1f, "glUniform1f");
  ok = ok && LOAD_(glUniform1fv, "glUniform1fv");
  ok = ok && LOAD_(glUniform1i, "glUniform1i");
  ok = ok && LOAD_(glUniform1iv, "glUniform1iv");
  ok = ok && LOAD_(glUniform2f, "glUniform2f");
  ok = ok && LOAD_(glUniform2fv, "glUniform2fv");
  ok = ok && LOAD_(glUniform2i, "glUniform2i");
  ok = ok && LOAD_(glUniform2iv, "glUniform2iv");
  ok = ok && LOAD_(glUniform3f, "glUniform3f");
  ok = ok && LOAD_(glUniform3fv, "glUniform3fv");
  ok = ok && LOAD_(glUniform3i, "glUniform3i");
  ok = ok && LOAD_(glUniform3iv, "glUniform3iv");
  ok = ok && LOAD_(glUniform4f, "glUniform4f");
  ok = ok && LOAD_(glUniform4fv, "glUniform4fv");
  ok = ok && LOAD_(glUniform4i, "glUniform4i");
  ok = ok && LOAD_(glUniform4iv, "glUniform4iv");
  ok = ok && LOAD_(glUniformMatrix2fv, "glUniformMatrix2fv");
  ok = ok && LOAD_(glUniformMatrix3fv, "glUniformMatrix3fv");
  ok = ok && LOAD_(glUniformMatrix4fv, "glUniformMatrix4fv");
  ok = ok && LOAD_(glUseProgram, "glUseProgram");
  ok = ok && LOAD_(glVertexAttrib1f, "glVertexAttrib1f");
  ok = ok && LOAD_(glVertexAttrib1fv, "glVertexAttrib1fv");
  ok = ok && LOAD_(glVertexAttrib2f, "glVertexAttrib2f");
  ok = ok && LOAD_(glVertexAttrib2fv, "glVertexAttrib2fv");
  ok = ok && LOAD_(glVertexAttrib3f, "glVertexAttrib3f");
  ok = ok && LOAD_(glVertexAttrib3fv, "glVertexAttrib3fv");
  ok = ok && LOAD_(glVertexAttrib4f, "glVertexAttrib4f");
  ok = ok && LOAD_(glVertexAttrib4fv, "glVertexAttrib4fv");
  ok = ok && LOAD_(glVertexAttribPointer, "glVertexAttribPointer");
  ok = ok && LOAD_(glViewport, "glViewport");
#endif


if (HAS_EXTENSION_("GL_3DFX_tbuffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTbufferMask3DFX, "glTbufferMask3DFX");
  SAVE_EXTENSION_("GL_3DFX_tbuffer", status_);
}

if (HAS_EXTENSION_("GL_AMD_debug_output")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDebugMessageEnableAMD, "glDebugMessageEnableAMD");
  status_ = status_ && LOAD_(glDebugMessageInsertAMD, "glDebugMessageInsertAMD");
  status_ = status_ && LOAD_(glDebugMessageCallbackAMD, "glDebugMessageCallbackAMD");
  status_ = status_ && LOAD_(glGetDebugMessageLogAMD, "glGetDebugMessageLogAMD");
  SAVE_EXTENSION_("GL_AMD_debug_output", status_);
}

if (HAS_EXTENSION_("GL_AMD_draw_buffers_blend")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendFuncIndexedAMD, "glBlendFuncIndexedAMD");
  status_ = status_ && LOAD_(glBlendFuncSeparateIndexedAMD, "glBlendFuncSeparateIndexedAMD");
  status_ = status_ && LOAD_(glBlendEquationIndexedAMD, "glBlendEquationIndexedAMD");
  status_ = status_ && LOAD_(glBlendEquationSeparateIndexedAMD, "glBlendEquationSeparateIndexedAMD");
  SAVE_EXTENSION_("GL_AMD_draw_buffers_blend", status_);
}

if (HAS_EXTENSION_("GL_AMD_framebuffer_multisample_advanced")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderbufferStorageMultisampleAdvancedAMD, "glRenderbufferStorageMultisampleAdvancedAMD");
  status_ = status_ && LOAD_(glNamedRenderbufferStorageMultisampleAdvancedAMD, "glNamedRenderbufferStorageMultisampleAdvancedAMD");
  SAVE_EXTENSION_("GL_AMD_framebuffer_multisample_advanced", status_);
}

if (HAS_EXTENSION_("GL_AMD_framebuffer_sample_positions")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferSamplePositionsfvAMD, "glFramebufferSamplePositionsfvAMD");
  status_ = status_ && LOAD_(glNamedFramebufferSamplePositionsfvAMD, "glNamedFramebufferSamplePositionsfvAMD");
  status_ = status_ && LOAD_(glGetFramebufferParameterfvAMD, "glGetFramebufferParameterfvAMD");
  status_ = status_ && LOAD_(glGetNamedFramebufferParameterfvAMD, "glGetNamedFramebufferParameterfvAMD");
  SAVE_EXTENSION_("GL_AMD_framebuffer_sample_positions", status_);
}

if (HAS_EXTENSION_("GL_AMD_interleaved_elements")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribParameteriAMD, "glVertexAttribParameteriAMD");
  SAVE_EXTENSION_("GL_AMD_interleaved_elements", status_);
}

if (HAS_EXTENSION_("GL_AMD_multi_draw_indirect")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawArraysIndirectAMD, "glMultiDrawArraysIndirectAMD");
  status_ = status_ && LOAD_(glMultiDrawElementsIndirectAMD, "glMultiDrawElementsIndirectAMD");
  SAVE_EXTENSION_("GL_AMD_multi_draw_indirect", status_);
}

if (HAS_EXTENSION_("GL_AMD_name_gen_delete")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenNamesAMD, "glGenNamesAMD");
  status_ = status_ && LOAD_(glDeleteNamesAMD, "glDeleteNamesAMD");
  status_ = status_ && LOAD_(glIsNameAMD, "glIsNameAMD");
  SAVE_EXTENSION_("GL_AMD_name_gen_delete", status_);
}

if (HAS_EXTENSION_("GL_AMD_occlusion_query_event")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glQueryObjectParameteruiAMD, "glQueryObjectParameteruiAMD");
  SAVE_EXTENSION_("GL_AMD_occlusion_query_event", status_);
}

if (HAS_EXTENSION_("GL_AMD_performance_monitor")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetPerfMonitorGroupsAMD, "glGetPerfMonitorGroupsAMD");
  status_ = status_ && LOAD_(glGetPerfMonitorCountersAMD, "glGetPerfMonitorCountersAMD");
  status_ = status_ && LOAD_(glGetPerfMonitorGroupStringAMD, "glGetPerfMonitorGroupStringAMD");
  status_ = status_ && LOAD_(glGetPerfMonitorCounterStringAMD, "glGetPerfMonitorCounterStringAMD");
  status_ = status_ && LOAD_(glGetPerfMonitorCounterInfoAMD, "glGetPerfMonitorCounterInfoAMD");
  status_ = status_ && LOAD_(glGenPerfMonitorsAMD, "glGenPerfMonitorsAMD");
  status_ = status_ && LOAD_(glDeletePerfMonitorsAMD, "glDeletePerfMonitorsAMD");
  status_ = status_ && LOAD_(glSelectPerfMonitorCountersAMD, "glSelectPerfMonitorCountersAMD");
  status_ = status_ && LOAD_(glBeginPerfMonitorAMD, "glBeginPerfMonitorAMD");
  status_ = status_ && LOAD_(glEndPerfMonitorAMD, "glEndPerfMonitorAMD");
  status_ = status_ && LOAD_(glGetPerfMonitorCounterDataAMD, "glGetPerfMonitorCounterDataAMD");
  SAVE_EXTENSION_("GL_AMD_performance_monitor", status_);
}

if (HAS_EXTENSION_("GL_AMD_sample_positions")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSetMultisamplefvAMD, "glSetMultisamplefvAMD");
  SAVE_EXTENSION_("GL_AMD_sample_positions", status_);
}

if (HAS_EXTENSION_("GL_AMD_sparse_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexStorageSparseAMD, "glTexStorageSparseAMD");
  status_ = status_ && LOAD_(glTextureStorageSparseAMD, "glTextureStorageSparseAMD");
  SAVE_EXTENSION_("GL_AMD_sparse_texture", status_);
}

if (HAS_EXTENSION_("GL_AMD_stencil_operation_extended")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glStencilOpValueAMD, "glStencilOpValueAMD");
  SAVE_EXTENSION_("GL_AMD_stencil_operation_extended", status_);
}

if (HAS_EXTENSION_("GL_AMD_vertex_shader_tessellator")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTessellationFactorAMD, "glTessellationFactorAMD");
  status_ = status_ && LOAD_(glTessellationModeAMD, "glTessellationModeAMD");
  SAVE_EXTENSION_("GL_AMD_vertex_shader_tessellator", status_);
}

if (HAS_EXTENSION_("GL_ANGLE_framebuffer_blit")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlitFramebufferANGLE, "glBlitFramebufferANGLE");
  SAVE_EXTENSION_("GL_ANGLE_framebuffer_blit", status_);
}

if (HAS_EXTENSION_("GL_ANGLE_framebuffer_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderbufferStorageMultisampleANGLE, "glRenderbufferStorageMultisampleANGLE");
  SAVE_EXTENSION_("GL_ANGLE_framebuffer_multisample", status_);
}

if (HAS_EXTENSION_("GL_ANGLE_instanced_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawArraysInstancedANGLE, "glDrawArraysInstancedANGLE");
  status_ = status_ && LOAD_(glDrawElementsInstancedANGLE, "glDrawElementsInstancedANGLE");
  status_ = status_ && LOAD_(glVertexAttribDivisorANGLE, "glVertexAttribDivisorANGLE");
  SAVE_EXTENSION_("GL_ANGLE_instanced_arrays", status_);
}

if (HAS_EXTENSION_("GL_ANGLE_translated_shader_source")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTranslatedShaderSourceANGLE, "glGetTranslatedShaderSourceANGLE");
  SAVE_EXTENSION_("GL_ANGLE_translated_shader_source", status_);
}

if (HAS_EXTENSION_("GL_APPLE_copy_texture_levels")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyTextureLevelsAPPLE, "glCopyTextureLevelsAPPLE");
  SAVE_EXTENSION_("GL_APPLE_copy_texture_levels", status_);
}

if (HAS_EXTENSION_("GL_APPLE_element_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glElementPointerAPPLE, "glElementPointerAPPLE");
  status_ = status_ && LOAD_(glDrawElementArrayAPPLE, "glDrawElementArrayAPPLE");
  status_ = status_ && LOAD_(glDrawRangeElementArrayAPPLE, "glDrawRangeElementArrayAPPLE");
  status_ = status_ && LOAD_(glMultiDrawElementArrayAPPLE, "glMultiDrawElementArrayAPPLE");
  status_ = status_ && LOAD_(glMultiDrawRangeElementArrayAPPLE, "glMultiDrawRangeElementArrayAPPLE");
  SAVE_EXTENSION_("GL_APPLE_element_array", status_);
}

if (HAS_EXTENSION_("GL_APPLE_fence")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenFencesAPPLE, "glGenFencesAPPLE");
  status_ = status_ && LOAD_(glDeleteFencesAPPLE, "glDeleteFencesAPPLE");
  status_ = status_ && LOAD_(glSetFenceAPPLE, "glSetFenceAPPLE");
  status_ = status_ && LOAD_(glIsFenceAPPLE, "glIsFenceAPPLE");
  status_ = status_ && LOAD_(glTestFenceAPPLE, "glTestFenceAPPLE");
  status_ = status_ && LOAD_(glFinishFenceAPPLE, "glFinishFenceAPPLE");
  status_ = status_ && LOAD_(glTestObjectAPPLE, "glTestObjectAPPLE");
  status_ = status_ && LOAD_(glFinishObjectAPPLE, "glFinishObjectAPPLE");
  SAVE_EXTENSION_("GL_APPLE_fence", status_);
}

if (HAS_EXTENSION_("GL_APPLE_flush_buffer_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBufferParameteriAPPLE, "glBufferParameteriAPPLE");
  status_ = status_ && LOAD_(glFlushMappedBufferRangeAPPLE, "glFlushMappedBufferRangeAPPLE");
  SAVE_EXTENSION_("GL_APPLE_flush_buffer_range", status_);
}

if (HAS_EXTENSION_("GL_APPLE_framebuffer_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderbufferStorageMultisampleAPPLE, "glRenderbufferStorageMultisampleAPPLE");
  status_ = status_ && LOAD_(glResolveMultisampleFramebufferAPPLE, "glResolveMultisampleFramebufferAPPLE");
  SAVE_EXTENSION_("GL_APPLE_framebuffer_multisample", status_);
}

if (HAS_EXTENSION_("GL_APPLE_object_purgeable")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glObjectPurgeableAPPLE, "glObjectPurgeableAPPLE");
  status_ = status_ && LOAD_(glObjectUnpurgeableAPPLE, "glObjectUnpurgeableAPPLE");
  status_ = status_ && LOAD_(glGetObjectParameterivAPPLE, "glGetObjectParameterivAPPLE");
  SAVE_EXTENSION_("GL_APPLE_object_purgeable", status_);
}

if (HAS_EXTENSION_("GL_APPLE_sync")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFenceSyncAPPLE, "glFenceSyncAPPLE");
  status_ = status_ && LOAD_(glIsSyncAPPLE, "glIsSyncAPPLE");
  status_ = status_ && LOAD_(glDeleteSyncAPPLE, "glDeleteSyncAPPLE");
  status_ = status_ && LOAD_(glClientWaitSyncAPPLE, "glClientWaitSyncAPPLE");
  status_ = status_ && LOAD_(glWaitSyncAPPLE, "glWaitSyncAPPLE");
  status_ = status_ && LOAD_(glGetInteger64vAPPLE, "glGetInteger64vAPPLE");
  status_ = status_ && LOAD_(glGetSyncivAPPLE, "glGetSyncivAPPLE");
  SAVE_EXTENSION_("GL_APPLE_sync", status_);
}

if (HAS_EXTENSION_("GL_APPLE_texture_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureRangeAPPLE, "glTextureRangeAPPLE");
  status_ = status_ && LOAD_(glGetTexParameterPointervAPPLE, "glGetTexParameterPointervAPPLE");
  SAVE_EXTENSION_("GL_APPLE_texture_range", status_);
}

if (HAS_EXTENSION_("GL_APPLE_vertex_array_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindVertexArrayAPPLE, "glBindVertexArrayAPPLE");
  status_ = status_ && LOAD_(glDeleteVertexArraysAPPLE, "glDeleteVertexArraysAPPLE");
  status_ = status_ && LOAD_(glGenVertexArraysAPPLE, "glGenVertexArraysAPPLE");
  status_ = status_ && LOAD_(glIsVertexArrayAPPLE, "glIsVertexArrayAPPLE");
  SAVE_EXTENSION_("GL_APPLE_vertex_array_object", status_);
}

if (HAS_EXTENSION_("GL_APPLE_vertex_array_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexArrayRangeAPPLE, "glVertexArrayRangeAPPLE");
  status_ = status_ && LOAD_(glFlushVertexArrayRangeAPPLE, "glFlushVertexArrayRangeAPPLE");
  status_ = status_ && LOAD_(glVertexArrayParameteriAPPLE, "glVertexArrayParameteriAPPLE");
  SAVE_EXTENSION_("GL_APPLE_vertex_array_range", status_);
}

if (HAS_EXTENSION_("GL_APPLE_vertex_program_evaluators")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glEnableVertexAttribAPPLE, "glEnableVertexAttribAPPLE");
  status_ = status_ && LOAD_(glDisableVertexAttribAPPLE, "glDisableVertexAttribAPPLE");
  status_ = status_ && LOAD_(glIsVertexAttribEnabledAPPLE, "glIsVertexAttribEnabledAPPLE");
  status_ = status_ && LOAD_(glMapVertexAttrib1dAPPLE, "glMapVertexAttrib1dAPPLE");
  status_ = status_ && LOAD_(glMapVertexAttrib1fAPPLE, "glMapVertexAttrib1fAPPLE");
  status_ = status_ && LOAD_(glMapVertexAttrib2dAPPLE, "glMapVertexAttrib2dAPPLE");
  status_ = status_ && LOAD_(glMapVertexAttrib2fAPPLE, "glMapVertexAttrib2fAPPLE");
  SAVE_EXTENSION_("GL_APPLE_vertex_program_evaluators", status_);
}

if (HAS_EXTENSION_("GL_ARB_ES2_compatibility")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glReleaseShaderCompiler, "glReleaseShaderCompiler");
  status_ = status_ && LOAD_(glShaderBinary, "glShaderBinary");
  status_ = status_ && LOAD_(glGetShaderPrecisionFormat, "glGetShaderPrecisionFormat");
  status_ = status_ && LOAD_(glDepthRangef, "glDepthRangef");
  status_ = status_ && LOAD_(glClearDepthf, "glClearDepthf");
  SAVE_EXTENSION_("GL_ARB_ES2_compatibility", status_);
}

if (HAS_EXTENSION_("GL_ARB_ES3_1_compatibility")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMemoryBarrierByRegion, "glMemoryBarrierByRegion");
  SAVE_EXTENSION_("GL_ARB_ES3_1_compatibility", status_);
}

if (HAS_EXTENSION_("GL_ARB_ES3_2_compatibility")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPrimitiveBoundingBoxARB, "glPrimitiveBoundingBoxARB");
  SAVE_EXTENSION_("GL_ARB_ES3_2_compatibility", status_);
}

if (HAS_EXTENSION_("GL_ARB_base_instance")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawArraysInstancedBaseInstance, "glDrawArraysInstancedBaseInstance");
  status_ = status_ && LOAD_(glDrawElementsInstancedBaseInstance, "glDrawElementsInstancedBaseInstance");
  status_ = status_ && LOAD_(glDrawElementsInstancedBaseVertexBaseInstance, "glDrawElementsInstancedBaseVertexBaseInstance");
  SAVE_EXTENSION_("GL_ARB_base_instance", status_);
}

if (HAS_EXTENSION_("GL_ARB_bindless_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTextureHandleARB, "glGetTextureHandleARB");
  status_ = status_ && LOAD_(glGetTextureSamplerHandleARB, "glGetTextureSamplerHandleARB");
  status_ = status_ && LOAD_(glMakeTextureHandleResidentARB, "glMakeTextureHandleResidentARB");
  status_ = status_ && LOAD_(glMakeTextureHandleNonResidentARB, "glMakeTextureHandleNonResidentARB");
  status_ = status_ && LOAD_(glGetImageHandleARB, "glGetImageHandleARB");
  status_ = status_ && LOAD_(glMakeImageHandleResidentARB, "glMakeImageHandleResidentARB");
  status_ = status_ && LOAD_(glMakeImageHandleNonResidentARB, "glMakeImageHandleNonResidentARB");
  status_ = status_ && LOAD_(glUniformHandleui64ARB, "glUniformHandleui64ARB");
  status_ = status_ && LOAD_(glUniformHandleui64vARB, "glUniformHandleui64vARB");
  status_ = status_ && LOAD_(glProgramUniformHandleui64ARB, "glProgramUniformHandleui64ARB");
  status_ = status_ && LOAD_(glProgramUniformHandleui64vARB, "glProgramUniformHandleui64vARB");
  status_ = status_ && LOAD_(glIsTextureHandleResidentARB, "glIsTextureHandleResidentARB");
  status_ = status_ && LOAD_(glIsImageHandleResidentARB, "glIsImageHandleResidentARB");
  status_ = status_ && LOAD_(glVertexAttribL1ui64ARB, "glVertexAttribL1ui64ARB");
  status_ = status_ && LOAD_(glVertexAttribL1ui64vARB, "glVertexAttribL1ui64vARB");
  status_ = status_ && LOAD_(glGetVertexAttribLui64vARB, "glGetVertexAttribLui64vARB");
  SAVE_EXTENSION_("GL_ARB_bindless_texture", status_);
}

if (HAS_EXTENSION_("GL_ARB_blend_func_extended")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindFragDataLocationIndexed, "glBindFragDataLocationIndexed");
  status_ = status_ && LOAD_(glGetFragDataIndex, "glGetFragDataIndex");
  SAVE_EXTENSION_("GL_ARB_blend_func_extended", status_);
}

if (HAS_EXTENSION_("GL_ARB_buffer_storage")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBufferStorage, "glBufferStorage");
  SAVE_EXTENSION_("GL_ARB_buffer_storage", status_);
}

if (HAS_EXTENSION_("GL_ARB_cl_event")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCreateSyncFromCLeventARB, "glCreateSyncFromCLeventARB");
  SAVE_EXTENSION_("GL_ARB_cl_event", status_);
}

if (HAS_EXTENSION_("GL_ARB_clear_buffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClearBufferData, "glClearBufferData");
  status_ = status_ && LOAD_(glClearBufferSubData, "glClearBufferSubData");
  SAVE_EXTENSION_("GL_ARB_clear_buffer_object", status_);
}

if (HAS_EXTENSION_("GL_ARB_clear_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClearTexImage, "glClearTexImage");
  status_ = status_ && LOAD_(glClearTexSubImage, "glClearTexSubImage");
  SAVE_EXTENSION_("GL_ARB_clear_texture", status_);
}

if (HAS_EXTENSION_("GL_ARB_clip_control")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClipControl, "glClipControl");
  SAVE_EXTENSION_("GL_ARB_clip_control", status_);
}

if (HAS_EXTENSION_("GL_ARB_color_buffer_float")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClampColorARB, "glClampColorARB");
  SAVE_EXTENSION_("GL_ARB_color_buffer_float", status_);
}

if (HAS_EXTENSION_("GL_ARB_compute_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDispatchCompute, "glDispatchCompute");
  status_ = status_ && LOAD_(glDispatchComputeIndirect, "glDispatchComputeIndirect");
  SAVE_EXTENSION_("GL_ARB_compute_shader", status_);
}

if (HAS_EXTENSION_("GL_ARB_compute_variable_group_size")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDispatchComputeGroupSizeARB, "glDispatchComputeGroupSizeARB");
  SAVE_EXTENSION_("GL_ARB_compute_variable_group_size", status_);
}

if (HAS_EXTENSION_("GL_ARB_copy_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyBufferSubData, "glCopyBufferSubData");
  SAVE_EXTENSION_("GL_ARB_copy_buffer", status_);
}

if (HAS_EXTENSION_("GL_ARB_copy_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyImageSubData, "glCopyImageSubData");
  SAVE_EXTENSION_("GL_ARB_copy_image", status_);
}

if (HAS_EXTENSION_("GL_ARB_debug_output")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDebugMessageControlARB, "glDebugMessageControlARB");
  status_ = status_ && LOAD_(glDebugMessageInsertARB, "glDebugMessageInsertARB");
  status_ = status_ && LOAD_(glDebugMessageCallbackARB, "glDebugMessageCallbackARB");
  status_ = status_ && LOAD_(glGetDebugMessageLogARB, "glGetDebugMessageLogARB");
  SAVE_EXTENSION_("GL_ARB_debug_output", status_);
}

if (HAS_EXTENSION_("GL_ARB_direct_state_access")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCreateTransformFeedbacks, "glCreateTransformFeedbacks");
  status_ = status_ && LOAD_(glTransformFeedbackBufferBase, "glTransformFeedbackBufferBase");
  status_ = status_ && LOAD_(glTransformFeedbackBufferRange, "glTransformFeedbackBufferRange");
  status_ = status_ && LOAD_(glGetTransformFeedbackiv, "glGetTransformFeedbackiv");
  status_ = status_ && LOAD_(glGetTransformFeedbacki_v, "glGetTransformFeedbacki_v");
  status_ = status_ && LOAD_(glGetTransformFeedbacki64_v, "glGetTransformFeedbacki64_v");
  status_ = status_ && LOAD_(glCreateBuffers, "glCreateBuffers");
  status_ = status_ && LOAD_(glNamedBufferStorage, "glNamedBufferStorage");
  status_ = status_ && LOAD_(glNamedBufferData, "glNamedBufferData");
  status_ = status_ && LOAD_(glNamedBufferSubData, "glNamedBufferSubData");
  status_ = status_ && LOAD_(glCopyNamedBufferSubData, "glCopyNamedBufferSubData");
  status_ = status_ && LOAD_(glClearNamedBufferData, "glClearNamedBufferData");
  status_ = status_ && LOAD_(glClearNamedBufferSubData, "glClearNamedBufferSubData");
  status_ = status_ && LOAD_(glMapNamedBuffer, "glMapNamedBuffer");
  status_ = status_ && LOAD_(glMapNamedBufferRange, "glMapNamedBufferRange");
  status_ = status_ && LOAD_(glUnmapNamedBuffer, "glUnmapNamedBuffer");
  status_ = status_ && LOAD_(glFlushMappedNamedBufferRange, "glFlushMappedNamedBufferRange");
  status_ = status_ && LOAD_(glGetNamedBufferParameteriv, "glGetNamedBufferParameteriv");
  status_ = status_ && LOAD_(glGetNamedBufferParameteri64v, "glGetNamedBufferParameteri64v");
  status_ = status_ && LOAD_(glGetNamedBufferPointerv, "glGetNamedBufferPointerv");
  status_ = status_ && LOAD_(glGetNamedBufferSubData, "glGetNamedBufferSubData");
  status_ = status_ && LOAD_(glCreateFramebuffers, "glCreateFramebuffers");
  status_ = status_ && LOAD_(glNamedFramebufferRenderbuffer, "glNamedFramebufferRenderbuffer");
  status_ = status_ && LOAD_(glNamedFramebufferParameteri, "glNamedFramebufferParameteri");
  status_ = status_ && LOAD_(glNamedFramebufferTexture, "glNamedFramebufferTexture");
  status_ = status_ && LOAD_(glNamedFramebufferTextureLayer, "glNamedFramebufferTextureLayer");
  status_ = status_ && LOAD_(glNamedFramebufferDrawBuffer, "glNamedFramebufferDrawBuffer");
  status_ = status_ && LOAD_(glNamedFramebufferDrawBuffers, "glNamedFramebufferDrawBuffers");
  status_ = status_ && LOAD_(glNamedFramebufferReadBuffer, "glNamedFramebufferReadBuffer");
  status_ = status_ && LOAD_(glInvalidateNamedFramebufferData, "glInvalidateNamedFramebufferData");
  status_ = status_ && LOAD_(glInvalidateNamedFramebufferSubData, "glInvalidateNamedFramebufferSubData");
  status_ = status_ && LOAD_(glClearNamedFramebufferiv, "glClearNamedFramebufferiv");
  status_ = status_ && LOAD_(glClearNamedFramebufferuiv, "glClearNamedFramebufferuiv");
  status_ = status_ && LOAD_(glClearNamedFramebufferfv, "glClearNamedFramebufferfv");
  status_ = status_ && LOAD_(glClearNamedFramebufferfi, "glClearNamedFramebufferfi");
  status_ = status_ && LOAD_(glBlitNamedFramebuffer, "glBlitNamedFramebuffer");
  status_ = status_ && LOAD_(glCheckNamedFramebufferStatus, "glCheckNamedFramebufferStatus");
  status_ = status_ && LOAD_(glGetNamedFramebufferParameteriv, "glGetNamedFramebufferParameteriv");
  status_ = status_ && LOAD_(glGetNamedFramebufferAttachmentParameteriv, "glGetNamedFramebufferAttachmentParameteriv");
  status_ = status_ && LOAD_(glCreateRenderbuffers, "glCreateRenderbuffers");
  status_ = status_ && LOAD_(glNamedRenderbufferStorage, "glNamedRenderbufferStorage");
  status_ = status_ && LOAD_(glNamedRenderbufferStorageMultisample, "glNamedRenderbufferStorageMultisample");
  status_ = status_ && LOAD_(glGetNamedRenderbufferParameteriv, "glGetNamedRenderbufferParameteriv");
  status_ = status_ && LOAD_(glCreateTextures, "glCreateTextures");
  status_ = status_ && LOAD_(glTextureBuffer, "glTextureBuffer");
  status_ = status_ && LOAD_(glTextureBufferRange, "glTextureBufferRange");
  status_ = status_ && LOAD_(glTextureStorage1D, "glTextureStorage1D");
  status_ = status_ && LOAD_(glTextureStorage2D, "glTextureStorage2D");
  status_ = status_ && LOAD_(glTextureStorage3D, "glTextureStorage3D");
  status_ = status_ && LOAD_(glTextureStorage2DMultisample, "glTextureStorage2DMultisample");
  status_ = status_ && LOAD_(glTextureStorage3DMultisample, "glTextureStorage3DMultisample");
  status_ = status_ && LOAD_(glTextureSubImage1D, "glTextureSubImage1D");
  status_ = status_ && LOAD_(glTextureSubImage2D, "glTextureSubImage2D");
  status_ = status_ && LOAD_(glTextureSubImage3D, "glTextureSubImage3D");
  status_ = status_ && LOAD_(glCompressedTextureSubImage1D, "glCompressedTextureSubImage1D");
  status_ = status_ && LOAD_(glCompressedTextureSubImage2D, "glCompressedTextureSubImage2D");
  status_ = status_ && LOAD_(glCompressedTextureSubImage3D, "glCompressedTextureSubImage3D");
  status_ = status_ && LOAD_(glCopyTextureSubImage1D, "glCopyTextureSubImage1D");
  status_ = status_ && LOAD_(glCopyTextureSubImage2D, "glCopyTextureSubImage2D");
  status_ = status_ && LOAD_(glCopyTextureSubImage3D, "glCopyTextureSubImage3D");
  status_ = status_ && LOAD_(glTextureParameterf, "glTextureParameterf");
  status_ = status_ && LOAD_(glTextureParameterfv, "glTextureParameterfv");
  status_ = status_ && LOAD_(glTextureParameteri, "glTextureParameteri");
  status_ = status_ && LOAD_(glTextureParameterIiv, "glTextureParameterIiv");
  status_ = status_ && LOAD_(glTextureParameterIuiv, "glTextureParameterIuiv");
  status_ = status_ && LOAD_(glTextureParameteriv, "glTextureParameteriv");
  status_ = status_ && LOAD_(glGenerateTextureMipmap, "glGenerateTextureMipmap");
  status_ = status_ && LOAD_(glBindTextureUnit, "glBindTextureUnit");
  status_ = status_ && LOAD_(glGetTextureImage, "glGetTextureImage");
  status_ = status_ && LOAD_(glGetCompressedTextureImage, "glGetCompressedTextureImage");
  status_ = status_ && LOAD_(glGetTextureLevelParameterfv, "glGetTextureLevelParameterfv");
  status_ = status_ && LOAD_(glGetTextureLevelParameteriv, "glGetTextureLevelParameteriv");
  status_ = status_ && LOAD_(glGetTextureParameterfv, "glGetTextureParameterfv");
  status_ = status_ && LOAD_(glGetTextureParameterIiv, "glGetTextureParameterIiv");
  status_ = status_ && LOAD_(glGetTextureParameterIuiv, "glGetTextureParameterIuiv");
  status_ = status_ && LOAD_(glGetTextureParameteriv, "glGetTextureParameteriv");
  status_ = status_ && LOAD_(glCreateVertexArrays, "glCreateVertexArrays");
  status_ = status_ && LOAD_(glDisableVertexArrayAttrib, "glDisableVertexArrayAttrib");
  status_ = status_ && LOAD_(glEnableVertexArrayAttrib, "glEnableVertexArrayAttrib");
  status_ = status_ && LOAD_(glVertexArrayElementBuffer, "glVertexArrayElementBuffer");
  status_ = status_ && LOAD_(glVertexArrayVertexBuffer, "glVertexArrayVertexBuffer");
  status_ = status_ && LOAD_(glVertexArrayVertexBuffers, "glVertexArrayVertexBuffers");
  status_ = status_ && LOAD_(glVertexArrayAttribBinding, "glVertexArrayAttribBinding");
  status_ = status_ && LOAD_(glVertexArrayAttribFormat, "glVertexArrayAttribFormat");
  status_ = status_ && LOAD_(glVertexArrayAttribIFormat, "glVertexArrayAttribIFormat");
  status_ = status_ && LOAD_(glVertexArrayAttribLFormat, "glVertexArrayAttribLFormat");
  status_ = status_ && LOAD_(glVertexArrayBindingDivisor, "glVertexArrayBindingDivisor");
  status_ = status_ && LOAD_(glGetVertexArrayiv, "glGetVertexArrayiv");
  status_ = status_ && LOAD_(glGetVertexArrayIndexediv, "glGetVertexArrayIndexediv");
  status_ = status_ && LOAD_(glGetVertexArrayIndexed64iv, "glGetVertexArrayIndexed64iv");
  status_ = status_ && LOAD_(glCreateSamplers, "glCreateSamplers");
  status_ = status_ && LOAD_(glCreateProgramPipelines, "glCreateProgramPipelines");
  status_ = status_ && LOAD_(glCreateQueries, "glCreateQueries");
  status_ = status_ && LOAD_(glGetQueryBufferObjecti64v, "glGetQueryBufferObjecti64v");
  status_ = status_ && LOAD_(glGetQueryBufferObjectiv, "glGetQueryBufferObjectiv");
  status_ = status_ && LOAD_(glGetQueryBufferObjectui64v, "glGetQueryBufferObjectui64v");
  status_ = status_ && LOAD_(glGetQueryBufferObjectuiv, "glGetQueryBufferObjectuiv");
  SAVE_EXTENSION_("GL_ARB_direct_state_access", status_);
}

if (HAS_EXTENSION_("GL_ARB_draw_buffers")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawBuffersARB, "glDrawBuffersARB");
  SAVE_EXTENSION_("GL_ARB_draw_buffers", status_);
}

if (HAS_EXTENSION_("GL_ARB_draw_buffers_blend")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendEquationiARB, "glBlendEquationiARB");
  status_ = status_ && LOAD_(glBlendEquationSeparateiARB, "glBlendEquationSeparateiARB");
  status_ = status_ && LOAD_(glBlendFunciARB, "glBlendFunciARB");
  status_ = status_ && LOAD_(glBlendFuncSeparateiARB, "glBlendFuncSeparateiARB");
  SAVE_EXTENSION_("GL_ARB_draw_buffers_blend", status_);
}

if (HAS_EXTENSION_("GL_ARB_draw_elements_base_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawElementsBaseVertex, "glDrawElementsBaseVertex");
  status_ = status_ && LOAD_(glDrawRangeElementsBaseVertex, "glDrawRangeElementsBaseVertex");
  status_ = status_ && LOAD_(glDrawElementsInstancedBaseVertex, "glDrawElementsInstancedBaseVertex");
  status_ = status_ && LOAD_(glMultiDrawElementsBaseVertex, "glMultiDrawElementsBaseVertex");
  SAVE_EXTENSION_("GL_ARB_draw_elements_base_vertex", status_);
}

if (HAS_EXTENSION_("GL_ARB_draw_indirect")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawArraysIndirect, "glDrawArraysIndirect");
  status_ = status_ && LOAD_(glDrawElementsIndirect, "glDrawElementsIndirect");
  SAVE_EXTENSION_("GL_ARB_draw_indirect", status_);
}

if (HAS_EXTENSION_("GL_ARB_draw_instanced")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawArraysInstancedARB, "glDrawArraysInstancedARB");
  status_ = status_ && LOAD_(glDrawElementsInstancedARB, "glDrawElementsInstancedARB");
  SAVE_EXTENSION_("GL_ARB_draw_instanced", status_);
}

if (HAS_EXTENSION_("GL_ARB_framebuffer_no_attachments")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferParameteri, "glFramebufferParameteri");
  status_ = status_ && LOAD_(glGetFramebufferParameteriv, "glGetFramebufferParameteriv");
  SAVE_EXTENSION_("GL_ARB_framebuffer_no_attachments", status_);
}

if (HAS_EXTENSION_("GL_ARB_framebuffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glIsRenderbuffer, "glIsRenderbuffer");
  status_ = status_ && LOAD_(glBindRenderbuffer, "glBindRenderbuffer");
  status_ = status_ && LOAD_(glDeleteRenderbuffers, "glDeleteRenderbuffers");
  status_ = status_ && LOAD_(glGenRenderbuffers, "glGenRenderbuffers");
  status_ = status_ && LOAD_(glRenderbufferStorage, "glRenderbufferStorage");
  status_ = status_ && LOAD_(glGetRenderbufferParameteriv, "glGetRenderbufferParameteriv");
  status_ = status_ && LOAD_(glIsFramebuffer, "glIsFramebuffer");
  status_ = status_ && LOAD_(glBindFramebuffer, "glBindFramebuffer");
  status_ = status_ && LOAD_(glDeleteFramebuffers, "glDeleteFramebuffers");
  status_ = status_ && LOAD_(glGenFramebuffers, "glGenFramebuffers");
  status_ = status_ && LOAD_(glCheckFramebufferStatus, "glCheckFramebufferStatus");
  status_ = status_ && LOAD_(glFramebufferTexture1D, "glFramebufferTexture1D");
  status_ = status_ && LOAD_(glFramebufferTexture2D, "glFramebufferTexture2D");
  status_ = status_ && LOAD_(glFramebufferTexture3D, "glFramebufferTexture3D");
  status_ = status_ && LOAD_(glFramebufferRenderbuffer, "glFramebufferRenderbuffer");
  status_ = status_ && LOAD_(glGetFramebufferAttachmentParameteriv, "glGetFramebufferAttachmentParameteriv");
  status_ = status_ && LOAD_(glGenerateMipmap, "glGenerateMipmap");
  status_ = status_ && LOAD_(glBlitFramebuffer, "glBlitFramebuffer");
  status_ = status_ && LOAD_(glRenderbufferStorageMultisample, "glRenderbufferStorageMultisample");
  status_ = status_ && LOAD_(glFramebufferTextureLayer, "glFramebufferTextureLayer");
  SAVE_EXTENSION_("GL_ARB_framebuffer_object", status_);
}

if (HAS_EXTENSION_("GL_ARB_geometry_shader4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramParameteriARB, "glProgramParameteriARB");
  status_ = status_ && LOAD_(glFramebufferTextureARB, "glFramebufferTextureARB");
  status_ = status_ && LOAD_(glFramebufferTextureLayerARB, "glFramebufferTextureLayerARB");
  status_ = status_ && LOAD_(glFramebufferTextureFaceARB, "glFramebufferTextureFaceARB");
  SAVE_EXTENSION_("GL_ARB_geometry_shader4", status_);
}

if (HAS_EXTENSION_("GL_ARB_get_program_binary")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetProgramBinary, "glGetProgramBinary");
  status_ = status_ && LOAD_(glProgramBinary, "glProgramBinary");
  SAVE_EXTENSION_("GL_ARB_get_program_binary", status_);
}

if (HAS_EXTENSION_("GL_ARB_get_texture_sub_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTextureSubImage, "glGetTextureSubImage");
  status_ = status_ && LOAD_(glGetCompressedTextureSubImage, "glGetCompressedTextureSubImage");
  SAVE_EXTENSION_("GL_ARB_get_texture_sub_image", status_);
}

if (HAS_EXTENSION_("GL_ARB_gl_spirv")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSpecializeShaderARB, "glSpecializeShaderARB");
  SAVE_EXTENSION_("GL_ARB_gl_spirv", status_);
}

if (HAS_EXTENSION_("GL_ARB_gpu_shader_fp64")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glUniform1d, "glUniform1d");
  status_ = status_ && LOAD_(glUniform2d, "glUniform2d");
  status_ = status_ && LOAD_(glUniform3d, "glUniform3d");
  status_ = status_ && LOAD_(glUniform4d, "glUniform4d");
  status_ = status_ && LOAD_(glUniform1dv, "glUniform1dv");
  status_ = status_ && LOAD_(glUniform2dv, "glUniform2dv");
  status_ = status_ && LOAD_(glUniform3dv, "glUniform3dv");
  status_ = status_ && LOAD_(glUniform4dv, "glUniform4dv");
  status_ = status_ && LOAD_(glUniformMatrix2dv, "glUniformMatrix2dv");
  status_ = status_ && LOAD_(glUniformMatrix3dv, "glUniformMatrix3dv");
  status_ = status_ && LOAD_(glUniformMatrix4dv, "glUniformMatrix4dv");
  status_ = status_ && LOAD_(glUniformMatrix2x3dv, "glUniformMatrix2x3dv");
  status_ = status_ && LOAD_(glUniformMatrix2x4dv, "glUniformMatrix2x4dv");
  status_ = status_ && LOAD_(glUniformMatrix3x2dv, "glUniformMatrix3x2dv");
  status_ = status_ && LOAD_(glUniformMatrix3x4dv, "glUniformMatrix3x4dv");
  status_ = status_ && LOAD_(glUniformMatrix4x2dv, "glUniformMatrix4x2dv");
  status_ = status_ && LOAD_(glUniformMatrix4x3dv, "glUniformMatrix4x3dv");
  status_ = status_ && LOAD_(glGetUniformdv, "glGetUniformdv");
  SAVE_EXTENSION_("GL_ARB_gpu_shader_fp64", status_);
}

if (HAS_EXTENSION_("GL_ARB_gpu_shader_int64")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glUniform1i64ARB, "glUniform1i64ARB");
  status_ = status_ && LOAD_(glUniform2i64ARB, "glUniform2i64ARB");
  status_ = status_ && LOAD_(glUniform3i64ARB, "glUniform3i64ARB");
  status_ = status_ && LOAD_(glUniform4i64ARB, "glUniform4i64ARB");
  status_ = status_ && LOAD_(glUniform1i64vARB, "glUniform1i64vARB");
  status_ = status_ && LOAD_(glUniform2i64vARB, "glUniform2i64vARB");
  status_ = status_ && LOAD_(glUniform3i64vARB, "glUniform3i64vARB");
  status_ = status_ && LOAD_(glUniform4i64vARB, "glUniform4i64vARB");
  status_ = status_ && LOAD_(glUniform1ui64ARB, "glUniform1ui64ARB");
  status_ = status_ && LOAD_(glUniform2ui64ARB, "glUniform2ui64ARB");
  status_ = status_ && LOAD_(glUniform3ui64ARB, "glUniform3ui64ARB");
  status_ = status_ && LOAD_(glUniform4ui64ARB, "glUniform4ui64ARB");
  status_ = status_ && LOAD_(glUniform1ui64vARB, "glUniform1ui64vARB");
  status_ = status_ && LOAD_(glUniform2ui64vARB, "glUniform2ui64vARB");
  status_ = status_ && LOAD_(glUniform3ui64vARB, "glUniform3ui64vARB");
  status_ = status_ && LOAD_(glUniform4ui64vARB, "glUniform4ui64vARB");
  status_ = status_ && LOAD_(glGetUniformi64vARB, "glGetUniformi64vARB");
  status_ = status_ && LOAD_(glGetUniformui64vARB, "glGetUniformui64vARB");
  status_ = status_ && LOAD_(glGetnUniformi64vARB, "glGetnUniformi64vARB");
  status_ = status_ && LOAD_(glGetnUniformui64vARB, "glGetnUniformui64vARB");
  status_ = status_ && LOAD_(glProgramUniform1i64ARB, "glProgramUniform1i64ARB");
  status_ = status_ && LOAD_(glProgramUniform2i64ARB, "glProgramUniform2i64ARB");
  status_ = status_ && LOAD_(glProgramUniform3i64ARB, "glProgramUniform3i64ARB");
  status_ = status_ && LOAD_(glProgramUniform4i64ARB, "glProgramUniform4i64ARB");
  status_ = status_ && LOAD_(glProgramUniform1i64vARB, "glProgramUniform1i64vARB");
  status_ = status_ && LOAD_(glProgramUniform2i64vARB, "glProgramUniform2i64vARB");
  status_ = status_ && LOAD_(glProgramUniform3i64vARB, "glProgramUniform3i64vARB");
  status_ = status_ && LOAD_(glProgramUniform4i64vARB, "glProgramUniform4i64vARB");
  status_ = status_ && LOAD_(glProgramUniform1ui64ARB, "glProgramUniform1ui64ARB");
  status_ = status_ && LOAD_(glProgramUniform2ui64ARB, "glProgramUniform2ui64ARB");
  status_ = status_ && LOAD_(glProgramUniform3ui64ARB, "glProgramUniform3ui64ARB");
  status_ = status_ && LOAD_(glProgramUniform4ui64ARB, "glProgramUniform4ui64ARB");
  status_ = status_ && LOAD_(glProgramUniform1ui64vARB, "glProgramUniform1ui64vARB");
  status_ = status_ && LOAD_(glProgramUniform2ui64vARB, "glProgramUniform2ui64vARB");
  status_ = status_ && LOAD_(glProgramUniform3ui64vARB, "glProgramUniform3ui64vARB");
  status_ = status_ && LOAD_(glProgramUniform4ui64vARB, "glProgramUniform4ui64vARB");
  SAVE_EXTENSION_("GL_ARB_gpu_shader_int64", status_);
}

if (HAS_EXTENSION_("GL_ARB_imaging")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendColor, "glBlendColor");
  status_ = status_ && LOAD_(glBlendEquation, "glBlendEquation");
  status_ = status_ && LOAD_(glColorTable, "glColorTable");
  status_ = status_ && LOAD_(glColorTableParameterfv, "glColorTableParameterfv");
  status_ = status_ && LOAD_(glColorTableParameteriv, "glColorTableParameteriv");
  status_ = status_ && LOAD_(glCopyColorTable, "glCopyColorTable");
  status_ = status_ && LOAD_(glGetColorTable, "glGetColorTable");
  status_ = status_ && LOAD_(glGetColorTableParameterfv, "glGetColorTableParameterfv");
  status_ = status_ && LOAD_(glGetColorTableParameteriv, "glGetColorTableParameteriv");
  status_ = status_ && LOAD_(glColorSubTable, "glColorSubTable");
  status_ = status_ && LOAD_(glCopyColorSubTable, "glCopyColorSubTable");
  status_ = status_ && LOAD_(glConvolutionFilter1D, "glConvolutionFilter1D");
  status_ = status_ && LOAD_(glConvolutionFilter2D, "glConvolutionFilter2D");
  status_ = status_ && LOAD_(glConvolutionParameterf, "glConvolutionParameterf");
  status_ = status_ && LOAD_(glConvolutionParameterfv, "glConvolutionParameterfv");
  status_ = status_ && LOAD_(glConvolutionParameteri, "glConvolutionParameteri");
  status_ = status_ && LOAD_(glConvolutionParameteriv, "glConvolutionParameteriv");
  status_ = status_ && LOAD_(glCopyConvolutionFilter1D, "glCopyConvolutionFilter1D");
  status_ = status_ && LOAD_(glCopyConvolutionFilter2D, "glCopyConvolutionFilter2D");
  status_ = status_ && LOAD_(glGetConvolutionFilter, "glGetConvolutionFilter");
  status_ = status_ && LOAD_(glGetConvolutionParameterfv, "glGetConvolutionParameterfv");
  status_ = status_ && LOAD_(glGetConvolutionParameteriv, "glGetConvolutionParameteriv");
  status_ = status_ && LOAD_(glGetSeparableFilter, "glGetSeparableFilter");
  status_ = status_ && LOAD_(glSeparableFilter2D, "glSeparableFilter2D");
  status_ = status_ && LOAD_(glGetHistogram, "glGetHistogram");
  status_ = status_ && LOAD_(glGetHistogramParameterfv, "glGetHistogramParameterfv");
  status_ = status_ && LOAD_(glGetHistogramParameteriv, "glGetHistogramParameteriv");
  status_ = status_ && LOAD_(glGetMinmax, "glGetMinmax");
  status_ = status_ && LOAD_(glGetMinmaxParameterfv, "glGetMinmaxParameterfv");
  status_ = status_ && LOAD_(glGetMinmaxParameteriv, "glGetMinmaxParameteriv");
  status_ = status_ && LOAD_(glHistogram, "glHistogram");
  status_ = status_ && LOAD_(glMinmax, "glMinmax");
  status_ = status_ && LOAD_(glResetHistogram, "glResetHistogram");
  status_ = status_ && LOAD_(glResetMinmax, "glResetMinmax");
  SAVE_EXTENSION_("GL_ARB_imaging", status_);
}

if (HAS_EXTENSION_("GL_ARB_indirect_parameters")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawArraysIndirectCountARB, "glMultiDrawArraysIndirectCountARB");
  status_ = status_ && LOAD_(glMultiDrawElementsIndirectCountARB, "glMultiDrawElementsIndirectCountARB");
  SAVE_EXTENSION_("GL_ARB_indirect_parameters", status_);
}

if (HAS_EXTENSION_("GL_ARB_instanced_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribDivisorARB, "glVertexAttribDivisorARB");
  SAVE_EXTENSION_("GL_ARB_instanced_arrays", status_);
}

if (HAS_EXTENSION_("GL_ARB_internalformat_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetInternalformativ, "glGetInternalformativ");
  SAVE_EXTENSION_("GL_ARB_internalformat_query", status_);
}

if (HAS_EXTENSION_("GL_ARB_internalformat_query2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetInternalformati64v, "glGetInternalformati64v");
  SAVE_EXTENSION_("GL_ARB_internalformat_query2", status_);
}

if (HAS_EXTENSION_("GL_ARB_invalidate_subdata")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glInvalidateTexSubImage, "glInvalidateTexSubImage");
  status_ = status_ && LOAD_(glInvalidateTexImage, "glInvalidateTexImage");
  status_ = status_ && LOAD_(glInvalidateBufferSubData, "glInvalidateBufferSubData");
  status_ = status_ && LOAD_(glInvalidateBufferData, "glInvalidateBufferData");
  status_ = status_ && LOAD_(glInvalidateFramebuffer, "glInvalidateFramebuffer");
  status_ = status_ && LOAD_(glInvalidateSubFramebuffer, "glInvalidateSubFramebuffer");
  SAVE_EXTENSION_("GL_ARB_invalidate_subdata", status_);
}

if (HAS_EXTENSION_("GL_ARB_map_buffer_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMapBufferRange, "glMapBufferRange");
  status_ = status_ && LOAD_(glFlushMappedBufferRange, "glFlushMappedBufferRange");
  SAVE_EXTENSION_("GL_ARB_map_buffer_range", status_);
}

if (HAS_EXTENSION_("GL_ARB_matrix_palette")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCurrentPaletteMatrixARB, "glCurrentPaletteMatrixARB");
  status_ = status_ && LOAD_(glMatrixIndexubvARB, "glMatrixIndexubvARB");
  status_ = status_ && LOAD_(glMatrixIndexusvARB, "glMatrixIndexusvARB");
  status_ = status_ && LOAD_(glMatrixIndexuivARB, "glMatrixIndexuivARB");
  status_ = status_ && LOAD_(glMatrixIndexPointerARB, "glMatrixIndexPointerARB");
  SAVE_EXTENSION_("GL_ARB_matrix_palette", status_);
}

if (HAS_EXTENSION_("GL_ARB_multi_bind")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindBuffersBase, "glBindBuffersBase");
  status_ = status_ && LOAD_(glBindBuffersRange, "glBindBuffersRange");
  status_ = status_ && LOAD_(glBindTextures, "glBindTextures");
  status_ = status_ && LOAD_(glBindSamplers, "glBindSamplers");
  status_ = status_ && LOAD_(glBindImageTextures, "glBindImageTextures");
  status_ = status_ && LOAD_(glBindVertexBuffers, "glBindVertexBuffers");
  SAVE_EXTENSION_("GL_ARB_multi_bind", status_);
}

if (HAS_EXTENSION_("GL_ARB_multi_draw_indirect")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawArraysIndirect, "glMultiDrawArraysIndirect");
  status_ = status_ && LOAD_(glMultiDrawElementsIndirect, "glMultiDrawElementsIndirect");
  SAVE_EXTENSION_("GL_ARB_multi_draw_indirect", status_);
}

if (HAS_EXTENSION_("GL_ARB_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSampleCoverageARB, "glSampleCoverageARB");
  SAVE_EXTENSION_("GL_ARB_multisample", status_);
}

if (HAS_EXTENSION_("GL_ARB_multitexture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glActiveTextureARB, "glActiveTextureARB");
  status_ = status_ && LOAD_(glClientActiveTextureARB, "glClientActiveTextureARB");
  status_ = status_ && LOAD_(glMultiTexCoord1dARB, "glMultiTexCoord1dARB");
  status_ = status_ && LOAD_(glMultiTexCoord1dvARB, "glMultiTexCoord1dvARB");
  status_ = status_ && LOAD_(glMultiTexCoord1fARB, "glMultiTexCoord1fARB");
  status_ = status_ && LOAD_(glMultiTexCoord1fvARB, "glMultiTexCoord1fvARB");
  status_ = status_ && LOAD_(glMultiTexCoord1iARB, "glMultiTexCoord1iARB");
  status_ = status_ && LOAD_(glMultiTexCoord1ivARB, "glMultiTexCoord1ivARB");
  status_ = status_ && LOAD_(glMultiTexCoord1sARB, "glMultiTexCoord1sARB");
  status_ = status_ && LOAD_(glMultiTexCoord1svARB, "glMultiTexCoord1svARB");
  status_ = status_ && LOAD_(glMultiTexCoord2dARB, "glMultiTexCoord2dARB");
  status_ = status_ && LOAD_(glMultiTexCoord2dvARB, "glMultiTexCoord2dvARB");
  status_ = status_ && LOAD_(glMultiTexCoord2fARB, "glMultiTexCoord2fARB");
  status_ = status_ && LOAD_(glMultiTexCoord2fvARB, "glMultiTexCoord2fvARB");
  status_ = status_ && LOAD_(glMultiTexCoord2iARB, "glMultiTexCoord2iARB");
  status_ = status_ && LOAD_(glMultiTexCoord2ivARB, "glMultiTexCoord2ivARB");
  status_ = status_ && LOAD_(glMultiTexCoord2sARB, "glMultiTexCoord2sARB");
  status_ = status_ && LOAD_(glMultiTexCoord2svARB, "glMultiTexCoord2svARB");
  status_ = status_ && LOAD_(glMultiTexCoord3dARB, "glMultiTexCoord3dARB");
  status_ = status_ && LOAD_(glMultiTexCoord3dvARB, "glMultiTexCoord3dvARB");
  status_ = status_ && LOAD_(glMultiTexCoord3fARB, "glMultiTexCoord3fARB");
  status_ = status_ && LOAD_(glMultiTexCoord3fvARB, "glMultiTexCoord3fvARB");
  status_ = status_ && LOAD_(glMultiTexCoord3iARB, "glMultiTexCoord3iARB");
  status_ = status_ && LOAD_(glMultiTexCoord3ivARB, "glMultiTexCoord3ivARB");
  status_ = status_ && LOAD_(glMultiTexCoord3sARB, "glMultiTexCoord3sARB");
  status_ = status_ && LOAD_(glMultiTexCoord3svARB, "glMultiTexCoord3svARB");
  status_ = status_ && LOAD_(glMultiTexCoord4dARB, "glMultiTexCoord4dARB");
  status_ = status_ && LOAD_(glMultiTexCoord4dvARB, "glMultiTexCoord4dvARB");
  status_ = status_ && LOAD_(glMultiTexCoord4fARB, "glMultiTexCoord4fARB");
  status_ = status_ && LOAD_(glMultiTexCoord4fvARB, "glMultiTexCoord4fvARB");
  status_ = status_ && LOAD_(glMultiTexCoord4iARB, "glMultiTexCoord4iARB");
  status_ = status_ && LOAD_(glMultiTexCoord4ivARB, "glMultiTexCoord4ivARB");
  status_ = status_ && LOAD_(glMultiTexCoord4sARB, "glMultiTexCoord4sARB");
  status_ = status_ && LOAD_(glMultiTexCoord4svARB, "glMultiTexCoord4svARB");
  SAVE_EXTENSION_("GL_ARB_multitexture", status_);
}

if (HAS_EXTENSION_("GL_ARB_occlusion_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenQueriesARB, "glGenQueriesARB");
  status_ = status_ && LOAD_(glDeleteQueriesARB, "glDeleteQueriesARB");
  status_ = status_ && LOAD_(glIsQueryARB, "glIsQueryARB");
  status_ = status_ && LOAD_(glBeginQueryARB, "glBeginQueryARB");
  status_ = status_ && LOAD_(glEndQueryARB, "glEndQueryARB");
  status_ = status_ && LOAD_(glGetQueryivARB, "glGetQueryivARB");
  status_ = status_ && LOAD_(glGetQueryObjectivARB, "glGetQueryObjectivARB");
  status_ = status_ && LOAD_(glGetQueryObjectuivARB, "glGetQueryObjectuivARB");
  SAVE_EXTENSION_("GL_ARB_occlusion_query", status_);
}

if (HAS_EXTENSION_("GL_ARB_parallel_shader_compile")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMaxShaderCompilerThreadsARB, "glMaxShaderCompilerThreadsARB");
  SAVE_EXTENSION_("GL_ARB_parallel_shader_compile", status_);
}

if (HAS_EXTENSION_("GL_ARB_point_parameters")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPointParameterfARB, "glPointParameterfARB");
  status_ = status_ && LOAD_(glPointParameterfvARB, "glPointParameterfvARB");
  SAVE_EXTENSION_("GL_ARB_point_parameters", status_);
}

if (HAS_EXTENSION_("GL_ARB_polygon_offset_clamp")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPolygonOffsetClamp, "glPolygonOffsetClamp");
  SAVE_EXTENSION_("GL_ARB_polygon_offset_clamp", status_);
}

if (HAS_EXTENSION_("GL_ARB_program_interface_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetProgramInterfaceiv, "glGetProgramInterfaceiv");
  status_ = status_ && LOAD_(glGetProgramResourceIndex, "glGetProgramResourceIndex");
  status_ = status_ && LOAD_(glGetProgramResourceName, "glGetProgramResourceName");
  status_ = status_ && LOAD_(glGetProgramResourceiv, "glGetProgramResourceiv");
  status_ = status_ && LOAD_(glGetProgramResourceLocation, "glGetProgramResourceLocation");
  status_ = status_ && LOAD_(glGetProgramResourceLocationIndex, "glGetProgramResourceLocationIndex");
  SAVE_EXTENSION_("GL_ARB_program_interface_query", status_);
}

if (HAS_EXTENSION_("GL_ARB_provoking_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProvokingVertex, "glProvokingVertex");
  SAVE_EXTENSION_("GL_ARB_provoking_vertex", status_);
}

if (HAS_EXTENSION_("GL_ARB_robustness")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetGraphicsResetStatusARB, "glGetGraphicsResetStatusARB");
  status_ = status_ && LOAD_(glGetnTexImageARB, "glGetnTexImageARB");
  status_ = status_ && LOAD_(glReadnPixelsARB, "glReadnPixelsARB");
  status_ = status_ && LOAD_(glGetnCompressedTexImageARB, "glGetnCompressedTexImageARB");
  status_ = status_ && LOAD_(glGetnUniformfvARB, "glGetnUniformfvARB");
  status_ = status_ && LOAD_(glGetnUniformivARB, "glGetnUniformivARB");
  status_ = status_ && LOAD_(glGetnUniformuivARB, "glGetnUniformuivARB");
  status_ = status_ && LOAD_(glGetnUniformdvARB, "glGetnUniformdvARB");
  status_ = status_ && LOAD_(glGetnMapdvARB, "glGetnMapdvARB");
  status_ = status_ && LOAD_(glGetnMapfvARB, "glGetnMapfvARB");
  status_ = status_ && LOAD_(glGetnMapivARB, "glGetnMapivARB");
  status_ = status_ && LOAD_(glGetnPixelMapfvARB, "glGetnPixelMapfvARB");
  status_ = status_ && LOAD_(glGetnPixelMapuivARB, "glGetnPixelMapuivARB");
  status_ = status_ && LOAD_(glGetnPixelMapusvARB, "glGetnPixelMapusvARB");
  status_ = status_ && LOAD_(glGetnPolygonStippleARB, "glGetnPolygonStippleARB");
  status_ = status_ && LOAD_(glGetnColorTableARB, "glGetnColorTableARB");
  status_ = status_ && LOAD_(glGetnConvolutionFilterARB, "glGetnConvolutionFilterARB");
  status_ = status_ && LOAD_(glGetnSeparableFilterARB, "glGetnSeparableFilterARB");
  status_ = status_ && LOAD_(glGetnHistogramARB, "glGetnHistogramARB");
  status_ = status_ && LOAD_(glGetnMinmaxARB, "glGetnMinmaxARB");
  SAVE_EXTENSION_("GL_ARB_robustness", status_);
}

if (HAS_EXTENSION_("GL_ARB_sample_locations")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferSampleLocationsfvARB, "glFramebufferSampleLocationsfvARB");
  status_ = status_ && LOAD_(glNamedFramebufferSampleLocationsfvARB, "glNamedFramebufferSampleLocationsfvARB");
  status_ = status_ && LOAD_(glEvaluateDepthValuesARB, "glEvaluateDepthValuesARB");
  SAVE_EXTENSION_("GL_ARB_sample_locations", status_);
}

if (HAS_EXTENSION_("GL_ARB_sample_shading")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMinSampleShadingARB, "glMinSampleShadingARB");
  SAVE_EXTENSION_("GL_ARB_sample_shading", status_);
}

if (HAS_EXTENSION_("GL_ARB_sampler_objects")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenSamplers, "glGenSamplers");
  status_ = status_ && LOAD_(glDeleteSamplers, "glDeleteSamplers");
  status_ = status_ && LOAD_(glIsSampler, "glIsSampler");
  status_ = status_ && LOAD_(glBindSampler, "glBindSampler");
  status_ = status_ && LOAD_(glSamplerParameteri, "glSamplerParameteri");
  status_ = status_ && LOAD_(glSamplerParameteriv, "glSamplerParameteriv");
  status_ = status_ && LOAD_(glSamplerParameterf, "glSamplerParameterf");
  status_ = status_ && LOAD_(glSamplerParameterfv, "glSamplerParameterfv");
  status_ = status_ && LOAD_(glSamplerParameterIiv, "glSamplerParameterIiv");
  status_ = status_ && LOAD_(glSamplerParameterIuiv, "glSamplerParameterIuiv");
  status_ = status_ && LOAD_(glGetSamplerParameteriv, "glGetSamplerParameteriv");
  status_ = status_ && LOAD_(glGetSamplerParameterIiv, "glGetSamplerParameterIiv");
  status_ = status_ && LOAD_(glGetSamplerParameterfv, "glGetSamplerParameterfv");
  status_ = status_ && LOAD_(glGetSamplerParameterIuiv, "glGetSamplerParameterIuiv");
  SAVE_EXTENSION_("GL_ARB_sampler_objects", status_);
}

if (HAS_EXTENSION_("GL_ARB_separate_shader_objects")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glUseProgramStages, "glUseProgramStages");
  status_ = status_ && LOAD_(glActiveShaderProgram, "glActiveShaderProgram");
  status_ = status_ && LOAD_(glCreateShaderProgramv, "glCreateShaderProgramv");
  status_ = status_ && LOAD_(glBindProgramPipeline, "glBindProgramPipeline");
  status_ = status_ && LOAD_(glDeleteProgramPipelines, "glDeleteProgramPipelines");
  status_ = status_ && LOAD_(glGenProgramPipelines, "glGenProgramPipelines");
  status_ = status_ && LOAD_(glIsProgramPipeline, "glIsProgramPipeline");
  status_ = status_ && LOAD_(glGetProgramPipelineiv, "glGetProgramPipelineiv");
  status_ = status_ && LOAD_(glProgramUniform1i, "glProgramUniform1i");
  status_ = status_ && LOAD_(glProgramUniform1iv, "glProgramUniform1iv");
  status_ = status_ && LOAD_(glProgramUniform1f, "glProgramUniform1f");
  status_ = status_ && LOAD_(glProgramUniform1fv, "glProgramUniform1fv");
  status_ = status_ && LOAD_(glProgramUniform1d, "glProgramUniform1d");
  status_ = status_ && LOAD_(glProgramUniform1dv, "glProgramUniform1dv");
  status_ = status_ && LOAD_(glProgramUniform1ui, "glProgramUniform1ui");
  status_ = status_ && LOAD_(glProgramUniform1uiv, "glProgramUniform1uiv");
  status_ = status_ && LOAD_(glProgramUniform2i, "glProgramUniform2i");
  status_ = status_ && LOAD_(glProgramUniform2iv, "glProgramUniform2iv");
  status_ = status_ && LOAD_(glProgramUniform2f, "glProgramUniform2f");
  status_ = status_ && LOAD_(glProgramUniform2fv, "glProgramUniform2fv");
  status_ = status_ && LOAD_(glProgramUniform2d, "glProgramUniform2d");
  status_ = status_ && LOAD_(glProgramUniform2dv, "glProgramUniform2dv");
  status_ = status_ && LOAD_(glProgramUniform2ui, "glProgramUniform2ui");
  status_ = status_ && LOAD_(glProgramUniform2uiv, "glProgramUniform2uiv");
  status_ = status_ && LOAD_(glProgramUniform3i, "glProgramUniform3i");
  status_ = status_ && LOAD_(glProgramUniform3iv, "glProgramUniform3iv");
  status_ = status_ && LOAD_(glProgramUniform3f, "glProgramUniform3f");
  status_ = status_ && LOAD_(glProgramUniform3fv, "glProgramUniform3fv");
  status_ = status_ && LOAD_(glProgramUniform3d, "glProgramUniform3d");
  status_ = status_ && LOAD_(glProgramUniform3dv, "glProgramUniform3dv");
  status_ = status_ && LOAD_(glProgramUniform3ui, "glProgramUniform3ui");
  status_ = status_ && LOAD_(glProgramUniform3uiv, "glProgramUniform3uiv");
  status_ = status_ && LOAD_(glProgramUniform4i, "glProgramUniform4i");
  status_ = status_ && LOAD_(glProgramUniform4iv, "glProgramUniform4iv");
  status_ = status_ && LOAD_(glProgramUniform4f, "glProgramUniform4f");
  status_ = status_ && LOAD_(glProgramUniform4fv, "glProgramUniform4fv");
  status_ = status_ && LOAD_(glProgramUniform4d, "glProgramUniform4d");
  status_ = status_ && LOAD_(glProgramUniform4dv, "glProgramUniform4dv");
  status_ = status_ && LOAD_(glProgramUniform4ui, "glProgramUniform4ui");
  status_ = status_ && LOAD_(glProgramUniform4uiv, "glProgramUniform4uiv");
  status_ = status_ && LOAD_(glProgramUniformMatrix2fv, "glProgramUniformMatrix2fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix3fv, "glProgramUniformMatrix3fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix4fv, "glProgramUniformMatrix4fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix2dv, "glProgramUniformMatrix2dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix3dv, "glProgramUniformMatrix3dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix4dv, "glProgramUniformMatrix4dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x3fv, "glProgramUniformMatrix2x3fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x2fv, "glProgramUniformMatrix3x2fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x4fv, "glProgramUniformMatrix2x4fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x2fv, "glProgramUniformMatrix4x2fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x4fv, "glProgramUniformMatrix3x4fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x3fv, "glProgramUniformMatrix4x3fv");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x3dv, "glProgramUniformMatrix2x3dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x2dv, "glProgramUniformMatrix3x2dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x4dv, "glProgramUniformMatrix2x4dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x2dv, "glProgramUniformMatrix4x2dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x4dv, "glProgramUniformMatrix3x4dv");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x3dv, "glProgramUniformMatrix4x3dv");
  status_ = status_ && LOAD_(glValidateProgramPipeline, "glValidateProgramPipeline");
  status_ = status_ && LOAD_(glGetProgramPipelineInfoLog, "glGetProgramPipelineInfoLog");
  SAVE_EXTENSION_("GL_ARB_separate_shader_objects", status_);
}

if (HAS_EXTENSION_("GL_ARB_shader_atomic_counters")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetActiveAtomicCounterBufferiv, "glGetActiveAtomicCounterBufferiv");
  SAVE_EXTENSION_("GL_ARB_shader_atomic_counters", status_);
}

if (HAS_EXTENSION_("GL_ARB_shader_image_load_store")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindImageTexture, "glBindImageTexture");
  status_ = status_ && LOAD_(glMemoryBarrier, "glMemoryBarrier");
  SAVE_EXTENSION_("GL_ARB_shader_image_load_store", status_);
}

if (HAS_EXTENSION_("GL_ARB_shader_objects")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDeleteObjectARB, "glDeleteObjectARB");
  status_ = status_ && LOAD_(glGetHandleARB, "glGetHandleARB");
  status_ = status_ && LOAD_(glDetachObjectARB, "glDetachObjectARB");
  status_ = status_ && LOAD_(glCreateShaderObjectARB, "glCreateShaderObjectARB");
  status_ = status_ && LOAD_(glShaderSourceARB, "glShaderSourceARB");
  status_ = status_ && LOAD_(glCompileShaderARB, "glCompileShaderARB");
  status_ = status_ && LOAD_(glCreateProgramObjectARB, "glCreateProgramObjectARB");
  status_ = status_ && LOAD_(glAttachObjectARB, "glAttachObjectARB");
  status_ = status_ && LOAD_(glLinkProgramARB, "glLinkProgramARB");
  status_ = status_ && LOAD_(glUseProgramObjectARB, "glUseProgramObjectARB");
  status_ = status_ && LOAD_(glValidateProgramARB, "glValidateProgramARB");
  status_ = status_ && LOAD_(glUniform1fARB, "glUniform1fARB");
  status_ = status_ && LOAD_(glUniform2fARB, "glUniform2fARB");
  status_ = status_ && LOAD_(glUniform3fARB, "glUniform3fARB");
  status_ = status_ && LOAD_(glUniform4fARB, "glUniform4fARB");
  status_ = status_ && LOAD_(glUniform1iARB, "glUniform1iARB");
  status_ = status_ && LOAD_(glUniform2iARB, "glUniform2iARB");
  status_ = status_ && LOAD_(glUniform3iARB, "glUniform3iARB");
  status_ = status_ && LOAD_(glUniform4iARB, "glUniform4iARB");
  status_ = status_ && LOAD_(glUniform1fvARB, "glUniform1fvARB");
  status_ = status_ && LOAD_(glUniform2fvARB, "glUniform2fvARB");
  status_ = status_ && LOAD_(glUniform3fvARB, "glUniform3fvARB");
  status_ = status_ && LOAD_(glUniform4fvARB, "glUniform4fvARB");
  status_ = status_ && LOAD_(glUniform1ivARB, "glUniform1ivARB");
  status_ = status_ && LOAD_(glUniform2ivARB, "glUniform2ivARB");
  status_ = status_ && LOAD_(glUniform3ivARB, "glUniform3ivARB");
  status_ = status_ && LOAD_(glUniform4ivARB, "glUniform4ivARB");
  status_ = status_ && LOAD_(glUniformMatrix2fvARB, "glUniformMatrix2fvARB");
  status_ = status_ && LOAD_(glUniformMatrix3fvARB, "glUniformMatrix3fvARB");
  status_ = status_ && LOAD_(glUniformMatrix4fvARB, "glUniformMatrix4fvARB");
  status_ = status_ && LOAD_(glGetObjectParameterfvARB, "glGetObjectParameterfvARB");
  status_ = status_ && LOAD_(glGetObjectParameterivARB, "glGetObjectParameterivARB");
  status_ = status_ && LOAD_(glGetInfoLogARB, "glGetInfoLogARB");
  status_ = status_ && LOAD_(glGetAttachedObjectsARB, "glGetAttachedObjectsARB");
  status_ = status_ && LOAD_(glGetUniformLocationARB, "glGetUniformLocationARB");
  status_ = status_ && LOAD_(glGetActiveUniformARB, "glGetActiveUniformARB");
  status_ = status_ && LOAD_(glGetUniformfvARB, "glGetUniformfvARB");
  status_ = status_ && LOAD_(glGetUniformivARB, "glGetUniformivARB");
  status_ = status_ && LOAD_(glGetShaderSourceARB, "glGetShaderSourceARB");
  SAVE_EXTENSION_("GL_ARB_shader_objects", status_);
}

if (HAS_EXTENSION_("GL_ARB_shader_storage_buffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glShaderStorageBlockBinding, "glShaderStorageBlockBinding");
  SAVE_EXTENSION_("GL_ARB_shader_storage_buffer_object", status_);
}

if (HAS_EXTENSION_("GL_ARB_shader_subroutine")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetSubroutineUniformLocation, "glGetSubroutineUniformLocation");
  status_ = status_ && LOAD_(glGetSubroutineIndex, "glGetSubroutineIndex");
  status_ = status_ && LOAD_(glGetActiveSubroutineUniformiv, "glGetActiveSubroutineUniformiv");
  status_ = status_ && LOAD_(glGetActiveSubroutineUniformName, "glGetActiveSubroutineUniformName");
  status_ = status_ && LOAD_(glGetActiveSubroutineName, "glGetActiveSubroutineName");
  status_ = status_ && LOAD_(glUniformSubroutinesuiv, "glUniformSubroutinesuiv");
  status_ = status_ && LOAD_(glGetUniformSubroutineuiv, "glGetUniformSubroutineuiv");
  status_ = status_ && LOAD_(glGetProgramStageiv, "glGetProgramStageiv");
  SAVE_EXTENSION_("GL_ARB_shader_subroutine", status_);
}

if (HAS_EXTENSION_("GL_ARB_shading_language_include")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glNamedStringARB, "glNamedStringARB");
  status_ = status_ && LOAD_(glDeleteNamedStringARB, "glDeleteNamedStringARB");
  status_ = status_ && LOAD_(glCompileShaderIncludeARB, "glCompileShaderIncludeARB");
  status_ = status_ && LOAD_(glIsNamedStringARB, "glIsNamedStringARB");
  status_ = status_ && LOAD_(glGetNamedStringARB, "glGetNamedStringARB");
  status_ = status_ && LOAD_(glGetNamedStringivARB, "glGetNamedStringivARB");
  SAVE_EXTENSION_("GL_ARB_shading_language_include", status_);
}

if (HAS_EXTENSION_("GL_ARB_sparse_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBufferPageCommitmentARB, "glBufferPageCommitmentARB");
  status_ = status_ && LOAD_(glNamedBufferPageCommitmentEXT, "glNamedBufferPageCommitmentEXT");
  status_ = status_ && LOAD_(glNamedBufferPageCommitmentARB, "glNamedBufferPageCommitmentARB");
  SAVE_EXTENSION_("GL_ARB_sparse_buffer", status_);
}

if (HAS_EXTENSION_("GL_ARB_sparse_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexPageCommitmentARB, "glTexPageCommitmentARB");
  SAVE_EXTENSION_("GL_ARB_sparse_texture", status_);
}

if (HAS_EXTENSION_("GL_ARB_sync")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFenceSync, "glFenceSync");
  status_ = status_ && LOAD_(glIsSync, "glIsSync");
  status_ = status_ && LOAD_(glDeleteSync, "glDeleteSync");
  status_ = status_ && LOAD_(glClientWaitSync, "glClientWaitSync");
  status_ = status_ && LOAD_(glWaitSync, "glWaitSync");
  status_ = status_ && LOAD_(glGetInteger64v, "glGetInteger64v");
  status_ = status_ && LOAD_(glGetSynciv, "glGetSynciv");
  SAVE_EXTENSION_("GL_ARB_sync", status_);
}

if (HAS_EXTENSION_("GL_ARB_tessellation_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPatchParameteri, "glPatchParameteri");
  status_ = status_ && LOAD_(glPatchParameterfv, "glPatchParameterfv");
  SAVE_EXTENSION_("GL_ARB_tessellation_shader", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_barrier")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureBarrier, "glTextureBarrier");
  SAVE_EXTENSION_("GL_ARB_texture_barrier", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_buffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexBufferARB, "glTexBufferARB");
  SAVE_EXTENSION_("GL_ARB_texture_buffer_object", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_buffer_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexBufferRange, "glTexBufferRange");
  SAVE_EXTENSION_("GL_ARB_texture_buffer_range", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_compression")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCompressedTexImage3DARB, "glCompressedTexImage3DARB");
  status_ = status_ && LOAD_(glCompressedTexImage2DARB, "glCompressedTexImage2DARB");
  status_ = status_ && LOAD_(glCompressedTexImage1DARB, "glCompressedTexImage1DARB");
  status_ = status_ && LOAD_(glCompressedTexSubImage3DARB, "glCompressedTexSubImage3DARB");
  status_ = status_ && LOAD_(glCompressedTexSubImage2DARB, "glCompressedTexSubImage2DARB");
  status_ = status_ && LOAD_(glCompressedTexSubImage1DARB, "glCompressedTexSubImage1DARB");
  status_ = status_ && LOAD_(glGetCompressedTexImageARB, "glGetCompressedTexImageARB");
  SAVE_EXTENSION_("GL_ARB_texture_compression", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexImage2DMultisample, "glTexImage2DMultisample");
  status_ = status_ && LOAD_(glTexImage3DMultisample, "glTexImage3DMultisample");
  status_ = status_ && LOAD_(glGetMultisamplefv, "glGetMultisamplefv");
  status_ = status_ && LOAD_(glSampleMaski, "glSampleMaski");
  SAVE_EXTENSION_("GL_ARB_texture_multisample", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_storage")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexStorage1D, "glTexStorage1D");
  status_ = status_ && LOAD_(glTexStorage2D, "glTexStorage2D");
  status_ = status_ && LOAD_(glTexStorage3D, "glTexStorage3D");
  SAVE_EXTENSION_("GL_ARB_texture_storage", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_storage_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexStorage2DMultisample, "glTexStorage2DMultisample");
  status_ = status_ && LOAD_(glTexStorage3DMultisample, "glTexStorage3DMultisample");
  SAVE_EXTENSION_("GL_ARB_texture_storage_multisample", status_);
}

if (HAS_EXTENSION_("GL_ARB_texture_view")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureView, "glTextureView");
  SAVE_EXTENSION_("GL_ARB_texture_view", status_);
}

if (HAS_EXTENSION_("GL_ARB_timer_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glQueryCounter, "glQueryCounter");
  status_ = status_ && LOAD_(glGetQueryObjecti64v, "glGetQueryObjecti64v");
  status_ = status_ && LOAD_(glGetQueryObjectui64v, "glGetQueryObjectui64v");
  SAVE_EXTENSION_("GL_ARB_timer_query", status_);
}

if (HAS_EXTENSION_("GL_ARB_transform_feedback2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindTransformFeedback, "glBindTransformFeedback");
  status_ = status_ && LOAD_(glDeleteTransformFeedbacks, "glDeleteTransformFeedbacks");
  status_ = status_ && LOAD_(glGenTransformFeedbacks, "glGenTransformFeedbacks");
  status_ = status_ && LOAD_(glIsTransformFeedback, "glIsTransformFeedback");
  status_ = status_ && LOAD_(glPauseTransformFeedback, "glPauseTransformFeedback");
  status_ = status_ && LOAD_(glResumeTransformFeedback, "glResumeTransformFeedback");
  status_ = status_ && LOAD_(glDrawTransformFeedback, "glDrawTransformFeedback");
  SAVE_EXTENSION_("GL_ARB_transform_feedback2", status_);
}

if (HAS_EXTENSION_("GL_ARB_transform_feedback3")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawTransformFeedbackStream, "glDrawTransformFeedbackStream");
  status_ = status_ && LOAD_(glBeginQueryIndexed, "glBeginQueryIndexed");
  status_ = status_ && LOAD_(glEndQueryIndexed, "glEndQueryIndexed");
  status_ = status_ && LOAD_(glGetQueryIndexediv, "glGetQueryIndexediv");
  SAVE_EXTENSION_("GL_ARB_transform_feedback3", status_);
}

if (HAS_EXTENSION_("GL_ARB_transform_feedback_instanced")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawTransformFeedbackInstanced, "glDrawTransformFeedbackInstanced");
  status_ = status_ && LOAD_(glDrawTransformFeedbackStreamInstanced, "glDrawTransformFeedbackStreamInstanced");
  SAVE_EXTENSION_("GL_ARB_transform_feedback_instanced", status_);
}

if (HAS_EXTENSION_("GL_ARB_transpose_matrix")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glLoadTransposeMatrixfARB, "glLoadTransposeMatrixfARB");
  status_ = status_ && LOAD_(glLoadTransposeMatrixdARB, "glLoadTransposeMatrixdARB");
  status_ = status_ && LOAD_(glMultTransposeMatrixfARB, "glMultTransposeMatrixfARB");
  status_ = status_ && LOAD_(glMultTransposeMatrixdARB, "glMultTransposeMatrixdARB");
  SAVE_EXTENSION_("GL_ARB_transpose_matrix", status_);
}

if (HAS_EXTENSION_("GL_ARB_uniform_buffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetUniformIndices, "glGetUniformIndices");
  status_ = status_ && LOAD_(glGetActiveUniformsiv, "glGetActiveUniformsiv");
  status_ = status_ && LOAD_(glGetActiveUniformName, "glGetActiveUniformName");
  status_ = status_ && LOAD_(glGetUniformBlockIndex, "glGetUniformBlockIndex");
  status_ = status_ && LOAD_(glGetActiveUniformBlockiv, "glGetActiveUniformBlockiv");
  status_ = status_ && LOAD_(glGetActiveUniformBlockName, "glGetActiveUniformBlockName");
  status_ = status_ && LOAD_(glUniformBlockBinding, "glUniformBlockBinding");
  status_ = status_ && LOAD_(glBindBufferRange, "glBindBufferRange");
  status_ = status_ && LOAD_(glBindBufferBase, "glBindBufferBase");
  status_ = status_ && LOAD_(glGetIntegeri_v, "glGetIntegeri_v");
  SAVE_EXTENSION_("GL_ARB_uniform_buffer_object", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_array_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindVertexArray, "glBindVertexArray");
  status_ = status_ && LOAD_(glDeleteVertexArrays, "glDeleteVertexArrays");
  status_ = status_ && LOAD_(glGenVertexArrays, "glGenVertexArrays");
  status_ = status_ && LOAD_(glIsVertexArray, "glIsVertexArray");
  SAVE_EXTENSION_("GL_ARB_vertex_array_object", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_attrib_64bit")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribL1d, "glVertexAttribL1d");
  status_ = status_ && LOAD_(glVertexAttribL2d, "glVertexAttribL2d");
  status_ = status_ && LOAD_(glVertexAttribL3d, "glVertexAttribL3d");
  status_ = status_ && LOAD_(glVertexAttribL4d, "glVertexAttribL4d");
  status_ = status_ && LOAD_(glVertexAttribL1dv, "glVertexAttribL1dv");
  status_ = status_ && LOAD_(glVertexAttribL2dv, "glVertexAttribL2dv");
  status_ = status_ && LOAD_(glVertexAttribL3dv, "glVertexAttribL3dv");
  status_ = status_ && LOAD_(glVertexAttribL4dv, "glVertexAttribL4dv");
  status_ = status_ && LOAD_(glVertexAttribLPointer, "glVertexAttribLPointer");
  status_ = status_ && LOAD_(glGetVertexAttribLdv, "glGetVertexAttribLdv");
  SAVE_EXTENSION_("GL_ARB_vertex_attrib_64bit", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_attrib_binding")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindVertexBuffer, "glBindVertexBuffer");
  status_ = status_ && LOAD_(glVertexAttribFormat, "glVertexAttribFormat");
  status_ = status_ && LOAD_(glVertexAttribIFormat, "glVertexAttribIFormat");
  status_ = status_ && LOAD_(glVertexAttribLFormat, "glVertexAttribLFormat");
  status_ = status_ && LOAD_(glVertexAttribBinding, "glVertexAttribBinding");
  status_ = status_ && LOAD_(glVertexBindingDivisor, "glVertexBindingDivisor");
  SAVE_EXTENSION_("GL_ARB_vertex_attrib_binding", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_blend")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glWeightbvARB, "glWeightbvARB");
  status_ = status_ && LOAD_(glWeightsvARB, "glWeightsvARB");
  status_ = status_ && LOAD_(glWeightivARB, "glWeightivARB");
  status_ = status_ && LOAD_(glWeightfvARB, "glWeightfvARB");
  status_ = status_ && LOAD_(glWeightdvARB, "glWeightdvARB");
  status_ = status_ && LOAD_(glWeightubvARB, "glWeightubvARB");
  status_ = status_ && LOAD_(glWeightusvARB, "glWeightusvARB");
  status_ = status_ && LOAD_(glWeightuivARB, "glWeightuivARB");
  status_ = status_ && LOAD_(glWeightPointerARB, "glWeightPointerARB");
  status_ = status_ && LOAD_(glVertexBlendARB, "glVertexBlendARB");
  SAVE_EXTENSION_("GL_ARB_vertex_blend", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_buffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindBufferARB, "glBindBufferARB");
  status_ = status_ && LOAD_(glDeleteBuffersARB, "glDeleteBuffersARB");
  status_ = status_ && LOAD_(glGenBuffersARB, "glGenBuffersARB");
  status_ = status_ && LOAD_(glIsBufferARB, "glIsBufferARB");
  status_ = status_ && LOAD_(glBufferDataARB, "glBufferDataARB");
  status_ = status_ && LOAD_(glBufferSubDataARB, "glBufferSubDataARB");
  status_ = status_ && LOAD_(glGetBufferSubDataARB, "glGetBufferSubDataARB");
  status_ = status_ && LOAD_(glMapBufferARB, "glMapBufferARB");
  status_ = status_ && LOAD_(glUnmapBufferARB, "glUnmapBufferARB");
  status_ = status_ && LOAD_(glGetBufferParameterivARB, "glGetBufferParameterivARB");
  status_ = status_ && LOAD_(glGetBufferPointervARB, "glGetBufferPointervARB");
  SAVE_EXTENSION_("GL_ARB_vertex_buffer_object", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindAttribLocationARB, "glBindAttribLocationARB");
  status_ = status_ && LOAD_(glGetActiveAttribARB, "glGetActiveAttribARB");
  status_ = status_ && LOAD_(glGetAttribLocationARB, "glGetAttribLocationARB");
  SAVE_EXTENSION_("GL_ARB_vertex_shader", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_type_2_10_10_10_rev")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribP1ui, "glVertexAttribP1ui");
  status_ = status_ && LOAD_(glVertexAttribP1uiv, "glVertexAttribP1uiv");
  status_ = status_ && LOAD_(glVertexAttribP2ui, "glVertexAttribP2ui");
  status_ = status_ && LOAD_(glVertexAttribP2uiv, "glVertexAttribP2uiv");
  status_ = status_ && LOAD_(glVertexAttribP3ui, "glVertexAttribP3ui");
  status_ = status_ && LOAD_(glVertexAttribP3uiv, "glVertexAttribP3uiv");
  status_ = status_ && LOAD_(glVertexAttribP4ui, "glVertexAttribP4ui");
  status_ = status_ && LOAD_(glVertexAttribP4uiv, "glVertexAttribP4uiv");
  status_ = status_ && LOAD_(glVertexP2ui, "glVertexP2ui");
  status_ = status_ && LOAD_(glVertexP2uiv, "glVertexP2uiv");
  status_ = status_ && LOAD_(glVertexP3ui, "glVertexP3ui");
  status_ = status_ && LOAD_(glVertexP3uiv, "glVertexP3uiv");
  status_ = status_ && LOAD_(glVertexP4ui, "glVertexP4ui");
  status_ = status_ && LOAD_(glVertexP4uiv, "glVertexP4uiv");
  status_ = status_ && LOAD_(glTexCoordP1ui, "glTexCoordP1ui");
  status_ = status_ && LOAD_(glTexCoordP1uiv, "glTexCoordP1uiv");
  status_ = status_ && LOAD_(glTexCoordP2ui, "glTexCoordP2ui");
  status_ = status_ && LOAD_(glTexCoordP2uiv, "glTexCoordP2uiv");
  status_ = status_ && LOAD_(glTexCoordP3ui, "glTexCoordP3ui");
  status_ = status_ && LOAD_(glTexCoordP3uiv, "glTexCoordP3uiv");
  status_ = status_ && LOAD_(glTexCoordP4ui, "glTexCoordP4ui");
  status_ = status_ && LOAD_(glTexCoordP4uiv, "glTexCoordP4uiv");
  status_ = status_ && LOAD_(glMultiTexCoordP1ui, "glMultiTexCoordP1ui");
  status_ = status_ && LOAD_(glMultiTexCoordP1uiv, "glMultiTexCoordP1uiv");
  status_ = status_ && LOAD_(glMultiTexCoordP2ui, "glMultiTexCoordP2ui");
  status_ = status_ && LOAD_(glMultiTexCoordP2uiv, "glMultiTexCoordP2uiv");
  status_ = status_ && LOAD_(glMultiTexCoordP3ui, "glMultiTexCoordP3ui");
  status_ = status_ && LOAD_(glMultiTexCoordP3uiv, "glMultiTexCoordP3uiv");
  status_ = status_ && LOAD_(glMultiTexCoordP4ui, "glMultiTexCoordP4ui");
  status_ = status_ && LOAD_(glMultiTexCoordP4uiv, "glMultiTexCoordP4uiv");
  status_ = status_ && LOAD_(glNormalP3ui, "glNormalP3ui");
  status_ = status_ && LOAD_(glNormalP3uiv, "glNormalP3uiv");
  status_ = status_ && LOAD_(glColorP3ui, "glColorP3ui");
  status_ = status_ && LOAD_(glColorP3uiv, "glColorP3uiv");
  status_ = status_ && LOAD_(glColorP4ui, "glColorP4ui");
  status_ = status_ && LOAD_(glColorP4uiv, "glColorP4uiv");
  status_ = status_ && LOAD_(glSecondaryColorP3ui, "glSecondaryColorP3ui");
  status_ = status_ && LOAD_(glSecondaryColorP3uiv, "glSecondaryColorP3uiv");
  SAVE_EXTENSION_("GL_ARB_vertex_type_2_10_10_10_rev", status_);
}

if (HAS_EXTENSION_("GL_ARB_viewport_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glViewportArrayv, "glViewportArrayv");
  status_ = status_ && LOAD_(glViewportIndexedf, "glViewportIndexedf");
  status_ = status_ && LOAD_(glViewportIndexedfv, "glViewportIndexedfv");
  status_ = status_ && LOAD_(glScissorArrayv, "glScissorArrayv");
  status_ = status_ && LOAD_(glScissorIndexed, "glScissorIndexed");
  status_ = status_ && LOAD_(glScissorIndexedv, "glScissorIndexedv");
  status_ = status_ && LOAD_(glDepthRangeArrayv, "glDepthRangeArrayv");
  status_ = status_ && LOAD_(glDepthRangeIndexed, "glDepthRangeIndexed");
  status_ = status_ && LOAD_(glGetFloati_v, "glGetFloati_v");
  status_ = status_ && LOAD_(glGetDoublei_v, "glGetDoublei_v");
  status_ = status_ && LOAD_(glDepthRangeArraydvNV, "glDepthRangeArraydvNV");
  status_ = status_ && LOAD_(glDepthRangeIndexeddNV, "glDepthRangeIndexeddNV");
  SAVE_EXTENSION_("GL_ARB_viewport_array", status_);
}

if (HAS_EXTENSION_("GL_ARB_window_pos")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glWindowPos2dARB, "glWindowPos2dARB");
  status_ = status_ && LOAD_(glWindowPos2dvARB, "glWindowPos2dvARB");
  status_ = status_ && LOAD_(glWindowPos2fARB, "glWindowPos2fARB");
  status_ = status_ && LOAD_(glWindowPos2fvARB, "glWindowPos2fvARB");
  status_ = status_ && LOAD_(glWindowPos2iARB, "glWindowPos2iARB");
  status_ = status_ && LOAD_(glWindowPos2ivARB, "glWindowPos2ivARB");
  status_ = status_ && LOAD_(glWindowPos2sARB, "glWindowPos2sARB");
  status_ = status_ && LOAD_(glWindowPos2svARB, "glWindowPos2svARB");
  status_ = status_ && LOAD_(glWindowPos3dARB, "glWindowPos3dARB");
  status_ = status_ && LOAD_(glWindowPos3dvARB, "glWindowPos3dvARB");
  status_ = status_ && LOAD_(glWindowPos3fARB, "glWindowPos3fARB");
  status_ = status_ && LOAD_(glWindowPos3fvARB, "glWindowPos3fvARB");
  status_ = status_ && LOAD_(glWindowPos3iARB, "glWindowPos3iARB");
  status_ = status_ && LOAD_(glWindowPos3ivARB, "glWindowPos3ivARB");
  status_ = status_ && LOAD_(glWindowPos3sARB, "glWindowPos3sARB");
  status_ = status_ && LOAD_(glWindowPos3svARB, "glWindowPos3svARB");
  SAVE_EXTENSION_("GL_ARB_window_pos", status_);
}

if (HAS_EXTENSION_("GL_ATI_draw_buffers")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawBuffersATI, "glDrawBuffersATI");
  SAVE_EXTENSION_("GL_ATI_draw_buffers", status_);
}

if (HAS_EXTENSION_("GL_ATI_element_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glElementPointerATI, "glElementPointerATI");
  status_ = status_ && LOAD_(glDrawElementArrayATI, "glDrawElementArrayATI");
  status_ = status_ && LOAD_(glDrawRangeElementArrayATI, "glDrawRangeElementArrayATI");
  SAVE_EXTENSION_("GL_ATI_element_array", status_);
}

if (HAS_EXTENSION_("GL_ATI_envmap_bumpmap")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexBumpParameterivATI, "glTexBumpParameterivATI");
  status_ = status_ && LOAD_(glTexBumpParameterfvATI, "glTexBumpParameterfvATI");
  status_ = status_ && LOAD_(glGetTexBumpParameterivATI, "glGetTexBumpParameterivATI");
  status_ = status_ && LOAD_(glGetTexBumpParameterfvATI, "glGetTexBumpParameterfvATI");
  SAVE_EXTENSION_("GL_ATI_envmap_bumpmap", status_);
}

if (HAS_EXTENSION_("GL_ATI_fragment_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenFragmentShadersATI, "glGenFragmentShadersATI");
  status_ = status_ && LOAD_(glBindFragmentShaderATI, "glBindFragmentShaderATI");
  status_ = status_ && LOAD_(glDeleteFragmentShaderATI, "glDeleteFragmentShaderATI");
  status_ = status_ && LOAD_(glBeginFragmentShaderATI, "glBeginFragmentShaderATI");
  status_ = status_ && LOAD_(glEndFragmentShaderATI, "glEndFragmentShaderATI");
  status_ = status_ && LOAD_(glPassTexCoordATI, "glPassTexCoordATI");
  status_ = status_ && LOAD_(glSampleMapATI, "glSampleMapATI");
  status_ = status_ && LOAD_(glColorFragmentOp1ATI, "glColorFragmentOp1ATI");
  status_ = status_ && LOAD_(glColorFragmentOp2ATI, "glColorFragmentOp2ATI");
  status_ = status_ && LOAD_(glColorFragmentOp3ATI, "glColorFragmentOp3ATI");
  status_ = status_ && LOAD_(glAlphaFragmentOp1ATI, "glAlphaFragmentOp1ATI");
  status_ = status_ && LOAD_(glAlphaFragmentOp2ATI, "glAlphaFragmentOp2ATI");
  status_ = status_ && LOAD_(glAlphaFragmentOp3ATI, "glAlphaFragmentOp3ATI");
  status_ = status_ && LOAD_(glSetFragmentShaderConstantATI, "glSetFragmentShaderConstantATI");
  SAVE_EXTENSION_("GL_ATI_fragment_shader", status_);
}

if (HAS_EXTENSION_("GL_ATI_map_object_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMapObjectBufferATI, "glMapObjectBufferATI");
  status_ = status_ && LOAD_(glUnmapObjectBufferATI, "glUnmapObjectBufferATI");
  SAVE_EXTENSION_("GL_ATI_map_object_buffer", status_);
}

if (HAS_EXTENSION_("GL_ATI_pn_triangles")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPNTrianglesiATI, "glPNTrianglesiATI");
  status_ = status_ && LOAD_(glPNTrianglesfATI, "glPNTrianglesfATI");
  SAVE_EXTENSION_("GL_ATI_pn_triangles", status_);
}

if (HAS_EXTENSION_("GL_ATI_separate_stencil")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glStencilOpSeparateATI, "glStencilOpSeparateATI");
  status_ = status_ && LOAD_(glStencilFuncSeparateATI, "glStencilFuncSeparateATI");
  SAVE_EXTENSION_("GL_ATI_separate_stencil", status_);
}

if (HAS_EXTENSION_("GL_ATI_vertex_array_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glNewObjectBufferATI, "glNewObjectBufferATI");
  status_ = status_ && LOAD_(glIsObjectBufferATI, "glIsObjectBufferATI");
  status_ = status_ && LOAD_(glUpdateObjectBufferATI, "glUpdateObjectBufferATI");
  status_ = status_ && LOAD_(glGetObjectBufferfvATI, "glGetObjectBufferfvATI");
  status_ = status_ && LOAD_(glGetObjectBufferivATI, "glGetObjectBufferivATI");
  status_ = status_ && LOAD_(glFreeObjectBufferATI, "glFreeObjectBufferATI");
  status_ = status_ && LOAD_(glArrayObjectATI, "glArrayObjectATI");
  status_ = status_ && LOAD_(glGetArrayObjectfvATI, "glGetArrayObjectfvATI");
  status_ = status_ && LOAD_(glGetArrayObjectivATI, "glGetArrayObjectivATI");
  status_ = status_ && LOAD_(glVariantArrayObjectATI, "glVariantArrayObjectATI");
  status_ = status_ && LOAD_(glGetVariantArrayObjectfvATI, "glGetVariantArrayObjectfvATI");
  status_ = status_ && LOAD_(glGetVariantArrayObjectivATI, "glGetVariantArrayObjectivATI");
  SAVE_EXTENSION_("GL_ATI_vertex_array_object", status_);
}

if (HAS_EXTENSION_("GL_ATI_vertex_attrib_array_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribArrayObjectATI, "glVertexAttribArrayObjectATI");
  status_ = status_ && LOAD_(glGetVertexAttribArrayObjectfvATI, "glGetVertexAttribArrayObjectfvATI");
  status_ = status_ && LOAD_(glGetVertexAttribArrayObjectivATI, "glGetVertexAttribArrayObjectivATI");
  SAVE_EXTENSION_("GL_ATI_vertex_attrib_array_object", status_);
}

if (HAS_EXTENSION_("GL_ATI_vertex_streams")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexStream1sATI, "glVertexStream1sATI");
  status_ = status_ && LOAD_(glVertexStream1svATI, "glVertexStream1svATI");
  status_ = status_ && LOAD_(glVertexStream1iATI, "glVertexStream1iATI");
  status_ = status_ && LOAD_(glVertexStream1ivATI, "glVertexStream1ivATI");
  status_ = status_ && LOAD_(glVertexStream1fATI, "glVertexStream1fATI");
  status_ = status_ && LOAD_(glVertexStream1fvATI, "glVertexStream1fvATI");
  status_ = status_ && LOAD_(glVertexStream1dATI, "glVertexStream1dATI");
  status_ = status_ && LOAD_(glVertexStream1dvATI, "glVertexStream1dvATI");
  status_ = status_ && LOAD_(glVertexStream2sATI, "glVertexStream2sATI");
  status_ = status_ && LOAD_(glVertexStream2svATI, "glVertexStream2svATI");
  status_ = status_ && LOAD_(glVertexStream2iATI, "glVertexStream2iATI");
  status_ = status_ && LOAD_(glVertexStream2ivATI, "glVertexStream2ivATI");
  status_ = status_ && LOAD_(glVertexStream2fATI, "glVertexStream2fATI");
  status_ = status_ && LOAD_(glVertexStream2fvATI, "glVertexStream2fvATI");
  status_ = status_ && LOAD_(glVertexStream2dATI, "glVertexStream2dATI");
  status_ = status_ && LOAD_(glVertexStream2dvATI, "glVertexStream2dvATI");
  status_ = status_ && LOAD_(glVertexStream3sATI, "glVertexStream3sATI");
  status_ = status_ && LOAD_(glVertexStream3svATI, "glVertexStream3svATI");
  status_ = status_ && LOAD_(glVertexStream3iATI, "glVertexStream3iATI");
  status_ = status_ && LOAD_(glVertexStream3ivATI, "glVertexStream3ivATI");
  status_ = status_ && LOAD_(glVertexStream3fATI, "glVertexStream3fATI");
  status_ = status_ && LOAD_(glVertexStream3fvATI, "glVertexStream3fvATI");
  status_ = status_ && LOAD_(glVertexStream3dATI, "glVertexStream3dATI");
  status_ = status_ && LOAD_(glVertexStream3dvATI, "glVertexStream3dvATI");
  status_ = status_ && LOAD_(glVertexStream4sATI, "glVertexStream4sATI");
  status_ = status_ && LOAD_(glVertexStream4svATI, "glVertexStream4svATI");
  status_ = status_ && LOAD_(glVertexStream4iATI, "glVertexStream4iATI");
  status_ = status_ && LOAD_(glVertexStream4ivATI, "glVertexStream4ivATI");
  status_ = status_ && LOAD_(glVertexStream4fATI, "glVertexStream4fATI");
  status_ = status_ && LOAD_(glVertexStream4fvATI, "glVertexStream4fvATI");
  status_ = status_ && LOAD_(glVertexStream4dATI, "glVertexStream4dATI");
  status_ = status_ && LOAD_(glVertexStream4dvATI, "glVertexStream4dvATI");
  status_ = status_ && LOAD_(glNormalStream3bATI, "glNormalStream3bATI");
  status_ = status_ && LOAD_(glNormalStream3bvATI, "glNormalStream3bvATI");
  status_ = status_ && LOAD_(glNormalStream3sATI, "glNormalStream3sATI");
  status_ = status_ && LOAD_(glNormalStream3svATI, "glNormalStream3svATI");
  status_ = status_ && LOAD_(glNormalStream3iATI, "glNormalStream3iATI");
  status_ = status_ && LOAD_(glNormalStream3ivATI, "glNormalStream3ivATI");
  status_ = status_ && LOAD_(glNormalStream3fATI, "glNormalStream3fATI");
  status_ = status_ && LOAD_(glNormalStream3fvATI, "glNormalStream3fvATI");
  status_ = status_ && LOAD_(glNormalStream3dATI, "glNormalStream3dATI");
  status_ = status_ && LOAD_(glNormalStream3dvATI, "glNormalStream3dvATI");
  status_ = status_ && LOAD_(glClientActiveVertexStreamATI, "glClientActiveVertexStreamATI");
  status_ = status_ && LOAD_(glVertexBlendEnviATI, "glVertexBlendEnviATI");
  status_ = status_ && LOAD_(glVertexBlendEnvfATI, "glVertexBlendEnvfATI");
  SAVE_EXTENSION_("GL_ATI_vertex_streams", status_);
}

if (HAS_EXTENSION_("GL_EXT_EGL_image_storage")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glEGLImageTargetTexStorageEXT, "glEGLImageTargetTexStorageEXT");
  status_ = status_ && LOAD_(glEGLImageTargetTextureStorageEXT, "glEGLImageTargetTextureStorageEXT");
  SAVE_EXTENSION_("GL_EXT_EGL_image_storage", status_);
}

if (HAS_EXTENSION_("GL_EXT_base_instance")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawArraysInstancedBaseInstanceEXT, "glDrawArraysInstancedBaseInstanceEXT");
  status_ = status_ && LOAD_(glDrawElementsInstancedBaseInstanceEXT, "glDrawElementsInstancedBaseInstanceEXT");
  status_ = status_ && LOAD_(glDrawElementsInstancedBaseVertexBaseInstanceEXT, "glDrawElementsInstancedBaseVertexBaseInstanceEXT");
  SAVE_EXTENSION_("GL_EXT_base_instance", status_);
}

if (HAS_EXTENSION_("GL_EXT_bindable_uniform")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glUniformBufferEXT, "glUniformBufferEXT");
  status_ = status_ && LOAD_(glGetUniformBufferSizeEXT, "glGetUniformBufferSizeEXT");
  status_ = status_ && LOAD_(glGetUniformOffsetEXT, "glGetUniformOffsetEXT");
  SAVE_EXTENSION_("GL_EXT_bindable_uniform", status_);
}

if (HAS_EXTENSION_("GL_EXT_blend_color")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendColorEXT, "glBlendColorEXT");
  SAVE_EXTENSION_("GL_EXT_blend_color", status_);
}

if (HAS_EXTENSION_("GL_EXT_blend_equation_separate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendEquationSeparateEXT, "glBlendEquationSeparateEXT");
  SAVE_EXTENSION_("GL_EXT_blend_equation_separate", status_);
}

if (HAS_EXTENSION_("GL_EXT_blend_func_extended")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindFragDataLocationIndexedEXT, "glBindFragDataLocationIndexedEXT");
  status_ = status_ && LOAD_(glGetProgramResourceLocationIndexEXT, "glGetProgramResourceLocationIndexEXT");
  status_ = status_ && LOAD_(glGetFragDataIndexEXT, "glGetFragDataIndexEXT");
  SAVE_EXTENSION_("GL_EXT_blend_func_extended", status_);
}

if (HAS_EXTENSION_("GL_EXT_blend_func_separate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendFuncSeparateEXT, "glBlendFuncSeparateEXT");
  SAVE_EXTENSION_("GL_EXT_blend_func_separate", status_);
}

if (HAS_EXTENSION_("GL_EXT_blend_minmax")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendEquationEXT, "glBlendEquationEXT");
  SAVE_EXTENSION_("GL_EXT_blend_minmax", status_);
}

if (HAS_EXTENSION_("GL_EXT_buffer_storage")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBufferStorageEXT, "glBufferStorageEXT");
  SAVE_EXTENSION_("GL_EXT_buffer_storage", status_);
}

if (HAS_EXTENSION_("GL_EXT_clear_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClearTexImageEXT, "glClearTexImageEXT");
  status_ = status_ && LOAD_(glClearTexSubImageEXT, "glClearTexSubImageEXT");
  SAVE_EXTENSION_("GL_EXT_clear_texture", status_);
}

if (HAS_EXTENSION_("GL_EXT_clip_control")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClipControlEXT, "glClipControlEXT");
  SAVE_EXTENSION_("GL_EXT_clip_control", status_);
}

if (HAS_EXTENSION_("GL_EXT_color_subtable")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glColorSubTableEXT, "glColorSubTableEXT");
  status_ = status_ && LOAD_(glCopyColorSubTableEXT, "glCopyColorSubTableEXT");
  SAVE_EXTENSION_("GL_EXT_color_subtable", status_);
}

if (HAS_EXTENSION_("GL_EXT_compiled_vertex_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glLockArraysEXT, "glLockArraysEXT");
  status_ = status_ && LOAD_(glUnlockArraysEXT, "glUnlockArraysEXT");
  SAVE_EXTENSION_("GL_EXT_compiled_vertex_array", status_);
}

if (HAS_EXTENSION_("GL_EXT_convolution")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glConvolutionFilter1DEXT, "glConvolutionFilter1DEXT");
  status_ = status_ && LOAD_(glConvolutionFilter2DEXT, "glConvolutionFilter2DEXT");
  status_ = status_ && LOAD_(glConvolutionParameterfEXT, "glConvolutionParameterfEXT");
  status_ = status_ && LOAD_(glConvolutionParameterfvEXT, "glConvolutionParameterfvEXT");
  status_ = status_ && LOAD_(glConvolutionParameteriEXT, "glConvolutionParameteriEXT");
  status_ = status_ && LOAD_(glConvolutionParameterivEXT, "glConvolutionParameterivEXT");
  status_ = status_ && LOAD_(glCopyConvolutionFilter1DEXT, "glCopyConvolutionFilter1DEXT");
  status_ = status_ && LOAD_(glCopyConvolutionFilter2DEXT, "glCopyConvolutionFilter2DEXT");
  status_ = status_ && LOAD_(glGetConvolutionFilterEXT, "glGetConvolutionFilterEXT");
  status_ = status_ && LOAD_(glGetConvolutionParameterfvEXT, "glGetConvolutionParameterfvEXT");
  status_ = status_ && LOAD_(glGetConvolutionParameterivEXT, "glGetConvolutionParameterivEXT");
  status_ = status_ && LOAD_(glGetSeparableFilterEXT, "glGetSeparableFilterEXT");
  status_ = status_ && LOAD_(glSeparableFilter2DEXT, "glSeparableFilter2DEXT");
  SAVE_EXTENSION_("GL_EXT_convolution", status_);
}

if (HAS_EXTENSION_("GL_EXT_coordinate_frame")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTangent3bEXT, "glTangent3bEXT");
  status_ = status_ && LOAD_(glTangent3bvEXT, "glTangent3bvEXT");
  status_ = status_ && LOAD_(glTangent3dEXT, "glTangent3dEXT");
  status_ = status_ && LOAD_(glTangent3dvEXT, "glTangent3dvEXT");
  status_ = status_ && LOAD_(glTangent3fEXT, "glTangent3fEXT");
  status_ = status_ && LOAD_(glTangent3fvEXT, "glTangent3fvEXT");
  status_ = status_ && LOAD_(glTangent3iEXT, "glTangent3iEXT");
  status_ = status_ && LOAD_(glTangent3ivEXT, "glTangent3ivEXT");
  status_ = status_ && LOAD_(glTangent3sEXT, "glTangent3sEXT");
  status_ = status_ && LOAD_(glTangent3svEXT, "glTangent3svEXT");
  status_ = status_ && LOAD_(glBinormal3bEXT, "glBinormal3bEXT");
  status_ = status_ && LOAD_(glBinormal3bvEXT, "glBinormal3bvEXT");
  status_ = status_ && LOAD_(glBinormal3dEXT, "glBinormal3dEXT");
  status_ = status_ && LOAD_(glBinormal3dvEXT, "glBinormal3dvEXT");
  status_ = status_ && LOAD_(glBinormal3fEXT, "glBinormal3fEXT");
  status_ = status_ && LOAD_(glBinormal3fvEXT, "glBinormal3fvEXT");
  status_ = status_ && LOAD_(glBinormal3iEXT, "glBinormal3iEXT");
  status_ = status_ && LOAD_(glBinormal3ivEXT, "glBinormal3ivEXT");
  status_ = status_ && LOAD_(glBinormal3sEXT, "glBinormal3sEXT");
  status_ = status_ && LOAD_(glBinormal3svEXT, "glBinormal3svEXT");
  status_ = status_ && LOAD_(glTangentPointerEXT, "glTangentPointerEXT");
  status_ = status_ && LOAD_(glBinormalPointerEXT, "glBinormalPointerEXT");
  SAVE_EXTENSION_("GL_EXT_coordinate_frame", status_);
}

if (HAS_EXTENSION_("GL_EXT_copy_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyImageSubDataEXT, "glCopyImageSubDataEXT");
  SAVE_EXTENSION_("GL_EXT_copy_image", status_);
}

if (HAS_EXTENSION_("GL_EXT_copy_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyTexImage1DEXT, "glCopyTexImage1DEXT");
  status_ = status_ && LOAD_(glCopyTexImage2DEXT, "glCopyTexImage2DEXT");
  status_ = status_ && LOAD_(glCopyTexSubImage1DEXT, "glCopyTexSubImage1DEXT");
  status_ = status_ && LOAD_(glCopyTexSubImage2DEXT, "glCopyTexSubImage2DEXT");
  status_ = status_ && LOAD_(glCopyTexSubImage3DEXT, "glCopyTexSubImage3DEXT");
  SAVE_EXTENSION_("GL_EXT_copy_texture", status_);
}

if (HAS_EXTENSION_("GL_EXT_cull_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCullParameterdvEXT, "glCullParameterdvEXT");
  status_ = status_ && LOAD_(glCullParameterfvEXT, "glCullParameterfvEXT");
  SAVE_EXTENSION_("GL_EXT_cull_vertex", status_);
}

if (HAS_EXTENSION_("GL_EXT_debug_label")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glLabelObjectEXT, "glLabelObjectEXT");
  status_ = status_ && LOAD_(glGetObjectLabelEXT, "glGetObjectLabelEXT");
  SAVE_EXTENSION_("GL_EXT_debug_label", status_);
}

if (HAS_EXTENSION_("GL_EXT_debug_marker")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glInsertEventMarkerEXT, "glInsertEventMarkerEXT");
  status_ = status_ && LOAD_(glPushGroupMarkerEXT, "glPushGroupMarkerEXT");
  status_ = status_ && LOAD_(glPopGroupMarkerEXT, "glPopGroupMarkerEXT");
  SAVE_EXTENSION_("GL_EXT_debug_marker", status_);
}

if (HAS_EXTENSION_("GL_EXT_depth_bounds_test")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDepthBoundsEXT, "glDepthBoundsEXT");
  SAVE_EXTENSION_("GL_EXT_depth_bounds_test", status_);
}

if (HAS_EXTENSION_("GL_EXT_direct_state_access")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClientAttribDefaultEXT, "glClientAttribDefaultEXT");
  status_ = status_ && LOAD_(glPushClientAttribDefaultEXT, "glPushClientAttribDefaultEXT");
  status_ = status_ && LOAD_(glTextureParameterfEXT, "glTextureParameterfEXT");
  status_ = status_ && LOAD_(glTextureParameterfvEXT, "glTextureParameterfvEXT");
  status_ = status_ && LOAD_(glTextureParameteriEXT, "glTextureParameteriEXT");
  status_ = status_ && LOAD_(glTextureParameterivEXT, "glTextureParameterivEXT");
  status_ = status_ && LOAD_(glTextureImage1DEXT, "glTextureImage1DEXT");
  status_ = status_ && LOAD_(glTextureImage2DEXT, "glTextureImage2DEXT");
  status_ = status_ && LOAD_(glTextureSubImage1DEXT, "glTextureSubImage1DEXT");
  status_ = status_ && LOAD_(glTextureSubImage2DEXT, "glTextureSubImage2DEXT");
  status_ = status_ && LOAD_(glCopyTextureImage1DEXT, "glCopyTextureImage1DEXT");
  status_ = status_ && LOAD_(glCopyTextureImage2DEXT, "glCopyTextureImage2DEXT");
  status_ = status_ && LOAD_(glCopyTextureSubImage1DEXT, "glCopyTextureSubImage1DEXT");
  status_ = status_ && LOAD_(glCopyTextureSubImage2DEXT, "glCopyTextureSubImage2DEXT");
  status_ = status_ && LOAD_(glGetTextureImageEXT, "glGetTextureImageEXT");
  status_ = status_ && LOAD_(glGetTextureParameterfvEXT, "glGetTextureParameterfvEXT");
  status_ = status_ && LOAD_(glGetTextureParameterivEXT, "glGetTextureParameterivEXT");
  status_ = status_ && LOAD_(glGetTextureLevelParameterfvEXT, "glGetTextureLevelParameterfvEXT");
  status_ = status_ && LOAD_(glGetTextureLevelParameterivEXT, "glGetTextureLevelParameterivEXT");
  status_ = status_ && LOAD_(glTextureImage3DEXT, "glTextureImage3DEXT");
  status_ = status_ && LOAD_(glTextureSubImage3DEXT, "glTextureSubImage3DEXT");
  status_ = status_ && LOAD_(glCopyTextureSubImage3DEXT, "glCopyTextureSubImage3DEXT");
  status_ = status_ && LOAD_(glBindMultiTextureEXT, "glBindMultiTextureEXT");
  status_ = status_ && LOAD_(glMultiTexCoordPointerEXT, "glMultiTexCoordPointerEXT");
  status_ = status_ && LOAD_(glMultiTexEnvfEXT, "glMultiTexEnvfEXT");
  status_ = status_ && LOAD_(glMultiTexEnvfvEXT, "glMultiTexEnvfvEXT");
  status_ = status_ && LOAD_(glMultiTexEnviEXT, "glMultiTexEnviEXT");
  status_ = status_ && LOAD_(glMultiTexEnvivEXT, "glMultiTexEnvivEXT");
  status_ = status_ && LOAD_(glMultiTexGendEXT, "glMultiTexGendEXT");
  status_ = status_ && LOAD_(glMultiTexGendvEXT, "glMultiTexGendvEXT");
  status_ = status_ && LOAD_(glMultiTexGenfEXT, "glMultiTexGenfEXT");
  status_ = status_ && LOAD_(glMultiTexGenfvEXT, "glMultiTexGenfvEXT");
  status_ = status_ && LOAD_(glMultiTexGeniEXT, "glMultiTexGeniEXT");
  status_ = status_ && LOAD_(glMultiTexGenivEXT, "glMultiTexGenivEXT");
  status_ = status_ && LOAD_(glGetMultiTexEnvfvEXT, "glGetMultiTexEnvfvEXT");
  status_ = status_ && LOAD_(glGetMultiTexEnvivEXT, "glGetMultiTexEnvivEXT");
  status_ = status_ && LOAD_(glGetMultiTexGendvEXT, "glGetMultiTexGendvEXT");
  status_ = status_ && LOAD_(glGetMultiTexGenfvEXT, "glGetMultiTexGenfvEXT");
  status_ = status_ && LOAD_(glGetMultiTexGenivEXT, "glGetMultiTexGenivEXT");
  status_ = status_ && LOAD_(glMultiTexParameteriEXT, "glMultiTexParameteriEXT");
  status_ = status_ && LOAD_(glMultiTexParameterivEXT, "glMultiTexParameterivEXT");
  status_ = status_ && LOAD_(glMultiTexParameterfEXT, "glMultiTexParameterfEXT");
  status_ = status_ && LOAD_(glMultiTexParameterfvEXT, "glMultiTexParameterfvEXT");
  status_ = status_ && LOAD_(glMultiTexImage1DEXT, "glMultiTexImage1DEXT");
  status_ = status_ && LOAD_(glMultiTexImage2DEXT, "glMultiTexImage2DEXT");
  status_ = status_ && LOAD_(glMultiTexSubImage1DEXT, "glMultiTexSubImage1DEXT");
  status_ = status_ && LOAD_(glMultiTexSubImage2DEXT, "glMultiTexSubImage2DEXT");
  status_ = status_ && LOAD_(glCopyMultiTexImage1DEXT, "glCopyMultiTexImage1DEXT");
  status_ = status_ && LOAD_(glCopyMultiTexImage2DEXT, "glCopyMultiTexImage2DEXT");
  status_ = status_ && LOAD_(glCopyMultiTexSubImage1DEXT, "glCopyMultiTexSubImage1DEXT");
  status_ = status_ && LOAD_(glCopyMultiTexSubImage2DEXT, "glCopyMultiTexSubImage2DEXT");
  status_ = status_ && LOAD_(glGetMultiTexImageEXT, "glGetMultiTexImageEXT");
  status_ = status_ && LOAD_(glGetMultiTexParameterfvEXT, "glGetMultiTexParameterfvEXT");
  status_ = status_ && LOAD_(glGetMultiTexParameterivEXT, "glGetMultiTexParameterivEXT");
  status_ = status_ && LOAD_(glGetMultiTexLevelParameterfvEXT, "glGetMultiTexLevelParameterfvEXT");
  status_ = status_ && LOAD_(glGetMultiTexLevelParameterivEXT, "glGetMultiTexLevelParameterivEXT");
  status_ = status_ && LOAD_(glMultiTexImage3DEXT, "glMultiTexImage3DEXT");
  status_ = status_ && LOAD_(glMultiTexSubImage3DEXT, "glMultiTexSubImage3DEXT");
  status_ = status_ && LOAD_(glCopyMultiTexSubImage3DEXT, "glCopyMultiTexSubImage3DEXT");
  status_ = status_ && LOAD_(glEnableClientStateIndexedEXT, "glEnableClientStateIndexedEXT");
  status_ = status_ && LOAD_(glDisableClientStateIndexedEXT, "glDisableClientStateIndexedEXT");
  status_ = status_ && LOAD_(glGetFloatIndexedvEXT, "glGetFloatIndexedvEXT");
  status_ = status_ && LOAD_(glGetDoubleIndexedvEXT, "glGetDoubleIndexedvEXT");
  status_ = status_ && LOAD_(glGetPointerIndexedvEXT, "glGetPointerIndexedvEXT");
  status_ = status_ && LOAD_(glCompressedTextureImage3DEXT, "glCompressedTextureImage3DEXT");
  status_ = status_ && LOAD_(glCompressedTextureImage2DEXT, "glCompressedTextureImage2DEXT");
  status_ = status_ && LOAD_(glCompressedTextureImage1DEXT, "glCompressedTextureImage1DEXT");
  status_ = status_ && LOAD_(glCompressedTextureSubImage3DEXT, "glCompressedTextureSubImage3DEXT");
  status_ = status_ && LOAD_(glCompressedTextureSubImage2DEXT, "glCompressedTextureSubImage2DEXT");
  status_ = status_ && LOAD_(glCompressedTextureSubImage1DEXT, "glCompressedTextureSubImage1DEXT");
  status_ = status_ && LOAD_(glGetCompressedTextureImageEXT, "glGetCompressedTextureImageEXT");
  status_ = status_ && LOAD_(glCompressedMultiTexImage3DEXT, "glCompressedMultiTexImage3DEXT");
  status_ = status_ && LOAD_(glCompressedMultiTexImage2DEXT, "glCompressedMultiTexImage2DEXT");
  status_ = status_ && LOAD_(glCompressedMultiTexImage1DEXT, "glCompressedMultiTexImage1DEXT");
  status_ = status_ && LOAD_(glCompressedMultiTexSubImage3DEXT, "glCompressedMultiTexSubImage3DEXT");
  status_ = status_ && LOAD_(glCompressedMultiTexSubImage2DEXT, "glCompressedMultiTexSubImage2DEXT");
  status_ = status_ && LOAD_(glCompressedMultiTexSubImage1DEXT, "glCompressedMultiTexSubImage1DEXT");
  status_ = status_ && LOAD_(glGetCompressedMultiTexImageEXT, "glGetCompressedMultiTexImageEXT");
  status_ = status_ && LOAD_(glNamedBufferDataEXT, "glNamedBufferDataEXT");
  status_ = status_ && LOAD_(glNamedBufferSubDataEXT, "glNamedBufferSubDataEXT");
  status_ = status_ && LOAD_(glMapNamedBufferEXT, "glMapNamedBufferEXT");
  status_ = status_ && LOAD_(glUnmapNamedBufferEXT, "glUnmapNamedBufferEXT");
  status_ = status_ && LOAD_(glGetNamedBufferParameterivEXT, "glGetNamedBufferParameterivEXT");
  status_ = status_ && LOAD_(glGetNamedBufferPointervEXT, "glGetNamedBufferPointervEXT");
  status_ = status_ && LOAD_(glGetNamedBufferSubDataEXT, "glGetNamedBufferSubDataEXT");
  status_ = status_ && LOAD_(glTextureBufferEXT, "glTextureBufferEXT");
  status_ = status_ && LOAD_(glMultiTexBufferEXT, "glMultiTexBufferEXT");
  status_ = status_ && LOAD_(glTextureParameterIivEXT, "glTextureParameterIivEXT");
  status_ = status_ && LOAD_(glTextureParameterIuivEXT, "glTextureParameterIuivEXT");
  status_ = status_ && LOAD_(glGetTextureParameterIivEXT, "glGetTextureParameterIivEXT");
  status_ = status_ && LOAD_(glGetTextureParameterIuivEXT, "glGetTextureParameterIuivEXT");
  status_ = status_ && LOAD_(glMultiTexParameterIivEXT, "glMultiTexParameterIivEXT");
  status_ = status_ && LOAD_(glMultiTexParameterIuivEXT, "glMultiTexParameterIuivEXT");
  status_ = status_ && LOAD_(glGetMultiTexParameterIivEXT, "glGetMultiTexParameterIivEXT");
  status_ = status_ && LOAD_(glGetMultiTexParameterIuivEXT, "glGetMultiTexParameterIuivEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameters4fvEXT, "glNamedProgramLocalParameters4fvEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameterI4iEXT, "glNamedProgramLocalParameterI4iEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameterI4ivEXT, "glNamedProgramLocalParameterI4ivEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParametersI4ivEXT, "glNamedProgramLocalParametersI4ivEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameterI4uiEXT, "glNamedProgramLocalParameterI4uiEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameterI4uivEXT, "glNamedProgramLocalParameterI4uivEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParametersI4uivEXT, "glNamedProgramLocalParametersI4uivEXT");
  status_ = status_ && LOAD_(glGetNamedProgramLocalParameterIivEXT, "glGetNamedProgramLocalParameterIivEXT");
  status_ = status_ && LOAD_(glGetNamedProgramLocalParameterIuivEXT, "glGetNamedProgramLocalParameterIuivEXT");
  status_ = status_ && LOAD_(glEnableClientStateiEXT, "glEnableClientStateiEXT");
  status_ = status_ && LOAD_(glDisableClientStateiEXT, "glDisableClientStateiEXT");
  status_ = status_ && LOAD_(glGetFloati_vEXT, "glGetFloati_vEXT");
  status_ = status_ && LOAD_(glGetDoublei_vEXT, "glGetDoublei_vEXT");
  status_ = status_ && LOAD_(glGetPointeri_vEXT, "glGetPointeri_vEXT");
  status_ = status_ && LOAD_(glNamedProgramStringEXT, "glNamedProgramStringEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameter4dEXT, "glNamedProgramLocalParameter4dEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameter4dvEXT, "glNamedProgramLocalParameter4dvEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameter4fEXT, "glNamedProgramLocalParameter4fEXT");
  status_ = status_ && LOAD_(glNamedProgramLocalParameter4fvEXT, "glNamedProgramLocalParameter4fvEXT");
  status_ = status_ && LOAD_(glGetNamedProgramLocalParameterdvEXT, "glGetNamedProgramLocalParameterdvEXT");
  status_ = status_ && LOAD_(glGetNamedProgramLocalParameterfvEXT, "glGetNamedProgramLocalParameterfvEXT");
  status_ = status_ && LOAD_(glGetNamedProgramivEXT, "glGetNamedProgramivEXT");
  status_ = status_ && LOAD_(glGetNamedProgramStringEXT, "glGetNamedProgramStringEXT");
  status_ = status_ && LOAD_(glNamedRenderbufferStorageEXT, "glNamedRenderbufferStorageEXT");
  status_ = status_ && LOAD_(glGetNamedRenderbufferParameterivEXT, "glGetNamedRenderbufferParameterivEXT");
  status_ = status_ && LOAD_(glNamedRenderbufferStorageMultisampleEXT, "glNamedRenderbufferStorageMultisampleEXT");
  status_ = status_ && LOAD_(glNamedRenderbufferStorageMultisampleCoverageEXT, "glNamedRenderbufferStorageMultisampleCoverageEXT");
  status_ = status_ && LOAD_(glCheckNamedFramebufferStatusEXT, "glCheckNamedFramebufferStatusEXT");
  status_ = status_ && LOAD_(glNamedFramebufferTexture1DEXT, "glNamedFramebufferTexture1DEXT");
  status_ = status_ && LOAD_(glNamedFramebufferTexture2DEXT, "glNamedFramebufferTexture2DEXT");
  status_ = status_ && LOAD_(glNamedFramebufferTexture3DEXT, "glNamedFramebufferTexture3DEXT");
  status_ = status_ && LOAD_(glNamedFramebufferRenderbufferEXT, "glNamedFramebufferRenderbufferEXT");
  status_ = status_ && LOAD_(glGetNamedFramebufferAttachmentParameterivEXT, "glGetNamedFramebufferAttachmentParameterivEXT");
  status_ = status_ && LOAD_(glGenerateTextureMipmapEXT, "glGenerateTextureMipmapEXT");
  status_ = status_ && LOAD_(glGenerateMultiTexMipmapEXT, "glGenerateMultiTexMipmapEXT");
  status_ = status_ && LOAD_(glFramebufferDrawBufferEXT, "glFramebufferDrawBufferEXT");
  status_ = status_ && LOAD_(glFramebufferDrawBuffersEXT, "glFramebufferDrawBuffersEXT");
  status_ = status_ && LOAD_(glFramebufferReadBufferEXT, "glFramebufferReadBufferEXT");
  status_ = status_ && LOAD_(glGetFramebufferParameterivEXT, "glGetFramebufferParameterivEXT");
  status_ = status_ && LOAD_(glNamedCopyBufferSubDataEXT, "glNamedCopyBufferSubDataEXT");
  status_ = status_ && LOAD_(glNamedFramebufferTextureEXT, "glNamedFramebufferTextureEXT");
  status_ = status_ && LOAD_(glNamedFramebufferTextureLayerEXT, "glNamedFramebufferTextureLayerEXT");
  status_ = status_ && LOAD_(glNamedFramebufferTextureFaceEXT, "glNamedFramebufferTextureFaceEXT");
  status_ = status_ && LOAD_(glTextureRenderbufferEXT, "glTextureRenderbufferEXT");
  status_ = status_ && LOAD_(glMultiTexRenderbufferEXT, "glMultiTexRenderbufferEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexOffsetEXT, "glVertexArrayVertexOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayColorOffsetEXT, "glVertexArrayColorOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayEdgeFlagOffsetEXT, "glVertexArrayEdgeFlagOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayIndexOffsetEXT, "glVertexArrayIndexOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayNormalOffsetEXT, "glVertexArrayNormalOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayTexCoordOffsetEXT, "glVertexArrayTexCoordOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayMultiTexCoordOffsetEXT, "glVertexArrayMultiTexCoordOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayFogCoordOffsetEXT, "glVertexArrayFogCoordOffsetEXT");
  status_ = status_ && LOAD_(glVertexArraySecondaryColorOffsetEXT, "glVertexArraySecondaryColorOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribOffsetEXT, "glVertexArrayVertexAttribOffsetEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribIOffsetEXT, "glVertexArrayVertexAttribIOffsetEXT");
  status_ = status_ && LOAD_(glEnableVertexArrayEXT, "glEnableVertexArrayEXT");
  status_ = status_ && LOAD_(glDisableVertexArrayEXT, "glDisableVertexArrayEXT");
  status_ = status_ && LOAD_(glEnableVertexArrayAttribEXT, "glEnableVertexArrayAttribEXT");
  status_ = status_ && LOAD_(glDisableVertexArrayAttribEXT, "glDisableVertexArrayAttribEXT");
  status_ = status_ && LOAD_(glGetVertexArrayIntegervEXT, "glGetVertexArrayIntegervEXT");
  status_ = status_ && LOAD_(glGetVertexArrayPointervEXT, "glGetVertexArrayPointervEXT");
  status_ = status_ && LOAD_(glGetVertexArrayIntegeri_vEXT, "glGetVertexArrayIntegeri_vEXT");
  status_ = status_ && LOAD_(glGetVertexArrayPointeri_vEXT, "glGetVertexArrayPointeri_vEXT");
  status_ = status_ && LOAD_(glMapNamedBufferRangeEXT, "glMapNamedBufferRangeEXT");
  status_ = status_ && LOAD_(glFlushMappedNamedBufferRangeEXT, "glFlushMappedNamedBufferRangeEXT");
  status_ = status_ && LOAD_(glNamedBufferStorageEXT, "glNamedBufferStorageEXT");
  status_ = status_ && LOAD_(glClearNamedBufferDataEXT, "glClearNamedBufferDataEXT");
  status_ = status_ && LOAD_(glClearNamedBufferSubDataEXT, "glClearNamedBufferSubDataEXT");
  status_ = status_ && LOAD_(glNamedFramebufferParameteriEXT, "glNamedFramebufferParameteriEXT");
  status_ = status_ && LOAD_(glGetNamedFramebufferParameterivEXT, "glGetNamedFramebufferParameterivEXT");
  status_ = status_ && LOAD_(glProgramUniform1dEXT, "glProgramUniform1dEXT");
  status_ = status_ && LOAD_(glProgramUniform2dEXT, "glProgramUniform2dEXT");
  status_ = status_ && LOAD_(glProgramUniform3dEXT, "glProgramUniform3dEXT");
  status_ = status_ && LOAD_(glProgramUniform4dEXT, "glProgramUniform4dEXT");
  status_ = status_ && LOAD_(glProgramUniform1dvEXT, "glProgramUniform1dvEXT");
  status_ = status_ && LOAD_(glProgramUniform2dvEXT, "glProgramUniform2dvEXT");
  status_ = status_ && LOAD_(glProgramUniform3dvEXT, "glProgramUniform3dvEXT");
  status_ = status_ && LOAD_(glProgramUniform4dvEXT, "glProgramUniform4dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix2dvEXT, "glProgramUniformMatrix2dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix3dvEXT, "glProgramUniformMatrix3dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix4dvEXT, "glProgramUniformMatrix4dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x3dvEXT, "glProgramUniformMatrix2x3dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x4dvEXT, "glProgramUniformMatrix2x4dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x2dvEXT, "glProgramUniformMatrix3x2dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x4dvEXT, "glProgramUniformMatrix3x4dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x2dvEXT, "glProgramUniformMatrix4x2dvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x3dvEXT, "glProgramUniformMatrix4x3dvEXT");
  status_ = status_ && LOAD_(glTextureBufferRangeEXT, "glTextureBufferRangeEXT");
  status_ = status_ && LOAD_(glTextureStorage2DMultisampleEXT, "glTextureStorage2DMultisampleEXT");
  status_ = status_ && LOAD_(glTextureStorage3DMultisampleEXT, "glTextureStorage3DMultisampleEXT");
  status_ = status_ && LOAD_(glVertexArrayBindVertexBufferEXT, "glVertexArrayBindVertexBufferEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribFormatEXT, "glVertexArrayVertexAttribFormatEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribIFormatEXT, "glVertexArrayVertexAttribIFormatEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribLFormatEXT, "glVertexArrayVertexAttribLFormatEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribBindingEXT, "glVertexArrayVertexAttribBindingEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexBindingDivisorEXT, "glVertexArrayVertexBindingDivisorEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribLOffsetEXT, "glVertexArrayVertexAttribLOffsetEXT");
  status_ = status_ && LOAD_(glTexturePageCommitmentEXT, "glTexturePageCommitmentEXT");
  status_ = status_ && LOAD_(glVertexArrayVertexAttribDivisorEXT, "glVertexArrayVertexAttribDivisorEXT");
  SAVE_EXTENSION_("GL_EXT_direct_state_access", status_);
}

if (HAS_EXTENSION_("GL_EXT_discard_framebuffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDiscardFramebufferEXT, "glDiscardFramebufferEXT");
  SAVE_EXTENSION_("GL_EXT_discard_framebuffer", status_);
}

if (HAS_EXTENSION_("GL_EXT_disjoint_timer_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glQueryCounterEXT, "glQueryCounterEXT");
  status_ = status_ && LOAD_(glGetQueryObjectivEXT, "glGetQueryObjectivEXT");
  status_ = status_ && LOAD_(glGetInteger64vEXT, "glGetInteger64vEXT");
  SAVE_EXTENSION_("GL_EXT_disjoint_timer_query", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_buffers")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawBuffersEXT, "glDrawBuffersEXT");
  SAVE_EXTENSION_("GL_EXT_draw_buffers", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_buffers2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glColorMaskIndexedEXT, "glColorMaskIndexedEXT");
  SAVE_EXTENSION_("GL_EXT_draw_buffers2", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_buffers_indexed")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glEnableiEXT, "glEnableiEXT");
  status_ = status_ && LOAD_(glDisableiEXT, "glDisableiEXT");
  status_ = status_ && LOAD_(glBlendEquationiEXT, "glBlendEquationiEXT");
  status_ = status_ && LOAD_(glBlendEquationSeparateiEXT, "glBlendEquationSeparateiEXT");
  status_ = status_ && LOAD_(glBlendFunciEXT, "glBlendFunciEXT");
  status_ = status_ && LOAD_(glBlendFuncSeparateiEXT, "glBlendFuncSeparateiEXT");
  status_ = status_ && LOAD_(glColorMaskiEXT, "glColorMaskiEXT");
  status_ = status_ && LOAD_(glIsEnablediEXT, "glIsEnablediEXT");
  SAVE_EXTENSION_("GL_EXT_draw_buffers_indexed", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_elements_base_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawElementsBaseVertexEXT, "glDrawElementsBaseVertexEXT");
  status_ = status_ && LOAD_(glDrawRangeElementsBaseVertexEXT, "glDrawRangeElementsBaseVertexEXT");
  status_ = status_ && LOAD_(glDrawElementsInstancedBaseVertexEXT, "glDrawElementsInstancedBaseVertexEXT");
  SAVE_EXTENSION_("GL_EXT_draw_elements_base_vertex", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_range_elements")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawRangeElementsEXT, "glDrawRangeElementsEXT");
  SAVE_EXTENSION_("GL_EXT_draw_range_elements", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_transform_feedback")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawTransformFeedbackEXT, "glDrawTransformFeedbackEXT");
  status_ = status_ && LOAD_(glDrawTransformFeedbackInstancedEXT, "glDrawTransformFeedbackInstancedEXT");
  SAVE_EXTENSION_("GL_EXT_draw_transform_feedback", status_);
}

if (HAS_EXTENSION_("GL_EXT_external_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBufferStorageExternalEXT, "glBufferStorageExternalEXT");
  status_ = status_ && LOAD_(glNamedBufferStorageExternalEXT, "glNamedBufferStorageExternalEXT");
  SAVE_EXTENSION_("GL_EXT_external_buffer", status_);
}

if (HAS_EXTENSION_("GL_EXT_fog_coord")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFogCoordfEXT, "glFogCoordfEXT");
  status_ = status_ && LOAD_(glFogCoordfvEXT, "glFogCoordfvEXT");
  status_ = status_ && LOAD_(glFogCoorddEXT, "glFogCoorddEXT");
  status_ = status_ && LOAD_(glFogCoorddvEXT, "glFogCoorddvEXT");
  status_ = status_ && LOAD_(glFogCoordPointerEXT, "glFogCoordPointerEXT");
  SAVE_EXTENSION_("GL_EXT_fog_coord", status_);
}

if (HAS_EXTENSION_("GL_EXT_fragment_shading_rate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetFragmentShadingRatesEXT, "glGetFragmentShadingRatesEXT");
  status_ = status_ && LOAD_(glShadingRateEXT, "glShadingRateEXT");
  status_ = status_ && LOAD_(glShadingRateCombinerOpsEXT, "glShadingRateCombinerOpsEXT");
  status_ = status_ && LOAD_(glFramebufferShadingRateEXT, "glFramebufferShadingRateEXT");
  SAVE_EXTENSION_("GL_EXT_fragment_shading_rate", status_);
}

if (HAS_EXTENSION_("GL_EXT_framebuffer_blit")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlitFramebufferEXT, "glBlitFramebufferEXT");
  SAVE_EXTENSION_("GL_EXT_framebuffer_blit", status_);
}

if (HAS_EXTENSION_("GL_EXT_framebuffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glIsRenderbufferEXT, "glIsRenderbufferEXT");
  status_ = status_ && LOAD_(glBindRenderbufferEXT, "glBindRenderbufferEXT");
  status_ = status_ && LOAD_(glDeleteRenderbuffersEXT, "glDeleteRenderbuffersEXT");
  status_ = status_ && LOAD_(glGenRenderbuffersEXT, "glGenRenderbuffersEXT");
  status_ = status_ && LOAD_(glRenderbufferStorageEXT, "glRenderbufferStorageEXT");
  status_ = status_ && LOAD_(glGetRenderbufferParameterivEXT, "glGetRenderbufferParameterivEXT");
  status_ = status_ && LOAD_(glIsFramebufferEXT, "glIsFramebufferEXT");
  status_ = status_ && LOAD_(glBindFramebufferEXT, "glBindFramebufferEXT");
  status_ = status_ && LOAD_(glDeleteFramebuffersEXT, "glDeleteFramebuffersEXT");
  status_ = status_ && LOAD_(glGenFramebuffersEXT, "glGenFramebuffersEXT");
  status_ = status_ && LOAD_(glCheckFramebufferStatusEXT, "glCheckFramebufferStatusEXT");
  status_ = status_ && LOAD_(glFramebufferTexture1DEXT, "glFramebufferTexture1DEXT");
  status_ = status_ && LOAD_(glFramebufferTexture2DEXT, "glFramebufferTexture2DEXT");
  status_ = status_ && LOAD_(glFramebufferTexture3DEXT, "glFramebufferTexture3DEXT");
  status_ = status_ && LOAD_(glFramebufferRenderbufferEXT, "glFramebufferRenderbufferEXT");
  status_ = status_ && LOAD_(glGetFramebufferAttachmentParameterivEXT, "glGetFramebufferAttachmentParameterivEXT");
  status_ = status_ && LOAD_(glGenerateMipmapEXT, "glGenerateMipmapEXT");
  SAVE_EXTENSION_("GL_EXT_framebuffer_object", status_);
}

if (HAS_EXTENSION_("GL_EXT_gpu_program_parameters")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramEnvParameters4fvEXT, "glProgramEnvParameters4fvEXT");
  status_ = status_ && LOAD_(glProgramLocalParameters4fvEXT, "glProgramLocalParameters4fvEXT");
  SAVE_EXTENSION_("GL_EXT_gpu_program_parameters", status_);
}

if (HAS_EXTENSION_("GL_EXT_gpu_shader4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetUniformuivEXT, "glGetUniformuivEXT");
  status_ = status_ && LOAD_(glGetFragDataLocationEXT, "glGetFragDataLocationEXT");
  status_ = status_ && LOAD_(glUniform1uiEXT, "glUniform1uiEXT");
  status_ = status_ && LOAD_(glUniform2uiEXT, "glUniform2uiEXT");
  status_ = status_ && LOAD_(glUniform3uiEXT, "glUniform3uiEXT");
  status_ = status_ && LOAD_(glUniform4uiEXT, "glUniform4uiEXT");
  status_ = status_ && LOAD_(glUniform1uivEXT, "glUniform1uivEXT");
  status_ = status_ && LOAD_(glUniform2uivEXT, "glUniform2uivEXT");
  status_ = status_ && LOAD_(glUniform3uivEXT, "glUniform3uivEXT");
  status_ = status_ && LOAD_(glUniform4uivEXT, "glUniform4uivEXT");
  SAVE_EXTENSION_("GL_EXT_gpu_shader4", status_);
}

if (HAS_EXTENSION_("GL_EXT_histogram")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetHistogramEXT, "glGetHistogramEXT");
  status_ = status_ && LOAD_(glGetHistogramParameterfvEXT, "glGetHistogramParameterfvEXT");
  status_ = status_ && LOAD_(glGetHistogramParameterivEXT, "glGetHistogramParameterivEXT");
  status_ = status_ && LOAD_(glGetMinmaxEXT, "glGetMinmaxEXT");
  status_ = status_ && LOAD_(glGetMinmaxParameterfvEXT, "glGetMinmaxParameterfvEXT");
  status_ = status_ && LOAD_(glGetMinmaxParameterivEXT, "glGetMinmaxParameterivEXT");
  status_ = status_ && LOAD_(glHistogramEXT, "glHistogramEXT");
  status_ = status_ && LOAD_(glMinmaxEXT, "glMinmaxEXT");
  status_ = status_ && LOAD_(glResetHistogramEXT, "glResetHistogramEXT");
  status_ = status_ && LOAD_(glResetMinmaxEXT, "glResetMinmaxEXT");
  SAVE_EXTENSION_("GL_EXT_histogram", status_);
}

if (HAS_EXTENSION_("GL_EXT_index_func")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glIndexFuncEXT, "glIndexFuncEXT");
  SAVE_EXTENSION_("GL_EXT_index_func", status_);
}

if (HAS_EXTENSION_("GL_EXT_index_material")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glIndexMaterialEXT, "glIndexMaterialEXT");
  SAVE_EXTENSION_("GL_EXT_index_material", status_);
}

if (HAS_EXTENSION_("GL_EXT_instanced_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribDivisorEXT, "glVertexAttribDivisorEXT");
  SAVE_EXTENSION_("GL_EXT_instanced_arrays", status_);
}

if (HAS_EXTENSION_("GL_EXT_light_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glApplyTextureEXT, "glApplyTextureEXT");
  status_ = status_ && LOAD_(glTextureLightEXT, "glTextureLightEXT");
  status_ = status_ && LOAD_(glTextureMaterialEXT, "glTextureMaterialEXT");
  SAVE_EXTENSION_("GL_EXT_light_texture", status_);
}

if (HAS_EXTENSION_("GL_EXT_map_buffer_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMapBufferRangeEXT, "glMapBufferRangeEXT");
  status_ = status_ && LOAD_(glFlushMappedBufferRangeEXT, "glFlushMappedBufferRangeEXT");
  SAVE_EXTENSION_("GL_EXT_map_buffer_range", status_);
}

if (HAS_EXTENSION_("GL_EXT_memory_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDeleteMemoryObjectsEXT, "glDeleteMemoryObjectsEXT");
  status_ = status_ && LOAD_(glIsMemoryObjectEXT, "glIsMemoryObjectEXT");
  status_ = status_ && LOAD_(glCreateMemoryObjectsEXT, "glCreateMemoryObjectsEXT");
  status_ = status_ && LOAD_(glMemoryObjectParameterivEXT, "glMemoryObjectParameterivEXT");
  status_ = status_ && LOAD_(glGetMemoryObjectParameterivEXT, "glGetMemoryObjectParameterivEXT");
  status_ = status_ && LOAD_(glTexStorageMem2DEXT, "glTexStorageMem2DEXT");
  status_ = status_ && LOAD_(glTexStorageMem2DMultisampleEXT, "glTexStorageMem2DMultisampleEXT");
  status_ = status_ && LOAD_(glTexStorageMem3DEXT, "glTexStorageMem3DEXT");
  status_ = status_ && LOAD_(glTexStorageMem3DMultisampleEXT, "glTexStorageMem3DMultisampleEXT");
  status_ = status_ && LOAD_(glBufferStorageMemEXT, "glBufferStorageMemEXT");
  status_ = status_ && LOAD_(glTextureStorageMem2DEXT, "glTextureStorageMem2DEXT");
  status_ = status_ && LOAD_(glTextureStorageMem2DMultisampleEXT, "glTextureStorageMem2DMultisampleEXT");
  status_ = status_ && LOAD_(glTextureStorageMem3DEXT, "glTextureStorageMem3DEXT");
  status_ = status_ && LOAD_(glTextureStorageMem3DMultisampleEXT, "glTextureStorageMem3DMultisampleEXT");
  status_ = status_ && LOAD_(glNamedBufferStorageMemEXT, "glNamedBufferStorageMemEXT");
  status_ = status_ && LOAD_(glTexStorageMem1DEXT, "glTexStorageMem1DEXT");
  status_ = status_ && LOAD_(glTextureStorageMem1DEXT, "glTextureStorageMem1DEXT");
  SAVE_EXTENSION_("GL_EXT_memory_object", status_);
}

if (HAS_EXTENSION_("GL_EXT_memory_object_fd")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glImportMemoryFdEXT, "glImportMemoryFdEXT");
  SAVE_EXTENSION_("GL_EXT_memory_object_fd", status_);
}

if (HAS_EXTENSION_("GL_EXT_memory_object_win32")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glImportMemoryWin32HandleEXT, "glImportMemoryWin32HandleEXT");
  status_ = status_ && LOAD_(glImportMemoryWin32NameEXT, "glImportMemoryWin32NameEXT");
  SAVE_EXTENSION_("GL_EXT_memory_object_win32", status_);
}

if (HAS_EXTENSION_("GL_EXT_multi_draw_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawArraysEXT, "glMultiDrawArraysEXT");
  status_ = status_ && LOAD_(glMultiDrawElementsEXT, "glMultiDrawElementsEXT");
  SAVE_EXTENSION_("GL_EXT_multi_draw_arrays", status_);
}

if (HAS_EXTENSION_("GL_EXT_multi_draw_indirect")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawArraysIndirectEXT, "glMultiDrawArraysIndirectEXT");
  status_ = status_ && LOAD_(glMultiDrawElementsIndirectEXT, "glMultiDrawElementsIndirectEXT");
  SAVE_EXTENSION_("GL_EXT_multi_draw_indirect", status_);
}

if (HAS_EXTENSION_("GL_EXT_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSampleMaskEXT, "glSampleMaskEXT");
  status_ = status_ && LOAD_(glSamplePatternEXT, "glSamplePatternEXT");
  SAVE_EXTENSION_("GL_EXT_multisample", status_);
}

if (HAS_EXTENSION_("GL_EXT_multisampled_render_to_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferTexture2DMultisampleEXT, "glFramebufferTexture2DMultisampleEXT");
  SAVE_EXTENSION_("GL_EXT_multisampled_render_to_texture", status_);
}

if (HAS_EXTENSION_("GL_EXT_multiview_draw_buffers")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glReadBufferIndexedEXT, "glReadBufferIndexedEXT");
  status_ = status_ && LOAD_(glDrawBuffersIndexedEXT, "glDrawBuffersIndexedEXT");
  status_ = status_ && LOAD_(glGetIntegeri_vEXT, "glGetIntegeri_vEXT");
  SAVE_EXTENSION_("GL_EXT_multiview_draw_buffers", status_);
}

if (HAS_EXTENSION_("GL_EXT_paletted_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glColorTableEXT, "glColorTableEXT");
  status_ = status_ && LOAD_(glGetColorTableEXT, "glGetColorTableEXT");
  status_ = status_ && LOAD_(glGetColorTableParameterivEXT, "glGetColorTableParameterivEXT");
  status_ = status_ && LOAD_(glGetColorTableParameterfvEXT, "glGetColorTableParameterfvEXT");
  SAVE_EXTENSION_("GL_EXT_paletted_texture", status_);
}

if (HAS_EXTENSION_("GL_EXT_pixel_transform")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPixelTransformParameteriEXT, "glPixelTransformParameteriEXT");
  status_ = status_ && LOAD_(glPixelTransformParameterfEXT, "glPixelTransformParameterfEXT");
  status_ = status_ && LOAD_(glPixelTransformParameterivEXT, "glPixelTransformParameterivEXT");
  status_ = status_ && LOAD_(glPixelTransformParameterfvEXT, "glPixelTransformParameterfvEXT");
  status_ = status_ && LOAD_(glGetPixelTransformParameterivEXT, "glGetPixelTransformParameterivEXT");
  status_ = status_ && LOAD_(glGetPixelTransformParameterfvEXT, "glGetPixelTransformParameterfvEXT");
  SAVE_EXTENSION_("GL_EXT_pixel_transform", status_);
}

if (HAS_EXTENSION_("GL_EXT_point_parameters")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPointParameterfEXT, "glPointParameterfEXT");
  status_ = status_ && LOAD_(glPointParameterfvEXT, "glPointParameterfvEXT");
  SAVE_EXTENSION_("GL_EXT_point_parameters", status_);
}

if (HAS_EXTENSION_("GL_EXT_polygon_offset")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPolygonOffsetEXT, "glPolygonOffsetEXT");
  SAVE_EXTENSION_("GL_EXT_polygon_offset", status_);
}

if (HAS_EXTENSION_("GL_EXT_polygon_offset_clamp")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPolygonOffsetClampEXT, "glPolygonOffsetClampEXT");
  SAVE_EXTENSION_("GL_EXT_polygon_offset_clamp", status_);
}

if (HAS_EXTENSION_("GL_EXT_primitive_bounding_box")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPrimitiveBoundingBoxEXT, "glPrimitiveBoundingBoxEXT");
  SAVE_EXTENSION_("GL_EXT_primitive_bounding_box", status_);
}

if (HAS_EXTENSION_("GL_EXT_provoking_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProvokingVertexEXT, "glProvokingVertexEXT");
  SAVE_EXTENSION_("GL_EXT_provoking_vertex", status_);
}

if (HAS_EXTENSION_("GL_EXT_robustness")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetGraphicsResetStatusEXT, "glGetGraphicsResetStatusEXT");
  status_ = status_ && LOAD_(glReadnPixelsEXT, "glReadnPixelsEXT");
  status_ = status_ && LOAD_(glGetnUniformfvEXT, "glGetnUniformfvEXT");
  status_ = status_ && LOAD_(glGetnUniformivEXT, "glGetnUniformivEXT");
  SAVE_EXTENSION_("GL_EXT_robustness", status_);
}

if (HAS_EXTENSION_("GL_EXT_semaphore")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenSemaphoresEXT, "glGenSemaphoresEXT");
  status_ = status_ && LOAD_(glDeleteSemaphoresEXT, "glDeleteSemaphoresEXT");
  status_ = status_ && LOAD_(glIsSemaphoreEXT, "glIsSemaphoreEXT");
  status_ = status_ && LOAD_(glSemaphoreParameterui64vEXT, "glSemaphoreParameterui64vEXT");
  status_ = status_ && LOAD_(glGetSemaphoreParameterui64vEXT, "glGetSemaphoreParameterui64vEXT");
  status_ = status_ && LOAD_(glWaitSemaphoreEXT, "glWaitSemaphoreEXT");
  status_ = status_ && LOAD_(glSignalSemaphoreEXT, "glSignalSemaphoreEXT");
  SAVE_EXTENSION_("GL_EXT_semaphore", status_);
}

if (HAS_EXTENSION_("GL_EXT_semaphore_fd")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glImportSemaphoreFdEXT, "glImportSemaphoreFdEXT");
  SAVE_EXTENSION_("GL_EXT_semaphore_fd", status_);
}

if (HAS_EXTENSION_("GL_EXT_semaphore_win32")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glImportSemaphoreWin32HandleEXT, "glImportSemaphoreWin32HandleEXT");
  status_ = status_ && LOAD_(glImportSemaphoreWin32NameEXT, "glImportSemaphoreWin32NameEXT");
  SAVE_EXTENSION_("GL_EXT_semaphore_win32", status_);
}

if (HAS_EXTENSION_("GL_EXT_secondary_color")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSecondaryColor3bEXT, "glSecondaryColor3bEXT");
  status_ = status_ && LOAD_(glSecondaryColor3bvEXT, "glSecondaryColor3bvEXT");
  status_ = status_ && LOAD_(glSecondaryColor3dEXT, "glSecondaryColor3dEXT");
  status_ = status_ && LOAD_(glSecondaryColor3dvEXT, "glSecondaryColor3dvEXT");
  status_ = status_ && LOAD_(glSecondaryColor3fEXT, "glSecondaryColor3fEXT");
  status_ = status_ && LOAD_(glSecondaryColor3fvEXT, "glSecondaryColor3fvEXT");
  status_ = status_ && LOAD_(glSecondaryColor3iEXT, "glSecondaryColor3iEXT");
  status_ = status_ && LOAD_(glSecondaryColor3ivEXT, "glSecondaryColor3ivEXT");
  status_ = status_ && LOAD_(glSecondaryColor3sEXT, "glSecondaryColor3sEXT");
  status_ = status_ && LOAD_(glSecondaryColor3svEXT, "glSecondaryColor3svEXT");
  status_ = status_ && LOAD_(glSecondaryColor3ubEXT, "glSecondaryColor3ubEXT");
  status_ = status_ && LOAD_(glSecondaryColor3ubvEXT, "glSecondaryColor3ubvEXT");
  status_ = status_ && LOAD_(glSecondaryColor3uiEXT, "glSecondaryColor3uiEXT");
  status_ = status_ && LOAD_(glSecondaryColor3uivEXT, "glSecondaryColor3uivEXT");
  status_ = status_ && LOAD_(glSecondaryColor3usEXT, "glSecondaryColor3usEXT");
  status_ = status_ && LOAD_(glSecondaryColor3usvEXT, "glSecondaryColor3usvEXT");
  status_ = status_ && LOAD_(glSecondaryColorPointerEXT, "glSecondaryColorPointerEXT");
  SAVE_EXTENSION_("GL_EXT_secondary_color", status_);
}

if (HAS_EXTENSION_("GL_EXT_separate_shader_objects")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glUseShaderProgramEXT, "glUseShaderProgramEXT");
  status_ = status_ && LOAD_(glActiveProgramEXT, "glActiveProgramEXT");
  status_ = status_ && LOAD_(glCreateShaderProgramEXT, "glCreateShaderProgramEXT");
  status_ = status_ && LOAD_(glActiveShaderProgramEXT, "glActiveShaderProgramEXT");
  status_ = status_ && LOAD_(glBindProgramPipelineEXT, "glBindProgramPipelineEXT");
  status_ = status_ && LOAD_(glCreateShaderProgramvEXT, "glCreateShaderProgramvEXT");
  status_ = status_ && LOAD_(glDeleteProgramPipelinesEXT, "glDeleteProgramPipelinesEXT");
  status_ = status_ && LOAD_(glGenProgramPipelinesEXT, "glGenProgramPipelinesEXT");
  status_ = status_ && LOAD_(glGetProgramPipelineInfoLogEXT, "glGetProgramPipelineInfoLogEXT");
  status_ = status_ && LOAD_(glGetProgramPipelineivEXT, "glGetProgramPipelineivEXT");
  status_ = status_ && LOAD_(glIsProgramPipelineEXT, "glIsProgramPipelineEXT");
  status_ = status_ && LOAD_(glUseProgramStagesEXT, "glUseProgramStagesEXT");
  status_ = status_ && LOAD_(glValidateProgramPipelineEXT, "glValidateProgramPipelineEXT");
  SAVE_EXTENSION_("GL_EXT_separate_shader_objects", status_);
}

if (HAS_EXTENSION_("GL_EXT_shader_framebuffer_fetch_non_coherent")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferFetchBarrierEXT, "glFramebufferFetchBarrierEXT");
  SAVE_EXTENSION_("GL_EXT_shader_framebuffer_fetch_non_coherent", status_);
}

if (HAS_EXTENSION_("GL_EXT_shader_image_load_store")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindImageTextureEXT, "glBindImageTextureEXT");
  status_ = status_ && LOAD_(glMemoryBarrierEXT, "glMemoryBarrierEXT");
  SAVE_EXTENSION_("GL_EXT_shader_image_load_store", status_);
}

if (HAS_EXTENSION_("GL_EXT_shader_pixel_local_storage2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferPixelLocalStorageSizeEXT, "glFramebufferPixelLocalStorageSizeEXT");
  status_ = status_ && LOAD_(glGetFramebufferPixelLocalStorageSizeEXT, "glGetFramebufferPixelLocalStorageSizeEXT");
  status_ = status_ && LOAD_(glClearPixelLocalStorageuiEXT, "glClearPixelLocalStorageuiEXT");
  SAVE_EXTENSION_("GL_EXT_shader_pixel_local_storage2", status_);
}

if (HAS_EXTENSION_("GL_EXT_sparse_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexPageCommitmentEXT, "glTexPageCommitmentEXT");
  SAVE_EXTENSION_("GL_EXT_sparse_texture", status_);
}

if (HAS_EXTENSION_("GL_EXT_stencil_clear_tag")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glStencilClearTagEXT, "glStencilClearTagEXT");
  SAVE_EXTENSION_("GL_EXT_stencil_clear_tag", status_);
}

if (HAS_EXTENSION_("GL_EXT_stencil_two_side")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glActiveStencilFaceEXT, "glActiveStencilFaceEXT");
  SAVE_EXTENSION_("GL_EXT_stencil_two_side", status_);
}

if (HAS_EXTENSION_("GL_EXT_subtexture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexSubImage1DEXT, "glTexSubImage1DEXT");
  status_ = status_ && LOAD_(glTexSubImage2DEXT, "glTexSubImage2DEXT");
  SAVE_EXTENSION_("GL_EXT_subtexture", status_);
}

if (HAS_EXTENSION_("GL_EXT_tessellation_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPatchParameteriEXT, "glPatchParameteriEXT");
  SAVE_EXTENSION_("GL_EXT_tessellation_shader", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture3D")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexImage3DEXT, "glTexImage3DEXT");
  status_ = status_ && LOAD_(glTexSubImage3DEXT, "glTexSubImage3DEXT");
  SAVE_EXTENSION_("GL_EXT_texture3D", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_border_clamp")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSamplerParameterIivEXT, "glSamplerParameterIivEXT");
  status_ = status_ && LOAD_(glSamplerParameterIuivEXT, "glSamplerParameterIuivEXT");
  status_ = status_ && LOAD_(glGetSamplerParameterIivEXT, "glGetSamplerParameterIivEXT");
  status_ = status_ && LOAD_(glGetSamplerParameterIuivEXT, "glGetSamplerParameterIuivEXT");
  SAVE_EXTENSION_("GL_EXT_texture_border_clamp", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexBufferRangeEXT, "glTexBufferRangeEXT");
  SAVE_EXTENSION_("GL_EXT_texture_buffer", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_integer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClearColorIiEXT, "glClearColorIiEXT");
  status_ = status_ && LOAD_(glClearColorIuiEXT, "glClearColorIuiEXT");
  SAVE_EXTENSION_("GL_EXT_texture_integer", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glAreTexturesResidentEXT, "glAreTexturesResidentEXT");
  status_ = status_ && LOAD_(glBindTextureEXT, "glBindTextureEXT");
  status_ = status_ && LOAD_(glDeleteTexturesEXT, "glDeleteTexturesEXT");
  status_ = status_ && LOAD_(glGenTexturesEXT, "glGenTexturesEXT");
  status_ = status_ && LOAD_(glIsTextureEXT, "glIsTextureEXT");
  status_ = status_ && LOAD_(glPrioritizeTexturesEXT, "glPrioritizeTexturesEXT");
  SAVE_EXTENSION_("GL_EXT_texture_object", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_perturb_normal")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureNormalEXT, "glTextureNormalEXT");
  SAVE_EXTENSION_("GL_EXT_texture_perturb_normal", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_storage")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexStorage1DEXT, "glTexStorage1DEXT");
  status_ = status_ && LOAD_(glTexStorage2DEXT, "glTexStorage2DEXT");
  status_ = status_ && LOAD_(glTexStorage3DEXT, "glTexStorage3DEXT");
  SAVE_EXTENSION_("GL_EXT_texture_storage", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_storage_compression")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexStorageAttribs2DEXT, "glTexStorageAttribs2DEXT");
  status_ = status_ && LOAD_(glTexStorageAttribs3DEXT, "glTexStorageAttribs3DEXT");
  SAVE_EXTENSION_("GL_EXT_texture_storage_compression", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_view")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureViewEXT, "glTextureViewEXT");
  SAVE_EXTENSION_("GL_EXT_texture_view", status_);
}

if (HAS_EXTENSION_("GL_NV_timeline_semaphore")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCreateSemaphoresNV, "glCreateSemaphoresNV");
  status_ = status_ && LOAD_(glSemaphoreParameterivNV, "glSemaphoreParameterivNV");
  status_ = status_ && LOAD_(glGetSemaphoreParameterivNV, "glGetSemaphoreParameterivNV");
  SAVE_EXTENSION_("GL_NV_timeline_semaphore", status_);
}

if (HAS_EXTENSION_("GL_EXT_transform_feedback")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginTransformFeedbackEXT, "glBeginTransformFeedbackEXT");
  status_ = status_ && LOAD_(glEndTransformFeedbackEXT, "glEndTransformFeedbackEXT");
  status_ = status_ && LOAD_(glBindBufferRangeEXT, "glBindBufferRangeEXT");
  status_ = status_ && LOAD_(glBindBufferOffsetEXT, "glBindBufferOffsetEXT");
  status_ = status_ && LOAD_(glBindBufferBaseEXT, "glBindBufferBaseEXT");
  status_ = status_ && LOAD_(glTransformFeedbackVaryingsEXT, "glTransformFeedbackVaryingsEXT");
  status_ = status_ && LOAD_(glGetTransformFeedbackVaryingEXT, "glGetTransformFeedbackVaryingEXT");
  SAVE_EXTENSION_("GL_EXT_transform_feedback", status_);
}

if (HAS_EXTENSION_("GL_EXT_vertex_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glArrayElementEXT, "glArrayElementEXT");
  status_ = status_ && LOAD_(glColorPointerEXT, "glColorPointerEXT");
  status_ = status_ && LOAD_(glDrawArraysEXT, "glDrawArraysEXT");
  status_ = status_ && LOAD_(glEdgeFlagPointerEXT, "glEdgeFlagPointerEXT");
  status_ = status_ && LOAD_(glGetPointervEXT, "glGetPointervEXT");
  status_ = status_ && LOAD_(glIndexPointerEXT, "glIndexPointerEXT");
  status_ = status_ && LOAD_(glNormalPointerEXT, "glNormalPointerEXT");
  status_ = status_ && LOAD_(glTexCoordPointerEXT, "glTexCoordPointerEXT");
  status_ = status_ && LOAD_(glVertexPointerEXT, "glVertexPointerEXT");
  SAVE_EXTENSION_("GL_EXT_vertex_array", status_);
}

if (HAS_EXTENSION_("GL_EXT_vertex_attrib_64bit")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribL1dEXT, "glVertexAttribL1dEXT");
  status_ = status_ && LOAD_(glVertexAttribL2dEXT, "glVertexAttribL2dEXT");
  status_ = status_ && LOAD_(glVertexAttribL3dEXT, "glVertexAttribL3dEXT");
  status_ = status_ && LOAD_(glVertexAttribL4dEXT, "glVertexAttribL4dEXT");
  status_ = status_ && LOAD_(glVertexAttribL1dvEXT, "glVertexAttribL1dvEXT");
  status_ = status_ && LOAD_(glVertexAttribL2dvEXT, "glVertexAttribL2dvEXT");
  status_ = status_ && LOAD_(glVertexAttribL3dvEXT, "glVertexAttribL3dvEXT");
  status_ = status_ && LOAD_(glVertexAttribL4dvEXT, "glVertexAttribL4dvEXT");
  status_ = status_ && LOAD_(glVertexAttribLPointerEXT, "glVertexAttribLPointerEXT");
  status_ = status_ && LOAD_(glGetVertexAttribLdvEXT, "glGetVertexAttribLdvEXT");
  SAVE_EXTENSION_("GL_EXT_vertex_attrib_64bit", status_);
}

if (HAS_EXTENSION_("GL_EXT_vertex_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginVertexShaderEXT, "glBeginVertexShaderEXT");
  status_ = status_ && LOAD_(glEndVertexShaderEXT, "glEndVertexShaderEXT");
  status_ = status_ && LOAD_(glBindVertexShaderEXT, "glBindVertexShaderEXT");
  status_ = status_ && LOAD_(glGenVertexShadersEXT, "glGenVertexShadersEXT");
  status_ = status_ && LOAD_(glDeleteVertexShaderEXT, "glDeleteVertexShaderEXT");
  status_ = status_ && LOAD_(glShaderOp1EXT, "glShaderOp1EXT");
  status_ = status_ && LOAD_(glShaderOp2EXT, "glShaderOp2EXT");
  status_ = status_ && LOAD_(glShaderOp3EXT, "glShaderOp3EXT");
  status_ = status_ && LOAD_(glSwizzleEXT, "glSwizzleEXT");
  status_ = status_ && LOAD_(glWriteMaskEXT, "glWriteMaskEXT");
  status_ = status_ && LOAD_(glInsertComponentEXT, "glInsertComponentEXT");
  status_ = status_ && LOAD_(glExtractComponentEXT, "glExtractComponentEXT");
  status_ = status_ && LOAD_(glGenSymbolsEXT, "glGenSymbolsEXT");
  status_ = status_ && LOAD_(glSetInvariantEXT, "glSetInvariantEXT");
  status_ = status_ && LOAD_(glSetLocalConstantEXT, "glSetLocalConstantEXT");
  status_ = status_ && LOAD_(glVariantbvEXT, "glVariantbvEXT");
  status_ = status_ && LOAD_(glVariantsvEXT, "glVariantsvEXT");
  status_ = status_ && LOAD_(glVariantivEXT, "glVariantivEXT");
  status_ = status_ && LOAD_(glVariantfvEXT, "glVariantfvEXT");
  status_ = status_ && LOAD_(glVariantdvEXT, "glVariantdvEXT");
  status_ = status_ && LOAD_(glVariantubvEXT, "glVariantubvEXT");
  status_ = status_ && LOAD_(glVariantusvEXT, "glVariantusvEXT");
  status_ = status_ && LOAD_(glVariantuivEXT, "glVariantuivEXT");
  status_ = status_ && LOAD_(glVariantPointerEXT, "glVariantPointerEXT");
  status_ = status_ && LOAD_(glEnableVariantClientStateEXT, "glEnableVariantClientStateEXT");
  status_ = status_ && LOAD_(glDisableVariantClientStateEXT, "glDisableVariantClientStateEXT");
  status_ = status_ && LOAD_(glBindLightParameterEXT, "glBindLightParameterEXT");
  status_ = status_ && LOAD_(glBindMaterialParameterEXT, "glBindMaterialParameterEXT");
  status_ = status_ && LOAD_(glBindTexGenParameterEXT, "glBindTexGenParameterEXT");
  status_ = status_ && LOAD_(glBindTextureUnitParameterEXT, "glBindTextureUnitParameterEXT");
  status_ = status_ && LOAD_(glBindParameterEXT, "glBindParameterEXT");
  status_ = status_ && LOAD_(glIsVariantEnabledEXT, "glIsVariantEnabledEXT");
  status_ = status_ && LOAD_(glGetVariantBooleanvEXT, "glGetVariantBooleanvEXT");
  status_ = status_ && LOAD_(glGetVariantIntegervEXT, "glGetVariantIntegervEXT");
  status_ = status_ && LOAD_(glGetVariantFloatvEXT, "glGetVariantFloatvEXT");
  status_ = status_ && LOAD_(glGetVariantPointervEXT, "glGetVariantPointervEXT");
  status_ = status_ && LOAD_(glGetInvariantBooleanvEXT, "glGetInvariantBooleanvEXT");
  status_ = status_ && LOAD_(glGetInvariantIntegervEXT, "glGetInvariantIntegervEXT");
  status_ = status_ && LOAD_(glGetInvariantFloatvEXT, "glGetInvariantFloatvEXT");
  status_ = status_ && LOAD_(glGetLocalConstantBooleanvEXT, "glGetLocalConstantBooleanvEXT");
  status_ = status_ && LOAD_(glGetLocalConstantIntegervEXT, "glGetLocalConstantIntegervEXT");
  status_ = status_ && LOAD_(glGetLocalConstantFloatvEXT, "glGetLocalConstantFloatvEXT");
  SAVE_EXTENSION_("GL_EXT_vertex_shader", status_);
}

if (HAS_EXTENSION_("GL_EXT_vertex_weighting")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexWeightfEXT, "glVertexWeightfEXT");
  status_ = status_ && LOAD_(glVertexWeightfvEXT, "glVertexWeightfvEXT");
  status_ = status_ && LOAD_(glVertexWeightPointerEXT, "glVertexWeightPointerEXT");
  SAVE_EXTENSION_("GL_EXT_vertex_weighting", status_);
}

if (HAS_EXTENSION_("GL_EXT_win32_keyed_mutex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glAcquireKeyedMutexWin32EXT, "glAcquireKeyedMutexWin32EXT");
  status_ = status_ && LOAD_(glReleaseKeyedMutexWin32EXT, "glReleaseKeyedMutexWin32EXT");
  SAVE_EXTENSION_("GL_EXT_win32_keyed_mutex", status_);
}

if (HAS_EXTENSION_("GL_EXT_window_rectangles")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glWindowRectanglesEXT, "glWindowRectanglesEXT");
  SAVE_EXTENSION_("GL_EXT_window_rectangles", status_);
}

if (HAS_EXTENSION_("GL_EXT_x11_sync_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glImportSyncEXT, "glImportSyncEXT");
  SAVE_EXTENSION_("GL_EXT_x11_sync_object", status_);
}

if (HAS_EXTENSION_("GL_GREMEDY_frame_terminator")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFrameTerminatorGREMEDY, "glFrameTerminatorGREMEDY");
  SAVE_EXTENSION_("GL_GREMEDY_frame_terminator", status_);
}

if (HAS_EXTENSION_("GL_GREMEDY_string_marker")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glStringMarkerGREMEDY, "glStringMarkerGREMEDY");
  SAVE_EXTENSION_("GL_GREMEDY_string_marker", status_);
}

if (HAS_EXTENSION_("GL_HP_image_transform")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glImageTransformParameteriHP, "glImageTransformParameteriHP");
  status_ = status_ && LOAD_(glImageTransformParameterfHP, "glImageTransformParameterfHP");
  status_ = status_ && LOAD_(glImageTransformParameterivHP, "glImageTransformParameterivHP");
  status_ = status_ && LOAD_(glImageTransformParameterfvHP, "glImageTransformParameterfvHP");
  status_ = status_ && LOAD_(glGetImageTransformParameterivHP, "glGetImageTransformParameterivHP");
  status_ = status_ && LOAD_(glGetImageTransformParameterfvHP, "glGetImageTransformParameterfvHP");
  SAVE_EXTENSION_("GL_HP_image_transform", status_);
}

if (HAS_EXTENSION_("GL_IBM_multimode_draw_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiModeDrawArraysIBM, "glMultiModeDrawArraysIBM");
  status_ = status_ && LOAD_(glMultiModeDrawElementsIBM, "glMultiModeDrawElementsIBM");
  SAVE_EXTENSION_("GL_IBM_multimode_draw_arrays", status_);
}

if (HAS_EXTENSION_("GL_IBM_static_data")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFlushStaticDataIBM, "glFlushStaticDataIBM");
  SAVE_EXTENSION_("GL_IBM_static_data", status_);
}

if (HAS_EXTENSION_("GL_IBM_vertex_array_lists")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glColorPointerListIBM, "glColorPointerListIBM");
  status_ = status_ && LOAD_(glSecondaryColorPointerListIBM, "glSecondaryColorPointerListIBM");
  status_ = status_ && LOAD_(glEdgeFlagPointerListIBM, "glEdgeFlagPointerListIBM");
  status_ = status_ && LOAD_(glFogCoordPointerListIBM, "glFogCoordPointerListIBM");
  status_ = status_ && LOAD_(glIndexPointerListIBM, "glIndexPointerListIBM");
  status_ = status_ && LOAD_(glNormalPointerListIBM, "glNormalPointerListIBM");
  status_ = status_ && LOAD_(glTexCoordPointerListIBM, "glTexCoordPointerListIBM");
  status_ = status_ && LOAD_(glVertexPointerListIBM, "glVertexPointerListIBM");
  SAVE_EXTENSION_("GL_IBM_vertex_array_lists", status_);
}

if (HAS_EXTENSION_("GL_IMG_bindless_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTextureHandleIMG, "glGetTextureHandleIMG");
  status_ = status_ && LOAD_(glGetTextureSamplerHandleIMG, "glGetTextureSamplerHandleIMG");
  status_ = status_ && LOAD_(glUniformHandleui64IMG, "glUniformHandleui64IMG");
  status_ = status_ && LOAD_(glUniformHandleui64vIMG, "glUniformHandleui64vIMG");
  status_ = status_ && LOAD_(glProgramUniformHandleui64IMG, "glProgramUniformHandleui64IMG");
  status_ = status_ && LOAD_(glProgramUniformHandleui64vIMG, "glProgramUniformHandleui64vIMG");
  SAVE_EXTENSION_("GL_IMG_bindless_texture", status_);
}

if (HAS_EXTENSION_("GL_IMG_framebuffer_downsample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferTexture2DDownsampleIMG, "glFramebufferTexture2DDownsampleIMG");
  status_ = status_ && LOAD_(glFramebufferTextureLayerDownsampleIMG, "glFramebufferTextureLayerDownsampleIMG");
  SAVE_EXTENSION_("GL_IMG_framebuffer_downsample", status_);
}

if (HAS_EXTENSION_("GL_IMG_multisampled_render_to_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderbufferStorageMultisampleIMG, "glRenderbufferStorageMultisampleIMG");
  status_ = status_ && LOAD_(glFramebufferTexture2DMultisampleIMG, "glFramebufferTexture2DMultisampleIMG");
  SAVE_EXTENSION_("GL_IMG_multisampled_render_to_texture", status_);
}

if (HAS_EXTENSION_("GL_IMG_user_clip_plane")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClipPlanefIMG, "glClipPlanefIMG");
  status_ = status_ && LOAD_(glClipPlanexIMG, "glClipPlanexIMG");
  SAVE_EXTENSION_("GL_IMG_user_clip_plane", status_);
}

if (HAS_EXTENSION_("GL_INGR_blend_func_separate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendFuncSeparateINGR, "glBlendFuncSeparateINGR");
  SAVE_EXTENSION_("GL_INGR_blend_func_separate", status_);
}

if (HAS_EXTENSION_("GL_INTEL_framebuffer_CMAA")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glApplyFramebufferAttachmentCMAAINTEL, "glApplyFramebufferAttachmentCMAAINTEL");
  SAVE_EXTENSION_("GL_INTEL_framebuffer_CMAA", status_);
}

if (HAS_EXTENSION_("GL_INTEL_map_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSyncTextureINTEL, "glSyncTextureINTEL");
  status_ = status_ && LOAD_(glUnmapTexture2DINTEL, "glUnmapTexture2DINTEL");
  status_ = status_ && LOAD_(glMapTexture2DINTEL, "glMapTexture2DINTEL");
  SAVE_EXTENSION_("GL_INTEL_map_texture", status_);
}

if (HAS_EXTENSION_("GL_INTEL_parallel_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexPointervINTEL, "glVertexPointervINTEL");
  status_ = status_ && LOAD_(glNormalPointervINTEL, "glNormalPointervINTEL");
  status_ = status_ && LOAD_(glColorPointervINTEL, "glColorPointervINTEL");
  status_ = status_ && LOAD_(glTexCoordPointervINTEL, "glTexCoordPointervINTEL");
  SAVE_EXTENSION_("GL_INTEL_parallel_arrays", status_);
}

if (HAS_EXTENSION_("GL_INTEL_performance_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginPerfQueryINTEL, "glBeginPerfQueryINTEL");
  status_ = status_ && LOAD_(glCreatePerfQueryINTEL, "glCreatePerfQueryINTEL");
  status_ = status_ && LOAD_(glDeletePerfQueryINTEL, "glDeletePerfQueryINTEL");
  status_ = status_ && LOAD_(glEndPerfQueryINTEL, "glEndPerfQueryINTEL");
  status_ = status_ && LOAD_(glGetFirstPerfQueryIdINTEL, "glGetFirstPerfQueryIdINTEL");
  status_ = status_ && LOAD_(glGetNextPerfQueryIdINTEL, "glGetNextPerfQueryIdINTEL");
  status_ = status_ && LOAD_(glGetPerfCounterInfoINTEL, "glGetPerfCounterInfoINTEL");
  status_ = status_ && LOAD_(glGetPerfQueryDataINTEL, "glGetPerfQueryDataINTEL");
  status_ = status_ && LOAD_(glGetPerfQueryIdByNameINTEL, "glGetPerfQueryIdByNameINTEL");
  status_ = status_ && LOAD_(glGetPerfQueryInfoINTEL, "glGetPerfQueryInfoINTEL");
  SAVE_EXTENSION_("GL_INTEL_performance_query", status_);
}

if (HAS_EXTENSION_("GL_KHR_blend_equation_advanced")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendBarrierKHR, "glBlendBarrierKHR");
  SAVE_EXTENSION_("GL_KHR_blend_equation_advanced", status_);
}

if (HAS_EXTENSION_("GL_KHR_debug")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDebugMessageControl, "glDebugMessageControl");
  status_ = status_ && LOAD_(glDebugMessageInsert, "glDebugMessageInsert");
  status_ = status_ && LOAD_(glDebugMessageCallback, "glDebugMessageCallback");
  status_ = status_ && LOAD_(glGetDebugMessageLog, "glGetDebugMessageLog");
  status_ = status_ && LOAD_(glPushDebugGroup, "glPushDebugGroup");
  status_ = status_ && LOAD_(glPopDebugGroup, "glPopDebugGroup");
  status_ = status_ && LOAD_(glObjectLabel, "glObjectLabel");
  status_ = status_ && LOAD_(glGetObjectLabel, "glGetObjectLabel");
  status_ = status_ && LOAD_(glObjectPtrLabel, "glObjectPtrLabel");
  status_ = status_ && LOAD_(glGetObjectPtrLabel, "glGetObjectPtrLabel");
  status_ = status_ && LOAD_(glGetPointerv, "glGetPointerv");
  status_ = status_ && LOAD_(glDebugMessageControlKHR, "glDebugMessageControlKHR");
  status_ = status_ && LOAD_(glDebugMessageInsertKHR, "glDebugMessageInsertKHR");
  status_ = status_ && LOAD_(glDebugMessageCallbackKHR, "glDebugMessageCallbackKHR");
  status_ = status_ && LOAD_(glGetDebugMessageLogKHR, "glGetDebugMessageLogKHR");
  status_ = status_ && LOAD_(glPushDebugGroupKHR, "glPushDebugGroupKHR");
  status_ = status_ && LOAD_(glPopDebugGroupKHR, "glPopDebugGroupKHR");
  status_ = status_ && LOAD_(glObjectLabelKHR, "glObjectLabelKHR");
  status_ = status_ && LOAD_(glGetObjectLabelKHR, "glGetObjectLabelKHR");
  status_ = status_ && LOAD_(glObjectPtrLabelKHR, "glObjectPtrLabelKHR");
  status_ = status_ && LOAD_(glGetObjectPtrLabelKHR, "glGetObjectPtrLabelKHR");
  status_ = status_ && LOAD_(glGetPointervKHR, "glGetPointervKHR");
  SAVE_EXTENSION_("GL_KHR_debug", status_);
}

if (HAS_EXTENSION_("GL_KHR_robustness")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetGraphicsResetStatus, "glGetGraphicsResetStatus");
  status_ = status_ && LOAD_(glReadnPixels, "glReadnPixels");
  status_ = status_ && LOAD_(glGetnUniformfv, "glGetnUniformfv");
  status_ = status_ && LOAD_(glGetnUniformiv, "glGetnUniformiv");
  status_ = status_ && LOAD_(glGetnUniformuiv, "glGetnUniformuiv");
  status_ = status_ && LOAD_(glGetGraphicsResetStatusKHR, "glGetGraphicsResetStatusKHR");
  status_ = status_ && LOAD_(glReadnPixelsKHR, "glReadnPixelsKHR");
  status_ = status_ && LOAD_(glGetnUniformfvKHR, "glGetnUniformfvKHR");
  status_ = status_ && LOAD_(glGetnUniformivKHR, "glGetnUniformivKHR");
  status_ = status_ && LOAD_(glGetnUniformuivKHR, "glGetnUniformuivKHR");
  SAVE_EXTENSION_("GL_KHR_robustness", status_);
}

if (HAS_EXTENSION_("GL_KHR_parallel_shader_compile")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMaxShaderCompilerThreadsKHR, "glMaxShaderCompilerThreadsKHR");
  SAVE_EXTENSION_("GL_KHR_parallel_shader_compile", status_);
}

if (HAS_EXTENSION_("GL_MESA_framebuffer_flip_y")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferParameteriMESA, "glFramebufferParameteriMESA");
  status_ = status_ && LOAD_(glGetFramebufferParameterivMESA, "glGetFramebufferParameterivMESA");
  SAVE_EXTENSION_("GL_MESA_framebuffer_flip_y", status_);
}

if (HAS_EXTENSION_("GL_MESA_resize_buffers")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glResizeBuffersMESA, "glResizeBuffersMESA");
  SAVE_EXTENSION_("GL_MESA_resize_buffers", status_);
}

if (HAS_EXTENSION_("GL_MESA_window_pos")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glWindowPos2dMESA, "glWindowPos2dMESA");
  status_ = status_ && LOAD_(glWindowPos2dvMESA, "glWindowPos2dvMESA");
  status_ = status_ && LOAD_(glWindowPos2fMESA, "glWindowPos2fMESA");
  status_ = status_ && LOAD_(glWindowPos2fvMESA, "glWindowPos2fvMESA");
  status_ = status_ && LOAD_(glWindowPos2iMESA, "glWindowPos2iMESA");
  status_ = status_ && LOAD_(glWindowPos2ivMESA, "glWindowPos2ivMESA");
  status_ = status_ && LOAD_(glWindowPos2sMESA, "glWindowPos2sMESA");
  status_ = status_ && LOAD_(glWindowPos2svMESA, "glWindowPos2svMESA");
  status_ = status_ && LOAD_(glWindowPos3dMESA, "glWindowPos3dMESA");
  status_ = status_ && LOAD_(glWindowPos3dvMESA, "glWindowPos3dvMESA");
  status_ = status_ && LOAD_(glWindowPos3fMESA, "glWindowPos3fMESA");
  status_ = status_ && LOAD_(glWindowPos3fvMESA, "glWindowPos3fvMESA");
  status_ = status_ && LOAD_(glWindowPos3iMESA, "glWindowPos3iMESA");
  status_ = status_ && LOAD_(glWindowPos3ivMESA, "glWindowPos3ivMESA");
  status_ = status_ && LOAD_(glWindowPos3sMESA, "glWindowPos3sMESA");
  status_ = status_ && LOAD_(glWindowPos3svMESA, "glWindowPos3svMESA");
  status_ = status_ && LOAD_(glWindowPos4dMESA, "glWindowPos4dMESA");
  status_ = status_ && LOAD_(glWindowPos4dvMESA, "glWindowPos4dvMESA");
  status_ = status_ && LOAD_(glWindowPos4fMESA, "glWindowPos4fMESA");
  status_ = status_ && LOAD_(glWindowPos4fvMESA, "glWindowPos4fvMESA");
  status_ = status_ && LOAD_(glWindowPos4iMESA, "glWindowPos4iMESA");
  status_ = status_ && LOAD_(glWindowPos4ivMESA, "glWindowPos4ivMESA");
  status_ = status_ && LOAD_(glWindowPos4sMESA, "glWindowPos4sMESA");
  status_ = status_ && LOAD_(glWindowPos4svMESA, "glWindowPos4svMESA");
  SAVE_EXTENSION_("GL_MESA_window_pos", status_);
}

if (HAS_EXTENSION_("GL_NVX_conditional_render")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginConditionalRenderNVX, "glBeginConditionalRenderNVX");
  status_ = status_ && LOAD_(glEndConditionalRenderNVX, "glEndConditionalRenderNVX");
  SAVE_EXTENSION_("GL_NVX_conditional_render", status_);
}

if (HAS_EXTENSION_("GL_NVX_linked_gpu_multicast")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glLGPUNamedBufferSubDataNVX, "glLGPUNamedBufferSubDataNVX");
  status_ = status_ && LOAD_(glLGPUCopyImageSubDataNVX, "glLGPUCopyImageSubDataNVX");
  status_ = status_ && LOAD_(glLGPUInterlockNVX, "glLGPUInterlockNVX");
  SAVE_EXTENSION_("GL_NVX_linked_gpu_multicast", status_);
}

if (HAS_EXTENSION_("GL_NV_alpha_to_coverage_dither_control")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glAlphaToCoverageDitherControlNV, "glAlphaToCoverageDitherControlNV");
  SAVE_EXTENSION_("GL_NV_alpha_to_coverage_dither_control", status_);
}

if (HAS_EXTENSION_("GL_NV_bindless_multi_draw_indirect")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawArraysIndirectBindlessNV, "glMultiDrawArraysIndirectBindlessNV");
  status_ = status_ && LOAD_(glMultiDrawElementsIndirectBindlessNV, "glMultiDrawElementsIndirectBindlessNV");
  SAVE_EXTENSION_("GL_NV_bindless_multi_draw_indirect", status_);
}

if (HAS_EXTENSION_("GL_NV_bindless_multi_draw_indirect_count")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawArraysIndirectBindlessCountNV, "glMultiDrawArraysIndirectBindlessCountNV");
  status_ = status_ && LOAD_(glMultiDrawElementsIndirectBindlessCountNV, "glMultiDrawElementsIndirectBindlessCountNV");
  SAVE_EXTENSION_("GL_NV_bindless_multi_draw_indirect_count", status_);
}

if (HAS_EXTENSION_("GL_NV_bindless_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTextureHandleNV, "glGetTextureHandleNV");
  status_ = status_ && LOAD_(glGetTextureSamplerHandleNV, "glGetTextureSamplerHandleNV");
  status_ = status_ && LOAD_(glMakeTextureHandleResidentNV, "glMakeTextureHandleResidentNV");
  status_ = status_ && LOAD_(glMakeTextureHandleNonResidentNV, "glMakeTextureHandleNonResidentNV");
  status_ = status_ && LOAD_(glGetImageHandleNV, "glGetImageHandleNV");
  status_ = status_ && LOAD_(glMakeImageHandleResidentNV, "glMakeImageHandleResidentNV");
  status_ = status_ && LOAD_(glMakeImageHandleNonResidentNV, "glMakeImageHandleNonResidentNV");
  status_ = status_ && LOAD_(glUniformHandleui64NV, "glUniformHandleui64NV");
  status_ = status_ && LOAD_(glUniformHandleui64vNV, "glUniformHandleui64vNV");
  status_ = status_ && LOAD_(glProgramUniformHandleui64NV, "glProgramUniformHandleui64NV");
  status_ = status_ && LOAD_(glProgramUniformHandleui64vNV, "glProgramUniformHandleui64vNV");
  status_ = status_ && LOAD_(glIsTextureHandleResidentNV, "glIsTextureHandleResidentNV");
  status_ = status_ && LOAD_(glIsImageHandleResidentNV, "glIsImageHandleResidentNV");
  SAVE_EXTENSION_("GL_NV_bindless_texture", status_);
}

if (HAS_EXTENSION_("GL_NV_blend_equation_advanced")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendParameteriNV, "glBlendParameteriNV");
  status_ = status_ && LOAD_(glBlendBarrierNV, "glBlendBarrierNV");
  SAVE_EXTENSION_("GL_NV_blend_equation_advanced", status_);
}

if (HAS_EXTENSION_("GL_NV_clip_space_w_scaling")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glViewportPositionWScaleNV, "glViewportPositionWScaleNV");
  SAVE_EXTENSION_("GL_NV_clip_space_w_scaling", status_);
}

if (HAS_EXTENSION_("GL_NV_command_list")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCreateStatesNV, "glCreateStatesNV");
  status_ = status_ && LOAD_(glDeleteStatesNV, "glDeleteStatesNV");
  status_ = status_ && LOAD_(glIsStateNV, "glIsStateNV");
  status_ = status_ && LOAD_(glStateCaptureNV, "glStateCaptureNV");
  status_ = status_ && LOAD_(glGetCommandHeaderNV, "glGetCommandHeaderNV");
  status_ = status_ && LOAD_(glGetStageIndexNV, "glGetStageIndexNV");
  status_ = status_ && LOAD_(glDrawCommandsNV, "glDrawCommandsNV");
  status_ = status_ && LOAD_(glDrawCommandsAddressNV, "glDrawCommandsAddressNV");
  status_ = status_ && LOAD_(glDrawCommandsStatesNV, "glDrawCommandsStatesNV");
  status_ = status_ && LOAD_(glDrawCommandsStatesAddressNV, "glDrawCommandsStatesAddressNV");
  status_ = status_ && LOAD_(glCreateCommandListsNV, "glCreateCommandListsNV");
  status_ = status_ && LOAD_(glDeleteCommandListsNV, "glDeleteCommandListsNV");
  status_ = status_ && LOAD_(glIsCommandListNV, "glIsCommandListNV");
  status_ = status_ && LOAD_(glListDrawCommandsStatesClientNV, "glListDrawCommandsStatesClientNV");
  status_ = status_ && LOAD_(glCommandListSegmentsNV, "glCommandListSegmentsNV");
  status_ = status_ && LOAD_(glCompileCommandListNV, "glCompileCommandListNV");
  status_ = status_ && LOAD_(glCallCommandListNV, "glCallCommandListNV");
  SAVE_EXTENSION_("GL_NV_command_list", status_);
}

if (HAS_EXTENSION_("GL_NV_conditional_render")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginConditionalRenderNV, "glBeginConditionalRenderNV");
  status_ = status_ && LOAD_(glEndConditionalRenderNV, "glEndConditionalRenderNV");
  SAVE_EXTENSION_("GL_NV_conditional_render", status_);
}

if (HAS_EXTENSION_("GL_NV_conservative_raster")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSubpixelPrecisionBiasNV, "glSubpixelPrecisionBiasNV");
  SAVE_EXTENSION_("GL_NV_conservative_raster", status_);
}

if (HAS_EXTENSION_("GL_NV_conservative_raster_dilate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glConservativeRasterParameterfNV, "glConservativeRasterParameterfNV");
  SAVE_EXTENSION_("GL_NV_conservative_raster_dilate", status_);
}

if (HAS_EXTENSION_("GL_NV_conservative_raster_pre_snap_triangles")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glConservativeRasterParameteriNV, "glConservativeRasterParameteriNV");
  SAVE_EXTENSION_("GL_NV_conservative_raster_pre_snap_triangles", status_);
}

if (HAS_EXTENSION_("GL_NV_copy_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyBufferSubDataNV, "glCopyBufferSubDataNV");
  SAVE_EXTENSION_("GL_NV_copy_buffer", status_);
}

if (HAS_EXTENSION_("GL_NV_copy_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyImageSubDataNV, "glCopyImageSubDataNV");
  SAVE_EXTENSION_("GL_NV_copy_image", status_);
}

if (HAS_EXTENSION_("GL_NV_coverage_sample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCoverageMaskNV, "glCoverageMaskNV");
  status_ = status_ && LOAD_(glCoverageOperationNV, "glCoverageOperationNV");
  SAVE_EXTENSION_("GL_NV_coverage_sample", status_);
}

if (HAS_EXTENSION_("GL_NV_depth_buffer_float")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDepthRangedNV, "glDepthRangedNV");
  status_ = status_ && LOAD_(glClearDepthdNV, "glClearDepthdNV");
  status_ = status_ && LOAD_(glDepthBoundsdNV, "glDepthBoundsdNV");
  SAVE_EXTENSION_("GL_NV_depth_buffer_float", status_);
}

if (HAS_EXTENSION_("GL_NV_draw_buffers")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawBuffersNV, "glDrawBuffersNV");
  SAVE_EXTENSION_("GL_NV_draw_buffers", status_);
}

if (HAS_EXTENSION_("GL_NV_draw_instanced")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawArraysInstancedNV, "glDrawArraysInstancedNV");
  status_ = status_ && LOAD_(glDrawElementsInstancedNV, "glDrawElementsInstancedNV");
  SAVE_EXTENSION_("GL_NV_draw_instanced", status_);
}

if (HAS_EXTENSION_("GL_NV_draw_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawTextureNV, "glDrawTextureNV");
  SAVE_EXTENSION_("GL_NV_draw_texture", status_);
}

if (HAS_EXTENSION_("GL_NV_draw_vulkan_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawVkImageNV, "glDrawVkImageNV");
  status_ = status_ && LOAD_(glGetVkProcAddrNV, "glGetVkProcAddrNV");
  status_ = status_ && LOAD_(glWaitVkSemaphoreNV, "glWaitVkSemaphoreNV");
  status_ = status_ && LOAD_(glSignalVkSemaphoreNV, "glSignalVkSemaphoreNV");
  status_ = status_ && LOAD_(glSignalVkFenceNV, "glSignalVkFenceNV");
  SAVE_EXTENSION_("GL_NV_draw_vulkan_image", status_);
}

if (HAS_EXTENSION_("GL_NV_evaluators")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMapControlPointsNV, "glMapControlPointsNV");
  status_ = status_ && LOAD_(glMapParameterivNV, "glMapParameterivNV");
  status_ = status_ && LOAD_(glMapParameterfvNV, "glMapParameterfvNV");
  status_ = status_ && LOAD_(glGetMapControlPointsNV, "glGetMapControlPointsNV");
  status_ = status_ && LOAD_(glGetMapParameterivNV, "glGetMapParameterivNV");
  status_ = status_ && LOAD_(glGetMapParameterfvNV, "glGetMapParameterfvNV");
  status_ = status_ && LOAD_(glGetMapAttribParameterivNV, "glGetMapAttribParameterivNV");
  status_ = status_ && LOAD_(glGetMapAttribParameterfvNV, "glGetMapAttribParameterfvNV");
  status_ = status_ && LOAD_(glEvalMapsNV, "glEvalMapsNV");
  SAVE_EXTENSION_("GL_NV_evaluators", status_);
}

if (HAS_EXTENSION_("GL_NV_explicit_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetMultisamplefvNV, "glGetMultisamplefvNV");
  status_ = status_ && LOAD_(glSampleMaskIndexedNV, "glSampleMaskIndexedNV");
  status_ = status_ && LOAD_(glTexRenderbufferNV, "glTexRenderbufferNV");
  SAVE_EXTENSION_("GL_NV_explicit_multisample", status_);
}

if (HAS_EXTENSION_("GL_NV_fence")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDeleteFencesNV, "glDeleteFencesNV");
  status_ = status_ && LOAD_(glGenFencesNV, "glGenFencesNV");
  status_ = status_ && LOAD_(glIsFenceNV, "glIsFenceNV");
  status_ = status_ && LOAD_(glTestFenceNV, "glTestFenceNV");
  status_ = status_ && LOAD_(glGetFenceivNV, "glGetFenceivNV");
  status_ = status_ && LOAD_(glFinishFenceNV, "glFinishFenceNV");
  status_ = status_ && LOAD_(glSetFenceNV, "glSetFenceNV");
  SAVE_EXTENSION_("GL_NV_fence", status_);
}

if (HAS_EXTENSION_("GL_NV_fragment_coverage_to_color")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFragmentCoverageColorNV, "glFragmentCoverageColorNV");
  SAVE_EXTENSION_("GL_NV_fragment_coverage_to_color", status_);
}

if (HAS_EXTENSION_("GL_NV_fragment_program")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramNamedParameter4fNV, "glProgramNamedParameter4fNV");
  status_ = status_ && LOAD_(glProgramNamedParameter4fvNV, "glProgramNamedParameter4fvNV");
  status_ = status_ && LOAD_(glProgramNamedParameter4dNV, "glProgramNamedParameter4dNV");
  status_ = status_ && LOAD_(glProgramNamedParameter4dvNV, "glProgramNamedParameter4dvNV");
  status_ = status_ && LOAD_(glGetProgramNamedParameterfvNV, "glGetProgramNamedParameterfvNV");
  status_ = status_ && LOAD_(glGetProgramNamedParameterdvNV, "glGetProgramNamedParameterdvNV");
  SAVE_EXTENSION_("GL_NV_fragment_program", status_);
}

if (HAS_EXTENSION_("GL_NV_framebuffer_blit")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlitFramebufferNV, "glBlitFramebufferNV");
  SAVE_EXTENSION_("GL_NV_framebuffer_blit", status_);
}

if (HAS_EXTENSION_("GL_NV_framebuffer_mixed_samples")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCoverageModulationTableNV, "glCoverageModulationTableNV");
  status_ = status_ && LOAD_(glGetCoverageModulationTableNV, "glGetCoverageModulationTableNV");
  status_ = status_ && LOAD_(glCoverageModulationNV, "glCoverageModulationNV");
  SAVE_EXTENSION_("GL_NV_framebuffer_mixed_samples", status_);
}

if (HAS_EXTENSION_("GL_NV_framebuffer_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderbufferStorageMultisampleNV, "glRenderbufferStorageMultisampleNV");
  SAVE_EXTENSION_("GL_NV_framebuffer_multisample", status_);
}

if (HAS_EXTENSION_("GL_NV_framebuffer_multisample_coverage")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderbufferStorageMultisampleCoverageNV, "glRenderbufferStorageMultisampleCoverageNV");
  SAVE_EXTENSION_("GL_NV_framebuffer_multisample_coverage", status_);
}

if (HAS_EXTENSION_("GL_NV_geometry_program4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramVertexLimitNV, "glProgramVertexLimitNV");
  status_ = status_ && LOAD_(glFramebufferTextureFaceEXT, "glFramebufferTextureFaceEXT");
  SAVE_EXTENSION_("GL_NV_geometry_program4", status_);
}

if (HAS_EXTENSION_("GL_NV_gpu_program4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramLocalParameterI4iNV, "glProgramLocalParameterI4iNV");
  status_ = status_ && LOAD_(glProgramLocalParameterI4ivNV, "glProgramLocalParameterI4ivNV");
  status_ = status_ && LOAD_(glProgramLocalParametersI4ivNV, "glProgramLocalParametersI4ivNV");
  status_ = status_ && LOAD_(glProgramLocalParameterI4uiNV, "glProgramLocalParameterI4uiNV");
  status_ = status_ && LOAD_(glProgramLocalParameterI4uivNV, "glProgramLocalParameterI4uivNV");
  status_ = status_ && LOAD_(glProgramLocalParametersI4uivNV, "glProgramLocalParametersI4uivNV");
  status_ = status_ && LOAD_(glProgramEnvParameterI4iNV, "glProgramEnvParameterI4iNV");
  status_ = status_ && LOAD_(glProgramEnvParameterI4ivNV, "glProgramEnvParameterI4ivNV");
  status_ = status_ && LOAD_(glProgramEnvParametersI4ivNV, "glProgramEnvParametersI4ivNV");
  status_ = status_ && LOAD_(glProgramEnvParameterI4uiNV, "glProgramEnvParameterI4uiNV");
  status_ = status_ && LOAD_(glProgramEnvParameterI4uivNV, "glProgramEnvParameterI4uivNV");
  status_ = status_ && LOAD_(glProgramEnvParametersI4uivNV, "glProgramEnvParametersI4uivNV");
  status_ = status_ && LOAD_(glGetProgramLocalParameterIivNV, "glGetProgramLocalParameterIivNV");
  status_ = status_ && LOAD_(glGetProgramLocalParameterIuivNV, "glGetProgramLocalParameterIuivNV");
  status_ = status_ && LOAD_(glGetProgramEnvParameterIivNV, "glGetProgramEnvParameterIivNV");
  status_ = status_ && LOAD_(glGetProgramEnvParameterIuivNV, "glGetProgramEnvParameterIuivNV");
  SAVE_EXTENSION_("GL_NV_gpu_program4", status_);
}

if (HAS_EXTENSION_("GL_NV_gpu_program5")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramSubroutineParametersuivNV, "glProgramSubroutineParametersuivNV");
  status_ = status_ && LOAD_(glGetProgramSubroutineParameteruivNV, "glGetProgramSubroutineParameteruivNV");
  SAVE_EXTENSION_("GL_NV_gpu_program5", status_);
}

if (HAS_EXTENSION_("GL_NV_half_float")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertex2hNV, "glVertex2hNV");
  status_ = status_ && LOAD_(glVertex2hvNV, "glVertex2hvNV");
  status_ = status_ && LOAD_(glVertex3hNV, "glVertex3hNV");
  status_ = status_ && LOAD_(glVertex3hvNV, "glVertex3hvNV");
  status_ = status_ && LOAD_(glVertex4hNV, "glVertex4hNV");
  status_ = status_ && LOAD_(glVertex4hvNV, "glVertex4hvNV");
  status_ = status_ && LOAD_(glNormal3hNV, "glNormal3hNV");
  status_ = status_ && LOAD_(glNormal3hvNV, "glNormal3hvNV");
  status_ = status_ && LOAD_(glColor3hNV, "glColor3hNV");
  status_ = status_ && LOAD_(glColor3hvNV, "glColor3hvNV");
  status_ = status_ && LOAD_(glColor4hNV, "glColor4hNV");
  status_ = status_ && LOAD_(glColor4hvNV, "glColor4hvNV");
  status_ = status_ && LOAD_(glTexCoord1hNV, "glTexCoord1hNV");
  status_ = status_ && LOAD_(glTexCoord1hvNV, "glTexCoord1hvNV");
  status_ = status_ && LOAD_(glTexCoord2hNV, "glTexCoord2hNV");
  status_ = status_ && LOAD_(glTexCoord2hvNV, "glTexCoord2hvNV");
  status_ = status_ && LOAD_(glTexCoord3hNV, "glTexCoord3hNV");
  status_ = status_ && LOAD_(glTexCoord3hvNV, "glTexCoord3hvNV");
  status_ = status_ && LOAD_(glTexCoord4hNV, "glTexCoord4hNV");
  status_ = status_ && LOAD_(glTexCoord4hvNV, "glTexCoord4hvNV");
  status_ = status_ && LOAD_(glMultiTexCoord1hNV, "glMultiTexCoord1hNV");
  status_ = status_ && LOAD_(glMultiTexCoord1hvNV, "glMultiTexCoord1hvNV");
  status_ = status_ && LOAD_(glMultiTexCoord2hNV, "glMultiTexCoord2hNV");
  status_ = status_ && LOAD_(glMultiTexCoord2hvNV, "glMultiTexCoord2hvNV");
  status_ = status_ && LOAD_(glMultiTexCoord3hNV, "glMultiTexCoord3hNV");
  status_ = status_ && LOAD_(glMultiTexCoord3hvNV, "glMultiTexCoord3hvNV");
  status_ = status_ && LOAD_(glMultiTexCoord4hNV, "glMultiTexCoord4hNV");
  status_ = status_ && LOAD_(glMultiTexCoord4hvNV, "glMultiTexCoord4hvNV");
  status_ = status_ && LOAD_(glFogCoordhNV, "glFogCoordhNV");
  status_ = status_ && LOAD_(glFogCoordhvNV, "glFogCoordhvNV");
  status_ = status_ && LOAD_(glSecondaryColor3hNV, "glSecondaryColor3hNV");
  status_ = status_ && LOAD_(glSecondaryColor3hvNV, "glSecondaryColor3hvNV");
  status_ = status_ && LOAD_(glVertexWeighthNV, "glVertexWeighthNV");
  status_ = status_ && LOAD_(glVertexWeighthvNV, "glVertexWeighthvNV");
  status_ = status_ && LOAD_(glVertexAttrib1hNV, "glVertexAttrib1hNV");
  status_ = status_ && LOAD_(glVertexAttrib1hvNV, "glVertexAttrib1hvNV");
  status_ = status_ && LOAD_(glVertexAttrib2hNV, "glVertexAttrib2hNV");
  status_ = status_ && LOAD_(glVertexAttrib2hvNV, "glVertexAttrib2hvNV");
  status_ = status_ && LOAD_(glVertexAttrib3hNV, "glVertexAttrib3hNV");
  status_ = status_ && LOAD_(glVertexAttrib3hvNV, "glVertexAttrib3hvNV");
  status_ = status_ && LOAD_(glVertexAttrib4hNV, "glVertexAttrib4hNV");
  status_ = status_ && LOAD_(glVertexAttrib4hvNV, "glVertexAttrib4hvNV");
  status_ = status_ && LOAD_(glVertexAttribs1hvNV, "glVertexAttribs1hvNV");
  status_ = status_ && LOAD_(glVertexAttribs2hvNV, "glVertexAttribs2hvNV");
  status_ = status_ && LOAD_(glVertexAttribs3hvNV, "glVertexAttribs3hvNV");
  status_ = status_ && LOAD_(glVertexAttribs4hvNV, "glVertexAttribs4hvNV");
  SAVE_EXTENSION_("GL_NV_half_float", status_);
}

if (HAS_EXTENSION_("GL_NV_instanced_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribDivisorNV, "glVertexAttribDivisorNV");
  SAVE_EXTENSION_("GL_NV_instanced_arrays", status_);
}

if (HAS_EXTENSION_("GL_NV_internalformat_sample_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetInternalformatSampleivNV, "glGetInternalformatSampleivNV");
  SAVE_EXTENSION_("GL_NV_internalformat_sample_query", status_);
}

if (HAS_EXTENSION_("GL_NV_gpu_multicast")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderGpuMaskNV, "glRenderGpuMaskNV");
  status_ = status_ && LOAD_(glMulticastBufferSubDataNV, "glMulticastBufferSubDataNV");
  status_ = status_ && LOAD_(glMulticastCopyBufferSubDataNV, "glMulticastCopyBufferSubDataNV");
  status_ = status_ && LOAD_(glMulticastCopyImageSubDataNV, "glMulticastCopyImageSubDataNV");
  status_ = status_ && LOAD_(glMulticastBlitFramebufferNV, "glMulticastBlitFramebufferNV");
  status_ = status_ && LOAD_(glMulticastFramebufferSampleLocationsfvNV, "glMulticastFramebufferSampleLocationsfvNV");
  status_ = status_ && LOAD_(glMulticastBarrierNV, "glMulticastBarrierNV");
  status_ = status_ && LOAD_(glMulticastWaitSyncNV, "glMulticastWaitSyncNV");
  status_ = status_ && LOAD_(glMulticastGetQueryObjectivNV, "glMulticastGetQueryObjectivNV");
  status_ = status_ && LOAD_(glMulticastGetQueryObjectuivNV, "glMulticastGetQueryObjectuivNV");
  status_ = status_ && LOAD_(glMulticastGetQueryObjecti64vNV, "glMulticastGetQueryObjecti64vNV");
  status_ = status_ && LOAD_(glMulticastGetQueryObjectui64vNV, "glMulticastGetQueryObjectui64vNV");
  SAVE_EXTENSION_("GL_NV_gpu_multicast", status_);
}

if (HAS_EXTENSION_("GL_NVX_gpu_multicast2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glUploadGpuMaskNVX, "glUploadGpuMaskNVX");
  status_ = status_ && LOAD_(glMulticastViewportArrayvNVX, "glMulticastViewportArrayvNVX");
  status_ = status_ && LOAD_(glMulticastViewportPositionWScaleNVX, "glMulticastViewportPositionWScaleNVX");
  status_ = status_ && LOAD_(glMulticastScissorArrayvNVX, "glMulticastScissorArrayvNVX");
  status_ = status_ && LOAD_(glAsyncCopyBufferSubDataNVX, "glAsyncCopyBufferSubDataNVX");
  status_ = status_ && LOAD_(glAsyncCopyImageSubDataNVX, "glAsyncCopyImageSubDataNVX");
  SAVE_EXTENSION_("GL_NVX_gpu_multicast2", status_);
}

if (HAS_EXTENSION_("GL_NVX_progress_fence")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCreateProgressFenceNVX, "glCreateProgressFenceNVX");
  status_ = status_ && LOAD_(glSignalSemaphoreui64NVX, "glSignalSemaphoreui64NVX");
  status_ = status_ && LOAD_(glWaitSemaphoreui64NVX, "glWaitSemaphoreui64NVX");
  status_ = status_ && LOAD_(glClientWaitSemaphoreui64NVX, "glClientWaitSemaphoreui64NVX");
  SAVE_EXTENSION_("GL_NVX_progress_fence", status_);
}

if (HAS_EXTENSION_("GL_NV_memory_attachment")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetMemoryObjectDetachedResourcesuivNV, "glGetMemoryObjectDetachedResourcesuivNV");
  status_ = status_ && LOAD_(glResetMemoryObjectParameterNV, "glResetMemoryObjectParameterNV");
  status_ = status_ && LOAD_(glTexAttachMemoryNV, "glTexAttachMemoryNV");
  status_ = status_ && LOAD_(glBufferAttachMemoryNV, "glBufferAttachMemoryNV");
  status_ = status_ && LOAD_(glTextureAttachMemoryNV, "glTextureAttachMemoryNV");
  status_ = status_ && LOAD_(glNamedBufferAttachMemoryNV, "glNamedBufferAttachMemoryNV");
  SAVE_EXTENSION_("GL_NV_memory_attachment", status_);
}

if (HAS_EXTENSION_("GL_NV_memory_object_sparse")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBufferPageCommitmentMemNV, "glBufferPageCommitmentMemNV");
  status_ = status_ && LOAD_(glTexPageCommitmentMemNV, "glTexPageCommitmentMemNV");
  status_ = status_ && LOAD_(glNamedBufferPageCommitmentMemNV, "glNamedBufferPageCommitmentMemNV");
  status_ = status_ && LOAD_(glTexturePageCommitmentMemNV, "glTexturePageCommitmentMemNV");
  SAVE_EXTENSION_("GL_NV_memory_object_sparse", status_);
}

if (HAS_EXTENSION_("GL_NV_mesh_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawMeshTasksNV, "glDrawMeshTasksNV");
  status_ = status_ && LOAD_(glDrawMeshTasksIndirectNV, "glDrawMeshTasksIndirectNV");
  status_ = status_ && LOAD_(glMultiDrawMeshTasksIndirectNV, "glMultiDrawMeshTasksIndirectNV");
  status_ = status_ && LOAD_(glMultiDrawMeshTasksIndirectCountNV, "glMultiDrawMeshTasksIndirectCountNV");
  SAVE_EXTENSION_("GL_NV_mesh_shader", status_);
}

if (HAS_EXTENSION_("GL_NV_non_square_matrices")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glUniformMatrix2x3fvNV, "glUniformMatrix2x3fvNV");
  status_ = status_ && LOAD_(glUniformMatrix3x2fvNV, "glUniformMatrix3x2fvNV");
  status_ = status_ && LOAD_(glUniformMatrix2x4fvNV, "glUniformMatrix2x4fvNV");
  status_ = status_ && LOAD_(glUniformMatrix4x2fvNV, "glUniformMatrix4x2fvNV");
  status_ = status_ && LOAD_(glUniformMatrix3x4fvNV, "glUniformMatrix3x4fvNV");
  status_ = status_ && LOAD_(glUniformMatrix4x3fvNV, "glUniformMatrix4x3fvNV");
  SAVE_EXTENSION_("GL_NV_non_square_matrices", status_);
}

if (HAS_EXTENSION_("GL_NV_occlusion_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenOcclusionQueriesNV, "glGenOcclusionQueriesNV");
  status_ = status_ && LOAD_(glDeleteOcclusionQueriesNV, "glDeleteOcclusionQueriesNV");
  status_ = status_ && LOAD_(glIsOcclusionQueryNV, "glIsOcclusionQueryNV");
  status_ = status_ && LOAD_(glBeginOcclusionQueryNV, "glBeginOcclusionQueryNV");
  status_ = status_ && LOAD_(glEndOcclusionQueryNV, "glEndOcclusionQueryNV");
  status_ = status_ && LOAD_(glGetOcclusionQueryivNV, "glGetOcclusionQueryivNV");
  status_ = status_ && LOAD_(glGetOcclusionQueryuivNV, "glGetOcclusionQueryuivNV");
  SAVE_EXTENSION_("GL_NV_occlusion_query", status_);
}

if (HAS_EXTENSION_("GL_NV_parameter_buffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramBufferParametersfvNV, "glProgramBufferParametersfvNV");
  status_ = status_ && LOAD_(glProgramBufferParametersIivNV, "glProgramBufferParametersIivNV");
  status_ = status_ && LOAD_(glProgramBufferParametersIuivNV, "glProgramBufferParametersIuivNV");
  SAVE_EXTENSION_("GL_NV_parameter_buffer_object", status_);
}

if (HAS_EXTENSION_("GL_NV_path_rendering")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenPathsNV, "glGenPathsNV");
  status_ = status_ && LOAD_(glDeletePathsNV, "glDeletePathsNV");
  status_ = status_ && LOAD_(glIsPathNV, "glIsPathNV");
  status_ = status_ && LOAD_(glPathCommandsNV, "glPathCommandsNV");
  status_ = status_ && LOAD_(glPathCoordsNV, "glPathCoordsNV");
  status_ = status_ && LOAD_(glPathSubCommandsNV, "glPathSubCommandsNV");
  status_ = status_ && LOAD_(glPathSubCoordsNV, "glPathSubCoordsNV");
  status_ = status_ && LOAD_(glPathStringNV, "glPathStringNV");
  status_ = status_ && LOAD_(glPathGlyphsNV, "glPathGlyphsNV");
  status_ = status_ && LOAD_(glPathGlyphRangeNV, "glPathGlyphRangeNV");
  status_ = status_ && LOAD_(glWeightPathsNV, "glWeightPathsNV");
  status_ = status_ && LOAD_(glCopyPathNV, "glCopyPathNV");
  status_ = status_ && LOAD_(glInterpolatePathsNV, "glInterpolatePathsNV");
  status_ = status_ && LOAD_(glTransformPathNV, "glTransformPathNV");
  status_ = status_ && LOAD_(glPathParameterivNV, "glPathParameterivNV");
  status_ = status_ && LOAD_(glPathParameteriNV, "glPathParameteriNV");
  status_ = status_ && LOAD_(glPathParameterfvNV, "glPathParameterfvNV");
  status_ = status_ && LOAD_(glPathParameterfNV, "glPathParameterfNV");
  status_ = status_ && LOAD_(glPathDashArrayNV, "glPathDashArrayNV");
  status_ = status_ && LOAD_(glPathStencilFuncNV, "glPathStencilFuncNV");
  status_ = status_ && LOAD_(glPathStencilDepthOffsetNV, "glPathStencilDepthOffsetNV");
  status_ = status_ && LOAD_(glStencilFillPathNV, "glStencilFillPathNV");
  status_ = status_ && LOAD_(glStencilStrokePathNV, "glStencilStrokePathNV");
  status_ = status_ && LOAD_(glStencilFillPathInstancedNV, "glStencilFillPathInstancedNV");
  status_ = status_ && LOAD_(glStencilStrokePathInstancedNV, "glStencilStrokePathInstancedNV");
  status_ = status_ && LOAD_(glPathCoverDepthFuncNV, "glPathCoverDepthFuncNV");
  status_ = status_ && LOAD_(glCoverFillPathNV, "glCoverFillPathNV");
  status_ = status_ && LOAD_(glCoverStrokePathNV, "glCoverStrokePathNV");
  status_ = status_ && LOAD_(glCoverFillPathInstancedNV, "glCoverFillPathInstancedNV");
  status_ = status_ && LOAD_(glCoverStrokePathInstancedNV, "glCoverStrokePathInstancedNV");
  status_ = status_ && LOAD_(glGetPathParameterivNV, "glGetPathParameterivNV");
  status_ = status_ && LOAD_(glGetPathParameterfvNV, "glGetPathParameterfvNV");
  status_ = status_ && LOAD_(glGetPathCommandsNV, "glGetPathCommandsNV");
  status_ = status_ && LOAD_(glGetPathCoordsNV, "glGetPathCoordsNV");
  status_ = status_ && LOAD_(glGetPathDashArrayNV, "glGetPathDashArrayNV");
  status_ = status_ && LOAD_(glGetPathMetricsNV, "glGetPathMetricsNV");
  status_ = status_ && LOAD_(glGetPathMetricRangeNV, "glGetPathMetricRangeNV");
  status_ = status_ && LOAD_(glGetPathSpacingNV, "glGetPathSpacingNV");
  status_ = status_ && LOAD_(glIsPointInFillPathNV, "glIsPointInFillPathNV");
  status_ = status_ && LOAD_(glIsPointInStrokePathNV, "glIsPointInStrokePathNV");
  status_ = status_ && LOAD_(glGetPathLengthNV, "glGetPathLengthNV");
  status_ = status_ && LOAD_(glPointAlongPathNV, "glPointAlongPathNV");
  status_ = status_ && LOAD_(glMatrixLoad3x2fNV, "glMatrixLoad3x2fNV");
  status_ = status_ && LOAD_(glMatrixLoad3x3fNV, "glMatrixLoad3x3fNV");
  status_ = status_ && LOAD_(glMatrixLoadTranspose3x3fNV, "glMatrixLoadTranspose3x3fNV");
  status_ = status_ && LOAD_(glMatrixMult3x2fNV, "glMatrixMult3x2fNV");
  status_ = status_ && LOAD_(glMatrixMult3x3fNV, "glMatrixMult3x3fNV");
  status_ = status_ && LOAD_(glMatrixMultTranspose3x3fNV, "glMatrixMultTranspose3x3fNV");
  status_ = status_ && LOAD_(glStencilThenCoverFillPathNV, "glStencilThenCoverFillPathNV");
  status_ = status_ && LOAD_(glStencilThenCoverStrokePathNV, "glStencilThenCoverStrokePathNV");
  status_ = status_ && LOAD_(glStencilThenCoverFillPathInstancedNV, "glStencilThenCoverFillPathInstancedNV");
  status_ = status_ && LOAD_(glStencilThenCoverStrokePathInstancedNV, "glStencilThenCoverStrokePathInstancedNV");
  status_ = status_ && LOAD_(glPathGlyphIndexRangeNV, "glPathGlyphIndexRangeNV");
  status_ = status_ && LOAD_(glPathGlyphIndexArrayNV, "glPathGlyphIndexArrayNV");
  status_ = status_ && LOAD_(glPathMemoryGlyphIndexArrayNV, "glPathMemoryGlyphIndexArrayNV");
  status_ = status_ && LOAD_(glProgramPathFragmentInputGenNV, "glProgramPathFragmentInputGenNV");
  status_ = status_ && LOAD_(glGetProgramResourcefvNV, "glGetProgramResourcefvNV");
  status_ = status_ && LOAD_(glPathColorGenNV, "glPathColorGenNV");
  status_ = status_ && LOAD_(glPathTexGenNV, "glPathTexGenNV");
  status_ = status_ && LOAD_(glPathFogGenNV, "glPathFogGenNV");
  status_ = status_ && LOAD_(glGetPathColorGenivNV, "glGetPathColorGenivNV");
  status_ = status_ && LOAD_(glGetPathColorGenfvNV, "glGetPathColorGenfvNV");
  status_ = status_ && LOAD_(glGetPathTexGenivNV, "glGetPathTexGenivNV");
  status_ = status_ && LOAD_(glGetPathTexGenfvNV, "glGetPathTexGenfvNV");
  SAVE_EXTENSION_("GL_NV_path_rendering", status_);
}

if (HAS_EXTENSION_("GL_NV_pixel_data_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPixelDataRangeNV, "glPixelDataRangeNV");
  status_ = status_ && LOAD_(glFlushPixelDataRangeNV, "glFlushPixelDataRangeNV");
  SAVE_EXTENSION_("GL_NV_pixel_data_range", status_);
}

if (HAS_EXTENSION_("GL_NV_point_sprite")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPointParameteriNV, "glPointParameteriNV");
  status_ = status_ && LOAD_(glPointParameterivNV, "glPointParameterivNV");
  SAVE_EXTENSION_("GL_NV_point_sprite", status_);
}

if (HAS_EXTENSION_("GL_NV_polygon_mode")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPolygonModeNV, "glPolygonModeNV");
  SAVE_EXTENSION_("GL_NV_polygon_mode", status_);
}

if (HAS_EXTENSION_("GL_NV_present_video")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPresentFrameKeyedNV, "glPresentFrameKeyedNV");
  status_ = status_ && LOAD_(glPresentFrameDualFillNV, "glPresentFrameDualFillNV");
  status_ = status_ && LOAD_(glGetVideoivNV, "glGetVideoivNV");
  status_ = status_ && LOAD_(glGetVideouivNV, "glGetVideouivNV");
  status_ = status_ && LOAD_(glGetVideoi64vNV, "glGetVideoi64vNV");
  status_ = status_ && LOAD_(glGetVideoui64vNV, "glGetVideoui64vNV");
  SAVE_EXTENSION_("GL_NV_present_video", status_);
}

if (HAS_EXTENSION_("GL_NV_primitive_restart")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPrimitiveRestartNV, "glPrimitiveRestartNV");
  status_ = status_ && LOAD_(glPrimitiveRestartIndexNV, "glPrimitiveRestartIndexNV");
  SAVE_EXTENSION_("GL_NV_primitive_restart", status_);
}

if (HAS_EXTENSION_("GL_NV_query_resource")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glQueryResourceNV, "glQueryResourceNV");
  SAVE_EXTENSION_("GL_NV_query_resource", status_);
}

if (HAS_EXTENSION_("GL_NV_query_resource_tag")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGenQueryResourceTagNV, "glGenQueryResourceTagNV");
  status_ = status_ && LOAD_(glDeleteQueryResourceTagNV, "glDeleteQueryResourceTagNV");
  status_ = status_ && LOAD_(glQueryResourceTagNV, "glQueryResourceTagNV");
  SAVE_EXTENSION_("GL_NV_query_resource_tag", status_);
}

if (HAS_EXTENSION_("GL_NV_read_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glReadBufferNV, "glReadBufferNV");
  SAVE_EXTENSION_("GL_NV_read_buffer", status_);
}

if (HAS_EXTENSION_("GL_NV_register_combiners")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCombinerParameterfvNV, "glCombinerParameterfvNV");
  status_ = status_ && LOAD_(glCombinerParameterfNV, "glCombinerParameterfNV");
  status_ = status_ && LOAD_(glCombinerParameterivNV, "glCombinerParameterivNV");
  status_ = status_ && LOAD_(glCombinerParameteriNV, "glCombinerParameteriNV");
  status_ = status_ && LOAD_(glCombinerInputNV, "glCombinerInputNV");
  status_ = status_ && LOAD_(glCombinerOutputNV, "glCombinerOutputNV");
  status_ = status_ && LOAD_(glFinalCombinerInputNV, "glFinalCombinerInputNV");
  status_ = status_ && LOAD_(glGetCombinerInputParameterfvNV, "glGetCombinerInputParameterfvNV");
  status_ = status_ && LOAD_(glGetCombinerInputParameterivNV, "glGetCombinerInputParameterivNV");
  status_ = status_ && LOAD_(glGetCombinerOutputParameterfvNV, "glGetCombinerOutputParameterfvNV");
  status_ = status_ && LOAD_(glGetCombinerOutputParameterivNV, "glGetCombinerOutputParameterivNV");
  status_ = status_ && LOAD_(glGetFinalCombinerInputParameterfvNV, "glGetFinalCombinerInputParameterfvNV");
  status_ = status_ && LOAD_(glGetFinalCombinerInputParameterivNV, "glGetFinalCombinerInputParameterivNV");
  SAVE_EXTENSION_("GL_NV_register_combiners", status_);
}

if (HAS_EXTENSION_("GL_NV_register_combiners2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCombinerStageParameterfvNV, "glCombinerStageParameterfvNV");
  status_ = status_ && LOAD_(glGetCombinerStageParameterfvNV, "glGetCombinerStageParameterfvNV");
  SAVE_EXTENSION_("GL_NV_register_combiners2", status_);
}

if (HAS_EXTENSION_("GL_NV_sample_locations")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferSampleLocationsfvNV, "glFramebufferSampleLocationsfvNV");
  status_ = status_ && LOAD_(glNamedFramebufferSampleLocationsfvNV, "glNamedFramebufferSampleLocationsfvNV");
  status_ = status_ && LOAD_(glResolveDepthValuesNV, "glResolveDepthValuesNV");
  SAVE_EXTENSION_("GL_NV_sample_locations", status_);
}

if (HAS_EXTENSION_("GL_NV_scissor_exclusive")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glScissorExclusiveNV, "glScissorExclusiveNV");
  status_ = status_ && LOAD_(glScissorExclusiveArrayvNV, "glScissorExclusiveArrayvNV");
  SAVE_EXTENSION_("GL_NV_scissor_exclusive", status_);
}

if (HAS_EXTENSION_("GL_NV_shader_buffer_load")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMakeBufferResidentNV, "glMakeBufferResidentNV");
  status_ = status_ && LOAD_(glMakeBufferNonResidentNV, "glMakeBufferNonResidentNV");
  status_ = status_ && LOAD_(glIsBufferResidentNV, "glIsBufferResidentNV");
  status_ = status_ && LOAD_(glMakeNamedBufferResidentNV, "glMakeNamedBufferResidentNV");
  status_ = status_ && LOAD_(glMakeNamedBufferNonResidentNV, "glMakeNamedBufferNonResidentNV");
  status_ = status_ && LOAD_(glIsNamedBufferResidentNV, "glIsNamedBufferResidentNV");
  status_ = status_ && LOAD_(glGetBufferParameterui64vNV, "glGetBufferParameterui64vNV");
  status_ = status_ && LOAD_(glGetNamedBufferParameterui64vNV, "glGetNamedBufferParameterui64vNV");
  status_ = status_ && LOAD_(glGetIntegerui64vNV, "glGetIntegerui64vNV");
  status_ = status_ && LOAD_(glUniformui64NV, "glUniformui64NV");
  status_ = status_ && LOAD_(glUniformui64vNV, "glUniformui64vNV");
  status_ = status_ && LOAD_(glProgramUniformui64NV, "glProgramUniformui64NV");
  status_ = status_ && LOAD_(glProgramUniformui64vNV, "glProgramUniformui64vNV");
  SAVE_EXTENSION_("GL_NV_shader_buffer_load", status_);
}

if (HAS_EXTENSION_("GL_NV_shading_rate_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindShadingRateImageNV, "glBindShadingRateImageNV");
  status_ = status_ && LOAD_(glGetShadingRateImagePaletteNV, "glGetShadingRateImagePaletteNV");
  status_ = status_ && LOAD_(glGetShadingRateSampleLocationivNV, "glGetShadingRateSampleLocationivNV");
  status_ = status_ && LOAD_(glShadingRateImageBarrierNV, "glShadingRateImageBarrierNV");
  status_ = status_ && LOAD_(glShadingRateImagePaletteNV, "glShadingRateImagePaletteNV");
  status_ = status_ && LOAD_(glShadingRateSampleOrderNV, "glShadingRateSampleOrderNV");
  status_ = status_ && LOAD_(glShadingRateSampleOrderCustomNV, "glShadingRateSampleOrderCustomNV");
  SAVE_EXTENSION_("GL_NV_shading_rate_image", status_);
}

if (HAS_EXTENSION_("GL_NV_texture_barrier")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureBarrierNV, "glTextureBarrierNV");
  SAVE_EXTENSION_("GL_NV_texture_barrier", status_);
}

if (HAS_EXTENSION_("GL_NV_texture_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexImage2DMultisampleCoverageNV, "glTexImage2DMultisampleCoverageNV");
  status_ = status_ && LOAD_(glTexImage3DMultisampleCoverageNV, "glTexImage3DMultisampleCoverageNV");
  status_ = status_ && LOAD_(glTextureImage2DMultisampleNV, "glTextureImage2DMultisampleNV");
  status_ = status_ && LOAD_(glTextureImage3DMultisampleNV, "glTextureImage3DMultisampleNV");
  status_ = status_ && LOAD_(glTextureImage2DMultisampleCoverageNV, "glTextureImage2DMultisampleCoverageNV");
  status_ = status_ && LOAD_(glTextureImage3DMultisampleCoverageNV, "glTextureImage3DMultisampleCoverageNV");
  SAVE_EXTENSION_("GL_NV_texture_multisample", status_);
}

if (HAS_EXTENSION_("GL_NV_transform_feedback")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginTransformFeedbackNV, "glBeginTransformFeedbackNV");
  status_ = status_ && LOAD_(glEndTransformFeedbackNV, "glEndTransformFeedbackNV");
  status_ = status_ && LOAD_(glTransformFeedbackAttribsNV, "glTransformFeedbackAttribsNV");
  status_ = status_ && LOAD_(glBindBufferRangeNV, "glBindBufferRangeNV");
  status_ = status_ && LOAD_(glBindBufferOffsetNV, "glBindBufferOffsetNV");
  status_ = status_ && LOAD_(glBindBufferBaseNV, "glBindBufferBaseNV");
  status_ = status_ && LOAD_(glTransformFeedbackVaryingsNV, "glTransformFeedbackVaryingsNV");
  status_ = status_ && LOAD_(glActiveVaryingNV, "glActiveVaryingNV");
  status_ = status_ && LOAD_(glGetVaryingLocationNV, "glGetVaryingLocationNV");
  status_ = status_ && LOAD_(glGetActiveVaryingNV, "glGetActiveVaryingNV");
  status_ = status_ && LOAD_(glGetTransformFeedbackVaryingNV, "glGetTransformFeedbackVaryingNV");
  status_ = status_ && LOAD_(glTransformFeedbackStreamAttribsNV, "glTransformFeedbackStreamAttribsNV");
  SAVE_EXTENSION_("GL_NV_transform_feedback", status_);
}

if (HAS_EXTENSION_("GL_NV_transform_feedback2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindTransformFeedbackNV, "glBindTransformFeedbackNV");
  status_ = status_ && LOAD_(glDeleteTransformFeedbacksNV, "glDeleteTransformFeedbacksNV");
  status_ = status_ && LOAD_(glGenTransformFeedbacksNV, "glGenTransformFeedbacksNV");
  status_ = status_ && LOAD_(glIsTransformFeedbackNV, "glIsTransformFeedbackNV");
  status_ = status_ && LOAD_(glPauseTransformFeedbackNV, "glPauseTransformFeedbackNV");
  status_ = status_ && LOAD_(glResumeTransformFeedbackNV, "glResumeTransformFeedbackNV");
  status_ = status_ && LOAD_(glDrawTransformFeedbackNV, "glDrawTransformFeedbackNV");
  SAVE_EXTENSION_("GL_NV_transform_feedback2", status_);
}

if (HAS_EXTENSION_("GL_NV_vdpau_interop")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVDPAUInitNV, "glVDPAUInitNV");
  status_ = status_ && LOAD_(glVDPAUFiniNV, "glVDPAUFiniNV");
  status_ = status_ && LOAD_(glVDPAURegisterVideoSurfaceNV, "glVDPAURegisterVideoSurfaceNV");
  status_ = status_ && LOAD_(glVDPAURegisterOutputSurfaceNV, "glVDPAURegisterOutputSurfaceNV");
  status_ = status_ && LOAD_(glVDPAUIsSurfaceNV, "glVDPAUIsSurfaceNV");
  status_ = status_ && LOAD_(glVDPAUUnregisterSurfaceNV, "glVDPAUUnregisterSurfaceNV");
  status_ = status_ && LOAD_(glVDPAUGetSurfaceivNV, "glVDPAUGetSurfaceivNV");
  status_ = status_ && LOAD_(glVDPAUSurfaceAccessNV, "glVDPAUSurfaceAccessNV");
  status_ = status_ && LOAD_(glVDPAUMapSurfacesNV, "glVDPAUMapSurfacesNV");
  status_ = status_ && LOAD_(glVDPAUUnmapSurfacesNV, "glVDPAUUnmapSurfacesNV");
  SAVE_EXTENSION_("GL_NV_vdpau_interop", status_);
}

if (HAS_EXTENSION_("GL_NV_vdpau_interop2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVDPAURegisterVideoSurfaceWithPictureStructureNV, "glVDPAURegisterVideoSurfaceWithPictureStructureNV");
  SAVE_EXTENSION_("GL_NV_vdpau_interop2", status_);
}

if (HAS_EXTENSION_("GL_NV_vertex_array_range")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFlushVertexArrayRangeNV, "glFlushVertexArrayRangeNV");
  status_ = status_ && LOAD_(glVertexArrayRangeNV, "glVertexArrayRangeNV");
  SAVE_EXTENSION_("GL_NV_vertex_array_range", status_);
}

if (HAS_EXTENSION_("GL_NV_vertex_attrib_integer_64bit")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glVertexAttribL1i64NV, "glVertexAttribL1i64NV");
  status_ = status_ && LOAD_(glVertexAttribL2i64NV, "glVertexAttribL2i64NV");
  status_ = status_ && LOAD_(glVertexAttribL3i64NV, "glVertexAttribL3i64NV");
  status_ = status_ && LOAD_(glVertexAttribL4i64NV, "glVertexAttribL4i64NV");
  status_ = status_ && LOAD_(glVertexAttribL1i64vNV, "glVertexAttribL1i64vNV");
  status_ = status_ && LOAD_(glVertexAttribL2i64vNV, "glVertexAttribL2i64vNV");
  status_ = status_ && LOAD_(glVertexAttribL3i64vNV, "glVertexAttribL3i64vNV");
  status_ = status_ && LOAD_(glVertexAttribL4i64vNV, "glVertexAttribL4i64vNV");
  status_ = status_ && LOAD_(glVertexAttribL1ui64NV, "glVertexAttribL1ui64NV");
  status_ = status_ && LOAD_(glVertexAttribL2ui64NV, "glVertexAttribL2ui64NV");
  status_ = status_ && LOAD_(glVertexAttribL3ui64NV, "glVertexAttribL3ui64NV");
  status_ = status_ && LOAD_(glVertexAttribL4ui64NV, "glVertexAttribL4ui64NV");
  status_ = status_ && LOAD_(glVertexAttribL1ui64vNV, "glVertexAttribL1ui64vNV");
  status_ = status_ && LOAD_(glVertexAttribL2ui64vNV, "glVertexAttribL2ui64vNV");
  status_ = status_ && LOAD_(glVertexAttribL3ui64vNV, "glVertexAttribL3ui64vNV");
  status_ = status_ && LOAD_(glVertexAttribL4ui64vNV, "glVertexAttribL4ui64vNV");
  status_ = status_ && LOAD_(glGetVertexAttribLi64vNV, "glGetVertexAttribLi64vNV");
  status_ = status_ && LOAD_(glGetVertexAttribLui64vNV, "glGetVertexAttribLui64vNV");
  status_ = status_ && LOAD_(glVertexAttribLFormatNV, "glVertexAttribLFormatNV");
  SAVE_EXTENSION_("GL_NV_vertex_attrib_integer_64bit", status_);
}

if (HAS_EXTENSION_("GL_NV_vertex_buffer_unified_memory")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBufferAddressRangeNV, "glBufferAddressRangeNV");
  status_ = status_ && LOAD_(glVertexFormatNV, "glVertexFormatNV");
  status_ = status_ && LOAD_(glNormalFormatNV, "glNormalFormatNV");
  status_ = status_ && LOAD_(glColorFormatNV, "glColorFormatNV");
  status_ = status_ && LOAD_(glIndexFormatNV, "glIndexFormatNV");
  status_ = status_ && LOAD_(glTexCoordFormatNV, "glTexCoordFormatNV");
  status_ = status_ && LOAD_(glEdgeFlagFormatNV, "glEdgeFlagFormatNV");
  status_ = status_ && LOAD_(glSecondaryColorFormatNV, "glSecondaryColorFormatNV");
  status_ = status_ && LOAD_(glFogCoordFormatNV, "glFogCoordFormatNV");
  status_ = status_ && LOAD_(glVertexAttribFormatNV, "glVertexAttribFormatNV");
  status_ = status_ && LOAD_(glVertexAttribIFormatNV, "glVertexAttribIFormatNV");
  status_ = status_ && LOAD_(glGetIntegerui64i_vNV, "glGetIntegerui64i_vNV");
  SAVE_EXTENSION_("GL_NV_vertex_buffer_unified_memory", status_);
}

if (HAS_EXTENSION_("GL_NV_vertex_program")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glAreProgramsResidentNV, "glAreProgramsResidentNV");
  status_ = status_ && LOAD_(glBindProgramNV, "glBindProgramNV");
  status_ = status_ && LOAD_(glDeleteProgramsNV, "glDeleteProgramsNV");
  status_ = status_ && LOAD_(glExecuteProgramNV, "glExecuteProgramNV");
  status_ = status_ && LOAD_(glGenProgramsNV, "glGenProgramsNV");
  status_ = status_ && LOAD_(glGetProgramParameterdvNV, "glGetProgramParameterdvNV");
  status_ = status_ && LOAD_(glGetProgramParameterfvNV, "glGetProgramParameterfvNV");
  status_ = status_ && LOAD_(glGetProgramivNV, "glGetProgramivNV");
  status_ = status_ && LOAD_(glGetProgramStringNV, "glGetProgramStringNV");
  status_ = status_ && LOAD_(glGetTrackMatrixivNV, "glGetTrackMatrixivNV");
  status_ = status_ && LOAD_(glGetVertexAttribdvNV, "glGetVertexAttribdvNV");
  status_ = status_ && LOAD_(glGetVertexAttribfvNV, "glGetVertexAttribfvNV");
  status_ = status_ && LOAD_(glGetVertexAttribivNV, "glGetVertexAttribivNV");
  status_ = status_ && LOAD_(glGetVertexAttribPointervNV, "glGetVertexAttribPointervNV");
  status_ = status_ && LOAD_(glIsProgramNV, "glIsProgramNV");
  status_ = status_ && LOAD_(glLoadProgramNV, "glLoadProgramNV");
  status_ = status_ && LOAD_(glProgramParameter4dNV, "glProgramParameter4dNV");
  status_ = status_ && LOAD_(glProgramParameter4dvNV, "glProgramParameter4dvNV");
  status_ = status_ && LOAD_(glProgramParameter4fNV, "glProgramParameter4fNV");
  status_ = status_ && LOAD_(glProgramParameter4fvNV, "glProgramParameter4fvNV");
  status_ = status_ && LOAD_(glProgramParameters4dvNV, "glProgramParameters4dvNV");
  status_ = status_ && LOAD_(glProgramParameters4fvNV, "glProgramParameters4fvNV");
  status_ = status_ && LOAD_(glRequestResidentProgramsNV, "glRequestResidentProgramsNV");
  status_ = status_ && LOAD_(glTrackMatrixNV, "glTrackMatrixNV");
  status_ = status_ && LOAD_(glVertexAttribPointerNV, "glVertexAttribPointerNV");
  status_ = status_ && LOAD_(glVertexAttrib1dNV, "glVertexAttrib1dNV");
  status_ = status_ && LOAD_(glVertexAttrib1dvNV, "glVertexAttrib1dvNV");
  status_ = status_ && LOAD_(glVertexAttrib1fNV, "glVertexAttrib1fNV");
  status_ = status_ && LOAD_(glVertexAttrib1fvNV, "glVertexAttrib1fvNV");
  status_ = status_ && LOAD_(glVertexAttrib1sNV, "glVertexAttrib1sNV");
  status_ = status_ && LOAD_(glVertexAttrib1svNV, "glVertexAttrib1svNV");
  status_ = status_ && LOAD_(glVertexAttrib2dNV, "glVertexAttrib2dNV");
  status_ = status_ && LOAD_(glVertexAttrib2dvNV, "glVertexAttrib2dvNV");
  status_ = status_ && LOAD_(glVertexAttrib2fNV, "glVertexAttrib2fNV");
  status_ = status_ && LOAD_(glVertexAttrib2fvNV, "glVertexAttrib2fvNV");
  status_ = status_ && LOAD_(glVertexAttrib2sNV, "glVertexAttrib2sNV");
  status_ = status_ && LOAD_(glVertexAttrib2svNV, "glVertexAttrib2svNV");
  status_ = status_ && LOAD_(glVertexAttrib3dNV, "glVertexAttrib3dNV");
  status_ = status_ && LOAD_(glVertexAttrib3dvNV, "glVertexAttrib3dvNV");
  status_ = status_ && LOAD_(glVertexAttrib3fNV, "glVertexAttrib3fNV");
  status_ = status_ && LOAD_(glVertexAttrib3fvNV, "glVertexAttrib3fvNV");
  status_ = status_ && LOAD_(glVertexAttrib3sNV, "glVertexAttrib3sNV");
  status_ = status_ && LOAD_(glVertexAttrib3svNV, "glVertexAttrib3svNV");
  status_ = status_ && LOAD_(glVertexAttrib4dNV, "glVertexAttrib4dNV");
  status_ = status_ && LOAD_(glVertexAttrib4dvNV, "glVertexAttrib4dvNV");
  status_ = status_ && LOAD_(glVertexAttrib4fNV, "glVertexAttrib4fNV");
  status_ = status_ && LOAD_(glVertexAttrib4fvNV, "glVertexAttrib4fvNV");
  status_ = status_ && LOAD_(glVertexAttrib4sNV, "glVertexAttrib4sNV");
  status_ = status_ && LOAD_(glVertexAttrib4svNV, "glVertexAttrib4svNV");
  status_ = status_ && LOAD_(glVertexAttrib4ubNV, "glVertexAttrib4ubNV");
  status_ = status_ && LOAD_(glVertexAttrib4ubvNV, "glVertexAttrib4ubvNV");
  status_ = status_ && LOAD_(glVertexAttribs1dvNV, "glVertexAttribs1dvNV");
  status_ = status_ && LOAD_(glVertexAttribs1fvNV, "glVertexAttribs1fvNV");
  status_ = status_ && LOAD_(glVertexAttribs1svNV, "glVertexAttribs1svNV");
  status_ = status_ && LOAD_(glVertexAttribs2dvNV, "glVertexAttribs2dvNV");
  status_ = status_ && LOAD_(glVertexAttribs2fvNV, "glVertexAttribs2fvNV");
  status_ = status_ && LOAD_(glVertexAttribs2svNV, "glVertexAttribs2svNV");
  status_ = status_ && LOAD_(glVertexAttribs3dvNV, "glVertexAttribs3dvNV");
  status_ = status_ && LOAD_(glVertexAttribs3fvNV, "glVertexAttribs3fvNV");
  status_ = status_ && LOAD_(glVertexAttribs3svNV, "glVertexAttribs3svNV");
  status_ = status_ && LOAD_(glVertexAttribs4dvNV, "glVertexAttribs4dvNV");
  status_ = status_ && LOAD_(glVertexAttribs4fvNV, "glVertexAttribs4fvNV");
  status_ = status_ && LOAD_(glVertexAttribs4svNV, "glVertexAttribs4svNV");
  status_ = status_ && LOAD_(glVertexAttribs4ubvNV, "glVertexAttribs4ubvNV");
  SAVE_EXTENSION_("GL_NV_vertex_program", status_);
}

if (HAS_EXTENSION_("GL_NV_video_capture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginVideoCaptureNV, "glBeginVideoCaptureNV");
  status_ = status_ && LOAD_(glBindVideoCaptureStreamBufferNV, "glBindVideoCaptureStreamBufferNV");
  status_ = status_ && LOAD_(glBindVideoCaptureStreamTextureNV, "glBindVideoCaptureStreamTextureNV");
  status_ = status_ && LOAD_(glEndVideoCaptureNV, "glEndVideoCaptureNV");
  status_ = status_ && LOAD_(glGetVideoCaptureivNV, "glGetVideoCaptureivNV");
  status_ = status_ && LOAD_(glGetVideoCaptureStreamivNV, "glGetVideoCaptureStreamivNV");
  status_ = status_ && LOAD_(glGetVideoCaptureStreamfvNV, "glGetVideoCaptureStreamfvNV");
  status_ = status_ && LOAD_(glGetVideoCaptureStreamdvNV, "glGetVideoCaptureStreamdvNV");
  status_ = status_ && LOAD_(glVideoCaptureNV, "glVideoCaptureNV");
  status_ = status_ && LOAD_(glVideoCaptureStreamParameterivNV, "glVideoCaptureStreamParameterivNV");
  status_ = status_ && LOAD_(glVideoCaptureStreamParameterfvNV, "glVideoCaptureStreamParameterfvNV");
  status_ = status_ && LOAD_(glVideoCaptureStreamParameterdvNV, "glVideoCaptureStreamParameterdvNV");
  SAVE_EXTENSION_("GL_NV_video_capture", status_);
}

if (HAS_EXTENSION_("GL_NV_viewport_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glViewportArrayvNV, "glViewportArrayvNV");
  status_ = status_ && LOAD_(glViewportIndexedfNV, "glViewportIndexedfNV");
  status_ = status_ && LOAD_(glViewportIndexedfvNV, "glViewportIndexedfvNV");
  status_ = status_ && LOAD_(glScissorArrayvNV, "glScissorArrayvNV");
  status_ = status_ && LOAD_(glScissorIndexedNV, "glScissorIndexedNV");
  status_ = status_ && LOAD_(glScissorIndexedvNV, "glScissorIndexedvNV");
  status_ = status_ && LOAD_(glDepthRangeArrayfvNV, "glDepthRangeArrayfvNV");
  status_ = status_ && LOAD_(glDepthRangeIndexedfNV, "glDepthRangeIndexedfNV");
  status_ = status_ && LOAD_(glGetFloati_vNV, "glGetFloati_vNV");
  status_ = status_ && LOAD_(glEnableiNV, "glEnableiNV");
  status_ = status_ && LOAD_(glDisableiNV, "glDisableiNV");
  status_ = status_ && LOAD_(glIsEnablediNV, "glIsEnablediNV");
  SAVE_EXTENSION_("GL_NV_viewport_array", status_);
}

if (HAS_EXTENSION_("GL_NV_viewport_swizzle")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glViewportSwizzleNV, "glViewportSwizzleNV");
  SAVE_EXTENSION_("GL_NV_viewport_swizzle", status_);
}

if (HAS_EXTENSION_("GL_OES_EGL_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glEGLImageTargetTexture2DOES, "glEGLImageTargetTexture2DOES");
  status_ = status_ && LOAD_(glEGLImageTargetRenderbufferStorageOES, "glEGLImageTargetRenderbufferStorageOES");
  SAVE_EXTENSION_("GL_OES_EGL_image", status_);
}

if (HAS_EXTENSION_("GL_OES_blend_equation_separate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendEquationSeparateOES, "glBlendEquationSeparateOES");
  SAVE_EXTENSION_("GL_OES_blend_equation_separate", status_);
}

if (HAS_EXTENSION_("GL_OES_blend_func_separate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendFuncSeparateOES, "glBlendFuncSeparateOES");
  SAVE_EXTENSION_("GL_OES_blend_func_separate", status_);
}

if (HAS_EXTENSION_("GL_OES_blend_subtract")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendEquationOES, "glBlendEquationOES");
  SAVE_EXTENSION_("GL_OES_blend_subtract", status_);
}

if (HAS_EXTENSION_("GL_OES_byte_coordinates")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiTexCoord1bOES, "glMultiTexCoord1bOES");
  status_ = status_ && LOAD_(glMultiTexCoord1bvOES, "glMultiTexCoord1bvOES");
  status_ = status_ && LOAD_(glMultiTexCoord2bOES, "glMultiTexCoord2bOES");
  status_ = status_ && LOAD_(glMultiTexCoord2bvOES, "glMultiTexCoord2bvOES");
  status_ = status_ && LOAD_(glMultiTexCoord3bOES, "glMultiTexCoord3bOES");
  status_ = status_ && LOAD_(glMultiTexCoord3bvOES, "glMultiTexCoord3bvOES");
  status_ = status_ && LOAD_(glMultiTexCoord4bOES, "glMultiTexCoord4bOES");
  status_ = status_ && LOAD_(glMultiTexCoord4bvOES, "glMultiTexCoord4bvOES");
  status_ = status_ && LOAD_(glTexCoord1bOES, "glTexCoord1bOES");
  status_ = status_ && LOAD_(glTexCoord1bvOES, "glTexCoord1bvOES");
  status_ = status_ && LOAD_(glTexCoord2bOES, "glTexCoord2bOES");
  status_ = status_ && LOAD_(glTexCoord2bvOES, "glTexCoord2bvOES");
  status_ = status_ && LOAD_(glTexCoord3bOES, "glTexCoord3bOES");
  status_ = status_ && LOAD_(glTexCoord3bvOES, "glTexCoord3bvOES");
  status_ = status_ && LOAD_(glTexCoord4bOES, "glTexCoord4bOES");
  status_ = status_ && LOAD_(glTexCoord4bvOES, "glTexCoord4bvOES");
  status_ = status_ && LOAD_(glVertex2bOES, "glVertex2bOES");
  status_ = status_ && LOAD_(glVertex2bvOES, "glVertex2bvOES");
  status_ = status_ && LOAD_(glVertex3bOES, "glVertex3bOES");
  status_ = status_ && LOAD_(glVertex3bvOES, "glVertex3bvOES");
  status_ = status_ && LOAD_(glVertex4bOES, "glVertex4bOES");
  status_ = status_ && LOAD_(glVertex4bvOES, "glVertex4bvOES");
  SAVE_EXTENSION_("GL_OES_byte_coordinates", status_);
}

if (HAS_EXTENSION_("GL_OES_copy_image")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCopyImageSubDataOES, "glCopyImageSubDataOES");
  SAVE_EXTENSION_("GL_OES_copy_image", status_);
}

if (HAS_EXTENSION_("GL_OES_draw_buffers_indexed")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBlendEquationiOES, "glBlendEquationiOES");
  status_ = status_ && LOAD_(glBlendEquationSeparateiOES, "glBlendEquationSeparateiOES");
  status_ = status_ && LOAD_(glBlendFunciOES, "glBlendFunciOES");
  status_ = status_ && LOAD_(glBlendFuncSeparateiOES, "glBlendFuncSeparateiOES");
  status_ = status_ && LOAD_(glColorMaskiOES, "glColorMaskiOES");
  SAVE_EXTENSION_("GL_OES_draw_buffers_indexed", status_);
}

if (HAS_EXTENSION_("GL_OES_draw_elements_base_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawElementsBaseVertexOES, "glDrawElementsBaseVertexOES");
  status_ = status_ && LOAD_(glDrawRangeElementsBaseVertexOES, "glDrawRangeElementsBaseVertexOES");
  status_ = status_ && LOAD_(glDrawElementsInstancedBaseVertexOES, "glDrawElementsInstancedBaseVertexOES");
  SAVE_EXTENSION_("GL_OES_draw_elements_base_vertex", status_);
}

if (HAS_EXTENSION_("GL_OES_draw_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawTexsOES, "glDrawTexsOES");
  status_ = status_ && LOAD_(glDrawTexiOES, "glDrawTexiOES");
  status_ = status_ && LOAD_(glDrawTexxOES, "glDrawTexxOES");
  status_ = status_ && LOAD_(glDrawTexsvOES, "glDrawTexsvOES");
  status_ = status_ && LOAD_(glDrawTexivOES, "glDrawTexivOES");
  status_ = status_ && LOAD_(glDrawTexxvOES, "glDrawTexxvOES");
  status_ = status_ && LOAD_(glDrawTexfOES, "glDrawTexfOES");
  status_ = status_ && LOAD_(glDrawTexfvOES, "glDrawTexfvOES");
  SAVE_EXTENSION_("GL_OES_draw_texture", status_);
}

if (HAS_EXTENSION_("GL_OES_fixed_point")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glAlphaFuncxOES, "glAlphaFuncxOES");
  status_ = status_ && LOAD_(glClearColorxOES, "glClearColorxOES");
  status_ = status_ && LOAD_(glClearDepthxOES, "glClearDepthxOES");
  status_ = status_ && LOAD_(glClipPlanexOES, "glClipPlanexOES");
  status_ = status_ && LOAD_(glColor4xOES, "glColor4xOES");
  status_ = status_ && LOAD_(glDepthRangexOES, "glDepthRangexOES");
  status_ = status_ && LOAD_(glFogxOES, "glFogxOES");
  status_ = status_ && LOAD_(glFogxvOES, "glFogxvOES");
  status_ = status_ && LOAD_(glFrustumxOES, "glFrustumxOES");
  status_ = status_ && LOAD_(glGetClipPlanexOES, "glGetClipPlanexOES");
  status_ = status_ && LOAD_(glGetFixedvOES, "glGetFixedvOES");
  status_ = status_ && LOAD_(glGetTexEnvxvOES, "glGetTexEnvxvOES");
  status_ = status_ && LOAD_(glGetTexParameterxvOES, "glGetTexParameterxvOES");
  status_ = status_ && LOAD_(glLightModelxOES, "glLightModelxOES");
  status_ = status_ && LOAD_(glLightModelxvOES, "glLightModelxvOES");
  status_ = status_ && LOAD_(glLightxOES, "glLightxOES");
  status_ = status_ && LOAD_(glLightxvOES, "glLightxvOES");
  status_ = status_ && LOAD_(glLineWidthxOES, "glLineWidthxOES");
  status_ = status_ && LOAD_(glLoadMatrixxOES, "glLoadMatrixxOES");
  status_ = status_ && LOAD_(glMaterialxOES, "glMaterialxOES");
  status_ = status_ && LOAD_(glMaterialxvOES, "glMaterialxvOES");
  status_ = status_ && LOAD_(glMultMatrixxOES, "glMultMatrixxOES");
  status_ = status_ && LOAD_(glMultiTexCoord4xOES, "glMultiTexCoord4xOES");
  status_ = status_ && LOAD_(glNormal3xOES, "glNormal3xOES");
  status_ = status_ && LOAD_(glOrthoxOES, "glOrthoxOES");
  status_ = status_ && LOAD_(glPointParameterxvOES, "glPointParameterxvOES");
  status_ = status_ && LOAD_(glPointSizexOES, "glPointSizexOES");
  status_ = status_ && LOAD_(glPolygonOffsetxOES, "glPolygonOffsetxOES");
  status_ = status_ && LOAD_(glRotatexOES, "glRotatexOES");
  status_ = status_ && LOAD_(glScalexOES, "glScalexOES");
  status_ = status_ && LOAD_(glTexEnvxOES, "glTexEnvxOES");
  status_ = status_ && LOAD_(glTexEnvxvOES, "glTexEnvxvOES");
  status_ = status_ && LOAD_(glTexParameterxOES, "glTexParameterxOES");
  status_ = status_ && LOAD_(glTexParameterxvOES, "glTexParameterxvOES");
  status_ = status_ && LOAD_(glTranslatexOES, "glTranslatexOES");
  status_ = status_ && LOAD_(glGetLightxvOES, "glGetLightxvOES");
  status_ = status_ && LOAD_(glGetMaterialxvOES, "glGetMaterialxvOES");
  status_ = status_ && LOAD_(glPointParameterxOES, "glPointParameterxOES");
  status_ = status_ && LOAD_(glSampleCoveragexOES, "glSampleCoveragexOES");
  status_ = status_ && LOAD_(glAccumxOES, "glAccumxOES");
  status_ = status_ && LOAD_(glBitmapxOES, "glBitmapxOES");
  status_ = status_ && LOAD_(glBlendColorxOES, "glBlendColorxOES");
  status_ = status_ && LOAD_(glClearAccumxOES, "glClearAccumxOES");
  status_ = status_ && LOAD_(glColor3xOES, "glColor3xOES");
  status_ = status_ && LOAD_(glColor3xvOES, "glColor3xvOES");
  status_ = status_ && LOAD_(glColor4xvOES, "glColor4xvOES");
  status_ = status_ && LOAD_(glConvolutionParameterxOES, "glConvolutionParameterxOES");
  status_ = status_ && LOAD_(glConvolutionParameterxvOES, "glConvolutionParameterxvOES");
  status_ = status_ && LOAD_(glEvalCoord1xOES, "glEvalCoord1xOES");
  status_ = status_ && LOAD_(glEvalCoord1xvOES, "glEvalCoord1xvOES");
  status_ = status_ && LOAD_(glEvalCoord2xOES, "glEvalCoord2xOES");
  status_ = status_ && LOAD_(glEvalCoord2xvOES, "glEvalCoord2xvOES");
  status_ = status_ && LOAD_(glFeedbackBufferxOES, "glFeedbackBufferxOES");
  status_ = status_ && LOAD_(glGetConvolutionParameterxvOES, "glGetConvolutionParameterxvOES");
  status_ = status_ && LOAD_(glGetHistogramParameterxvOES, "glGetHistogramParameterxvOES");
  status_ = status_ && LOAD_(glGetLightxOES, "glGetLightxOES");
  status_ = status_ && LOAD_(glGetMapxvOES, "glGetMapxvOES");
  status_ = status_ && LOAD_(glGetMaterialxOES, "glGetMaterialxOES");
  status_ = status_ && LOAD_(glGetPixelMapxv, "glGetPixelMapxv");
  status_ = status_ && LOAD_(glGetTexLevelParameterxvOES, "glGetTexLevelParameterxvOES");
  status_ = status_ && LOAD_(glIndexxOES, "glIndexxOES");
  status_ = status_ && LOAD_(glIndexxvOES, "glIndexxvOES");
  status_ = status_ && LOAD_(glLoadTransposeMatrixxOES, "glLoadTransposeMatrixxOES");
  status_ = status_ && LOAD_(glMap1xOES, "glMap1xOES");
  status_ = status_ && LOAD_(glMap2xOES, "glMap2xOES");
  status_ = status_ && LOAD_(glMapGrid1xOES, "glMapGrid1xOES");
  status_ = status_ && LOAD_(glMapGrid2xOES, "glMapGrid2xOES");
  status_ = status_ && LOAD_(glMultTransposeMatrixxOES, "glMultTransposeMatrixxOES");
  status_ = status_ && LOAD_(glMultiTexCoord1xOES, "glMultiTexCoord1xOES");
  status_ = status_ && LOAD_(glMultiTexCoord1xvOES, "glMultiTexCoord1xvOES");
  status_ = status_ && LOAD_(glMultiTexCoord2xOES, "glMultiTexCoord2xOES");
  status_ = status_ && LOAD_(glMultiTexCoord2xvOES, "glMultiTexCoord2xvOES");
  status_ = status_ && LOAD_(glMultiTexCoord3xOES, "glMultiTexCoord3xOES");
  status_ = status_ && LOAD_(glMultiTexCoord3xvOES, "glMultiTexCoord3xvOES");
  status_ = status_ && LOAD_(glMultiTexCoord4xvOES, "glMultiTexCoord4xvOES");
  status_ = status_ && LOAD_(glNormal3xvOES, "glNormal3xvOES");
  status_ = status_ && LOAD_(glPassThroughxOES, "glPassThroughxOES");
  status_ = status_ && LOAD_(glPixelMapx, "glPixelMapx");
  status_ = status_ && LOAD_(glPixelStorex, "glPixelStorex");
  status_ = status_ && LOAD_(glPixelTransferxOES, "glPixelTransferxOES");
  status_ = status_ && LOAD_(glPixelZoomxOES, "glPixelZoomxOES");
  status_ = status_ && LOAD_(glPrioritizeTexturesxOES, "glPrioritizeTexturesxOES");
  status_ = status_ && LOAD_(glRasterPos2xOES, "glRasterPos2xOES");
  status_ = status_ && LOAD_(glRasterPos2xvOES, "glRasterPos2xvOES");
  status_ = status_ && LOAD_(glRasterPos3xOES, "glRasterPos3xOES");
  status_ = status_ && LOAD_(glRasterPos3xvOES, "glRasterPos3xvOES");
  status_ = status_ && LOAD_(glRasterPos4xOES, "glRasterPos4xOES");
  status_ = status_ && LOAD_(glRasterPos4xvOES, "glRasterPos4xvOES");
  status_ = status_ && LOAD_(glRectxOES, "glRectxOES");
  status_ = status_ && LOAD_(glRectxvOES, "glRectxvOES");
  status_ = status_ && LOAD_(glTexCoord1xOES, "glTexCoord1xOES");
  status_ = status_ && LOAD_(glTexCoord1xvOES, "glTexCoord1xvOES");
  status_ = status_ && LOAD_(glTexCoord2xOES, "glTexCoord2xOES");
  status_ = status_ && LOAD_(glTexCoord2xvOES, "glTexCoord2xvOES");
  status_ = status_ && LOAD_(glTexCoord3xOES, "glTexCoord3xOES");
  status_ = status_ && LOAD_(glTexCoord3xvOES, "glTexCoord3xvOES");
  status_ = status_ && LOAD_(glTexCoord4xOES, "glTexCoord4xOES");
  status_ = status_ && LOAD_(glTexCoord4xvOES, "glTexCoord4xvOES");
  status_ = status_ && LOAD_(glVertex2xOES, "glVertex2xOES");
  status_ = status_ && LOAD_(glVertex2xvOES, "glVertex2xvOES");
  status_ = status_ && LOAD_(glVertex3xOES, "glVertex3xOES");
  status_ = status_ && LOAD_(glVertex3xvOES, "glVertex3xvOES");
  status_ = status_ && LOAD_(glVertex4xOES, "glVertex4xOES");
  status_ = status_ && LOAD_(glVertex4xvOES, "glVertex4xvOES");
  SAVE_EXTENSION_("GL_OES_fixed_point", status_);
}

if (HAS_EXTENSION_("GL_OES_framebuffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glIsRenderbufferOES, "glIsRenderbufferOES");
  status_ = status_ && LOAD_(glBindRenderbufferOES, "glBindRenderbufferOES");
  status_ = status_ && LOAD_(glDeleteRenderbuffersOES, "glDeleteRenderbuffersOES");
  status_ = status_ && LOAD_(glGenRenderbuffersOES, "glGenRenderbuffersOES");
  status_ = status_ && LOAD_(glRenderbufferStorageOES, "glRenderbufferStorageOES");
  status_ = status_ && LOAD_(glGetRenderbufferParameterivOES, "glGetRenderbufferParameterivOES");
  status_ = status_ && LOAD_(glIsFramebufferOES, "glIsFramebufferOES");
  status_ = status_ && LOAD_(glBindFramebufferOES, "glBindFramebufferOES");
  status_ = status_ && LOAD_(glDeleteFramebuffersOES, "glDeleteFramebuffersOES");
  status_ = status_ && LOAD_(glGenFramebuffersOES, "glGenFramebuffersOES");
  status_ = status_ && LOAD_(glCheckFramebufferStatusOES, "glCheckFramebufferStatusOES");
  status_ = status_ && LOAD_(glFramebufferRenderbufferOES, "glFramebufferRenderbufferOES");
  status_ = status_ && LOAD_(glFramebufferTexture2DOES, "glFramebufferTexture2DOES");
  status_ = status_ && LOAD_(glGetFramebufferAttachmentParameterivOES, "glGetFramebufferAttachmentParameterivOES");
  status_ = status_ && LOAD_(glGenerateMipmapOES, "glGenerateMipmapOES");
  SAVE_EXTENSION_("GL_OES_framebuffer_object", status_);
}

if (HAS_EXTENSION_("GL_OES_geometry_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferTextureOES, "glFramebufferTextureOES");
  SAVE_EXTENSION_("GL_OES_geometry_shader", status_);
}

if (HAS_EXTENSION_("GL_OES_get_program_binary")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetProgramBinaryOES, "glGetProgramBinaryOES");
  status_ = status_ && LOAD_(glProgramBinaryOES, "glProgramBinaryOES");
  SAVE_EXTENSION_("GL_OES_get_program_binary", status_);
}

if (HAS_EXTENSION_("GL_OES_mapbuffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMapBufferOES, "glMapBufferOES");
  status_ = status_ && LOAD_(glUnmapBufferOES, "glUnmapBufferOES");
  status_ = status_ && LOAD_(glGetBufferPointervOES, "glGetBufferPointervOES");
  SAVE_EXTENSION_("GL_OES_mapbuffer", status_);
}

if (HAS_EXTENSION_("GL_OES_matrix_palette")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glCurrentPaletteMatrixOES, "glCurrentPaletteMatrixOES");
  status_ = status_ && LOAD_(glLoadPaletteFromModelViewMatrixOES, "glLoadPaletteFromModelViewMatrixOES");
  status_ = status_ && LOAD_(glMatrixIndexPointerOES, "glMatrixIndexPointerOES");
  status_ = status_ && LOAD_(glWeightPointerOES, "glWeightPointerOES");
  SAVE_EXTENSION_("GL_OES_matrix_palette", status_);
}

if (HAS_EXTENSION_("GL_OES_point_size_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPointSizePointerOES, "glPointSizePointerOES");
  SAVE_EXTENSION_("GL_OES_point_size_array", status_);
}

if (HAS_EXTENSION_("GL_OES_primitive_bounding_box")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPrimitiveBoundingBoxOES, "glPrimitiveBoundingBoxOES");
  SAVE_EXTENSION_("GL_OES_primitive_bounding_box", status_);
}

if (HAS_EXTENSION_("GL_OES_query_matrix")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glQueryMatrixxOES, "glQueryMatrixxOES");
  SAVE_EXTENSION_("GL_OES_query_matrix", status_);
}

if (HAS_EXTENSION_("GL_OES_sample_shading")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMinSampleShadingOES, "glMinSampleShadingOES");
  SAVE_EXTENSION_("GL_OES_sample_shading", status_);
}

if (HAS_EXTENSION_("GL_OES_single_precision")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glClearDepthfOES, "glClearDepthfOES");
  status_ = status_ && LOAD_(glClipPlanefOES, "glClipPlanefOES");
  status_ = status_ && LOAD_(glDepthRangefOES, "glDepthRangefOES");
  status_ = status_ && LOAD_(glFrustumfOES, "glFrustumfOES");
  status_ = status_ && LOAD_(glGetClipPlanefOES, "glGetClipPlanefOES");
  status_ = status_ && LOAD_(glOrthofOES, "glOrthofOES");
  SAVE_EXTENSION_("GL_OES_single_precision", status_);
}

if (HAS_EXTENSION_("GL_OES_tessellation_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPatchParameteriOES, "glPatchParameteriOES");
  SAVE_EXTENSION_("GL_OES_tessellation_shader", status_);
}

if (HAS_EXTENSION_("GL_OES_texture_3D")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexImage3DOES, "glTexImage3DOES");
  status_ = status_ && LOAD_(glTexSubImage3DOES, "glTexSubImage3DOES");
  status_ = status_ && LOAD_(glCopyTexSubImage3DOES, "glCopyTexSubImage3DOES");
  status_ = status_ && LOAD_(glCompressedTexImage3DOES, "glCompressedTexImage3DOES");
  status_ = status_ && LOAD_(glCompressedTexSubImage3DOES, "glCompressedTexSubImage3DOES");
  status_ = status_ && LOAD_(glFramebufferTexture3DOES, "glFramebufferTexture3DOES");
  SAVE_EXTENSION_("GL_OES_texture_3D", status_);
}

if (HAS_EXTENSION_("GL_OES_texture_border_clamp")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexParameterIivOES, "glTexParameterIivOES");
  status_ = status_ && LOAD_(glTexParameterIuivOES, "glTexParameterIuivOES");
  status_ = status_ && LOAD_(glGetTexParameterIivOES, "glGetTexParameterIivOES");
  status_ = status_ && LOAD_(glGetTexParameterIuivOES, "glGetTexParameterIuivOES");
  status_ = status_ && LOAD_(glSamplerParameterIivOES, "glSamplerParameterIivOES");
  status_ = status_ && LOAD_(glSamplerParameterIuivOES, "glSamplerParameterIuivOES");
  status_ = status_ && LOAD_(glGetSamplerParameterIivOES, "glGetSamplerParameterIivOES");
  status_ = status_ && LOAD_(glGetSamplerParameterIuivOES, "glGetSamplerParameterIuivOES");
  SAVE_EXTENSION_("GL_OES_texture_border_clamp", status_);
}

if (HAS_EXTENSION_("GL_OES_texture_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexBufferOES, "glTexBufferOES");
  status_ = status_ && LOAD_(glTexBufferRangeOES, "glTexBufferRangeOES");
  SAVE_EXTENSION_("GL_OES_texture_buffer", status_);
}

if (HAS_EXTENSION_("GL_OES_texture_cube_map")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexGenfOES, "glTexGenfOES");
  status_ = status_ && LOAD_(glTexGenfvOES, "glTexGenfvOES");
  status_ = status_ && LOAD_(glTexGeniOES, "glTexGeniOES");
  status_ = status_ && LOAD_(glTexGenivOES, "glTexGenivOES");
  status_ = status_ && LOAD_(glGetTexGenfvOES, "glGetTexGenfvOES");
  status_ = status_ && LOAD_(glGetTexGenivOES, "glGetTexGenivOES");
  SAVE_EXTENSION_("GL_OES_texture_cube_map", status_);
}

if (HAS_EXTENSION_("GL_OES_texture_storage_multisample_2d_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexStorage3DMultisampleOES, "glTexStorage3DMultisampleOES");
  SAVE_EXTENSION_("GL_OES_texture_storage_multisample_2d_array", status_);
}

if (HAS_EXTENSION_("GL_OES_texture_view")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureViewOES, "glTextureViewOES");
  SAVE_EXTENSION_("GL_OES_texture_view", status_);
}

if (HAS_EXTENSION_("GL_OES_vertex_array_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindVertexArrayOES, "glBindVertexArrayOES");
  status_ = status_ && LOAD_(glDeleteVertexArraysOES, "glDeleteVertexArraysOES");
  status_ = status_ && LOAD_(glGenVertexArraysOES, "glGenVertexArraysOES");
  status_ = status_ && LOAD_(glIsVertexArrayOES, "glIsVertexArrayOES");
  SAVE_EXTENSION_("GL_OES_vertex_array_object", status_);
}

if (HAS_EXTENSION_("GL_OES_viewport_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glViewportArrayvOES, "glViewportArrayvOES");
  status_ = status_ && LOAD_(glViewportIndexedfOES, "glViewportIndexedfOES");
  status_ = status_ && LOAD_(glViewportIndexedfvOES, "glViewportIndexedfvOES");
  status_ = status_ && LOAD_(glScissorArrayvOES, "glScissorArrayvOES");
  status_ = status_ && LOAD_(glScissorIndexedOES, "glScissorIndexedOES");
  status_ = status_ && LOAD_(glScissorIndexedvOES, "glScissorIndexedvOES");
  status_ = status_ && LOAD_(glDepthRangeArrayfvOES, "glDepthRangeArrayfvOES");
  status_ = status_ && LOAD_(glDepthRangeIndexedfOES, "glDepthRangeIndexedfOES");
  status_ = status_ && LOAD_(glGetFloati_vOES, "glGetFloati_vOES");
  SAVE_EXTENSION_("GL_OES_viewport_array", status_);
}

if (HAS_EXTENSION_("GL_OVR_multiview")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferTextureMultiviewOVR, "glFramebufferTextureMultiviewOVR");
  SAVE_EXTENSION_("GL_OVR_multiview", status_);
}

if (HAS_EXTENSION_("GL_OVR_multiview_multisampled_render_to_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferTextureMultisampleMultiviewOVR, "glFramebufferTextureMultisampleMultiviewOVR");
  SAVE_EXTENSION_("GL_OVR_multiview_multisampled_render_to_texture", status_);
}

if (HAS_EXTENSION_("GL_PGI_misc_hints")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glHintPGI, "glHintPGI");
  SAVE_EXTENSION_("GL_PGI_misc_hints", status_);
}

if (HAS_EXTENSION_("GL_QCOM_alpha_test")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glAlphaFuncQCOM, "glAlphaFuncQCOM");
  SAVE_EXTENSION_("GL_QCOM_alpha_test", status_);
}

if (HAS_EXTENSION_("GL_QCOM_driver_control")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetDriverControlsQCOM, "glGetDriverControlsQCOM");
  status_ = status_ && LOAD_(glGetDriverControlStringQCOM, "glGetDriverControlStringQCOM");
  status_ = status_ && LOAD_(glEnableDriverControlQCOM, "glEnableDriverControlQCOM");
  status_ = status_ && LOAD_(glDisableDriverControlQCOM, "glDisableDriverControlQCOM");
  SAVE_EXTENSION_("GL_QCOM_driver_control", status_);
}

if (HAS_EXTENSION_("GL_QCOM_extended_get")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glExtGetTexturesQCOM, "glExtGetTexturesQCOM");
  status_ = status_ && LOAD_(glExtGetBuffersQCOM, "glExtGetBuffersQCOM");
  status_ = status_ && LOAD_(glExtGetRenderbuffersQCOM, "glExtGetRenderbuffersQCOM");
  status_ = status_ && LOAD_(glExtGetFramebuffersQCOM, "glExtGetFramebuffersQCOM");
  status_ = status_ && LOAD_(glExtGetTexLevelParameterivQCOM, "glExtGetTexLevelParameterivQCOM");
  status_ = status_ && LOAD_(glExtTexObjectStateOverrideiQCOM, "glExtTexObjectStateOverrideiQCOM");
  status_ = status_ && LOAD_(glExtGetTexSubImageQCOM, "glExtGetTexSubImageQCOM");
  status_ = status_ && LOAD_(glExtGetBufferPointervQCOM, "glExtGetBufferPointervQCOM");
  SAVE_EXTENSION_("GL_QCOM_extended_get", status_);
}

if (HAS_EXTENSION_("GL_QCOM_extended_get2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glExtGetShadersQCOM, "glExtGetShadersQCOM");
  status_ = status_ && LOAD_(glExtGetProgramsQCOM, "glExtGetProgramsQCOM");
  status_ = status_ && LOAD_(glExtIsProgramBinaryQCOM, "glExtIsProgramBinaryQCOM");
  status_ = status_ && LOAD_(glExtGetProgramBinarySourceQCOM, "glExtGetProgramBinarySourceQCOM");
  SAVE_EXTENSION_("GL_QCOM_extended_get2", status_);
}

if (HAS_EXTENSION_("GL_QCOM_framebuffer_foveated")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferFoveationConfigQCOM, "glFramebufferFoveationConfigQCOM");
  status_ = status_ && LOAD_(glFramebufferFoveationParametersQCOM, "glFramebufferFoveationParametersQCOM");
  SAVE_EXTENSION_("GL_QCOM_framebuffer_foveated", status_);
}

if (HAS_EXTENSION_("GL_QCOM_motion_estimation")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexEstimateMotionQCOM, "glTexEstimateMotionQCOM");
  status_ = status_ && LOAD_(glTexEstimateMotionRegionsQCOM, "glTexEstimateMotionRegionsQCOM");
  SAVE_EXTENSION_("GL_QCOM_motion_estimation", status_);
}

if (HAS_EXTENSION_("GL_QCOM_frame_extrapolation")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glExtrapolateTex2DQCOM, "glExtrapolateTex2DQCOM");
  SAVE_EXTENSION_("GL_QCOM_frame_extrapolation", status_);
}

if (HAS_EXTENSION_("GL_QCOM_texture_foveated")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureFoveationParametersQCOM, "glTextureFoveationParametersQCOM");
  SAVE_EXTENSION_("GL_QCOM_texture_foveated", status_);
}

if (HAS_EXTENSION_("GL_QCOM_shader_framebuffer_fetch_noncoherent")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferFetchBarrierQCOM, "glFramebufferFetchBarrierQCOM");
  SAVE_EXTENSION_("GL_QCOM_shader_framebuffer_fetch_noncoherent", status_);
}

if (HAS_EXTENSION_("GL_QCOM_shading_rate")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glShadingRateQCOM, "glShadingRateQCOM");
  SAVE_EXTENSION_("GL_QCOM_shading_rate", status_);
}

if (HAS_EXTENSION_("GL_QCOM_tiled_rendering")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glStartTilingQCOM, "glStartTilingQCOM");
  status_ = status_ && LOAD_(glEndTilingQCOM, "glEndTilingQCOM");
  SAVE_EXTENSION_("GL_QCOM_tiled_rendering", status_);
}

if (HAS_EXTENSION_("GL_SGIS_detail_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDetailTexFuncSGIS, "glDetailTexFuncSGIS");
  status_ = status_ && LOAD_(glGetDetailTexFuncSGIS, "glGetDetailTexFuncSGIS");
  SAVE_EXTENSION_("GL_SGIS_detail_texture", status_);
}

if (HAS_EXTENSION_("GL_SGIS_fog_function")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFogFuncSGIS, "glFogFuncSGIS");
  status_ = status_ && LOAD_(glGetFogFuncSGIS, "glGetFogFuncSGIS");
  SAVE_EXTENSION_("GL_SGIS_fog_function", status_);
}

if (HAS_EXTENSION_("GL_SGIS_multisample")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSampleMaskSGIS, "glSampleMaskSGIS");
  status_ = status_ && LOAD_(glSamplePatternSGIS, "glSamplePatternSGIS");
  SAVE_EXTENSION_("GL_SGIS_multisample", status_);
}

if (HAS_EXTENSION_("GL_SGIS_pixel_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPixelTexGenParameteriSGIS, "glPixelTexGenParameteriSGIS");
  status_ = status_ && LOAD_(glPixelTexGenParameterivSGIS, "glPixelTexGenParameterivSGIS");
  status_ = status_ && LOAD_(glPixelTexGenParameterfSGIS, "glPixelTexGenParameterfSGIS");
  status_ = status_ && LOAD_(glPixelTexGenParameterfvSGIS, "glPixelTexGenParameterfvSGIS");
  status_ = status_ && LOAD_(glGetPixelTexGenParameterivSGIS, "glGetPixelTexGenParameterivSGIS");
  status_ = status_ && LOAD_(glGetPixelTexGenParameterfvSGIS, "glGetPixelTexGenParameterfvSGIS");
  SAVE_EXTENSION_("GL_SGIS_pixel_texture", status_);
}

if (HAS_EXTENSION_("GL_SGIS_point_parameters")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPointParameterfSGIS, "glPointParameterfSGIS");
  status_ = status_ && LOAD_(glPointParameterfvSGIS, "glPointParameterfvSGIS");
  SAVE_EXTENSION_("GL_SGIS_point_parameters", status_);
}

if (HAS_EXTENSION_("GL_SGIS_sharpen_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSharpenTexFuncSGIS, "glSharpenTexFuncSGIS");
  status_ = status_ && LOAD_(glGetSharpenTexFuncSGIS, "glGetSharpenTexFuncSGIS");
  SAVE_EXTENSION_("GL_SGIS_sharpen_texture", status_);
}

if (HAS_EXTENSION_("GL_SGIS_texture4D")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexImage4DSGIS, "glTexImage4DSGIS");
  status_ = status_ && LOAD_(glTexSubImage4DSGIS, "glTexSubImage4DSGIS");
  SAVE_EXTENSION_("GL_SGIS_texture4D", status_);
}

if (HAS_EXTENSION_("GL_SGIS_texture_color_mask")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureColorMaskSGIS, "glTextureColorMaskSGIS");
  SAVE_EXTENSION_("GL_SGIS_texture_color_mask", status_);
}

if (HAS_EXTENSION_("GL_SGIS_texture_filter4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTexFilterFuncSGIS, "glGetTexFilterFuncSGIS");
  status_ = status_ && LOAD_(glTexFilterFuncSGIS, "glTexFilterFuncSGIS");
  SAVE_EXTENSION_("GL_SGIS_texture_filter4", status_);
}

if (HAS_EXTENSION_("GL_SGIX_async")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glAsyncMarkerSGIX, "glAsyncMarkerSGIX");
  status_ = status_ && LOAD_(glFinishAsyncSGIX, "glFinishAsyncSGIX");
  status_ = status_ && LOAD_(glPollAsyncSGIX, "glPollAsyncSGIX");
  status_ = status_ && LOAD_(glGenAsyncMarkersSGIX, "glGenAsyncMarkersSGIX");
  status_ = status_ && LOAD_(glDeleteAsyncMarkersSGIX, "glDeleteAsyncMarkersSGIX");
  status_ = status_ && LOAD_(glIsAsyncMarkerSGIX, "glIsAsyncMarkerSGIX");
  SAVE_EXTENSION_("GL_SGIX_async", status_);
}

if (HAS_EXTENSION_("GL_SGIX_flush_raster")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFlushRasterSGIX, "glFlushRasterSGIX");
  SAVE_EXTENSION_("GL_SGIX_flush_raster", status_);
}

if (HAS_EXTENSION_("GL_SGIX_fragment_lighting")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFragmentColorMaterialSGIX, "glFragmentColorMaterialSGIX");
  status_ = status_ && LOAD_(glFragmentLightfSGIX, "glFragmentLightfSGIX");
  status_ = status_ && LOAD_(glFragmentLightfvSGIX, "glFragmentLightfvSGIX");
  status_ = status_ && LOAD_(glFragmentLightiSGIX, "glFragmentLightiSGIX");
  status_ = status_ && LOAD_(glFragmentLightivSGIX, "glFragmentLightivSGIX");
  status_ = status_ && LOAD_(glFragmentLightModelfSGIX, "glFragmentLightModelfSGIX");
  status_ = status_ && LOAD_(glFragmentLightModelfvSGIX, "glFragmentLightModelfvSGIX");
  status_ = status_ && LOAD_(glFragmentLightModeliSGIX, "glFragmentLightModeliSGIX");
  status_ = status_ && LOAD_(glFragmentLightModelivSGIX, "glFragmentLightModelivSGIX");
  status_ = status_ && LOAD_(glFragmentMaterialfSGIX, "glFragmentMaterialfSGIX");
  status_ = status_ && LOAD_(glFragmentMaterialfvSGIX, "glFragmentMaterialfvSGIX");
  status_ = status_ && LOAD_(glFragmentMaterialiSGIX, "glFragmentMaterialiSGIX");
  status_ = status_ && LOAD_(glFragmentMaterialivSGIX, "glFragmentMaterialivSGIX");
  status_ = status_ && LOAD_(glGetFragmentLightfvSGIX, "glGetFragmentLightfvSGIX");
  status_ = status_ && LOAD_(glGetFragmentLightivSGIX, "glGetFragmentLightivSGIX");
  status_ = status_ && LOAD_(glGetFragmentMaterialfvSGIX, "glGetFragmentMaterialfvSGIX");
  status_ = status_ && LOAD_(glGetFragmentMaterialivSGIX, "glGetFragmentMaterialivSGIX");
  status_ = status_ && LOAD_(glLightEnviSGIX, "glLightEnviSGIX");
  SAVE_EXTENSION_("GL_SGIX_fragment_lighting", status_);
}

if (HAS_EXTENSION_("GL_SGIX_framezoom")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFrameZoomSGIX, "glFrameZoomSGIX");
  SAVE_EXTENSION_("GL_SGIX_framezoom", status_);
}

if (HAS_EXTENSION_("GL_SGIX_igloo_interface")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glIglooInterfaceSGIX, "glIglooInterfaceSGIX");
  SAVE_EXTENSION_("GL_SGIX_igloo_interface", status_);
}

if (HAS_EXTENSION_("GL_SGIX_instruments")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetInstrumentsSGIX, "glGetInstrumentsSGIX");
  status_ = status_ && LOAD_(glInstrumentsBufferSGIX, "glInstrumentsBufferSGIX");
  status_ = status_ && LOAD_(glPollInstrumentsSGIX, "glPollInstrumentsSGIX");
  status_ = status_ && LOAD_(glReadInstrumentsSGIX, "glReadInstrumentsSGIX");
  status_ = status_ && LOAD_(glStartInstrumentsSGIX, "glStartInstrumentsSGIX");
  status_ = status_ && LOAD_(glStopInstrumentsSGIX, "glStopInstrumentsSGIX");
  SAVE_EXTENSION_("GL_SGIX_instruments", status_);
}

if (HAS_EXTENSION_("GL_SGIX_list_priority")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetListParameterfvSGIX, "glGetListParameterfvSGIX");
  status_ = status_ && LOAD_(glGetListParameterivSGIX, "glGetListParameterivSGIX");
  status_ = status_ && LOAD_(glListParameterfSGIX, "glListParameterfSGIX");
  status_ = status_ && LOAD_(glListParameterfvSGIX, "glListParameterfvSGIX");
  status_ = status_ && LOAD_(glListParameteriSGIX, "glListParameteriSGIX");
  status_ = status_ && LOAD_(glListParameterivSGIX, "glListParameterivSGIX");
  SAVE_EXTENSION_("GL_SGIX_list_priority", status_);
}

if (HAS_EXTENSION_("GL_SGIX_pixel_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glPixelTexGenSGIX, "glPixelTexGenSGIX");
  SAVE_EXTENSION_("GL_SGIX_pixel_texture", status_);
}

if (HAS_EXTENSION_("GL_SGIX_polynomial_ffd")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDeformationMap3dSGIX, "glDeformationMap3dSGIX");
  status_ = status_ && LOAD_(glDeformationMap3fSGIX, "glDeformationMap3fSGIX");
  status_ = status_ && LOAD_(glDeformSGIX, "glDeformSGIX");
  status_ = status_ && LOAD_(glLoadIdentityDeformationMapSGIX, "glLoadIdentityDeformationMapSGIX");
  SAVE_EXTENSION_("GL_SGIX_polynomial_ffd", status_);
}

if (HAS_EXTENSION_("GL_SGIX_reference_plane")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glReferencePlaneSGIX, "glReferencePlaneSGIX");
  SAVE_EXTENSION_("GL_SGIX_reference_plane", status_);
}

if (HAS_EXTENSION_("GL_SGIX_sprite")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glSpriteParameterfSGIX, "glSpriteParameterfSGIX");
  status_ = status_ && LOAD_(glSpriteParameterfvSGIX, "glSpriteParameterfvSGIX");
  status_ = status_ && LOAD_(glSpriteParameteriSGIX, "glSpriteParameteriSGIX");
  status_ = status_ && LOAD_(glSpriteParameterivSGIX, "glSpriteParameterivSGIX");
  SAVE_EXTENSION_("GL_SGIX_sprite", status_);
}

if (HAS_EXTENSION_("GL_SGIX_tag_sample_buffer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTagSampleBufferSGIX, "glTagSampleBufferSGIX");
  SAVE_EXTENSION_("GL_SGIX_tag_sample_buffer", status_);
}

if (HAS_EXTENSION_("GL_SGI_color_table")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glColorTableSGI, "glColorTableSGI");
  status_ = status_ && LOAD_(glColorTableParameterfvSGI, "glColorTableParameterfvSGI");
  status_ = status_ && LOAD_(glColorTableParameterivSGI, "glColorTableParameterivSGI");
  status_ = status_ && LOAD_(glCopyColorTableSGI, "glCopyColorTableSGI");
  status_ = status_ && LOAD_(glGetColorTableSGI, "glGetColorTableSGI");
  status_ = status_ && LOAD_(glGetColorTableParameterfvSGI, "glGetColorTableParameterfvSGI");
  status_ = status_ && LOAD_(glGetColorTableParameterivSGI, "glGetColorTableParameterivSGI");
  SAVE_EXTENSION_("GL_SGI_color_table", status_);
}

if (HAS_EXTENSION_("GL_SUNX_constant_data")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFinishTextureSUNX, "glFinishTextureSUNX");
  SAVE_EXTENSION_("GL_SUNX_constant_data", status_);
}

if (HAS_EXTENSION_("GL_SUN_global_alpha")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGlobalAlphaFactorbSUN, "glGlobalAlphaFactorbSUN");
  status_ = status_ && LOAD_(glGlobalAlphaFactorsSUN, "glGlobalAlphaFactorsSUN");
  status_ = status_ && LOAD_(glGlobalAlphaFactoriSUN, "glGlobalAlphaFactoriSUN");
  status_ = status_ && LOAD_(glGlobalAlphaFactorfSUN, "glGlobalAlphaFactorfSUN");
  status_ = status_ && LOAD_(glGlobalAlphaFactordSUN, "glGlobalAlphaFactordSUN");
  status_ = status_ && LOAD_(glGlobalAlphaFactorubSUN, "glGlobalAlphaFactorubSUN");
  status_ = status_ && LOAD_(glGlobalAlphaFactorusSUN, "glGlobalAlphaFactorusSUN");
  status_ = status_ && LOAD_(glGlobalAlphaFactoruiSUN, "glGlobalAlphaFactoruiSUN");
  SAVE_EXTENSION_("GL_SUN_global_alpha", status_);
}

if (HAS_EXTENSION_("GL_SUN_mesh_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawMeshArraysSUN, "glDrawMeshArraysSUN");
  SAVE_EXTENSION_("GL_SUN_mesh_array", status_);
}

if (HAS_EXTENSION_("GL_SUN_triangle_list")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glReplacementCodeuiSUN, "glReplacementCodeuiSUN");
  status_ = status_ && LOAD_(glReplacementCodeusSUN, "glReplacementCodeusSUN");
  status_ = status_ && LOAD_(glReplacementCodeubSUN, "glReplacementCodeubSUN");
  status_ = status_ && LOAD_(glReplacementCodeuivSUN, "glReplacementCodeuivSUN");
  status_ = status_ && LOAD_(glReplacementCodeusvSUN, "glReplacementCodeusvSUN");
  status_ = status_ && LOAD_(glReplacementCodeubvSUN, "glReplacementCodeubvSUN");
  status_ = status_ && LOAD_(glReplacementCodePointerSUN, "glReplacementCodePointerSUN");
  SAVE_EXTENSION_("GL_SUN_triangle_list", status_);
}

if (HAS_EXTENSION_("GL_SUN_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glColor4ubVertex2fSUN, "glColor4ubVertex2fSUN");
  status_ = status_ && LOAD_(glColor4ubVertex2fvSUN, "glColor4ubVertex2fvSUN");
  status_ = status_ && LOAD_(glColor4ubVertex3fSUN, "glColor4ubVertex3fSUN");
  status_ = status_ && LOAD_(glColor4ubVertex3fvSUN, "glColor4ubVertex3fvSUN");
  status_ = status_ && LOAD_(glColor3fVertex3fSUN, "glColor3fVertex3fSUN");
  status_ = status_ && LOAD_(glColor3fVertex3fvSUN, "glColor3fVertex3fvSUN");
  status_ = status_ && LOAD_(glNormal3fVertex3fSUN, "glNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glNormal3fVertex3fvSUN, "glNormal3fVertex3fvSUN");
  status_ = status_ && LOAD_(glColor4fNormal3fVertex3fSUN, "glColor4fNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glColor4fNormal3fVertex3fvSUN, "glColor4fNormal3fVertex3fvSUN");
  status_ = status_ && LOAD_(glTexCoord2fVertex3fSUN, "glTexCoord2fVertex3fSUN");
  status_ = status_ && LOAD_(glTexCoord2fVertex3fvSUN, "glTexCoord2fVertex3fvSUN");
  status_ = status_ && LOAD_(glTexCoord4fVertex4fSUN, "glTexCoord4fVertex4fSUN");
  status_ = status_ && LOAD_(glTexCoord4fVertex4fvSUN, "glTexCoord4fVertex4fvSUN");
  status_ = status_ && LOAD_(glTexCoord2fColor4ubVertex3fSUN, "glTexCoord2fColor4ubVertex3fSUN");
  status_ = status_ && LOAD_(glTexCoord2fColor4ubVertex3fvSUN, "glTexCoord2fColor4ubVertex3fvSUN");
  status_ = status_ && LOAD_(glTexCoord2fColor3fVertex3fSUN, "glTexCoord2fColor3fVertex3fSUN");
  status_ = status_ && LOAD_(glTexCoord2fColor3fVertex3fvSUN, "glTexCoord2fColor3fVertex3fvSUN");
  status_ = status_ && LOAD_(glTexCoord2fNormal3fVertex3fSUN, "glTexCoord2fNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glTexCoord2fNormal3fVertex3fvSUN, "glTexCoord2fNormal3fVertex3fvSUN");
  status_ = status_ && LOAD_(glTexCoord2fColor4fNormal3fVertex3fSUN, "glTexCoord2fColor4fNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glTexCoord2fColor4fNormal3fVertex3fvSUN, "glTexCoord2fColor4fNormal3fVertex3fvSUN");
  status_ = status_ && LOAD_(glTexCoord4fColor4fNormal3fVertex4fSUN, "glTexCoord4fColor4fNormal3fVertex4fSUN");
  status_ = status_ && LOAD_(glTexCoord4fColor4fNormal3fVertex4fvSUN, "glTexCoord4fColor4fNormal3fVertex4fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiVertex3fSUN, "glReplacementCodeuiVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiVertex3fvSUN, "glReplacementCodeuiVertex3fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiColor4ubVertex3fSUN, "glReplacementCodeuiColor4ubVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiColor4ubVertex3fvSUN, "glReplacementCodeuiColor4ubVertex3fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiColor3fVertex3fSUN, "glReplacementCodeuiColor3fVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiColor3fVertex3fvSUN, "glReplacementCodeuiColor3fVertex3fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiNormal3fVertex3fSUN, "glReplacementCodeuiNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiNormal3fVertex3fvSUN, "glReplacementCodeuiNormal3fVertex3fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiColor4fNormal3fVertex3fSUN, "glReplacementCodeuiColor4fNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiColor4fNormal3fVertex3fvSUN, "glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiTexCoord2fVertex3fSUN, "glReplacementCodeuiTexCoord2fVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiTexCoord2fVertex3fvSUN, "glReplacementCodeuiTexCoord2fVertex3fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, "glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, "glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
  status_ = status_ && LOAD_(glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
  SAVE_EXTENSION_("GL_SUN_vertex", status_);
}

if (HAS_EXTENSION_("GL_EXT_disjoint_timer_query") || HAS_EXTENSION_("GL_EXT_occlusion_query_boolean")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBeginQueryEXT, "glBeginQueryEXT");
  status_ = status_ && LOAD_(glDeleteQueriesEXT, "glDeleteQueriesEXT");
  status_ = status_ && LOAD_(glEndQueryEXT, "glEndQueryEXT");
  status_ = status_ && LOAD_(glGenQueriesEXT, "glGenQueriesEXT");
  status_ = status_ && LOAD_(glGetQueryObjectuivEXT, "glGetQueryObjectuivEXT");
  status_ = status_ && LOAD_(glGetQueryivEXT, "glGetQueryivEXT");
  status_ = status_ && LOAD_(glIsQueryEXT, "glIsQueryEXT");
  SAVE_EXTENSION_("GL_EXT_disjoint_timer_query", status_);
  SAVE_EXTENSION_("GL_EXT_occlusion_query_boolean", status_);
}

if (HAS_EXTENSION_("GL_EXT_blend_func_extended") || HAS_EXTENSION_("GL_EXT_gpu_shader4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindFragDataLocationEXT, "glBindFragDataLocationEXT");
  SAVE_EXTENSION_("GL_EXT_blend_func_extended", status_);
  SAVE_EXTENSION_("GL_EXT_gpu_shader4", status_);
}

if (HAS_EXTENSION_("GL_ARB_fragment_program") || HAS_EXTENSION_("GL_ARB_vertex_program")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glBindProgramARB, "glBindProgramARB");
  status_ = status_ && LOAD_(glDeleteProgramsARB, "glDeleteProgramsARB");
  status_ = status_ && LOAD_(glGenProgramsARB, "glGenProgramsARB");
  status_ = status_ && LOAD_(glGetProgramEnvParameterdvARB, "glGetProgramEnvParameterdvARB");
  status_ = status_ && LOAD_(glGetProgramEnvParameterfvARB, "glGetProgramEnvParameterfvARB");
  status_ = status_ && LOAD_(glGetProgramLocalParameterdvARB, "glGetProgramLocalParameterdvARB");
  status_ = status_ && LOAD_(glGetProgramLocalParameterfvARB, "glGetProgramLocalParameterfvARB");
  status_ = status_ && LOAD_(glGetProgramStringARB, "glGetProgramStringARB");
  status_ = status_ && LOAD_(glGetProgramivARB, "glGetProgramivARB");
  status_ = status_ && LOAD_(glIsProgramARB, "glIsProgramARB");
  status_ = status_ && LOAD_(glProgramEnvParameter4dARB, "glProgramEnvParameter4dARB");
  status_ = status_ && LOAD_(glProgramEnvParameter4dvARB, "glProgramEnvParameter4dvARB");
  status_ = status_ && LOAD_(glProgramEnvParameter4fARB, "glProgramEnvParameter4fARB");
  status_ = status_ && LOAD_(glProgramEnvParameter4fvARB, "glProgramEnvParameter4fvARB");
  status_ = status_ && LOAD_(glProgramLocalParameter4dARB, "glProgramLocalParameter4dARB");
  status_ = status_ && LOAD_(glProgramLocalParameter4dvARB, "glProgramLocalParameter4dvARB");
  status_ = status_ && LOAD_(glProgramLocalParameter4fARB, "glProgramLocalParameter4fARB");
  status_ = status_ && LOAD_(glProgramLocalParameter4fvARB, "glProgramLocalParameter4fvARB");
  status_ = status_ && LOAD_(glProgramStringARB, "glProgramStringARB");
  SAVE_EXTENSION_("GL_ARB_fragment_program", status_);
  SAVE_EXTENSION_("GL_ARB_vertex_program", status_);
}

if (HAS_EXTENSION_("GL_EXT_direct_state_access") || HAS_EXTENSION_("GL_EXT_draw_buffers2")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDisableIndexedEXT, "glDisableIndexedEXT");
  status_ = status_ && LOAD_(glEnableIndexedEXT, "glEnableIndexedEXT");
  status_ = status_ && LOAD_(glGetBooleanIndexedvEXT, "glGetBooleanIndexedvEXT");
  status_ = status_ && LOAD_(glGetIntegerIndexedvEXT, "glGetIntegerIndexedvEXT");
  status_ = status_ && LOAD_(glIsEnabledIndexedEXT, "glIsEnabledIndexedEXT");
  SAVE_EXTENSION_("GL_EXT_direct_state_access", status_);
  SAVE_EXTENSION_("GL_EXT_draw_buffers2", status_);
}

if (HAS_EXTENSION_("GL_ARB_vertex_program") || HAS_EXTENSION_("GL_ARB_vertex_shader")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDisableVertexAttribArrayARB, "glDisableVertexAttribArrayARB");
  status_ = status_ && LOAD_(glEnableVertexAttribArrayARB, "glEnableVertexAttribArrayARB");
  status_ = status_ && LOAD_(glGetVertexAttribPointervARB, "glGetVertexAttribPointervARB");
  status_ = status_ && LOAD_(glGetVertexAttribdvARB, "glGetVertexAttribdvARB");
  status_ = status_ && LOAD_(glGetVertexAttribfvARB, "glGetVertexAttribfvARB");
  status_ = status_ && LOAD_(glGetVertexAttribivARB, "glGetVertexAttribivARB");
  status_ = status_ && LOAD_(glVertexAttrib1dARB, "glVertexAttrib1dARB");
  status_ = status_ && LOAD_(glVertexAttrib1dvARB, "glVertexAttrib1dvARB");
  status_ = status_ && LOAD_(glVertexAttrib1fARB, "glVertexAttrib1fARB");
  status_ = status_ && LOAD_(glVertexAttrib1fvARB, "glVertexAttrib1fvARB");
  status_ = status_ && LOAD_(glVertexAttrib1sARB, "glVertexAttrib1sARB");
  status_ = status_ && LOAD_(glVertexAttrib1svARB, "glVertexAttrib1svARB");
  status_ = status_ && LOAD_(glVertexAttrib2dARB, "glVertexAttrib2dARB");
  status_ = status_ && LOAD_(glVertexAttrib2dvARB, "glVertexAttrib2dvARB");
  status_ = status_ && LOAD_(glVertexAttrib2fARB, "glVertexAttrib2fARB");
  status_ = status_ && LOAD_(glVertexAttrib2fvARB, "glVertexAttrib2fvARB");
  status_ = status_ && LOAD_(glVertexAttrib2sARB, "glVertexAttrib2sARB");
  status_ = status_ && LOAD_(glVertexAttrib2svARB, "glVertexAttrib2svARB");
  status_ = status_ && LOAD_(glVertexAttrib3dARB, "glVertexAttrib3dARB");
  status_ = status_ && LOAD_(glVertexAttrib3dvARB, "glVertexAttrib3dvARB");
  status_ = status_ && LOAD_(glVertexAttrib3fARB, "glVertexAttrib3fARB");
  status_ = status_ && LOAD_(glVertexAttrib3fvARB, "glVertexAttrib3fvARB");
  status_ = status_ && LOAD_(glVertexAttrib3sARB, "glVertexAttrib3sARB");
  status_ = status_ && LOAD_(glVertexAttrib3svARB, "glVertexAttrib3svARB");
  status_ = status_ && LOAD_(glVertexAttrib4NbvARB, "glVertexAttrib4NbvARB");
  status_ = status_ && LOAD_(glVertexAttrib4NivARB, "glVertexAttrib4NivARB");
  status_ = status_ && LOAD_(glVertexAttrib4NsvARB, "glVertexAttrib4NsvARB");
  status_ = status_ && LOAD_(glVertexAttrib4NubARB, "glVertexAttrib4NubARB");
  status_ = status_ && LOAD_(glVertexAttrib4NubvARB, "glVertexAttrib4NubvARB");
  status_ = status_ && LOAD_(glVertexAttrib4NuivARB, "glVertexAttrib4NuivARB");
  status_ = status_ && LOAD_(glVertexAttrib4NusvARB, "glVertexAttrib4NusvARB");
  status_ = status_ && LOAD_(glVertexAttrib4bvARB, "glVertexAttrib4bvARB");
  status_ = status_ && LOAD_(glVertexAttrib4dARB, "glVertexAttrib4dARB");
  status_ = status_ && LOAD_(glVertexAttrib4dvARB, "glVertexAttrib4dvARB");
  status_ = status_ && LOAD_(glVertexAttrib4fARB, "glVertexAttrib4fARB");
  status_ = status_ && LOAD_(glVertexAttrib4fvARB, "glVertexAttrib4fvARB");
  status_ = status_ && LOAD_(glVertexAttrib4ivARB, "glVertexAttrib4ivARB");
  status_ = status_ && LOAD_(glVertexAttrib4sARB, "glVertexAttrib4sARB");
  status_ = status_ && LOAD_(glVertexAttrib4svARB, "glVertexAttrib4svARB");
  status_ = status_ && LOAD_(glVertexAttrib4ubvARB, "glVertexAttrib4ubvARB");
  status_ = status_ && LOAD_(glVertexAttrib4uivARB, "glVertexAttrib4uivARB");
  status_ = status_ && LOAD_(glVertexAttrib4usvARB, "glVertexAttrib4usvARB");
  status_ = status_ && LOAD_(glVertexAttribPointerARB, "glVertexAttribPointerARB");
  SAVE_EXTENSION_("GL_ARB_vertex_program", status_);
  SAVE_EXTENSION_("GL_ARB_vertex_shader", status_);
}

if (HAS_EXTENSION_("GL_OES_draw_buffers_indexed") || HAS_EXTENSION_("GL_OES_viewport_array")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDisableiOES, "glDisableiOES");
  status_ = status_ && LOAD_(glEnableiOES, "glEnableiOES");
  status_ = status_ && LOAD_(glIsEnablediOES, "glIsEnablediOES");
  SAVE_EXTENSION_("GL_OES_draw_buffers_indexed", status_);
  SAVE_EXTENSION_("GL_OES_viewport_array", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_instanced") || HAS_EXTENSION_("GL_EXT_instanced_arrays")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glDrawArraysInstancedEXT, "glDrawArraysInstancedEXT");
  status_ = status_ && LOAD_(glDrawElementsInstancedEXT, "glDrawElementsInstancedEXT");
  SAVE_EXTENSION_("GL_EXT_draw_instanced", status_);
  SAVE_EXTENSION_("GL_EXT_instanced_arrays", status_);
}

if (HAS_EXTENSION_("GL_EXT_geometry_shader") || HAS_EXTENSION_("GL_NV_geometry_program4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferTextureEXT, "glFramebufferTextureEXT");
  SAVE_EXTENSION_("GL_EXT_geometry_shader", status_);
  SAVE_EXTENSION_("GL_NV_geometry_program4", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_array") || HAS_EXTENSION_("GL_NV_geometry_program4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glFramebufferTextureLayerEXT, "glFramebufferTextureLayerEXT");
  SAVE_EXTENSION_("GL_EXT_texture_array", status_);
  SAVE_EXTENSION_("GL_NV_geometry_program4", status_);
}

if (HAS_EXTENSION_("GL_EXT_disjoint_timer_query") || HAS_EXTENSION_("GL_EXT_timer_query")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetQueryObjecti64vEXT, "glGetQueryObjecti64vEXT");
  status_ = status_ && LOAD_(glGetQueryObjectui64vEXT, "glGetQueryObjectui64vEXT");
  SAVE_EXTENSION_("GL_EXT_disjoint_timer_query", status_);
  SAVE_EXTENSION_("GL_EXT_timer_query", status_);
}

if (HAS_EXTENSION_("GL_OES_fixed_point") || HAS_EXTENSION_("GL_OES_texture_cube_map")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTexGenxvOES, "glGetTexGenxvOES");
  status_ = status_ && LOAD_(glTexGenxOES, "glTexGenxOES");
  status_ = status_ && LOAD_(glTexGenxvOES, "glTexGenxvOES");
  SAVE_EXTENSION_("GL_OES_fixed_point", status_);
  SAVE_EXTENSION_("GL_OES_texture_cube_map", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_border_clamp") || HAS_EXTENSION_("GL_EXT_texture_integer")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetTexParameterIivEXT, "glGetTexParameterIivEXT");
  status_ = status_ && LOAD_(glGetTexParameterIuivEXT, "glGetTexParameterIuivEXT");
  status_ = status_ && LOAD_(glTexParameterIivEXT, "glTexParameterIivEXT");
  status_ = status_ && LOAD_(glTexParameterIuivEXT, "glTexParameterIuivEXT");
  SAVE_EXTENSION_("GL_EXT_texture_border_clamp", status_);
  SAVE_EXTENSION_("GL_EXT_texture_integer", status_);
}

if (HAS_EXTENSION_("GL_AMD_gpu_shader_int64") || HAS_EXTENSION_("GL_NV_gpu_shader5")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetUniformi64vNV, "glGetUniformi64vNV");
  status_ = status_ && LOAD_(glProgramUniform1i64NV, "glProgramUniform1i64NV");
  status_ = status_ && LOAD_(glProgramUniform1i64vNV, "glProgramUniform1i64vNV");
  status_ = status_ && LOAD_(glProgramUniform1ui64NV, "glProgramUniform1ui64NV");
  status_ = status_ && LOAD_(glProgramUniform1ui64vNV, "glProgramUniform1ui64vNV");
  status_ = status_ && LOAD_(glProgramUniform2i64NV, "glProgramUniform2i64NV");
  status_ = status_ && LOAD_(glProgramUniform2i64vNV, "glProgramUniform2i64vNV");
  status_ = status_ && LOAD_(glProgramUniform2ui64NV, "glProgramUniform2ui64NV");
  status_ = status_ && LOAD_(glProgramUniform2ui64vNV, "glProgramUniform2ui64vNV");
  status_ = status_ && LOAD_(glProgramUniform3i64NV, "glProgramUniform3i64NV");
  status_ = status_ && LOAD_(glProgramUniform3i64vNV, "glProgramUniform3i64vNV");
  status_ = status_ && LOAD_(glProgramUniform3ui64NV, "glProgramUniform3ui64NV");
  status_ = status_ && LOAD_(glProgramUniform3ui64vNV, "glProgramUniform3ui64vNV");
  status_ = status_ && LOAD_(glProgramUniform4i64NV, "glProgramUniform4i64NV");
  status_ = status_ && LOAD_(glProgramUniform4i64vNV, "glProgramUniform4i64vNV");
  status_ = status_ && LOAD_(glProgramUniform4ui64NV, "glProgramUniform4ui64NV");
  status_ = status_ && LOAD_(glProgramUniform4ui64vNV, "glProgramUniform4ui64vNV");
  status_ = status_ && LOAD_(glUniform1i64NV, "glUniform1i64NV");
  status_ = status_ && LOAD_(glUniform1i64vNV, "glUniform1i64vNV");
  status_ = status_ && LOAD_(glUniform1ui64NV, "glUniform1ui64NV");
  status_ = status_ && LOAD_(glUniform1ui64vNV, "glUniform1ui64vNV");
  status_ = status_ && LOAD_(glUniform2i64NV, "glUniform2i64NV");
  status_ = status_ && LOAD_(glUniform2i64vNV, "glUniform2i64vNV");
  status_ = status_ && LOAD_(glUniform2ui64NV, "glUniform2ui64NV");
  status_ = status_ && LOAD_(glUniform2ui64vNV, "glUniform2ui64vNV");
  status_ = status_ && LOAD_(glUniform3i64NV, "glUniform3i64NV");
  status_ = status_ && LOAD_(glUniform3i64vNV, "glUniform3i64vNV");
  status_ = status_ && LOAD_(glUniform3ui64NV, "glUniform3ui64NV");
  status_ = status_ && LOAD_(glUniform3ui64vNV, "glUniform3ui64vNV");
  status_ = status_ && LOAD_(glUniform4i64NV, "glUniform4i64NV");
  status_ = status_ && LOAD_(glUniform4i64vNV, "glUniform4i64vNV");
  status_ = status_ && LOAD_(glUniform4ui64NV, "glUniform4ui64NV");
  status_ = status_ && LOAD_(glUniform4ui64vNV, "glUniform4ui64vNV");
  SAVE_EXTENSION_("GL_AMD_gpu_shader_int64", status_);
  SAVE_EXTENSION_("GL_NV_gpu_shader5", status_);
}

if (HAS_EXTENSION_("GL_AMD_gpu_shader_int64") || HAS_EXTENSION_("GL_NV_shader_buffer_load")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetUniformui64vNV, "glGetUniformui64vNV");
  SAVE_EXTENSION_("GL_AMD_gpu_shader_int64", status_);
  SAVE_EXTENSION_("GL_NV_shader_buffer_load", status_);
}

if (HAS_EXTENSION_("GL_EXT_memory_object") || HAS_EXTENSION_("GL_EXT_semaphore")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetUnsignedBytevEXT, "glGetUnsignedBytevEXT");
  status_ = status_ && LOAD_(glGetUnsignedBytei_vEXT, "glGetUnsignedBytei_vEXT");
  SAVE_EXTENSION_("GL_EXT_memory_object", status_);
  SAVE_EXTENSION_("GL_EXT_semaphore", status_);
}

if (HAS_EXTENSION_("GL_EXT_gpu_shader4") || HAS_EXTENSION_("GL_NV_vertex_program4")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glGetVertexAttribIivEXT, "glGetVertexAttribIivEXT");
  status_ = status_ && LOAD_(glGetVertexAttribIuivEXT, "glGetVertexAttribIuivEXT");
  status_ = status_ && LOAD_(glVertexAttribI1iEXT, "glVertexAttribI1iEXT");
  status_ = status_ && LOAD_(glVertexAttribI1ivEXT, "glVertexAttribI1ivEXT");
  status_ = status_ && LOAD_(glVertexAttribI1uiEXT, "glVertexAttribI1uiEXT");
  status_ = status_ && LOAD_(glVertexAttribI1uivEXT, "glVertexAttribI1uivEXT");
  status_ = status_ && LOAD_(glVertexAttribI2iEXT, "glVertexAttribI2iEXT");
  status_ = status_ && LOAD_(glVertexAttribI2ivEXT, "glVertexAttribI2ivEXT");
  status_ = status_ && LOAD_(glVertexAttribI2uiEXT, "glVertexAttribI2uiEXT");
  status_ = status_ && LOAD_(glVertexAttribI2uivEXT, "glVertexAttribI2uivEXT");
  status_ = status_ && LOAD_(glVertexAttribI3iEXT, "glVertexAttribI3iEXT");
  status_ = status_ && LOAD_(glVertexAttribI3ivEXT, "glVertexAttribI3ivEXT");
  status_ = status_ && LOAD_(glVertexAttribI3uiEXT, "glVertexAttribI3uiEXT");
  status_ = status_ && LOAD_(glVertexAttribI3uivEXT, "glVertexAttribI3uivEXT");
  status_ = status_ && LOAD_(glVertexAttribI4bvEXT, "glVertexAttribI4bvEXT");
  status_ = status_ && LOAD_(glVertexAttribI4iEXT, "glVertexAttribI4iEXT");
  status_ = status_ && LOAD_(glVertexAttribI4ivEXT, "glVertexAttribI4ivEXT");
  status_ = status_ && LOAD_(glVertexAttribI4svEXT, "glVertexAttribI4svEXT");
  status_ = status_ && LOAD_(glVertexAttribI4ubvEXT, "glVertexAttribI4ubvEXT");
  status_ = status_ && LOAD_(glVertexAttribI4uiEXT, "glVertexAttribI4uiEXT");
  status_ = status_ && LOAD_(glVertexAttribI4uivEXT, "glVertexAttribI4uivEXT");
  status_ = status_ && LOAD_(glVertexAttribI4usvEXT, "glVertexAttribI4usvEXT");
  status_ = status_ && LOAD_(glVertexAttribIPointerEXT, "glVertexAttribIPointerEXT");
  SAVE_EXTENSION_("GL_EXT_gpu_shader4", status_);
  SAVE_EXTENSION_("GL_NV_vertex_program4", status_);
}

if (HAS_EXTENSION_("GL_EXT_direct_state_access") || HAS_EXTENSION_("GL_NV_path_rendering")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMatrixFrustumEXT, "glMatrixFrustumEXT");
  status_ = status_ && LOAD_(glMatrixLoadIdentityEXT, "glMatrixLoadIdentityEXT");
  status_ = status_ && LOAD_(glMatrixLoadTransposedEXT, "glMatrixLoadTransposedEXT");
  status_ = status_ && LOAD_(glMatrixLoadTransposefEXT, "glMatrixLoadTransposefEXT");
  status_ = status_ && LOAD_(glMatrixLoaddEXT, "glMatrixLoaddEXT");
  status_ = status_ && LOAD_(glMatrixLoadfEXT, "glMatrixLoadfEXT");
  status_ = status_ && LOAD_(glMatrixMultTransposedEXT, "glMatrixMultTransposedEXT");
  status_ = status_ && LOAD_(glMatrixMultTransposefEXT, "glMatrixMultTransposefEXT");
  status_ = status_ && LOAD_(glMatrixMultdEXT, "glMatrixMultdEXT");
  status_ = status_ && LOAD_(glMatrixMultfEXT, "glMatrixMultfEXT");
  status_ = status_ && LOAD_(glMatrixOrthoEXT, "glMatrixOrthoEXT");
  status_ = status_ && LOAD_(glMatrixPopEXT, "glMatrixPopEXT");
  status_ = status_ && LOAD_(glMatrixPushEXT, "glMatrixPushEXT");
  status_ = status_ && LOAD_(glMatrixRotatedEXT, "glMatrixRotatedEXT");
  status_ = status_ && LOAD_(glMatrixRotatefEXT, "glMatrixRotatefEXT");
  status_ = status_ && LOAD_(glMatrixScaledEXT, "glMatrixScaledEXT");
  status_ = status_ && LOAD_(glMatrixScalefEXT, "glMatrixScalefEXT");
  status_ = status_ && LOAD_(glMatrixTranslatedEXT, "glMatrixTranslatedEXT");
  status_ = status_ && LOAD_(glMatrixTranslatefEXT, "glMatrixTranslatefEXT");
  SAVE_EXTENSION_("GL_EXT_direct_state_access", status_);
  SAVE_EXTENSION_("GL_NV_path_rendering", status_);
}

if (HAS_EXTENSION_("GL_EXT_draw_elements_base_vertex") || HAS_EXTENSION_("GL_OES_draw_elements_base_vertex")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glMultiDrawElementsBaseVertexEXT, "glMultiDrawElementsBaseVertexEXT");
  SAVE_EXTENSION_("GL_EXT_draw_elements_base_vertex", status_);
  SAVE_EXTENSION_("GL_OES_draw_elements_base_vertex", status_);
}

if (HAS_EXTENSION_("GL_ARB_get_program_binary") || HAS_EXTENSION_("GL_ARB_separate_shader_objects")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramParameteri, "glProgramParameteri");
  SAVE_EXTENSION_("GL_ARB_get_program_binary", status_);
  SAVE_EXTENSION_("GL_ARB_separate_shader_objects", status_);
}

if (HAS_EXTENSION_("GL_EXT_geometry_shader4") || HAS_EXTENSION_("GL_EXT_separate_shader_objects")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramParameteriEXT, "glProgramParameteriEXT");
  SAVE_EXTENSION_("GL_EXT_geometry_shader4", status_);
  SAVE_EXTENSION_("GL_EXT_separate_shader_objects", status_);
}

if (HAS_EXTENSION_("GL_EXT_direct_state_access") || HAS_EXTENSION_("GL_EXT_separate_shader_objects")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glProgramUniform1fEXT, "glProgramUniform1fEXT");
  status_ = status_ && LOAD_(glProgramUniform1fvEXT, "glProgramUniform1fvEXT");
  status_ = status_ && LOAD_(glProgramUniform1iEXT, "glProgramUniform1iEXT");
  status_ = status_ && LOAD_(glProgramUniform1ivEXT, "glProgramUniform1ivEXT");
  status_ = status_ && LOAD_(glProgramUniform1uiEXT, "glProgramUniform1uiEXT");
  status_ = status_ && LOAD_(glProgramUniform1uivEXT, "glProgramUniform1uivEXT");
  status_ = status_ && LOAD_(glProgramUniform2fEXT, "glProgramUniform2fEXT");
  status_ = status_ && LOAD_(glProgramUniform2fvEXT, "glProgramUniform2fvEXT");
  status_ = status_ && LOAD_(glProgramUniform2iEXT, "glProgramUniform2iEXT");
  status_ = status_ && LOAD_(glProgramUniform2ivEXT, "glProgramUniform2ivEXT");
  status_ = status_ && LOAD_(glProgramUniform2uiEXT, "glProgramUniform2uiEXT");
  status_ = status_ && LOAD_(glProgramUniform2uivEXT, "glProgramUniform2uivEXT");
  status_ = status_ && LOAD_(glProgramUniform3fEXT, "glProgramUniform3fEXT");
  status_ = status_ && LOAD_(glProgramUniform3fvEXT, "glProgramUniform3fvEXT");
  status_ = status_ && LOAD_(glProgramUniform3iEXT, "glProgramUniform3iEXT");
  status_ = status_ && LOAD_(glProgramUniform3ivEXT, "glProgramUniform3ivEXT");
  status_ = status_ && LOAD_(glProgramUniform3uiEXT, "glProgramUniform3uiEXT");
  status_ = status_ && LOAD_(glProgramUniform3uivEXT, "glProgramUniform3uivEXT");
  status_ = status_ && LOAD_(glProgramUniform4fEXT, "glProgramUniform4fEXT");
  status_ = status_ && LOAD_(glProgramUniform4fvEXT, "glProgramUniform4fvEXT");
  status_ = status_ && LOAD_(glProgramUniform4iEXT, "glProgramUniform4iEXT");
  status_ = status_ && LOAD_(glProgramUniform4ivEXT, "glProgramUniform4ivEXT");
  status_ = status_ && LOAD_(glProgramUniform4uiEXT, "glProgramUniform4uiEXT");
  status_ = status_ && LOAD_(glProgramUniform4uivEXT, "glProgramUniform4uivEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix2fvEXT, "glProgramUniformMatrix2fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x3fvEXT, "glProgramUniformMatrix2x3fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix2x4fvEXT, "glProgramUniformMatrix2x4fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix3fvEXT, "glProgramUniformMatrix3fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x2fvEXT, "glProgramUniformMatrix3x2fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix3x4fvEXT, "glProgramUniformMatrix3x4fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix4fvEXT, "glProgramUniformMatrix4fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x2fvEXT, "glProgramUniformMatrix4x2fvEXT");
  status_ = status_ && LOAD_(glProgramUniformMatrix4x3fvEXT, "glProgramUniformMatrix4x3fvEXT");
  SAVE_EXTENSION_("GL_EXT_direct_state_access", status_);
  SAVE_EXTENSION_("GL_EXT_separate_shader_objects", status_);
}

if (HAS_EXTENSION_("GL_EXT_raster_multisample") || HAS_EXTENSION_("GL_NV_framebuffer_mixed_samples")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRasterSamplesEXT, "glRasterSamplesEXT");
  SAVE_EXTENSION_("GL_EXT_raster_multisample", status_);
  SAVE_EXTENSION_("GL_NV_framebuffer_mixed_samples", status_);
}

if (HAS_EXTENSION_("GL_EXT_framebuffer_multisample") || HAS_EXTENSION_("GL_EXT_multisampled_render_to_texture")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glRenderbufferStorageMultisampleEXT, "glRenderbufferStorageMultisampleEXT");
  SAVE_EXTENSION_("GL_EXT_framebuffer_multisample", status_);
  SAVE_EXTENSION_("GL_EXT_multisampled_render_to_texture", status_);
}

if (HAS_EXTENSION_("GL_EXT_texture_buffer") || HAS_EXTENSION_("GL_EXT_texture_buffer_object")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTexBufferEXT, "glTexBufferEXT");
  SAVE_EXTENSION_("GL_EXT_texture_buffer", status_);
  SAVE_EXTENSION_("GL_EXT_texture_buffer_object", status_);
}

if (HAS_EXTENSION_("GL_EXT_direct_state_access") || HAS_EXTENSION_("GL_EXT_texture_storage")) {
  int status_ = 1;
  status_ = status_ && LOAD_(glTextureStorage1DEXT, "glTextureStorage1DEXT");
  status_ = status_ && LOAD_(glTextureStorage2DEXT, "glTextureStorage2DEXT");
  status_ = status_ && LOAD_(glTextureStorage3DEXT, "glTextureStorage3DEXT");
  SAVE_EXTENSION_("GL_EXT_direct_state_access", status_);
  SAVE_EXTENSION_("GL_EXT_texture_storage", status_);
}
