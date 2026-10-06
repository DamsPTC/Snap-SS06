/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001415e8; end: 0014161b;  */

void FUN_001415e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0014161c; end: 00141637;  */

undefined8 FUN_0014161c(void)

{
  return 0x14162c;
}



/* Entry: 00141638; end: 0014165f;  */

void FUN_00141638(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 00141660; end: 0014167b;  */

undefined1  [16] FUN_00141660(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x141670;
  return auVar1;
}



/* Entry: 0014167c; end: 001416a3;  */

void FUN_0014167c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 001416a4; end: 001416b7;  */

undefined1  [16] FUN_001416a4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1416b4;
  return auVar1;
}



/* Entry: 001416b8; end: 001416e3;  */

undefined1  [16] FUN_001416b8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 001416e4; end: 00141717;  */

void FUN_001416e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 00141718; end: 0014172b;  */

undefined1  [16] FUN_00141718(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x141728;
  return auVar1;
}



/* Entry: 0014172c; end: 00141783;  */

undefined8 FUN_0014172c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  FUN_00141784();
  return uVar1;
}



/* Entry: 00141784; end: 001417bb;  */

void FUN_00141784(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 001417bc; end: 00141807;  */

void FUN_001417bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00141808(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
               *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  *(undefined8 *)(unaff_x20 + 0x78) = param_3;
  *(undefined8 *)(unaff_x20 + 0x80) = param_4;
  return;
}



/* Entry: 00141808; end: 0014183f;  */

void FUN_00141808(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00141840; end: 001418cb;  */

undefined1  [16] FUN_00141840(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  qword qVar3;
  qword qVar4;
  bool bVar5;
  char *pcVar6;
  qword unaff_x20;
  undefined1 auVar7 [16];
  
  pcVar6 = segment_command_00000020.segname;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,&UNK_0000ccec);
  }
  *param_1 = pcVar6;
  *(qword *)(pcVar6 + 0x20) = unaff_x20;
  bVar5 = *(long *)(unaff_x20 + 0x70) != 0;
  uVar1 = 0;
  if (bVar5) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  lVar2 = -0x2000000000000000;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x70);
  }
  qVar3 = 0;
  if (bVar5) {
    qVar3 = *(qword *)(unaff_x20 + 0x78);
  }
  qVar4 = 0xc000000000000000;
  if (bVar5) {
    qVar4 = *(qword *)(unaff_x20 + 0x80);
  }
  *(undefined8 *)pcVar6 = uVar1;
  *(long *)(pcVar6 + 8) = lVar2;
  *(qword *)(pcVar6 + 0x10) = qVar3;
  *(qword *)(pcVar6 + 0x18) = qVar4;
  FUN_00141784();
  auVar7._8_8_ = pcVar6;
  auVar7._0_8_ = FUN_001418cc;
  return auVar7;
}



/* Entry: 001418cc; end: 0014198b;  */

void FUN_001418cc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar4 = param_1[4];
  uVar9 = *param_1;
  uVar5 = param_1[1];
  uVar8 = param_1[2];
  uVar2 = *(undefined8 *)(lVar4 + 0x68);
  uVar6 = *(undefined8 *)(lVar4 + 0x70);
  uVar3 = *(undefined8 *)(lVar4 + 0x78);
  uVar7 = *(undefined8 *)(lVar4 + 0x80);
  if ((param_2 & 1) == 0) {
    FUN_00141808(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x68) = uVar9;
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
    *(undefined8 *)(lVar4 + 0x78) = uVar8;
    *(undefined8 *)(lVar4 + 0x80) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    func_0x00023304(uVar8,uVar1);
    FUN_00141808(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x68) = uVar9;
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
    *(undefined8 *)(lVar4 + 0x78) = uVar8;
    *(undefined8 *)(lVar4 + 0x80) = uVar1;
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    FUN_00023358(uVar1,uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 0014198c; end: 00141a1f;  */

bool FUN_0014198c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    FUN_001441bc(&uStack_50,auStack_70);
  }
  else {
    FUN_001441bc(&uStack_50,auStack_70);
    FUN_00141808(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_00141808(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 00141a20; end: 00141a47;  */

void FUN_00141a20(void)

{
  long unaff_x20;
  
  FUN_00141808(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
               *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 00141a48; end: 00141a4f;  */

void FUN_00141a48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 00141a50; end: 00141a77;  */

void FUN_00141a50(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Entry: 00141a78; end: 00141ab7;  */

undefined1  [16] FUN_00141a78(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x141a88;
  return auVar1;
}



/* Entry: 00141ab8; end: 00141ae3;  */

undefined1  [16] FUN_00141ab8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 00141ae4; end: 00141b17;  */

void FUN_00141ae4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 00141b18; end: 00141b2b;  */

undefined1  [16] FUN_00141b18(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x141b28;
  return auVar1;
}



/* Entry: 00141b2c; end: 00141b5b;  */

undefined1  [16] FUN_00141b2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                  *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 00141b5c; end: 00141b8f;  */

void FUN_00141b5c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 00141b90; end: 00141be7;  */

undefined1  [16] FUN_00141b90(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x141ba0;
  return auVar1;
}



/* Entry: 00141be8; end: 00141c13;  */

undefined1  [16] FUN_00141be8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00141c14; end: 00141c47;  */

void FUN_00141c14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00141c48; end: 00141c5b;  */

undefined8 FUN_00141c48(void)

{
  return 0x141c58;
}



/* Entry: 00141c5c; end: 00141c87;  */

undefined1  [16] FUN_00141c5c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 00141c88; end: 00141cbb;  */

void FUN_00141c88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00141cbc; end: 00141cf3;  */

undefined1  [16] FUN_00141cbc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x141ccc;
  return auVar1;
}



/* Entry: 00141cf4; end: 00141d1f;  */

undefined1  [16] FUN_00141cf4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 00141d20; end: 00141d53;  */

void FUN_00141d20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 00141d54; end: 00141d93;  */

undefined1  [16] FUN_00141d54(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x141d64;
  return auVar1;
}



/* Entry: 00141d94; end: 00141dbb;  */

void FUN_00141d94(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  return;
}



/* Entry: 00141dbc; end: 00141dfb;  */

undefined1  [16] FUN_00141dbc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x141dcc;
  return auVar1;
}



/* Entry: 00141dfc; end: 00141e27;  */

undefined1  [16] FUN_00141dfc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 00141e28; end: 00141e5b;  */

void FUN_00141e28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 00141e5c; end: 00141e6f;  */

undefined1  [16] FUN_00141e5c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x141e6c;
  return auVar1;
}



/* Entry: 00141e70; end: 00141e9f;  */

undefined1  [16] FUN_00141e70(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                  *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 00141ea0; end: 00141ed3;  */

void FUN_00141ea0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 00141ed4; end: 00141f27;  */

undefined1  [16] FUN_00141ed4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x141ee4;
  return auVar1;
}



/* Entry: 00141f28; end: 00141f53;  */

undefined1  [16] FUN_00141f28(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00141f54; end: 00141f87;  */

void FUN_00141f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00141f88; end: 00141f9b;  */

undefined8 FUN_00141f88(void)

{
  return 0x141f98;
}



/* Entry: 00141f9c; end: 00141fc7;  */

undefined1  [16] FUN_00141f9c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 00141fc8; end: 00141ffb;  */

void FUN_00141fc8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00141ffc; end: 0014200f;  */

undefined1  [16] FUN_00141ffc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x14200c;
  return auVar1;
}



/* Entry: 00142010; end: 0014203f;  */

undefined1  [16] FUN_00142010(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 00142040; end: 00142073;  */

void FUN_00142040(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 00142074; end: 001420cb;  */

undefined1  [16] FUN_00142074(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x142084;
  return auVar1;
}



/* Entry: 001420cc; end: 0014218b;  */

void FUN_001420cc(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dae70,0x4b,&uStack_48,&lStack_40);
  puRam0000000000b64b28 = puStack_38;
  lRam0000000000b64b20 = lStack_40;
  puRam0000000000b64b38 = puStack_28;
  puRam0000000000b64b30 = puStack_30;
  puRam0000000000b64b48 = puStack_18;
  puRam0000000000b64b40 = puStack_20;
  return;
}



/* Entry: 0014218c; end: 0014222b;  */

void FUN_0014218c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0668 != -1) {
    _swift_once(0xaf0668,FUN_001420cc);
  }
  uVar5 = uRam0000000000b64b48;
  uVar4 = uRam0000000000b64b40;
  uVar3 = uRam0000000000b64b38;
  uVar2 = uRam0000000000b64b30;
  uVar1 = uRam0000000000b64b28;
  *param_1 = uRam0000000000b64b20;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0014222c; end: 001423eb;  */

/* WARNING: Removing unreachable block (ram,0x001423a8) */

void FUN_0014222c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 != 1) {
            if (lVar1 != 2) goto LAB_001422c8;
            pcVar5 = *(code **)(param_3 + 0x1a0);
            FUN_0014420c();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_009af9e0;
            goto LAB_001422b4;
          }
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 == 3) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0014424c();
            lVar2 = unaff_x20 + 0x18;
            puVar3 = &UNK_009b4bc8;
            goto LAB_001422b4;
          }
          if (lVar1 != 4) goto LAB_001422c8;
          pcVar5 = *(code **)(param_3 + 0x150);
        }
LAB_00142398:
        (*pcVar5)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x198);
            FUN_00145594();
            lVar2 = unaff_x20 + 0x68;
            puVar3 = &UNK_009b3c08;
          }
          else {
            if (lVar1 != 6) goto LAB_001422c8;
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0014428c();
            lVar2 = unaff_x20 + 0x30;
            puVar3 = &UNK_009afa80;
          }
        }
        else {
          if (lVar1 != 7) {
            if (lVar1 == 8) {
              pcVar5 = *(code **)(param_3 + 0x150);
              goto LAB_00142398;
            }
            goto LAB_001422c8;
          }
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x001442cc();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_009b47d0;
        }
LAB_001422b4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_001422c8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 001423ec; end: 0014260f;  */

void FUN_001423ec(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_0019cf00(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_0019cc98(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[0xe];
  if (uVar8 != 0) {
    uVar1 = unaff_x20[0xf];
    uVar2 = unaff_x20[0x10];
    uVar9 = unaff_x20[0xd];
    __ss6HasherV8_combineyySuF(5);
    _swift_bridgeObjectRetain(uVar8);
    func_0x00023304(uVar1,uVar2);
    func_0x00192fb8(param_1,uVar9,uVar8,uVar1,uVar2);
    FUN_00141808(uVar9,uVar8,uVar1,uVar2);
  }
  if ((*(long *)(unaff_x20[6] + 0x10) != 0) && (FUN_0019caa4(unaff_x20[6],6), unaff_x21 != 0)) {
    return;
  }
  uVar8 = unaff_x20[7];
  if ((char)unaff_x20[8] == '\x01') {
    if (uVar8 != 0) {
      __ss6HasherV8_combineyySuF(7);
      bVar4 = uVar8 == 2;
      uVar8 = 1;
      if (bVar4) {
        uVar8 = 2;
      }
LAB_00142564:
      __ss6HasherV8_combineyySuF(uVar8);
    }
  }
  else if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    goto LAB_00142564;
  }
  uVar1 = unaff_x20[9];
  uVar2 = unaff_x20[10];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(8);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[0xb];
  uVar3 = (uint)(unaff_x20[0xc] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[0xc] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001425e8;
    }
    lVar6 = (long)(int)uVar8;
    lVar7 = (long)uVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar8 + 0x10);
    lVar7 = *(long *)(uVar8 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_001425e8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00142610; end: 0014281f;  */

void FUN_00142610(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  ulong *puVar5;
  code *pcVar6;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar4 = unaff_x20[2];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      FUN_0014420c();
      (*pcVar6)(uVar4,2,&UNK_009af9e0,uVar2,param_2,param_3);
      uVar2 = uVar4;
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[3];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      func_0x0014424c();
      (*pcVar6)(uVar4,3,&UNK_009b4bc8,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar2 = unaff_x20[5];
    uVar4 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar4 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar4 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,4,param_2,param_3), unaff_x21 == 0)) &&
       (puVar3 = unaff_x20, FUN_00142820(), unaff_x21 == 0)) {
      puVar5 = (ulong *)unaff_x20[6];
      if (puVar5[2] != 0) {
        pcVar6 = *(code **)(param_3 + 0x118);
        func_0x0014428c();
        (*pcVar6)(puVar5,6,&UNK_009afa80,puVar3,param_2,param_3);
        puVar3 = puVar5;
      }
      if (unaff_x20[7] != 0) {
        uStack_58 = (undefined1)unaff_x20[8];
        pcVar6 = *(code **)(param_3 + 0x80);
        uStack_60 = unaff_x20[7];
        func_0x001442cc();
        (*pcVar6)(&uStack_60,7,&UNK_009b47d0,puVar3,param_2,param_3);
      }
      uVar2 = unaff_x20[10];
      uVar4 = unaff_x20[9] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar4 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[9],uVar2,8,param_2,param_3);
      }
      FUN_0013ad2c(param_1,unaff_x20[0xb],unaff_x20[0xc],param_2,param_3);
    }
  }
  return;
}



/* Entry: 00142820; end: 001428a3;  */

void FUN_00142820(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x70);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00145594();
    (*pcVar1)(&uStack_60,5,&UNK_009b3c08,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 001428a4; end: 001428a7;  */

uint FUN_001428a4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_001481b8(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_001455e0(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar4 = param_1[0xe];
          uVar2 = param_1[0xd];
          uVar9 = param_1[0x10];
          uVar7 = param_1[0xf];
          uVar6 = param_2[0xe];
          uVar5 = param_2[0xd];
          uVar10 = param_2[0x10];
          uVar8 = param_2[0xf];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_00144608;
            FUN_001441bc(&uStack_80,auStack_c0);
            FUN_001441bc(&uStack_a0,auStack_c0);
LAB_00144664:
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[6];
            FUN_001483f8(uVar2,param_2[6]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[7];
              uVar4 = param_2[7];
              if ((char)param_2[8] == '\x01') {
                if (uVar4 == 0) {
                  if (uVar2 == 0) goto LAB_00144738;
                }
                else if (uVar4 == 1) {
                  if (uVar2 == 1) {
LAB_00144738:
                    uVar2 = param_1[9];
                    if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (), (uVar2 & 1) != 0)) {
                      uVar2 = param_1[0xb];
                      FUN_00038814(uVar2,param_1[0xc],param_2[0xb],param_2[0xc]);
                      uVar1 = (uint)uVar2;
                      goto LAB_001446f8;
                    }
                  }
                }
                else if (uVar2 == 2) goto LAB_00144738;
              }
              else if (uVar2 == uVar4) goto LAB_00144738;
            }
          }
          else {
            if (uVar6 == 0) {
LAB_00144608:
              FUN_001441bc(&uStack_80,auStack_c0);
              FUN_001441bc(&uStack_a0,auStack_c0);
              FUN_00141808(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              FUN_001441bc(&uStack_80,auStack_c0);
              FUN_001441bc(&uStack_a0,auStack_c0);
              uVar3 = uVar7;
              FUN_00038814(uVar7,uVar9,uVar8,uVar10);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_00144664;
            }
            else {
              FUN_001441bc(&uStack_80,auStack_c0);
              FUN_001441bc(&uStack_a0,auStack_c0);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_001446f8:
  return uVar1 & 1;
}



/* Entry: 001428a8; end: 00142937;  */

/* WARNING: Removing unreachable block (ram,0x001428f8) */

void FUN_001428a8(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001423ec(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00142938; end: 00142997;  */

void FUN_00142938(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[3] = puVar1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = puVar1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0xe000000000000000;
  param_1[0xc] = 0xc000000000000000;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  return;
}



/* Entry: 00142998; end: 001429c7;  */

undefined1  [16] FUN_00142998(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                  *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 001429c8; end: 001429fb;  */

void FUN_001429c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 001429fc; end: 00142a0f;  */

undefined1  [16] FUN_001429fc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x142a0c;
  return auVar1;
}



/* Entry: 00142a10; end: 00142a23;  */

void FUN_00142a10(void)

{
  FUN_0014222c();
  return;
}



/* Entry: 00142a24; end: 00142a73;  */

void FUN_00142a24(void)

{
  FUN_00142610();
  return;
}



/* Entry: 00142a74; end: 00142b13;  */

void FUN_00142a74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0668 != -1) {
    _swift_once(0xaf0668,FUN_001420cc);
  }
  uVar5 = uRam0000000000b64b48;
  uVar4 = uRam0000000000b64b40;
  uVar3 = uRam0000000000b64b38;
  uVar2 = uRam0000000000b64b30;
  uVar1 = uRam0000000000b64b28;
  *param_1 = uRam0000000000b64b20;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00142b14; end: 00142b4f;  */

void FUN_00142b14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf0700;
  uStack_18 = param_1;
  func_0x000115a8(0xaf0700,&UNK_007dade8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00142b50; end: 00142d6b;  */

/* WARNING: Removing unreachable block (ram,0x00142bcc) */

void FUN_00142b50(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_110,0);
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_120 = uStack_d0;
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  FUN_001423ec(&uStack_160);
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_d0 = uStack_120;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00142d6c; end: 00142deb;  */

uint FUN_00142d6c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_001444c4(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 00142dec; end: 00142e13;  */

undefined * FUN_00142dec(void)

{
  return &UNK_009af708;
}



/* Entry: 00142e14; end: 00142ed3;  */

void FUN_00142e14(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dae00,0x6d,&uStack_48,&lStack_40);
  puRam0000000000b64b58 = puStack_38;
  lRam0000000000b64b50 = lStack_40;
  puRam0000000000b64b68 = puStack_28;
  puRam0000000000b64b60 = puStack_30;
  puRam0000000000b64b78 = puStack_18;
  puRam0000000000b64b70 = puStack_20;
  return;
}



/* Entry: 00142ed4; end: 00142f73;  */

void FUN_00142ed4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0690 != -1) {
    _swift_once(0xaf0690,FUN_00142e14);
  }
  uVar5 = uRam0000000000b64b78;
  uVar4 = uRam0000000000b64b70;
  uVar3 = uRam0000000000b64b68;
  uVar2 = uRam0000000000b64b60;
  uVar1 = uRam0000000000b64b58;
  *param_1 = uRam0000000000b64b50;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00142f74; end: 001430f7;  */

/* WARNING: Removing unreachable block (ram,0x001430f4) */

void FUN_00142f74(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar4 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 2) goto LAB_00142ffc;
            pcVar4 = *(code **)(param_3 + 0x150);
          }
        }
        else if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 4) goto LAB_00142ffc;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_00142fec:
        (*pcVar4)();
      }
      else {
        if (6 < lVar1) {
          if (lVar1 == 7) {
            pcVar4 = *(code **)(param_3 + 0x180);
            func_0x001442cc();
            lVar2 = unaff_x20 + 0x48;
            puVar3 = &UNK_009b47d0;
            goto LAB_001430e0;
          }
          if (lVar1 != 8) goto LAB_00142ffc;
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_00142fec;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x138);
          goto LAB_00142fec;
        }
        if (lVar1 != 6) goto LAB_00142ffc;
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0014424c();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_009b4bc8;
LAB_001430e0:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_00142ffc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 001430f8; end: 001432c7;  */

void FUN_001430f8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((unaff_x20[4] & 1) != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar1 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((unaff_x20[7] & 1) != 0) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  if ((*(long *)(unaff_x20[8] + 0x10) != 0) && (FUN_0019cc98(unaff_x20[8],6), unaff_x21 != 0)) {
    return;
  }
  uVar8 = unaff_x20[9];
  if ((char)unaff_x20[10] == '\x01') {
    if (uVar8 != 0) {
      __ss6HasherV8_combineyySuF(7);
      bVar4 = uVar8 == 2;
      uVar8 = 1;
      if (bVar4) {
        uVar8 = 2;
      }
LAB_00143230:
      __ss6HasherV8_combineyySuF(uVar8);
    }
  }
  else if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    goto LAB_00143230;
  }
  uVar1 = unaff_x20[0xb];
  uVar2 = unaff_x20[0xc];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(8);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[0xd];
  uVar3 = (uint)(unaff_x20[0xe] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[0xe] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001432a8;
    }
    lVar6 = (long)(int)uVar8;
    lVar7 = (long)uVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar8 + 0x10);
    lVar7 = *(long *)(uVar8 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_001432a8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001432c8; end: 001434bb;  */

void FUN_001432c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar3 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar3 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar3 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (((char)unaff_x20[4] != '\x01' ||
        ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)))) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[6];
      uVar3 = uVar2 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar3 = uVar1 >> 0x38 & 0xf;
      }
      if ((uVar3 == 0) ||
         ((**(code **)(param_3 + 0x70))(uVar2,uVar1,4,param_2,param_3), unaff_x21 == 0)) {
        if ((char)unaff_x20[7] == '\x01') {
          uVar2 = 1;
          (**(code **)(param_3 + 0x68))(1,5,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar3 = unaff_x20[8];
        if (*(long *)(uVar3 + 0x10) != 0) {
          pcVar4 = *(code **)(param_3 + 0x118);
          func_0x0014424c();
          (*pcVar4)(uVar3,6,&UNK_009b4bc8,uVar2,param_2,param_3);
          uVar2 = uVar3;
          if (unaff_x21 != 0) {
            return;
          }
        }
        if (unaff_x20[9] != 0) {
          uStack_58 = (undefined1)unaff_x20[10];
          pcVar4 = *(code **)(param_3 + 0x80);
          uStack_60 = unaff_x20[9];
          func_0x001442cc();
          (*pcVar4)(&uStack_60,7,&UNK_009b47d0,uVar2,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar2 = unaff_x20[0xc];
        uVar3 = unaff_x20[0xb] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar3 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar3 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[0xb],uVar2,8,param_2,param_3), unaff_x21 == 0))
        {
          FUN_0013ad2c(param_1,unaff_x20[0xd],unaff_x20[0xe],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 001434bc; end: 001434bf;  */

ulong FUN_001434bc(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar8 = *param_1;
  if ((((uVar8 != *param_2 || param_1[1] != param_2[1]) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar8 & 1) == 0)) ||
      ((uVar8 = param_1[2], uVar8 != param_2[2] || param_1[3] != param_2[3] &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar8 & 1) == 0)))) || ((((byte)param_1[4] ^ (byte)param_2[4]) & 1) != 0)) {
    return 0;
  }
  uVar8 = param_1[5];
  if (((uVar8 != param_2[5]) || (param_1[6] != param_2[6])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar8 & 1) == 0)) {
    return 0;
  }
  if ((((byte)param_1[7] ^ (byte)param_2[7]) & 1) != 0) {
    return 0;
  }
  uVar8 = param_1[8];
  FUN_001455e0(uVar8,param_2[8]);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = param_1[9];
  uVar14 = param_2[9];
  if ((char)param_2[10] == '\x01') {
    if (uVar14 == 0) {
      if (uVar8 != 0) {
        return 0;
      }
    }
    else if (uVar14 == 1) {
      if (uVar8 != 1) {
        return 0;
      }
    }
    else if (uVar8 != 2) {
      return 0;
    }
  }
  else if (uVar8 != uVar14) {
    return 0;
  }
  uVar8 = param_1[0xb];
  if (((uVar8 != param_2[0xb]) || (param_1[0xc] != param_2[0xc])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar8 & 1) == 0)) {
    return 0;
  }
  uVar8 = param_1[0xd];
  pbVar9 = (byte *)param_1[0xe];
  uVar14 = param_2[0xd];
  uVar7 = param_2[0xe];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar7 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar8;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar13 = 0;
    if (((uVar8 != 0) || (pbVar9 != (byte *)0xc000000000000000)) ||
       ((uVar7 >> 0x3e < 3 || ((uVar13 = 0, uVar14 != 0 || (uVar7 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)(uVar8 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)(uVar14 >> 0x20);
      if (SBORROW4(iVar12,(int)uVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)uVar14)) goto LAB_0003899c;
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
        if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (uVar15 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar8 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar14 + 0x18) - *(long *)(uVar14 + 0x10);
      if (SBORROW8(*(long *)(uVar14 + 0x18),*(long *)(uVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar16) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar8;
          abStack_70[1] = (byte)(uVar8 >> 8);
          abStack_70[2] = (byte)(uVar8 >> 0x10);
          abStack_70[3] = (byte)(uVar8 >> 0x18);
          abStack_70[4] = (byte)(uVar8 >> 0x20);
          abStack_70[5] = (byte)(uVar8 >> 0x28);
          abStack_70[6] = (byte)(uVar8 >> 0x30);
          abStack_70[7] = (byte)(uVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar13 = ((long)uVar8 >> 0x20) - lVar17;
        if ((long)uVar8 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar8 = 0;
        }
        else {
          uVar16 = uVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar16) + uVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar8 != 0) {
            if ((long)uVar13 <= (long)uVar16) {
              uVar16 = uVar13;
            }
            pbVar10 = (byte *)(uVar16 + uVar8);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar8 + 0x10);
        lVar1 = *(long *)(uVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar13 = uVar8;
        if (uVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar13) + uVar8;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar13) {
            uVar13 = uVar16;
          }
          pbVar10 = (byte *)(uVar13 + uVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar8,pbVar10,uVar14,uVar7);
      uVar8 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar8;
  if (SBORROW8((long)pbVar9,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar13 = uVar16 & 0xffffffffffffff8;
  uVar8 = uVar13 + 0x20 + uVar8 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar7 = uVar8;
  _swift_arrayDestroy(uVar8,lVar17,uVar6);
  lVar1 = uVar14 - lVar17;
  if (SBORROW8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar13 + 0x10);
      lVar17 = uVar7 - (long)pbVar9;
    }
    else {
      uVar7 = uVar13;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar7 - (long)pbVar9;
    }
    if (SBORROW8(uVar7,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + uVar14 * 8;
    uVar7 = uVar13 + 0x20 + (long)pbVar9 * 8;
    if (uVar8 != uVar7 || uVar7 + lVar17 * 8 <= uVar8) {
      _memmove(uVar8,uVar7,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar7 = uVar13;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar13 + 0x10) = uVar7 + lVar1;
  }
  if ((long)uVar14 < 1) {
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 001434c0; end: 0014354f;  */

/* WARNING: Removing unreachable block (ram,0x00143510) */

void FUN_001434c0(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001430f8(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00143550; end: 001435ab;  */

void FUN_00143550(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0xe000000000000000;
  param_1[0xe] = 0xc000000000000000;
  param_1[0xd] = 0;
  return;
}



/* Entry: 001435ac; end: 001435db;  */

undefined1  [16] FUN_001435ac(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                  *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 001435dc; end: 0014360f;  */

void FUN_001435dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 00143610; end: 00143623;  */

undefined1  [16] FUN_00143610(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x143620;
  return auVar1;
}



/* Entry: 00143624; end: 0014364b;  */

void FUN_00143624(void)

{
  FUN_00142f74();
  return;
}



/* Entry: 0014364c; end: 001436eb;  */

void FUN_0014364c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0690 != -1) {
    _swift_once(0xaf0690,FUN_00142e14);
  }
  uVar5 = uRam0000000000b64b78;
  uVar4 = uRam0000000000b64b70;
  uVar3 = uRam0000000000b64b68;
  uVar2 = uRam0000000000b64b60;
  uVar1 = uRam0000000000b64b58;
  *param_1 = uRam0000000000b64b50;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001436ec; end: 00143727;  */

void FUN_001436ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf06f8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf06f8,&UNK_007dade0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00143728; end: 0014393f;  */

/* WARNING: Removing unreachable block (ram,0x001437a4) */

void FUN_00143728(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_001430f8(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00143940; end: 001439bf;  */

uint FUN_00143940(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  func_0x00144388(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 001439c0; end: 001439e7;  */

undefined * FUN_001439c0(void)

{
  return &UNK_009af718;
}



/* Entry: 001439e8; end: 00143aa7;  */

void FUN_001439e8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dadf0,0xd,&uStack_48,&lStack_40);
  puRam0000000000b64b88 = puStack_38;
  lRam0000000000b64b80 = lStack_40;
  puRam0000000000b64b98 = puStack_28;
  puRam0000000000b64b90 = puStack_30;
  puRam0000000000b64ba8 = puStack_18;
  puRam0000000000b64ba0 = puStack_20;
  return;
}



/* Entry: 00143aa8; end: 00143b47;  */

void FUN_00143aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0698 != -1) {
    _swift_once(0xaf0698,FUN_001439e8);
  }
  uVar5 = uRam0000000000b64ba8;
  uVar4 = uRam0000000000b64ba0;
  uVar3 = uRam0000000000b64b98;
  uVar2 = uRam0000000000b64b90;
  uVar1 = uRam0000000000b64b88;
  *param_1 = uRam0000000000b64b80;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00143b48; end: 00143bdf;  */

void FUN_00143b48(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_00143b9c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00143bb8;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_00143b84;
code_r0x00143bb8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_00143b84:
    (*pcVar3)();
  }
  goto LAB_00143b9c;
}



/* Entry: 00143be0; end: 00143cbf;  */

void FUN_00143be0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar2 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  uVar2 = unaff_x20[4];
  uVar4 = (uint)(unaff_x20[5] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_00143ca0;
    }
    lVar6 = (long)(int)uVar2;
    lVar7 = (long)uVar2 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar2 + 0x10);
    lVar7 = *(long *)(uVar2 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_00143ca0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00143cc0; end: 00143d63;  */

void FUN_00143cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      FUN_0013ad2c(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 00143d64; end: 00143d67;  */

ulong FUN_00143d64(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar8 = *param_1;
  if (((uVar8 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar8 & 1) == 0)) ||
     ((uVar8 = param_1[2], uVar8 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar8 & 1) == 0)))) {
    return 0;
  }
  uVar8 = param_1[4];
  pbVar9 = (byte *)param_1[5];
  uVar11 = param_2[4];
  uVar7 = param_2[5];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar7 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar8;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar8 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar7 >> 0x3e < 3)) ||
       ((uVar14 = 0, uVar11 != 0 || (uVar7 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar8 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar8 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
        if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar8;
          abStack_70[1] = (byte)(uVar8 >> 8);
          abStack_70[2] = (byte)(uVar8 >> 0x10);
          abStack_70[3] = (byte)(uVar8 >> 0x18);
          abStack_70[4] = (byte)(uVar8 >> 0x20);
          abStack_70[5] = (byte)(uVar8 >> 0x28);
          abStack_70[6] = (byte)(uVar8 >> 0x30);
          abStack_70[7] = (byte)(uVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar8 >> 0x20) - lVar17;
        if ((long)uVar8 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar8 = 0;
        }
        else {
          uVar16 = uVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar16) + uVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar8 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar8);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar8 + 0x10);
        lVar1 = *(long *)(uVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar8;
        if (uVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar14) + uVar8;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar8,pbVar10,uVar11,uVar7);
      uVar8 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar8;
  if (SBORROW8((long)pbVar9,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar8 = uVar14 + 0x20 + uVar8 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar7 = uVar8;
  _swift_arrayDestroy(uVar8,lVar17,uVar6);
  lVar1 = uVar11 - lVar17;
  if (SBORROW8(uVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar7 - (long)pbVar9;
    }
    else {
      uVar7 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar7 - (long)pbVar9;
    }
    if (SBORROW8(uVar7,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + uVar11 * 8;
    uVar7 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar8 != uVar7 || uVar7 + lVar17 * 8 <= uVar8) {
      _memmove(uVar8,uVar7,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar7 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar7 + lVar1;
  }
  if (0 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar7;
}



/* Entry: 00143d68; end: 00143df7;  */

/* WARNING: Removing unreachable block (ram,0x00143db8) */

void FUN_00143d68(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_00143be0(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00143df8; end: 00143e2f;  */

void FUN_00143df8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 00143e30; end: 00143e5f;  */

undefined1  [16] FUN_00143e30(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 00143e60; end: 00143e93;  */

void FUN_00143e60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 00143e94; end: 00143ea7;  */

undefined1  [16] FUN_00143e94(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x143ea4;
  return auVar1;
}



/* Entry: 00143ea8; end: 00143ecf;  */

void FUN_00143ea8(void)

{
  FUN_00143b48();
  return;
}


