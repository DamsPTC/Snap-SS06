#version 300 es
//#include <required.glsl> // [HACK 4/6/2023] See SCC shader_merger.cpp
#define STD_DISABLE_VERTEX_NORMAL 1
#define STD_DISABLE_VERTEX_TANGENT 1
#define STD_DISABLE_VERTEX_TEXTURE1 1
#define sc_StereoRendering_Disabled 0
#define sc_StereoRendering_InstancedClipped 1
#define sc_StereoRendering_Multiview 2
#ifdef VERTEX_SHADER
#define scOutPos(clipPosition) gl_Position=clipPosition
#define MAIN main
#endif
#ifdef SC_ENABLE_INSTANCED_RENDERING
#ifndef sc_EnableInstancing
#define sc_EnableInstancing 1
#endif
#endif
#define mod(x,y) (x-y*floor((x+1e-6)/y))
#if __VERSION__<300
#define isinf(x) (x!=0.0&&x*2.0==x ? true : false)
#define isnan(x) (x>0.0||x<0.0||x==0.0 ? false : true)
#define inverse(M) M
#endif
#ifdef sc_EnableStereoClipDistance
#if defined(GL_APPLE_clip_distance)
#extension GL_APPLE_clip_distance : require
#elif defined(GL_EXT_clip_cull_distance)
#extension GL_EXT_clip_cull_distance : require
#else
#error Clip distance is requested but not supported by this device.
#endif
#endif
#ifdef sc_EnableMultiviewStereoRendering
#define sc_StereoRenderingMode sc_StereoRendering_Multiview
#extension GL_OVR_multiview2 : require
#ifdef VERTEX_SHADER
#ifdef sc_EnableInstancingFallback
#define sc_GlobalInstanceID (sc_FallbackInstanceID*2+gl_InstanceID)
#else
#define sc_GlobalInstanceID gl_InstanceID
#endif
#define sc_LocalInstanceID sc_GlobalInstanceID
#define sc_StereoViewID int(gl_ViewID_OVR)
#endif
#elif defined(sc_EnableInstancedClippedStereoRendering)
#ifndef sc_EnableInstancing
#error Instanced-clipped stereo rendering requires enabled instancing.
#endif
#ifndef sc_EnableStereoClipDistance
#define sc_StereoRendering_IsClipDistanceEnabled 0
#else
#define sc_StereoRendering_IsClipDistanceEnabled 1
#endif
#define sc_StereoRenderingMode sc_StereoRendering_InstancedClipped
#define sc_NumStereoClipPlanes 1
#ifdef VERTEX_SHADER
#ifdef sc_EnableInstancingFallback
#define sc_GlobalInstanceID (sc_FallbackInstanceID*2+gl_InstanceID)
#else
#define sc_GlobalInstanceID gl_InstanceID
#endif
#define sc_LocalInstanceID (sc_GlobalInstanceID/2)
#define sc_StereoViewID (sc_GlobalInstanceID%2)
#endif
#else
#define sc_StereoRenderingMode sc_StereoRendering_Disabled
#endif
#if defined(sc_EnableInstancing)&&defined(VERTEX_SHADER)
#ifdef GL_ARB_draw_instanced
#extension GL_ARB_draw_instanced : require
#define gl_InstanceID gl_InstanceIDARB
#endif
#ifdef GL_EXT_draw_instanced
#extension GL_EXT_draw_instanced : require
#define gl_InstanceID gl_InstanceIDEXT
#endif
#ifndef sc_InstanceID
#define sc_InstanceID gl_InstanceID
#endif
#ifndef sc_GlobalInstanceID
#ifdef sc_EnableInstancingFallback
#define sc_GlobalInstanceID (sc_FallbackInstanceID)
#define sc_LocalInstanceID (sc_FallbackInstanceID)
#else
#define sc_GlobalInstanceID gl_InstanceID
#define sc_LocalInstanceID gl_InstanceID
#endif
#endif
#endif
#ifndef GL_ES
#extension GL_EXT_gpu_shader4 : enable
#extension GL_ARB_shader_texture_lod : enable
#define precision
#define lowp
#define mediump
#define highp
#define sc_FragmentPrecision
#endif
#ifdef GL_ES
#ifdef sc_FramebufferFetch
#if defined(GL_EXT_shader_framebuffer_fetch)
#extension GL_EXT_shader_framebuffer_fetch : require
#elif defined(GL_ARM_shader_framebuffer_fetch)
#extension GL_ARM_shader_framebuffer_fetch : require
#else
#error Framebuffer fetch is requested but not supported by this device.
#endif
#endif
#ifdef GL_FRAGMENT_PRECISION_HIGH
#define sc_FragmentPrecision highp
#else
#define sc_FragmentPrecision mediump
#endif
#ifdef FRAGMENT_SHADER
precision highp int;
precision highp float;
#endif
#endif
#ifdef VERTEX_SHADER
#ifdef sc_EnableMultiviewStereoRendering
layout(num_views=sc_NumStereoViews) in;
#endif
#endif
#define SC_INT_FALLBACK_FLOAT int
#define SC_INTERPOLATION_FLAT flat
#define SC_INTERPOLATION_CENTROID centroid
#ifndef sc_NumStereoViews
#define sc_NumStereoViews 1
#endif
#ifndef sc_TextureRenderingLayout_Regular
#define sc_TextureRenderingLayout_Regular 0
#define sc_TextureRenderingLayout_StereoInstancedClipped 1
#define sc_TextureRenderingLayout_StereoMultiview 2
#endif
#if defined VERTEX_SHADER
#ifndef sc_ShaderCacheConstant
#define sc_ShaderCacheConstant 0
#endif
#ifndef sc_DepthBufferMode
#define sc_DepthBufferMode 0
#endif
#ifndef sc_NumStereoViews
#define sc_NumStereoViews 1
#endif
struct sc_Camera_t
{
vec3 position;
float aspect;
vec2 clipPlanes;
};
#ifndef sc_ProjectiveShadowsReceiver
#define sc_ProjectiveShadowsReceiver 0
#elif sc_ProjectiveShadowsReceiver==1
#undef sc_ProjectiveShadowsReceiver
#define sc_ProjectiveShadowsReceiver 1
#endif
uniform mat4 sc_ProjectorMatrix;
uniform vec4 sc_UniformConstants;
uniform mat4 sc_ProjectionMatrixArray[sc_NumStereoViews];
uniform sc_Camera_t sc_Camera;
out float varClipDistance;
in vec4 position;
in vec2 texture0;
out vec4 varPosAndMotion;
out vec4 varTex01;
out vec4 varScreenPos;
out vec2 varScreenTexturePos;
out vec2 varShadowTex;
out vec4 varNormalAndMotion;
out vec4 varTangent;
flat out int varStereoViewID;
in vec3 normal;
in vec4 tangent;
in vec2 texture1;
void main()
{
varPosAndMotion=vec4(position.x,position.y,position.z,varPosAndMotion.w);
varTex01=vec4(texture0.x,texture0.y,varTex01.z,varTex01.w);
varScreenPos=position;
varScreenTexturePos=((position.xy/vec2(position.w))*0.5)+vec2(0.5);
#if (sc_ProjectiveShadowsReceiver)
{
vec4 l9_0=sc_ProjectorMatrix*position;
varShadowTex=((l9_0.xy/vec2(l9_0.w))*0.5)+vec2(0.5);
}
#endif
vec4 l9_1;
#if (sc_DepthBufferMode==1)
{
vec4 l9_2;
if (sc_ProjectionMatrixArray[0][2].w!=0.0)
{
vec4 l9_3=position;
l9_3.z=((log2(max(sc_Camera.clipPlanes.x,1.0+position.w))*(2.0/log2(sc_Camera.clipPlanes.y+1.0)))-1.0)*position.w;
l9_2=l9_3;
}
else
{
l9_2=position;
}
l9_1=l9_2;
}
#else
{
l9_1=position;
}
#endif
vec4 l9_4=l9_1*1.0;
vec4 l9_5;
#if (sc_ShaderCacheConstant!=0)
{
vec4 l9_6=l9_4;
l9_6.x=l9_4.x+(sc_UniformConstants.x*float(sc_ShaderCacheConstant));
l9_5=l9_6;
}
#else
{
l9_5=l9_4;
}
#endif
gl_Position=l9_5;
}
#elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
#ifndef sc_FramebufferFetch
#define sc_FramebufferFetch 0
#elif sc_FramebufferFetch==1
#undef sc_FramebufferFetch
#define sc_FramebufferFetch 1
#endif
#ifndef sc_ShaderCacheConstant
#define sc_ShaderCacheConstant 0
#endif
#ifndef inputTextureHasSwappedViews
#define inputTextureHasSwappedViews 0
#elif inputTextureHasSwappedViews==1
#undef inputTextureHasSwappedViews
#define inputTextureHasSwappedViews 1
#endif
#ifndef inputTextureLayout
#define inputTextureLayout 0
#endif
#ifndef SC_USE_UV_TRANSFORM_inputTexture
#define SC_USE_UV_TRANSFORM_inputTexture 0
#elif SC_USE_UV_TRANSFORM_inputTexture==1
#undef SC_USE_UV_TRANSFORM_inputTexture
#define SC_USE_UV_TRANSFORM_inputTexture 1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_U_inputTexture
#define SC_SOFTWARE_WRAP_MODE_U_inputTexture -1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_V_inputTexture
#define SC_SOFTWARE_WRAP_MODE_V_inputTexture -1
#endif
#ifndef SC_USE_UV_MIN_MAX_inputTexture
#define SC_USE_UV_MIN_MAX_inputTexture 0
#elif SC_USE_UV_MIN_MAX_inputTexture==1
#undef SC_USE_UV_MIN_MAX_inputTexture
#define SC_USE_UV_MIN_MAX_inputTexture 1
#endif
#ifndef SC_USE_CLAMP_TO_BORDER_inputTexture
#define SC_USE_CLAMP_TO_BORDER_inputTexture 0
#elif SC_USE_CLAMP_TO_BORDER_inputTexture==1
#undef SC_USE_CLAMP_TO_BORDER_inputTexture
#define SC_USE_CLAMP_TO_BORDER_inputTexture 1
#endif
#ifndef COLOR_SOURCE
#define COLOR_SOURCE 0
#elif COLOR_SOURCE==1
#undef COLOR_SOURCE
#define COLOR_SOURCE 1
#endif
#ifndef R
#define R 0
#elif R==1
#undef R
#define R 1
#endif
#ifndef RG
#define RG 0
#elif RG==1
#undef RG
#define RG 1
#endif
uniform vec4 sc_UniformConstants;
uniform mat3 inputTextureTransform;
uniform vec4 inputTextureUvMinMax;
uniform vec4 inputTextureBorderColor;
uniform vec4 baseColor;
uniform mediump sampler2DArray inputTextureArrSC;
uniform mediump sampler2D inputTexture;
layout(location=0) out vec4 sc_FragData0;
in vec4 varTex01;
in vec4 varPosAndMotion;
in vec4 varNormalAndMotion;
in vec4 varTangent;
in vec4 varScreenPos;
in vec2 varScreenTexturePos;
in vec2 varShadowTex;
flat in int varStereoViewID;
in float varClipDistance;
int inputTextureGetStereoViewIndex()
{
int l9_0;
#if (inputTextureHasSwappedViews)
{
l9_0=1;
}
#else
{
l9_0=0;
}
#endif
return l9_0;
}
float sc_SoftwareWrapEarly(float uv,int softwareWrapMode)
{
if (softwareWrapMode==1)
{
uv=fract(uv);
}
else
{
if (softwareWrapMode==2)
{
float l9_0=fract(uv);
uv=mix(l9_0,1.0-l9_0,clamp(step(0.25,fract((uv-l9_0)*0.5)),0.0,1.0));
}
}
return uv;
}
float sc_ClampUV(float value,float minValue,float maxValue,bool useClampToBorder,inout float clampToBorderFactor)
{
float l9_0=clamp(value,minValue,maxValue);
float l9_1=step(abs(value-l9_0),9.9999997e-06);
clampToBorderFactor*=(l9_1+((1.0-float(useClampToBorder))*(1.0-l9_1)));
return l9_0;
}
vec2 sc_TransformUV(vec2 uv,bool useUvTransform,mat3 uvTransform)
{
if (useUvTransform)
{
uv=vec2((uvTransform*vec3(uv,1.0)).xy);
}
return uv;
}
float sc_SoftwareWrapLate(float uv,int softwareWrapMode,bool useClampToBorder,inout float clampToBorderFactor)
{
if ((softwareWrapMode==0)||(softwareWrapMode==3))
{
uv=sc_ClampUV(uv,0.0,1.0,useClampToBorder,clampToBorderFactor);
}
return uv;
}
vec3 sc_SamplingCoordsViewToGlobal(vec2 uv,int renderingLayout,int viewIndex)
{
vec3 l9_0;
if (renderingLayout==0)
{
l9_0=vec3(uv,0.0);
}
else
{
vec3 l9_1;
if (renderingLayout==1)
{
l9_1=vec3(uv.x,(uv.y*0.5)+(0.5-(float(viewIndex)*0.5)),0.0);
}
else
{
l9_1=vec3(uv,float(viewIndex));
}
l9_0=l9_1;
}
return l9_0;
}
void main()
{
vec4 l9_0;
#if (inputTextureLayout==2)
{
bool l9_1=(int(SC_USE_CLAMP_TO_BORDER_inputTexture)!=0)&&(!(int(SC_USE_UV_MIN_MAX_inputTexture)!=0));
float l9_2=sc_SoftwareWrapEarly(varTex01.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).x);
float l9_3=sc_SoftwareWrapEarly(varTex01.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).y);
vec2 l9_4;
float l9_5;
#if (SC_USE_UV_MIN_MAX_inputTexture)
{
bool l9_6;
#if (SC_USE_CLAMP_TO_BORDER_inputTexture)
{
l9_6=ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).x==3;
}
#else
{
l9_6=(int(SC_USE_CLAMP_TO_BORDER_inputTexture)!=0);
}
#endif
float l9_7=1.0;
float l9_8=sc_ClampUV(l9_2,inputTextureUvMinMax.x,inputTextureUvMinMax.z,l9_6,l9_7);
float l9_9=l9_7;
bool l9_10;
#if (SC_USE_CLAMP_TO_BORDER_inputTexture)
{
l9_10=ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).y==3;
}
#else
{
l9_10=(int(SC_USE_CLAMP_TO_BORDER_inputTexture)!=0);
}
#endif
float l9_11=l9_9;
float l9_12=sc_ClampUV(l9_3,inputTextureUvMinMax.y,inputTextureUvMinMax.w,l9_10,l9_11);
l9_5=l9_11;
l9_4=vec2(l9_8,l9_12);
}
#else
{
l9_5=1.0;
l9_4=vec2(l9_2,l9_3);
}
#endif
vec2 l9_13=sc_TransformUV(l9_4,(int(SC_USE_UV_TRANSFORM_inputTexture)!=0),inputTextureTransform);
float l9_14=l9_5;
float l9_15=sc_SoftwareWrapLate(l9_13.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).x,l9_1,l9_14);
float l9_16=l9_14;
vec3 l9_17=sc_SamplingCoordsViewToGlobal(vec2(l9_15,sc_SoftwareWrapLate(l9_13.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).y,l9_1,l9_14)),inputTextureLayout,inputTextureGetStereoViewIndex());
vec4 l9_18=texture(inputTextureArrSC,l9_17,0.0);
vec4 l9_19;
#if (SC_USE_CLAMP_TO_BORDER_inputTexture)
{
l9_19=mix(inputTextureBorderColor,l9_18,vec4(l9_16));
}
#else
{
l9_19=l9_18;
}
#endif
l9_0=l9_19;
}
#else
{
bool l9_20=(int(SC_USE_CLAMP_TO_BORDER_inputTexture)!=0)&&(!(int(SC_USE_UV_MIN_MAX_inputTexture)!=0));
float l9_21=sc_SoftwareWrapEarly(varTex01.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).x);
float l9_22=sc_SoftwareWrapEarly(varTex01.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).y);
vec2 l9_23;
float l9_24;
#if (SC_USE_UV_MIN_MAX_inputTexture)
{
bool l9_25;
#if (SC_USE_CLAMP_TO_BORDER_inputTexture)
{
l9_25=ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).x==3;
}
#else
{
l9_25=(int(SC_USE_CLAMP_TO_BORDER_inputTexture)!=0);
}
#endif
float l9_26=1.0;
float l9_27=sc_ClampUV(l9_21,inputTextureUvMinMax.x,inputTextureUvMinMax.z,l9_25,l9_26);
float l9_28=l9_26;
bool l9_29;
#if (SC_USE_CLAMP_TO_BORDER_inputTexture)
{
l9_29=ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).y==3;
}
#else
{
l9_29=(int(SC_USE_CLAMP_TO_BORDER_inputTexture)!=0);
}
#endif
float l9_30=l9_28;
float l9_31=sc_ClampUV(l9_22,inputTextureUvMinMax.y,inputTextureUvMinMax.w,l9_29,l9_30);
l9_24=l9_30;
l9_23=vec2(l9_27,l9_31);
}
#else
{
l9_24=1.0;
l9_23=vec2(l9_21,l9_22);
}
#endif
vec2 l9_32=sc_TransformUV(l9_23,(int(SC_USE_UV_TRANSFORM_inputTexture)!=0),inputTextureTransform);
float l9_33=l9_24;
float l9_34=sc_SoftwareWrapLate(l9_32.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).x,l9_20,l9_33);
float l9_35=l9_33;
vec3 l9_36=sc_SamplingCoordsViewToGlobal(vec2(l9_34,sc_SoftwareWrapLate(l9_32.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_inputTexture,SC_SOFTWARE_WRAP_MODE_V_inputTexture).y,l9_20,l9_33)),inputTextureLayout,inputTextureGetStereoViewIndex());
vec4 l9_37=texture(inputTexture,l9_36.xy,0.0);
vec4 l9_38;
#if (SC_USE_CLAMP_TO_BORDER_inputTexture)
{
l9_38=mix(inputTextureBorderColor,l9_37,vec4(l9_35));
}
#else
{
l9_38=l9_37;
}
#endif
l9_0=l9_38;
}
#endif
vec4 l9_39;
#if (COLOR_SOURCE)
{
l9_39=l9_0*baseColor;
}
#else
{
l9_39=vec4(baseColor.xyz,l9_0.x*baseColor.w);
}
#endif
vec4 l9_40;
#if (R)
{
l9_40=vec4(l9_39.w,0.0,0.0,l9_39.w);
}
#else
{
vec4 l9_41;
#if (RG)
{
l9_41=vec4(l9_39.xw,0.0,l9_39.w);
}
#else
{
l9_41=l9_39;
}
#endif
l9_40=l9_41;
}
#endif
vec4 l9_42;
#if (sc_ShaderCacheConstant!=0)
{
vec4 l9_43=l9_40;
l9_43.x=l9_40.x+(sc_UniformConstants.x*float(sc_ShaderCacheConstant));
l9_42=l9_43;
}
#else
{
l9_42=l9_40;
}
#endif
sc_FragData0=l9_42;
}
#endif // #elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
