/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104404688; end: 104404a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104404688(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uStack_100;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar16 = *(undefined8 *)(param_1 + _DAT_113077378);
  uVar14 = *(ulong *)(param_1 + _DAT_113077380);
  if (uVar14 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar17 = uVar14;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    func_0x000104404390(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104404a10);
      (*pcVar11)();
    }
    uVar18 = 0;
    do {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) <= (long)uVar18) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1044049ec);
          (*pcVar11)();
        }
        uVar12 = *(ulong *)(uVar14 + uVar18 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar12 = uVar18;
        func_0x00010103198c();
      }
      uVar3 = *(undefined8 *)(uVar12 + _DAT_113077318);
      uVar5 = ((undefined8 *)(uVar12 + _DAT_113077318))[1];
      uVar4 = *(undefined8 *)(uVar12 + _DAT_113077320);
      uVar6 = ((undefined8 *)(uVar12 + _DAT_113077320))[1];
      uVar19 = *(undefined8 *)(uVar12 + _DAT_113077328);
      lVar13 = *(long *)(uVar12 + _DAT_113077330);
      if (*(char *)(lVar13 + _DAT_1130773d0) == '\0') {
        if (*(byte *)(lVar13 + _DAT_1130773f0) == 2) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x104404a14);
          (*pcVar11)();
        }
        uStack_c0 = *(undefined8 *)(lVar13 + _DAT_1130773e8);
        uStack_b8 = ((undefined8 *)(lVar13 + _DAT_1130773e8))[1];
        puVar1 = (undefined8 *)(lVar13 + _DAT_1130773e0);
        puVar2 = (undefined8 *)(lVar13 + _DAT_1130773d8);
        uStack_d8 = puVar1[1];
        uStack_e0 = *puVar1;
        uVar15 = puVar1[1];
        uStack_98 = puVar2[1];
        uStack_a0 = *puVar2;
        uStack_c8 = *(undefined8 *)(lVar13 + _DAT_1130773f8);
        uStack_a8 = ((undefined8 *)(lVar13 + _DAT_1130773f8))[1];
        uStack_b0 = (ulong)*(byte *)(lVar13 + _DAT_1130773f0) & 1;
        _swift_bridgeObjectRetain(puVar2[1]);
        _swift_bridgeObjectRetain(uVar15);
        _swift_bridgeObjectRetain(uStack_b8);
LAB_104404884:
        _swift_bridgeObjectRetain();
      }
      else {
        if (*(char *)(lVar13 + _DAT_1130773d0) == '\x01') {
          puVar1 = (undefined8 *)(lVar13 + _DAT_113077400);
          uStack_98 = puVar1[1];
          uStack_a0 = *puVar1;
          uStack_a8 = puVar1[1];
          uStack_100 = uStack_100 & 1 | 0x4000000000000000;
          uStack_b0 = uStack_100;
          goto LAB_104404884;
        }
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_c8 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_b0 = 0x8000000000000000;
        uStack_a8 = 0;
      }
      uVar8 = *(undefined1 *)(uVar12 + _DAT_113077338);
      uVar15 = *(undefined8 *)(uVar12 + _DAT_113077340);
      uVar7 = ((undefined8 *)(uVar12 + _DAT_113077340))[1];
      uVar9 = *(undefined1 *)(uVar12 + _DAT_113077348);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _objc_release(uVar12);
      uVar12 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar12) {
        func_0x000104404390(1 < *(ulong *)(puVar10 + 0x18),uVar12 + 1,1);
      }
      uVar18 = uVar18 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x20) = uVar3;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x28) = uVar5;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x30) = uVar4;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x38) = uVar6;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x40) = uVar19;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x60) = uStack_d8;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x58) = uStack_e0;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x50) = uStack_98;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x48) = uStack_a0;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x68) = uStack_c0;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x70) = uStack_b8;
      *(ulong *)(puVar10 + uVar12 * 0x90 + 0x78) = uStack_b0;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x80) = uStack_c8;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x88) = uStack_a8;
      puVar10[uVar12 * 0x90 + 0x90] = uVar8;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0x98) = uVar15;
      *(undefined8 *)(puVar10 + uVar12 * 0x90 + 0xa0) = uVar7;
      puVar10[uVar12 * 0x90 + 0xa8] = uVar9;
    } while (uVar17 != uVar18);
  }
  return uVar16;
}



/* Entry: 104404a14; end: 104404a33;  */

void FUN_104404a14(void)

{
  _objc_opt_self(&PTR_PTR_1129af400);
  return;
}



/* Entry: 104404a34; end: 104404ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104404a34(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130773d0));
  if (((undefined8 *)(unaff_x20 + _DAT_1130773d8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130773d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_1130773e0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130773e0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_1130773e8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130773e8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  bVar1 = *(byte *)(unaff_x20 + _DAT_1130773f0);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130773f8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130773f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113077400))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113077400);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104404ec8; end: 104404f73;  */

void FUN_104404ec8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104404f74; end: 104404fab;  */

void FUN_104404f74(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 104404fac; end: 104404ff3; -[SCCheckInOptionTypeAdditions description] */

void FUN_104404fac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104404ff4();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104404ff4; end: 104405027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104404ff4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + _DAT_1130773d0) == '\0') &&
     (*(char *)(unaff_x20 + _DAT_1130773f0) == '\x02')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104405028);
    (*pcVar1)();
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104405028; end: 10440506f; -[SCCheckInOptionTypeAdditions init] */

void FUN_104405028(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCheckInServices/SCCheckInOptionTypeAdditionsWrapper.swift",0x3b,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104405070);
  (*pcVar1)();
}



/* Entry: 104405070; end: 1044050a3; -[SCCheckInOptionTypeAdditions hash] */

undefined8 FUN_104405070(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104404a34();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044050a4; end: 104405123; -[SCCheckInOptionTypeAdditions isEqual:] */

uint FUN_1044050a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000104404c0c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104405124; end: 104405127; -[SCCheckInOptionTypeAdditions copyWithZone:] */

void FUN_104405124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104405128; end: 104405253; +[SCCheckInOptionTypeAdditions venueWithCategoryId:iconURL:locality:isSuggested:address:] */

void FUN_104405128(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar4 = param_2;
  }
  lVar3 = param_7;
  _objc_retain();
  if (lVar3 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    _objc_release(lVar3);
  }
  func_0x000104405934(param_3,uVar2,param_4,uVar1,param_5,uVar4,param_6,param_7,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104405254; end: 10440529f; +[SCCheckInOptionTypeAdditions customWithPrefix:] */

void FUN_104405254(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  FUN_104405a44();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044052a0; end: 1044052b3; +[SCCheckInOptionTypeAdditions actionmoji] */

void FUN_1044052a0(void)

{
  FUN_104405b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044052b4; end: 104405383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044052b4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_1130773d0) == '\0') {
    if (*(byte *)(unaff_x20 + _DAT_1130773f0) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104405384);
      (*pcVar1)();
    }
    (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_1130773d8),
               ((undefined8 *)(unaff_x20 + _DAT_1130773d8))[1],
               *(undefined8 *)(unaff_x20 + _DAT_1130773e0),
               ((undefined8 *)(unaff_x20 + _DAT_1130773e0))[1],
               *(undefined8 *)(unaff_x20 + _DAT_1130773e8),
               ((undefined8 *)(unaff_x20 + _DAT_1130773e8))[1],
               *(byte *)(unaff_x20 + _DAT_1130773f0) & 1,*(undefined8 *)(unaff_x20 + _DAT_1130773f8)
               ,((undefined8 *)(unaff_x20 + _DAT_1130773f8))[1]);
  }
  else if (*(char *)(unaff_x20 + _DAT_1130773d0) == '\x01') {
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113077400),
               ((undefined8 *)(unaff_x20 + _DAT_113077400))[1]);
  }
  else {
    (*param_5)();
  }
  return;
}



/* Entry: 104405384; end: 1044053e7; -[SCCheckInOptionTypeAdditions matchVenue:custom:actionmoji:] */

void FUN_104405384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1044052b4(0x104405d84,auStack_40,FUN_104405dac,auStack_60,0x104405db4,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 1044053e8; end: 1044054d3;  */

void FUN_1044053e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,uint param_7,undefined8 param_8,long param_9,
                  long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar1 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar1 = param_3;
  }
  uVar2 = 0;
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    uVar2 = param_5;
  }
  if (param_9 == 0) {
    param_8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_8,param_9);
  }
  (**(code **)(param_10 + 0x10))(param_10,param_1,uVar1,uVar2,param_7 & 1,param_8);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1044054d4; end: 104405507;  */

void FUN_1044054d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104405508; end: 104405583; -[SCCheckInOptionTypeAdditions .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104405508(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130773d8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130773e0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130773e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130773f8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113077400 + 8))
  ;
  return;
}



/* Entry: 104405584; end: 104405a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104405584(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  uVar2 = *param_1;
  uVar6 = param_1[1];
  bVar10 = *(byte *)((long)param_1 + 0x37) >> 6;
  if (bVar10 == 0) {
    bVar10 = *(byte *)(param_1 + 6);
    uVar3 = param_1[4];
    uVar7 = param_1[5];
    uVar4 = param_1[2];
    uVar8 = param_1[3];
    uVar5 = param_1[7];
    uVar9 = param_1[8];
    puVar12 = param_1;
    FUN_104405bbc();
    puVar13 = puVar12;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar13 + _DAT_1130773d0) = 0;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_1130773d8);
    *puVar1 = uVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_1130773e0);
    *puVar1 = uVar4;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_1130773e8);
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
    *(byte *)((long)puVar13 + _DAT_1130773f0) = bVar10 & 1;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_1130773f8);
    *puVar1 = uVar5;
    puVar1[1] = uVar9;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_113077400);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar11 = PTR_s_init_1125d9248;
    puStack_90 = puVar13;
    puStack_88 = puVar12;
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar9);
    _objc_msgSendSuper2(&puStack_90,puVar11);
    FUN_104405dc0(param_1);
  }
  else {
    if (bVar10 == 1) {
      FUN_104405bbc();
      puVar12 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar12 + _DAT_1130773d0) = 1;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773d8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773e0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773e8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((long)puVar12 + _DAT_1130773f0) = 2;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_113077400);
      *puVar1 = uVar2;
      puVar1[1] = uVar6;
      ppuVar14 = &puStack_80;
      puStack_80 = puVar12;
      puStack_78 = param_1;
    }
    else {
      FUN_104405bbc();
      puVar12 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar12 + _DAT_1130773d0) = 2;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773d8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773e0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773e8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((long)puVar12 + _DAT_1130773f0) = 2;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_1130773f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar12 + _DAT_113077400);
      *puVar1 = 0;
      puVar1[1] = 0;
      ppuVar14 = &puStack_70;
      puStack_70 = puVar12;
      puStack_68 = param_1;
    }
    _objc_msgSendSuper2(ppuVar14,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 104405a44; end: 104405b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104405a44(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104405bbc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_1130773d0) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130773d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130773e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130773e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_1130773f0) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130773f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_113077400);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 104405b10; end: 104405bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104405b10(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  FUN_104405bbc();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130773d0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130773d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130773e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130773e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_1130773f0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130773f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113077400);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104405bbc; end: 104405bdb;  */

void FUN_104405bbc(void)

{
  _objc_opt_self(&PTR_PTR_1129af4e0);
  return;
}



/* Entry: 104405bdc; end: 104405d43;  */

int FUN_104405bdc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104405c58;
        goto LAB_104405c3c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104405c3c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104405c58:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104405d44; end: 104405dab;  */

void FUN_104405d44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9394;
  _swift_getWitnessTable(&UNK_10dcf9394,&UNK_110768c58);
  puRam0000000113077430 = puVar1;
  return;
}



/* Entry: 104405dac; end: 104405dbf;  */

void FUN_104405dac(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104405dc0; end: 104405df3;  */

undefined8 FUN_104405dc0(undefined8 param_1)

{
  FUN_10440276c();
  return param_1;
}



/* Entry: 104405df4; end: 104405dff;  */

undefined8 FUN_104405df4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar1 = *param_1;
  uVar3 = *param_2;
  if (uVar1 == 0) {
    if (uVar3 == 0) {
      return 1;
    }
  }
  else if (uVar1 == 1) {
    if (uVar3 == 1) {
      return 1;
    }
  }
  else if (1 < uVar3) {
    lVar4 = *(long *)(uVar1 + 0x10);
    if (lVar4 == *(long *)(uVar3 + 0x10)) {
      if ((lVar4 == 0) || (uVar1 == uVar3)) {
        uVar2 = 1;
      }
      else {
        plVar5 = (long *)(uVar3 + 0x28);
        plVar6 = (long *)(uVar1 + 0x28);
        do {
          uVar1 = plVar6[-1];
          if ((uVar1 != plVar5[-1] || *plVar6 != *plVar5) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar1 & 1) == 0)) goto LAB_104405eac;
          plVar5 = plVar5 + 2;
          plVar6 = plVar6 + 2;
          uVar2 = 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
LAB_104405eac:
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 104405e00; end: 104405ebf;  */

undefined8 FUN_104405e00(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_1 == 1) {
    if (param_2 == 1) {
      return 1;
    }
  }
  else if (1 < param_2) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == *(long *)(param_2 + 0x10)) {
      if ((lVar3 == 0) || (param_1 == param_2)) {
        uVar1 = 1;
      }
      else {
        plVar4 = (long *)(param_2 + 0x28);
        plVar5 = (long *)(param_1 + 0x28);
        do {
          uVar2 = plVar5[-1];
          if ((uVar2 != plVar4[-1] || *plVar5 != *plVar4) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) == 0)) goto LAB_104405eac;
          plVar4 = plVar4 + 2;
          plVar5 = plVar5 + 2;
          uVar1 = 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    else {
LAB_104405eac:
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 104405ec0; end: 104405ed7;  */

void FUN_104405ec0(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 104405ed8; end: 104405fcb;  */

ulong * FUN_104405ed8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      _swift_bridgeObjectRetain();
    }
  }
  else if (uVar1 < 0xffffffff) {
    _swift_bridgeObjectRelease(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
  }
  return param_1;
}



/* Entry: 104405fcc; end: 1044060e3;  */

int FUN_104405fcc(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1044060e4; end: 1044061bb;  */

void FUN_1044060e4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044061bc; end: 1044061cb;  */

void FUN_1044061bc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044061cc; end: 10440620b;  */

void FUN_1044061cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf94b0;
  _swift_getWitnessTable(&UNK_10dcf94b0,&UNK_110768df0);
  puRam0000000113077438 = puVar1;
  return;
}



/* Entry: 10440620c; end: 10440621b;  */

undefined1  [16] FUN_10440620c(void)

{
  return ZEXT816(0x110768df0);
}



/* Entry: 10440621c; end: 10440622b; -[_TtC28SCStoriesPreferencesServices28SCStoriesPreferencesServices storiesOnboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440621c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077448));
  return;
}



/* Entry: 10440622c; end: 10440623b; -[_TtC28SCStoriesPreferencesServices28SCStoriesPreferencesServices storyCustomTTLSettingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440622c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077450));
  return;
}



/* Entry: 10440623c; end: 1044062af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440623c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077440) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113077448) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113077450) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044062b0; end: 10440630f; -[_TtC28SCStoriesPreferencesServices28SCStoriesPreferencesServices init] */

void FUN_1044062b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCStoriesPreferencesServices.SCStoriesPreferencesServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044062dc);
  (*pcVar1)();
}



/* Entry: 104406310; end: 104406403; -[_TtC28SCStoriesPreferencesServices28SCStoriesPreferencesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406310(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077440));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077448));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113077450));
  return;
}



/* Entry: 104406404; end: 10440643b;  */

void FUN_104406404(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10440643c; end: 10440647f; -[SCStoryPrivacyUpdateRequest description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440643c(long param_1)

{
  code *pcVar1;
  
  if ((1 < *(byte *)(param_1 + _DAT_113077480)) && (*(long *)(param_1 + _DAT_113077488) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104406480);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104406480; end: 1044064c7; -[SCStoryPrivacyUpdateRequest init] */

void FUN_104406480(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPreferencesServices/SCStoryPrivacyUpdateRequestWrapper.swift",0x45,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044064c8);
  (*pcVar1)();
}



/* Entry: 1044064c8; end: 104406587; -[SCStoryPrivacyUpdateRequest hash] */

undefined8 FUN_1044064c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001044064fc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104406588; end: 1044066a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104406588(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113077480);
      if (cVar1 == *(char *)(lStack_58 + _DAT_113077480)) {
        if ((cVar1 == '\0') || (cVar1 == '\x01')) {
          _objc_release();
          uVar4 = 1;
          goto LAB_10440662c;
        }
        lVar3 = *(long *)(unaff_x20 + _DAT_113077488);
        lVar5 = *(long *)(lStack_58 + _DAT_113077488);
        if (lVar3 != 0) {
          uVar4 = 0;
          if (lVar5 != 0) {
            func_0x00010142cfc4(lVar3,lVar5);
            uVar4 = (uint)lVar3;
          }
          _objc_release(lStack_58);
          goto LAB_10440662c;
        }
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lStack_58);
        if (lVar5 == 0) {
          uVar4 = 1;
          goto LAB_10440662c;
        }
        _swift_bridgeObjectRelease(lVar5);
      }
      else {
        _objc_release();
      }
    }
  }
  uVar4 = 0;
LAB_10440662c:
  return uVar4 & 1;
}



/* Entry: 1044066a8; end: 104406727; -[SCStoryPrivacyUpdateRequest isEqual:] */

uint FUN_1044066a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104406588(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104406728; end: 10440672b; -[SCStoryPrivacyUpdateRequest copyWithZone:] */

void FUN_104406728(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10440672c; end: 104406733; +[SCStoryPrivacyUpdateRequest everyone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440672c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113077480) = 0;
  *(undefined8 *)(lVar1 + _DAT_113077488) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104406734; end: 10440673b; +[SCStoryPrivacyUpdateRequest friends] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406734(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113077480) = 1;
  *(undefined8 *)(lVar1 + _DAT_113077488) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10440673c; end: 104406797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440673c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113077480) = param_3;
  *(undefined8 *)(lVar1 + _DAT_113077488) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104406798; end: 10440680f; +[SCStoryPrivacyUpdateRequest customWithBlockedUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406798(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113077480) = 2;
  *(undefined8 *)(lVar1 + _DAT_113077488) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104406810; end: 1044068bb; -[SCStoryPrivacyUpdateRequest matchEveryone:friends:custom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406810(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_113077480) == '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x10);
  }
  else {
    if (*(char *)(param_1 + _DAT_113077480) != '\x01') {
      lVar1 = *(long *)(param_1 + _DAT_113077488);
      if (lVar1 != 0) {
        _objc_retain();
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,PTR___sSSN_11034da80);
        (**(code **)(param_5 + 0x10))(param_5,lVar1);
        _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1044068bc);
      (*UNRECOVERED_JUMPTABLE)();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000104406858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 1044068bc; end: 1044068ef;  */

void FUN_1044068bc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044068f0; end: 1044068ff; -[SCStoryPrivacyUpdateRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044068f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113077488));
  return;
}



/* Entry: 104406900; end: 10440691f;  */

void FUN_104406900(void)

{
  _objc_opt_self(&PTR_PTR_1129af6a0);
  return;
}



/* Entry: 104406920; end: 104406a87;  */

int FUN_104406920(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10440699c;
        goto LAB_104406980;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104406980:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10440699c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104406a88; end: 104406ac7;  */

void FUN_104406a88(void)

{
  undefined *puVar1;
  
  if (puRam00000001130774b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf95d4;
  _swift_getWitnessTable(&UNK_10dcf95d4,&UNK_110768ed8);
  puRam00000001130774b8 = puVar1;
  return;
}



/* Entry: 104406ac8; end: 104406b13; -[MassSnapModel massSnapBundleId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406ac8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130774c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130774c0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104406b14; end: 104406b23; -[MassSnapModel timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104406b14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130774c8);
}



/* Entry: 104406b24; end: 104406b7f; -[MassSnapModel snapDocData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406b24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130774d0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130774d0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104406b80; end: 104406b8b; -[MassSnapModel thumbnailData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406b80(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130774d8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130774d8);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104406b8c; end: 104406b97; -[MassSnapModel mediaData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406b8c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130774e0))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130774e0);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104406b98; end: 104406c07;  */

void FUN_104406b98(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104406c08; end: 104406c17; -[MassSnapModel isVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104406c08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130774e8);
}



/* Entry: 104406c18; end: 104406eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104406c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  
  uStack_94 = (uint)param_10;
  lVar2 = 0;
  uStack_a0 = param_7;
  uStack_90 = param_8;
  uStack_88 = param_9;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130774c0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  __s10Foundation4DateVACycfC(lVar3);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar4 + 8))(lVar3,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_1130774c8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130774d0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130774d8);
  *puVar1 = param_6;
  puVar1[1] = uStack_a0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130774e0);
  *puVar1 = uStack_90;
  puVar1[1] = uStack_88;
  *(char *)(unaff_x20 + _DAT_1130774e8) = (char)uStack_94;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104406eb0; end: 104406fcb; -[MassSnapModel initWithMassSnapBundleId:snapDocData:thumbnailData:mediaData:isVideo:] */

void FUN_104406eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined1 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_4;
  uVar3 = param_2;
  _objc_retain(param_4);
  _objc_retain();
  lVar2 = param_6;
  _objc_retain();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_4);
  uVar4 = uVar3;
  _objc_release(uVar1);
  if (param_5 == 0) {
    lVar6 = 0;
    uVar1 = 0xf000000000000000;
    uVar5 = uVar4;
  }
  else {
    lVar6 = param_5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_5);
    uVar5 = uVar4;
    _objc_release(param_5);
    uVar1 = uVar4;
  }
  if (lVar2 == 0) {
    param_6 = 0;
    uVar5 = 0xf000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_6);
    _objc_release(lVar2);
  }
  func_0x000104406d64(param_3,param_2,param_4,uVar3,lVar6,uVar1,param_6,uVar5,param_7);
  return;
}



/* Entry: 104406fcc; end: 10440702b; -[MassSnapModel init] */

void FUN_104406fcc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMassSnapPostSignalAPI.MassSnapModel",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104406ff8);
  (*pcVar1)();
}



/* Entry: 10440702c; end: 104407093; -[MassSnapModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104407060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104407064) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440702c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130774c0 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_1130774d0);
  uVar1 = ((ulong *)(param_1 + _DAT_1130774d0))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104407094; end: 1044070b3;  */

void FUN_104407094(void)

{
  _objc_opt_self(&PTR_PTR_1129af768);
  return;
}



/* Entry: 1044070b4; end: 10440729f;  */

/* WARNING: Possible PIC construction at 0x00010440725c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104407260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044070b4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char cStack_f0;
  undefined1 auStack_e8 [56];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  
  FUN_1044086e4(&uStack_158);
  lVar1 = _DAT_113077518;
  if (cStack_128 == -1) {
    if (*(long *)(unaff_x20 + _DAT_113077518) != 0) {
      func_0x00010c1a7f60();
    }
    func_0x00010c069fa0();
  }
  else {
    uStack_118 = uStack_150;
    uStack_120 = uStack_158;
    uStack_108 = uStack_140;
    uStack_110 = uStack_148;
    uStack_f8 = uStack_130;
    uStack_100 = uStack_138;
    cStack_f0 = cStack_128;
    puVar2 = *(undefined8 **)(unaff_x20 + _DAT_113077518);
    puVar3 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      func_0x00010462b010();
      uStack_a8 = uStack_118;
      uStack_b0 = uStack_120;
      uStack_98 = uStack_108;
      uStack_a0 = uStack_110;
      uStack_88 = uStack_f8;
      uStack_90 = uStack_100;
      cStack_80 = cStack_f0;
      FUN_104408f24(&uStack_b0,auStack_e8);
      puVar3 = &uStack_120;
      func_0x000104627b2c(puVar3,2,1,0,1,0,0);
      func_0x00010befbd60();
      func_0x00010befbb60();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
      _objc_retain(puVar3);
      _objc_release(uVar4);
      puVar2 = (undefined8 *)0x0;
    }
    _objc_retain(puVar2);
    func_0x00010c1a7f60(puVar3);
    FUN_104408e48(uStack_158,uStack_150,uStack_148,uStack_140,uStack_138,uStack_130,cStack_128);
    FUN_104626a30(&uStack_120);
    FUN_104408a00(puVar3);
    func_0x00010c069fa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c069ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044072a0; end: 10440732b; -[SCValdiHeliosButtonView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1044072a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_3 + _DAT_113077518);
  if (lVar2 != 0) {
    _objc_retain();
    _objc_retain();
    lVar1 = lVar2;
    func_0x00010c074c20();
    if ((int)lVar1 == 0) {
      FUN_1046283f8();
      _objc_release(lVar2);
      _objc_release(param_3);
      goto LAB_104407318;
    }
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  param_2 = 0;
  param_1 = 0;
LAB_104407318:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10440732c; end: 1044073b7; -[SCValdiHeliosButtonView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10440732c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_3 + _DAT_113077518);
  if (lVar2 != 0) {
    _objc_retain();
    _objc_retain();
    lVar1 = lVar2;
    func_0x00010c074c20();
    if ((int)lVar1 == 0) {
      FUN_1046283f8();
      _objc_release(lVar2);
      _objc_release(param_3);
      goto LAB_1044073a4;
    }
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  param_2 = 0;
  param_1 = 0;
LAB_1044073a4:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1044073b8; end: 10440743b; -[SCValdiHeliosButtonView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044073b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain();
  _objc_msgSendSuper2(&lStack_30,puVar1);
  lVar2 = *(long *)(param_1 + _DAT_113077518);
  if (lVar2 != 0) {
    _objc_retain();
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10440743c; end: 104407487; -[SCValdiHeliosButtonView handlePress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440743c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010b97f424();
  if (*(long *)(param_1 + _DAT_113077530) != 0) {
    func_0x00010c0f9540(*(long *)(param_1 + _DAT_113077530),param_2,lVar1);
  }
  func_0x00010b97f45c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104407488; end: 10440759f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104407488(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x000104408ee4(auStack_50,0x112d387f8,&UNK_10d902650);
LAB_104407534:
    lVar4 = 0;
    lVar3 = lVar4;
    if ((param_2 & 1) == 0) {
LAB_104407544:
      lVar3 = lVar4;
      _objc_retain(lVar4);
      goto LAB_104407554;
    }
  }
  else {
    uVar1 = 0;
    FUN_1044075a0(0);
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)plVar2 & 1) == 0) goto LAB_104407534;
    lVar3 = lStack_58;
    func_0x00010bdc2ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_58);
    lVar4 = lVar3;
    if ((param_2 & 1) == 0) goto LAB_104407544;
    if (lVar3 != 0) {
      func_0x00010bfe9480();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104407554;
    }
  }
  lVar4 = 0;
LAB_104407554:
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113077520);
  *(long *)(unaff_x20 + _DAT_113077520) = lVar4;
  _objc_retain(lVar4);
  _objc_release(uVar1);
  FUN_1044070b4();
  _objc_release(lVar3);
  _objc_release(lVar4);
  return;
}



/* Entry: 1044075a0; end: 1044075e3;  */

void FUN_1044075a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077528 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b27a8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000113077528 = puVar1;
  return;
}



/* Entry: 1044075e4; end: 10440767b; -[SCValdiHeliosButtonView onValdiAssetDidChange:shouldFlip:] */

void FUN_1044075e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104407488(&uStack_50,param_4);
  _objc_release(param_1);
  func_0x000104408ee4(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10440767c; end: 104407d7b;  */

void FUN_10440767c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  ppuVar13 = &puStack_a0;
  ppuVar14 = &puStack_a0;
  ppuVar15 = &puStack_a0;
  ppuVar16 = &puStack_a0;
  ppuVar17 = &puStack_a0;
  ppuVar18 = &puStack_a0;
  ppuVar19 = &puStack_a0;
  ppuVar20 = &puStack_a0;
  ppuVar21 = &puStack_a0;
  ppuVar22 = &puStack_a0;
  func_0x00010bf1a020(param_1,param_2,1);
  uVar2 = 0x656c746974;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974,0xe500000000000000);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_104407d7c;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101137fac;
  puStack_88 = &UNK_1107690c0;
  __Block_copy(&puStack_a0);
  pcStack_80 = FUN_104407e30;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_1107690e8;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a140(param_1);
  __Block_release(ppuVar4);
  __Block_release(ppuVar3);
  _objc_release(uVar2);
  uVar2 = 0x69536e6f74747562;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69536e6f74747562,0xea0000000000657a);
  puVar5 = &UNK_110769120;
  _swift_allocObject(&UNK_110769120,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  pcStack_80 = FUN_104407e84;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101137fac;
  puStack_88 = &UNK_110769138;
  puStack_78 = puVar5;
  __Block_copy(&puStack_a0);
  _swift_release(puStack_78);
  pcStack_80 = FUN_104407ff4;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_110769160;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a140(param_1);
  __Block_release(ppuVar7);
  __Block_release(ppuVar6);
  _objc_release(uVar2);
  uVar2 = 0x6d456e6f74747562;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d456e6f74747562,0xee00736973616870);
  puVar5 = &UNK_110769198;
  _swift_allocObject(&UNK_110769198,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  pcStack_80 = FUN_104408004;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101137fac;
  puStack_88 = &UNK_1107691b0;
  puStack_78 = puVar5;
  __Block_copy(&puStack_a0);
  _swift_release(puStack_78);
  pcStack_80 = FUN_104408218;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_1107691d8;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a140(param_1);
  __Block_release(ppuVar9);
  __Block_release(ppuVar8);
  _objc_release(uVar2);
  uVar2 = 0x676e6964616f6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e6964616f6c,0xe700000000000000);
  pcStack_80 = (code *)0x104408228;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10137c454;
  puStack_88 = &UNK_110769200;
  __Block_copy(&puStack_a0);
  pcStack_80 = (code *)0x104408234;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_110769228;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a080(param_1);
  __Block_release(ppuVar11);
  __Block_release(ppuVar10);
  _objc_release(uVar2);
  uVar2 = 0x6e456e6f74747562;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e456e6f74747562,0xed000064656c6261);
  pcStack_80 = (code *)0x104408244;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10137c454;
  puStack_88 = &UNK_110769250;
  __Block_copy(&puStack_a0);
  pcStack_80 = (code *)0x104408250;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_110769278;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a080(param_1);
  __Block_release(ppuVar13);
  __Block_release(ppuVar12);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1fbfe0);
  pcStack_80 = (code *)0x104408260;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10137c454;
  puStack_88 = &UNK_1107692a0;
  __Block_copy(&puStack_a0);
  pcStack_80 = FUN_10440831c;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_1107692c8;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a080(param_1);
  __Block_release(ppuVar15);
  __Block_release(ppuVar14);
  _objc_release(uVar2);
  uVar2 = 0x69736f506e6f6369;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69736f506e6f6369,0xec0000006e6f6974);
  pcStack_80 = (code *)0x1044083c4;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101137fac;
  puStack_88 = &UNK_1107692f0;
  __Block_copy();
  pcStack_80 = FUN_104408480;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_110769318;
  __Block_copy();
  func_0x00010bf1a140(param_1);
  __Block_release(ppuVar17);
  __Block_release(ppuVar16);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1fc000);
  pcStack_80 = FUN_1044084c4;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101137fac;
  puStack_88 = &UNK_110769340;
  __Block_copy(&puStack_a0);
  pcStack_80 = FUN_104408554;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_101138058;
  puStack_88 = &UNK_110769368;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a140(param_1);
  __Block_release(ppuVar19);
  __Block_release(ppuVar18);
  _objc_release(uVar2);
  uVar2 = 0x73736572506e6f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73736572506e6f,0xe700000000000000);
  pcStack_80 = (code *)0x1044085a4;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10140e4c4;
  puStack_88 = &UNK_110769390;
  __Block_copy(&puStack_a0);
  pcStack_80 = (code *)0x104408600;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10127a6c0;
  puStack_88 = &UNK_1107693b8;
  __Block_copy(&puStack_a0);
  func_0x00010bf1a1e0(param_1);
  __Block_release(ppuVar21);
  __Block_release(ppuVar20);
  _objc_release(uVar2);
  pcStack_80 = FUN_104408650;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_104408678;
  puStack_88 = &UNK_1107693e0;
  __Block_copy(&puStack_a0);
  func_0x00010c1dcc00(param_1);
  __Block_release(ppuVar22);
  return;
}



/* Entry: 104407d7c; end: 104407e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104407d7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = param_1;
  FUN_104408e28();
  lVar4 = param_1;
  _swift_dynamicCastClass(param_1,lVar3);
  if (lVar4 != 0) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = param_2;
    }
    puVar1 = (undefined8 *)(lVar4 + _DAT_113077538);
    uVar5 = puVar1[1];
    lVar3 = -0x2000000000000000;
    if (param_3 != 0) {
      lVar3 = param_3;
    }
    *puVar1 = uVar2;
    puVar1[1] = lVar3;
    _objc_retain(param_1);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(uVar5);
    FUN_1044070b4();
    _objc_release(param_1);
  }
  return lVar4 != 0;
}



/* Entry: 104407e14; end: 104407e2f;  */

void FUN_104407e14(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 104407e30; end: 104407e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104407e30(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_104408e28();
  _swift_dynamicCastClass(param_1,lVar2);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_113077538);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0xe000000000000000;
    _swift_bridgeObjectRelease(uVar3);
    FUN_1044070b4();
  }
  return;
}



/* Entry: 104407e84; end: 104407ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104407e84(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = param_1;
  _swift_dynamicCastClass(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar1 == 0) goto LAB_104407fdc;
  if (param_3 == 0) {
LAB_104407f74:
    uVar3 = 2;
  }
  else {
    uVar4 = 0;
    if (((param_2 == 0x6c6c616d7378) && (param_3 == -0x1a00000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6c6c616d7378,0xe600000000000000,param_2,param_3,0), (uVar4 & 1) != 0)) {
      uVar3 = 0;
    }
    else {
      uVar4 = 0x6c6c616d73;
      if (((param_2 == 0x6c6c616d73) && (param_3 == -0x1b00000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6c6c616d73,0xe500000000000000,param_2,param_3,0), (uVar4 & 1) != 0)) {
        uVar3 = 1;
      }
      else {
        uVar4 = 0;
        if (((param_2 != 0x656772616c) || (param_3 != -0x1b00000000000000)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x656772616c,0xe500000000000000,param_2,param_3,0), (uVar4 & 1) == 0))
        goto LAB_104407f74;
        uVar3 = 3;
      }
    }
  }
  *(undefined1 *)(lVar1 + _DAT_113077550) = uVar3;
  uVar4 = *(ulong *)(lVar1 + _DAT_113077518);
  if (uVar4 != 0) {
    _objc_retain(param_1);
    _objc_retain();
    uVar2 = uVar4;
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      FUN_104408a00(uVar4);
      func_0x00010c069fa0(lVar1);
      func_0x00010c069fe0(lVar1);
    }
    _objc_release(param_1);
    _objc_release(uVar4);
  }
LAB_104407fdc:
  return lVar1 != 0;
}



/* Entry: 104407ff4; end: 104408003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104407ff4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  FUN_104408e28();
  _swift_dynamicCastClass(param_1,lVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_113077550) = 2;
    uVar2 = *(ulong *)(param_1 + _DAT_113077518);
    if (uVar2 != 0) {
      _objc_retain();
      uVar3 = uVar2;
      func_0x00010c074c20();
      if ((uVar3 & 1) == 0) {
        FUN_104408a00(uVar2);
        func_0x00010c069fa0(param_1);
        func_0x00010c069fe0(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 104408004; end: 104408217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104408004(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long unaff_x20;
  
  lVar1 = param_1;
  _swift_dynamicCastClass(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar1 == 0) goto LAB_1044081fc;
  if (param_3 == 0) {
LAB_104408194:
    uVar4 = 1;
  }
  else {
    uVar2 = 0x746e65636361;
    if (((param_2 == 0x746e65636361) && (param_3 == -0x1a00000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x746e65636361,0xe600000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar2 = 0x7261646e6f636573;
      if (((param_2 == 0x7261646e6f636573) && (param_3 == -0x16ffffffffffff87)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7261646e6f636573,0xe900000000000079,param_2,param_3,0), (uVar2 & 1) != 0)) {
        uVar4 = 2;
      }
      else {
        uVar2 = 0;
        if (((param_2 == 0x7972616974726574) && (param_3 == -0x1800000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x7972616974726574,0xe800000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
        {
          uVar4 = 3;
        }
        else {
          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0e03fc0)) {
            uVar2 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000012,0x800000010f1fc040,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000013;
              if (((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef0e03fe0)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd000000000000013,0x800000010f1fc020,param_2,param_3,0),
                 (uVar2 & 1) == 0)) goto LAB_104408194;
              uVar4 = 5;
              goto LAB_104408198;
            }
          }
          uVar4 = 4;
        }
      }
    }
  }
LAB_104408198:
  *(undefined1 *)(lVar1 + _DAT_113077558) = uVar4;
  uVar2 = *(ulong *)(lVar1 + _DAT_113077518);
  if (uVar2 != 0) {
    _objc_retain(param_1);
    _objc_retain();
    uVar3 = uVar2;
    func_0x00010c074c20();
    if ((uVar3 & 1) == 0) {
      FUN_104408a00(uVar2);
      func_0x00010c069fa0(lVar1);
      func_0x00010c069fe0(lVar1);
    }
    _objc_release(param_1);
    _objc_release(uVar2);
  }
LAB_1044081fc:
  return lVar1 != 0;
}



/* Entry: 104408218; end: 10440826b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104408218(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  FUN_104408e28();
  _swift_dynamicCastClass(param_1,lVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_113077558) = 1;
    uVar2 = *(ulong *)(param_1 + _DAT_113077518);
    if (uVar2 != 0) {
      _objc_retain();
      uVar3 = uVar2;
      func_0x00010c074c20();
      if ((uVar3 & 1) == 0) {
        FUN_104408a00(uVar2);
        func_0x00010c069fa0(param_1);
        func_0x00010c069fe0(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10440826c; end: 10440831b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10440826c(long param_1,byte param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1;
  FUN_104408e28();
  lVar2 = param_1;
  _swift_dynamicCastClass(param_1,lVar1);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + *param_4) = param_2 & 1;
    uVar4 = *(ulong *)(lVar2 + _DAT_113077518);
    if (uVar4 != 0) {
      _objc_retain(param_1);
      _objc_retain();
      uVar3 = uVar4;
      func_0x00010c074c20();
      if ((uVar3 & 1) == 0) {
        FUN_104408a00(uVar4);
        func_0x00010c069fa0(lVar2);
        func_0x00010c069fe0(lVar2);
      }
      _objc_release(uVar4);
      _objc_release(param_1);
    }
  }
  return lVar2 != 0;
}



/* Entry: 10440831c; end: 10440832b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440831c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  FUN_104408e28();
  _swift_dynamicCastClass(param_1,lVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_113077570) = 0;
    uVar2 = *(ulong *)(param_1 + _DAT_113077518);
    if (uVar2 != 0) {
      _objc_retain();
      uVar3 = uVar2;
      func_0x00010c074c20();
      if ((uVar3 & 1) == 0) {
        FUN_104408a00(uVar2);
        func_0x00010c069fa0(param_1);
        func_0x00010c069fe0(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10440832c; end: 10440847f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440832c(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  FUN_104408e28();
  _swift_dynamicCastClass(param_1,lVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + *param_3) = param_4;
    uVar2 = *(ulong *)(param_1 + _DAT_113077518);
    if (uVar2 != 0) {
      _objc_retain();
      uVar3 = uVar2;
      func_0x00010c074c20();
      if ((uVar3 & 1) == 0) {
        FUN_104408a00(uVar2);
        func_0x00010c069fa0(param_1);
        func_0x00010c069fe0(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 104408480; end: 1044084c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104408480(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104408e28();
  _swift_dynamicCastClass(param_1,lVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_113077540) = 0;
    FUN_1044070b4();
  }
  return;
}



/* Entry: 1044084c4; end: 104408553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1044084c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  FUN_104408e28();
  lVar3 = param_1;
  _swift_dynamicCastClass(param_1,lVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_113077548);
    uVar4 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    _objc_retain(param_1);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(uVar4);
    FUN_1044070b4();
    _objc_release(param_1);
  }
  return lVar3 != 0;
}



/* Entry: 104408554; end: 10440864f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104408554(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_104408e28();
  _swift_dynamicCastClass(param_1,lVar2);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_113077548);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    _swift_bridgeObjectRelease(uVar3);
    FUN_1044070b4();
  }
  return;
}



/* Entry: 104408650; end: 104408677;  */

void FUN_104408650(undefined8 param_1)

{
  FUN_104408e28();
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0,param_1,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 104408678; end: 1044086af;  */

void FUN_104408678(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044086b0; end: 1044086e3; +[SCValdiHeliosButtonView bindAttributes:] */

void FUN_1044086b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  _swift_unknownObjectRetain(param_3);
  FUN_10440767c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1044086e4; end: 1044089ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044086e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 uStack_70;
  
  lVar10 = 0;
  puStack_a8 = param_1;
  __s10Foundation12CharacterSetVMa();
  lVar18 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  uVar17 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_113077548);
  lVar15 = ((undefined8 *)(unaff_x20 + _DAT_113077548))[1];
  if (lVar15 != 0) {
    lVar11 = lVar15;
    uStack_a0 = uVar16;
    lStack_98 = lVar15;
    _swift_bridgeObjectRetain_n(lVar15,2);
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar17);
    func_0x000100e8b654();
    uVar12 = uVar17;
    puVar14 = PTR___sSSN_11034da80;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar17,PTR___sSSN_11034da80,lVar11);
    _swift_bridgeObjectRelease(lVar15);
    (**(code **)(lVar18 + 8))(uVar17,lVar10);
    _swift_bridgeObjectRelease(puVar14);
    uVar12 = uVar12 & 0xffffffffffff;
    if (((ulong)puVar14 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar14 >> 0x38 & 0xf;
    }
    if (uVar12 == 0) {
      _swift_bridgeObjectRelease(lVar15);
      uVar16 = 0;
      lVar15 = 0;
    }
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077538);
  uStack_a0 = *puVar1;
  uVar2 = puVar1[1];
  uVar13 = uVar2;
  lStack_98 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar17);
  func_0x000100e8b654();
  uVar12 = uVar17;
  puVar14 = PTR___sSSN_11034da80;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
            (uVar17,PTR___sSSN_11034da80,uVar13);
  (**(code **)(lVar18 + 8))(uVar17,lVar10);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(puVar14);
  uVar17 = uVar12 & 0xffffffffffff;
  if (((ulong)puVar14 & 0x2000000000000000) != 0) {
    uVar17 = (ulong)puVar14 >> 0x38 & 0xf;
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_113077520);
  if (uVar17 == 0) {
    if (lVar10 == 0) {
      uStack_70 = 0xff;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      if (lVar15 == 0) {
        uStack_70 = 0xff;
        uStack_e0 = 0;
        uStack_100 = 0;
        uStack_d0 = 0;
        uStack_f0 = 0;
        uStack_110 = uStack_e0;
        uStack_c0 = uStack_e0;
        goto LAB_1044089a4;
      }
      _objc_retain();
      FUN_104625bd4(&uStack_a0);
      auVar7._8_8_ = uStack_88;
      auVar7._0_8_ = uStack_90;
      auVar20._8_8_ = uStack_88;
      auVar20._0_8_ = uStack_90;
      auVar19._8_8_ = lStack_98;
      auVar19._0_8_ = uStack_a0;
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      uStack_c8 = auStack_80._8_8_;
      uStack_d0 = auStack_80._0_8_;
      auVar21 = NEON_ext(auStack_80,auStack_80,8,1);
      auVar20 = NEON_ext(auVar20,auVar7,8,1);
      uStack_f8 = auVar20._8_8_;
      uStack_100 = auVar20._0_8_;
      uStack_e8 = auVar21._8_8_;
      uStack_f0 = auVar21._0_8_;
      uStack_b8 = lStack_98;
      uStack_c0 = uStack_a0;
      auVar19 = NEON_ext(auVar19,auVar19,8,1);
      uStack_108 = auVar19._8_8_;
      uStack_110 = auVar19._0_8_;
      _objc_release(lVar10);
    }
  }
  else if (lVar10 == 0) {
    FUN_104625b0c(&uStack_a0,*puVar1,puVar1[1],uVar16,lVar15);
    auVar9._8_8_ = uStack_88;
    auVar9._0_8_ = uStack_90;
    auVar8._8_8_ = uStack_88;
    auVar8._0_8_ = uStack_90;
    auVar21._8_8_ = lStack_98;
    auVar21._0_8_ = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = auStack_80._8_8_;
    uStack_d0 = auStack_80._0_8_;
    auVar20 = NEON_ext(auStack_80,auStack_80,8,1);
    auVar19 = NEON_ext(auVar8,auVar9,8,1);
    uStack_f8 = auVar19._8_8_;
    uStack_100 = auVar19._0_8_;
    uStack_e8 = auVar20._8_8_;
    uStack_f0 = auVar20._0_8_;
    uStack_b8 = lStack_98;
    uStack_c0 = uStack_a0;
    auVar19 = NEON_ext(auVar21,auVar21,8,1);
    uStack_108 = auVar19._8_8_;
    uStack_110 = auVar19._0_8_;
  }
  else {
    uVar2 = *puVar1;
    uVar13 = puVar1[1];
    uVar3 = *(undefined1 *)(unaff_x20 + _DAT_113077540);
    _objc_retain();
    _swift_bridgeObjectRetain(uVar13);
    FUN_104625b44(&uStack_a0,uVar2,uVar13,lVar10,uVar3,uVar16,lVar15);
    auVar6._8_8_ = uStack_88;
    auVar6._0_8_ = uStack_90;
    auVar5._8_8_ = uStack_88;
    auVar5._0_8_ = uStack_90;
    auVar4._8_8_ = lStack_98;
    auVar4._0_8_ = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = auStack_80._8_8_;
    uStack_d0 = auStack_80._0_8_;
    auVar20 = NEON_ext(auStack_80,auStack_80,8,1);
    auVar19 = NEON_ext(auVar5,auVar6,8,1);
    uStack_f8 = auVar19._8_8_;
    uStack_100 = auVar19._0_8_;
    uStack_e8 = auVar20._8_8_;
    uStack_f0 = auVar20._0_8_;
    uStack_b8 = lStack_98;
    uStack_c0 = uStack_a0;
    auVar19 = NEON_ext(auVar4,auVar4,8,1);
    uStack_108 = auVar19._8_8_;
    uStack_110 = auVar19._0_8_;
    _objc_release(lVar10);
    _swift_bridgeObjectRelease(uVar13);
  }
  _swift_bridgeObjectRelease(lVar15);
LAB_1044089a4:
  puStack_a8[1] = uStack_110;
  *puStack_a8 = uStack_c0;
  puStack_a8[3] = uStack_100;
  puStack_a8[2] = uStack_e0;
  puStack_a8[5] = uStack_f0;
  puStack_a8[4] = uStack_d0;
  *(undefined1 *)(puStack_a8 + 6) = uStack_70;
  return;
}



/* Entry: 104408a00; end: 104408b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104408a00(long param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11308a918;
  _swift_beginAccess(param_1 + _DAT_11308a918,auStack_48,0,0);
  if (*(char *)(param_1 + lVar2) != *(char *)(unaff_x20 + _DAT_113077550)) {
    FUN_104626adc();
  }
  lVar2 = _DAT_11308a920;
  _swift_beginAccess(param_1 + _DAT_11308a920,auStack_60,0,0);
  if (*(char *)(param_1 + lVar2) != *(char *)(unaff_x20 + _DAT_113077558)) {
    func_0x000104626ae8();
  }
  lVar2 = _DAT_11308a930;
  _swift_beginAccess(param_1 + _DAT_11308a930,auStack_78,0,0);
  bVar1 = *(byte *)(unaff_x20 + _DAT_113077560);
  uVar3 = (uint)bVar1;
  if (*(byte *)(param_1 + lVar2) != bVar1) {
    uVar3 = (uint)bVar1;
    FUN_104626c4c();
  }
  FUN_104628018();
  if ((uVar3 & 1) != (uint)*(byte *)(unaff_x20 + _DAT_113077568)) {
    FUN_104627cb0();
  }
  lVar2 = _DAT_11308a928;
  _swift_beginAccess(param_1 + _DAT_11308a928,auStack_90,0,0);
  if (*(char *)(param_1 + lVar2) != *(char *)(unaff_x20 + _DAT_113077570)) {
    FUN_104626bf0();
  }
  return;
}



/* Entry: 104408b40; end: 104408c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104408b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113077518) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113077530) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077538);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_113077520) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113077540) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077548);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113077550) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_113077558) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113077560) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113077568) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113077570) = 0;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffffc0,
                      PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 104408c3c; end: 104408d5b; -[SCValdiHeliosButtonView initWithFrame:] */

void FUN_104408c3c(void)

{
  FUN_104408b40();
  return;
}



/* Entry: 104408d5c; end: 104408d83; -[SCValdiHeliosButtonView initWithCoder:] */

void FUN_104408d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000104408c5c();
  return;
}


