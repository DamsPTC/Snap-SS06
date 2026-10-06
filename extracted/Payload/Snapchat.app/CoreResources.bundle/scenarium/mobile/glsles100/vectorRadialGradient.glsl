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
uniform float u_radial_a11;
uniform float u_radial_a12;
uniform float u_radial_a13;
uniform float u_radial_fx;
uniform float u_radial_a21;
uniform float u_radial_a22;
uniform float u_radial_a23;
uniform float u_radial_fy;
uniform float u_radial_a;
uniform float u_radial_fr;
uniform float u_radial_dr;
uniform float u_radial_dx;
uniform float u_radial_dy;
uniform float u_radial_invA;
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
float l9_0=(((v_canvasPos.x*u_radial_a11)+(v_canvasPos.y*u_radial_a12))+u_radial_a13)-u_radial_fx;
float l9_1=(((v_canvasPos.x*u_radial_a21)+(v_canvasPos.y*u_radial_a22))+u_radial_a23)-u_radial_fy;
float l9_2;
if (u_radial_a<0.00050000002)
{
float l9_3=((u_radial_dr*u_radial_fr)+(l9_0*u_radial_dx))+(l9_1*u_radial_dy);
float l9_4;
if (abs(l9_3)>1e-10)
{
l9_4=(0.5*(((l9_0*l9_0)+(l9_1*l9_1))-(u_radial_fr*u_radial_fr)))/l9_3;
}
else
{
l9_4=0.0;
}
l9_2=l9_4;
}
else
{
float l9_5=(((u_radial_dr*u_radial_fr)+(l9_0*u_radial_dx))+(l9_1*u_radial_dy))*u_radial_invA;
l9_2=sqrt(max((l9_5*l9_5)+((((l9_0*l9_0)+(l9_1*l9_1))-(u_radial_fr*u_radial_fr))*u_radial_invA),0.0))-l9_5;
}
sc_writeFragData0(gradientColor(gradientSpread(l9_2,u_spreadMode)));
}
#endif // #elif defined FRAGMENT_SHADER // #if defined VERTEX_SHADER
