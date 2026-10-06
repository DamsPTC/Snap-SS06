/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10482acc4; end: 10482b063;  */

undefined8 FUN_10482acc4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar3;
  
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  uVar10 = 0;
  uVar4 = 0x5f5050415f534f49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5050415f534f49,0xea00000000004449);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_a8;
    uVar4 = uStack_b0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0x5f57454956424557;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f57454956424557,0xeb000000004c5255);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar7 = 0;
    uVar6 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_a8;
    uVar6 = uStack_b0;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  uVar8 = 0x545845545f415443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545845545f415443,0xe800000000000000);
  lVar9 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar9);
    _swift_unknownObjectRelease(lVar9);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lVar5);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    if ((uVar10 & 1) != 0) {
      uVar8 = 0x455059545f4441;
      uVar11 = 0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
      lVar9 = param_1;
      func_0x00010bf66f40(param_1);
      _objc_release(uVar8);
      func_0x0001042a6cc4(lVar9);
      if ((uVar11 & 0xff) != 1) {
        if (lVar5 == 0) {
          uVar4 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
          _swift_bridgeObjectRelease(lVar5);
        }
        if (lVar7 == 0) {
          uVar6 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
          _swift_bridgeObjectRelease(lVar7);
        }
        uVar8 = uStack_b0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,lStack_a8);
        _swift_bridgeObjectRelease(lStack_a8);
        func_0x00010c01eb80();
        _objc_release(uVar4);
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(param_1);
        return unaff_x20;
      }
      _swift_bridgeObjectRelease(lStack_a8);
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10482b064; end: 10482b08b; -[SCAdTileCTAOverrides initWithCoder:] */

void FUN_10482b064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10482acc4();
  return;
}



/* Entry: 10482b08c; end: 10482b0a7; -[SCAdTileCTAOverrides description] */

void FUN_10482b08c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482b0a8; end: 10482b123; -[SCAdTileCTAOverrides init] */

void FUN_10482b0a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/SCAdTileCTAOverridesWrapper.swift",0x2d,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482b0f0);
  (*pcVar1)();
}



/* Entry: 10482b124; end: 10482b177; -[SCAdTileCTAOverrides .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482b124(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091130 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091138 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091140 + 8))
  ;
  return;
}



/* Entry: 10482b178; end: 10482b197;  */

void FUN_10482b178(void)

{
  _objc_opt_self(&PTR_PTR_1129d9ee8);
  return;
}



/* Entry: 10482b198; end: 10482b1c7;  */

void FUN_10482b198(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10482ba74(param_1);
  return;
}



/* Entry: 10482b1c8; end: 10482b3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482b1c8(void)

{
  double dVar1;
  long unaff_x20;
  long lVar2;
  double dVar3;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113091178));
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113091180) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_113091180);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113091188) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_113091188);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  if (*(long *)(unaff_x20 + _DAT_113091190) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10482d828();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091198));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130911a0));
  lVar2 = *(long *)(unaff_x20 + _DAT_1130911a8);
  __ss6HasherVABycfC(auStack_d0);
  dVar3 = *(double *)(lVar2 + _DAT_113091278);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar3 = *(double *)(lVar2 + _DAT_113091280);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar2 = *(long *)(unaff_x20 + _DAT_1130911b0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_1130911b8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10482b3c8; end: 10482b6e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10482b3c8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x20;
  long lVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  long lStack_a8;
  long alStack_a0 [4];
  
  lVar16 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_a0);
  if (alStack_a0[3] == 0) {
    func_0x00010006e7f4(alStack_a0);
  }
  else {
    plVar9 = &lStack_a8;
    _swift_dynamicCast(plVar9,alStack_a0,PTR___sypN_11034f1a8 + 8,lVar16,6);
    if (((ulong)plVar9 & 1) != 0) {
      bVar4 = *(byte *)(unaff_x20 + _DAT_113091178);
      bVar5 = *(byte *)(lStack_a8 + _DAT_113091178);
      dVar19 = *(double *)(unaff_x20 + _DAT_113091180);
      dVar20 = *(double *)(lStack_a8 + _DAT_113091180);
      dVar21 = *(double *)(unaff_x20 + _DAT_113091188);
      dVar22 = *(double *)(lStack_a8 + _DAT_113091188);
      if (*(long *)(unaff_x20 + _DAT_113091190) == 0) {
        uVar18 = (uint)(*(long *)(lStack_a8 + _DAT_113091190) == 0);
      }
      else {
        lVar16 = *(long *)(lStack_a8 + _DAT_113091190);
        if (lVar16 == 0) {
          lVar10 = 0;
          alStack_a0[1] = 0;
          alStack_a0[2] = 0;
        }
        else {
          lVar10 = 0;
          FUN_10482e4c0();
        }
        alStack_a0[0] = lVar16;
        alStack_a0[3] = lVar10;
        _objc_retain(lVar16);
        uVar18 = 0;
        FUN_10482d8bc();
        func_0x00010006e7f4(alStack_a0);
      }
      iVar2 = *(int *)(unaff_x20 + _DAT_113091198);
      iVar3 = *(int *)(lStack_a8 + _DAT_113091198);
      bVar6 = *(byte *)(unaff_x20 + _DAT_1130911a0);
      bVar7 = *(byte *)(lStack_a8 + _DAT_1130911a0);
      lVar16 = *(long *)(lStack_a8 + _DAT_1130911a8);
      uVar11 = 0;
      FUN_10482ea98();
      alStack_a0[0] = lVar16;
      alStack_a0[3] = uVar11;
      _objc_retain(lVar16);
      uVar8 = 0;
      FUN_10482e4e0();
      func_0x00010006e7f4(alStack_a0);
      lVar10 = *(long *)(unaff_x20 + _DAT_1130911b0);
      lVar16 = *(long *)(lStack_a8 + _DAT_1130911b0);
      uVar17 = (uint)(lVar10 == 0 && lVar16 == 0);
      if ((lVar10 != 0) && (lVar16 != 0)) {
        func_0x0001002ed07c();
        _objc_retain(lVar16);
        _objc_retain(lVar10);
        lVar12 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar17 = (uint)lVar12;
        _objc_release(lVar10);
        _objc_release(lVar16);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_1130911b8);
      lVar16 = *(long *)(lStack_a8 + _DAT_1130911b8);
      if (lVar10 == 0) {
        lVar12 = lVar16;
        _objc_retain(lVar16);
        _objc_release(lStack_a8);
        if (lVar16 != 0) {
          uVar15 = 0;
          goto LAB_10482b68c;
        }
        uVar15 = 1;
      }
      else {
        uVar15 = 0;
        lVar12 = lStack_a8;
        if (lVar16 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar16);
          _objc_retain(lVar10);
          lVar13 = lVar10;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar15 = (uint)lVar13;
          _objc_release(lVar10);
          _objc_release(lVar16);
        }
LAB_10482b68c:
        _objc_release(lVar12);
      }
      uVar14 = 0;
      uVar1 = 0;
      if (dVar21 == dVar22) {
        uVar1 = (uint)(dVar19 == dVar20) & ((bVar4 ^ bVar5) ^ 0xffffffff);
      }
      if ((((uVar1 & uVar18) == 1 && iVar2 == iVar3) && (((bVar6 ^ bVar7) & 1) == 0)) &&
         (((uVar8 ^ 1) & 1) == 0)) {
        uVar14 = uVar17 & uVar15;
      }
      goto LAB_10482b4a0;
    }
  }
  uVar14 = 0;
LAB_10482b4a0:
  return uVar14 & 1;
}



/* Entry: 10482b6e4; end: 10482b75b;  */

void FUN_10482b6e4(undefined8 *param_1,undefined8 param_2)

{
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
  undefined1 uStack_28;
  
  FUN_10482c6d0(&uStack_b8);
  _objc_release(param_2);
  param_1[0xd] = uStack_50;
  param_1[0xc] = uStack_58;
  param_1[0xf] = uStack_40;
  param_1[0xe] = uStack_48;
  param_1[0x11] = uStack_30;
  param_1[0x10] = uStack_38;
  *(undefined1 *)(param_1 + 0x12) = uStack_28;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[0xb] = uStack_60;
  param_1[10] = uStack_68;
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  return;
}



/* Entry: 10482b75c; end: 10482b76b; -[SCAdInteractiveAreaConfigValue enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10482b75c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091178);
}



/* Entry: 10482b76c; end: 10482b77b; -[SCAdInteractiveAreaConfigValue velocityThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482b76c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091180);
}



/* Entry: 10482b77c; end: 10482b78b; -[SCAdInteractiveAreaConfigValue distanceThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482b77c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091188);
}



/* Entry: 10482b78c; end: 10482b79b; -[SCAdInteractiveAreaConfigValue edgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482b78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091190));
  return;
}



/* Entry: 10482b79c; end: 10482b7ab; -[SCAdInteractiveAreaConfigValue interactiveAreaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482b79c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091198);
}



/* Entry: 10482b7ac; end: 10482b7bb; -[SCAdInteractiveAreaConfigValue showDebugView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10482b7ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130911a0);
}



/* Entry: 10482b7bc; end: 10482b7cb; -[SCAdInteractiveAreaConfigValue swipeAngleConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482b7bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130911a8));
  return;
}



/* Entry: 10482b7cc; end: 10482b7db; -[SCAdInteractiveAreaConfigValue hintDistanceThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482b7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130911b0));
  return;
}



/* Entry: 10482b7dc; end: 10482b7eb; -[SCAdInteractiveAreaConfigValue slowSwipeDistanceThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482b7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130911b8));
  return;
}



/* Entry: 10482b7ec; end: 10482b9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482b7ec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113091178) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113091180) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091188) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091190) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113091198) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130911a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130911a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130911b0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130911b8) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482b9c4; end: 10482ba73; -[SCAdInteractiveAreaConfigValue initWithEnable:velocityThreshold:distanceThreshold:edgeInsets:interactiveAreaType:showDebugView:swipeAngleConfig:hintDistanceThreshold:slowSwipeDistanceThreshold:] */

void FUN_10482b9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010482b8d8(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 10482ba74; end: 10482bccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482ba74(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_80;
  long lStack_78;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113091178) = *param_1;
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + _DAT_113091180) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + _DAT_113091188) = uVar11;
  cVar1 = param_1[0x20];
  if (cVar1 == -1) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = param_1[0x30];
    uVar3 = param_1[0x40];
    uVar4 = param_1[0x50];
    lVar7 = 0;
    FUN_10482e4c0();
    lVar6 = lVar7;
    _objc_allocWithZone();
    FUN_10482d510(uVar11,cVar1);
    *(undefined8 *)(lVar6 + _DAT_113091230) = uVar11;
    FUN_10482d510(uVar12,uVar2);
    *(undefined8 *)(lVar6 + _DAT_113091238) = uVar12;
    FUN_10482d510(uVar10,uVar3);
    *(undefined8 *)(lVar6 + _DAT_113091240) = uVar10;
    FUN_10482d510(uVar9,uVar4);
    *(undefined8 *)(lVar6 + _DAT_113091248) = uVar9;
    plVar5 = &lStack_a0;
    lStack_a0 = lVar6;
    lStack_98 = lVar7;
    _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113091190) = plVar5;
  *(undefined8 *)(unaff_x20 + _DAT_113091198) = *(undefined8 *)(param_1 + 0x58);
  *(undefined1 *)(unaff_x20 + _DAT_1130911a0) = param_1[0x60];
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  lVar7 = 0;
  FUN_10482ea98();
  lVar6 = lVar7;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_113091278) = uVar11;
  *(undefined8 *)(lVar6 + _DAT_113091280) = uVar12;
  plVar5 = &lStack_80;
  lStack_80 = lVar6;
  lStack_78 = lVar7;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  puVar8 = (undefined *)0x0;
  *(long **)(unaff_x20 + _DAT_1130911a8) = plVar5;
  if (param_1[0x80] != '\x01') {
    uVar11 = *(undefined8 *)(param_1 + 0x78);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar11);
  }
  *(undefined **)(unaff_x20 + _DAT_1130911b0) = puVar8;
  if (param_1[0x90] == '\x01') {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar11);
  }
  *(undefined **)(unaff_x20 + _DAT_1130911b8) = puVar8;
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482bccc; end: 10482bcff; -[SCAdInteractiveAreaConfigValue hash] */

undefined8 FUN_10482bccc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10482b1c8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10482bd00; end: 10482bd7f; -[SCAdInteractiveAreaConfigValue isEqual:] */

uint FUN_10482bd00(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10482b3c8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10482bd80; end: 10482bd83; -[SCAdInteractiveAreaConfigValue copyWithZone:] */

void FUN_10482bd80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10482bd84; end: 10482c01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482bd84(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0x454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c42414e45,0xe600000000000000);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091180);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210c50);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091188);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210c70);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x534e495f45474445;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534e495f45474445,0xeb00000000535445);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f210c90);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4245445f574f4853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4245445f574f4853,0xef574549565f4755);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210cb0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f210cd0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f210cf0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10482c01c; end: 10482c06b; -[SCAdInteractiveAreaConfigValue encodeWithCoder:] */

void FUN_10482c01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10482bd84(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10482c06c; end: 10482c09b;  */

void FUN_10482c06c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10482c09c(param_1);
  return;
}



/* Entry: 10482c09c; end: 10482c58f;  */

undefined8 FUN_10482c09c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar1 = 0x454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c42414e45,0xe600000000000000);
  func_0x00010bf66ce0(param_2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210c50);
  func_0x00010bf66da0(param_2);
  uVar1 = param_1;
  _objc_release(uVar2);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210c70);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar2);
  uVar2 = 0x534e495f45474445;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534e495f45474445,0xeb00000000535445);
  uVar3 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10482e4c0(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar3 = uStack_b8;
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f210c90);
  uVar5 = param_2;
  func_0x00010bf66f40();
  _objc_release(uVar2);
  if (uVar5 < 3) {
    uVar2 = 0x4245445f574f4853;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4245445f574f4853,0xef574549565f4755);
    func_0x00010bf66ce0(param_2);
    _objc_release(uVar2);
    uVar2 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210cb0);
    uVar5 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar5 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
      _swift_unknownObjectRelease(uVar5);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      _objc_release(param_2);
      _objc_release(uVar3);
      func_0x00010006e7f4(&uStack_90);
      goto LAB_10482c3dc;
    }
    uVar2 = 0;
    FUN_10482ea98(0);
    puVar4 = &uStack_b8;
    _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar5 = uStack_b8;
    if (((ulong)puVar4 & 1) != 0) {
      uVar2 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f210cd0);
      uVar6 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar6 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar6);
        _swift_unknownObjectRelease(uVar6);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        uVar6 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_b8;
        _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
        uVar6 = uStack_b8;
        if ((int)puVar4 == 0) {
          uVar6 = 0;
        }
      }
      uVar2 = 0xd00000000000001d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f210cf0);
      uVar7 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar7 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar7);
        _swift_unknownObjectRelease(uVar7);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        uVar7 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_b8;
        _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
        uVar7 = uStack_b8;
        if ((int)puVar4 == 0) {
          uVar7 = 0;
        }
      }
      func_0x00010c00f740(param_1,uVar1);
      _objc_release(param_2);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar3);
      return unaff_x20;
    }
    _objc_release(param_2);
    param_2 = uVar3;
  }
  else {
    _objc_release(uVar3);
  }
  _objc_release(param_2);
LAB_10482c3dc:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10482c590; end: 10482c5b7; -[SCAdInteractiveAreaConfigValue initWithCoder:] */

void FUN_10482c590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10482c09c();
  return;
}



/* Entry: 10482c5b8; end: 10482c5fb; -[SCAdInteractiveAreaConfigValue description] */

void FUN_10482c5b8(undefined8 param_1)

{
  undefined1 auStack_b8 [152];
  
  _objc_retain();
  FUN_10482c6d0(auStack_b8);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482c5fc; end: 10482c677; -[SCAdInteractiveAreaConfigValue init] */

void FUN_10482c5fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdInteractiveAreaConfigValueWrapper.swift",0x35,2,0x91,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482c644);
  (*pcVar1)();
}



/* Entry: 10482c678; end: 10482c6cf; -[SCAdInteractiveAreaConfigValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482c678(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091190));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130911a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130911b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130911b8));
  return;
}



/* Entry: 10482c6d0; end: 10482c9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482c6d0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar3 = *(undefined1 *)(param_3 + _DAT_113091178);
  uVar16 = *(undefined8 *)(param_3 + _DAT_113091180);
  uVar17 = *(undefined8 *)(param_3 + _DAT_113091188);
  lVar6 = *(long *)(param_3 + _DAT_113091190);
  if (lVar6 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uVar9 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar12 = 0xff;
  }
  else {
    lVar8 = *(long *)(lVar6 + _DAT_113091230);
    if (*(char *)(lVar8 + _DAT_1130911e8) == '\x01') {
      puVar7 = (undefined8 *)(lVar8 + _DAT_1130911f0);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9d8);
        (*pcVar5)();
      }
      uVar12 = 1;
    }
    else {
      puVar7 = (undefined8 *)(lVar8 + _DAT_1130911f8);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9dc);
        (*pcVar5)();
      }
      uVar12 = 0;
    }
    uStack_98 = *puVar7;
    lVar8 = *(long *)(lVar6 + _DAT_113091238);
    if (*(char *)(lVar8 + _DAT_1130911e8) == '\x01') {
      puVar7 = (undefined8 *)(lVar8 + _DAT_1130911f0);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9e0);
        (*pcVar5)();
      }
      uVar13 = 1;
    }
    else {
      puVar7 = (undefined8 *)(lVar8 + _DAT_1130911f8);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9e4);
        (*pcVar5)();
      }
      uVar13 = 0;
    }
    uStack_a0 = *puVar7;
    lVar8 = *(long *)(lVar6 + _DAT_113091240);
    if (*(char *)(lVar8 + _DAT_1130911e8) == '\x01') {
      puVar7 = (undefined8 *)(lVar8 + _DAT_1130911f0);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9e8);
        (*pcVar5)();
      }
      uStack_a8 = 1;
    }
    else {
      puVar7 = (undefined8 *)(lVar8 + _DAT_1130911f8);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9ec);
        (*pcVar5)();
      }
      uStack_a8 = 0;
    }
    uStack_b0 = *puVar7;
    lVar6 = *(long *)(lVar6 + _DAT_113091248);
    if (*(char *)(lVar6 + _DAT_1130911e8) == '\x01') {
      puVar7 = (undefined8 *)(lVar6 + _DAT_1130911f0);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9f0);
        (*pcVar5)();
      }
      uVar11 = 1;
    }
    else {
      puVar7 = (undefined8 *)(lVar6 + _DAT_1130911f8);
      if (*(char *)(puVar7 + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10482c9f4);
        (*pcVar5)();
      }
      uVar11 = 0;
    }
    uVar9 = *puVar7;
  }
  uVar10 = *(undefined8 *)(param_3 + _DAT_113091198);
  uVar4 = *(undefined1 *)(param_3 + _DAT_1130911a0);
  uVar18 = *(undefined8 *)(*(long *)(param_3 + _DAT_1130911a8) + _DAT_113091278);
  uVar19 = *(undefined8 *)(*(long *)(param_3 + _DAT_1130911a8) + _DAT_113091280);
  uVar14 = 0;
  bVar1 = *(long *)(param_3 + _DAT_1130911b0) == 0;
  if (bVar1) {
    uVar15 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar15 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_1130911b8) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar14 = param_2;
  }
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar16;
  *(undefined8 *)(param_1 + 0x10) = uVar17;
  *(undefined8 *)(param_1 + 0x18) = uStack_98;
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  *(undefined8 *)(param_1 + 0x28) = uStack_a0;
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  *(undefined8 *)(param_1 + 0x38) = uStack_b0;
  *(undefined8 *)(param_1 + 0x40) = uStack_a8;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  param_1[0x50] = uVar11;
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  param_1[0x60] = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar18;
  *(undefined8 *)(param_1 + 0x70) = uVar19;
  *(undefined8 *)(param_1 + 0x78) = uVar15;
  param_1[0x80] = bVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar14;
  param_1[0x90] = bVar2;
  return;
}



/* Entry: 10482c9f4; end: 10482ca13;  */

void FUN_10482c9f4(void)

{
  _objc_opt_self(&PTR_PTR_1129d9fd0);
  return;
}



/* Entry: 10482ca14; end: 10482cabf;  */

void FUN_10482ca14(void)

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



/* Entry: 10482cac0; end: 10482caff;  */

void FUN_10482cac0(undefined1 *param_1,long *param_2)

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



/* Entry: 10482cb00; end: 10482cb67; -[SCAdInteractiveAreaInsetValue description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482cb00(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_1130911e8) == '\x01') {
    if (*(char *)(param_1 + _DAT_1130911f0 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482cb30);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_1130911f8 + 8) == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10482cb68);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482cb68; end: 10482cbaf; -[SCAdInteractiveAreaInsetValue init] */

void FUN_10482cb68(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdInteractiveAreaInsetValueWrapper.swift",0x34,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482cbb0);
  (*pcVar1)();
}



/* Entry: 10482cbb0; end: 10482cbcf; -[SCAdInteractiveAreaInsetValue hash] */

void FUN_10482cbb0(void)

{
  FUN_10482cbd0();
  return;
}



/* Entry: 10482cbd0; end: 10482ccaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482cbd0(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130911e8));
  if ((char)((ulong *)(unaff_x20 + _DAT_1130911f8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_1130911f8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_1130911f0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_1130911f0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10482ccb0; end: 10482cdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10482ccb0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      if (*(char *)(unaff_x20 + _DAT_1130911e8) == *(char *)(lStack_68 + _DAT_1130911e8)) {
        lVar3 = _DAT_1130911f8;
        if (*(char *)(unaff_x20 + _DAT_1130911e8) == '\x01') {
          lVar3 = _DAT_1130911f0;
        }
        dVar5 = *(double *)(unaff_x20 + lVar3);
        cVar1 = *(char *)((double *)(unaff_x20 + lVar3) + 1);
        dVar6 = *(double *)(lStack_68 + lVar3);
        cVar2 = *(char *)((double *)(lStack_68 + lVar3) + 1);
        _objc_release();
        if (cVar1 == '\x01') {
          return cVar2 == '\x01';
        }
        return dVar5 == dVar6 && cVar2 != '\x01';
      }
      _objc_release();
    }
  }
  return false;
}



/* Entry: 10482cdb4; end: 10482ce33; -[SCAdInteractiveAreaInsetValue isEqual:] */

uint FUN_10482cdb4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10482ccb0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10482ce34; end: 10482ce37; -[SCAdInteractiveAreaInsetValue copyWithZone:] */

void FUN_10482ce34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10482ce38; end: 10482cfa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482ce38(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (*(char *)(unaff_x20 + _DAT_1130911e8) == '\x01') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130911f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482cfa4);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130911f0);
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210d90);
    func_0x00010bf92e80(uVar3,param_1);
    _objc_release(uVar2);
    uVar2 = 0xd000000000000012;
    uVar3 = 0x800000010f210db0;
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130911f8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482cfa8);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130911f8);
    uVar2 = 0x45554c41565f5850;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c41565f5850,0xe800000000000000);
    func_0x00010bf92e80(uVar3,param_1);
    _objc_release(uVar2);
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xea00000000005850;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10482cfa8; end: 10482cff7; -[SCAdInteractiveAreaInsetValue encodeWithCoder:] */

void FUN_10482cfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10482ce38(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10482cff8; end: 10482d027;  */

void FUN_10482cff8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10482d028(param_1);
  return;
}



/* Entry: 10482d028; end: 10482d33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10482d028(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar7 = auStack_c0;
  _swift_getObjectType();
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
    goto LAB_10482d300;
  }
  plVar4 = &lStack_a0;
  uVar2 = uStack_80;
  _swift_dynamicCast(plVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar4 & 1) == 0) {
LAB_10482d2f8:
    _objc_release(param_1);
LAB_10482d300:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar5 = 0x5f45505954425553;
  if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x15ffffffffffa7b0)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f45505954425553,0xea00000000005850,lStack_a0,lStack_98,0), (uVar5 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    uVar6 = 0x45554c41565f5850;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c41565f5850,0xe800000000000000);
    func_0x00010bf66da0(param_1);
    _objc_release(uVar6);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_1130911e8) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130911f8);
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130911f0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    goto LAB_10482d1cc;
  }
  if ((lStack_a0 == -0x2fffffffffffffee) && (lStack_98 == -0x7ffffffef0def250)) {
    _swift_bridgeObjectRelease(0x800000010f210db0);
  }
  else {
    uVar5 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000012,0x800000010f210db0,lStack_a0,lStack_98,0);
    _swift_bridgeObjectRelease(lStack_98);
    if ((uVar5 & 1) == 0) goto LAB_10482d2f8;
  }
  uVar6 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210d90);
  func_0x00010bf66da0(param_1);
  _objc_release(uVar6);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130911e8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130911f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130911f0);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar7 = auStack_b0;
LAB_10482d1cc:
  _objc_msgSendSuper2(puVar7,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar7;
}



/* Entry: 10482d33c; end: 10482d363; -[SCAdInteractiveAreaInsetValue initWithCoder:] */

void FUN_10482d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10482d028();
  return;
}



/* Entry: 10482d364; end: 10482d3e7; +[SCAdInteractiveAreaInsetValue pxWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482d364(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130911e8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130911f8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130911f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482d3e8; end: 10482d46b; +[SCAdInteractiveAreaInsetValue percentageWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482d3e8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130911e8) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130911f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130911f0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482d46c; end: 10482d4d7; -[SCAdInteractiveAreaInsetValue matchPx:percentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482d46c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_1130911e8) != '\x01') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_1130911f8) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010482d4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + _DAT_1130911f8),param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10482d4d8);
    (*pcVar1)();
  }
  if (*(char *)((undefined8 *)(param_1 + _DAT_1130911f0) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010482d4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(*(undefined8 *)(param_1 + _DAT_1130911f0),param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482d4d4);
  (*pcVar1)();
}



/* Entry: 10482d4d8; end: 10482d50b;  */

void FUN_10482d4d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10482d50c; end: 10482d50f; -[SCAdInteractiveAreaInsetValue .cxx_destruct] */

void FUN_10482d50c(void)

{
  return;
}



/* Entry: 10482d510; end: 10482d5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482d510(long param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long alStack_50 [2];
  long alStack_40 [2];
  
  lVar6 = param_1;
  FUN_10482d5b4();
  lVar7 = lVar6;
  _objc_allocWithZone();
  bVar5 = param_2 == '\x01';
  plVar3 = alStack_40;
  lVar2 = param_1;
  lVar4 = 0;
  if (!bVar5) {
    lVar2 = 0;
    plVar3 = alStack_50;
    lVar4 = param_1;
  }
  *(bool *)(lVar7 + _DAT_1130911e8) = bVar5;
  plVar1 = (long *)(lVar7 + _DAT_1130911f8);
  *plVar1 = lVar4;
  *(bool *)(plVar1 + 1) = bVar5;
  plVar1 = (long *)(lVar7 + _DAT_1130911f0);
  *plVar1 = lVar2;
  *(bool *)(plVar1 + 1) = !bVar5;
  *plVar3 = lVar7;
  plVar3[1] = lVar6;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482d5b4; end: 10482d5d3;  */

void FUN_10482d5b4(void)

{
  _objc_opt_self(&PTR_PTR_1129da0e0);
  return;
}



/* Entry: 10482d5d4; end: 10482d73b;  */

int FUN_10482d5d4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10482d650;
        goto LAB_10482d634;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10482d634:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10482d650:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10482d73c; end: 10482d77b;  */

void FUN_10482d73c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36784;
  _swift_getWitnessTable(&UNK_10dd36784,&UNK_1107a1cc8);
  puRam0000000113091228 = puVar1;
  return;
}



/* Entry: 10482d77c; end: 10482d827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482d77c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  uVar1 = *param_1;
  FUN_10482d510(uVar1,*(undefined1 *)(param_1 + 1));
  *(undefined8 *)(unaff_x20 + _DAT_113091230) = uVar1;
  uVar1 = param_1[2];
  FUN_10482d510(uVar1,*(undefined1 *)(param_1 + 3));
  *(undefined8 *)(unaff_x20 + _DAT_113091238) = uVar1;
  uVar1 = param_1[4];
  FUN_10482d510(uVar1,*(undefined1 *)(param_1 + 5));
  *(undefined8 *)(unaff_x20 + _DAT_113091240) = uVar1;
  uVar1 = param_1[6];
  FUN_10482d510(uVar1,*(undefined1 *)(param_1 + 7));
  *(undefined8 *)(unaff_x20 + _DAT_113091248) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482d828; end: 10482d8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482d828(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  FUN_10482cbd0();
  __ss6HasherV8_combineyySuF();
  FUN_10482cbd0();
  __ss6HasherV8_combineyySuF();
  FUN_10482cbd0();
  __ss6HasherV8_combineyySuF();
  FUN_10482cbd0();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10482d8bc; end: 10482da3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10482d8bc(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar8 = *(undefined8 *)(lStack_78 + _DAT_113091230);
      uVar2 = 0;
      FUN_10482d5b4();
      auStack_70[0] = uVar8;
      lStack_58 = uVar2;
      _objc_retain(uVar8);
      puVar3 = auStack_70;
      FUN_10482ccb0(puVar3);
      func_0x00010006e7f4(auStack_70);
      auStack_70[0] = *(undefined8 *)(lStack_78 + _DAT_113091238);
      lStack_58 = uVar2;
      _objc_retain();
      puVar4 = auStack_70;
      FUN_10482ccb0(puVar4);
      func_0x00010006e7f4(auStack_70);
      auStack_70[0] = *(undefined8 *)(lStack_78 + _DAT_113091240);
      lStack_58 = uVar2;
      _objc_retain();
      puVar5 = auStack_70;
      FUN_10482ccb0(puVar5);
      func_0x00010006e7f4(auStack_70);
      auStack_70[0] = *(undefined8 *)(lStack_78 + _DAT_113091248);
      lStack_58 = uVar2;
      _objc_retain();
      puVar6 = auStack_70;
      FUN_10482ccb0(puVar6);
      _objc_release(lStack_78);
      func_0x00010006e7f4(auStack_70);
      uVar7 = (uint)puVar3 & (uint)puVar4 & (uint)puVar5 & (uint)puVar6;
      goto LAB_10482da1c;
    }
  }
  uVar7 = 0;
LAB_10482da1c:
  return uVar7 & 1;
}



/* Entry: 10482da3c; end: 10482da4b; -[SCAdInteractiveAreaInsetsValue topInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482da3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091230));
  return;
}



/* Entry: 10482da4c; end: 10482da5b; -[SCAdInteractiveAreaInsetsValue rightInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482da4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091238));
  return;
}



/* Entry: 10482da5c; end: 10482da6b; -[SCAdInteractiveAreaInsetsValue bottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482da5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091240));
  return;
}



/* Entry: 10482da6c; end: 10482da7b; -[SCAdInteractiveAreaInsetsValue leftInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482da6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091248));
  return;
}



/* Entry: 10482da7c; end: 10482db07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482da7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091230) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091238) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091240) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113091248) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482db08; end: 10482dbb7; -[SCAdInteractiveAreaInsetsValue initWithTopInset:rightInset:bottomInset:leftInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482db08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113091230) = param_3;
  *(undefined8 *)(param_1 + _DAT_113091238) = param_4;
  *(undefined8 *)(param_1 + _DAT_113091240) = param_5;
  *(undefined8 *)(param_1 + _DAT_113091248) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 10482dbb8; end: 10482dbd7; -[SCAdInteractiveAreaInsetsValue hash] */

void FUN_10482dbb8(void)

{
  FUN_10482d828();
  return;
}



/* Entry: 10482dbd8; end: 10482dc57; -[SCAdInteractiveAreaInsetsValue isEqual:] */

uint FUN_10482dbd8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10482d8bc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10482dc58; end: 10482dc5b; -[SCAdInteractiveAreaInsetsValue copyWithZone:] */

void FUN_10482dc58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10482dc5c; end: 10482dd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482dc5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x45534e495f504f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45534e495f504f54,0xe900000000000054);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e495f5448474952;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f5448474952,0xeb00000000544553);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x495f4d4f54544f42;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f4d4f54544f42,0xec0000005445534e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x534e495f5446454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534e495f5446454c,0xea00000000005445);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10482dd94; end: 10482dde3; -[SCAdInteractiveAreaInsetsValue encodeWithCoder:] */

void FUN_10482dd94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10482dc5c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10482dde4; end: 10482de13;  */

void FUN_10482dde4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10482de14(param_1);
  return;
}



/* Entry: 10482de14; end: 10482e1ab;  */

undefined8 FUN_10482de14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x20;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x45534e495f504f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45534e495f504f54,0xe900000000000054);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
LAB_10482e13c:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar2 = 0;
    FUN_10482d5b4(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_a8;
    _swift_dynamicCast(plVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_a8;
    if (((ulong)plVar4 & 1) != 0) {
      uVar5 = 0x4e495f5448474952;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f5448474952,0xeb00000000544553);
      lVar6 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar6 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
        _swift_unknownObjectRelease(lVar6);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
LAB_10482e134:
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_10482e13c;
      }
      plVar4 = &lStack_a8;
      _swift_dynamicCast(plVar4,&uStack_80,puVar1 + 8,uVar2,6);
      lVar6 = lStack_a8;
      if (((ulong)plVar4 & 1) != 0) {
        uVar5 = 0x495f4d4f54544f42;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f4d4f54544f42,0xec0000005445534e)
        ;
        lVar7 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar7 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
          _swift_unknownObjectRelease(lVar7);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
LAB_10482e12c:
          _objc_release(param_1);
          param_1 = lVar6;
          goto LAB_10482e134;
        }
        plVar4 = &lStack_a8;
        _swift_dynamicCast(plVar4,&uStack_80,puVar1 + 8,uVar2,6);
        lVar7 = lStack_a8;
        if (((ulong)plVar4 & 1) != 0) {
          uVar5 = 0x534e495f5446454c;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x534e495f5446454c,0xea00000000005445);
          lVar8 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          if (lVar8 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
            _swift_unknownObjectRelease(lVar8);
          }
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            _objc_release(param_1);
            param_1 = lVar7;
            goto LAB_10482e12c;
          }
          plVar4 = &lStack_a8;
          _swift_dynamicCast(plVar4,&uStack_80,puVar1 + 8,uVar2,6);
          if (((ulong)plVar4 & 1) != 0) {
            func_0x00010c054240();
            _objc_release(param_1);
            _objc_release(lStack_a8);
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar3);
            return unaff_x20;
          }
          _objc_release(param_1);
          param_1 = lVar7;
        }
        _objc_release(param_1);
        param_1 = lVar6;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10482e1ac; end: 10482e1d3; -[SCAdInteractiveAreaInsetsValue initWithCoder:] */

void FUN_10482e1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10482de14();
  return;
}



/* Entry: 10482e1d4; end: 10482e203; -[SCAdInteractiveAreaInsetsValue description] */

void FUN_10482e1d4(void)

{
  undefined1 auStack_50 [64];
  
  _objc_retain();
  FUN_10482e2d8(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482e204; end: 10482e27f; -[SCAdInteractiveAreaInsetsValue init] */

void FUN_10482e204(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdInteractiveAreaInsetsValueWrapper.swift",0x35,2,0x61,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e24c);
  (*pcVar1)();
}



/* Entry: 10482e280; end: 10482e2d7; -[SCAdInteractiveAreaInsetsValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482e280(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091230));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091238));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091240));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091248));
  return;
}



/* Entry: 10482e2d8; end: 10482e4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482e2d8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(param_2 + _DAT_113091230);
  if (*(char *)(lVar3 + _DAT_1130911e8) == '\x01') {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f0);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4a4);
      (*pcVar1)();
    }
    uVar4 = 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f8);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4a8);
      (*pcVar1)();
    }
    uVar4 = 0;
  }
  uVar5 = *puVar2;
  lVar3 = *(long *)(param_2 + _DAT_113091238);
  if (*(char *)(lVar3 + _DAT_1130911e8) == '\x01') {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f0);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4ac);
      (*pcVar1)();
    }
    uVar6 = 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f8);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4b0);
      (*pcVar1)();
    }
    uVar6 = 0;
  }
  uVar7 = *puVar2;
  lVar3 = *(long *)(param_2 + _DAT_113091240);
  if (*(char *)(lVar3 + _DAT_1130911e8) == '\x01') {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f0);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4b4);
      (*pcVar1)();
    }
    uVar8 = 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f8);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4b8);
      (*pcVar1)();
    }
    uVar8 = 0;
  }
  uVar9 = *puVar2;
  lVar3 = *(long *)(param_2 + _DAT_113091248);
  if (*(char *)(lVar3 + _DAT_1130911e8) == '\x01') {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f0);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4bc);
      (*pcVar1)();
    }
    uVar10 = 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar3 + _DAT_1130911f8);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10482e4c0);
      (*pcVar1)();
    }
    uVar10 = 0;
  }
  uVar11 = *puVar2;
  _objc_release();
  *param_1 = uVar5;
  *(undefined1 *)(param_1 + 1) = uVar4;
  param_1[2] = uVar7;
  *(undefined1 *)(param_1 + 3) = uVar6;
  param_1[4] = uVar9;
  *(undefined1 *)(param_1 + 5) = uVar8;
  param_1[6] = uVar11;
  *(undefined1 *)(param_1 + 7) = uVar10;
  return;
}



/* Entry: 10482e4c0; end: 10482e4df;  */

void FUN_10482e4c0(void)

{
  _objc_opt_self(&PTR_PTR_1129da1b8);
  return;
}



/* Entry: 10482e4e0; end: 10482e59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10482e4e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      dVar3 = *(double *)(unaff_x20 + _DAT_113091278);
      dVar4 = *(double *)(lStack_68 + _DAT_113091278);
      dVar5 = *(double *)(unaff_x20 + _DAT_113091280);
      dVar6 = *(double *)(lStack_68 + _DAT_113091280);
      _objc_release();
      if (dVar5 != dVar6) {
        return false;
      }
      return dVar3 == dVar4;
    }
  }
  return false;
}



/* Entry: 10482e5a0; end: 10482e5af; -[SCAdInteractiveAreaSwipeAngleConfig leftAngleThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482e5a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091278);
}



/* Entry: 10482e5b0; end: 10482e5c3; -[SCAdInteractiveAreaSwipeAngleConfig rightAngleThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482e5b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091280);
}



/* Entry: 10482e5c4; end: 10482e61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482e5c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091278) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091280) = param_2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482e620; end: 10482e683; -[SCAdInteractiveAreaSwipeAngleConfig initWithLeftAngleThreshold:rightAngleThreshold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482e620(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_113091278) = param_1;
  *(undefined8 *)(param_3 + _DAT_113091280) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482e684; end: 10482e703; -[SCAdInteractiveAreaSwipeAngleConfig hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482e684(long param_1)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_113091278) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_113091278);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_113091280) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_113091280);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10482e704; end: 10482e783; -[SCAdInteractiveAreaSwipeAngleConfig isEqual:] */

uint FUN_10482e704(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10482e4e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10482e784; end: 10482e787; -[SCAdInteractiveAreaSwipeAngleConfig copyWithZone:] */

void FUN_10482e784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10482e788; end: 10482e92f; -[SCAdInteractiveAreaSwipeAngleConfig encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482e788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091278);
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f210e10);
  func_0x00010bf92e80(uVar2,param_3);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091280);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f210e30);
  func_0x00010bf92e80(uVar2,param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10482e930; end: 10482e9fb; -[SCAdInteractiveAreaSwipeAngleConfig initWithCoder:] */

undefined8
FUN_10482e930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f210e10);
  func_0x00010bf66da0(param_4);
  uVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f210e30);
  func_0x00010bf66da0(param_4);
  _objc_release(uVar1);
  func_0x00010c022080(param_1,uVar2,param_2);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 10482e9fc; end: 10482ea17; -[SCAdInteractiveAreaSwipeAngleConfig description] */

void FUN_10482e9fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10482ea18; end: 10482ea93; -[SCAdInteractiveAreaSwipeAngleConfig init] */

void FUN_10482ea18(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdInteractiveAreaSwipeAngleConfigWrapper.swift",0x3a,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10482ea60);
  (*pcVar1)();
}



/* Entry: 10482ea94; end: 10482ea97; -[SCAdInteractiveAreaSwipeAngleConfig .cxx_destruct] */

void FUN_10482ea94(void)

{
  return;
}



/* Entry: 10482ea98; end: 10482eab7;  */

void FUN_10482ea98(void)

{
  _objc_opt_self(&PTR_PTR_1129da2a0);
  return;
}



/* Entry: 10482eab8; end: 10482eabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482eab8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091278) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091280) = param_2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482eabc; end: 10482eacb; -[SCAdTapToPauseInteraction timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482eabc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130912b0);
}



/* Entry: 10482eacc; end: 10482eadb; -[SCAdTapToPauseInteraction type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10482eacc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130912b8);
}



/* Entry: 10482eadc; end: 10482eaeb; -[SCAdTapToPauseInteraction position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482eadc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130912c0));
  return;
}



/* Entry: 10482eaec; end: 10482eb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482eaec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130912b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130912b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130912c0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482eb60; end: 10482ebdf; -[SCAdTapToPauseInteraction initWithTimestampMs:type:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482eb60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130912b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130912b8) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130912c0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}


