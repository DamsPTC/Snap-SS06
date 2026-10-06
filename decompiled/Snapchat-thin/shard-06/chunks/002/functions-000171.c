/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104614430; end: 10461443b;  */

void FUN_104614430(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_104619940();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10461443c; end: 1046144f3;  */

void FUN_10461443c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1046144f4; end: 104614543;  */

void FUN_1046144f4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[9] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[10] = 0;
  param_1[0xb] = 0xe000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0xe000000000000000;
  param_1[0xf] = 0xc000000000000000;
  param_1[0xe] = 0;
  return;
}



/* Entry: 104614544; end: 10461456f;  */

undefined1  [16] FUN_104614544(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 104614570; end: 1046145a3;  */

void FUN_104614570(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1046145a4; end: 1046145bf;  */

undefined8 FUN_1046145a4(void)

{
  return 0x1046145b4;
}



/* Entry: 1046145c0; end: 1046145e7;  */

void FUN_1046145c0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1046145e8; end: 104614603;  */

undefined1  [16] FUN_1046145e8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1046145f8;
  return auVar1;
}



/* Entry: 104614604; end: 10461462b;  */

void FUN_104614604(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 10461462c; end: 10461463f;  */

undefined1  [16] FUN_10461462c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10461463c;
  return auVar1;
}



/* Entry: 104614640; end: 104614697;  */

undefined8 FUN_104614640(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  FUN_1045b3bdc();
  return uVar1;
}



/* Entry: 104614698; end: 1046146e3;  */

void FUN_104614698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_1045b3c60(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = param_3;
  *(undefined8 *)(unaff_x20 + 0x68) = param_4;
  return;
}



/* Entry: 1046146e4; end: 10461476f;  */

undefined1  [16] FUN_1046146e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  puVar6 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0xa555);
  }
  *param_1 = puVar6;
  puVar6[4] = unaff_x20;
  bVar5 = *(long *)(unaff_x20 + 0x58) != 0;
  uVar1 = 0;
  if (bVar5) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  lVar2 = -0x2000000000000000;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x58);
  }
  uVar3 = 0;
  if (bVar5) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  uVar4 = 0xc000000000000000;
  if (bVar5) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  *puVar6 = uVar1;
  puVar6[1] = lVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  FUN_1045b3bdc();
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = FUN_104614770;
  return auVar7;
}



/* Entry: 104614770; end: 10461482f;  */

void FUN_104614770(undefined8 *param_1,ulong param_2)

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
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar6 = *(undefined8 *)(lVar4 + 0x58);
  uVar3 = *(undefined8 *)(lVar4 + 0x60);
  uVar7 = *(undefined8 *)(lVar4 + 0x68);
  if ((param_2 & 1) == 0) {
    FUN_1045b3c60(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    *(undefined8 *)(lVar4 + 0x60) = uVar8;
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    func_0x00010006c00c(uVar8,uVar1);
    FUN_1045b3c60(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    *(undefined8 *)(lVar4 + 0x60) = uVar8;
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    func_0x00010006c090(uVar1,uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104614830; end: 1046148cf;  */

bool FUN_104614830(void)

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
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x00010461b518(&uStack_50,auStack_70,0x1130877c0,&UNK_10dd19750);
  }
  else {
    func_0x00010461b518(&uStack_50,auStack_70,0x1130877c0,&UNK_10dd19750);
    FUN_1045b3c60(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_1045b3c60(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 1046148d0; end: 1046148f3;  */

void FUN_1046148d0(void)

{
  long unaff_x20;
  
  FUN_1045b3c60(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  return;
}



/* Entry: 1046148f4; end: 10461491f;  */

undefined1  [16] FUN_1046148f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x20);
  return auVar1;
}



/* Entry: 104614920; end: 10461494b;  */

undefined1  [16] FUN_104614920(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 10461494c; end: 10461497f;  */

void FUN_10461494c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 104614980; end: 104614993;  */

undefined1  [16] FUN_104614980(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x104614990;
  return auVar1;
}



/* Entry: 104614994; end: 1046149c3;  */

undefined1  [16] FUN_104614994(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1046149c4; end: 1046149f7;  */

void FUN_1046149c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1046149f8; end: 104614a47;  */

undefined1  [16] FUN_1046149f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x104614a08;
  return auVar1;
}



/* Entry: 104614a48; end: 104614a73;  */

undefined1  [16] FUN_104614a48(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 104614a74; end: 104614aa7;  */

void FUN_104614a74(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104614aa8; end: 104614ae7;  */

undefined8 FUN_104614aa8(void)

{
  return 0x104614ab8;
}



/* Entry: 104614ae8; end: 104614b0f;  */

void FUN_104614ae8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 104614b10; end: 104614b23;  */

undefined1  [16] FUN_104614b10(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x104614b20;
  return auVar1;
}



/* Entry: 104614b24; end: 104614b53;  */

undefined1  [16] FUN_104614b24(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 104614b54; end: 104614b87;  */

void FUN_104614b54(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 104614b88; end: 104614bc3;  */

undefined1  [16] FUN_104614b88(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x104614b98;
  return auVar1;
}



/* Entry: 104614bc4; end: 104614bef;  */

undefined1  [16] FUN_104614bc4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 104614bf0; end: 104614c23;  */

void FUN_104614bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104614c24; end: 104614c37;  */

undefined8 FUN_104614c24(void)

{
  return 0x104614c34;
}



/* Entry: 104614c38; end: 104614cdf;  */

undefined8 FUN_104614c38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uVar4 = uVar1;
  if (lVar3 == 0) {
    if (lRam0000000113084b48 != -1) {
      _swift_once(0x113084b48,FUN_10453c544);
    }
    _swift_retain(uRam0000000113813dd0);
    uVar4 = 0;
  }
  func_0x000104603ab8(uVar1,uVar2,lVar3);
  return uVar4;
}



/* Entry: 104614ce0; end: 104614d1f;  */

void FUN_104614ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x00010459fd54(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Entry: 104614d20; end: 104614dcb;  */

undefined1  [16] FUN_104614d20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  param_1[3] = unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar3 = lVar6;
  uVar4 = uVar1;
  uVar5 = uVar2;
  if (lVar6 == 0) {
    if (lRam0000000113084b48 != -1) {
      _swift_once(0x113084b48,FUN_10453c544);
    }
    lVar3 = lRam0000000113813dd0;
    _swift_retain();
    uVar4 = 0;
    uVar5 = 0xc000000000000000;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = lVar3;
  func_0x000104603ab8(uVar1,uVar2,lVar6);
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = FUN_104614dcc;
  return auVar7;
}



/* Entry: 104614dcc; end: 104614e7b;  */

void FUN_104614dcc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  lVar5 = param_1[3];
  uVar3 = *(undefined8 *)(lVar5 + 0x20);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  uVar7 = *(undefined8 *)(lVar5 + 0x30);
  if ((param_2 & 1) != 0) {
    func_0x00010006c00c(uVar1,uVar4);
    _swift_retain(uVar2);
    func_0x00010459fd54(uVar3,uVar6,uVar7);
    *(undefined8 *)(lVar5 + 0x20) = uVar1;
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    *(undefined8 *)(lVar5 + 0x30) = uVar2;
    func_0x00010006c090(uVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  func_0x00010459fd54(uVar3,uVar6,uVar7);
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  *(undefined8 *)(lVar5 + 0x30) = uVar2;
  return;
}



/* Entry: 104614e7c; end: 104614f0f;  */

bool FUN_104614e7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar3;
  if (lVar3 == 0) {
    func_0x00010461b518(&uStack_50,auStack_68,0x113089be8,&UNK_10dd1f6b0);
  }
  else {
    func_0x00010461b518(&uStack_50,auStack_68,0x113089be8,&UNK_10dd1f6b0);
    func_0x00010459fd54(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x00010459fd54(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 104614f10; end: 104614f33;  */

void FUN_104614f10(void)

{
  long unaff_x20;
  
  func_0x00010459fd54(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 104614f34; end: 104614f63;  */

undefined1  [16] FUN_104614f34(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 104614f64; end: 104614f97;  */

void FUN_104614f64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 104614f98; end: 104614fcb;  */

undefined1  [16] FUN_104614f98(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x104614fa8;
  return auVar1;
}



/* Entry: 104614fcc; end: 10461508b;  */

void FUN_104614fcc(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd201b0,0x31,&uStack_48,&lStack_40);
  puRam0000000113814b68 = puStack_38;
  lRam0000000113814b60 = lStack_40;
  puRam0000000113814b78 = puStack_28;
  puRam0000000113814b70 = puStack_30;
  puRam0000000113814b88 = puStack_18;
  puRam0000000113814b80 = puStack_20;
  return;
}



/* Entry: 10461508c; end: 1046151cb;  */

void FUN_10461508c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089bf0 != -1) {
    _swift_once(0x113089bf0,FUN_104614fcc);
  }
  uVar5 = uRam0000000113814b88;
  uVar4 = uRam0000000113814b80;
  uVar3 = uRam0000000113814b78;
  uVar2 = uRam0000000113814b70;
  uVar1 = uRam0000000113814b68;
  *param_1 = uRam0000000113814b60;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1046151cc; end: 1046151f3;  */

undefined * FUN_1046151cc(void)

{
  return &UNK_11078f9d8;
}



/* Entry: 1046151f4; end: 1046152b3;  */

void FUN_1046151f4(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd20160,0x41,&uStack_48,&lStack_40);
  puRam0000000113814b98 = puStack_38;
  lRam0000000113814b90 = lStack_40;
  puRam0000000113814ba8 = puStack_28;
  puRam0000000113814ba0 = puStack_30;
  puRam0000000113814bb8 = puStack_18;
  puRam0000000113814bb0 = puStack_20;
  return;
}



/* Entry: 1046152b4; end: 104615353;  */

void FUN_1046152b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089bf8 != -1) {
    _swift_once(0x113089bf8,FUN_1046151f4);
  }
  uVar5 = uRam0000000113814bb8;
  uVar4 = uRam0000000113814bb0;
  uVar3 = uRam0000000113814ba8;
  uVar2 = uRam0000000113814ba0;
  uVar1 = uRam0000000113814b98;
  *param_1 = uRam0000000113814b90;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104615354; end: 1046154e3;  */

/* WARNING: Removing unreachable block (ram,0x0001046154a0) */

void FUN_104615354(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 == 2) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            FUN_104619958();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_11078ff48;
            goto LAB_1046153dc;
          }
          if (lVar1 != 3) goto LAB_1046153f0;
          pcVar5 = *(code **)(param_3 + 0x160);
        }
LAB_104615490:
        (*pcVar5)();
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0001045b66a4();
            lVar2 = unaff_x20 + 0x20;
            puVar3 = &UNK_110790230;
          }
          else {
            if (lVar1 != 5) goto LAB_1046153f0;
            pcVar5 = *(code **)(param_3 + 0x198);
            FUN_1045b7960();
            lVar2 = unaff_x20 + 0x58;
            puVar3 = &UNK_11078f270;
          }
        }
        else {
          if (lVar1 != 6) {
            if (lVar1 == 7) {
              pcVar5 = *(code **)(param_3 + 0x150);
              goto LAB_104615490;
            }
            goto LAB_1046153f0;
          }
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x0001045b6724();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_11078fe38;
        }
LAB_1046153dc:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1046153f0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1046154e4; end: 1046156f3;  */

void FUN_1046154e4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar10 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar10 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_104613008(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  uVar10 = unaff_x20[3];
  lVar9 = *(long *)(uVar10 + 0x10);
  if (lVar9 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(lVar9);
    puVar11 = (undefined8 *)(uVar10 + 0x28);
    do {
      uVar2 = puVar11[-1];
      uVar4 = *puVar11;
      _swift_bridgeObjectRetain(uVar4);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      puVar11 = puVar11 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((*(long *)(unaff_x20[4] + 0x10) != 0) && (FUN_10460e4d4(unaff_x20[4],4), unaff_x21 != 0)) {
    return;
  }
  uVar10 = unaff_x20[0xc];
  if (uVar10 != 0) {
    uVar1 = unaff_x20[0xd];
    uVar3 = unaff_x20[0xe];
    uVar12 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(5);
    _swift_bridgeObjectRetain(uVar10);
    func_0x00010006c00c(uVar1,uVar3);
    func_0x0001046048dc(param_1,uVar12,uVar10,uVar1,uVar3);
    FUN_1045b3c60(uVar12,uVar10,uVar1,uVar3);
  }
  uVar10 = unaff_x20[5];
  if ((char)unaff_x20[6] == '\x01') {
    if (uVar10 != 0) {
      __ss6HasherV8_combineyySuF(6);
      bVar6 = uVar10 == 2;
      uVar10 = 1;
      if (bVar6) {
        uVar10 = 2;
      }
LAB_104615658:
      __ss6HasherV8_combineyySuF(uVar10);
    }
  }
  else if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(6);
    goto LAB_104615658;
  }
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  uVar10 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar10 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(7);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  uVar10 = unaff_x20[9];
  uVar5 = (uint)(unaff_x20[10] >> 0x20);
  uVar7 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar7 == 0) {
      if ((unaff_x20[10] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1046156d0;
    }
    lVar9 = (long)(int)uVar10;
    lVar8 = (long)uVar10 >> 0x20;
  }
  else {
    if (uVar7 != 2) {
      return;
    }
    lVar9 = *(long *)(uVar10 + 0x10);
    lVar8 = *(long *)(uVar10 + 0x18);
  }
  if (lVar9 == lVar8) {
    return;
  }
LAB_1046156d0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1046156f4; end: 1046158b7;  */

void FUN_1046156f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar4 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar4,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      FUN_104619958();
      (*pcVar5)(uVar3,2,&UNK_11078ff48,uVar4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar3 = unaff_x20[3];
    if ((*(long *)(uVar3 + 0x10) == 0) ||
       ((**(code **)(param_3 + 0x100))(uVar3,3,param_2,param_3), unaff_x21 == 0)) {
      uVar4 = unaff_x20[4];
      if (*(long *)(uVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        func_0x0001045b66a4();
        (*pcVar5)(uVar4,4,&UNK_110790230,uVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      puVar2 = unaff_x20;
      FUN_1046158b8();
      if (unaff_x21 == 0) {
        if (unaff_x20[5] != 0) {
          uStack_58 = (undefined1)unaff_x20[6];
          pcVar5 = *(code **)(param_3 + 0x80);
          uStack_60 = unaff_x20[5];
          func_0x0001045b6724();
          (*pcVar5)(&uStack_60,6,&UNK_11078fe38,puVar2,param_2,param_3);
        }
        uVar4 = unaff_x20[8];
        uVar3 = unaff_x20[7] & 0xffffffffffff;
        if ((uVar4 & 0x2000000000000000) != 0) {
          uVar3 = uVar4 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          (**(code **)(param_3 + 0x70))(unaff_x20[7],uVar4,7,param_2,param_3);
        }
        func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 1046158b8; end: 10461593b;  */

void FUN_1046158b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x60);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045b7960();
    (*pcVar1)(&uStack_60,5,&UNK_11078f270,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10461593c; end: 10461593f;  */

uint FUN_10461593c(ulong *param_1,ulong *param_2)

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
    FUN_1045b9c00(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      func_0x00010142cfc4(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        FUN_1045b79ac(uVar2,param_2[4]);
        if ((uVar2 & 1) != 0) {
          uVar4 = param_1[0xc];
          uVar2 = param_1[0xb];
          uVar9 = param_1[0xe];
          uVar7 = param_1[0xd];
          uVar6 = param_2[0xc];
          uVar5 = param_2[0xb];
          uVar10 = param_2[0xe];
          uVar8 = param_2[0xd];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_104619490;
            func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
            func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
LAB_104619554:
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[5];
            uVar4 = param_2[5];
            if ((char)param_2[6] == '\x01') {
              if (uVar4 == 0) {
                if (uVar2 == 0) goto LAB_104619610;
              }
              else if (uVar4 == 1) {
                if (uVar2 == 1) {
LAB_104619610:
                  uVar2 = param_1[7];
                  if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar2 & 1) != 0)) {
                    uVar2 = param_1[9];
                    func_0x000100e25fcc(uVar2,param_1[10],param_2[9],param_2[10]);
                    uVar1 = (uint)uVar2;
                    goto LAB_1046194f4;
                  }
                }
              }
              else if (uVar2 == 2) goto LAB_104619610;
            }
            else if (uVar2 == uVar4) goto LAB_104619610;
          }
          else {
            if (uVar6 == 0) {
LAB_104619490:
              func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
              func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
              FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
              func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
              uVar3 = uVar7;
              func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_104619554;
            }
            else {
              func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
              func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_1046194f4:
  return uVar1 & 1;
}



/* Entry: 104615940; end: 1046159cf;  */

/* WARNING: Removing unreachable block (ram,0x000104615990) */

void FUN_104615940(void)

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
  FUN_1046154e4(&uStack_d0);
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



/* Entry: 1046159d0; end: 104615a2b;  */

void FUN_1046159d0(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}



/* Entry: 104615a2c; end: 104615a5b;  */

undefined1  [16] FUN_104615a2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 104615a5c; end: 104615a8f;  */

void FUN_104615a5c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 104615a90; end: 104615aa3;  */

undefined1  [16] FUN_104615a90(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x104615aa0;
  return auVar1;
}



/* Entry: 104615aa4; end: 104615ab7;  */

void FUN_104615aa4(void)

{
  FUN_104615354();
  return;
}



/* Entry: 104615ab8; end: 104615b07;  */

void FUN_104615ab8(void)

{
  FUN_1046156f4();
  return;
}



/* Entry: 104615b08; end: 104615ba7;  */

void FUN_104615b08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089bf8 != -1) {
    _swift_once(0x113089bf8,FUN_1046151f4);
  }
  uVar5 = uRam0000000113814bb8;
  uVar4 = uRam0000000113814bb0;
  uVar3 = uRam0000000113814ba8;
  uVar2 = uRam0000000113814ba0;
  uVar1 = uRam0000000113814b98;
  *param_1 = uRam0000000113814b90;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104615ba8; end: 104615be3;  */

void FUN_104615ba8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089d70;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089d70,&UNK_10dd1ff18);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104615be4; end: 104615dfb;  */

/* WARNING: Removing unreachable block (ram,0x000104615c60) */

void FUN_104615be4(void)

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
  FUN_1046154e4(&uStack_150);
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



/* Entry: 104615dfc; end: 104615e7b;  */

uint FUN_104615dfc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104619330(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 104615e7c; end: 104615ea3;  */

undefined * FUN_104615e7c(void)

{
  return &UNK_11078f9e8;
}



/* Entry: 104615ea4; end: 104615f63;  */

void FUN_104615ea4(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd200f0,0x65,&uStack_48,&lStack_40);
  puRam0000000113814bc8 = puStack_38;
  lRam0000000113814bc0 = lStack_40;
  puRam0000000113814bd8 = puStack_28;
  puRam0000000113814bd0 = puStack_30;
  puRam0000000113814be8 = puStack_18;
  puRam0000000113814be0 = puStack_20;
  return;
}



/* Entry: 104615f64; end: 104616003;  */

void FUN_104615f64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c08 != -1) {
    _swift_once(0x113089c08,FUN_104615ea4);
  }
  uVar5 = uRam0000000113814be8;
  uVar4 = uRam0000000113814be0;
  uVar3 = uRam0000000113814bd8;
  uVar2 = uRam0000000113814bd0;
  uVar1 = uRam0000000113814bc8;
  *param_1 = uRam0000000113814bc0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104616004; end: 10461617b;  */

/* WARNING: Removing unreachable block (ram,0x000104616148) */

void FUN_104616004(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000104619998();
        goto code_r0x000104616134;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x0001046199d8();
        goto code_r0x000104616134;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x48);
        lVar2 = unaff_x20 + 0x1c;
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x20;
        break;
      default:
        goto LAB_10461608c;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x30;
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x48);
        lVar2 = unaff_x20 + 0x40;
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x138);
        lVar2 = unaff_x20 + 0x44;
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0001045b66a4();
code_r0x000104616134:
        (*pcVar3)();
        goto LAB_10461608c;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x50;
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x60;
      }
      (*pcVar3)(lVar2,param_2,param_3);
LAB_10461608c:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10461617c; end: 10461635f;  */

void FUN_10461617c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  
  lVar8 = *unaff_x20;
  if (lVar8 != 0) {
    lVar7 = unaff_x20[1];
    __ss6HasherV8_combineyySuF(1);
    FUN_10460e2bc(param_1,lVar8,(char)lVar7);
  }
  lVar8 = unaff_x20[2];
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(lVar8);
  }
  iVar4 = *(int *)((long)unaff_x20 + 0x1c);
  if (iVar4 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)iVar4);
  }
  uVar2 = unaff_x20[4];
  uVar3 = unaff_x20[5];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  uVar2 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  lVar8 = unaff_x20[8];
  if ((int)lVar8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar8);
  }
  if ((*(byte *)((long)unaff_x20 + 0x44) & 1) != 0) {
    __ss6HasherV8_combineyySuF(8);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  if ((*(long *)(unaff_x20[9] + 0x10) != 0) && (FUN_10460e4d4(unaff_x20[9],9), unaff_x21 != 0)) {
    return;
  }
  uVar2 = unaff_x20[10];
  uVar3 = unaff_x20[0xb];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(10);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  uVar2 = unaff_x20[0xc];
  uVar3 = unaff_x20[0xd];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(0xb);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  lVar8 = unaff_x20[0xe];
  uVar5 = (uint)((ulong)unaff_x20[0xf] >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[0xf] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_104616340;
    }
    lVar7 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar7 == lVar8) {
    return;
  }
LAB_104616340:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 104616360; end: 1046165b3;  */

void FUN_104616360(undefined1 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  long lStack_60;
  undefined1 uStack_58;
  
  plVar3 = &lStack_60;
  puVar2 = param_1;
  if (*unaff_x20 != 0) {
    uStack_58 = (undefined1)unaff_x20[1];
    pcVar6 = *(code **)(param_3 + 0x80);
    lStack_60 = *unaff_x20;
    func_0x000104619998();
    (*pcVar6)(&lStack_60,1,&UNK_110790008,puVar2,param_2,param_3);
    puVar2 = (undefined1 *)plVar3;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_58 = (undefined1)unaff_x20[3];
    pcVar6 = *(code **)(param_3 + 0x80);
    lStack_60 = unaff_x20[2];
    func_0x0001046199d8();
    (*pcVar6)(&lStack_60,2,&UNK_110790098,puVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(int *)((long)unaff_x20 + 0x1c) == 0) ||
     ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x1c),3,param_2,param_3),
     unaff_x21 == 0)) {
    uVar1 = unaff_x20[5];
    uVar4 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar4 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar4 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar1,4,param_2,param_3), unaff_x21 == 0)) {
      uVar1 = unaff_x20[7];
      uVar4 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar4 = uVar1 >> 0x38 & 0xf;
      }
      if (((uVar4 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar1,6,param_2,param_3), unaff_x21 == 0)) &&
         ((uVar4 = (ulong)*(uint *)(unaff_x20 + 8), *(uint *)(unaff_x20 + 8) == 0 ||
          ((**(code **)(param_3 + 0x18))(uVar4,7,param_2,param_3), unaff_x21 == 0)))) {
        if (*(char *)((long)unaff_x20 + 0x44) == '\x01') {
          uVar4 = 1;
          (**(code **)(param_3 + 0x68))(1,8,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        lVar5 = unaff_x20[9];
        if (*(long *)(lVar5 + 0x10) != 0) {
          pcVar6 = *(code **)(param_3 + 0x118);
          func_0x0001045b66a4();
          (*pcVar6)(lVar5,9,&UNK_110790230,uVar4,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar1 = unaff_x20[0xb];
        uVar4 = unaff_x20[10] & 0xffffffffffff;
        if ((uVar1 & 0x2000000000000000) != 0) {
          uVar4 = uVar1 >> 0x38 & 0xf;
        }
        if ((uVar4 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar1,10,param_2,param_3), unaff_x21 == 0))
        {
          uVar1 = unaff_x20[0xd];
          uVar4 = unaff_x20[0xc] & 0xffffffffffff;
          if ((uVar1 & 0x2000000000000000) != 0) {
            uVar4 = uVar1 >> 0x38 & 0xf;
          }
          if ((uVar4 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[0xc],uVar1,0xb,param_2,param_3),
             unaff_x21 == 0)) {
            func_0x000100076224(param_1,unaff_x20[0xe],unaff_x20[0xf],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1046165b4; end: 1046165b7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1046165b4(ulong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  uVar13 = *param_1;
  FUN_104613578(uVar13,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
  if ((uVar13 & 1) != 0) {
    uVar13 = param_1[2];
    uVar20 = param_2[2];
    if (*(char *)(param_2 + 3) == '\x01') {
      if ((long)uVar20 < 2) {
        if (uVar20 == 0) {
          if (uVar13 != 0) {
            return (byte *)0x0;
          }
        }
        else if (uVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else if (uVar20 == 2) {
        if (uVar13 != 2) {
          return (byte *)0x0;
        }
      }
      else if (uVar13 != 3) {
        return (byte *)0x0;
      }
    }
    else if (uVar13 != uVar20) {
      return (byte *)0x0;
    }
    if (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c)) {
      uVar13 = param_1[4];
      if (((uVar13 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar13 & 1) != 0)) {
        uVar13 = param_1[6];
        if ((((uVar13 == param_2[6]) && (param_1[7] == param_2[7])) ||
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar13 & 1) != 0)) &&
           (((int)param_1[8] == *(int *)(param_2 + 8) &&
            (((*(byte *)((long)param_1 + 0x44) ^ *(byte *)((long)param_2 + 0x44)) & 1) == 0)))) {
          uVar13 = param_1[9];
          FUN_1045b79ac(uVar13,param_2[9]);
          if ((uVar13 & 1) != 0) {
            uVar13 = param_1[10];
            if (((uVar13 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar13 & 1) != 0)) {
              uVar13 = param_1[0xc];
              if (((uVar13 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar13 & 1) != 0)) {
                pbVar10 = (byte *)param_1[0xe];
                pbVar25 = (byte *)param_1[0xf];
                lVar24 = param_2[0xe];
                uVar13 = param_2[0xf];
                puVar7 = (undefined1 *)register0x00000008;
                do {
                  *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
                  *(byte **)(puVar7 + -0x48) = unaff_x25;
                  *(byte **)(puVar7 + -0x40) = unaff_x24;
                  *(byte **)(puVar7 + -0x38) = unaff_x23;
                  *(ulong *)(puVar7 + -0x30) = unaff_x22;
                  *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
                  *(ulong *)(puVar7 + -0x20) = unaff_x20;
                  *(byte **)(puVar7 + -0x18) = unaff_x19;
                  *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
                  *(undefined8 *)(puVar7 + -8) = unaff_x30;
                  *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                  uVar4 = (uint)((ulong)pbVar25 >> 0x20);
                  uVar18 = uVar4 >> 0x1e;
                  uVar5 = (uint)(uVar13 >> 0x20);
                  uVar21 = uVar5 >> 0x1e;
                  iVar8 = (int)pbVar10;
                  pbVar14 = pbVar25;
                  if ((ulong)pbVar25 >> 0x3e == 3) {
                    uVar20 = 0;
                    if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                       ((uVar13 >> 0x3e < 3 ||
                        ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))))
                    goto joined_r0x000100e26170;
code_r0x000100e26128:
                    pbVar9 = (byte *)0x1;
                  }
                  else if (uVar4 >> 0x1e < 2) {
                    if (uVar18 == 0) {
                      uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
                    }
                    else {
                      iVar19 = (int)((ulong)pbVar10 >> 0x20);
                      if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                        (*pcVar6)();
                      }
                      uVar20 = (ulong)(iVar19 - iVar8);
                    }
joined_r0x000100e26170:
                    if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                    if (uVar21 == 0) {
                      uVar22 = uVar13 >> 0x30 & 0xff;
                      goto code_r0x000100e2608c;
                    }
                    iVar19 = (int)((ulong)lVar24 >> 0x20);
                    if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                      (*pcVar6)();
                    }
                    if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
                    pbVar9 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 == 2) {
                      uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                      if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                        (*pcVar6)();
                      }
                      goto joined_r0x000100e26170;
                    }
                    uVar20 = 0;
                    if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                    if (uVar21 == 2) {
                      uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
                      if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                        (*pcVar6)();
                      }
code_r0x000100e2608c:
                      if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
                      if ((long)uVar20 < 1) goto code_r0x000100e26128;
                      if (uVar18 < 2) {
                        if (uVar18 == 0) {
                          puVar7[-0x70] = (char)pbVar10;
                          puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                          puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                          puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                          puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                          puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                          puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                          puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                          puVar7[-0x68] = (char)pbVar25;
                          puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                          puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                          puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                          puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                          puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                          pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                          unaff_x21 = 0;
                          func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                          pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                          goto code_r0x000100e262b0;
                        }
                        unaff_x25 = (byte *)(long)iVar8;
                        unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                        if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                          (*pcVar6)();
                        }
                        func_0x000107c5ec30();
                        unaff_x24 = pbVar25;
                        if (pbVar10 == (byte *)0x0) {
                          func_0x000107c5ec38();
                          pbVar10 = (byte *)0x0;
                        }
                        else {
                          pbVar14 = pbVar10;
                          func_0x000107c5ec3c();
                          if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                            (*pcVar6)();
                          }
                          pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                          func_0x000107c5ec38();
                          unaff_x19 = pbVar10;
                          if (pbVar10 != (byte *)0x0) {
                            if ((long)unaff_x23 <= (long)pbVar14) {
                              pbVar14 = unaff_x23;
                            }
                            pbVar14 = pbVar14 + (long)pbVar10;
                            goto code_r0x000100e262a4;
                          }
                        }
                        pbVar14 = (byte *)0x0;
                      }
                      else {
                        if (uVar18 != 2) {
                          *(undefined8 *)(puVar7 + -0x6a) = 0;
                          *(undefined8 *)(puVar7 + -0x70) = 0;
                          pbVar14 = puVar7 + -0x70;
                          goto code_r0x000100e26260;
                        }
                        lVar26 = *(long *)(pbVar10 + 0x10);
                        unaff_x24 = *(byte **)(pbVar10 + 0x18);
                        func_0x000107c5ec30();
                        pbVar14 = pbVar10;
                        if (pbVar10 != (byte *)0x0) {
                          func_0x000107c5ec3c();
                          if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                            (*pcVar6)();
                          }
                          pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
                        }
                        unaff_x23 = unaff_x24 + -lVar26;
                        if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                          (*pcVar6)();
                        }
                        func_0x000107c5ec38();
                        unaff_x19 = pbVar10;
                        unaff_x25 = pbVar25;
                        if (pbVar10 == (byte *)0x0) {
                          pbVar14 = (byte *)0x0;
                        }
                        else {
                          if ((long)unaff_x23 <= (long)pbVar14) {
                            pbVar14 = unaff_x23;
                          }
                          pbVar14 = pbVar14 + (long)pbVar10;
                        }
                      }
code_r0x000100e262a4:
                      unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                      unaff_x21 = 0;
                      func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
                      pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                      unaff_x22 = uVar13;
                    }
                    else {
                      pbVar9 = (byte *)(ulong)(uVar20 == 0);
                    }
                  }
code_r0x000100e262b0:
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
                    return pbVar9;
                  }
                  func_0x000107c60e78();
                  *(byte **)(puVar7 + -0xc0) = unaff_x24;
                  *(byte **)(puVar7 + -0xb8) = unaff_x23;
                  *(ulong *)(puVar7 + -0xb0) = unaff_x22;
                  *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
                  *(ulong *)(puVar7 + -0xa0) = unaff_x20;
                  *(byte **)(puVar7 + -0x98) = unaff_x19;
                  *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
                  *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
                  pbVar12 = *(byte **)pbVar9;
                  pbVar10 = *(byte **)(pbVar9 + 8);
                  pbVar23 = *(byte **)(pbVar9 + 0x18);
                  bVar27 = pbVar9[0x28];
                  pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                     (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10])
                  ;
                  pbVar15 = pbVar10;
                  if (bVar27 < 3) {
                    if (bVar27 == 0) {
                      if (pbVar14[0x28] == 0) {
                        lVar24 = *(long *)pbVar14;
                        uVar11 = 0;
                        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                        func_0x000107c60118(pbVar12,lVar24,uVar11);
                        return (byte *)(ulong)((uint)pbVar12 & 1);
                      }
                      return (byte *)0x0;
                    }
                    if (bVar27 == 1) {
                      if (pbVar14[0x28] != 1) {
                        return (byte *)0x0;
                      }
                      pbVar16 = *(byte **)(pbVar14 + 8);
                      pbVar17 = *(byte **)(pbVar14 + 0x10);
                      lVar24 = *(long *)pbVar14;
                      uVar11 = 0;
                      func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                      func_0x000107c60118(pbVar12,lVar24,uVar11);
                      if (((ulong)pbVar12 & 1) == 0) {
                        return (byte *)0x0;
                      }
                      pbVar12 = pbVar10;
                      pbVar15 = pbVar25;
                      if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
                        return (byte *)0x1;
                      }
                    }
                    else {
                      if (pbVar14[0x28] != 2) {
                        return (byte *)0x0;
                      }
                      pbVar16 = *(byte **)pbVar14;
                      pbVar17 = *(byte **)(pbVar14 + 8);
                      lVar24 = *(long *)(pbVar14 + 0x18);
                      if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                        if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                          return (byte *)0x0;
                        }
                        if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
                        if (lVar24 == 0) {
                          return (byte *)0x0;
                        }
                        func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                        func_0x000107c61174(lVar24);
                        func_0x000107c61174();
                        pbVar10 = pbVar23;
                        func_0x000107c60118();
                        func_0x000107c61170(pbVar23);
                        func_0x000107c61170(lVar24);
                        pbVar23 = pbVar10;
joined_r0x000100e266a4:
                        if (((ulong)pbVar23 & 1) == 0) {
                          return (byte *)0x0;
                        }
                        return (byte *)0x1;
                      }
                    }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)
                      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
                    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
                    return pbVar12;
                  }
                  lVar26 = *(long *)(pbVar9 + 0x20);
                  if (bVar27 < 5) {
                    if (bVar27 != 3) {
                      if (pbVar14[0x28] != 4) {
                        return (byte *)0x0;
                      }
                      pbVar16 = *(byte **)pbVar14;
                      pbVar17 = *(byte **)(pbVar14 + 8);
                      if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                         (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10)
                         , pbVar17 = *(byte **)(pbVar14 + 0x18),
                         pbVar25 == *(byte **)(pbVar14 + 0x10) &&
                         pbVar23 == *(byte **)(pbVar14 + 0x18))) {
                        return (byte *)0x1;
                      }
                      goto code_r0x000107c605b8;
                    }
                    if (pbVar14[0x28] != 3) {
                      return (byte *)0x0;
                    }
                    if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
                      return (byte *)0x0;
                    }
                    pbVar17 = *(byte **)(pbVar14 + 0x10);
                    lVar24 = *(long *)(pbVar14 + 0x20);
                    if (pbVar25 == (byte *)0x0) {
                      if (pbVar17 != (byte *)0x0) {
                        return (byte *)0x0;
                      }
                    }
                    else {
                      if (pbVar17 == (byte *)0x0) {
                        return (byte *)0x0;
                      }
                      pbVar16 = *(byte **)(pbVar14 + 8);
                      pbVar12 = pbVar10;
                      pbVar15 = pbVar25;
                      if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
                    }
                    if (lVar26 != 0) {
                      if (lVar24 == 0) {
                        return (byte *)0x0;
                      }
                      if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
                        return (byte *)0x1;
                      }
                      func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
                      goto joined_r0x000100e266a4;
                    }
joined_r0x000100e26620:
                    if (lVar24 == 0) {
                      return (byte *)0x1;
                    }
                    return (byte *)0x0;
                  }
                  if (bVar27 != 5) {
                    if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) &&
                         pbVar12 == (byte *)0x0) && lVar26 == 0) && pbVar25 == (byte *)0x0) {
                      if (pbVar14[0x28] != 6) {
                        return (byte *)0x0;
                      }
                      lVar26 = *(long *)(pbVar14 + 0x20);
                      lVar24 = *(long *)(pbVar14 + 0x18);
                      bVar27 = pbVar14[8] | (byte)lVar24;
                      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
                      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
                      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
                      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
                      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
                      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
                      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
                      bVar35 = pbVar14[0x10] | (byte)lVar26;
                      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
                      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
                      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
                      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
                      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
                      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
                      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
                      auVar43[1] = bVar28;
                      auVar43[0] = bVar27;
                      auVar43[2] = bVar29;
                      auVar43[3] = bVar30;
                      auVar43[4] = bVar31;
                      auVar43[5] = bVar32;
                      auVar43[6] = bVar33;
                      auVar43[7] = bVar34;
                      auVar43[8] = bVar35;
                      auVar43[9] = bVar36;
                      auVar43[10] = bVar37;
                      auVar43[0xb] = bVar38;
                      auVar43[0xc] = bVar39;
                      auVar43[0xd] = bVar40;
                      auVar43[0xe] = bVar41;
                      auVar43[0xf] = bVar42;
                      auVar3[1] = bVar28;
                      auVar3[0] = bVar27;
                      auVar3[2] = bVar29;
                      auVar3[3] = bVar30;
                      auVar3[4] = bVar31;
                      auVar3[5] = bVar32;
                      auVar3[6] = bVar33;
                      auVar3[7] = bVar34;
                      auVar3[8] = bVar35;
                      auVar3[9] = bVar36;
                      auVar3[10] = bVar37;
                      auVar3[0xb] = bVar38;
                      auVar3[0xc] = bVar39;
                      auVar3[0xd] = bVar40;
                      auVar3[0xe] = bVar41;
                      auVar3[0xf] = bVar42;
                      auVar43 = NEON_ext(auVar43,auVar3,8,1);
                      if (CONCAT17(bVar34 | auVar43[7],
                                   CONCAT16(bVar33 | auVar43[6],
                                            CONCAT15(bVar32 | auVar43[5],
                                                     CONCAT14(bVar31 | auVar43[4],
                                                              CONCAT13(bVar30 | auVar43[3],
                                                                       CONCAT12(bVar29 | auVar43[2],
                                                                                CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                          *(long *)pbVar14 == 0) {
                        return (byte *)0x1;
                      }
                      return (byte *)0x0;
                    }
                    if ((pbVar12 == (byte *)0x1) &&
                       (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) &&
                        pbVar25 == (byte *)0x0) && lVar26 == 0)) {
                      if (pbVar14[0x28] != 6) {
                        return (byte *)0x0;
                      }
                      if (*(long *)pbVar14 != 1) {
                        return (byte *)0x0;
                      }
                    }
                    else {
                      if (pbVar14[0x28] != 6) {
                        return (byte *)0x0;
                      }
                      if (*(long *)pbVar14 != 2) {
                        return (byte *)0x0;
                      }
                    }
                    lVar26 = *(long *)(pbVar14 + 0x20);
                    lVar24 = *(long *)(pbVar14 + 0x18);
                    bVar27 = pbVar14[8] | (byte)lVar24;
                    bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
                    bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
                    bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
                    bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
                    bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
                    bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
                    bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
                    bVar35 = pbVar14[0x10] | (byte)lVar26;
                    bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
                    bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
                    bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
                    bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
                    bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
                    bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
                    bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
                    auVar1[1] = bVar28;
                    auVar1[0] = bVar27;
                    auVar1[2] = bVar29;
                    auVar1[3] = bVar30;
                    auVar1[4] = bVar31;
                    auVar1[5] = bVar32;
                    auVar1[6] = bVar33;
                    auVar1[7] = bVar34;
                    auVar1[8] = bVar35;
                    auVar1[9] = bVar36;
                    auVar1[10] = bVar37;
                    auVar1[0xb] = bVar38;
                    auVar1[0xc] = bVar39;
                    auVar1[0xd] = bVar40;
                    auVar1[0xe] = bVar41;
                    auVar1[0xf] = bVar42;
                    auVar2[1] = bVar28;
                    auVar2[0] = bVar27;
                    auVar2[2] = bVar29;
                    auVar2[3] = bVar30;
                    auVar2[4] = bVar31;
                    auVar2[5] = bVar32;
                    auVar2[6] = bVar33;
                    auVar2[7] = bVar34;
                    auVar2[8] = bVar35;
                    auVar2[9] = bVar36;
                    auVar2[10] = bVar37;
                    auVar2[0xb] = bVar38;
                    auVar2[0xc] = bVar39;
                    auVar2[0xd] = bVar40;
                    auVar2[0xe] = bVar41;
                    auVar2[0xf] = bVar42;
                    auVar43 = NEON_ext(auVar1,auVar2,8,1);
                    lVar24 = CONCAT17(bVar34 | auVar43[7],
                                      CONCAT16(bVar33 | auVar43[6],
                                               CONCAT15(bVar32 | auVar43[5],
                                                        CONCAT14(bVar31 | auVar43[4],
                                                                 CONCAT13(bVar30 | auVar43[3],
                                                                          CONCAT12(bVar29 | auVar43[
                                                  2],CONCAT11(bVar28 | auVar43[1],
                                                              bVar27 | auVar43[0])))))));
                    goto joined_r0x000100e26620;
                  }
                  if (pbVar14[0x28] != 5) {
                    return (byte *)0x0;
                  }
                  lVar24 = *(long *)(pbVar14 + 8);
                  uVar13 = *(ulong *)(pbVar14 + 0x10);
                  lVar26 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar26,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
                  unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
                  unaff_x20 = *(ulong *)(puVar7 + -0xa0);
                  unaff_x19 = *(byte **)(puVar7 + -0x98);
                  unaff_x22 = *(ulong *)(puVar7 + -0xb0);
                  unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
                  unaff_x24 = *(byte **)(puVar7 + -0xc0);
                  unaff_x23 = *(byte **)(puVar7 + -0xb8);
                  puVar7 = puVar7 + -0x80;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 1046165b8; end: 104616647;  */

/* WARNING: Removing unreachable block (ram,0x000104616608) */

void FUN_1046165b8(void)

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
  FUN_10461617c(&uStack_d0);
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



/* Entry: 104616648; end: 1046166b3;  */

void FUN_104616648(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[9] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[10] = 0;
  param_1[0xb] = 0xe000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0xe000000000000000;
  param_1[0xf] = 0xc000000000000000;
  param_1[0xe] = 0;
  return;
}



/* Entry: 1046166b4; end: 1046166e3;  */

undefined1  [16] FUN_1046166b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Entry: 1046166e4; end: 104616717;  */

void FUN_1046166e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return;
}



/* Entry: 104616718; end: 10461672b;  */

undefined1  [16] FUN_104616718(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = 0x104616728;
  return auVar1;
}



/* Entry: 10461672c; end: 104616753;  */

void FUN_10461672c(void)

{
  FUN_104616004();
  return;
}



/* Entry: 104616754; end: 1046167f3;  */

void FUN_104616754(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c08 != -1) {
    _swift_once(0x113089c08,FUN_104615ea4);
  }
  uVar5 = uRam0000000113814be8;
  uVar4 = uRam0000000113814be0;
  uVar3 = uRam0000000113814bd8;
  uVar2 = uRam0000000113814bd0;
  uVar1 = uRam0000000113814bc8;
  *param_1 = uRam0000000113814bc0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1046167f4; end: 10461682f;  */

void FUN_1046167f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089d68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089d68,&UNK_10dd1ff10);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104616830; end: 104616a33;  */

/* WARNING: Removing unreachable block (ram,0x0001046168a4) */

void FUN_104616830(void)

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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
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
  FUN_10461617c(&uStack_150);
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



/* Entry: 104616a34; end: 104616aa3;  */

uint FUN_104616a34(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
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
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_1046191b8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 104616aa4; end: 104616b63;  */

void FUN_104616aa4(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1fff0,0xf8,&uStack_48,&lStack_40);
  puRam0000000113814bf8 = puStack_38;
  lRam0000000113814bf0 = lStack_40;
  puRam0000000113814c08 = puStack_28;
  puRam0000000113814c00 = puStack_30;
  puRam0000000113814c18 = puStack_18;
  puRam0000000113814c10 = puStack_20;
  return;
}



/* Entry: 104616b64; end: 104616ca3;  */

void FUN_104616b64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c20 != -1) {
    _swift_once(0x113089c20,FUN_104616aa4);
  }
  uVar5 = uRam0000000113814c18;
  uVar4 = uRam0000000113814c10;
  uVar3 = uRam0000000113814c08;
  uVar2 = uRam0000000113814c00;
  uVar1 = uRam0000000113814bf8;
  *param_1 = uRam0000000113814bf0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104616ca4; end: 104616d63;  */

void FUN_104616ca4(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1ff90,0x59,&uStack_48,&lStack_40);
  puRam0000000113814c28 = puStack_38;
  lRam0000000113814c20 = lStack_40;
  puRam0000000113814c38 = puStack_28;
  puRam0000000113814c30 = puStack_30;
  puRam0000000113814c48 = puStack_18;
  puRam0000000113814c40 = puStack_20;
  return;
}



/* Entry: 104616d64; end: 104616ea3;  */

void FUN_104616d64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c28 != -1) {
    _swift_once(0x113089c28,FUN_104616ca4);
  }
  uVar5 = uRam0000000113814c48;
  uVar4 = uRam0000000113814c40;
  uVar3 = uRam0000000113814c38;
  uVar2 = uRam0000000113814c30;
  uVar1 = uRam0000000113814c28;
  *param_1 = uRam0000000113814c20;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104616ea4; end: 104616ecb;  */

undefined * FUN_104616ea4(void)

{
  return &UNK_11078f9f8;
}



/* Entry: 104616ecc; end: 104616f8b;  */

void FUN_104616ecc(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1ff50,0x3c,&uStack_48,&lStack_40);
  puRam0000000113814c58 = puStack_38;
  lRam0000000113814c50 = lStack_40;
  puRam0000000113814c68 = puStack_28;
  puRam0000000113814c60 = puStack_30;
  puRam0000000113814c78 = puStack_18;
  puRam0000000113814c70 = puStack_20;
  return;
}



/* Entry: 104616f8c; end: 10461702b;  */

void FUN_104616f8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c30 != -1) {
    _swift_once(0x113089c30,FUN_104616ecc);
  }
  uVar5 = uRam0000000113814c78;
  uVar4 = uRam0000000113814c70;
  uVar3 = uRam0000000113814c68;
  uVar2 = uRam0000000113814c60;
  uVar1 = uRam0000000113814c58;
  *param_1 = uRam0000000113814c50;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10461702c; end: 10461719f;  */

/* WARNING: Removing unreachable block (ram,0x000104617160) */

void FUN_10461702c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x000104619a18();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_1107901a8;
          }
          else {
            if (lVar1 != 3) goto LAB_1046170c8;
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0001045b66a4();
            lVar2 = unaff_x20 + 0x18;
            puVar3 = &UNK_110790230;
          }
          goto LAB_1046170b4;
        }
        pcVar5 = *(code **)(param_3 + 0x150);
LAB_104617150:
        (*pcVar5)();
      }
      else {
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1045b7960();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_11078f270;
        }
        else {
          if (lVar1 != 5) {
            if (lVar1 != 6) goto LAB_1046170c8;
            pcVar5 = *(code **)(param_3 + 0x150);
            goto LAB_104617150;
          }
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x0001045b6724();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_11078fe38;
        }
LAB_1046170b4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1046170c8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1046171a0; end: 104617367;  */

void FUN_1046171a0(undefined8 param_1)

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
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_104613128(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_10460e4d4(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar8 = unaff_x20[0xb];
  if (uVar8 != 0) {
    uVar1 = unaff_x20[0xc];
    uVar2 = unaff_x20[0xd];
    uVar9 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(4);
    _swift_bridgeObjectRetain(uVar8);
    func_0x00010006c00c(uVar1,uVar2);
    func_0x0001046048dc(param_1,uVar9,uVar8,uVar1,uVar2);
    FUN_1045b3c60(uVar9,uVar8,uVar1,uVar2);
  }
  uVar8 = unaff_x20[4];
  if ((char)unaff_x20[5] == '\x01') {
    if (uVar8 != 0) {
      __ss6HasherV8_combineyySuF(5);
      bVar4 = uVar8 == 2;
      uVar8 = 1;
      if (bVar4) {
        uVar8 = 2;
      }
LAB_1046172c0:
      __ss6HasherV8_combineyySuF(uVar8);
    }
  }
  else if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(5);
    goto LAB_1046172c0;
  }
  uVar1 = unaff_x20[6];
  uVar2 = unaff_x20[7];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[8];
  uVar3 = (uint)(unaff_x20[9] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[9] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_104617340;
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
LAB_104617340:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 104617368; end: 104617507;  */

void FUN_104617368(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
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
      pcVar5 = *(code **)(param_3 + 0x118);
      func_0x000104619a18();
      (*pcVar5)(uVar4,2,&UNK_1107901a8,uVar2,param_2,param_3);
      uVar2 = uVar4;
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[3];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      func_0x0001045b66a4();
      (*pcVar5)(uVar4,3,&UNK_110790230,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    puVar3 = unaff_x20;
    FUN_104617508();
    if (unaff_x21 == 0) {
      if (unaff_x20[4] != 0) {
        uStack_58 = (undefined1)unaff_x20[5];
        pcVar5 = *(code **)(param_3 + 0x80);
        uStack_60 = unaff_x20[4];
        func_0x0001045b6724();
        (*pcVar5)(&uStack_60,5,&UNK_11078fe38,puVar3,param_2,param_3);
      }
      uVar2 = unaff_x20[7];
      uVar4 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar4 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,6,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
    }
  }
  return;
}



/* Entry: 104617508; end: 10461758b;  */

void FUN_104617508(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x58);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045b7960();
    (*pcVar1)(&uStack_60,4,&UNK_11078f270,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10461758c; end: 10461758f;  */

uint FUN_10461758c(ulong *param_1,ulong *param_2)

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
    FUN_1045b9f64(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_1045b79ac(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar4 = param_1[0xb];
        uVar2 = param_1[10];
        uVar9 = param_1[0xd];
        uVar7 = param_1[0xc];
        uVar6 = param_2[0xb];
        uVar5 = param_2[10];
        uVar10 = param_2[0xd];
        uVar8 = param_2[0xc];
        uStack_a0 = uVar5;
        uStack_98 = uVar6;
        uStack_90 = uVar8;
        uStack_88 = uVar10;
        uStack_80 = uVar2;
        uStack_78 = uVar4;
        uStack_70 = uVar7;
        uStack_68 = uVar9;
        if (uVar4 == 0) {
          if (uVar6 != 0) goto LAB_10461978c;
          func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
          func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
LAB_104619850:
          FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
          uVar2 = param_1[4];
          uVar4 = param_2[4];
          if ((char)param_2[5] == '\x01') {
            if (uVar4 == 0) {
              if (uVar2 == 0) goto LAB_10461990c;
            }
            else if (uVar4 == 1) {
              if (uVar2 == 1) {
LAB_10461990c:
                uVar2 = param_1[6];
                if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar2 & 1) != 0)) {
                  uVar2 = param_1[8];
                  func_0x000100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)uVar2;
                  goto LAB_1046197f0;
                }
              }
            }
            else if (uVar2 == 2) goto LAB_10461990c;
          }
          else if (uVar2 == uVar4) goto LAB_10461990c;
        }
        else {
          if (uVar6 == 0) {
LAB_10461978c:
            func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
            func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
            uVar2 = uVar5;
            uVar4 = uVar6;
            uVar7 = uVar8;
            uVar9 = uVar10;
          }
          else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                  (uVar3 = uVar2,
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
            func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
            func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
            uVar3 = uVar7;
            func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
            FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
            if ((uVar3 & 1) != 0) goto LAB_104619850;
          }
          else {
            func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
            func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
            FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
          }
          FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
        }
      }
    }
  }
  uVar1 = 0;
LAB_1046197f0:
  return uVar1 & 1;
}



/* Entry: 104617590; end: 10461761f;  */

/* WARNING: Removing unreachable block (ram,0x0001046175e0) */

void FUN_104617590(void)

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
  FUN_1046171a0(&uStack_d0);
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



/* Entry: 104617620; end: 104617677;  */

void FUN_104617620(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = puVar1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 104617678; end: 1046176a7;  */

undefined1  [16] FUN_104617678(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1046176a8; end: 1046176db;  */

void FUN_1046176a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1046176dc; end: 1046176ef;  */

undefined1  [16] FUN_1046176dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1046176ec;
  return auVar1;
}



/* Entry: 1046176f0; end: 104617703;  */

void FUN_1046176f0(void)

{
  FUN_10461702c();
  return;
}



/* Entry: 104617704; end: 10461774b;  */

void FUN_104617704(void)

{
  FUN_104617368();
  return;
}


