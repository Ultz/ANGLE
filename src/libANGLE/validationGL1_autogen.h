// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and wgl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL1_autogen.h:
//   Validation functions for the OpenGL 1.0 entry points.

#ifndef LIBANGLE_VALIDATION_GL1_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL1_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateAccum(Context *context, GLenum op, GLfloat value);
bool ValidateBegin(Context *context, GLenum mode);
bool ValidateBitmap(Context *context,
                    GLsizei width,
                    GLsizei height,
                    GLfloat xorig,
                    GLfloat yorig,
                    GLfloat xmove,
                    GLfloat ymove,
                    const GLubyte *bitmap);
bool ValidateCallList(Context *context, GLuint list);
bool ValidateCallLists(Context *context, GLsizei n, GLenum type, const void *lists);
bool ValidateClearAccum(Context *context, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
bool ValidateClearDepth(Context *context, GLdouble depth);
bool ValidateClearIndex(Context *context, GLfloat c);
bool ValidateClipPlane(Context *context, GLenum plane, const GLdouble *equation);
bool ValidateColor3b(Context *context, GLbyte red, GLbyte green, GLbyte blue);
bool ValidateColor3bv(Context *context, const GLbyte *v);
bool ValidateColor3d(Context *context, GLdouble red, GLdouble green, GLdouble blue);
bool ValidateColor3dv(Context *context, const GLdouble *v);
bool ValidateColor3f(Context *context, GLfloat red, GLfloat green, GLfloat blue);
bool ValidateColor3fv(Context *context, const GLfloat *v);
bool ValidateColor3i(Context *context, GLint red, GLint green, GLint blue);
bool ValidateColor3iv(Context *context, const GLint *v);
bool ValidateColor3s(Context *context, GLshort red, GLshort green, GLshort blue);
bool ValidateColor3sv(Context *context, const GLshort *v);
bool ValidateColor3ub(Context *context, GLubyte red, GLubyte green, GLubyte blue);
bool ValidateColor3ubv(Context *context, const GLubyte *v);
bool ValidateColor3ui(Context *context, GLuint red, GLuint green, GLuint blue);
bool ValidateColor3uiv(Context *context, const GLuint *v);
bool ValidateColor3us(Context *context, GLushort red, GLushort green, GLushort blue);
bool ValidateColor3usv(Context *context, const GLushort *v);
bool ValidateColor4b(Context *context, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
bool ValidateColor4bv(Context *context, const GLbyte *v);
bool ValidateColor4d(Context *context, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
bool ValidateColor4dv(Context *context, const GLdouble *v);
bool ValidateColor4fv(Context *context, const GLfloat *v);
bool ValidateColor4i(Context *context, GLint red, GLint green, GLint blue, GLint alpha);
bool ValidateColor4iv(Context *context, const GLint *v);
bool ValidateColor4s(Context *context, GLshort red, GLshort green, GLshort blue, GLshort alpha);
bool ValidateColor4sv(Context *context, const GLshort *v);
bool ValidateColor4ubv(Context *context, const GLubyte *v);
bool ValidateColor4ui(Context *context, GLuint red, GLuint green, GLuint blue, GLuint alpha);
bool ValidateColor4uiv(Context *context, const GLuint *v);
bool ValidateColor4us(Context *context,
                      GLushort red,
                      GLushort green,
                      GLushort blue,
                      GLushort alpha);
bool ValidateColor4usv(Context *context, const GLushort *v);
bool ValidateColorMaterial(Context *context, GLenum face, GLenum mode);
bool ValidateCopyPixels(Context *context,
                        GLint x,
                        GLint y,
                        GLsizei width,
                        GLsizei height,
                        GLenum type);
bool ValidateDeleteLists(Context *context, GLuint list, GLsizei range);
bool ValidateDepthRange(Context *context, GLdouble n, GLdouble f);
bool ValidateDrawBuffer(Context *context, GLenum buf);
bool ValidateDrawPixels(Context *context,
                        GLsizei width,
                        GLsizei height,
                        GLenum format,
                        GLenum type,
                        const void *pixels);
bool ValidateEdgeFlag(Context *context, GLboolean flag);
bool ValidateEdgeFlagv(Context *context, const GLboolean *flag);
bool ValidateEnd(Context *context);
bool ValidateEndList(Context *context);
bool ValidateEvalCoord1d(Context *context, GLdouble u);
bool ValidateEvalCoord1dv(Context *context, const GLdouble *u);
bool ValidateEvalCoord1f(Context *context, GLfloat u);
bool ValidateEvalCoord1fv(Context *context, const GLfloat *u);
bool ValidateEvalCoord2d(Context *context, GLdouble u, GLdouble v);
bool ValidateEvalCoord2dv(Context *context, const GLdouble *u);
bool ValidateEvalCoord2f(Context *context, GLfloat u, GLfloat v);
bool ValidateEvalCoord2fv(Context *context, const GLfloat *u);
bool ValidateEvalMesh1(Context *context, GLenum mode, GLint i1, GLint i2);
bool ValidateEvalMesh2(Context *context, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
bool ValidateEvalPoint1(Context *context, GLint i);
bool ValidateEvalPoint2(Context *context, GLint i, GLint j);
bool ValidateFeedbackBuffer(Context *context, GLsizei size, GLenum type, GLfloat *buffer);
bool ValidateFogi(Context *context, GLenum pname, GLint param);
bool ValidateFogiv(Context *context, GLenum pname, const GLint *params);
bool ValidateFrustum(Context *context,
                     GLdouble left,
                     GLdouble right,
                     GLdouble bottom,
                     GLdouble top,
                     GLdouble zNear,
                     GLdouble zFar);
bool ValidateGenLists(Context *context, GLsizei range);
bool ValidateGetClipPlane(Context *context, GLenum plane, GLdouble *equation);
bool ValidateGetDoublev(Context *context, GLenum pname, GLdouble *data);
bool ValidateGetLightiv(Context *context, GLenum light, GLenum pname, GLint *params);
bool ValidateGetMapdv(Context *context, GLenum target, GLenum query, GLdouble *v);
bool ValidateGetMapfv(Context *context, GLenum target, GLenum query, GLfloat *v);
bool ValidateGetMapiv(Context *context, GLenum target, GLenum query, GLint *v);
bool ValidateGetMaterialiv(Context *context, GLenum face, GLenum pname, GLint *params);
bool ValidateGetPixelMapfv(Context *context, GLenum map, GLfloat *values);
bool ValidateGetPixelMapuiv(Context *context, GLenum map, GLuint *values);
bool ValidateGetPixelMapusv(Context *context, GLenum map, GLushort *values);
bool ValidateGetPolygonStipple(Context *context, GLubyte *mask);
bool ValidateGetTexGendv(Context *context, GLenum coord, GLenum pname, GLdouble *params);
bool ValidateGetTexGenfv(Context *context, GLenum coord, GLenum pname, GLfloat *params);
bool ValidateGetTexGeniv(Context *context, GLenum coord, GLenum pname, GLint *params);
bool ValidateGetTexImage(Context *context,
                         TextureTarget targetPacked,
                         GLint level,
                         GLenum format,
                         GLenum type,
                         void *pixels);
bool ValidateIndexMask(Context *context, GLuint mask);
bool ValidateIndexd(Context *context, GLdouble c);
bool ValidateIndexdv(Context *context, const GLdouble *c);
bool ValidateIndexf(Context *context, GLfloat c);
bool ValidateIndexfv(Context *context, const GLfloat *c);
bool ValidateIndexi(Context *context, GLint c);
bool ValidateIndexiv(Context *context, const GLint *c);
bool ValidateIndexs(Context *context, GLshort c);
bool ValidateIndexsv(Context *context, const GLshort *c);
bool ValidateInitNames(Context *context);
bool ValidateIsList(Context *context, GLuint list);
bool ValidateLightModeli(Context *context, GLenum pname, GLint param);
bool ValidateLightModeliv(Context *context, GLenum pname, const GLint *params);
bool ValidateLighti(Context *context, GLenum light, GLenum pname, GLint param);
bool ValidateLightiv(Context *context, GLenum light, GLenum pname, const GLint *params);
bool ValidateLineStipple(Context *context, GLint factor, GLushort pattern);
bool ValidateListBase(Context *context, GLuint base);
bool ValidateLoadMatrixd(Context *context, const GLdouble *m);
bool ValidateLoadName(Context *context, GLuint name);
bool ValidateMap1d(Context *context,
                   GLenum target,
                   GLdouble u1,
                   GLdouble u2,
                   GLint stride,
                   GLint order,
                   const GLdouble *points);
bool ValidateMap1f(Context *context,
                   GLenum target,
                   GLfloat u1,
                   GLfloat u2,
                   GLint stride,
                   GLint order,
                   const GLfloat *points);
bool ValidateMap2d(Context *context,
                   GLenum target,
                   GLdouble u1,
                   GLdouble u2,
                   GLint ustride,
                   GLint uorder,
                   GLdouble v1,
                   GLdouble v2,
                   GLint vstride,
                   GLint vorder,
                   const GLdouble *points);
bool ValidateMap2f(Context *context,
                   GLenum target,
                   GLfloat u1,
                   GLfloat u2,
                   GLint ustride,
                   GLint uorder,
                   GLfloat v1,
                   GLfloat v2,
                   GLint vstride,
                   GLint vorder,
                   const GLfloat *points);
bool ValidateMapGrid1d(Context *context, GLint un, GLdouble u1, GLdouble u2);
bool ValidateMapGrid1f(Context *context, GLint un, GLfloat u1, GLfloat u2);
bool ValidateMapGrid2d(Context *context,
                       GLint un,
                       GLdouble u1,
                       GLdouble u2,
                       GLint vn,
                       GLdouble v1,
                       GLdouble v2);
bool ValidateMapGrid2f(Context *context,
                       GLint un,
                       GLfloat u1,
                       GLfloat u2,
                       GLint vn,
                       GLfloat v1,
                       GLfloat v2);
bool ValidateMateriali(Context *context, GLenum face, GLenum pname, GLint param);
bool ValidateMaterialiv(Context *context, GLenum face, GLenum pname, const GLint *params);
bool ValidateMultMatrixd(Context *context, const GLdouble *m);
bool ValidateNewList(Context *context, GLuint list, GLenum mode);
bool ValidateNormal3b(Context *context, GLbyte nx, GLbyte ny, GLbyte nz);
bool ValidateNormal3bv(Context *context, const GLbyte *v);
bool ValidateNormal3d(Context *context, GLdouble nx, GLdouble ny, GLdouble nz);
bool ValidateNormal3dv(Context *context, const GLdouble *v);
bool ValidateNormal3fv(Context *context, const GLfloat *v);
bool ValidateNormal3i(Context *context, GLint nx, GLint ny, GLint nz);
bool ValidateNormal3iv(Context *context, const GLint *v);
bool ValidateNormal3s(Context *context, GLshort nx, GLshort ny, GLshort nz);
bool ValidateNormal3sv(Context *context, const GLshort *v);
bool ValidateOrtho(Context *context,
                   GLdouble left,
                   GLdouble right,
                   GLdouble bottom,
                   GLdouble top,
                   GLdouble zNear,
                   GLdouble zFar);
bool ValidatePassThrough(Context *context, GLfloat token);
bool ValidatePixelMapfv(Context *context, GLenum map, GLsizei mapsize, const GLfloat *values);
bool ValidatePixelMapuiv(Context *context, GLenum map, GLsizei mapsize, const GLuint *values);
bool ValidatePixelMapusv(Context *context, GLenum map, GLsizei mapsize, const GLushort *values);
bool ValidatePixelStoref(Context *context, GLenum pname, GLfloat param);
bool ValidatePixelTransferf(Context *context, GLenum pname, GLfloat param);
bool ValidatePixelTransferi(Context *context, GLenum pname, GLint param);
bool ValidatePixelZoom(Context *context, GLfloat xfactor, GLfloat yfactor);
bool ValidatePolygonMode(Context *context, GLenum face, GLenum mode);
bool ValidatePolygonStipple(Context *context, const GLubyte *mask);
bool ValidatePopAttrib(Context *context);
bool ValidatePopName(Context *context);
bool ValidatePushAttrib(Context *context, GLbitfield mask);
bool ValidatePushName(Context *context, GLuint name);
bool ValidateRasterPos2d(Context *context, GLdouble x, GLdouble y);
bool ValidateRasterPos2dv(Context *context, const GLdouble *v);
bool ValidateRasterPos2f(Context *context, GLfloat x, GLfloat y);
bool ValidateRasterPos2fv(Context *context, const GLfloat *v);
bool ValidateRasterPos2i(Context *context, GLint x, GLint y);
bool ValidateRasterPos2iv(Context *context, const GLint *v);
bool ValidateRasterPos2s(Context *context, GLshort x, GLshort y);
bool ValidateRasterPos2sv(Context *context, const GLshort *v);
bool ValidateRasterPos3d(Context *context, GLdouble x, GLdouble y, GLdouble z);
bool ValidateRasterPos3dv(Context *context, const GLdouble *v);
bool ValidateRasterPos3f(Context *context, GLfloat x, GLfloat y, GLfloat z);
bool ValidateRasterPos3fv(Context *context, const GLfloat *v);
bool ValidateRasterPos3i(Context *context, GLint x, GLint y, GLint z);
bool ValidateRasterPos3iv(Context *context, const GLint *v);
bool ValidateRasterPos3s(Context *context, GLshort x, GLshort y, GLshort z);
bool ValidateRasterPos3sv(Context *context, const GLshort *v);
bool ValidateRasterPos4d(Context *context, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
bool ValidateRasterPos4dv(Context *context, const GLdouble *v);
bool ValidateRasterPos4f(Context *context, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
bool ValidateRasterPos4fv(Context *context, const GLfloat *v);
bool ValidateRasterPos4i(Context *context, GLint x, GLint y, GLint z, GLint w);
bool ValidateRasterPos4iv(Context *context, const GLint *v);
bool ValidateRasterPos4s(Context *context, GLshort x, GLshort y, GLshort z, GLshort w);
bool ValidateRasterPos4sv(Context *context, const GLshort *v);
bool ValidateRectd(Context *context, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
bool ValidateRectdv(Context *context, const GLdouble *v1, const GLdouble *v2);
bool ValidateRectf(Context *context, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
bool ValidateRectfv(Context *context, const GLfloat *v1, const GLfloat *v2);
bool ValidateRecti(Context *context, GLint x1, GLint y1, GLint x2, GLint y2);
bool ValidateRectiv(Context *context, const GLint *v1, const GLint *v2);
bool ValidateRects(Context *context, GLshort x1, GLshort y1, GLshort x2, GLshort y2);
bool ValidateRectsv(Context *context, const GLshort *v1, const GLshort *v2);
bool ValidateRenderMode(Context *context, GLenum mode);
bool ValidateRotated(Context *context, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
bool ValidateScaled(Context *context, GLdouble x, GLdouble y, GLdouble z);
bool ValidateSelectBuffer(Context *context, GLsizei size, GLuint *buffer);
bool ValidateTexCoord1d(Context *context, GLdouble s);
bool ValidateTexCoord1dv(Context *context, const GLdouble *v);
bool ValidateTexCoord1f(Context *context, GLfloat s);
bool ValidateTexCoord1fv(Context *context, const GLfloat *v);
bool ValidateTexCoord1i(Context *context, GLint s);
bool ValidateTexCoord1iv(Context *context, const GLint *v);
bool ValidateTexCoord1s(Context *context, GLshort s);
bool ValidateTexCoord1sv(Context *context, const GLshort *v);
bool ValidateTexCoord2d(Context *context, GLdouble s, GLdouble t);
bool ValidateTexCoord2dv(Context *context, const GLdouble *v);
bool ValidateTexCoord2f(Context *context, GLfloat s, GLfloat t);
bool ValidateTexCoord2fv(Context *context, const GLfloat *v);
bool ValidateTexCoord2i(Context *context, GLint s, GLint t);
bool ValidateTexCoord2iv(Context *context, const GLint *v);
bool ValidateTexCoord2s(Context *context, GLshort s, GLshort t);
bool ValidateTexCoord2sv(Context *context, const GLshort *v);
bool ValidateTexCoord3d(Context *context, GLdouble s, GLdouble t, GLdouble r);
bool ValidateTexCoord3dv(Context *context, const GLdouble *v);
bool ValidateTexCoord3f(Context *context, GLfloat s, GLfloat t, GLfloat r);
bool ValidateTexCoord3fv(Context *context, const GLfloat *v);
bool ValidateTexCoord3i(Context *context, GLint s, GLint t, GLint r);
bool ValidateTexCoord3iv(Context *context, const GLint *v);
bool ValidateTexCoord3s(Context *context, GLshort s, GLshort t, GLshort r);
bool ValidateTexCoord3sv(Context *context, const GLshort *v);
bool ValidateTexCoord4d(Context *context, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
bool ValidateTexCoord4dv(Context *context, const GLdouble *v);
bool ValidateTexCoord4f(Context *context, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
bool ValidateTexCoord4fv(Context *context, const GLfloat *v);
bool ValidateTexCoord4i(Context *context, GLint s, GLint t, GLint r, GLint q);
bool ValidateTexCoord4iv(Context *context, const GLint *v);
bool ValidateTexCoord4s(Context *context, GLshort s, GLshort t, GLshort r, GLshort q);
bool ValidateTexCoord4sv(Context *context, const GLshort *v);
bool ValidateTexGend(Context *context, GLenum coord, GLenum pname, GLdouble param);
bool ValidateTexGendv(Context *context, GLenum coord, GLenum pname, const GLdouble *params);
bool ValidateTexGenf(Context *context, GLenum coord, GLenum pname, GLfloat param);
bool ValidateTexGenfv(Context *context, GLenum coord, GLenum pname, const GLfloat *params);
bool ValidateTexGeni(Context *context, GLenum coord, GLenum pname, GLint param);
bool ValidateTexGeniv(Context *context, GLenum coord, GLenum pname, const GLint *params);
bool ValidateTexImage1D(Context *context,
                        GLenum target,
                        GLint level,
                        GLint internalformat,
                        GLsizei width,
                        GLint border,
                        GLenum format,
                        GLenum type,
                        const void *pixels);
bool ValidateTranslated(Context *context, GLdouble x, GLdouble y, GLdouble z);
bool ValidateVertex2d(Context *context, GLdouble x, GLdouble y);
bool ValidateVertex2dv(Context *context, const GLdouble *v);
bool ValidateVertex2f(Context *context, GLfloat x, GLfloat y);
bool ValidateVertex2fv(Context *context, const GLfloat *v);
bool ValidateVertex2i(Context *context, GLint x, GLint y);
bool ValidateVertex2iv(Context *context, const GLint *v);
bool ValidateVertex2s(Context *context, GLshort x, GLshort y);
bool ValidateVertex2sv(Context *context, const GLshort *v);
bool ValidateVertex3d(Context *context, GLdouble x, GLdouble y, GLdouble z);
bool ValidateVertex3dv(Context *context, const GLdouble *v);
bool ValidateVertex3f(Context *context, GLfloat x, GLfloat y, GLfloat z);
bool ValidateVertex3fv(Context *context, const GLfloat *v);
bool ValidateVertex3i(Context *context, GLint x, GLint y, GLint z);
bool ValidateVertex3iv(Context *context, const GLint *v);
bool ValidateVertex3s(Context *context, GLshort x, GLshort y, GLshort z);
bool ValidateVertex3sv(Context *context, const GLshort *v);
bool ValidateVertex4d(Context *context, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
bool ValidateVertex4dv(Context *context, const GLdouble *v);
bool ValidateVertex4f(Context *context, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
bool ValidateVertex4fv(Context *context, const GLfloat *v);
bool ValidateVertex4i(Context *context, GLint x, GLint y, GLint z, GLint w);
bool ValidateVertex4iv(Context *context, const GLint *v);
bool ValidateVertex4s(Context *context, GLshort x, GLshort y, GLshort z, GLshort w);
bool ValidateVertex4sv(Context *context, const GLshort *v);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL1_AUTOGEN_H_
