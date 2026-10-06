/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045c3880; end: 1045c38af;  */

undefined1  [16] FUN_1045c3880(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045c38b0; end: 1045c38e3;  */

void FUN_1045c38b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045c38e4; end: 1045c3a2b;  */

undefined8 FUN_1045c38e4(void)

{
  return 0x1045c38f4;
}



/* Entry: 1045c3a2c; end: 1045c3a57;  */

undefined1  [16] FUN_1045c3a2c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1045c3a58; end: 1045c3a8b;  */

void FUN_1045c3a58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045c3a8c; end: 1045c3ad7;  */

undefined8 FUN_1045c3a8c(void)

{
  return 0x1045c3a9c;
}



/* Entry: 1045c3ad8; end: 1045c3aff;  */

void FUN_1045c3ad8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045c3b00; end: 1045c3b1b;  */

undefined8 FUN_1045c3b00(void)

{
  return 0x1045c3b10;
}



/* Entry: 1045c3b1c; end: 1045c3b43;  */

void FUN_1045c3b1c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 1045c3b44; end: 1045c3b57;  */

undefined1  [16] FUN_1045c3b44(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045c3b54;
  return auVar1;
}



/* Entry: 1045c3b58; end: 1045c3c53;  */

undefined8 FUN_1045c3b58(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x0001045f8978();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 1045c3c54; end: 1045c3c73;  */

undefined8 FUN_1045c3c54(void)

{
  return 0;
}



/* Entry: 1045c3c74; end: 1045c3cbf;  */

void FUN_1045c3c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  return;
}



/* Entry: 1045c3cc0; end: 1045c3e5f;  */

undefined1  [16] FUN_1045c3cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x7f35);
  }
  *param_1 = puVar7;
  puVar7[0xc] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x104604a04;
  return auVar14;
}



/* Entry: 1045c3e60; end: 1045c3e87;  */

void FUN_1045c3e60(void)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1045c3e88; end: 1045c3eef;  */

char FUN_1045c3e88(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x48);
  if (cVar1 == '\x02') {
    cVar1 = '\x01';
  }
  return cVar1;
}



/* Entry: 1045c3ef0; end: 1045c3f1f;  */

undefined1  [16] FUN_1045c3ef0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1045c3f20; end: 1045c3f53;  */

void FUN_1045c3f20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045c3f54; end: 1045c3f87;  */

undefined1  [16] FUN_1045c3f54(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045c3f64;
  return auVar1;
}



/* Entry: 1045c3f88; end: 1045c3fb3;  */

void FUN_1045c3f88(void)

{
  func_0x0001000285a8(0x113087960,&UNK_10dd19c00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045c3fb4; end: 1045c3fef;  */

void FUN_1045c3fb4(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1045c3ff0; end: 1045c402f;  */

void FUN_1045c3ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087960;
  func_0x0001000285a8(0x113087960,&UNK_10dd19c00);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045c4030; end: 1045c4097;  */

undefined4 FUN_1045c4030(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x14) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  return uVar1;
}



/* Entry: 1045c4098; end: 1045c40d7;  */

undefined1  [16] FUN_1045c4098(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c40d8; end: 1045c410b;  */

void FUN_1045c40d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045c410c; end: 1045c4163;  */

undefined1  [16] FUN_1045c410c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x104604a08;
  return auVar4;
}



/* Entry: 1045c4164; end: 1045c4173;  */

bool FUN_1045c4164(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 1045c4174; end: 1045c418f;  */

void FUN_1045c4174(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 1045c4190; end: 1045c41cf;  */

undefined1  [16] FUN_1045c4190(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c41d0; end: 1045c4203;  */

void FUN_1045c41d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1045c4204; end: 1045c425b;  */

undefined1  [16] FUN_1045c4204(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x1046049ec;
  return auVar4;
}



/* Entry: 1045c425c; end: 1045c426b;  */

bool FUN_1045c425c(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x30) != 0;
}



/* Entry: 1045c426c; end: 1045c4287;  */

void FUN_1045c426c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1045c4288; end: 1045c4347;  */

byte FUN_1045c4288(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x38) & 1;
}



/* Entry: 1045c4348; end: 1045c4377;  */

undefined1  [16] FUN_1045c4348(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045c4378; end: 1045c43ab;  */

void FUN_1045c4378(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045c43ac; end: 1045c43f7;  */

undefined8 FUN_1045c43ac(void)

{
  return 0x1045c43bc;
}



/* Entry: 1045c43f8; end: 1045c441f;  */

void FUN_1045c43f8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 1045c4420; end: 1045c443b;  */

undefined1  [16] FUN_1045c4420(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1045c4430;
  return auVar1;
}



/* Entry: 1045c443c; end: 1045c4463;  */

void FUN_1045c443c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 1045c4464; end: 1045c4477;  */

undefined1  [16] FUN_1045c4464(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1045c4474;
  return auVar1;
}



/* Entry: 1045c4478; end: 1045c44b7;  */

undefined1  [16] FUN_1045c4478(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c44b8; end: 1045c44eb;  */

void FUN_1045c44b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045c44ec; end: 1045c4543;  */

undefined1  [16] FUN_1045c44ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x104604a24;
  return auVar4;
}



/* Entry: 1045c4544; end: 1045c4553;  */

bool FUN_1045c4544(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 1045c4554; end: 1045c456f;  */

void FUN_1045c4554(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1045c4570; end: 1045c46bb;  */

undefined4 FUN_1045c4570(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x24) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x20);
  }
  return uVar1;
}



/* Entry: 1045c46bc; end: 1045c46fb;  */

undefined1  [16] FUN_1045c46bc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c46fc; end: 1045c472f;  */

void FUN_1045c46fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1045c4730; end: 1045c4787;  */

undefined1  [16] FUN_1045c4730(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x104604a28;
  return auVar4;
}



/* Entry: 1045c4788; end: 1045c4797;  */

bool FUN_1045c4788(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x30) != 0;
}



/* Entry: 1045c4798; end: 1045c47b3;  */

void FUN_1045c4798(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1045c47b4; end: 1045c47f3;  */

undefined1  [16] FUN_1045c47b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c47f4; end: 1045c4827;  */

void FUN_1045c47f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 1045c4828; end: 1045c487f;  */

undefined1  [16] FUN_1045c4828(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x104604a2c;
  return auVar4;
}



/* Entry: 1045c4880; end: 1045c488f;  */

bool FUN_1045c4880(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x40) != 0;
}



/* Entry: 1045c4890; end: 1045c48ab;  */

void FUN_1045c4890(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  return;
}



/* Entry: 1045c48ac; end: 1045c48eb;  */

undefined1  [16] FUN_1045c48ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x50);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c48ec; end: 1045c491f;  */

void FUN_1045c48ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 1045c4920; end: 1045c4977;  */

undefined1  [16] FUN_1045c4920(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x50);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045c4978;
  return auVar4;
}



/* Entry: 1045c4978; end: 1045c49d7;  */

void FUN_1045c4978(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x48) = uVar1;
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  return;
}



/* Entry: 1045c49d8; end: 1045c49e7;  */

bool FUN_1045c49d8(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x50) != 0;
}



/* Entry: 1045c49e8; end: 1045c4a03;  */

void FUN_1045c49e8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  return;
}



/* Entry: 1045c4a04; end: 1045c4a7f;  */

undefined4 FUN_1045c4a04(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x5c) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x58);
  }
  return uVar1;
}



/* Entry: 1045c4a80; end: 1045c4abf;  */

undefined1  [16] FUN_1045c4a80(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c4ac0; end: 1045c4af3;  */

void FUN_1045c4ac0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 1045c4af4; end: 1045c4b4b;  */

undefined1  [16] FUN_1045c4af4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x1046049f0;
  return auVar4;
}



/* Entry: 1045c4b4c; end: 1045c4bab;  */

void FUN_1045c4b4c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x60) = uVar1;
    *(undefined8 *)(lVar2 + 0x68) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  return;
}



/* Entry: 1045c4bac; end: 1045c4bbb;  */

bool FUN_1045c4bac(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x68) != 0;
}



/* Entry: 1045c4bbc; end: 1045c4bd7;  */

void FUN_1045c4bbc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 1045c4bd8; end: 1045c4c9b;  */

undefined8 FUN_1045c4bd8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar2 = *(long *)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = uVar1;
  if (lVar2 == 0) {
    if (lRam0000000113087968 != -1) {
      _swift_once(0x113087968,FUN_1045e5424);
    }
    _swift_retain(uRam0000000113087970);
    uVar5 = 0;
  }
  func_0x0001045f8a0c(uVar1,uVar3,lVar2,uVar4);
  return uVar5;
}



/* Entry: 1045c4c9c; end: 1045c4cb7;  */

undefined8 FUN_1045c4c9c(void)

{
  if (lRam0000000113087968 != -1) {
    _swift_once(0x113087968,FUN_1045e5424);
  }
  _swift_retain(uRam0000000113087970);
  return 0;
}



/* Entry: 1045c4cb8; end: 1045c4d13;  */

undefined8 FUN_1045c4cb8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    _swift_once(param_1,param_3);
  }
  _swift_retain(*param_2);
  return 0;
}



/* Entry: 1045c4d14; end: 1045c4e43;  */

void FUN_1045c4d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x0001045f8a44(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  *(undefined8 *)(unaff_x20 + 0x88) = param_4;
  return;
}



/* Entry: 1045c4e44; end: 1045c4f0f;  */

void FUN_1045c4e44(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar5 = param_1[4];
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  uVar7 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  uVar8 = *(undefined8 *)(lVar5 + 0x88);
  if ((param_2 & 1) == 0) {
    func_0x0001045f8a44(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
  }
  else {
    func_0x00010006c00c(uVar2,uVar6);
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(uVar1);
    func_0x0001045f8a44(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    func_0x00010006c090(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1045c4f10; end: 1045c4faf;  */

bool FUN_1045c4f10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  lVar4 = *(long *)(unaff_x20 + 0x80);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087978,&UNK_10dd19c08);
  }
  else {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087978,&UNK_10dd19c08);
    func_0x0001045f8a44(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x0001045f8a44(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 1045c4fb0; end: 1045c4fd3;  */

void FUN_1045c4fb0(void)

{
  long unaff_x20;
  
  func_0x0001045f8a44(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  return;
}



/* Entry: 1045c4fd4; end: 1045c5033;  */

byte FUN_1045c4fd4(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x90) & 1;
}



/* Entry: 1045c5034; end: 1045c5063;  */

undefined1  [16] FUN_1045c5034(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045c5064; end: 1045c5097;  */

void FUN_1045c5064(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045c5098; end: 1045c50b7;  */

undefined8 FUN_1045c5098(void)

{
  return 0x1045c50a8;
}



/* Entry: 1045c50b8; end: 1045c50e3;  */

void FUN_1045c50b8(void)

{
  func_0x0001000285a8(0x1130879c0,&UNK_10dd19c10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045c50e4; end: 1045c516f;  */

void FUN_1045c50e4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x0001045f82f8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045c5170; end: 1045c5197;  */

undefined8 FUN_1045c5170(void)

{
  return 0;
}



/* Entry: 1045c5198; end: 1045c51c3;  */

void FUN_1045c5198(void)

{
  func_0x0001000285a8(0x1130879f8,&UNK_10dd19c18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045c51c4; end: 1045c51d7;  */

undefined8 FUN_1045c51c4(ulong param_1)

{
  return *(undefined8 *)(&UNK_10dd1ea98 + (param_1 & 0xff) * 8);
}



/* Entry: 1045c51d8; end: 1045c529f;  */

void FUN_1045c51d8(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1ea98 + (ulong)bVar1 * 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045c52a0; end: 1045c5317;  */

void FUN_1045c52a0(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0x1020003 >> (ulong)(((uint)*param_2 & 3) << 3));
  if (3 < *param_2) {
    uVar1 = 3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1045c5318; end: 1045c5357;  */

void FUN_1045c5318(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130879f8;
  func_0x0001000285a8(0x1130879f8,&UNK_10dd19c18);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045c5358; end: 1045c53ab;  */

void FUN_1045c5358(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0x301;
  *(undefined1 *)((long)param_1 + 0x26) = 0x12;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 2;
  return;
}



/* Entry: 1045c53ac; end: 1045c53eb;  */

undefined1  [16] FUN_1045c53ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c53ec; end: 1045c541f;  */

void FUN_1045c53ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045c5420; end: 1045c5477;  */

undefined1  [16] FUN_1045c5420(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x1046049f8;
  return auVar4;
}



/* Entry: 1045c5478; end: 1045c5487;  */

bool FUN_1045c5478(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 1045c5488; end: 1045c54a3;  */

void FUN_1045c5488(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1045c54a4; end: 1045c5553;  */

void FUN_1045c54a4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [64];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  puStack_80 = *(undefined **)(unaff_x20 + 0x20);
  puStack_68 = *(undefined **)(unaff_x20 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = uStack_78;
  puVar2 = puStack_68;
  puVar3 = puStack_80;
  uVar4 = uStack_70;
  uStack_e0 = uStack_50;
  uStack_d8 = uStack_48;
  uStack_d0 = uStack_60;
  uStack_c8 = uStack_58;
  if (puStack_80 == (undefined *)0x0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uVar1 = 0;
    puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar4 = 0xc000000000000000;
  }
  func_0x0001045f8fa8(&puStack_80,auStack_c0,0x113087028,&UNK_10dd18940);
  *param_1 = puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar4;
  param_1[3] = puVar2;
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  return;
}



/* Entry: 1045c5554; end: 1045c5583;  */

void FUN_1045c5554(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 1045c5584; end: 1045c55c7;  */

void FUN_1045c5584(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104603c54(unaff_x20 + 0x20,0x113087028,&UNK_10dd18940);
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  uVar1 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  return;
}



/* Entry: 1045c55c8; end: 1045c5697;  */

undefined1  [16] FUN_1045c55c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar1 = (undefined8 *)0x148;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x148,0x826b);
  }
  *param_1 = puVar1;
  puVar1[0x28] = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1[5] = *(undefined8 *)(unaff_x20 + 0x48);
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  puVar1[1] = uVar10;
  *puVar1 = uVar9;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar5 = 0xc000000000000000;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar5 = puVar1[2];
    uVar4 = puVar1[1];
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    uVar9 = puVar1[7];
    uVar8 = puVar1[6];
    puVar2 = (undefined *)*puVar1;
    puVar3 = (undefined *)puVar1[3];
  }
  puVar1[8] = puVar2;
  puVar1[10] = uVar5;
  puVar1[9] = uVar4;
  puVar1[0xb] = puVar3;
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar9;
  puVar1[0xe] = uVar8;
  func_0x0001045f8fa8(puVar1,puVar1 + 0x10,0x113087028,&UNK_10dd18940);
  auVar11._8_8_ = puVar1 + 8;
  auVar11._0_8_ = FUN_1045c5698;
  return auVar11;
}



/* Entry: 1045c5698; end: 1045c576b;  */

void FUN_1045c5698(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(lVar1 + 0x140);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar9 = *(undefined8 *)(lVar1 + 0x58);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    uVar6 = *(undefined8 *)(lVar1 + 0x68);
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    uVar10 = *(undefined8 *)(lVar1 + 0x78);
    uVar8 = *(undefined8 *)(lVar1 + 0x70);
    func_0x000104603c54(lVar2 + 0x20,0x113087028,&UNK_10dd18940);
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x38) = uVar9;
    *(undefined8 *)(lVar2 + 0x30) = uVar7;
    *(undefined8 *)(lVar2 + 0x48) = uVar6;
    *(undefined8 *)(lVar2 + 0x40) = uVar4;
    *(undefined8 *)(lVar2 + 0x58) = uVar10;
    *(undefined8 *)(lVar2 + 0x50) = uVar8;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x140);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uVar6 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 200) = uVar5;
    *(undefined8 *)(lVar1 + 0xc0) = uVar3;
    *(undefined8 *)(lVar1 + 0xd8) = uVar8;
    *(undefined8 *)(lVar1 + 0xd0) = uVar6;
    uVar12 = *(undefined8 *)(lVar1 + 0x68);
    uVar10 = *(undefined8 *)(lVar1 + 0x60);
    uVar16 = *(undefined8 *)(lVar1 + 0x78);
    uVar14 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0xe8) = uVar12;
    *(undefined8 *)(lVar1 + 0xe0) = uVar10;
    *(undefined8 *)(lVar1 + 0xf8) = uVar16;
    *(undefined8 *)(lVar1 + 0xf0) = uVar14;
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = *(undefined8 *)(lVar2 + 0x58);
    uVar7 = *(undefined8 *)(lVar2 + 0x50);
    uVar17 = *(undefined8 *)(lVar2 + 0x28);
    uVar15 = *(undefined8 *)(lVar2 + 0x20);
    uVar13 = *(undefined8 *)(lVar2 + 0x38);
    uVar11 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar1 + 0xa0) = uVar4;
    *(undefined8 *)(lVar1 + 0xb8) = uVar9;
    *(undefined8 *)(lVar1 + 0xb0) = uVar7;
    *(undefined8 *)(lVar1 + 0x88) = uVar17;
    *(undefined8 *)(lVar1 + 0x80) = uVar15;
    *(undefined8 *)(lVar1 + 0x98) = uVar13;
    *(undefined8 *)(lVar1 + 0x90) = uVar11;
    func_0x0001045f8a7c(lVar1 + 0xc0,lVar1 + 0x100);
    func_0x000104603c54(lVar1 + 0x80,0x113087028,&UNK_10dd18940);
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x38) = uVar8;
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
    *(undefined8 *)(lVar2 + 0x48) = uVar12;
    *(undefined8 *)(lVar2 + 0x40) = uVar10;
    *(undefined8 *)(lVar2 + 0x58) = uVar16;
    *(undefined8 *)(lVar2 + 0x50) = uVar14;
    func_0x0001045f8ab0(lVar1 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}


