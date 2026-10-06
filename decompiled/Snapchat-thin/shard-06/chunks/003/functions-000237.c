/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047d2c5c; end: 1047d2d0f;  */

undefined8 FUN_1047d2c5c(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0x5f50555f454b4157;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f50555f454b4157,0xef455059545f4955);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    func_0x00010c062800();
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047d2d10; end: 1047d2d37; -[SCAdWakeUpUiDecision initWithCoder:] */

void FUN_1047d2d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d2c5c();
  return;
}



/* Entry: 1047d2d38; end: 1047d2d53; -[SCAdWakeUpUiDecision description] */

void FUN_1047d2d38(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d2d54; end: 1047d2dcf; -[SCAdWakeUpUiDecision init] */

void FUN_1047d2d54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdWakeUpUiDecisionWrapper.swift",
             0x2b,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d2d9c);
  (*pcVar1)();
}



/* Entry: 1047d2dd0; end: 1047d2dd3; -[SCAdWakeUpUiDecision .cxx_destruct] */

void FUN_1047d2dd0(void)

{
  return;
}



/* Entry: 1047d2dd4; end: 1047d2df3;  */

void FUN_1047d2dd4(void)

{
  _objc_opt_self(&PTR_PTR_1129d5558);
  return;
}



/* Entry: 1047d2df4; end: 1047d2df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2df4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f860) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2df8; end: 1047d2e27;  */

void FUN_1047d2df8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d34b4(param_1);
  return;
}



/* Entry: 1047d2e28; end: 1047d2fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2e28(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f890));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f898));
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f8a0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f8a8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f8b0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f8b8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d2fac; end: 1047d32c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047d2fac(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar13 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar13,6);
    if (((ulong)plVar5 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f890);
      iVar2 = *(int *)(lStack_88 + _DAT_11308f890);
      iVar3 = *(int *)(unaff_x20 + _DAT_11308f898);
      iVar4 = *(int *)(lStack_88 + _DAT_11308f898);
      lVar10 = *(long *)(unaff_x20 + _DAT_11308f8a0);
      lVar13 = *(long *)(lStack_88 + _DAT_11308f8a0);
      uVar11 = (uint)(lVar10 == 0 && lVar13 == 0);
      if (lVar10 != 0 && lVar13 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar13);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar11 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar13);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11308f8a8);
      lVar13 = *(long *)(lStack_88 + _DAT_11308f8a8);
      uVar12 = (uint)(lVar10 == 0 && lVar13 == 0);
      if (lVar10 != 0 && lVar13 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar13);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar13);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11308f8b0);
      lVar13 = *(long *)(lStack_88 + _DAT_11308f8b0);
      uVar8 = (uint)(lVar10 == 0 && lVar13 == 0);
      if ((lVar10 != 0) && (lVar13 != 0)) {
        func_0x0001002ed07c();
        _objc_retain(lVar13);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar8 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar13);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11308f8b8);
      lVar13 = *(long *)(lStack_88 + _DAT_11308f8b8);
      if (lVar10 == 0) {
        lVar6 = lVar13;
        _objc_retain(lVar13);
        _objc_release(lStack_88);
        if (lVar13 != 0) {
          uVar9 = 0;
          goto LAB_1047d3268;
        }
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
        lVar6 = lStack_88;
        if (lVar13 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar13);
          _objc_retain(lVar10);
          lVar7 = lVar10;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar9 = (uint)lVar7;
          _objc_release(lVar10);
          _objc_release(lVar13);
        }
LAB_1047d3268:
        _objc_release(lVar6);
      }
      if (((iVar1 == iVar2 && iVar3 == iVar4) & uVar11 & uVar12) == 1) {
        uVar8 = uVar8 & uVar9;
        goto LAB_1047d329c;
      }
    }
  }
  uVar8 = 0;
LAB_1047d329c:
  return uVar8 & 1;
}



/* Entry: 1047d32c8; end: 1047d32d7; -[SCAdSpecificationEndCard type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d32c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f890);
}



/* Entry: 1047d32d8; end: 1047d32e7; -[SCAdSpecificationEndCard navigationBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d32d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f898);
}



/* Entry: 1047d32e8; end: 1047d32f7; -[SCAdSpecificationEndCard autoAdvanceDelayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d32e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f8a0));
  return;
}



/* Entry: 1047d32f8; end: 1047d3307; -[SCAdSpecificationEndCard tapToSkipWithinMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d32f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f8a8));
  return;
}



/* Entry: 1047d3308; end: 1047d3317; -[SCAdSpecificationEndCard swipeToSkipWithinMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f8b0));
  return;
}



/* Entry: 1047d3318; end: 1047d3327; -[SCAdSpecificationEndCard oneTapAttachmentOpenAfterMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f8b8));
  return;
}



/* Entry: 1047d3328; end: 1047d33db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f890) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f898) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f8a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f8a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f8b0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308f8b8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d33dc; end: 1047d34b3; -[SCAdSpecificationEndCard initWithType:navigationBehavior:autoAdvanceDelayMs:tapToSkipWithinMs:swipeToSkipWithinMs:oneTapAttachmentOpenAfterMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d33dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f890) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f898) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308f8a0) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308f8a8) = param_6;
  *(undefined8 *)(param_1 + _DAT_11308f8b0) = param_7;
  *(undefined8 *)(param_1 + _DAT_11308f8b8) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1047d34b4; end: 1047d35f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d34b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308f890) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f898) = uVar1;
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f8a0) = puVar2;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f8a8) = puVar2;
  if (*(char *)(param_1 + 7) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f8b0) = puVar2;
  if (*(char *)(param_1 + 9) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f8b8) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d35f8; end: 1047d362b; -[SCAdSpecificationEndCard hash] */

undefined8 FUN_1047d35f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047d2e28();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d362c; end: 1047d36ab; -[SCAdSpecificationEndCard isEqual:] */

uint FUN_1047d362c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d2fac(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d36ac; end: 1047d36af; -[SCAdSpecificationEndCard copyWithZone:] */

void FUN_1047d36ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d36b0; end: 1047d385f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d36b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e590);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20e5b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20e5d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20e5f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f20e610);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047d3860; end: 1047d38af; -[SCAdSpecificationEndCard encodeWithCoder:] */

void FUN_1047d3860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047d36b0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d38b0; end: 1047d38df;  */

void FUN_1047d38b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d38e0(param_1);
  return;
}



/* Entry: 1047d38e0; end: 1047d3ce7;  */

undefined8 FUN_1047d38e0(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x45505954;
  uVar8 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954);
  uVar3 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar2);
  func_0x0001046b9378(uVar3);
  if ((uVar8 & 0xff) != 1) {
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e590);
    uVar3 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    if (uVar3 < 3) {
      uVar2 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20e5b0);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      puVar1 = PTR___sypN_11034f1a8;
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_a8;
        _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
        uVar2 = uStack_a8;
        if ((int)puVar4 == 0) {
          uVar2 = 0;
        }
      }
      uVar5 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20e5d0);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (uVar3 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_a8;
        _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar5,6);
        uVar5 = uStack_a8;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      uVar6 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20e5f0);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (uVar3 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_a8;
        _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar6,6);
        uVar6 = uStack_a8;
        if ((int)puVar4 == 0) {
          uVar6 = 0;
        }
      }
      uVar7 = 0xd000000000000020;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f20e610);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar3 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_a8;
        _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar7,6);
        uVar7 = uStack_a8;
        if ((int)puVar4 == 0) {
          uVar7 = 0;
        }
      }
      func_0x00010c055de0();
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047d3ce8; end: 1047d3d0f; -[SCAdSpecificationEndCard initWithCoder:] */

void FUN_1047d3ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d38e0();
  return;
}



/* Entry: 1047d3d10; end: 1047d3d53; -[SCAdSpecificationEndCard description] */

void FUN_1047d3d10(undefined8 param_1)

{
  undefined1 auStack_70 [80];
  
  _objc_retain();
  FUN_1047d3e28(auStack_70);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d3d54; end: 1047d3dcf; -[SCAdSpecificationEndCard init] */

void FUN_1047d3d54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdSpecificationEndCardWrapper.swift",0x2f,2,0x71,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d3d9c);
  (*pcVar1)();
}



/* Entry: 1047d3dd0; end: 1047d3e27; -[SCAdSpecificationEndCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3dd0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f8a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f8a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f8b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f8b8));
  return;
}



/* Entry: 1047d3e28; end: 1047d3f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3e28(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(param_2 + _DAT_11308f890);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11308f898);
  lVar5 = *(long *)(param_2 + _DAT_11308f8a0);
  bVar1 = lVar5 == 0;
  if (bVar1) {
    lVar5 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar6 = *(long *)(param_2 + _DAT_11308f8a8);
  bVar2 = lVar6 == 0;
  if (bVar2) {
    lVar6 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar7 = *(long *)(param_2 + _DAT_11308f8b0);
  bVar3 = lVar7 == 0;
  if (bVar3) {
    lVar7 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar8 = *(long *)(param_2 + _DAT_11308f8b8);
  bVar4 = lVar8 == 0;
  if (!bVar4) {
    func_0x00010c067fc0();
  }
  *param_1 = uVar9;
  param_1[1] = uVar10;
  param_1[2] = lVar5;
  *(bool *)(param_1 + 3) = bVar1;
  param_1[4] = lVar6;
  *(bool *)(param_1 + 5) = bVar2;
  param_1[6] = lVar7;
  *(bool *)(param_1 + 7) = bVar3;
  param_1[8] = lVar8;
  *(bool *)(param_1 + 9) = bVar4;
  return;
}



/* Entry: 1047d3f3c; end: 1047d3f5b;  */

void FUN_1047d3f3c(void)

{
  _objc_opt_self(&PTR_PTR_1129d5628);
  return;
}



/* Entry: 1047d3f5c; end: 1047d3f6b; -[SCAdStageAnimation initialProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f8e8));
  return;
}



/* Entry: 1047d3f6c; end: 1047d3fbb; -[SCAdStageAnimation stages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3f6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f8f0);
  FUN_1047af8c4(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047d3fbc; end: 1047d401f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d3fbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f8e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f8f0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d4020; end: 1047d40a7; -[SCAdStageAnimation initWithInitialProperties:stages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d4020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = 0;
  FUN_1047af8c4(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  *(undefined8 *)(param_1 + _DAT_11308f8e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f8f0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1047d40a8; end: 1047d40d7;  */

void FUN_1047d40a8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d40d8(param_1);
  return;
}



/* Entry: 1047d40d8; end: 1047d434b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d40d8(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_240 [16];
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined2 uStack_1a0;
  undefined1 uStack_19e;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
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
  undefined2 uStack_80;
  
  _swift_getObjectType();
  uStack_128 = param_1[0xd];
  uStack_130 = param_1[0xc];
  uStack_118 = param_1[0xf];
  uStack_120 = param_1[0xe];
  uStack_110 = *(undefined2 *)(param_1 + 0x10);
  uStack_168 = param_1[5];
  uStack_170 = param_1[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  uStack_148 = param_1[9];
  uStack_150 = param_1[8];
  uStack_138 = param_1[0xb];
  uStack_140 = param_1[10];
  uStack_188 = param_1[1];
  uStack_190 = *param_1;
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uVar3 = 0;
  FUN_1047d62b8();
  _objc_allocWithZone();
  puVar4 = &uStack_190;
  FUN_1047d5528();
  *(undefined8 **)(unaff_x20 + _DAT_11308f8e8) = puVar4;
  lVar8 = param_1[0x11];
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 == 0) {
    func_0x0001047d4a14();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_198 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001046c7220(0,lVar9,0);
    puVar10 = puStack_198;
    lVar5 = 0;
    FUN_1047af8c4();
    puVar4 = (undefined8 *)(lVar8 + 0x30);
    while( true ) {
      lVar9 = lVar9 + -1;
      uVar11 = puVar4[-2];
      uVar12 = puVar4[-1];
      uStack_1e8 = puVar4[7];
      uStack_1f0 = puVar4[6];
      uStack_1d8 = puVar4[9];
      uStack_1e0 = puVar4[8];
      uStack_208 = puVar4[3];
      uStack_210 = puVar4[2];
      uStack_1f8 = puVar4[5];
      uStack_200 = puVar4[4];
      uStack_1b8 = puVar4[0xd];
      uStack_1c0 = puVar4[0xc];
      uStack_1b0 = puVar4[0xe];
      uStack_1c8 = puVar4[0xb];
      uStack_1d0 = puVar4[10];
      uStack_1a0 = (undefined2)((uint)*(undefined4 *)((long)puVar4 + 0x7f) >> 8);
      uStack_19e = (undefined1)((uint)*(undefined4 *)((long)puVar4 + 0x7f) >> 0x18);
      uStack_1a8 = (undefined7)puVar4[0xf];
      uStack_1a1 = (undefined1)((ulong)puVar4[0xf] >> 0x38);
      uStack_218 = puVar4[1];
      uStack_220 = *puVar4;
      lVar8 = lVar5;
      _objc_allocWithZone();
      *(undefined8 *)(lVar8 + _DAT_11308ed98) = uVar11;
      *(undefined8 *)(lVar8 + _DAT_11308eda0) = uVar12;
      iVar2 = (int)&uStack_220;
      FUN_1046c199c();
      if (iVar2 == 1) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        uStack_88 = CONCAT17(uStack_1a1,uStack_1a8);
        uStack_98 = uStack_1b8;
        uStack_a0 = uStack_1c0;
        uStack_90 = uStack_1b0;
        uStack_80 = uStack_1a0;
        uStack_d8 = uStack_1f8;
        uStack_e0 = uStack_200;
        uStack_c8 = uStack_1e8;
        uStack_d0 = uStack_1f0;
        uStack_b8 = uStack_1d8;
        uStack_c0 = uStack_1e0;
        uStack_a8 = uStack_1c8;
        uStack_b0 = uStack_1d0;
        uStack_f8 = uStack_218;
        uStack_100 = uStack_220;
        uStack_e8 = uStack_208;
        uStack_f0 = uStack_210;
        _objc_allocWithZone(uVar3);
        puVar6 = &uStack_100;
        FUN_1047d5528();
      }
      *(undefined8 **)(lVar8 + _DAT_11308eda8) = puVar6;
      plVar7 = &lStack_230;
      lStack_230 = lVar8;
      lStack_228 = lVar5;
      _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puStack_198 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        func_0x0001046c7220(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      puVar10 = puStack_198;
      *(ulong *)(puStack_198 + 0x10) = uVar1 + 1;
      *(long **)(puStack_198 + uVar1 * 8 + 0x20) = plVar7;
      if (lVar9 == 0) break;
      puVar4 = puVar4 + 0x13;
    }
    func_0x0001047d4a14(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f8f0) = puVar10;
  _objc_msgSendSuper2(auStack_240,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d434c; end: 1047d44ff; -[SCAdStageAnimation hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d434c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  _objc_retain();
  FUN_1047d4d58();
  __ss6HasherV8_combineyySuF();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f8f0);
  uVar1 = 0;
  FUN_1047af8c4(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d4500; end: 1047d457f; -[SCAdStageAnimation isEqual:] */

uint FUN_1047d4500(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047d43fc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d4580; end: 1047d4583; -[SCAdStageAnimation copyWithZone:] */

void FUN_1047d4580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d4584; end: 1047d4643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d4584(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20e670);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f8f0);
  uVar1 = 0;
  FUN_1047af8c4(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x534547415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534547415453,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047d4644; end: 1047d4693; -[SCAdStageAnimation encodeWithCoder:] */

void FUN_1047d4644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047d4584(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d4694; end: 1047d46c3;  */

void FUN_1047d4694(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d46c4(param_1);
  return;
}



/* Entry: 1047d46c4; end: 1047d48eb;  */

undefined8 FUN_1047d46c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20e670);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_1047d4894:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_1047d62b8(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x534547415453;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534547415453,0xe600000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1047d4894;
      }
      uVar2 = 0x11308f8f8;
      func_0x0001000285a8(0x11308f8f8,&UNK_10dd35978);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        uVar2 = 0;
        FUN_1047af8c4(0);
        lVar5 = lStack_88;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_88,uVar2);
        _swift_bridgeObjectRelease(lStack_88);
        func_0x00010c01dd00();
        _objc_release(lVar5);
        _objc_release(param_1);
        _objc_release(lVar3);
        return unaff_x20;
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



/* Entry: 1047d48ec; end: 1047d4913; -[SCAdStageAnimation initWithCoder:] */

void FUN_1047d48ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d46c4();
  return;
}



/* Entry: 1047d4914; end: 1047d495f; -[SCAdStageAnimation description] */

void FUN_1047d4914(undefined8 param_1)

{
  undefined1 auStack_b0 [144];
  
  _objc_retain();
  FUN_1047d4a48(auStack_b0);
  _objc_release(param_1);
  func_0x0001047d4a14(auStack_b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d4960; end: 1047d49db; -[SCAdStageAnimation init] */

void FUN_1047d4960(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdStageAnimationWrapper.swift",
             0x29,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d49a8);
  (*pcVar1)();
}



/* Entry: 1047d49dc; end: 1047d4a47; -[SCAdStageAnimation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d49dc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f8e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f8f0));
  return;
}



/* Entry: 1047d4a48; end: 1047d4d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d4a48(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined3 uStack_240;
  undefined5 uStack_23d;
  undefined7 uStack_238;
  undefined4 uStack_231;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined2 uStack_190;
  undefined1 uStack_18e;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_11308f8e8);
  _objc_retain(uVar3);
  FUN_1047d5bac(&uStack_180);
  _objc_release(uVar3);
  uVar6 = *(ulong *)(param_2 + _DAT_11308f8f0);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001046c7254(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1047d4d08);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      puVar1 = puStack_188;
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar8;
        FUN_1046c4848(uVar8,uVar6);
      }
      uStack_220 = *(undefined8 *)(uVar4 + _DAT_11308ed98);
      uStack_218 = *(undefined8 *)(uVar4 + _DAT_11308eda0);
      lVar5 = *(long *)(uVar4 + _DAT_11308eda8);
      if (lVar5 == 0) {
        _objc_release();
        func_0x00010155b578(&uStack_2c0);
        uStack_1a8 = uStack_258;
        uStack_1b0 = uStack_260;
        uStack_198 = uStack_248;
        uStack_1a0 = uStack_250;
        uStack_191 = (undefined1)_uStack_241;
        uStack_190 = (undefined2)((uint)_uStack_241 >> 8);
        uStack_18e = (undefined1)((uint)_uStack_241 >> 0x18);
        uStack_1e8 = uStack_298;
        uStack_1f0 = uStack_2a0;
        uStack_1d8 = uStack_288;
        uStack_1e0 = uStack_290;
        uStack_1c8 = uStack_278;
        uStack_1d0 = uStack_280;
        uStack_1b8 = uStack_268;
        uStack_1c0 = uStack_270;
        uStack_208 = uStack_2b8;
        uStack_210 = uStack_2c0;
        uStack_1f8 = uStack_2a8;
        uStack_200 = uStack_2b0;
      }
      else {
        _objc_retain(lVar5);
        FUN_1047d5bac(&uStack_f8);
        _objc_release(lVar5);
        uStack_1a8 = uStack_90;
        uStack_1b0 = uStack_98;
        uStack_198 = (undefined7)uStack_80;
        uStack_191 = (undefined1)((ulong)uStack_80 >> 0x38);
        uStack_1a0 = uStack_88;
        uStack_190 = uStack_78;
        uStack_1e8 = uStack_d0;
        uStack_1f0 = uStack_d8;
        uStack_1d8 = uStack_c0;
        uStack_1e0 = uStack_c8;
        uStack_1c8 = uStack_b0;
        uStack_1d0 = uStack_b8;
        uStack_1b8 = uStack_a0;
        uStack_1c0 = uStack_a8;
        uStack_208 = uStack_f0;
        uStack_210 = uStack_f8;
        uStack_1f8 = uStack_e0;
        uStack_200 = uStack_e8;
        func_0x00010155b77c(&uStack_210);
        _objc_release(uVar4);
      }
      uStack_278 = uStack_1d8;
      uStack_280 = uStack_1e0;
      uStack_268 = uStack_1c8;
      uStack_270 = uStack_1d0;
      uStack_288 = uStack_1e8;
      uStack_290 = uStack_1f0;
      uStack_2a8 = uStack_208;
      uStack_2b0 = uStack_210;
      uStack_298 = uStack_1f8;
      uStack_2a0 = uStack_200;
      uStack_248 = (undefined7)uStack_1a8;
      uStack_241 = (undefined1)((ulong)uStack_1a8 >> 0x38);
      uStack_250 = uStack_1b0;
      uStack_238 = uStack_198;
      uStack_231 = CONCAT31((int3)(CONCAT13(uStack_18e,CONCAT21(uStack_190,uStack_191)) >> 8),
                            uStack_191);
      uStack_240 = (undefined3)uStack_1a0;
      uStack_23d = (undefined5)((ulong)uStack_1a0 >> 0x18);
      uStack_258 = uStack_1b8;
      uStack_260 = uStack_1c0;
      uVar4 = *(ulong *)(puVar1 + 0x10);
      uStack_2b8 = uStack_218;
      uStack_2c0 = uStack_220;
      puStack_188 = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
        func_0x0001046c7254(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puStack_188 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x28) = uStack_2b8;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x20) = uStack_2c0;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x38) = uStack_2a8;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x30) = uStack_2b0;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x68) = uStack_278;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x60) = uStack_280;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x78) = uStack_268;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x70) = uStack_270;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x48) = uStack_298;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x40) = uStack_2a0;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x58) = uStack_288;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x50) = uStack_290;
      *(undefined4 *)(puStack_188 + uVar4 * 0x98 + 0xaf) = uStack_231;
      *(ulong *)(puStack_188 + uVar4 * 0x98 + 0x98) = CONCAT17(uStack_241,uStack_248);
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x90) = uStack_250;
      *(ulong *)(puStack_188 + uVar4 * 0x98 + 0xa8) = CONCAT17((undefined1)uStack_231,uStack_238);
      *(ulong *)(puStack_188 + uVar4 * 0x98 + 0xa0) = CONCAT53(uStack_23d,uStack_240);
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x88) = uStack_258;
      *(undefined8 *)(puStack_188 + uVar4 * 0x98 + 0x80) = uStack_260;
    } while (uVar7 != uVar8);
  }
  param_1[0xd] = uStack_118;
  param_1[0xc] = uStack_120;
  param_1[0xf] = uStack_108;
  param_1[0xe] = uStack_110;
  param_1[5] = uStack_158;
  param_1[4] = uStack_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[9] = uStack_138;
  param_1[8] = uStack_140;
  param_1[0xb] = uStack_128;
  param_1[10] = uStack_130;
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[3] = uStack_168;
  param_1[2] = uStack_170;
  param_1[0x10] = uStack_100;
  param_1[0x11] = puStack_188;
  return;
}



/* Entry: 1047d4d08; end: 1047d4d27;  */

void FUN_1047d4d08(void)

{
  _objc_opt_self(&PTR_PTR_1129d5720);
  return;
}



/* Entry: 1047d4d28; end: 1047d4d57;  */

void FUN_1047d4d28(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d5528(param_1);
  return;
}



/* Entry: 1047d4d58; end: 1047d4fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d4d58(void)

{
  double dVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308f928);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308f930);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308f938);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308f940);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_d0);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef48) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef48);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef50) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef50);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef58) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef58);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_11308ef60) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_11308ef60);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308f948);
  if (lVar2 == 0) {
    lVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308f950) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047c0e7c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d4fdc; end: 1047d532b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047d4fdc(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lStack_88;
  long alStack_80 [4];
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,alStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11308f928);
      lVar9 = *(long *)(lStack_88 + _DAT_11308f928);
      uVar7 = (uint)(lVar6 == 0 && lVar9 == 0);
      if (lVar6 != 0 && lVar9 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar3 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar7 = (uint)lVar3;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11308f930);
      lVar9 = *(long *)(lStack_88 + _DAT_11308f930);
      uVar8 = (uint)(lVar6 == 0 && lVar9 == 0);
      if (lVar6 != 0 && lVar9 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar3 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar8 = (uint)lVar3;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11308f938);
      lVar9 = *(long *)(lStack_88 + _DAT_11308f938);
      uVar10 = (uint)(lVar6 == 0 && lVar9 == 0);
      if ((lVar6 != 0) && (lVar9 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar3 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar10 = (uint)lVar3;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      if (*(long *)(unaff_x20 + _DAT_11308f940) == 0) {
        uVar11 = (uint)(*(long *)(lStack_88 + _DAT_11308f940) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11308f940);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_1047b3ccc();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = lVar6;
        _objc_retain(lVar9);
        uVar11 = 0;
        FUN_1047b37d0();
        func_0x00010006e7f4(alStack_80);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11308f948);
      lVar9 = *(long *)(lStack_88 + _DAT_11308f948);
      uVar5 = (uint)(lVar6 == 0 && lVar9 == 0);
      if ((lVar6 != 0) && (lVar9 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain(lVar6);
        lVar3 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar5 = (uint)lVar3;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      if (*(long *)(unaff_x20 + _DAT_11308f950) == 0) {
        lVar6 = *(long *)(lStack_88 + _DAT_11308f950);
        lVar9 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_88);
        if (lVar6 == 0) {
          uVar1 = 1;
        }
        else {
          _objc_release(lVar9);
          uVar1 = 0;
        }
      }
      else {
        lVar9 = *(long *)(lStack_88 + _DAT_11308f950);
        if (lVar9 == 0) {
          uVar4 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar4 = 0;
          FUN_1047c15c8();
        }
        alStack_80[0] = lVar9;
        alStack_80[3] = uVar4;
        _objc_retain(lVar9);
        plVar2 = alStack_80;
        FUN_1047c0f48(plVar2);
        uVar1 = (uint)plVar2;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      if ((uVar7 & uVar8 & uVar10 & uVar11 & 1) != 0) {
        uVar5 = uVar5 & uVar1;
        goto LAB_1047d5300;
      }
    }
  }
  uVar5 = 0;
LAB_1047d5300:
  return uVar5 & 1;
}



/* Entry: 1047d532c; end: 1047d533b; -[SCAdStageAnimationProperties width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d532c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f928));
  return;
}



/* Entry: 1047d533c; end: 1047d534b; -[SCAdStageAnimationProperties height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d533c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f930));
  return;
}



/* Entry: 1047d534c; end: 1047d535b; -[SCAdStageAnimationProperties opacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d534c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f938));
  return;
}



/* Entry: 1047d535c; end: 1047d536b; -[SCAdStageAnimationProperties bgColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d535c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f940));
  return;
}



/* Entry: 1047d536c; end: 1047d537b; -[SCAdStageAnimationProperties translationY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d536c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f948));
  return;
}



/* Entry: 1047d537c; end: 1047d538b; -[SCAdStageAnimationProperties shimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d537c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f950));
  return;
}



/* Entry: 1047d538c; end: 1047d543f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d538c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f928) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f930) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f938) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f940) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f948) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308f950) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d5440; end: 1047d5527; -[SCAdStageAnimationProperties initWithWidth:height:opacity:bgColor:translationY:shimmer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d5440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f928) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f930) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308f938) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308f940) = param_6;
  *(undefined8 *)(param_1 + _DAT_11308f948) = param_7;
  *(undefined8 *)(param_1 + _DAT_11308f950) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1047d5528; end: 1047d574b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d5528(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_90;
  long lStack_88;
  
  plVar4 = &lStack_90;
  _swift_getObjectType();
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar8 = *param_1;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar8);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f928) = puVar3;
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar8 = param_1[2];
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar8);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f930) = puVar3;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar8 = param_1[4];
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar8);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f938) = puVar3;
  if (*(char *)(param_1 + 10) == '\x01') {
    plVar4 = (long *)0x0;
  }
  else {
    uVar7 = param_1[8];
    uVar8 = param_1[9];
    uVar10 = param_1[6];
    uVar9 = param_1[7];
    lVar5 = 0;
    FUN_1047b3ccc();
    lVar6 = lVar5;
    _objc_allocWithZone();
    *(undefined8 *)(lVar6 + _DAT_11308ef48) = uVar10;
    *(undefined8 *)(lVar6 + _DAT_11308ef50) = uVar9;
    *(undefined8 *)(lVar6 + _DAT_11308ef58) = uVar7;
    *(undefined8 *)(lVar6 + _DAT_11308ef60) = uVar8;
    lStack_90 = lVar6;
    lStack_88 = lVar5;
    _objc_msgSendSuper2(&lStack_90,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11308f940) = plVar4;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar8 = param_1[0xb];
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar8);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f948) = puVar3;
  if (*(char *)((long)param_1 + 0x81) == '\x01') {
    uVar7 = 0;
  }
  else {
    uVar9 = param_1[0xf];
    uVar7 = param_1[0xd];
    uVar1 = *(undefined1 *)(param_1 + 0xe);
    uVar2 = *(undefined1 *)(param_1 + 0x10);
    uVar8 = 0;
    FUN_1047c15c8(0);
    _objc_allocWithZone();
    FUN_1047c0d74(uVar7,uVar1,uVar9,uVar2,uVar8);
  }
  *(undefined8 *)(unaff_x20 + _DAT_11308f950) = uVar7;
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d574c; end: 1047d577f; -[SCAdStageAnimationProperties hash] */

undefined8 FUN_1047d574c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047d4d58();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d5780; end: 1047d57ff; -[SCAdStageAnimationProperties isEqual:] */

uint FUN_1047d5780(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d4fdc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d5800; end: 1047d5803; -[SCAdStageAnimationProperties copyWithZone:] */

void FUN_1047d5800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d5804; end: 1047d59a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d5804(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4854444957,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544847494548,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5954494341504f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5954494341504f,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x524f4c4f435f4742;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f4c4f435f4742,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x54414c534e415254;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54414c534e415254,0xed0000595f4e4f49);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x52454d4d494853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52454d4d494853,0xe700000000000000);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047d59a8; end: 1047d59f7; -[SCAdStageAnimationProperties encodeWithCoder:] */

void FUN_1047d59a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047d5804(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d59f8; end: 1047d5a37;  */

undefined8 FUN_1047d59f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047d5e08(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d5a38; end: 1047d5a73; -[SCAdStageAnimationProperties initWithCoder:] */

undefined8 FUN_1047d5a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047d5e08();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047d5a74; end: 1047d5ab7; -[SCAdStageAnimationProperties description] */

void FUN_1047d5a74(undefined8 param_1)

{
  undefined1 auStack_a8 [136];
  
  _objc_retain();
  FUN_1047d5bac(auStack_a8);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d5ab8; end: 1047d5b33; -[SCAdStageAnimationProperties init] */

void FUN_1047d5ab8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdStageAnimationPropertiesWrapper.swift",0x33,2,0x73,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d5b00);
  (*pcVar1)();
}



/* Entry: 1047d5b34; end: 1047d5bab; -[SCAdStageAnimationProperties .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d5b34(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f928));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f930));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f938));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f940));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f948));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f950));
  return;
}



/* Entry: 1047d5bac; end: 1047d5e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d5bac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar15 = 0;
  bVar1 = *(long *)(param_3 + _DAT_11308f928) == 0;
  if (bVar1) {
    uVar16 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar16 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_11308f930) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar15 = param_2;
  }
  bVar3 = *(long *)(param_3 + _DAT_11308f938) == 0;
  if (bVar3) {
    uVar17 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar17 = param_2;
  }
  lVar6 = *(long *)(param_3 + _DAT_11308f940);
  if (lVar6 == 0) {
    uVar9 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar6 + _DAT_11308ef48);
    uVar13 = *(undefined8 *)(lVar6 + _DAT_11308ef50);
    uVar14 = *(undefined8 *)(lVar6 + _DAT_11308ef58);
    uVar9 = *(undefined8 *)(lVar6 + _DAT_11308ef60);
  }
  uVar19 = 0;
  bVar4 = *(long *)(param_3 + _DAT_11308f948) == 0;
  if (bVar4) {
    uVar18 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar18 = param_2;
  }
  lVar7 = *(long *)(param_3 + _DAT_11308f950);
  if (lVar7 == 0) {
    uVar10 = 0;
    bVar11 = false;
    lVar8 = 0;
    uVar5 = 1;
  }
  else {
    lVar8 = *(long *)(lVar7 + _DAT_11308f1a0);
    if (lVar8 == 0) {
      _objc_retain(lVar7);
    }
    else {
      _objc_retain(lVar7);
      func_0x00010bf885a0(lVar8);
      uVar19 = param_2;
    }
    uVar10 = (ulong)(lVar8 == 0);
    lVar8 = *(long *)(lVar7 + _DAT_11308f1a8);
    bVar11 = lVar8 == 0;
    if (bVar11) {
      lVar8 = 0;
    }
    else {
      func_0x00010c067fc0();
    }
    _objc_release(lVar7);
    uVar5 = 0;
  }
  *param_1 = uVar16;
  *(bool *)(param_1 + 1) = bVar1;
  param_1[2] = uVar15;
  *(bool *)(param_1 + 3) = bVar2;
  param_1[4] = uVar17;
  *(bool *)(param_1 + 5) = bVar3;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  param_1[8] = uVar14;
  param_1[9] = uVar9;
  *(bool *)(param_1 + 10) = lVar6 == 0;
  param_1[0xb] = uVar18;
  *(bool *)(param_1 + 0xc) = bVar4;
  param_1[0xd] = uVar19;
  param_1[0xe] = uVar10;
  param_1[0xf] = lVar8;
  *(bool *)(param_1 + 0x10) = bVar11;
  *(undefined1 *)((long)param_1 + 0x81) = uVar5;
  return;
}



/* Entry: 1047d5e08; end: 1047d62b7;  */

undefined8 FUN_1047d5e08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4854444957,0xe500000000000000);
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uVar2 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0x544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544847494548,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
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
    func_0x00010006e7f4(&uStack_80);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar5,6);
    uVar5 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0x5954494341504f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5954494341504f,0xe700000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
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
    func_0x00010006e7f4(&uStack_80);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar6,6);
    uVar6 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0x524f4c4f435f4742;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f4c4f435f4742,0xe800000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
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
    func_0x00010006e7f4(&uStack_80);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    FUN_1047b3ccc(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar7,6);
    uVar7 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0x54414c534e415254;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54414c534e415254,0xed0000595f4e4f49);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
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
    func_0x00010006e7f4(&uStack_80);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar8,6);
    uVar8 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar8 = 0;
    }
  }
  uVar9 = 0x52454d4d494853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52454d4d494853,0xe700000000000000);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (param_1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    FUN_1047c15c8(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar9,6);
    uVar9 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
    }
  }
  func_0x00010c063140();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  return unaff_x20;
}



/* Entry: 1047d62b8; end: 1047d62d7;  */

void FUN_1047d62b8(void)

{
  _objc_opt_self(&PTR_PTR_1129d57f8);
  return;
}



/* Entry: 1047d62d8; end: 1047d6373; -[SCAdMediaAdToLens lensSnapcode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d62d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f980);
  FUN_1047d7574(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047d6374; end: 1047d63df; -[SCAdMediaAdToLens initWithLensSnapcode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6374(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_1047d7574(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  *(undefined8 *)(param_1 + _DAT_11308f980) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d63e0; end: 1047d640f;  */

void FUN_1047d63e0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d6410(param_1);
  return;
}



/* Entry: 1047d6410; end: 1047d659f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6410(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _swift_getObjectType();
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001046c7270(0,lVar12,0);
    puVar13 = puStack_68;
    lVar8 = 0;
    FUN_1047d7574();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar2 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar3 = puVar11[-1];
      uVar6 = *puVar11;
      lVar9 = lVar8;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar9 + _DAT_11308f9b8);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(lVar9 + _DAT_11308f9c0);
      *puVar1 = uVar3;
      puVar1[1] = uVar6;
      puVar7 = PTR_s_init_1125d9248;
      lStack_78 = lVar9;
      lStack_70 = lVar8;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      plVar10 = &lStack_78;
      _objc_msgSendSuper2(plVar10,puVar7);
      uVar4 = *(ulong *)(puVar13 + 0x10);
      puStack_68 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
        func_0x0001046c7270(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
      }
      puVar13 = puStack_68;
      puVar11 = puVar11 + 4;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(long **)(puStack_68 + uVar4 * 8 + 0x20) = plVar10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f980) = puVar13;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d65a0; end: 1047d66fb; -[SCAdMediaAdToLens hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d65a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f980);
  uVar1 = 0;
  FUN_1047d7574(0);
  _objc_retain(param_1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d66fc; end: 1047d677b; -[SCAdMediaAdToLens isEqual:] */

uint FUN_1047d66fc(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047d663c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d677c; end: 1047d677f; -[SCAdMediaAdToLens copyWithZone:] */

void FUN_1047d677c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d6780; end: 1047d683b; -[SCAdMediaAdToLens encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f980);
  uVar1 = 0;
  FUN_1047d7574(0);
  _objc_retain(param_3);
  _objc_retain(param_1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x414e535f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e535f534e454c,0xed000045444f4350);
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d683c; end: 1047d686b;  */

void FUN_1047d683c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d686c(param_1);
  return;
}



/* Entry: 1047d686c; end: 1047d69d3;  */

undefined8 FUN_1047d686c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0x414e535f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e535f534e454c,0xed000045444f4350);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0x11308f988;
    func_0x0001000285a8(0x11308f988,&UNK_10dd359c8);
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = 0;
      FUN_1047d7574(0);
      uVar1 = uStack_78;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_78,uVar4);
      _swift_bridgeObjectRelease(uStack_78);
      func_0x00010c025880();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047d69d4; end: 1047d69fb; -[SCAdMediaAdToLens initWithCoder:] */

void FUN_1047d69d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d686c();
  return;
}



/* Entry: 1047d69fc; end: 1047d6a37; -[SCAdMediaAdToLens description] */

void FUN_1047d69fc(undefined8 param_1)

{
  _objc_retain();
  FUN_1047d6ac4();
  _swift_bridgeObjectRelease();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d6a38; end: 1047d6ab3; -[SCAdMediaAdToLens init] */

void FUN_1047d6a38(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaAdToLensWrapper.swift",
             0x28,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d6a80);
  (*pcVar1)();
}



/* Entry: 1047d6ab4; end: 1047d6ac3; -[SCAdMediaAdToLens .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f980));
  return;
}



/* Entry: 1047d6ac4; end: 1047d6c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1047d6ac4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar6 = *(ulong *)(param_1 + _DAT_11308f980);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001046c72a4(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1047d6c34);
      (*pcVar4)();
    }
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar5 = uVar8;
        func_0x000102d030d0(uVar8,uVar6);
      }
      puVar1 = (undefined8 *)(uVar5 + _DAT_11308f9b8);
      puVar2 = (undefined8 *)(uVar5 + _DAT_11308f9c0);
      uVar13 = puVar1[1];
      uVar12 = *puVar1;
      uVar9 = puVar1[1];
      uVar11 = puVar2[1];
      uVar10 = *puVar2;
      _swift_bridgeObjectRetain(puVar2[1]);
      _swift_bridgeObjectRetain(uVar9);
      _objc_release(uVar5);
      uVar5 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
        func_0x0001046c72a4(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar3 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar3 + uVar5 * 0x20 + 0x28) = uVar13;
      *(undefined8 *)(puVar3 + uVar5 * 0x20 + 0x20) = uVar12;
      *(undefined8 *)(puVar3 + uVar5 * 0x20 + 0x38) = uVar11;
      *(undefined8 *)(puVar3 + uVar5 * 0x20 + 0x30) = uVar10;
    } while (uVar7 != uVar8);
  }
  return puVar3;
}



/* Entry: 1047d6c34; end: 1047d6c53;  */

void FUN_1047d6c34(void)

{
  _objc_opt_self(&PTR_PTR_1129d58f0);
  return;
}



/* Entry: 1047d6c54; end: 1047d6c5f; -[SCAdMediaSnapcodeInfo scancodeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6c54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f9b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f9b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d6c60; end: 1047d6c6b; -[SCAdMediaSnapcodeInfo scancodeVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6c60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f9c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f9c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d6c6c; end: 1047d6cc3;  */

void FUN_1047d6c6c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047d6cc4; end: 1047d6cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d6cc8; end: 1047d6d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f9c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d6d44; end: 1047d6def; -[SCAdMediaSnapcodeInfo initWithScancodeId:scancodeVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6d44(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11308f9b8);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11308f9c0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d6df0; end: 1047d6e23; -[SCAdMediaSnapcodeInfo hash] */

undefined8 FUN_1047d6df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047d6e24();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047d6e24; end: 1047d7053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d6e24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f9b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f9b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f9c0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f9c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}


