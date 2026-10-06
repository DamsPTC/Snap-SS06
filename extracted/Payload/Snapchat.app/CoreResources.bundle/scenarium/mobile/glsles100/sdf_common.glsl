#pragma once
#if defined VERTEX_SHADER
#elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
#include <required2.glsl>
float sdfCoverage(float dist,float slope,float bias)
{
return clamp((dist*slope)-bias,0.0,1.0);
}
vec4 sdfSupersampleTapBox(vec2 uv,vec4 tileRect)
{
vec2 duv=(dFdx(uv)+dFdy(uv))*0.35355338;
return vec4(clamp(uv-duv,tileRect.xy,tileRect.zw),clamp(uv+duv,tileRect.xy,tileRect.zw));
}
float sdfSupersampleBlend(float centerCoverage,vec4 tapCoverage,float blend)
{
float supersampled=((((centerCoverage+tapCoverage.x)+tapCoverage.y)+tapCoverage.z)+tapCoverage.w)*0.2;
return mix(centerCoverage,supersampled,blend);
}
#endif // #elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
