/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104271880; end: 1042718d7;  */

void FUN_104271880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_1042718d8(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1042718d8; end: 10427199f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042718d8(undefined8 param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113069ee0) = puVar1;
  if (param_4 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113069ee8) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042719a0; end: 1042719a3; -[SCAdEngagementSignal copyWithZone:] */

void FUN_1042719a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042719a4; end: 1042719db; -[SCAdEngagementSignal description] */

void FUN_1042719a4(undefined8 param_1)

{
  _objc_retain();
  FUN_104271a90();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042719dc; end: 104271a57; -[SCAdEngagementSignal init] */

void FUN_1042719dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdEngagementSignalWrapper.swift",0x2e,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104271a24);
  (*pcVar1)();
}



/* Entry: 104271a58; end: 104271a8f; -[SCAdEngagementSignal .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271a58(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069ee0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113069ee8));
  return;
}



/* Entry: 104271a90; end: 104271b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104271a90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113069ee0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  if (*(long *)(param_1 + _DAT_113069ee8) != 0) {
    func_0x00010c067fc0();
  }
  return lVar1;
}



/* Entry: 104271b0c; end: 104271b2b;  */

void FUN_104271b0c(void)

{
  _objc_opt_self(&PTR_PTR_112991748);
  return;
}



/* Entry: 104271b2c; end: 104271b3b; -[SCAdRankingSessionDepth totalContentSnapViewCountUntilLastAdRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104271b2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069f18);
}



/* Entry: 104271b3c; end: 104271b4b; -[SCAdRankingSessionDepth totalAdSnapViewCountUntilLastAdRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104271b3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069f20);
}



/* Entry: 104271b4c; end: 104271b5b; -[SCAdRankingSessionDepth totalContentSnapViewCountUntilSessionClose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069f28));
  return;
}



/* Entry: 104271b5c; end: 104271b6b; -[SCAdRankingSessionDepth totalAdSnapViewCountUntilSessionClose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069f30));
  return;
}



/* Entry: 104271b6c; end: 104271bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069f18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113069f20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113069f28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113069f30) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104271bf8; end: 104271c97; -[SCAdRankingSessionDepth initWithTotalContentSnapViewCountUntilLastAdRequest:totalAdSnapViewCountUntilLastAdRequest:totalContentSnapViewCountUntilSessionClose:totalAdSnapViewCountUntilSessionClose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113069f18) = param_3;
  *(undefined8 *)(param_1 + _DAT_113069f20) = param_4;
  *(undefined8 *)(param_1 + _DAT_113069f28) = param_5;
  *(undefined8 *)(param_1 + _DAT_113069f30) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104271c98; end: 104271cc7;  */

void FUN_104271c98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104271cc8(param_1);
  return;
}



/* Entry: 104271cc8; end: 104271da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271cc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113069f18) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113069f20) = uVar1;
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113069f28) = puVar2;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113069f30) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104271da4; end: 104271dd7; -[SCAdRankingSessionDepth hash] */

undefined8 FUN_104271da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104271dd8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104271dd8; end: 104271ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271dd8(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069f18));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069f20));
  lVar1 = *(long *)(unaff_x20 + _DAT_113069f28);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113069f30);
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



/* Entry: 104271ecc; end: 1042720a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104271ecc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_113069f18);
      lVar10 = *(long *)(lStack_88 + _DAT_113069f18);
      lVar11 = *(long *)(unaff_x20 + _DAT_113069f20);
      lVar12 = *(long *)(lStack_88 + _DAT_113069f20);
      lVar6 = *(long *)(unaff_x20 + _DAT_113069f28);
      lVar8 = *(long *)(lStack_88 + _DAT_113069f28);
      uVar7 = (uint)(lVar6 == 0 && lVar8 == 0);
      if (lVar6 != 0 && lVar8 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar7 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_113069f30);
      lVar8 = *(long *)(lStack_88 + _DAT_113069f30);
      if (lVar6 == 0) {
        lVar2 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_88);
        if (lVar8 != 0) {
          uVar5 = 0;
          goto LAB_104272078;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_88;
        if (lVar8 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar8);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar8);
        }
LAB_104272078:
        _objc_release(lVar2);
      }
      uVar4 = 0;
      if ((lVar9 == lVar10) && (lVar11 == lVar12)) {
        uVar4 = uVar7 & uVar5;
      }
      goto LAB_104272034;
    }
  }
  uVar4 = 0;
LAB_104272034:
  return uVar4 & 1;
}



/* Entry: 1042720a4; end: 104272123; -[SCAdRankingSessionDepth isEqual:] */

uint FUN_1042720a4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104271ecc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104272124; end: 104272127; -[SCAdRankingSessionDepth copyWithZone:] */

void FUN_104272124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104272128; end: 10427216b; -[SCAdRankingSessionDepth description] */

void FUN_104272128(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  _objc_retain();
  FUN_104272220(auStack_50);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427216c; end: 1042721e7; -[SCAdRankingSessionDepth init] */

void FUN_10427216c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdRankingSessionDepthWrapper.swift",0x31,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042721b4);
  (*pcVar1)();
}



/* Entry: 1042721e8; end: 10427221f; -[SCAdRankingSessionDepth .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042721e8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069f28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113069f30));
  return;
}



/* Entry: 104272220; end: 1042722c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104272220(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_113069f18);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113069f20);
  lVar3 = *(long *)(param_2 + _DAT_113069f28);
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar4 = *(long *)(param_2 + _DAT_113069f30);
  bVar2 = lVar4 == 0;
  if (!bVar2) {
    func_0x00010c067fc0();
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = lVar3;
  *(bool *)(param_1 + 3) = bVar1;
  param_1[4] = lVar4;
  *(bool *)(param_1 + 5) = bVar2;
  return;
}



/* Entry: 1042722c4; end: 1042722e3;  */

void FUN_1042722c4(void)

{
  _objc_opt_self(&PTR_PTR_112991818);
  return;
}



/* Entry: 1042722e4; end: 10427232f; -[SCAdRankingSnapLevelInfo snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042722e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113069f60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113069f60))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104272330; end: 10427233f; -[SCAdRankingSnapLevelInfo isAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104272330(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113069f68);
}



/* Entry: 104272340; end: 10427234f; -[SCAdRankingSnapLevelInfo snapViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104272340(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069f70);
}



/* Entry: 104272350; end: 10427235f; -[SCAdRankingSnapLevelInfo topSnapViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104272350(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069f78);
}



/* Entry: 104272360; end: 10427236f; -[SCAdRankingSnapLevelInfo bottomSnapViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104272360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069f80);
}



/* Entry: 104272370; end: 10427237f; -[SCAdRankingSnapLevelInfo mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104272370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069f88);
}



/* Entry: 104272380; end: 10427238f; -[SCAdRankingSnapLevelInfo isNewSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104272380(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113069f90);
}



/* Entry: 104272390; end: 10427239f; -[SCAdRankingSnapLevelInfo isSwiped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104272390(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113069f98);
}



/* Entry: 1042723a0; end: 1042723ab; -[SCAdRankingSnapLevelInfo inventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042723a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113069fa0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113069fa0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042723ac; end: 1042723bb; -[SCAdRankingSnapLevelInfo inventorySubtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042723ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069fa8);
}



/* Entry: 1042723bc; end: 1042723cb; -[SCAdRankingSnapLevelInfo adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042723bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069fb0);
}



/* Entry: 1042723cc; end: 1042723db; -[SCAdRankingSnapLevelInfo preferredAttachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042723cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069fb8);
}



/* Entry: 1042723dc; end: 1042723eb; -[SCAdRankingSnapLevelInfo actualAttachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042723dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069fc0);
}



/* Entry: 1042723ec; end: 1042723fb; -[SCAdRankingSnapLevelInfo adAttachmentTriggerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042723ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069fc8);
}



/* Entry: 1042723fc; end: 10427240b; -[SCAdRankingSnapLevelInfo tapAttachmentSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042723fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069fd0);
}



/* Entry: 10427240c; end: 104272417; -[SCAdRankingSnapLevelInfo exitMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427240c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113069fd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113069fd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104272418; end: 10427246f;  */

void FUN_104272418(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104272470; end: 10427247f; -[SCAdRankingSnapLevelInfo isHammerTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104272470(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113069fe0);
}



/* Entry: 104272480; end: 10427248f; -[SCAdRankingSnapLevelInfo wasLiked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104272480(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113069fe8);
}



/* Entry: 104272490; end: 10427249f; -[SCAdRankingSnapLevelInfo storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104272490(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069ff0);
}



/* Entry: 1042724a0; end: 1042724af; -[SCAdRankingSnapLevelInfo startTimestampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042724a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069ff8);
}



/* Entry: 1042724b0; end: 1042724bf; -[SCAdRankingSnapLevelInfo storyReplied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042724b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a000);
}



/* Entry: 1042724c0; end: 1042728df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042724c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined1 param_24)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_98 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069f60);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113069f68) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113069f70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113069f78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113069f80) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113069f88) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113069f90) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113069f98) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069fa0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113069fa8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113069fb0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113069fb8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113069fc0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_113069fc8) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_113069fd0) = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069fd8);
  *puVar1 = param_19;
  puVar1[1] = param_20;
  *(undefined1 *)(unaff_x20 + _DAT_113069fe0) = (undefined1)param_21;
  *(undefined1 *)(unaff_x20 + _DAT_113069fe8) = param_21._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113069ff0) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_113069ff8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11306a000) = param_24;
  _objc_msgSendSuper2(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042728e0; end: 104272a13; -[SCAdRankingSnapLevelInfo initWithSnapId:isAd:snapViewTimeInMs:topSnapViewTimeInMs:bottomSnapViewTimeInMs:mediaType:isNewSnap:isSwiped:inventoryType:inventorySubtype:adType:preferredAttachmentType:actualAttachmentType:adAttachmentTriggerType:tapAttachmentSource:exitMethod:isHammerTap:wasLiked:storyType:startTimestampMillis:storyReplied:] */

void FUN_1042728e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,long param_19,undefined1 param_20)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_12 == 0) {
    param_12 = 0;
    uVar2 = 0;
    uVar1 = param_6;
  }
  else {
    uVar2 = param_6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_12);
    uVar1 = uVar2;
  }
  if (param_19 == 0) {
    param_19 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  func_0x0001042726d4(param_1,param_2,param_3,param_4,param_7,param_6,param_8,param_9,param_10,
                      param_11,param_12,uVar2,param_13,param_14,param_15,param_16,param_17,param_18,
                      param_19,uVar1,param_20);
  return;
}



/* Entry: 104272a14; end: 104272a43;  */

void FUN_104272a14(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104272a44(param_1);
  return;
}



/* Entry: 104272a44; end: 104272c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104272a44(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069f60);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined1 *)(unaff_x20 + _DAT_113069f68) = *(undefined1 *)(param_1 + 2);
  uVar2 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113069f70) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113069f78) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113069f80) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113069f88) = param_1[6];
  *(undefined1 *)(unaff_x20 + _DAT_113069f90) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(unaff_x20 + _DAT_113069f98) = *(undefined1 *)((long)param_1 + 0x39);
  uVar2 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069fa0);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uVar2 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_113069fa8) = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_113069fb0) = uVar2;
  uVar2 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + _DAT_113069fb8) = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_113069fc0) = uVar2;
  uVar2 = param_1[0xf];
  *(undefined8 *)(unaff_x20 + _DAT_113069fc8) = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_113069fd0) = uVar2;
  uVar2 = param_1[0x10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069fd8);
  puVar1[1] = param_1[0x11];
  *puVar1 = uVar2;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  *(undefined1 *)(unaff_x20 + _DAT_113069fe0) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(unaff_x20 + _DAT_113069fe8) = *(undefined1 *)((long)param_1 + 0x91);
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  *(undefined8 *)(unaff_x20 + _DAT_113069ff0) = param_1[0x13];
  *(undefined8 *)(unaff_x20 + _DAT_113069ff8) = param_1[0x14];
  func_0x000100402194(&uStack_50,auStack_80);
  FUN_10427332c(&uStack_60,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  FUN_10427332c(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  FUN_104272c34(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_11306a000) = *(undefined1 *)(param_1 + 0x15);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104272c34; end: 104272c67;  */

undefined8 FUN_104272c34(undefined8 param_1)

{
  (*(code *)(undefined *)0x1041fc188)();
  return param_1;
}



/* Entry: 104272c68; end: 104272c9b; -[SCAdRankingSnapLevelInfo hash] */

undefined8 FUN_104272c68(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104272c9c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104272c9c; end: 104272f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104272c9c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113069f60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113069f60))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113069f68));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113069f70) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113069f70);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113069f78) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113069f78);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113069f80) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113069f80);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069f88));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113069f90));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113069f98));
  if (((undefined8 *)(unaff_x20 + _DAT_113069fa0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113069fa0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069fa8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069fb0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069fb8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069fc0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069fc8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069fd0));
  if (((undefined8 *)(unaff_x20 + _DAT_113069fd8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113069fd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113069fe0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113069fe8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069ff0));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113069ff8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113069ff8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a000));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104272f3c; end: 10427332b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104272f3c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long unaff_x20;
  uint uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  uint uStack_d4;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  
  lVar31 = unaff_x20;
  _swift_getObjectType();
  FUN_10427332c(param_1,auStack_c8,0x112d387f8,&UNK_10d902650);
  if (lStack_b0 == 0) {
    func_0x00010006e7f4(auStack_c8);
  }
  else {
    plVar29 = &lStack_d0;
    _swift_dynamicCast(plVar29,auStack_c8,PTR___sypN_11034f1a8 + 8,lVar31,6);
    if (((ulong)plVar29 & 1) != 0) {
      lVar31 = *(long *)(unaff_x20 + _DAT_113069f60);
      if (lVar31 == *(long *)(lStack_d0 + _DAT_113069f60) &&
          ((long *)(unaff_x20 + _DAT_113069f60))[1] == ((long *)(lStack_d0 + _DAT_113069f60))[1]) {
        uStack_d4 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_d4 = (uint)lVar31 ^ 1;
      }
      bVar16 = *(byte *)(unaff_x20 + _DAT_113069f68);
      bVar17 = *(byte *)(lStack_d0 + _DAT_113069f68);
      dVar36 = *(double *)(unaff_x20 + _DAT_113069f70);
      dVar38 = *(double *)(lStack_d0 + _DAT_113069f70);
      dVar37 = *(double *)(unaff_x20 + _DAT_113069f78);
      dVar39 = *(double *)(lStack_d0 + _DAT_113069f78);
      dVar40 = *(double *)(unaff_x20 + _DAT_113069f80);
      dVar41 = *(double *)(lStack_d0 + _DAT_113069f80);
      iVar2 = *(int *)(unaff_x20 + _DAT_113069f88);
      iVar3 = *(int *)(lStack_d0 + _DAT_113069f88);
      bVar18 = *(byte *)(unaff_x20 + _DAT_113069f90);
      bVar19 = *(byte *)(lStack_d0 + _DAT_113069f90);
      bVar20 = *(byte *)(unaff_x20 + _DAT_113069f98);
      bVar21 = *(byte *)(lStack_d0 + _DAT_113069f98);
      lVar31 = ((long *)(unaff_x20 + _DAT_113069fa0))[1];
      lVar32 = ((long *)(lStack_d0 + _DAT_113069fa0))[1];
      uVar28 = (uint)(lVar31 == 0 && lVar32 == 0);
      if ((lVar31 != 0) && (lVar32 != 0)) {
        lVar30 = *(long *)(unaff_x20 + _DAT_113069fa0);
        if ((lVar30 == *(long *)(lStack_d0 + _DAT_113069fa0)) && (lVar31 == lVar32)) {
          uVar28 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar28 = (uint)lVar30;
        }
      }
      iVar4 = *(int *)(unaff_x20 + _DAT_113069fa8);
      iVar5 = *(int *)(lStack_d0 + _DAT_113069fa8);
      iVar6 = *(int *)(unaff_x20 + _DAT_113069fb0);
      iVar7 = *(int *)(lStack_d0 + _DAT_113069fb0);
      iVar8 = *(int *)(unaff_x20 + _DAT_113069fb8);
      iVar9 = *(int *)(lStack_d0 + _DAT_113069fb8);
      iVar10 = *(int *)(unaff_x20 + _DAT_113069fc0);
      iVar11 = *(int *)(lStack_d0 + _DAT_113069fc0);
      iVar12 = *(int *)(unaff_x20 + _DAT_113069fc8);
      iVar13 = *(int *)(lStack_d0 + _DAT_113069fc8);
      iVar14 = *(int *)(unaff_x20 + _DAT_113069fd0);
      iVar15 = *(int *)(lStack_d0 + _DAT_113069fd0);
      lVar31 = ((long *)(unaff_x20 + _DAT_113069fd8))[1];
      lVar32 = ((long *)(lStack_d0 + _DAT_113069fd8))[1];
      uVar33 = (uint)(lVar31 == 0 && lVar32 == 0);
      if ((lVar31 != 0) && (lVar32 != 0)) {
        lVar30 = *(long *)(unaff_x20 + _DAT_113069fd8);
        if ((lVar30 == *(long *)(lStack_d0 + _DAT_113069fd8)) && (lVar31 == lVar32)) {
          uVar33 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar33 = (uint)lVar30;
        }
      }
      bVar22 = *(byte *)(unaff_x20 + _DAT_113069fe0);
      bVar23 = *(byte *)(lStack_d0 + _DAT_113069fe0);
      bVar24 = *(byte *)(unaff_x20 + _DAT_113069fe8);
      bVar25 = *(byte *)(lStack_d0 + _DAT_113069fe8);
      uVar34 = *(undefined8 *)(unaff_x20 + _DAT_113069ff0);
      uVar35 = *(undefined8 *)(lStack_d0 + _DAT_113069ff0);
      dVar42 = *(double *)(unaff_x20 + _DAT_113069ff8);
      dVar43 = *(double *)(lStack_d0 + _DAT_113069ff8);
      bVar26 = *(byte *)(unaff_x20 + _DAT_11306a000);
      bVar27 = *(byte *)(lStack_d0 + _DAT_11306a000);
      _objc_release(lStack_d0);
      uVar1 = 0;
      if (iVar6 == iVar7) {
        uVar1 = uVar28 & ((uStack_d4 | bVar16 ^ bVar17 | (uint)(dVar36 != dVar38) |
                           (uint)(dVar37 != dVar39 || dVar40 != dVar41) |
                          (uint)(byte)(iVar2 != iVar3 | bVar18 ^ bVar19 | bVar20 ^ bVar21)) ^
                         0xffffffff) & (uint)(iVar4 == iVar5);
      }
      uVar28 = 0;
      if (iVar8 == iVar9) {
        uVar28 = uVar1;
      }
      uVar1 = 0;
      if (iVar10 == iVar11) {
        uVar1 = uVar28;
      }
      uVar28 = 0;
      if (iVar12 == iVar13) {
        uVar28 = uVar1;
      }
      uVar1 = 0;
      if (iVar14 == iVar15) {
        uVar1 = uVar28;
      }
      uVar28 = 0;
      if ((int)uVar34 == (int)uVar35) {
        uVar28 = uVar1 & uVar33 & ((bVar22 ^ bVar23) ^ 0xffffffff) &
                 ((bVar24 ^ bVar25) ^ 0xffffffff);
      }
      uVar33 = 0;
      if (dVar42 == dVar43) {
        uVar33 = uVar28;
      }
      return uVar33 & ((bVar26 ^ bVar27) ^ 1);
    }
  }
  return 0;
}



/* Entry: 10427332c; end: 104273373;  */

undefined8 FUN_10427332c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104273374; end: 1042733f3; -[SCAdRankingSnapLevelInfo isEqual:] */

uint FUN_104273374(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104272f3c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042733f4; end: 1042733f7; -[SCAdRankingSnapLevelInfo copyWithZone:] */

void FUN_1042733f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042733f8; end: 10427342b; -[SCAdRankingSnapLevelInfo description] */

void FUN_1042733f8(void)

{
  undefined1 auStack_c0 [176];
  
  FUN_1042734fc(auStack_c0);
  FUN_104272c34(auStack_c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427342c; end: 1042734a7; -[SCAdRankingSnapLevelInfo init] */

void FUN_10427342c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdRankingSnapLevelInfoWrapper.swift",0x32,2,0xc1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104273474);
  (*pcVar1)();
}



/* Entry: 1042734a8; end: 1042734fb; -[SCAdRankingSnapLevelInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042734a8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113069f60 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113069fa0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113069fd8 + 8))
  ;
  return;
}



/* Entry: 1042734fc; end: 104273683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042734fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar16 = ((undefined8 *)(param_2 + _DAT_113069f60))[1];
  uVar3 = *(undefined1 *)(param_2 + _DAT_113069f68);
  uVar18 = *(undefined8 *)(param_2 + _DAT_113069f70);
  uVar19 = *(undefined8 *)(param_2 + _DAT_113069f78);
  uVar20 = *(undefined8 *)(param_2 + _DAT_113069f80);
  uVar13 = *(undefined8 *)(param_2 + _DAT_113069f88);
  uVar4 = *(undefined1 *)(param_2 + _DAT_113069f90);
  uVar5 = *(undefined1 *)(param_2 + _DAT_113069f98);
  uVar14 = *(undefined8 *)(param_2 + _DAT_113069fa8);
  uVar15 = *(undefined8 *)(param_2 + _DAT_113069fb0);
  uVar9 = *(undefined8 *)(param_2 + _DAT_113069fb8);
  uVar10 = *(undefined8 *)(param_2 + _DAT_113069fc0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113069fc8);
  puVar1 = (undefined8 *)(param_2 + _DAT_113069fa0);
  uVar12 = *(undefined8 *)(param_2 + _DAT_113069fd0);
  puVar2 = (undefined8 *)(param_2 + _DAT_113069fd8);
  uVar6 = *(undefined1 *)(param_2 + _DAT_113069fe0);
  uVar7 = *(undefined1 *)(param_2 + _DAT_113069fe8);
  uVar17 = *(undefined8 *)(param_2 + _DAT_113069ff0);
  uVar21 = *(undefined8 *)(param_2 + _DAT_113069ff8);
  uVar8 = *(undefined1 *)(param_2 + _DAT_11306a000);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113069f60);
  param_1[1] = uVar16;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = uVar18;
  param_1[4] = uVar19;
  param_1[5] = uVar20;
  param_1[6] = uVar13;
  *(undefined1 *)(param_1 + 7) = uVar4;
  *(undefined1 *)((long)param_1 + 0x39) = uVar5;
  uVar16 = puVar1[1];
  uVar13 = *puVar1;
  param_1[9] = puVar1[1];
  param_1[8] = uVar13;
  param_1[10] = uVar14;
  param_1[0xb] = uVar15;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  param_1[0xe] = uVar11;
  param_1[0xf] = uVar12;
  uVar9 = puVar2[1];
  uVar10 = *puVar2;
  param_1[0x11] = puVar2[1];
  param_1[0x10] = uVar10;
  *(undefined1 *)(param_1 + 0x12) = uVar6;
  *(undefined1 *)((long)param_1 + 0x91) = uVar7;
  param_1[0x13] = uVar17;
  param_1[0x14] = uVar21;
  *(undefined1 *)(param_1 + 0x15) = uVar8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar9);
  return;
}



/* Entry: 104273684; end: 1042736a3;  */

void FUN_104273684(void)

{
  _objc_opt_self(&PTR_PTR_1129918f8);
  return;
}



/* Entry: 1042736a4; end: 1042736ef; -[SCAdRankingStoryLevelInfo storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042736a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306a030);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306a030))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042736f0; end: 1042736ff; -[SCAdRankingStoryLevelInfo storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042736f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a038);
}



/* Entry: 104273700; end: 10427370f; -[SCAdRankingStoryLevelInfo storyViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104273700(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a040);
}



/* Entry: 104273710; end: 10427376b; -[SCAdRankingStoryLevelInfo exitMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104273710(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a048))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a048);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10427376c; end: 10427377b; -[SCAdRankingStoryLevelInfo startTimestampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427376c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a050);
}



/* Entry: 10427377c; end: 10427378b; -[SCAdRankingStoryLevelInfo isAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427377c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a058);
}



/* Entry: 10427378c; end: 10427379b; -[SCAdRankingStoryLevelInfo contentTopsnapViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427378c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a060);
}



/* Entry: 10427379c; end: 1042737ab; -[SCAdRankingStoryLevelInfo adTopsnapViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427379c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a068);
}



/* Entry: 1042737ac; end: 10427389f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042737ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a030);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a038) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a040) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a048);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a050) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a058) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a060) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306a068) = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042738a0; end: 1042739b7; -[SCAdRankingStoryLevelInfo initWithStoryId:storyType:storyViewTimeInMs:exitMethod:startTimestampMillis:isAd:contentTopsnapViewCount:adTopsnapViewCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042738a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_80;
  long lStack_78;
  
  lVar3 = param_3;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_7 == 0) {
    param_7 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_3 + _DAT_11306a030);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_11306a038) = param_6;
  *(undefined8 *)(param_3 + _DAT_11306a040) = param_1;
  plVar2 = (long *)(param_3 + _DAT_11306a048);
  *plVar2 = param_7;
  plVar2[1] = lVar4;
  *(undefined8 *)(param_3 + _DAT_11306a050) = param_2;
  *(undefined1 *)(param_3 + _DAT_11306a058) = param_8;
  *(undefined8 *)(param_3 + _DAT_11306a060) = param_9;
  *(undefined8 *)(param_3 + _DAT_11306a068) = param_10;
  lStack_80 = param_3;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042739b8; end: 1042739e7;  */

void FUN_1042739b8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042739e8(param_1);
  return;
}



/* Entry: 1042739e8; end: 104273ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042739e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a030);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined8 *)(unaff_x20 + _DAT_11306a038) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306a040) = param_1[3];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a048);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_11306a050) = param_1[6];
  *(undefined1 *)(unaff_x20 + _DAT_11306a058) = *(undefined1 *)(param_1 + 7);
  *(undefined8 *)(unaff_x20 + _DAT_11306a060) = param_1[8];
  func_0x000100402194(&uStack_40,auStack_60);
  FUN_104273e94(&uStack_50,auStack_60,0x112d35ff8,&UNK_10d900cd0);
  FUN_104273ae8(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11306a068) = param_1[9];
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104273ae8; end: 104273b1b;  */

undefined8 FUN_104273ae8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1041fc65c)();
  return param_1;
}



/* Entry: 104273b1c; end: 104273b4f; -[SCAdRankingStoryLevelInfo hash] */

undefined8 FUN_104273b1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104273b50();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104273b50; end: 104273c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104273b50(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a030);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11306a030))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a038));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a040) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306a040);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a048))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a048);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a050) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306a050);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a058));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11306a060));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11306a068));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104273ca0; end: 104273e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104273ca0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  uint uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uStack_ac;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  FUN_104273e94(param_1,auStack_a0,0x112d387f8,&UNK_10d902650);
  if (lStack_88 == 0) {
    func_0x00010006e7f4(auStack_a0);
  }
  else {
    plVar7 = &lStack_a8;
    _swift_dynamicCast(plVar7,auStack_a0,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_11306a030);
      if (lVar9 == *(long *)(lStack_a8 + _DAT_11306a030) &&
          ((long *)(unaff_x20 + _DAT_11306a030))[1] == ((long *)(lStack_a8 + _DAT_11306a030))[1]) {
        uStack_ac = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_ac = (uint)lVar9;
      }
      iVar3 = *(int *)(unaff_x20 + _DAT_11306a038);
      iVar4 = *(int *)(lStack_a8 + _DAT_11306a038);
      dVar13 = *(double *)(unaff_x20 + _DAT_11306a040);
      dVar14 = *(double *)(lStack_a8 + _DAT_11306a040);
      lVar9 = ((long *)(unaff_x20 + _DAT_11306a048))[1];
      lVar10 = ((long *)(lStack_a8 + _DAT_11306a048))[1];
      uVar11 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar8 = *(long *)(unaff_x20 + _DAT_11306a048);
        if ((lVar8 == *(long *)(lStack_a8 + _DAT_11306a048)) && (lVar9 == lVar10)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar8;
        }
      }
      dVar15 = *(double *)(unaff_x20 + _DAT_11306a050);
      dVar16 = *(double *)(lStack_a8 + _DAT_11306a050);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11306a058);
      bVar6 = *(byte *)(lStack_a8 + _DAT_11306a058);
      lVar8 = *(long *)(unaff_x20 + _DAT_11306a060);
      lVar12 = *(long *)(lStack_a8 + _DAT_11306a060);
      lVar9 = *(long *)(unaff_x20 + _DAT_11306a068);
      lVar10 = *(long *)(lStack_a8 + _DAT_11306a068);
      _objc_release(lStack_a8);
      uVar1 = 0;
      if (dVar13 == dVar14) {
        uVar1 = uStack_ac & iVar3 == iVar4;
      }
      uVar2 = 0;
      if (dVar15 == dVar16) {
        uVar2 = uVar1 & uVar11;
      }
      uVar11 = 0;
      if (lVar8 == lVar12) {
        uVar11 = uVar2 & ((bVar5 ^ bVar6) ^ 0xffffffff);
      }
      if (lVar9 != lVar10) {
        return 0;
      }
      return uVar11;
    }
  }
  return 0;
}



/* Entry: 104273e94; end: 104273edb;  */

undefined8 FUN_104273e94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104273edc; end: 104273f5b; -[SCAdRankingStoryLevelInfo isEqual:] */

uint FUN_104273edc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104273ca0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104273f5c; end: 104273f5f; -[SCAdRankingStoryLevelInfo copyWithZone:] */

void FUN_104273f5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104273f60; end: 104273f93; -[SCAdRankingStoryLevelInfo description] */

void FUN_104273f60(void)

{
  undefined1 auStack_60 [80];
  
  func_0x000104274050(auStack_60);
  FUN_104273ae8(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104273f94; end: 10427400f; -[SCAdRankingStoryLevelInfo init] */

void FUN_104273f94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdRankingStoryLevelInfoWrapper.swift",0x33,2,0x69,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104273fdc);
  (*pcVar1)();
}



/* Entry: 104274010; end: 1042740fb; -[SCAdRankingStoryLevelInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274010(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a030 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a048 + 8))
  ;
  return;
}



/* Entry: 1042740fc; end: 10427411b;  */

void FUN_1042740fc(void)

{
  _objc_opt_self(&PTR_PTR_112991a60);
  return;
}



/* Entry: 10427411c; end: 10427412b; -[SCAdRankingViewDuration totalHammerTaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427411c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a098);
}



/* Entry: 10427412c; end: 10427413b; -[SCAdRankingViewDuration p25ViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427412c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a0a0);
}



/* Entry: 10427413c; end: 10427414b; -[SCAdRankingViewDuration p50ViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427413c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a0a8);
}



/* Entry: 10427414c; end: 10427415b; -[SCAdRankingViewDuration p75ViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427414c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a0b0);
}



/* Entry: 10427415c; end: 10427416b; -[SCAdRankingViewDuration p90ViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427415c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a0b8);
}



/* Entry: 10427416c; end: 10427417b; -[SCAdRankingViewDuration minViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427416c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a0c0);
}



/* Entry: 10427417c; end: 10427418b; -[SCAdRankingViewDuration maxViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427417c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a0c8);
}



/* Entry: 10427418c; end: 10427424f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427418c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a098) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a0a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a0a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a0b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a0b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a0c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a0c8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104274250; end: 104274313; -[SCAdRankingViewDuration initWithTotalHammerTaps:p25ViewTime:p50ViewTime:p75ViewTime:p90ViewTime:minViewTime:maxViewTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_7;
  _swift_getObjectType();
  *(undefined8 *)(param_7 + _DAT_11306a098) = param_9;
  *(undefined8 *)(param_7 + _DAT_11306a0a0) = param_1;
  *(undefined8 *)(param_7 + _DAT_11306a0a8) = param_2;
  *(undefined8 *)(param_7 + _DAT_11306a0b0) = param_3;
  *(undefined8 *)(param_7 + _DAT_11306a0b8) = param_4;
  *(undefined8 *)(param_7 + _DAT_11306a0c0) = param_5;
  *(undefined8 *)(param_7 + _DAT_11306a0c8) = param_6;
  lStack_60 = param_7;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104274314; end: 1042743b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274314(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a098) = *param_1;
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306a0a0) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306a0a8) = uVar1;
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11306a0b0) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306a0b8) = uVar1;
  uVar1 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11306a0c0) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11306a0c8) = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042743b8; end: 1042743d7; -[SCAdRankingViewDuration hash] */

void FUN_1042743b8(void)

{
  FUN_1042743d8();
  return;
}



/* Entry: 1042743d8; end: 1042744eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042743d8(void)

{
  long unaff_x20;
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a098));
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a0a0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a0a0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a0a8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a0a8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a0b0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a0b0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a0b8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a0b8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a0c0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a0c0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a0c8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a0c8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042744ec; end: 10427464b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1042744ec(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar1 = &lStack_98;
    _swift_dynamicCast(plVar1,auStack_90,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11306a098);
      lVar3 = *(long *)(lStack_98 + _DAT_11306a098);
      dVar6 = *(double *)(unaff_x20 + _DAT_11306a0a0);
      dVar4 = *(double *)(lStack_98 + _DAT_11306a0a0);
      dVar7 = *(double *)(unaff_x20 + _DAT_11306a0a8);
      dVar11 = *(double *)(lStack_98 + _DAT_11306a0a8);
      dVar5 = *(double *)(unaff_x20 + _DAT_11306a0b0);
      dVar13 = *(double *)(lStack_98 + _DAT_11306a0b0);
      dVar14 = *(double *)(unaff_x20 + _DAT_11306a0b8);
      dVar15 = *(double *)(lStack_98 + _DAT_11306a0b8);
      dVar8 = *(double *)(unaff_x20 + _DAT_11306a0c0);
      dVar9 = *(double *)(lStack_98 + _DAT_11306a0c0);
      dVar10 = *(double *)(unaff_x20 + _DAT_11306a0c8);
      dVar12 = *(double *)(lStack_98 + _DAT_11306a0c8);
      _objc_release();
      return dVar10 == dVar12 &&
             (dVar8 == dVar9 &&
             (dVar14 == dVar15 &&
             (dVar5 == dVar13 && (lVar2 == lVar3 && (dVar7 == dVar11 && dVar6 == dVar4)))));
    }
  }
  return false;
}


