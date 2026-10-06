/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001608a4; end: 001608a7;  */

void FUN_001608a4(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x10) = uVar1;
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  return;
}



/* Entry: 001608a8; end: 00160907;  */

void FUN_001608a8(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x10) = uVar1;
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  return;
}



/* Entry: 00160908; end: 00160917;  */

bool FUN_00160908(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 00160918; end: 00160933;  */

void FUN_00160918(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 00160934; end: 00160983;  */

byte FUN_00160934(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x20) & 1;
}



/* Entry: 00160984; end: 001609b3;  */

undefined1  [16] FUN_00160984(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001609b4; end: 001609e7;  */

void FUN_001609b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001609e8; end: 00160db3;  */

undefined8 FUN_001609e8(void)

{
  return 0x1609f8;
}



/* Entry: 00160db4; end: 00160ddf;  */

undefined1  [16] FUN_00160db4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00023304();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 00160de0; end: 00160e13;  */

void FUN_00160de0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00160e14; end: 00160e33;  */

undefined8 FUN_00160e14(void)

{
  return 0x160e24;
}



/* Entry: 00160e34; end: 00160e5f;  */

void FUN_00160e34(void)

{
  func_0x000115a8(0xaf0b18,&UNK_007db040);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00160e60; end: 00160eeb;  */

void FUN_00160e60(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x00186358();
  *param_1 = uVar1;
  return;
}



/* Entry: 00160eec; end: 00160ef3;  */

undefined8 FUN_00160eec(void)

{
  return 0;
}



/* Entry: 00160ef4; end: 00160f1f;  */

void FUN_00160ef4(void)

{
  func_0x000115a8(0xaf0b50,&UNK_007db048);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00160f20; end: 00160f5f;  */

void FUN_00160f20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0b50;
  func_0x000115a8(0xaf0b50,&UNK_007db048);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00160f60; end: 00160f67;  */

undefined8 FUN_00160f60(void)

{
  return 0;
}



/* Entry: 00160f68; end: 00160f93;  */

void FUN_00160f68(void)

{
  func_0x000115a8(0xaf0b88,&UNK_007db050);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00160f94; end: 00160fd3;  */

void FUN_00160f94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0b88;
  func_0x000115a8(0xaf0b88,&UNK_007db050);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00160fd4; end: 00160ffb;  */

undefined8 FUN_00160fd4(void)

{
  return 0;
}



/* Entry: 00160ffc; end: 00161027;  */

void FUN_00160ffc(void)

{
  func_0x000115a8(0xaf0bc0,&UNK_007db058);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00161028; end: 0016103b;  */

undefined8 FUN_00161028(ulong param_1)

{
  return *(undefined8 *)(&UNK_007dfe40 + (param_1 & 0xff) * 8);
}



/* Entry: 0016103c; end: 00161103;  */

void FUN_0016103c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe40 + (ulong)bVar1 * 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00161104; end: 0016117b;  */

void FUN_00161104(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0x2010300 >> (ulong)(((uint)*param_2 & 3) << 3));
  if (3 < *param_2) {
    uVar1 = 3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 0016117c; end: 001611bb;  */

void FUN_0016117c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0bc0;
  func_0x000115a8(0xaf0bc0,&UNK_007db058);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 001611bc; end: 001611c3;  */

undefined8 FUN_001611bc(void)

{
  return 0;
}



/* Entry: 001611c4; end: 001611ef;  */

void FUN_001611c4(void)

{
  func_0x000115a8(0xaf0bf8,&UNK_007db060);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 001611f0; end: 0016122f;  */

void FUN_001611f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0bf8;
  func_0x000115a8(0xaf0bf8,&UNK_007db060);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00161230; end: 00161247;  */

undefined8 FUN_00161230(void)

{
  return 0;
}



/* Entry: 00161248; end: 00161273;  */

void FUN_00161248(void)

{
  func_0x000115a8(0xaf0c30,&UNK_007db068);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00161274; end: 001612b3;  */

void FUN_00161274(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0c30;
  func_0x000115a8(0xaf0c30,&UNK_007db068);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 001612b4; end: 001612bb;  */

undefined8 FUN_001612b4(void)

{
  return 0;
}



/* Entry: 001612bc; end: 001612e7;  */

void FUN_001612bc(void)

{
  func_0x000115a8(0xaf0c68,&UNK_007db070);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 001612e8; end: 00161353;  */

void FUN_001612e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0c68;
  func_0x000115a8(0xaf0c68,&UNK_007db070);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00161354; end: 00161387;  */

void FUN_00161354(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00161388; end: 001613a7;  */

undefined8 FUN_00161388(void)

{
  return 0x161398;
}



/* Entry: 001613a8; end: 001613d3;  */

void FUN_001613a8(void)

{
  func_0x000115a8(0xaf0ca0,&UNK_007db078);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 001613d4; end: 001613db;  */

undefined1 FUN_001613d4(undefined1 param_1)

{
  return param_1;
}



/* Entry: 001613dc; end: 00161467;  */

void FUN_001613dc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_00186348();
  *param_1 = uVar1;
  return;
}



/* Entry: 00161468; end: 0016147b;  */

undefined1  [16] FUN_00161468(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 0016147c; end: 001614a3;  */

void FUN_0016147c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 001614a4; end: 001614cf;  */

undefined1  [16] FUN_001614a4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1614b4;
  return auVar1;
}



/* Entry: 001614d0; end: 001614f7;  */

void FUN_001614d0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 001614f8; end: 001615bb;  */

undefined8 FUN_001614f8(void)

{
  return 0x161508;
}



/* Entry: 001615bc; end: 001615ef;  */

undefined1  [16] FUN_001615bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 001615f0; end: 00161623;  */

void FUN_001615f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00161624; end: 00161637;  */

undefined1  [16] FUN_00161624(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x161634;
  return auVar1;
}



/* Entry: 00161638; end: 0016167b;  */

char FUN_00161638(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(param_3 + 0x10) != '\f') {
    cVar1 = *(char *)(param_3 + 0x10);
  }
  return cVar1;
}



/* Entry: 0016167c; end: 00161783;  */

void FUN_0016167c(undefined1 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00187070(0);
    _swift_allocObject();
    FUN_0017ee50(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x10) = param_1;
  return;
}



/* Entry: 00161784; end: 0016182b;  */

void FUN_00161784(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_00187070(0);
    _swift_allocObject();
    FUN_0017ee50(lVar5,uVar3);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x10,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0016182c; end: 0016186f;  */

bool FUN_0016182c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  return *(char *)(param_3 + 0x10) != '\f';
}



/* Entry: 00161870; end: 00161a03;  */

void FUN_00161870(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_00187070(0);
    _swift_allocObject();
    FUN_0017ee50();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x10) = 0xc;
  return;
}



/* Entry: 00161a04; end: 00161aab;  */

void FUN_00161a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_00187070(0);
    _swift_allocObject();
    FUN_0017ee50(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  _swift_beginAccess(lVar6 + 0x18,auStack_58,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  uVar3 = *(undefined8 *)(lVar6 + 0x30);
  *(undefined8 *)(lVar6 + 0x18) = param_1;
  *(undefined8 *)(lVar6 + 0x20) = param_2;
  *(undefined8 *)(lVar6 + 0x28) = param_3;
  *(undefined8 *)(lVar6 + 0x30) = param_4;
  FUN_00116294(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 00161aac; end: 00161f53;  */

undefined1  [16] FUN_00161aac(undefined8 *param_1)

{
  undefined8 uVar1;
  qword qVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  char *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  pcVar7 = section_00000068.segname + 8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,&UNK_000070eb);
  }
  *param_1 = pcVar7;
  *(long *)(pcVar7 + 0x78) = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar13 + 0x18,pcVar7 + 0x60,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puVar4 = *(undefined **)(lVar13 + 0x28);
  uVar5 = *(undefined8 *)(lVar13 + 0x30);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0x18);
  }
  qVar2 = 0xc000000000000000;
  if (bVar6) {
    qVar2 = *(qword *)(lVar13 + 0x20);
  }
  *(undefined8 *)pcVar7 = uVar1;
  *(qword *)(pcVar7 + 8) = qVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  *(undefined **)(pcVar7 + 0x10) = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  pcVar7[0x18] = uVar9;
  pcVar7[0x19] = uVar10;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x10);
  }
  uVar9 = 3;
  uVar10 = uVar9;
  uVar12 = uVar9;
  uVar11 = uVar9;
  if (puVar4 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar5 >> 0x18);
    uVar12 = (undefined1)((ulong)uVar5 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar5 >> 0x28);
    uVar9 = (undefined1)((ulong)uVar5 >> 0x30);
  }
  pcVar7[0x1a] = uVar8;
  pcVar7[0x1b] = uVar11;
  pcVar7[0x1c] = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  pcVar7[0x1d] = uVar10;
  pcVar7[0x1e] = uVar9;
  pcVar7[0x1f] = uVar8;
  func_0x001869f8();
  auVar14._8_8_ = pcVar7;
  auVar14._0_8_ = 0x161bc0;
  return auVar14;
}



/* Entry: 00161f54; end: 00161ffb;  */

void FUN_00161f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_00187070(0);
    _swift_allocObject();
    FUN_0017ee50(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  _swift_beginAccess(lVar6 + 0x38,auStack_58,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0x38);
  uVar2 = *(undefined8 *)(lVar6 + 0x40);
  uVar1 = *(undefined8 *)(lVar6 + 0x48);
  uVar3 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(lVar6 + 0x38) = param_1;
  *(undefined8 *)(lVar6 + 0x40) = param_2;
  *(undefined8 *)(lVar6 + 0x48) = param_3;
  *(undefined8 *)(lVar6 + 0x50) = param_4;
  FUN_00116294(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 00161ffc; end: 0016238f;  */

undefined1  [16] FUN_00161ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  qword qVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  char *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  pcVar7 = section_00000068.segname + 8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,&UNK_000040ea);
  }
  *param_1 = pcVar7;
  *(long *)(pcVar7 + 0x78) = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar13 + 0x38,pcVar7 + 0x60,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puVar4 = *(undefined **)(lVar13 + 0x48);
  uVar5 = *(undefined8 *)(lVar13 + 0x50);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0x38);
  }
  qVar2 = 0xc000000000000000;
  if (bVar6) {
    qVar2 = *(qword *)(lVar13 + 0x40);
  }
  *(undefined8 *)pcVar7 = uVar1;
  *(qword *)(pcVar7 + 8) = qVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  *(undefined **)(pcVar7 + 0x10) = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  pcVar7[0x18] = uVar9;
  pcVar7[0x19] = uVar10;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x10);
  }
  uVar9 = 3;
  uVar10 = uVar9;
  uVar12 = uVar9;
  uVar11 = uVar9;
  if (puVar4 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar5 >> 0x18);
    uVar12 = (undefined1)((ulong)uVar5 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar5 >> 0x28);
    uVar9 = (undefined1)((ulong)uVar5 >> 0x30);
  }
  pcVar7[0x1a] = uVar8;
  pcVar7[0x1b] = uVar11;
  pcVar7[0x1c] = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  pcVar7[0x1d] = uVar10;
  pcVar7[0x1e] = uVar9;
  pcVar7[0x1f] = uVar8;
  func_0x001869f8();
  auVar14._8_8_ = pcVar7;
  auVar14._0_8_ = 0x162110;
  return auVar14;
}



/* Entry: 00162390; end: 001623a3;  */

undefined8 FUN_00162390(void)

{
  return 0x1623a0;
}



/* Entry: 001623a4; end: 001623d3;  */

undefined8 FUN_001623a4(void)

{
  FUN_00187070(0);
  _swift_initStaticObject();
  return 0;
}



/* Entry: 001623d4; end: 001623ef;  */

undefined * FUN_001623d4(void)

{
  return PTR___swiftEmptyArrayStorage_0099b8f0;
}



/* Entry: 001623f0; end: 00162417;  */

void FUN_001623f0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 00162418; end: 0016242b;  */

undefined8 FUN_00162418(void)

{
  return 0x162428;
}



/* Entry: 0016242c; end: 0016245f;  */

undefined1  [16] FUN_0016242c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 00162460; end: 00162493;  */

void FUN_00162460(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00162494; end: 001624c3;  */

undefined1  [16] FUN_00162494(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1624a4;
  return auVar1;
}



/* Entry: 001624c4; end: 001624eb;  */

void FUN_001624c4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 001624ec; end: 001624ff;  */

undefined1  [16] FUN_001624ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1624fc;
  return auVar1;
}



/* Entry: 00162500; end: 0016253f;  */

undefined1  [16] FUN_00162500(void)

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



/* Entry: 00162540; end: 00162573;  */

void FUN_00162540(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 00162574; end: 001625cb;  */

undefined1  [16] FUN_00162574(undefined8 *param_1)

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
  auVar4._0_8_ = FUN_001625cc;
  return auVar4;
}



/* Entry: 001625cc; end: 001625cf;  */

void FUN_001625cc(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  return;
}



/* Entry: 001625d0; end: 0016262f;  */

void FUN_001625d0(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  return;
}



/* Entry: 00162630; end: 0016263f;  */

bool FUN_00162630(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x30) != 0;
}



/* Entry: 00162640; end: 0016265b;  */

void FUN_00162640(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 0016265c; end: 0016269b;  */

undefined1  [16] FUN_0016265c(void)

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



/* Entry: 0016269c; end: 001626cf;  */

void FUN_0016269c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 001626d0; end: 00162727;  */

undefined1  [16] FUN_001626d0(undefined8 *param_1)

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
  auVar4._0_8_ = FUN_00162728;
  return auVar4;
}



/* Entry: 00162728; end: 0016272b;  */

void FUN_00162728(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x38) = uVar1;
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  return;
}



/* Entry: 0016272c; end: 0016278b;  */

void FUN_0016272c(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x38) = uVar1;
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  return;
}



/* Entry: 0016278c; end: 0016279b;  */

bool FUN_0016278c(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x40) != 0;
}



/* Entry: 0016279c; end: 001627b7;  */

void FUN_0016279c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  return;
}



/* Entry: 001627b8; end: 001627bf;  */

void FUN_001627b8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 001627c0; end: 001627e7;  */

void FUN_001627c0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 001627e8; end: 001627fb;  */

undefined1  [16] FUN_001627e8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1627f8;
  return auVar1;
}



/* Entry: 001627fc; end: 0016282b;  */

undefined1  [16] FUN_001627fc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                  *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 0016282c; end: 0016285f;  */

void FUN_0016282c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 00162860; end: 001628a7;  */

undefined1  [16] FUN_00162860(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x162870;
  return auVar1;
}



/* Entry: 001628a8; end: 001628cf;  */

void FUN_001628a8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 001628d0; end: 001628eb;  */

undefined1  [16] FUN_001628d0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1628e0;
  return auVar1;
}



/* Entry: 001628ec; end: 00162913;  */

void FUN_001628ec(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 00162914; end: 0016292b;  */

undefined1  [16] FUN_00162914(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x162924;
  return auVar1;
}



/* Entry: 0016292c; end: 00162953;  */

void FUN_0016292c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 00162954; end: 00162967;  */

undefined8 FUN_00162954(void)

{
  return 0x162964;
}



/* Entry: 00162968; end: 0016299b;  */

undefined1  [16] FUN_00162968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 0016299c; end: 001629cf;  */

void FUN_0016299c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 001629d0; end: 001629eb;  */

undefined1  [16] FUN_001629d0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1629e0;
  return auVar1;
}



/* Entry: 001629ec; end: 00162a13;  */

void FUN_001629ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 00162a14; end: 00162a27;  */

undefined8 FUN_00162a14(void)

{
  return 0x162a24;
}



/* Entry: 00162a28; end: 00162a67;  */

undefined1  [16] FUN_00162a28(void)

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



/* Entry: 00162a68; end: 00162a9b;  */

void FUN_00162a68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 00162a9c; end: 00162af3;  */

undefined1  [16] FUN_00162a9c(undefined8 *param_1)

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
  auVar4._0_8_ = 0x19310c;
  return auVar4;
}


