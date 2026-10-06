/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10404d040; end: 10404d04f; -[SCAdRuleConfiguration minTimeFromSessionStartSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10404d040(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11304f6d0);
}



/* Entry: 10404d050; end: 10404d05f; -[SCAdRuleConfiguration minTimeBetweenAdsSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10404d050(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11304f6d8);
}



/* Entry: 10404d060; end: 10404d06f; -[SCAdRuleConfiguration minTimeBeforeSessionEndSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10404d060(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11304f6e0);
}



/* Entry: 10404d070; end: 10404d07f; -[SCAdRuleConfiguration minTimeBetweenAdsAcrossInventorySeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10404d070(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11304f6e8);
}



/* Entry: 10404d080; end: 10404d08f; -[SCAdRuleConfiguration minInsertionThresholdSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10404d080(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11304f6f0);
}



/* Entry: 10404d090; end: 10404d09f; -[SCAdRuleConfiguration conjunctionFromStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10404d090(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11304f6f8);
}



/* Entry: 10404d0a0; end: 10404d0af; -[SCAdRuleConfiguration conjunctionBetweenAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10404d0a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11304f700);
}



/* Entry: 10404d0b0; end: 10404d0bf; -[SCAdRuleConfiguration conjunctionBeforeEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10404d0b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11304f708);
}



/* Entry: 10404d0c0; end: 10404d0cf; -[SCAdRuleConfiguration conjunctionBetweenAdsAcrossInventory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10404d0c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11304f710);
}



/* Entry: 10404d0d0; end: 10404d3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404d0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14)

{
  long unaff_x20;
  undefined1 auStack_a0 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11304f690) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11304f698) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6a0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6a8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6b0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6b8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6c0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6c8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11304f6f0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11304f6f8) = (undefined1)param_14;
  *(undefined1 *)(unaff_x20 + _DAT_11304f700) = param_14._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11304f708) = param_14._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11304f710) = param_14._3_1_;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10404d400; end: 10404d5d3; -[SCAdRuleConfiguration initWithMinStoriesFromSessionStart:minStoriesBetweenAds:minStoriesBeforeSessionEnd:minStoriesBetweenAdsAcrossInventory:minSnapsFromSessionStart:minSnapsBetweenAds:minSnapsBeforeSessionEnd:minSnapsBetweenAdsAcrossInventory:minTimeFromSessionStartSeconds:minTimeBetweenAdsSeconds:minTimeBeforeSessionEndSeconds:minTimeBetweenAdsAcrossInventorySeconds:minInsertionThresholdSeconds:conjunctionFromStart:conjunctionBetweenAds:conjunctionBeforeEnd:conjunctionBetweenAdsAcrossInventory:] */

void FUN_10404d400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  func_0x00010404d268(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 10404d5d4; end: 10404d5d7; -[SCAdRuleConfiguration copyWithZone:] */

void FUN_10404d5d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10404d5d8; end: 10404d603; -[SCAdRuleConfiguration description] */

void FUN_10404d5d8(void)

{
  undefined1 auStack_80 [112];
  
  FUN_10404d680(auStack_80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404d604; end: 10404d67f; -[SCAdRuleConfiguration init] */

void FUN_10404d604(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdInsertionServices/AdRuleConfigurationWrapper.swift",0x34,2,100,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10404d64c);
  (*pcVar1)();
}



/* Entry: 10404d680; end: 10404d77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404d680(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
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
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_11304f698);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11304f6a0);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11304f6a8);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11304f6b0);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11304f6b8);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11304f6c0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11304f6c8);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11304f6d0);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11304f6d8);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11304f6e0);
  uVar15 = *(undefined8 *)(param_2 + _DAT_11304f6e8);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11304f6f0);
  uVar1 = *(undefined1 *)(param_2 + _DAT_11304f6f8);
  uVar2 = *(undefined1 *)(param_2 + _DAT_11304f700);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11304f708);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11304f710);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11304f690);
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar11;
  param_1[8] = uVar12;
  param_1[9] = uVar13;
  param_1[10] = uVar14;
  param_1[0xb] = uVar15;
  param_1[0xc] = uVar16;
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)((long)param_1 + 0x69) = uVar2;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar3;
  *(undefined1 *)((long)param_1 + 0x6b) = uVar4;
  return;
}



/* Entry: 10404d77c; end: 10404d79b;  */

void FUN_10404d77c(void)

{
  _objc_opt_self(&PTR_PTR_1129809c0);
  return;
}



/* Entry: 10404d79c; end: 10404d7cf; -[_TtC33SCSystemLaunchTabServicesProvider24SystemLaunchTabCacheImpl defaultTab] */

undefined8 FUN_10404d79c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100146b24();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10404d7d0; end: 10404d947; -[_TtC33SCSystemLaunchTabServicesProvider24SystemLaunchTabCacheImpl setDefaultTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404d7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11304f740);
  _objc_retain();
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC(param_3,uVar1);
    uVar1 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1e2f90);
    func_0x000107c56bcc(lVar2);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10404d948; end: 10404d977; -[_TtC33SCSystemLaunchTabServicesProvider24SystemLaunchTabCacheImpl writePlusDefaultTab:] */

void FUN_10404d948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x00010404d888(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10404d978; end: 10404da27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404d978(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_11304f740);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bff91e0();
    uVar3 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1e2fb0);
    func_0x000107c56bcc(lVar1);
    _objc_release(lVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10404da28; end: 10404da57; -[_TtC33SCSystemLaunchTabServicesProvider24SystemLaunchTabCacheImpl writePlusSubscriptionState:] */

void FUN_10404da28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_10404d978(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10404da58; end: 10404dacb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404da58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11304f740) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11304f748) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11304f750) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10404dacc; end: 10404db2b; -[_TtC33SCSystemLaunchTabServicesProvider24SystemLaunchTabCacheImpl init] */

void FUN_10404dacc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSystemLaunchTabServicesProvider.SystemLaunchTabCacheImpl",0x3a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10404daf8);
  (*pcVar1)();
}



/* Entry: 10404db2c; end: 10404db73; -[_TtC33SCSystemLaunchTabServicesProvider24SystemLaunchTabCacheImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404db2c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304f740));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11304f748));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11304f750));
  return;
}



/* Entry: 10404db74; end: 10404db93;  */

undefined1  [16] FUN_10404db74(void)

{
  return ZEXT816(0x11073aa88);
}



/* Entry: 10404db94; end: 10404dc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10404db94(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a1ac30();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11304f7d0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11304f7d8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10404dc1c);
  (*pcVar1)();
}



/* Entry: 10404dc1c; end: 10404dc7b; -[_TtC27ActivSystemScopeGraphBridge42ActivSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_10404dc1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ActivSystemScopeGraphBridge.ActivSystemScopeGraphBridgeSaberEntryPoint",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10404dc48);
  (*pcVar1)();
}



/* Entry: 10404dc7c; end: 10404dcb3; -[_TtC27ActivSystemScopeGraphBridge42ActivSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404dc7c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304f7d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11304f7d8));
  return;
}



/* Entry: 10404dcb4; end: 10404dcdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404dcb4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11304f7d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11304f7d0));
  return;
}



/* Entry: 10404dcdc; end: 10404dd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10404dcdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113050d48);
  *(undefined8 *)(unaff_x20 + _DAT_11304f808) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11304f810) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10404dd78; end: 10404ddd7; -[_TtC27ActivSystemScopeGraphBridge48SCLegacyPermissionRequestServicesSaberEntryPoint init] */

void FUN_10404dd78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ActivSystemScopeGraphBridge.SCLegacyPermissionRequestServicesSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10404dda4);
  (*pcVar1)();
}



/* Entry: 10404ddd8; end: 10404de6b; -[_TtC27ActivSystemScopeGraphBridge48SCLegacyPermissionRequestServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404ddd8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11304f808));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11304f810));
  return;
}



/* Entry: 10404de6c; end: 10404de73;  */

undefined8 FUN_10404de6c(void)

{
  return 0;
}



/* Entry: 10404de74; end: 10404df0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10404de74(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113050d80);
  *(undefined8 *)(unaff_x20 + _DAT_11304f840) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11304f848) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10404df10; end: 10404df6f; -[_TtC27ActivSystemScopeGraphBridge38SCSystemInstallServicesSaberEntryPoint init] */

void FUN_10404df10(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ActivSystemScopeGraphBridge.SCSystemInstallServicesSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10404df3c);
  (*pcVar1)();
}



/* Entry: 10404df70; end: 10404e003; -[_TtC27ActivSystemScopeGraphBridge38SCSystemInstallServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10404df70(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11304f840));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11304f848));
  return;
}



/* Entry: 10404e004; end: 10404e00b;  */

undefined8 FUN_10404e004(void)

{
  return 0;
}



/* Entry: 10404e00c; end: 10404e06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e00c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050cd8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e070; end: 10404e077;  */

void FUN_10404e070(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e078; end: 10404e117;  */

void FUN_10404e078(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e118; end: 10404e137;  */

void FUN_10404e118(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e138; end: 10404e19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e138(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050ce0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e19c; end: 10404e1a3;  */

void FUN_10404e19c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e1a4; end: 10404e243;  */

void FUN_10404e1a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e244; end: 10404e263;  */

void FUN_10404e244(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e264; end: 10404e2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e264(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050ce8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e2c8; end: 10404e2cf;  */

void FUN_10404e2c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e2d0; end: 10404e36f;  */

void FUN_10404e2d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e370; end: 10404e38f;  */

void FUN_10404e370(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e390; end: 10404e3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e390(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050cf0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e3f4; end: 10404e3fb;  */

void FUN_10404e3f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e3fc; end: 10404e49b;  */

void FUN_10404e3fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e49c; end: 10404e4bb;  */

void FUN_10404e49c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e4bc; end: 10404e51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e4bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050cf8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e520; end: 10404e527;  */

void FUN_10404e520(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e528; end: 10404e5c7;  */

void FUN_10404e528(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e5c8; end: 10404e5e7;  */

void FUN_10404e5c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e5e8; end: 10404e64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e5e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d00);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e64c; end: 10404e653;  */

void FUN_10404e64c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e654; end: 10404e677;  */

void FUN_10404e654(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e678; end: 10404e697;  */

void FUN_10404e678(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e698; end: 10404e6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e698(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d08);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e6fc; end: 10404e703;  */

void FUN_10404e6fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e704; end: 10404e7a3;  */

void FUN_10404e704(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e7a4; end: 10404e7c3;  */

void FUN_10404e7a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e7c4; end: 10404e827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e7c4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d10);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e828; end: 10404e82f;  */

void FUN_10404e828(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e830; end: 10404e8cf;  */

void FUN_10404e830(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e8d0; end: 10404e8ef;  */

void FUN_10404e8d0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404e8f0; end: 10404e953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404e8f0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d18);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404e954; end: 10404e95b;  */

void FUN_10404e954(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404e95c; end: 10404e9fb;  */

void FUN_10404e95c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404e9fc; end: 10404ea1b;  */

void FUN_10404e9fc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404ea1c; end: 10404ea7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404ea1c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d20);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404ea80; end: 10404ea87;  */

void FUN_10404ea80(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404ea88; end: 10404eb27;  */

void FUN_10404ea88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404eb28; end: 10404eb47;  */

void FUN_10404eb28(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404eb48; end: 10404ebab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404eb48(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d28);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404ebac; end: 10404ebb3;  */

void FUN_10404ebac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404ebb4; end: 10404ec53;  */

void FUN_10404ebb4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404ec54; end: 10404ec73;  */

void FUN_10404ec54(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404ec74; end: 10404ecd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404ec74(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d30);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404ecd8; end: 10404ecdf;  */

void FUN_10404ecd8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404ece0; end: 10404ed7f;  */

void FUN_10404ece0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404ed80; end: 10404ed9f;  */

void FUN_10404ed80(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404eda0; end: 10404ee03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404eda0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d38);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404ee04; end: 10404ee0b;  */

void FUN_10404ee04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404ee0c; end: 10404eeab;  */

void FUN_10404ee0c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404eeac; end: 10404eecb;  */

void FUN_10404eeac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404eecc; end: 10404ef2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404eecc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d40);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404ef30; end: 10404ef37;  */

void FUN_10404ef30(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404ef38; end: 10404efd7;  */

void FUN_10404ef38(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404efd8; end: 10404eff7;  */

void FUN_10404efd8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404eff8; end: 10404f05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404eff8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d50);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404f05c; end: 10404f063;  */

void FUN_10404f05c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404f064; end: 10404f103;  */

void FUN_10404f064(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10404f104; end: 10404f123;  */

void FUN_10404f104(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10404f124; end: 10404f187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10404f124(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113050d58);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10404f188; end: 10404f18f;  */

void FUN_10404f188(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10404f190; end: 10404f22f;  */

void FUN_10404f190(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


