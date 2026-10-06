/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00151804; end: 0015181f;  */

undefined8 FUN_00151804(void)

{
  return 0x151814;
}



/* Entry: 00151820; end: 00151847;  */

void FUN_00151820(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 00151848; end: 0015185b;  */

undefined1  [16] FUN_00151848(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x151858;
  return auVar1;
}



/* Entry: 0015185c; end: 00151957;  */

undefined8 FUN_0015185c(void)

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
  func_0x001869f8();
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



/* Entry: 00151958; end: 00151977;  */

undefined8 FUN_00151958(void)

{
  return 0;
}



/* Entry: 00151978; end: 001519c3;  */

void FUN_00151978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
               *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  return;
}



/* Entry: 001519c4; end: 00151b63;  */

undefined1  [16] FUN_001519c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  section *psVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  psVar7 = &section_00000068;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,&UNK_00007f35);
  }
  *param_1 = psVar7;
  *(long *)psVar7[1].segname = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  cVar10 = '\x04';
  if (bVar6) {
    cVar10 = (char)uVar4;
  }
  *(undefined8 *)psVar7->sectname = uVar1;
  *(undefined8 *)(psVar7->sectname + 8) = uVar5;
  cVar8 = '\x03';
  cVar11 = cVar8;
  if (bVar6) {
    cVar11 = (char)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  *(undefined **)psVar7->segname = puVar2;
  if (bVar6) {
    cVar8 = (char)((ulong)uVar4 >> 0x10);
  }
  cVar9 = '\x03';
  cVar12 = cVar9;
  if (bVar6) {
    cVar12 = (char)((ulong)uVar4 >> 0x18);
  }
  psVar7->segname[8] = cVar10;
  cVar10 = cVar9;
  cVar13 = cVar9;
  if (bVar6) {
    cVar13 = (char)((ulong)uVar4 >> 0x20);
    cVar10 = (char)((ulong)uVar4 >> 0x28);
  }
  psVar7->segname[9] = cVar11;
  if (bVar6) {
    cVar9 = (char)((ulong)uVar4 >> 0x30);
  }
  psVar7->segname[10] = cVar8;
  cVar11 = '\x05';
  if (puVar3 != (undefined *)0x0) {
    cVar11 = (char)((ulong)uVar4 >> 0x38);
  }
  psVar7->segname[0xb] = cVar12;
  psVar7->segname[0xc] = cVar13;
  psVar7->segname[0xd] = cVar10;
  psVar7->segname[0xe] = cVar9;
  psVar7->segname[0xf] = cVar11;
  func_0x001869f8();
  auVar14._8_8_ = psVar7;
  auVar14._0_8_ = 0x1930e0;
  return auVar14;
}



/* Entry: 00151b64; end: 00151b8b;  */

void FUN_00151b64(void)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
               *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 00151b8c; end: 00151bf3;  */

char FUN_00151b8c(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x48);
  if (cVar1 == '\x02') {
    cVar1 = '\x01';
  }
  return cVar1;
}



/* Entry: 00151bf4; end: 00151c23;  */

undefined1  [16] FUN_00151bf4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 00151c24; end: 00151c57;  */

void FUN_00151c24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00151c58; end: 00151c8b;  */

undefined1  [16] FUN_00151c58(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x151c68;
  return auVar1;
}



/* Entry: 00151c8c; end: 00151cb7;  */

void FUN_00151c8c(void)

{
  func_0x000115a8(0xaf0800,&UNK_007daf90);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00151cb8; end: 00151cf3;  */

void FUN_00151cb8(undefined1 *param_1,long *param_2)

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



/* Entry: 00151cf4; end: 00151d33;  */

void FUN_00151cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0800;
  func_0x000115a8(0xaf0800,&UNK_007daf90);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00151d34; end: 00151d9b;  */

undefined4 FUN_00151d34(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x14) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  return uVar1;
}



/* Entry: 00151d9c; end: 00151ddb;  */

undefined1  [16] FUN_00151d9c(void)

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



/* Entry: 00151ddc; end: 00151e0f;  */

void FUN_00151ddc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 00151e10; end: 00151e67;  */

undefined1  [16] FUN_00151e10(undefined8 *param_1)

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
  auVar4._0_8_ = 0x1930e4;
  return auVar4;
}



/* Entry: 00151e68; end: 00151e77;  */

bool FUN_00151e68(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 00151e78; end: 00151e93;  */

void FUN_00151e78(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 00151e94; end: 00151ed3;  */

undefined1  [16] FUN_00151e94(void)

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



/* Entry: 00151ed4; end: 00151f07;  */

void FUN_00151ed4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 00151f08; end: 00151f5f;  */

undefined1  [16] FUN_00151f08(undefined8 *param_1)

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
  auVar4._0_8_ = 0x1930c8;
  return auVar4;
}



/* Entry: 00151f60; end: 00151f6f;  */

bool FUN_00151f60(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x30) != 0;
}



/* Entry: 00151f70; end: 00151f8b;  */

void FUN_00151f70(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 00151f8c; end: 0015204b;  */

byte FUN_00151f8c(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x38) & 1;
}



/* Entry: 0015204c; end: 0015207b;  */

undefined1  [16] FUN_0015204c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0015207c; end: 001520af;  */

void FUN_0015207c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001520b0; end: 001520fb;  */

undefined8 FUN_001520b0(void)

{
  return 0x1520c0;
}



/* Entry: 001520fc; end: 00152123;  */

void FUN_001520fc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 00152124; end: 0015213f;  */

undefined1  [16] FUN_00152124(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x152134;
  return auVar1;
}



/* Entry: 00152140; end: 00152167;  */

void FUN_00152140(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 00152168; end: 0015217b;  */

undefined1  [16] FUN_00152168(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x152178;
  return auVar1;
}



/* Entry: 0015217c; end: 001521bb;  */

undefined1  [16] FUN_0015217c(void)

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



/* Entry: 001521bc; end: 001521ef;  */

void FUN_001521bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 001521f0; end: 00152247;  */

undefined1  [16] FUN_001521f0(undefined8 *param_1)

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
  auVar4._0_8_ = 0x193100;
  return auVar4;
}



/* Entry: 00152248; end: 00152257;  */

bool FUN_00152248(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 00152258; end: 00152273;  */

void FUN_00152258(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 00152274; end: 001523bf;  */

undefined4 FUN_00152274(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x24) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x20);
  }
  return uVar1;
}



/* Entry: 001523c0; end: 001523ff;  */

undefined1  [16] FUN_001523c0(void)

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



/* Entry: 00152400; end: 00152433;  */

void FUN_00152400(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 00152434; end: 0015248b;  */

undefined1  [16] FUN_00152434(undefined8 *param_1)

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
  auVar4._0_8_ = 0x193104;
  return auVar4;
}



/* Entry: 0015248c; end: 0015249b;  */

bool FUN_0015248c(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x30) != 0;
}



/* Entry: 0015249c; end: 001524b7;  */

void FUN_0015249c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 001524b8; end: 001524f7;  */

undefined1  [16] FUN_001524b8(void)

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



/* Entry: 001524f8; end: 0015252b;  */

void FUN_001524f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 0015252c; end: 00152583;  */

undefined1  [16] FUN_0015252c(undefined8 *param_1)

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
  auVar4._0_8_ = 0x193108;
  return auVar4;
}



/* Entry: 00152584; end: 00152593;  */

bool FUN_00152584(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x40) != 0;
}



/* Entry: 00152594; end: 001525af;  */

void FUN_00152594(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  return;
}



/* Entry: 001525b0; end: 001525ef;  */

undefined1  [16] FUN_001525b0(void)

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



/* Entry: 001525f0; end: 00152623;  */

void FUN_001525f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 00152624; end: 0015267b;  */

undefined1  [16] FUN_00152624(undefined8 *param_1)

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
  auVar4._0_8_ = FUN_0015267c;
  return auVar4;
}



/* Entry: 0015267c; end: 001526db;  */

void FUN_0015267c(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  return;
}



/* Entry: 001526dc; end: 001526eb;  */

bool FUN_001526dc(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x50) != 0;
}



/* Entry: 001526ec; end: 00152707;  */

void FUN_001526ec(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  return;
}



/* Entry: 00152708; end: 00152783;  */

undefined4 FUN_00152708(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x5c) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x58);
  }
  return uVar1;
}



/* Entry: 00152784; end: 001527c3;  */

undefined1  [16] FUN_00152784(void)

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



/* Entry: 001527c4; end: 001527f7;  */

void FUN_001527c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 001527f8; end: 0015284f;  */

undefined1  [16] FUN_001527f8(undefined8 *param_1)

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
  auVar4._0_8_ = 0x1930cc;
  return auVar4;
}



/* Entry: 00152850; end: 001528af;  */

void FUN_00152850(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  return;
}



/* Entry: 001528b0; end: 001528bf;  */

bool FUN_001528b0(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x68) != 0;
}



/* Entry: 001528c0; end: 001528db;  */

void FUN_001528c0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 001528dc; end: 0015299f;  */

undefined8 FUN_001528dc(void)

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
    if (lRam0000000000af0808 != -1) {
      _swift_once(0xaf0808,FUN_001733a8);
    }
    _swift_retain(uRam0000000000af0810);
    uVar5 = 0;
  }
  func_0x00186a8c(uVar1,uVar3,lVar2,uVar4);
  return uVar5;
}



/* Entry: 001529a0; end: 001529bb;  */

undefined8 FUN_001529a0(void)

{
  if (lRam0000000000af0808 != -1) {
    _swift_once(0xaf0808,FUN_001733a8);
  }
  _swift_retain(uRam0000000000af0810);
  return 0;
}



/* Entry: 001529bc; end: 00152a17;  */

undefined8 FUN_001529bc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    _swift_once(param_1,param_3);
  }
  _swift_retain(*param_2);
  return 0;
}



/* Entry: 00152a18; end: 00152b47;  */

void FUN_00152a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00186ac4(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                  *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  *(undefined8 *)(unaff_x20 + 0x88) = param_4;
  return;
}



/* Entry: 00152b48; end: 00152c13;  */

void FUN_00152b48(undefined8 *param_1,ulong param_2)

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
    func_0x00186ac4(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
  }
  else {
    func_0x00023304(uVar2,uVar6);
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(uVar1);
    func_0x00186ac4(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    FUN_00023358(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 00152c14; end: 00152cb3;  */

bool FUN_00152c14(void)

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
    func_0x00187028(&uStack_50,auStack_70,0xaf0818,&UNK_007daf98);
  }
  else {
    func_0x00187028(&uStack_50,auStack_70,0xaf0818,&UNK_007daf98);
    func_0x00186ac4(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x00186ac4(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 00152cb4; end: 00152cd7;  */

void FUN_00152cb4(void)

{
  long unaff_x20;
  
  func_0x00186ac4(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                  *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  return;
}



/* Entry: 00152cd8; end: 00152d37;  */

byte FUN_00152cd8(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x90) & 1;
}



/* Entry: 00152d38; end: 00152d67;  */

undefined1  [16] FUN_00152d38(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00152d68; end: 00152d9b;  */

void FUN_00152d68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00152d9c; end: 00152dbb;  */

undefined8 FUN_00152d9c(void)

{
  return 0x152dac;
}



/* Entry: 00152dbc; end: 00152de7;  */

void FUN_00152dbc(void)

{
  func_0x000115a8(0xaf0860,&UNK_007dafa0);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00152de8; end: 00152e73;  */

void FUN_00152de8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x00186378();
  *param_1 = uVar1;
  return;
}



/* Entry: 00152e74; end: 00152e9b;  */

undefined8 FUN_00152e74(void)

{
  return 0;
}



/* Entry: 00152e9c; end: 00152ec7;  */

void FUN_00152e9c(void)

{
  func_0x000115a8(0xaf0898,&UNK_007dafa8);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00152ec8; end: 00152edb;  */

undefined8 FUN_00152ec8(ulong param_1)

{
  return *(undefined8 *)(&UNK_007dfe28 + (param_1 & 0xff) * 8);
}



/* Entry: 00152edc; end: 00152fa3;  */

void FUN_00152edc(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe28 + (ulong)bVar1 * 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00152fa4; end: 0015301b;  */

void FUN_00152fa4(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0x1020003 >> (ulong)(((uint)*param_2 & 3) << 3));
  if (3 < *param_2) {
    uVar1 = 3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 0015301c; end: 0015305b;  */

void FUN_0015301c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0898;
  func_0x000115a8(0xaf0898,&UNK_007dafa8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 0015305c; end: 001530af;  */

void FUN_0015305c(undefined8 *param_1)

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



/* Entry: 001530b0; end: 001530ef;  */

undefined1  [16] FUN_001530b0(void)

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



/* Entry: 001530f0; end: 00153123;  */

void FUN_001530f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00153124; end: 0015317b;  */

undefined1  [16] FUN_00153124(undefined8 *param_1)

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
  auVar4._0_8_ = 0x1930d4;
  return auVar4;
}



/* Entry: 0015317c; end: 0015318b;  */

bool FUN_0015317c(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 0015318c; end: 001531a7;  */

void FUN_0015318c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 001531a8; end: 00153257;  */

void FUN_001531a8(undefined8 *param_1)

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
    puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uVar4 = 0xc000000000000000;
  }
  func_0x00187028(&puStack_80,auStack_c0,0xaefe58,&UNK_007d9c30);
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



/* Entry: 00153258; end: 00153287;  */

void FUN_00153258(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 00153288; end: 001532cb;  */

void FUN_00153288(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00191ff4(unaff_x20 + 0x20,0xaefe58,&UNK_007d9c30);
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



/* Entry: 001532cc; end: 0015339b;  */

undefined1  [16] FUN_001532cc(undefined8 *param_1)

{
  dword *pdVar1;
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
  
  pdVar1 = &section_00000108.flags;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x148,&UNK_0000826b);
  }
  *param_1 = pdVar1;
  *(long *)(pdVar1 + 0x50) = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(pdVar1 + 10) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(pdVar1 + 8) = uVar4;
  *(undefined8 *)(pdVar1 + 0xe) = uVar6;
  *(undefined8 *)(pdVar1 + 0xc) = uVar5;
  *(undefined8 *)(pdVar1 + 2) = uVar10;
  *(undefined8 *)pdVar1 = uVar9;
  *(undefined8 *)(pdVar1 + 6) = uVar8;
  *(undefined8 *)(pdVar1 + 4) = uVar7;
  if (*(undefined **)pdVar1 == (undefined *)0x0) {
    uVar5 = 0xc000000000000000;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    uVar5 = *(undefined8 *)(pdVar1 + 4);
    uVar4 = *(undefined8 *)(pdVar1 + 2);
    uVar7 = *(undefined8 *)(pdVar1 + 10);
    uVar6 = *(undefined8 *)(pdVar1 + 8);
    uVar9 = *(undefined8 *)(pdVar1 + 0xe);
    uVar8 = *(undefined8 *)(pdVar1 + 0xc);
    puVar2 = *(undefined **)pdVar1;
    puVar3 = *(undefined **)(pdVar1 + 6);
  }
  *(undefined **)(pdVar1 + 0x10) = puVar2;
  *(undefined8 *)(pdVar1 + 0x14) = uVar5;
  *(undefined8 *)(pdVar1 + 0x12) = uVar4;
  *(undefined **)(pdVar1 + 0x16) = puVar3;
  *(undefined8 *)(pdVar1 + 0x1a) = uVar7;
  *(undefined8 *)(pdVar1 + 0x18) = uVar6;
  *(undefined8 *)(pdVar1 + 0x1e) = uVar9;
  *(undefined8 *)(pdVar1 + 0x1c) = uVar8;
  func_0x00187028(pdVar1,pdVar1 + 0x20,0xaefe58,&UNK_007d9c30);
  auVar11._8_8_ = pdVar1 + 0x10;
  auVar11._0_8_ = FUN_0015339c;
  return auVar11;
}



/* Entry: 0015339c; end: 0015346f;  */

void FUN_0015339c(long *param_1,ulong param_2)

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
    func_0x00191ff4(lVar2 + 0x20,0xaefe58,&UNK_007d9c30);
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
    func_0x00186afc(lVar1 + 0xc0,lVar1 + 0x100);
    func_0x00191ff4(lVar1 + 0x80,0xaefe58,&UNK_007d9c30);
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x38) = uVar8;
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
    *(undefined8 *)(lVar2 + 0x48) = uVar12;
    *(undefined8 *)(lVar2 + 0x40) = uVar10;
    *(undefined8 *)(lVar2 + 0x58) = uVar16;
    *(undefined8 *)(lVar2 + 0x50) = uVar14;
    func_0x00186b30(lVar1 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar1);
  return;
}



/* Entry: 00153470; end: 00153573;  */

bool FUN_00153470(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_130 [64];
  long lStack_f0;
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
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x50);
  lStack_70 = lVar3;
  if (lVar3 == 0) {
    lStack_f0 = 0;
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar1 = 0xaefe58;
    puVar2 = &UNK_007d9c30;
    func_0x00187028(&lStack_70,auStack_130,0xaefe58,&UNK_007d9c30);
  }
  else {
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_f0 = lVar3;
    func_0x00187028(&lStack_70,auStack_130,0xaefe58,&UNK_007d9c30);
    uVar1 = 0xaf08a0;
    puVar2 = &UNK_007dafb8;
  }
  func_0x00191ff4(&lStack_f0,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 00153574; end: 001535a7;  */

void FUN_00153574(void)

{
  long unaff_x20;
  
  func_0x00191ff4(unaff_x20 + 0x20,0xaefe58,&UNK_007d9c30);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  return;
}



/* Entry: 001535a8; end: 001535d7;  */

undefined1  [16] FUN_001535a8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001535d8; end: 0015360b;  */

void FUN_001535d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0015360c; end: 00153653;  */

undefined8 FUN_0015360c(void)

{
  return 0x15361c;
}



/* Entry: 00153654; end: 00153707;  */

void FUN_00153654(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                 code *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    (*param_3)(0);
    _swift_allocObject();
    (*param_5)();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_68,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 00153708; end: 001537a3;  */

undefined1  [16] FUN_00153708(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 0x60;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x60,&UNK_0000f7eb);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x58) = unaff_x20;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar4 + 0x10,lVar1,0,0);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(long *)(lVar1 + 0x50) = lVar2;
  _swift_bridgeObjectRetain();
  auVar5._8_8_ = lVar1 + 0x48;
  auVar5._0_8_ = FUN_001537a4;
  return auVar5;
}


