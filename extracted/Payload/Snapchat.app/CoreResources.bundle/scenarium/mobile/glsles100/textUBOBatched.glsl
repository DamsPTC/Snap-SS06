#version 300 es
//#include <required.glsl> // [HACK 4/6/2023] See SCC shader_merger.cpp
#define STD_DISABLE_VERTEX_NORMAL 1
#define STD_DISABLE_VERTEX_TANGENT 1
#define sc_TAADisabled 1
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
#ifndef sc_StereoRenderingMode
#define sc_StereoRenderingMode 0
#endif
#ifndef sc_StereoViewID
#define sc_StereoViewID 0
#endif
#ifndef sc_RenderingSpace
#define sc_RenderingSpace -1
#endif
#ifndef sc_StereoRendering_IsClipDistanceEnabled
#define sc_StereoRendering_IsClipDistanceEnabled 0
#endif
struct sc_Camera_t
{
vec3 position;
float aspect;
vec2 clipPlanes;
};
#ifndef sc_ShaderCacheConstant
#define sc_ShaderCacheConstant 0
#endif
struct PassParameterOverrideGPU
{
mat4 sc_modelMatrix;
uint sc_domainParamsIndex;
};
#ifndef MAX_BATCH_SIZE
#define MAX_BATCH_SIZE 0
#endif
struct TextComponentParamsGPU
{
vec4 backgroundFillTexture_uvMinMax;
vec4 mainFillTexture_uvMinMax;
vec4 outlineFillTexture_uvMinMax;
vec4 shadowFillTexture_uvMinMax;
vec2 backgroundSize;
float backgroundCornerRadius;
uint styleParams_baseIndex;
float textScaledEmHeight;
};
struct VertexAttribTextGPU
{
vec4 glyphAtlasUvRectAttr;
float decorThicknessRatioAttr;
float passIdentifierAttr;
float sdfOffsetAttr;
float styleParamIdentifierAttr;
};
#ifndef ENABLE_SDF
#define ENABLE_SDF 0
#elif ENABLE_SDF==1
#undef ENABLE_SDF
#define ENABLE_SDF 1
#endif
struct StyleParams
{
vec4 color;
vec4 colorTint;
float runScale;
};
#if __VERSION__>=310
layout(binding=5,std140) uniform sc_DrawCallUBO
#else
layout( std140) uniform sc_DrawCallUBO
#endif
{
mat4 sc_ModelMatrix;
mat4 sc_ProjectorMatrix;
int sc_ViewMask;
} sc_DrawCallUBO_obj;
#if __VERSION__>=310
layout(binding=4,std140) uniform sc_CameraUBO
#else
layout( std140) uniform sc_CameraUBO
#endif
{
vec4 sc_Time;
vec4 sc_UniformConstants;
mat4 sc_ViewProjectionMatrixArray[4];
mat4 sc_ViewProjectionMatrixInverseArray[4];
mat4 sc_ProjectionMatrixArray[4];
mat4 sc_ProjectionMatrixInverseArray[4];
mat4 sc_ViewMatrixArray[4];
mat4 sc_ViewMatrixInverseArray[4];
mat4 sc_PrevFrameViewProjectionMatrixArray[4];
vec4 sc_CurrentRenderTargetDims;
vec4 sc_WindowToViewportTransform;
vec4 sc_StereoClipPlanes[2];
sc_Camera_t sc_Camera;
} sc_CameraUBO_obj;
#if __VERSION__>=310
layout(binding=0,std140) uniform PassParameterOverrides
#else
layout( std140) uniform PassParameterOverrides
#endif
{
#if MAX_BATCH_SIZE==0
PassParameterOverrideGPU passParams[1];
#else
PassParameterOverrideGPU passParams[MAX_BATCH_SIZE];
#endif
} PassParameterOverrides_obj;
#if __VERSION__>=310
layout(binding=2,std140) uniform TextComponentParams
#else
layout( std140) uniform TextComponentParams
#endif
{
#if MAX_BATCH_SIZE==0
TextComponentParamsGPU textParams[1];
#else
TextComponentParamsGPU textParams[MAX_BATCH_SIZE];
#endif
} TextComponentParams_obj;
#if __VERSION__>=310
layout(binding=3,std140) uniform VertexAttribTextUBO
#else
layout( std140) uniform VertexAttribTextUBO
#endif
{
VertexAttribTextGPU vertexAttribs[256];
} VertexAttribTextUBO_obj;
#if __VERSION__>=310
layout(binding=1,std140) uniform StyleParamsBuffer
#else
layout( std140) uniform StyleParamsBuffer
#endif
{
StyleParams styleParams[341];
} StyleParamsBuffer_obj;
#if __VERSION__>=310
layout(binding=6,std140) uniform UserUniforms
#else
layout( std140) uniform UserUniforms
#endif
{
mat3 mainTextureTransform;
vec4 mainTextureUvMinMax;
vec4 mainTextureBorderColor;
mat3 colorTextureTransform;
vec4 colorTextureUvMinMax;
vec4 colorTextureBorderColor;
mat3 mainFillTextureTransform;
vec4 mainFillTextureUvMinMax;
vec4 mainFillTextureBorderColor;
mat3 shadowFillTextureTransform;
vec4 shadowFillTextureUvMinMax;
vec4 shadowFillTextureBorderColor;
mat3 outlineFillTextureTransform;
vec4 outlineFillTextureUvMinMax;
vec4 outlineFillTextureBorderColor;
mat3 backgroundFillTextureTransform;
vec4 backgroundFillTextureUvMinMax;
vec4 backgroundFillTextureBorderColor;
} userUniformsObj;
out float varClipDistance;
flat out int varStereoViewID;
in vec4 position;
in vec2 texture0;
in vec2 texture1;
out vec4 varPosAndMotion;
out vec4 varTex01;
out vec4 varSdfParams;
in float aVertexAttrIndex;
in float aParamSlotIndex;
flat out float varParamSlotIndex;
out vec2 varPassIdDecorThickness;
flat out float varStyleParamIdentifier;
out vec4 varGlyphAtlasUvRect;
int sc_GetStereoViewIndex()
{
int l9_0;
#if (sc_StereoRenderingMode==0)
{
l9_0=0;
}
#else
{
l9_0=sc_StereoViewID;
}
#endif
return l9_0;
}
float calculateFrustumHeightAtVertex(vec3 vertexWorldPos)
{
if (sc_CameraUBO_obj.sc_ProjectionMatrixArray[sc_GetStereoViewIndex()][2].w!=0.0)
{
return abs((2.0*(-(sc_CameraUBO_obj.sc_ViewMatrixArray[sc_GetStereoViewIndex()]*vec4(vertexWorldPos,1.0)).z))/sc_CameraUBO_obj.sc_ProjectionMatrixArray[sc_GetStereoViewIndex()][1].y);
}
else
{
return abs(4.0/sc_CameraUBO_obj.sc_ProjectionMatrixArray[sc_GetStereoViewIndex()][1].y);
}
}
vec4 sc_ApplyScreenSpaceInstancedClippedShift(vec4 screenPosition)
{
#if (sc_StereoRenderingMode==1)
{
screenPosition.y=(screenPosition.y*0.5)+(0.5-float(sc_GetStereoViewIndex()));
}
#endif
return screenPosition;
}
void sc_SetClipDistancePlatform(float dstClipDistance)
{
#if sc_StereoRenderingMode==sc_StereoRendering_InstancedClipped&&sc_StereoRendering_IsClipDistanceEnabled
gl_ClipDistance[0]=dstClipDistance;
#endif
}
void sc_SetClipPosition(vec4 clipPosition)
{
#if (sc_ShaderCacheConstant!=0)
{
clipPosition.x+=(sc_CameraUBO_obj.sc_UniformConstants.x*float(sc_ShaderCacheConstant));
}
#endif
#if (sc_StereoRenderingMode>0)
{
if ((sc_DrawCallUBO_obj.sc_ViewMask&(1<<sc_StereoViewID))==0)
{
gl_Position=vec4(0.0,0.0,-2.0,1.0);
return;
}
varStereoViewID=sc_StereoViewID;
}
#endif
vec4 l9_1=clipPosition;
#if (sc_StereoRenderingMode==1)
{
float l9_2=dot(l9_1,sc_CameraUBO_obj.sc_StereoClipPlanes[sc_StereoViewID]);
#if (sc_StereoRendering_IsClipDistanceEnabled==1)
{
sc_SetClipDistancePlatform(l9_2);
}
#else
{
varClipDistance=l9_2;
}
#endif
}
#endif
gl_Position=clipPosition;
}
void main()
{
varParamSlotIndex=aParamSlotIndex;
int l9_0=clamp(int(floor(aVertexAttrIndex+0.5)),0,255);
#if (ENABLE_SDF)
{
int l9_1=clamp(int(floor(aParamSlotIndex+0.5)),0,169);
int l9_2=clamp(int(PassParameterOverrides_obj.passParams[l9_1].sc_domainParamsIndex),0,169);
float l9_3=calculateFrustumHeightAtVertex((PassParameterOverrides_obj.passParams[l9_1].sc_modelMatrix*vec4(position.xyz,1.0)).xyz);
float l9_4=(((TextComponentParams_obj.textParams[l9_2].textScaledEmHeight/l9_3)*sc_CameraUBO_obj.sc_CurrentRenderTargetDims.y)/93.0)*StyleParamsBuffer_obj.styleParams[clamp(int(TextComponentParams_obj.textParams[l9_2].styleParams_baseIndex)+int(floor(VertexAttribTextUBO_obj.vertexAttribs[l9_0].styleParamIdentifierAttr+0.5)),0,340)].runScale;
mat4 l9_5=sc_CameraUBO_obj.sc_ViewMatrixArray[sc_GetStereoViewIndex()]*PassParameterOverrides_obj.passParams[l9_1].sc_modelMatrix;
float l9_6=abs(dot(normalize(mat3(l9_5[0].xyz,l9_5[1].xyz,l9_5[2].xyz)*vec3(0.0,0.0,1.0)),vec3(0.0,0.0,-1.0)));
float l9_7;
if (l9_6<0.69999999)
{
l9_7=l9_4*clamp(l9_6,0.11,0.69999999);
}
else
{
l9_7=l9_4;
}
varSdfParams.x=clamp(1.0-((l9_7-0.5)/0.5),0.0,1.0);
varSdfParams.y=clamp((l9_7*31.67)+1.0,1.0,250.0);
varSdfParams.z=clamp(l9_7*15.83,0.0,124.5);
}
#endif
vec4 l9_8=PassParameterOverrides_obj.passParams[clamp(int(floor(aParamSlotIndex+0.5)),0,169)].sc_modelMatrix*position;
vec4 l9_9;
#if (sc_RenderingSpace==3)
{
l9_9=sc_ApplyScreenSpaceInstancedClippedShift(l9_8);
}
#else
{
vec4 l9_10;
#if (sc_RenderingSpace==2)
{
l9_10=sc_CameraUBO_obj.sc_ViewProjectionMatrixArray[sc_GetStereoViewIndex()]*l9_8;
}
#else
{
vec4 l9_11;
#if (sc_RenderingSpace==1)
{
l9_11=(sc_CameraUBO_obj.sc_ViewProjectionMatrixArray[sc_GetStereoViewIndex()]*sc_DrawCallUBO_obj.sc_ModelMatrix)*l9_8;
}
#else
{
vec4 l9_12;
#if (sc_RenderingSpace==4)
{
l9_12=sc_ApplyScreenSpaceInstancedClippedShift(((sc_CameraUBO_obj.sc_ViewMatrixArray[sc_GetStereoViewIndex()]*sc_DrawCallUBO_obj.sc_ModelMatrix)*l9_8)*vec4(1.0/sc_CameraUBO_obj.sc_Camera.aspect,1.0,1.0,1.0));
}
#else
{
l9_12=l9_8;
}
#endif
l9_11=l9_12;
}
#endif
l9_10=l9_11;
}
#endif
l9_9=l9_10;
}
#endif
#if ((sc_RenderingSpace==3)||(sc_RenderingSpace==4))
{
varPosAndMotion=vec4(l9_9.x,l9_9.y,l9_9.z,varPosAndMotion.w);
}
#else
{
#if (sc_RenderingSpace==2)
{
varPosAndMotion=vec4(l9_8.x,l9_8.y,l9_8.z,varPosAndMotion.w);
}
#else
{
#if (sc_RenderingSpace==1)
{
vec4 l9_13=sc_DrawCallUBO_obj.sc_ModelMatrix*l9_8;
varPosAndMotion=vec4(l9_13.x,l9_13.y,l9_13.z,varPosAndMotion.w);
}
#endif
}
#endif
}
#endif
varTex01=vec4(texture0.x,texture0.y,varTex01.z,varTex01.w);
varTex01=vec4(varTex01.x,varTex01.y,texture1.x,texture1.y);
#if (sc_StereoRenderingMode==1)
{
}
#else
{
}
#endif
sc_SetClipPosition(l9_9*1.0);
varPassIdDecorThickness.x=VertexAttribTextUBO_obj.vertexAttribs[l9_0].passIdentifierAttr;
varSdfParams.w=VertexAttribTextUBO_obj.vertexAttribs[l9_0].sdfOffsetAttr;
varStyleParamIdentifier=VertexAttribTextUBO_obj.vertexAttribs[l9_0].styleParamIdentifierAttr;
varPassIdDecorThickness.y=VertexAttribTextUBO_obj.vertexAttribs[l9_0].decorThicknessRatioAttr;
varGlyphAtlasUvRect=VertexAttribTextUBO_obj.vertexAttribs[l9_0].glyphAtlasUvRectAttr;
}
#elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
#ifndef sc_FramebufferFetch
#define sc_FramebufferFetch 0
#elif sc_FramebufferFetch==1
#undef sc_FramebufferFetch
#define sc_FramebufferFetch 1
#endif
#ifndef sc_StereoRenderingMode
#define sc_StereoRenderingMode 0
#endif
#ifndef sc_BlendMode
#define sc_BlendMode 0
#endif
#ifndef sc_StereoRendering_IsClipDistanceEnabled
#define sc_StereoRendering_IsClipDistanceEnabled 0
#endif
#ifndef sc_ShaderCacheConstant
#define sc_ShaderCacheConstant 0
#endif
struct sc_Camera_t
{
vec3 position;
float aspect;
vec2 clipPlanes;
};
#ifndef mainTextureHasSwappedViews
#define mainTextureHasSwappedViews 0
#elif mainTextureHasSwappedViews==1
#undef mainTextureHasSwappedViews
#define mainTextureHasSwappedViews 1
#endif
#ifndef colorTextureHasSwappedViews
#define colorTextureHasSwappedViews 0
#elif colorTextureHasSwappedViews==1
#undef colorTextureHasSwappedViews
#define colorTextureHasSwappedViews 1
#endif
#ifndef mainFillTextureHasSwappedViews
#define mainFillTextureHasSwappedViews 0
#elif mainFillTextureHasSwappedViews==1
#undef mainFillTextureHasSwappedViews
#define mainFillTextureHasSwappedViews 1
#endif
#ifndef shadowFillTextureHasSwappedViews
#define shadowFillTextureHasSwappedViews 0
#elif shadowFillTextureHasSwappedViews==1
#undef shadowFillTextureHasSwappedViews
#define shadowFillTextureHasSwappedViews 1
#endif
#ifndef outlineFillTextureHasSwappedViews
#define outlineFillTextureHasSwappedViews 0
#elif outlineFillTextureHasSwappedViews==1
#undef outlineFillTextureHasSwappedViews
#define outlineFillTextureHasSwappedViews 1
#endif
#ifndef backgroundFillTextureHasSwappedViews
#define backgroundFillTextureHasSwappedViews 0
#elif backgroundFillTextureHasSwappedViews==1
#undef backgroundFillTextureHasSwappedViews
#define backgroundFillTextureHasSwappedViews 1
#endif
#ifndef mainTextureLayout
#define mainTextureLayout 0
#endif
#ifndef SC_USE_UV_TRANSFORM_mainTexture
#define SC_USE_UV_TRANSFORM_mainTexture 0
#elif SC_USE_UV_TRANSFORM_mainTexture==1
#undef SC_USE_UV_TRANSFORM_mainTexture
#define SC_USE_UV_TRANSFORM_mainTexture 1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_U_mainTexture
#define SC_SOFTWARE_WRAP_MODE_U_mainTexture -1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_V_mainTexture
#define SC_SOFTWARE_WRAP_MODE_V_mainTexture -1
#endif
#ifndef SC_USE_UV_MIN_MAX_mainTexture
#define SC_USE_UV_MIN_MAX_mainTexture 0
#elif SC_USE_UV_MIN_MAX_mainTexture==1
#undef SC_USE_UV_MIN_MAX_mainTexture
#define SC_USE_UV_MIN_MAX_mainTexture 1
#endif
#ifndef SC_USE_CLAMP_TO_BORDER_mainTexture
#define SC_USE_CLAMP_TO_BORDER_mainTexture 0
#elif SC_USE_CLAMP_TO_BORDER_mainTexture==1
#undef SC_USE_CLAMP_TO_BORDER_mainTexture
#define SC_USE_CLAMP_TO_BORDER_mainTexture 1
#endif
struct PassParameterOverrideGPU
{
mat4 sc_modelMatrix;
uint sc_domainParamsIndex;
};
#ifndef MAX_BATCH_SIZE
#define MAX_BATCH_SIZE 0
#endif
struct TextComponentParamsGPU
{
vec4 backgroundFillTexture_uvMinMax;
vec4 mainFillTexture_uvMinMax;
vec4 outlineFillTexture_uvMinMax;
vec4 shadowFillTexture_uvMinMax;
vec2 backgroundSize;
float backgroundCornerRadius;
uint styleParams_baseIndex;
float textScaledEmHeight;
};
#ifndef LEGACY_TEXT_PREMULT
#define LEGACY_TEXT_PREMULT 0
#elif LEGACY_TEXT_PREMULT==1
#undef LEGACY_TEXT_PREMULT
#define LEGACY_TEXT_PREMULT 1
#endif
#ifndef ENABLE_SDF
#define ENABLE_SDF 0
#elif ENABLE_SDF==1
#undef ENABLE_SDF
#define ENABLE_SDF 1
#endif
#ifndef MAIN_FILL_TEXTURE
#define MAIN_FILL_TEXTURE 0
#elif MAIN_FILL_TEXTURE==1
#undef MAIN_FILL_TEXTURE
#define MAIN_FILL_TEXTURE 1
#endif
#ifndef mainFillTextureLayout
#define mainFillTextureLayout 0
#endif
#ifndef SC_USE_UV_TRANSFORM_mainFillTexture
#define SC_USE_UV_TRANSFORM_mainFillTexture 0
#elif SC_USE_UV_TRANSFORM_mainFillTexture==1
#undef SC_USE_UV_TRANSFORM_mainFillTexture
#define SC_USE_UV_TRANSFORM_mainFillTexture 1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_U_mainFillTexture
#define SC_SOFTWARE_WRAP_MODE_U_mainFillTexture -1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_V_mainFillTexture
#define SC_SOFTWARE_WRAP_MODE_V_mainFillTexture -1
#endif
#ifndef SC_USE_UV_MIN_MAX_mainFillTexture
#define SC_USE_UV_MIN_MAX_mainFillTexture 0
#elif SC_USE_UV_MIN_MAX_mainFillTexture==1
#undef SC_USE_UV_MIN_MAX_mainFillTexture
#define SC_USE_UV_MIN_MAX_mainFillTexture 1
#endif
#ifndef SC_USE_CLAMP_TO_BORDER_mainFillTexture
#define SC_USE_CLAMP_TO_BORDER_mainFillTexture 0
#elif SC_USE_CLAMP_TO_BORDER_mainFillTexture==1
#undef SC_USE_CLAMP_TO_BORDER_mainFillTexture
#define SC_USE_CLAMP_TO_BORDER_mainFillTexture 1
#endif
struct StyleParams
{
vec4 color;
vec4 colorTint;
float runScale;
};
#ifndef ENABLE_SHADOW
#define ENABLE_SHADOW 0
#elif ENABLE_SHADOW==1
#undef ENABLE_SHADOW
#define ENABLE_SHADOW 1
#endif
#ifndef ENABLE_OUTLINE
#define ENABLE_OUTLINE 0
#elif ENABLE_OUTLINE==1
#undef ENABLE_OUTLINE
#define ENABLE_OUTLINE 1
#endif
#ifndef SHADOW_FILL_TEXTURE
#define SHADOW_FILL_TEXTURE 0
#elif SHADOW_FILL_TEXTURE==1
#undef SHADOW_FILL_TEXTURE
#define SHADOW_FILL_TEXTURE 1
#endif
#ifndef shadowFillTextureLayout
#define shadowFillTextureLayout 0
#endif
#ifndef SC_USE_UV_TRANSFORM_shadowFillTexture
#define SC_USE_UV_TRANSFORM_shadowFillTexture 0
#elif SC_USE_UV_TRANSFORM_shadowFillTexture==1
#undef SC_USE_UV_TRANSFORM_shadowFillTexture
#define SC_USE_UV_TRANSFORM_shadowFillTexture 1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_U_shadowFillTexture
#define SC_SOFTWARE_WRAP_MODE_U_shadowFillTexture -1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_V_shadowFillTexture
#define SC_SOFTWARE_WRAP_MODE_V_shadowFillTexture -1
#endif
#ifndef SC_USE_UV_MIN_MAX_shadowFillTexture
#define SC_USE_UV_MIN_MAX_shadowFillTexture 0
#elif SC_USE_UV_MIN_MAX_shadowFillTexture==1
#undef SC_USE_UV_MIN_MAX_shadowFillTexture
#define SC_USE_UV_MIN_MAX_shadowFillTexture 1
#endif
#ifndef SC_USE_CLAMP_TO_BORDER_shadowFillTexture
#define SC_USE_CLAMP_TO_BORDER_shadowFillTexture 0
#elif SC_USE_CLAMP_TO_BORDER_shadowFillTexture==1
#undef SC_USE_CLAMP_TO_BORDER_shadowFillTexture
#define SC_USE_CLAMP_TO_BORDER_shadowFillTexture 1
#endif
#ifndef OUTLINE_FILL_TEXTURE
#define OUTLINE_FILL_TEXTURE 0
#elif OUTLINE_FILL_TEXTURE==1
#undef OUTLINE_FILL_TEXTURE
#define OUTLINE_FILL_TEXTURE 1
#endif
#ifndef outlineFillTextureLayout
#define outlineFillTextureLayout 0
#endif
#ifndef SC_USE_UV_TRANSFORM_outlineFillTexture
#define SC_USE_UV_TRANSFORM_outlineFillTexture 0
#elif SC_USE_UV_TRANSFORM_outlineFillTexture==1
#undef SC_USE_UV_TRANSFORM_outlineFillTexture
#define SC_USE_UV_TRANSFORM_outlineFillTexture 1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_U_outlineFillTexture
#define SC_SOFTWARE_WRAP_MODE_U_outlineFillTexture -1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_V_outlineFillTexture
#define SC_SOFTWARE_WRAP_MODE_V_outlineFillTexture -1
#endif
#ifndef SC_USE_UV_MIN_MAX_outlineFillTexture
#define SC_USE_UV_MIN_MAX_outlineFillTexture 0
#elif SC_USE_UV_MIN_MAX_outlineFillTexture==1
#undef SC_USE_UV_MIN_MAX_outlineFillTexture
#define SC_USE_UV_MIN_MAX_outlineFillTexture 1
#endif
#ifndef SC_USE_CLAMP_TO_BORDER_outlineFillTexture
#define SC_USE_CLAMP_TO_BORDER_outlineFillTexture 0
#elif SC_USE_CLAMP_TO_BORDER_outlineFillTexture==1
#undef SC_USE_CLAMP_TO_BORDER_outlineFillTexture
#define SC_USE_CLAMP_TO_BORDER_outlineFillTexture 1
#endif
#ifndef ENABLE_BACKGROUND
#define ENABLE_BACKGROUND 0
#elif ENABLE_BACKGROUND==1
#undef ENABLE_BACKGROUND
#define ENABLE_BACKGROUND 1
#endif
#ifndef BACKGROUND_FILL_TEXTURE
#define BACKGROUND_FILL_TEXTURE 0
#elif BACKGROUND_FILL_TEXTURE==1
#undef BACKGROUND_FILL_TEXTURE
#define BACKGROUND_FILL_TEXTURE 1
#endif
#ifndef backgroundFillTextureLayout
#define backgroundFillTextureLayout 0
#endif
#ifndef SC_USE_UV_TRANSFORM_backgroundFillTexture
#define SC_USE_UV_TRANSFORM_backgroundFillTexture 0
#elif SC_USE_UV_TRANSFORM_backgroundFillTexture==1
#undef SC_USE_UV_TRANSFORM_backgroundFillTexture
#define SC_USE_UV_TRANSFORM_backgroundFillTexture 1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_U_backgroundFillTexture
#define SC_SOFTWARE_WRAP_MODE_U_backgroundFillTexture -1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_V_backgroundFillTexture
#define SC_SOFTWARE_WRAP_MODE_V_backgroundFillTexture -1
#endif
#ifndef SC_USE_UV_MIN_MAX_backgroundFillTexture
#define SC_USE_UV_MIN_MAX_backgroundFillTexture 0
#elif SC_USE_UV_MIN_MAX_backgroundFillTexture==1
#undef SC_USE_UV_MIN_MAX_backgroundFillTexture
#define SC_USE_UV_MIN_MAX_backgroundFillTexture 1
#endif
#ifndef SC_USE_CLAMP_TO_BORDER_backgroundFillTexture
#define SC_USE_CLAMP_TO_BORDER_backgroundFillTexture 0
#elif SC_USE_CLAMP_TO_BORDER_backgroundFillTexture==1
#undef SC_USE_CLAMP_TO_BORDER_backgroundFillTexture
#define SC_USE_CLAMP_TO_BORDER_backgroundFillTexture 1
#endif
#ifndef colorTextureLayout
#define colorTextureLayout 0
#endif
#ifndef SC_USE_UV_TRANSFORM_colorTexture
#define SC_USE_UV_TRANSFORM_colorTexture 0
#elif SC_USE_UV_TRANSFORM_colorTexture==1
#undef SC_USE_UV_TRANSFORM_colorTexture
#define SC_USE_UV_TRANSFORM_colorTexture 1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_U_colorTexture
#define SC_SOFTWARE_WRAP_MODE_U_colorTexture -1
#endif
#ifndef SC_SOFTWARE_WRAP_MODE_V_colorTexture
#define SC_SOFTWARE_WRAP_MODE_V_colorTexture -1
#endif
#ifndef SC_USE_UV_MIN_MAX_colorTexture
#define SC_USE_UV_MIN_MAX_colorTexture 0
#elif SC_USE_UV_MIN_MAX_colorTexture==1
#undef SC_USE_UV_MIN_MAX_colorTexture
#define SC_USE_UV_MIN_MAX_colorTexture 1
#endif
#ifndef SC_USE_CLAMP_TO_BORDER_colorTexture
#define SC_USE_CLAMP_TO_BORDER_colorTexture 0
#elif SC_USE_CLAMP_TO_BORDER_colorTexture==1
#undef SC_USE_CLAMP_TO_BORDER_colorTexture
#define SC_USE_CLAMP_TO_BORDER_colorTexture 1
#endif
struct VertexAttribTextGPU
{
vec4 glyphAtlasUvRectAttr;
float decorThicknessRatioAttr;
float passIdentifierAttr;
float sdfOffsetAttr;
float styleParamIdentifierAttr;
};
#if __VERSION__>=310
layout(binding=4,std140) uniform sc_CameraUBO
#else
layout( std140) uniform sc_CameraUBO
#endif
{
vec4 sc_Time;
vec4 sc_UniformConstants;
mat4 sc_ViewProjectionMatrixArray[4];
mat4 sc_ViewProjectionMatrixInverseArray[4];
mat4 sc_ProjectionMatrixArray[4];
mat4 sc_ProjectionMatrixInverseArray[4];
mat4 sc_ViewMatrixArray[4];
mat4 sc_ViewMatrixInverseArray[4];
mat4 sc_PrevFrameViewProjectionMatrixArray[4];
vec4 sc_CurrentRenderTargetDims;
vec4 sc_WindowToViewportTransform;
vec4 sc_StereoClipPlanes[2];
sc_Camera_t sc_Camera;
} sc_CameraUBO_obj;
#if __VERSION__>=310
layout(binding=6,std140) uniform UserUniforms
#else
layout( std140) uniform UserUniforms
#endif
{
mat3 mainTextureTransform;
vec4 mainTextureUvMinMax;
vec4 mainTextureBorderColor;
mat3 colorTextureTransform;
vec4 colorTextureUvMinMax;
vec4 colorTextureBorderColor;
mat3 mainFillTextureTransform;
vec4 mainFillTextureUvMinMax;
vec4 mainFillTextureBorderColor;
mat3 shadowFillTextureTransform;
vec4 shadowFillTextureUvMinMax;
vec4 shadowFillTextureBorderColor;
mat3 outlineFillTextureTransform;
vec4 outlineFillTextureUvMinMax;
vec4 outlineFillTextureBorderColor;
mat3 backgroundFillTextureTransform;
vec4 backgroundFillTextureUvMinMax;
vec4 backgroundFillTextureBorderColor;
} userUniformsObj;
#if __VERSION__>=310
layout(binding=0,std140) uniform PassParameterOverrides
#else
layout( std140) uniform PassParameterOverrides
#endif
{
#if MAX_BATCH_SIZE==0
PassParameterOverrideGPU passParams[1];
#else
PassParameterOverrideGPU passParams[MAX_BATCH_SIZE];
#endif
} PassParameterOverrides_obj;
#if __VERSION__>=310
layout(binding=2,std140) uniform TextComponentParams
#else
layout( std140) uniform TextComponentParams
#endif
{
#if MAX_BATCH_SIZE==0
TextComponentParamsGPU textParams[1];
#else
TextComponentParamsGPU textParams[MAX_BATCH_SIZE];
#endif
} TextComponentParams_obj;
#if __VERSION__>=310
layout(binding=1,std140) uniform StyleParamsBuffer
#else
layout( std140) uniform StyleParamsBuffer
#endif
{
StyleParams styleParams[341];
} StyleParamsBuffer_obj;
#if __VERSION__>=310
layout(binding=5,std140) uniform sc_DrawCallUBO
#else
layout( std140) uniform sc_DrawCallUBO
#endif
{
mat4 sc_ModelMatrix;
mat4 sc_ProjectorMatrix;
int sc_ViewMask;
} sc_DrawCallUBO_obj;
#if __VERSION__>=310
layout(binding=3,std140) uniform VertexAttribTextUBO
#else
layout( std140) uniform VertexAttribTextUBO
#endif
{
VertexAttribTextGPU vertexAttribs[256];
} VertexAttribTextUBO_obj;
uniform mediump sampler2DArray mainTextureArrSC;
uniform mediump sampler2D mainTexture;
uniform mediump sampler2DArray mainFillTextureArrSC;
uniform mediump sampler2D mainFillTexture;
uniform mediump sampler2DArray shadowFillTextureArrSC;
uniform mediump sampler2D shadowFillTexture;
uniform mediump sampler2DArray outlineFillTextureArrSC;
uniform mediump sampler2D outlineFillTexture;
uniform mediump sampler2DArray backgroundFillTextureArrSC;
uniform mediump sampler2D backgroundFillTexture;
uniform mediump sampler2DArray colorTextureArrSC;
uniform mediump sampler2D colorTexture;
flat in int varStereoViewID;
in float varClipDistance;
layout(location=0) out vec4 sc_FragData0;
in vec4 varSdfParams;
in vec4 varTex01;
in vec4 varGlyphAtlasUvRect;
flat in float varParamSlotIndex;
flat in float varStyleParamIdentifier;
in vec2 varPassIdDecorThickness;
int sc_GetStereoViewIndex()
{
int l9_0;
#if (sc_StereoRenderingMode==0)
{
l9_0=0;
}
#else
{
l9_0=varStereoViewID;
}
#endif
return l9_0;
}
int mainTextureGetStereoViewIndex()
{
int l9_0;
#if (mainTextureHasSwappedViews)
{
l9_0=1-sc_GetStereoViewIndex();
}
#else
{
l9_0=sc_GetStereoViewIndex();
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
vec4 sc_SampleTextureBias(int renderingLayout,int viewIndex,vec2 uv,bool useUvTransform,mat3 uvTransform,ivec2 softwareWrapModes,bool useUvMinMax,vec4 uvMinMax,bool useClampToBorder,vec4 borderColor,float bias,highp sampler2DArray texture_sampler_)
{
bool l9_0=useClampToBorder;
bool l9_1=useUvMinMax;
bool l9_2=l9_0&&(!l9_1);
uv.x=sc_SoftwareWrapEarly(uv.x,softwareWrapModes.x);
uv.y=sc_SoftwareWrapEarly(uv.y,softwareWrapModes.y);
float l9_3;
if (useUvMinMax)
{
bool l9_4=useClampToBorder;
bool l9_5;
if (l9_4)
{
l9_5=softwareWrapModes.x==3;
}
else
{
l9_5=l9_4;
}
float param_8=1.0;
float l9_6=sc_ClampUV(uv.x,uvMinMax.x,uvMinMax.z,l9_5,param_8);
float l9_7=param_8;
uv.x=l9_6;
bool l9_8=useClampToBorder;
bool l9_9;
if (l9_8)
{
l9_9=softwareWrapModes.y==3;
}
else
{
l9_9=l9_8;
}
float param_13=l9_7;
float l9_10=sc_ClampUV(uv.y,uvMinMax.y,uvMinMax.w,l9_9,param_13);
uv.y=l9_10;
l9_3=param_13;
}
else
{
l9_3=1.0;
}
uv=sc_TransformUV(uv,useUvTransform,uvTransform);
float param_20=l9_3;
float l9_11=sc_SoftwareWrapLate(uv.x,softwareWrapModes.x,l9_2,param_20);
uv.x=l9_11;
float l9_12=param_20;
uv.y=sc_SoftwareWrapLate(uv.y,softwareWrapModes.y,l9_2,param_20);
float l9_13=bias;
vec3 l9_14=sc_SamplingCoordsViewToGlobal(uv,renderingLayout,viewIndex);
vec4 l9_15=texture(texture_sampler_,l9_14,l9_13);
vec4 l9_16;
if (useClampToBorder)
{
l9_16=mix(borderColor,l9_15,vec4(l9_12));
}
else
{
l9_16=l9_15;
}
return l9_16;
}
vec4 sc_SampleView(vec2 uv,int renderingLayout,int viewIndex,float bias,highp sampler2D texsmp)
{
return texture(texsmp,sc_SamplingCoordsViewToGlobal(uv,renderingLayout,viewIndex).xy,bias);
}
vec4 sc_SampleTextureBias(int renderingLayout,int viewIndex,vec2 uv,bool useUvTransform,mat3 uvTransform,ivec2 softwareWrapModes,bool useUvMinMax,vec4 uvMinMax,bool useClampToBorder,vec4 borderColor,float bias,highp sampler2D texture_sampler_)
{
bool l9_0=useClampToBorder;
bool l9_1=useUvMinMax;
bool l9_2=l9_0&&(!l9_1);
uv.x=sc_SoftwareWrapEarly(uv.x,softwareWrapModes.x);
uv.y=sc_SoftwareWrapEarly(uv.y,softwareWrapModes.y);
float l9_3;
if (useUvMinMax)
{
bool l9_4=useClampToBorder;
bool l9_5;
if (l9_4)
{
l9_5=softwareWrapModes.x==3;
}
else
{
l9_5=l9_4;
}
float param_8=1.0;
float l9_6=sc_ClampUV(uv.x,uvMinMax.x,uvMinMax.z,l9_5,param_8);
float l9_7=param_8;
uv.x=l9_6;
bool l9_8=useClampToBorder;
bool l9_9;
if (l9_8)
{
l9_9=softwareWrapModes.y==3;
}
else
{
l9_9=l9_8;
}
float param_13=l9_7;
float l9_10=sc_ClampUV(uv.y,uvMinMax.y,uvMinMax.w,l9_9,param_13);
uv.y=l9_10;
l9_3=param_13;
}
else
{
l9_3=1.0;
}
uv=sc_TransformUV(uv,useUvTransform,uvTransform);
float param_20=l9_3;
float l9_11=sc_SoftwareWrapLate(uv.x,softwareWrapModes.x,l9_2,param_20);
uv.x=l9_11;
float l9_12=param_20;
uv.y=sc_SoftwareWrapLate(uv.y,softwareWrapModes.y,l9_2,param_20);
vec4 l9_13=sc_SampleView(uv,renderingLayout,viewIndex,bias,texture_sampler_);
vec4 l9_14;
if (useClampToBorder)
{
l9_14=mix(borderColor,l9_13,vec4(l9_12));
}
else
{
l9_14=l9_13;
}
return l9_14;
}
vec4 sdfSupersampleTapBox(vec2 uv,vec4 tileRect)
{
vec2 l9_0=(dFdx(uv)+dFdy(uv))*0.35355338;
return vec4(clamp(uv-l9_0,tileRect.xy,tileRect.zw),clamp(uv+l9_0,tileRect.xy,tileRect.zw));
}
float sdfSupersampleBlend(float centerCoverage,vec4 tapCoverage,float blend)
{
return mix(centerCoverage,((((centerCoverage+tapCoverage.x)+tapCoverage.y)+tapCoverage.z)+tapCoverage.w)*0.2,blend);
}
float calculateSdfOpacityMultisampled(float dist,float multisampleBlend)
{
float l9_0=dist;
float l9_1=clamp((l9_0*varSdfParams.y)-varSdfParams.z,0.0,1.0);
vec4 l9_2=sdfSupersampleTapBox(varTex01.xy,varGlyphAtlasUvRect);
float l9_3;
if (multisampleBlend>0.0)
{
vec4 l9_4;
#if (mainTextureLayout==2)
{
l9_4=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.xw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_4=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.xw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
vec4 l9_5;
#if (mainTextureLayout==2)
{
l9_5=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_5=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
vec4 l9_6;
#if (mainTextureLayout==2)
{
l9_6=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.zy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_6=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.zy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
vec4 l9_7;
#if (mainTextureLayout==2)
{
l9_7=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.zw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_7=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_2.zw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
l9_3=sdfSupersampleBlend(l9_1,vec4(clamp((l9_4.x*varSdfParams.y)-varSdfParams.z,0.0,1.0),clamp((l9_5.x*varSdfParams.y)-varSdfParams.z,0.0,1.0),clamp((l9_6.x*varSdfParams.y)-varSdfParams.z,0.0,1.0),clamp((l9_7.x*varSdfParams.y)-varSdfParams.z,0.0,1.0)),multisampleBlend);
}
else
{
l9_3=l9_1;
}
return l9_3;
}
int mainFillTextureGetStereoViewIndex()
{
int l9_0;
#if (mainFillTextureHasSwappedViews)
{
l9_0=1-sc_GetStereoViewIndex();
}
#else
{
l9_0=sc_GetStereoViewIndex();
}
#endif
return l9_0;
}
float calculateSdfOpacityMultisampledOutline(float dist,float sdfEdge,float multisampleBlend)
{
float l9_0=dist;
float l9_1=sdfEdge;
float l9_2=clamp(((l9_0-l9_1)*varSdfParams.y)+0.5,0.0,1.0);
vec4 l9_3=sdfSupersampleTapBox(varTex01.xy,varGlyphAtlasUvRect);
float l9_4;
if (multisampleBlend>0.0)
{
vec4 l9_5;
#if (mainTextureLayout==2)
{
l9_5=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.xw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_5=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.xw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
float l9_6=sdfEdge;
vec4 l9_7;
#if (mainTextureLayout==2)
{
l9_7=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_7=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
float l9_8=sdfEdge;
vec4 l9_9;
#if (mainTextureLayout==2)
{
l9_9=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.zy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_9=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.zy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
float l9_10=sdfEdge;
vec4 l9_11;
#if (mainTextureLayout==2)
{
l9_11=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.zw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_11=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),l9_3.zw,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
l9_4=sdfSupersampleBlend(l9_2,vec4(clamp(((l9_5.x-l9_6)*varSdfParams.y)+0.5,0.0,1.0),clamp(((l9_7.x-l9_8)*varSdfParams.y)+0.5,0.0,1.0),clamp(((l9_9.x-l9_10)*varSdfParams.y)+0.5,0.0,1.0),clamp(((l9_11.x-sdfEdge)*varSdfParams.y)+0.5,0.0,1.0)),multisampleBlend);
}
else
{
l9_4=l9_2;
}
return l9_4;
}
int shadowFillTextureGetStereoViewIndex()
{
int l9_0;
#if (shadowFillTextureHasSwappedViews)
{
l9_0=1-sc_GetStereoViewIndex();
}
#else
{
l9_0=sc_GetStereoViewIndex();
}
#endif
return l9_0;
}
int outlineFillTextureGetStereoViewIndex()
{
int l9_0;
#if (outlineFillTextureHasSwappedViews)
{
l9_0=1-sc_GetStereoViewIndex();
}
#else
{
l9_0=sc_GetStereoViewIndex();
}
#endif
return l9_0;
}
float getCornerFade(vec2 corner)
{
int l9_0=clamp(int(PassParameterOverrides_obj.passParams[clamp(int(floor(varParamSlotIndex+0.5)),0,169)].sc_domainParamsIndex),0,169);
if (length(abs(corner-varTex01.xy))>TextComponentParams_obj.textParams[l9_0].backgroundCornerRadius)
{
return 1.0;
}
float l9_1=corner.x;
float l9_2=corner.y;
float l9_3=length(abs(abs(vec2(l9_1-TextComponentParams_obj.textParams[l9_0].backgroundCornerRadius,l9_2-TextComponentParams_obj.textParams[l9_0].backgroundCornerRadius))-varTex01.xy))/TextComponentParams_obj.textParams[l9_0].backgroundCornerRadius;
if (l9_3<0.98000002)
{
return 1.0;
}
if (l9_3>1.0)
{
return 0.0;
}
return smoothstep(1.0,0.98000002,l9_3);
}
int backgroundFillTextureGetStereoViewIndex()
{
int l9_0;
#if (backgroundFillTextureHasSwappedViews)
{
l9_0=1-sc_GetStereoViewIndex();
}
#else
{
l9_0=sc_GetStereoViewIndex();
}
#endif
return l9_0;
}
void sc_writeFragData0(vec4 col)
{
#if (sc_ShaderCacheConstant!=0)
{
col.x+=(sc_CameraUBO_obj.sc_UniformConstants.x*float(sc_ShaderCacheConstant));
}
#endif
sc_FragData0=col;
}
vec4 sc_ApplyBlendModeModifications(vec4 color)
{
vec4 l9_0;
#if (sc_BlendMode==10)
{
l9_0=vec4(mix(vec3(1.0),color.xyz,vec3(color.w)),color.w);
}
#else
{
vec4 l9_1;
#if ((sc_BlendMode==3)||(sc_BlendMode==16))
{
float l9_2=color.w;
float l9_3;
#if (sc_BlendMode==16)
{
l9_3=clamp(l9_2,0.0,1.0);
}
#else
{
l9_3=l9_2;
}
#endif
l9_1=vec4(color.xyz*l9_3,l9_3);
}
#else
{
l9_1=color;
}
#endif
l9_0=l9_1;
}
#endif
return l9_0;
}
void sc_writeTextFragData0(vec3 rgb,float alpha)
{
#if (LEGACY_TEXT_PREMULT)
{
sc_writeFragData0(vec4(rgb*alpha,alpha));
}
#else
{
sc_writeFragData0(sc_ApplyBlendModeModifications(vec4(rgb,alpha)));
}
#endif
}
int colorTextureGetStereoViewIndex()
{
int l9_0;
#if (colorTextureHasSwappedViews)
{
l9_0=1-sc_GetStereoViewIndex();
}
#else
{
l9_0=sc_GetStereoViewIndex();
}
#endif
return l9_0;
}
void main()
{
#if ((sc_StereoRenderingMode==1)&&(sc_StereoRendering_IsClipDistanceEnabled==0))
{
if (varClipDistance<0.0)
{
discard;
}
}
#endif
vec2 l9_0=vec2(fract(varTex01.z),fract(varTex01.w));
int l9_1=int(varPassIdDecorThickness.x+0.5);
int l9_2=clamp(int(PassParameterOverrides_obj.passParams[clamp(int(floor(varParamSlotIndex+0.5)),0,169)].sc_domainParamsIndex),0,169);
int l9_3=clamp(int(TextComponentParams_obj.textParams[l9_2].styleParams_baseIndex)+int(floor(varStyleParamIdentifier+0.5)),0,340);
bool l9_4=l9_1==1;
vec4 l9_5;
float l9_6;
if ((l9_1==0)||l9_4)
{
float l9_7;
#if (ENABLE_SDF)
{
vec4 l9_8;
#if (mainTextureLayout==2)
{
l9_8=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_8=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
l9_7=calculateSdfOpacityMultisampled(l9_8.x,varSdfParams.x);
}
#else
{
l9_7=0.0;
}
#endif
vec4 l9_9;
#if (MAIN_FILL_TEXTURE)
{
vec4 l9_10;
#if (mainFillTextureLayout==2)
{
l9_10=sc_SampleTextureBias(mainFillTextureLayout,mainFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_mainFillTexture)!=0),userUniformsObj.mainFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainFillTexture,SC_SOFTWARE_WRAP_MODE_V_mainFillTexture),(int(SC_USE_UV_MIN_MAX_mainFillTexture)!=0),userUniformsObj.mainFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainFillTexture)!=0),userUniformsObj.mainFillTextureBorderColor,0.0,mainFillTextureArrSC);
}
#else
{
l9_10=sc_SampleTextureBias(mainFillTextureLayout,mainFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_mainFillTexture)!=0),userUniformsObj.mainFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainFillTexture,SC_SOFTWARE_WRAP_MODE_V_mainFillTexture),(int(SC_USE_UV_MIN_MAX_mainFillTexture)!=0),userUniformsObj.mainFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainFillTexture)!=0),userUniformsObj.mainFillTextureBorderColor,0.0,mainFillTexture);
}
#endif
l9_9=l9_10*StyleParamsBuffer_obj.styleParams[l9_3].colorTint;
}
#else
{
l9_9=StyleParamsBuffer_obj.styleParams[l9_3].color;
}
#endif
l9_6=l9_7;
l9_5=l9_9;
}
else
{
l9_6=0.0;
l9_5=vec4(1.0);
}
vec4 l9_11;
float l9_12;
#if (ENABLE_SHADOW)
{
vec4 l9_13;
float l9_14;
if (l9_1==2)
{
float l9_15;
#if (ENABLE_SDF)
{
vec4 l9_16;
#if (mainTextureLayout==2)
{
l9_16=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_16=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
float l9_17;
#if (ENABLE_OUTLINE)
{
l9_17=calculateSdfOpacityMultisampledOutline(l9_16.x,0.5-varSdfParams.w,varSdfParams.x);
}
#else
{
l9_17=calculateSdfOpacityMultisampled(l9_16.x,varSdfParams.x);
}
#endif
l9_15=l9_17;
}
#else
{
l9_15=l9_6;
}
#endif
vec4 l9_18;
#if (SHADOW_FILL_TEXTURE)
{
vec4 l9_19;
#if (shadowFillTextureLayout==2)
{
l9_19=sc_SampleTextureBias(shadowFillTextureLayout,shadowFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_shadowFillTexture,SC_SOFTWARE_WRAP_MODE_V_shadowFillTexture),(int(SC_USE_UV_MIN_MAX_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureBorderColor,0.0,shadowFillTextureArrSC);
}
#else
{
l9_19=sc_SampleTextureBias(shadowFillTextureLayout,shadowFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_shadowFillTexture,SC_SOFTWARE_WRAP_MODE_V_shadowFillTexture),(int(SC_USE_UV_MIN_MAX_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureBorderColor,0.0,shadowFillTexture);
}
#endif
l9_18=l9_19*StyleParamsBuffer_obj.styleParams[l9_3].colorTint;
}
#else
{
l9_18=StyleParamsBuffer_obj.styleParams[l9_3].color;
}
#endif
l9_14=l9_15;
l9_13=l9_18;
}
else
{
l9_14=l9_6;
l9_13=l9_5;
}
l9_12=l9_14;
l9_11=l9_13;
}
#else
{
l9_12=l9_6;
l9_11=l9_5;
}
#endif
vec4 l9_20;
float l9_21;
#if (ENABLE_OUTLINE)
{
vec4 l9_22;
float l9_23;
if (l9_1==3)
{
float l9_24;
#if (ENABLE_SDF)
{
vec4 l9_25;
#if (mainTextureLayout==2)
{
l9_25=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTextureArrSC);
}
#else
{
l9_25=sc_SampleTextureBias(mainTextureLayout,mainTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture),(int(SC_USE_UV_MIN_MAX_mainTexture)!=0),userUniformsObj.mainTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0),userUniformsObj.mainTextureBorderColor,0.0,mainTexture);
}
#endif
l9_24=calculateSdfOpacityMultisampledOutline(l9_25.x,0.5-varSdfParams.w,varSdfParams.x);
}
#else
{
l9_24=l9_12;
}
#endif
vec4 l9_26;
#if (OUTLINE_FILL_TEXTURE)
{
vec4 l9_27;
#if (outlineFillTextureLayout==2)
{
l9_27=sc_SampleTextureBias(outlineFillTextureLayout,outlineFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_outlineFillTexture,SC_SOFTWARE_WRAP_MODE_V_outlineFillTexture),(int(SC_USE_UV_MIN_MAX_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureBorderColor,0.0,outlineFillTextureArrSC);
}
#else
{
l9_27=sc_SampleTextureBias(outlineFillTextureLayout,outlineFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_outlineFillTexture,SC_SOFTWARE_WRAP_MODE_V_outlineFillTexture),(int(SC_USE_UV_MIN_MAX_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureBorderColor,0.0,outlineFillTexture);
}
#endif
l9_26=l9_27*StyleParamsBuffer_obj.styleParams[l9_3].colorTint;
}
#else
{
l9_26=StyleParamsBuffer_obj.styleParams[l9_3].color;
}
#endif
l9_23=l9_24;
l9_22=l9_26;
}
else
{
l9_23=l9_12;
l9_22=l9_11;
}
l9_21=l9_23;
l9_20=l9_22;
}
#else
{
l9_21=l9_12;
l9_20=l9_11;
}
#endif
#if (ENABLE_BACKGROUND)
{
if (l9_1==4)
{
float l9_28=getCornerFade(vec2(0.0));
float l9_29=getCornerFade(vec2(TextComponentParams_obj.textParams[l9_2].backgroundSize.x,0.0));
float l9_30=getCornerFade(TextComponentParams_obj.textParams[l9_2].backgroundSize);
float l9_31=getCornerFade(vec2(0.0,TextComponentParams_obj.textParams[l9_2].backgroundSize.y));
float l9_32=(((1.0*l9_28)*l9_29)*l9_30)*l9_31;
if (l9_32<0.0049999999)
{
discard;
}
vec4 l9_33;
#if (BACKGROUND_FILL_TEXTURE)
{
vec4 l9_34;
#if (backgroundFillTextureLayout==2)
{
l9_34=sc_SampleTextureBias(backgroundFillTextureLayout,backgroundFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].backgroundFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].backgroundFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].backgroundFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_backgroundFillTexture)!=0),userUniformsObj.backgroundFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_backgroundFillTexture,SC_SOFTWARE_WRAP_MODE_V_backgroundFillTexture),(int(SC_USE_UV_MIN_MAX_backgroundFillTexture)!=0),userUniformsObj.backgroundFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_backgroundFillTexture)!=0),userUniformsObj.backgroundFillTextureBorderColor,0.0,backgroundFillTextureArrSC);
}
#else
{
l9_34=sc_SampleTextureBias(backgroundFillTextureLayout,backgroundFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].backgroundFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].backgroundFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].backgroundFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_backgroundFillTexture)!=0),userUniformsObj.backgroundFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_backgroundFillTexture,SC_SOFTWARE_WRAP_MODE_V_backgroundFillTexture),(int(SC_USE_UV_MIN_MAX_backgroundFillTexture)!=0),userUniformsObj.backgroundFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_backgroundFillTexture)!=0),userUniformsObj.backgroundFillTextureBorderColor,0.0,backgroundFillTexture);
}
#endif
l9_33=l9_34*StyleParamsBuffer_obj.styleParams[l9_3].colorTint;
}
#else
{
l9_33=StyleParamsBuffer_obj.styleParams[l9_3].color;
}
#endif
sc_writeTextFragData0(l9_33.xyz,l9_33.w*l9_32);
return;
}
}
#endif
bool l9_35=l9_1==6;
bool l9_36=l9_1==7;
if (((l9_1==5)||l9_35)||l9_36)
{
vec4 l9_37;
if (l9_35)
{
vec4 l9_38;
#if (OUTLINE_FILL_TEXTURE)
{
vec4 l9_39;
#if (outlineFillTextureLayout==2)
{
l9_39=sc_SampleTextureBias(outlineFillTextureLayout,outlineFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_outlineFillTexture,SC_SOFTWARE_WRAP_MODE_V_outlineFillTexture),(int(SC_USE_UV_MIN_MAX_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureBorderColor,0.0,outlineFillTextureArrSC);
}
#else
{
l9_39=sc_SampleTextureBias(outlineFillTextureLayout,outlineFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].outlineFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_outlineFillTexture,SC_SOFTWARE_WRAP_MODE_V_outlineFillTexture),(int(SC_USE_UV_MIN_MAX_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_outlineFillTexture)!=0),userUniformsObj.outlineFillTextureBorderColor,0.0,outlineFillTexture);
}
#endif
l9_38=l9_39*StyleParamsBuffer_obj.styleParams[l9_3].colorTint;
}
#else
{
l9_38=StyleParamsBuffer_obj.styleParams[l9_3].color;
}
#endif
l9_37=l9_38;
}
else
{
vec4 l9_40;
if (l9_36)
{
vec4 l9_41;
#if (SHADOW_FILL_TEXTURE)
{
vec4 l9_42;
#if (shadowFillTextureLayout==2)
{
l9_42=sc_SampleTextureBias(shadowFillTextureLayout,shadowFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_shadowFillTexture,SC_SOFTWARE_WRAP_MODE_V_shadowFillTexture),(int(SC_USE_UV_MIN_MAX_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureBorderColor,0.0,shadowFillTextureArrSC);
}
#else
{
l9_42=sc_SampleTextureBias(shadowFillTextureLayout,shadowFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].shadowFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_shadowFillTexture,SC_SOFTWARE_WRAP_MODE_V_shadowFillTexture),(int(SC_USE_UV_MIN_MAX_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_shadowFillTexture)!=0),userUniformsObj.shadowFillTextureBorderColor,0.0,shadowFillTexture);
}
#endif
l9_41=l9_42*StyleParamsBuffer_obj.styleParams[l9_3].colorTint;
}
#else
{
l9_41=StyleParamsBuffer_obj.styleParams[l9_3].color;
}
#endif
l9_40=l9_41;
}
else
{
vec4 l9_43;
#if (MAIN_FILL_TEXTURE)
{
vec4 l9_44;
#if (mainFillTextureLayout==2)
{
l9_44=sc_SampleTextureBias(mainFillTextureLayout,mainFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_mainFillTexture)!=0),userUniformsObj.mainFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainFillTexture,SC_SOFTWARE_WRAP_MODE_V_mainFillTexture),(int(SC_USE_UV_MIN_MAX_mainFillTexture)!=0),userUniformsObj.mainFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainFillTexture)!=0),userUniformsObj.mainFillTextureBorderColor,0.0,mainFillTextureArrSC);
}
#else
{
l9_44=sc_SampleTextureBias(mainFillTextureLayout,mainFillTextureGetStereoViewIndex(),TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy+(l9_0*(TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.zw-TextComponentParams_obj.textParams[l9_2].mainFillTexture_uvMinMax.xy)),(int(SC_USE_UV_TRANSFORM_mainFillTexture)!=0),userUniformsObj.mainFillTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainFillTexture,SC_SOFTWARE_WRAP_MODE_V_mainFillTexture),(int(SC_USE_UV_MIN_MAX_mainFillTexture)!=0),userUniformsObj.mainFillTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_mainFillTexture)!=0),userUniformsObj.mainFillTextureBorderColor,0.0,mainFillTexture);
}
#endif
l9_43=l9_44*StyleParamsBuffer_obj.styleParams[l9_3].colorTint;
}
#else
{
l9_43=StyleParamsBuffer_obj.styleParams[l9_3].color;
}
#endif
l9_40=l9_43;
}
l9_37=l9_40;
}
float l9_45=abs(varTex01.y);
float l9_46=dFdy(varTex01.y);
float l9_47;
if (l9_45>varPassIdDecorThickness.y)
{
l9_47=l9_37.w*smoothstep(varPassIdDecorThickness.y+(abs(l9_46)*0.5),varPassIdDecorThickness.y,l9_45);
}
else
{
l9_47=l9_37.w;
}
if (l9_47<0.0099999998)
{
discard;
}
sc_writeTextFragData0(l9_37.xyz,l9_47);
return;
}
if (l9_4)
{
vec4 l9_48;
#if (colorTextureLayout==2)
{
l9_48=sc_SampleTextureBias(colorTextureLayout,colorTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_colorTexture)!=0),userUniformsObj.colorTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_colorTexture,SC_SOFTWARE_WRAP_MODE_V_colorTexture),(int(SC_USE_UV_MIN_MAX_colorTexture)!=0),userUniformsObj.colorTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_colorTexture)!=0),userUniformsObj.colorTextureBorderColor,0.0,colorTextureArrSC);
}
#else
{
l9_48=sc_SampleTextureBias(colorTextureLayout,colorTextureGetStereoViewIndex(),varTex01.xy,(int(SC_USE_UV_TRANSFORM_colorTexture)!=0),userUniformsObj.colorTextureTransform,ivec2(SC_SOFTWARE_WRAP_MODE_U_colorTexture,SC_SOFTWARE_WRAP_MODE_V_colorTexture),(int(SC_USE_UV_MIN_MAX_colorTexture)!=0),userUniformsObj.colorTextureUvMinMax,(int(SC_USE_CLAMP_TO_BORDER_colorTexture)!=0),userUniformsObj.colorTextureBorderColor,0.0,colorTexture);
}
#endif
sc_writeTextFragData0(l9_48.xyz,l9_48.w*l9_20.w);
}
else
{
#if (ENABLE_SDF)
{
sc_writeTextFragData0(l9_20.xyz,l9_20.w*l9_21);
}
#else
{
vec4 l9_49;
#if (mainTextureLayout==2)
{
bool l9_50=(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0)&&(!(int(SC_USE_UV_MIN_MAX_mainTexture)!=0));
float l9_51=sc_SoftwareWrapEarly(varTex01.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).x);
float l9_52=sc_SoftwareWrapEarly(varTex01.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).y);
vec2 l9_53;
float l9_54;
#if (SC_USE_UV_MIN_MAX_mainTexture)
{
bool l9_55;
#if (SC_USE_CLAMP_TO_BORDER_mainTexture)
{
l9_55=ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).x==3;
}
#else
{
l9_55=(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0);
}
#endif
float l9_56=1.0;
float l9_57=sc_ClampUV(l9_51,userUniformsObj.mainTextureUvMinMax.x,userUniformsObj.mainTextureUvMinMax.z,l9_55,l9_56);
float l9_58=l9_56;
bool l9_59;
#if (SC_USE_CLAMP_TO_BORDER_mainTexture)
{
l9_59=ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).y==3;
}
#else
{
l9_59=(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0);
}
#endif
float l9_60=l9_58;
float l9_61=sc_ClampUV(l9_52,userUniformsObj.mainTextureUvMinMax.y,userUniformsObj.mainTextureUvMinMax.w,l9_59,l9_60);
l9_54=l9_60;
l9_53=vec2(l9_57,l9_61);
}
#else
{
l9_54=1.0;
l9_53=vec2(l9_51,l9_52);
}
#endif
vec2 l9_62=sc_TransformUV(l9_53,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform);
float l9_63=l9_54;
float l9_64=sc_SoftwareWrapLate(l9_62.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).x,l9_50,l9_63);
float l9_65=l9_63;
vec3 l9_66=sc_SamplingCoordsViewToGlobal(vec2(l9_64,sc_SoftwareWrapLate(l9_62.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).y,l9_50,l9_63)),mainTextureLayout,mainTextureGetStereoViewIndex());
vec4 l9_67=textureLod(mainTextureArrSC,l9_66,0.0);
vec4 l9_68;
#if (SC_USE_CLAMP_TO_BORDER_mainTexture)
{
l9_68=mix(userUniformsObj.mainTextureBorderColor,l9_67,vec4(l9_65));
}
#else
{
l9_68=l9_67;
}
#endif
l9_49=l9_68;
}
#else
{
bool l9_69=(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0)&&(!(int(SC_USE_UV_MIN_MAX_mainTexture)!=0));
float l9_70=sc_SoftwareWrapEarly(varTex01.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).x);
float l9_71=sc_SoftwareWrapEarly(varTex01.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).y);
vec2 l9_72;
float l9_73;
#if (SC_USE_UV_MIN_MAX_mainTexture)
{
bool l9_74;
#if (SC_USE_CLAMP_TO_BORDER_mainTexture)
{
l9_74=ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).x==3;
}
#else
{
l9_74=(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0);
}
#endif
float l9_75=1.0;
float l9_76=sc_ClampUV(l9_70,userUniformsObj.mainTextureUvMinMax.x,userUniformsObj.mainTextureUvMinMax.z,l9_74,l9_75);
float l9_77=l9_75;
bool l9_78;
#if (SC_USE_CLAMP_TO_BORDER_mainTexture)
{
l9_78=ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).y==3;
}
#else
{
l9_78=(int(SC_USE_CLAMP_TO_BORDER_mainTexture)!=0);
}
#endif
float l9_79=l9_77;
float l9_80=sc_ClampUV(l9_71,userUniformsObj.mainTextureUvMinMax.y,userUniformsObj.mainTextureUvMinMax.w,l9_78,l9_79);
l9_73=l9_79;
l9_72=vec2(l9_76,l9_80);
}
#else
{
l9_73=1.0;
l9_72=vec2(l9_70,l9_71);
}
#endif
vec2 l9_81=sc_TransformUV(l9_72,(int(SC_USE_UV_TRANSFORM_mainTexture)!=0),userUniformsObj.mainTextureTransform);
float l9_82=l9_73;
float l9_83=sc_SoftwareWrapLate(l9_81.x,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).x,l9_69,l9_82);
float l9_84=l9_82;
vec3 l9_85=sc_SamplingCoordsViewToGlobal(vec2(l9_83,sc_SoftwareWrapLate(l9_81.y,ivec2(SC_SOFTWARE_WRAP_MODE_U_mainTexture,SC_SOFTWARE_WRAP_MODE_V_mainTexture).y,l9_69,l9_82)),mainTextureLayout,mainTextureGetStereoViewIndex());
vec4 l9_86=textureLod(mainTexture,l9_85.xy,0.0);
vec4 l9_87;
#if (SC_USE_CLAMP_TO_BORDER_mainTexture)
{
l9_87=mix(userUniformsObj.mainTextureBorderColor,l9_86,vec4(l9_84));
}
#else
{
l9_87=l9_86;
}
#endif
l9_49=l9_87;
}
#endif
sc_writeTextFragData0(l9_20.xyz,l9_49.x*l9_20.w);
}
#endif
}
}
#endif // #elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
