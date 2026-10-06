/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045d2ac4; end: 1045d2ac7;  */

void FUN_1045d2ac4(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  return;
}



/* Entry: 1045d2ac8; end: 1045d2b27;  */

void FUN_1045d2ac8(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  return;
}



/* Entry: 1045d2b28; end: 1045d2b37;  */

bool FUN_1045d2b28(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 1045d2b38; end: 1045d2b53;  */

void FUN_1045d2b38(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1045d2b54; end: 1045d2ba3;  */

byte FUN_1045d2b54(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x20) & 1;
}



/* Entry: 1045d2ba4; end: 1045d2bd3;  */

undefined1  [16] FUN_1045d2ba4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045d2bd4; end: 1045d2c07;  */

void FUN_1045d2bd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045d2c08; end: 1045d2fd3;  */

undefined8 FUN_1045d2c08(void)

{
  return 0x1045d2c18;
}



/* Entry: 1045d2fd4; end: 1045d2fff;  */

undefined1  [16] FUN_1045d2fd4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1045d3000; end: 1045d3033;  */

void FUN_1045d3000(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045d3034; end: 1045d3053;  */

undefined8 FUN_1045d3034(void)

{
  return 0x1045d3044;
}



/* Entry: 1045d3054; end: 1045d307f;  */

void FUN_1045d3054(void)

{
  func_0x0001000285a8(0x113087c78,&UNK_10dd19cb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d3080; end: 1045d310b;  */

void FUN_1045d3080(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x0001045f82d8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d310c; end: 1045d3113;  */

undefined8 FUN_1045d310c(void)

{
  return 0;
}



/* Entry: 1045d3114; end: 1045d313f;  */

void FUN_1045d3114(void)

{
  func_0x0001000285a8(0x113087cb0,&UNK_10dd19cb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d3140; end: 1045d317f;  */

void FUN_1045d3140(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087cb0;
  func_0x0001000285a8(0x113087cb0,&UNK_10dd19cb8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d3180; end: 1045d3187;  */

undefined8 FUN_1045d3180(void)

{
  return 0;
}



/* Entry: 1045d3188; end: 1045d31b3;  */

void FUN_1045d3188(void)

{
  func_0x0001000285a8(0x113087ce8,&UNK_10dd19cc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d31b4; end: 1045d31f3;  */

void FUN_1045d31b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087ce8;
  func_0x0001000285a8(0x113087ce8,&UNK_10dd19cc0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d31f4; end: 1045d321b;  */

undefined8 FUN_1045d31f4(void)

{
  return 0;
}



/* Entry: 1045d321c; end: 1045d3247;  */

void FUN_1045d321c(void)

{
  func_0x0001000285a8(0x113087d20,&UNK_10dd19cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d3248; end: 1045d325b;  */

undefined8 FUN_1045d3248(ulong param_1)

{
  return *(undefined8 *)(&UNK_10dd1eab0 + (param_1 & 0xff) * 8);
}



/* Entry: 1045d325c; end: 1045d3323;  */

void FUN_1045d325c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1eab0 + (ulong)bVar1 * 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045d3324; end: 1045d339b;  */

void FUN_1045d3324(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0x2010300 >> (ulong)(((uint)*param_2 & 3) << 3));
  if (3 < *param_2) {
    uVar1 = 3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d339c; end: 1045d33db;  */

void FUN_1045d339c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087d20;
  func_0x0001000285a8(0x113087d20,&UNK_10dd19cc8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d33dc; end: 1045d33e3;  */

undefined8 FUN_1045d33dc(void)

{
  return 0;
}



/* Entry: 1045d33e4; end: 1045d340f;  */

void FUN_1045d33e4(void)

{
  func_0x0001000285a8(0x113087d58,&UNK_10dd19cd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d3410; end: 1045d344f;  */

void FUN_1045d3410(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087d58;
  func_0x0001000285a8(0x113087d58,&UNK_10dd19cd0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d3450; end: 1045d3467;  */

undefined8 FUN_1045d3450(void)

{
  return 0;
}



/* Entry: 1045d3468; end: 1045d3493;  */

void FUN_1045d3468(void)

{
  func_0x0001000285a8(0x113087d90,&UNK_10dd19cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d3494; end: 1045d34d3;  */

void FUN_1045d3494(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087d90;
  func_0x0001000285a8(0x113087d90,&UNK_10dd19cd8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d34d4; end: 1045d34db;  */

undefined8 FUN_1045d34d4(void)

{
  return 0;
}



/* Entry: 1045d34dc; end: 1045d3507;  */

void FUN_1045d34dc(void)

{
  func_0x0001000285a8(0x113087dc8,&UNK_10dd19ce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d3508; end: 1045d3573;  */

void FUN_1045d3508(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087dc8;
  func_0x0001000285a8(0x113087dc8,&UNK_10dd19ce0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d3574; end: 1045d35a7;  */

void FUN_1045d3574(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045d35a8; end: 1045d35c7;  */

undefined8 FUN_1045d35a8(void)

{
  return 0x1045d35b8;
}



/* Entry: 1045d35c8; end: 1045d35f3;  */

void FUN_1045d35c8(void)

{
  func_0x0001000285a8(0x113087e00,&UNK_10dd19ce8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d35f4; end: 1045d35fb;  */

undefined1 FUN_1045d35f4(undefined1 param_1)

{
  return param_1;
}



/* Entry: 1045d35fc; end: 1045d3687;  */

void FUN_1045d35fc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1045f82c8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d3688; end: 1045d369b;  */

undefined1  [16] FUN_1045d3688(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 1045d369c; end: 1045d36c3;  */

void FUN_1045d369c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1045d36c4; end: 1045d36ef;  */

undefined1  [16] FUN_1045d36c4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045d36d4;
  return auVar1;
}



/* Entry: 1045d36f0; end: 1045d3717;  */

void FUN_1045d36f0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d3718; end: 1045d37db;  */

undefined8 FUN_1045d3718(void)

{
  return 0x1045d3728;
}



/* Entry: 1045d37dc; end: 1045d380f;  */

undefined1  [16] FUN_1045d37dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 1045d3810; end: 1045d3843;  */

void FUN_1045d3810(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d3844; end: 1045d3857;  */

undefined1  [16] FUN_1045d3844(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d3854;
  return auVar1;
}



/* Entry: 1045d3858; end: 1045d389b;  */

char FUN_1045d3858(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1045d389c; end: 1045d39a3;  */

void FUN_1045d389c(undefined1 param_1)

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
    FUN_1045f8ff0(0);
    _swift_allocObject();
    FUN_1045f0e5c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x10) = param_1;
  return;
}



/* Entry: 1045d39a4; end: 1045d3a4b;  */

void FUN_1045d39a4(long *param_1,ulong param_2)

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
    FUN_1045f8ff0(0);
    _swift_allocObject();
    FUN_1045f0e5c(lVar5,uVar3);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x10,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045d3a4c; end: 1045d3a8f;  */

bool FUN_1045d3a4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  return *(char *)(param_3 + 0x10) != '\f';
}



/* Entry: 1045d3a90; end: 1045d3c23;  */

void FUN_1045d3a90(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8ff0(0);
    _swift_allocObject();
    FUN_1045f0e5c();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x10) = 0xc;
  return;
}



/* Entry: 1045d3c24; end: 1045d3ccb;  */

void FUN_1045d3c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1045f8ff0(0);
    _swift_allocObject();
    FUN_1045f0e5c(lVar6,uVar5);
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
  func_0x00010458a4f4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 1045d3ccc; end: 1045d4173;  */

undefined1  [16] FUN_1045d3ccc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x80;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,0x70eb);
  }
  *param_1 = puVar7;
  puVar7[0xf] = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar13 + 0x18,puVar7 + 0xc,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = *(undefined **)(lVar13 + 0x28);
  uVar5 = *(undefined8 *)(lVar13 + 0x30);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0x18);
  }
  uVar2 = 0xc000000000000000;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar13 + 0x20);
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  puVar7[2] = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  *(undefined1 *)(puVar7 + 3) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x19) = uVar10;
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
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar11;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar8;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x1045d3de0;
  return auVar14;
}



/* Entry: 1045d4174; end: 1045d421b;  */

void FUN_1045d4174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1045f8ff0(0);
    _swift_allocObject();
    FUN_1045f0e5c(lVar6,uVar5);
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
  func_0x00010458a4f4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 1045d421c; end: 1045d45af;  */

undefined1  [16] FUN_1045d421c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x80;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,0x40ea);
  }
  *param_1 = puVar7;
  puVar7[0xf] = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar13 + 0x38,puVar7 + 0xc,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = *(undefined **)(lVar13 + 0x48);
  uVar5 = *(undefined8 *)(lVar13 + 0x50);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0x38);
  }
  uVar2 = 0xc000000000000000;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar13 + 0x40);
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  puVar7[2] = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  *(undefined1 *)(puVar7 + 3) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x19) = uVar10;
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
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar11;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar8;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x1045d4330;
  return auVar14;
}



/* Entry: 1045d45b0; end: 1045d45c3;  */

undefined8 FUN_1045d45b0(void)

{
  return 0x1045d45c0;
}



/* Entry: 1045d45c4; end: 1045d45f3;  */

undefined8 FUN_1045d45c4(void)

{
  FUN_1045f8ff0(0);
  _swift_initStaticObject();
  return 0;
}



/* Entry: 1045d45f4; end: 1045d460f;  */

undefined * FUN_1045d45f4(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 1045d4610; end: 1045d4637;  */

void FUN_1045d4610(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d4638; end: 1045d464b;  */

undefined8 FUN_1045d4638(void)

{
  return 0x1045d4648;
}



/* Entry: 1045d464c; end: 1045d467f;  */

undefined1  [16] FUN_1045d464c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 1045d4680; end: 1045d46b3;  */

void FUN_1045d4680(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d46b4; end: 1045d46e3;  */

undefined1  [16] FUN_1045d46b4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d46c4;
  return auVar1;
}



/* Entry: 1045d46e4; end: 1045d470b;  */

void FUN_1045d46e4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 1045d470c; end: 1045d471f;  */

undefined1  [16] FUN_1045d470c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d471c;
  return auVar1;
}



/* Entry: 1045d4720; end: 1045d475f;  */

undefined1  [16] FUN_1045d4720(void)

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



/* Entry: 1045d4760; end: 1045d4793;  */

void FUN_1045d4760(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1045d4794; end: 1045d47eb;  */

undefined1  [16] FUN_1045d4794(undefined8 *param_1)

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
  auVar4._0_8_ = FUN_1045d47ec;
  return auVar4;
}



/* Entry: 1045d47ec; end: 1045d47ef;  */

void FUN_1045d47ec(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  return;
}



/* Entry: 1045d47f0; end: 1045d484f;  */

void FUN_1045d47f0(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  return;
}



/* Entry: 1045d4850; end: 1045d485f;  */

bool FUN_1045d4850(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x30) != 0;
}



/* Entry: 1045d4860; end: 1045d487b;  */

void FUN_1045d4860(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1045d487c; end: 1045d48bb;  */

undefined1  [16] FUN_1045d487c(void)

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



/* Entry: 1045d48bc; end: 1045d48ef;  */

void FUN_1045d48bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 1045d48f0; end: 1045d4947;  */

undefined1  [16] FUN_1045d48f0(undefined8 *param_1)

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
  auVar4._0_8_ = FUN_1045d4948;
  return auVar4;
}



/* Entry: 1045d4948; end: 1045d494b;  */

void FUN_1045d4948(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  return;
}



/* Entry: 1045d494c; end: 1045d49ab;  */

void FUN_1045d494c(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  return;
}



/* Entry: 1045d49ac; end: 1045d49bb;  */

bool FUN_1045d49ac(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x40) != 0;
}



/* Entry: 1045d49bc; end: 1045d49d7;  */

void FUN_1045d49bc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  return;
}



/* Entry: 1045d49d8; end: 1045d49df;  */

void FUN_1045d49d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1045d49e0; end: 1045d4a07;  */

void FUN_1045d49e0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1045d4a08; end: 1045d4a1b;  */

undefined1  [16] FUN_1045d4a08(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045d4a18;
  return auVar1;
}



/* Entry: 1045d4a1c; end: 1045d4a4b;  */

undefined1  [16] FUN_1045d4a1c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1045d4a4c; end: 1045d4a7f;  */

void FUN_1045d4a4c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045d4a80; end: 1045d4ac7;  */

undefined1  [16] FUN_1045d4a80(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d4a90;
  return auVar1;
}



/* Entry: 1045d4ac8; end: 1045d4aef;  */

void FUN_1045d4ac8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d4af0; end: 1045d4b1b;  */

undefined1  [16] FUN_1045d4af0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d4b00;
  return auVar1;
}



/* Entry: 1045d4b1c; end: 1045d4b43;  */

void FUN_1045d4b1c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d4b44; end: 1045d4b57;  */

undefined8 FUN_1045d4b44(void)

{
  return 0x1045d4b54;
}



/* Entry: 1045d4b58; end: 1045d4b8b;  */

undefined1  [16] FUN_1045d4b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 1045d4b8c; end: 1045d4bbf;  */

void FUN_1045d4b8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d4bc0; end: 1045d4bdb;  */

undefined1  [16] FUN_1045d4bc0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d4bd0;
  return auVar1;
}



/* Entry: 1045d4bdc; end: 1045d4c03;  */

void FUN_1045d4bdc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d4c04; end: 1045d4c17;  */

undefined8 FUN_1045d4c04(void)

{
  return 0x1045d4c14;
}



/* Entry: 1045d4c18; end: 1045d4c57;  */

undefined1  [16] FUN_1045d4c18(void)

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



/* Entry: 1045d4c58; end: 1045d4c8b;  */

void FUN_1045d4c58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045d4c8c; end: 1045d4ce3;  */

undefined1  [16] FUN_1045d4c8c(undefined8 *param_1)

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
  auVar4._0_8_ = 0x104604a30;
  return auVar4;
}



/* Entry: 1045d4ce4; end: 1045d4d43;  */

void FUN_1045d4ce4(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  return;
}



/* Entry: 1045d4d44; end: 1045d4d53;  */

bool FUN_1045d4d44(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}


