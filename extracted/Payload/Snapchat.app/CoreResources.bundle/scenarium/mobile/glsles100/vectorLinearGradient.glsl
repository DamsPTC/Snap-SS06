#version 100 sc_convert_to 300 es
#define STD_DISABLE_VERTEX_NORMAL 1
#define STD_DISABLE_VERTEX_TANGENT 1
#define STD_DISABLE_VERTEX_TEXTURE0 1
#define STD_DISABLE_VERTEX_TEXTURE1 1
#if defined VERTEX_SHADER
#include <std2_vs.glsl>
#include <std2_fs.glsl>
varying vec2 v_canvasPos;
attribute vec2 a_canvasPos;
void main()
{
v_canvasPos=a_canvasPos;
sc_ProcessVertex(sc_LoadVertexAttributes());
}
#elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
#include <std2_vs.glsl>
#include <std2_fs.glsl>
uniform vec4 u_stopColors[16];
uniform int u_stopCount;
uniform float u_stopOffsets[16];
uniform float u_linear_dx;
uniform float u_linear_dy;
uniform float u_linear_offset;
uniform int u_spreadMode;
varying vec2 v_canvasPos;
float gradientSpread(float t,int spread)
{
if (spread==0)
{
return clamp(t,0.0,1.0);
}
else
{
if (spread==2)
{
return t-floor(t);
}
}
float l9_0=t;
float l9_1=t;
float l9_2=l9_0-(2.0*floor(l9_1*0.5));
float l9_3;
if (l9_2>1.0)
{
l9_3=2.0-l9_2;
}
else
{
l9_3=l9_2;
}
return l9_3;
}
vec4 gradientColor(float t)
{
vec4 l9_0;
l9_0=u_stopColors[0];
vec4 l9_1;
int l9_2=1;
for (int snapLoopIndex=0; snapLoopIndex==0; snapLoopIndex+=0)
{
if (l9_2<16)
{
if (l9_2>=u_stopCount)
{
break;
}
if (t<=u_stopOffsets[l9_2])
{
int l9_3=l9_2-1;
float l9_4=u_stopOffsets[l9_2]-u_stopOffsets[l9_3];
float l9_5;
if (l9_4>1e-06)
{
l9_5=clamp((t-u_stopOffsets[l9_3])/l9_4,0.0,1.0);
}
else
{
l9_5=0.0;
}
return mix(u_stopColors[l9_3],u_stopColors[l9_2],vec4(l9_5));
}
l9_1=u_stopColors[l9_2];
l9_2++;
l9_0=l9_1;
continue;
}
else
{
break;
}
}
return l9_0;
}
void main()
{
sc_DiscardStereoFragment();
sc_writeFragData0(gradientColor(gradientSpread(((v_canvasPos.x*u_linear_dx)+(v_canvasPos.y*u_linear_dy))+u_linear_offset,u_spreadMode)));
}
#endif // #elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
