#pragma once
#include <metal_stdlib>
#include <simd/simd.h>
using namespace metal;
//SG_REFLECTION_BEGIN(100)
//SG_REFLECTION_END

namespace SNAP_VS {
} // VERTEX SHADER


namespace SNAP_FS {
float sdfCoverage(thread const float& dist,thread const float& slope,thread const float& bias0)
{
return fast::clamp((dist*slope)-bias0,0.0,1.0);
}
float4 sdfSupersampleTapBox(thread const float2& uv,thread const float4& tileRect)
{
float2 duv=(dfdx(uv)+dfdy(uv))*0.35355338;
return float4(fast::clamp(uv-duv,tileRect.xy,tileRect.zw),fast::clamp(uv+duv,tileRect.xy,tileRect.zw));
}
float sdfSupersampleBlend(thread const float& centerCoverage,thread const float4& tapCoverage,thread const float& blend)
{
float supersampled=((((centerCoverage+tapCoverage.x)+tapCoverage.y)+tapCoverage.z)+tapCoverage.w)*0.2;
return mix(centerCoverage,supersampled,blend);
}
} // FRAGMENT SHADER
