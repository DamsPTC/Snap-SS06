/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f1c1bc; end: 103f1c1cb; -[SCUpNextV2Config subsStoriesNumToPlayBeforeUpnext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c1bc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e6e8);
}



/* Entry: 103f1c1cc; end: 103f1c1db; -[SCUpNextV2Config subsAutoAdvanceTriggeringOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c1cc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e6f0);
}



/* Entry: 103f1c1dc; end: 103f1c50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1c1dc(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined1 param_13,undefined4 param_14,undefined1 param_15,undefined4 param_16,
                  undefined4 param_17)

{
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302e670) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11302e678) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_11302e680) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11302e688) = param_4;
  *(undefined4 *)(unaff_x20 + _DAT_11302e690) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11302e698) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11302e6a0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11302e6a8) = param_8;
  *(undefined4 *)(unaff_x20 + _DAT_11302e6b0) = param_9;
  *(undefined4 *)(unaff_x20 + _DAT_11302e6b8) = param_10;
  *(undefined4 *)(unaff_x20 + _DAT_11302e6c0) = param_11;
  *(undefined4 *)(unaff_x20 + _DAT_11302e6c8) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11302e6d0) = param_13;
  *(undefined4 *)(unaff_x20 + _DAT_11302e6d8) = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_11302e6e0) = param_15;
  *(undefined4 *)(unaff_x20 + _DAT_11302e6e8) = param_16;
  *(undefined4 *)(unaff_x20 + _DAT_11302e6f0) = param_17;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1c50c; end: 103f1c6ef; -[SCUpNextV2Config initWithIsEnabled:pageSize:nextPageTriggerThreshold:shouldStartAfterFriendStories:pageSizeInitial:enableCustomMediaPrefetch:enableUpnextOnBoosting:enableUpNextOnSubscription:defaultPlaylistStoriesCount:pageSizeWwan:nextPageTriggerThresholdWwan:pageSizeInitialWwan:enableSeparateDataStore:fsAutoAdvanceTriggeringOffset:enableMixedFeed:subsStoriesNumToPlayBeforeUpnext:subsAutoAdvanceTriggeringOffset:] */

void FUN_103f1c50c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined1 param_14,undefined4 param_15,undefined4 param_16)

{
  func_0x000103f1c378(param_3,param_4,param_5,param_6,param_7,param_8,(undefined1)param_9,
                      param_9._1_1_,param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  return;
}



/* Entry: 103f1c6f0; end: 103f1c6f3; -[SCUpNextV2Config copyWithZone:] */

void FUN_103f1c6f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f1c6f4; end: 103f1c71f; -[SCUpNextV2Config description] */

void FUN_103f1c6f4(void)

{
  undefined1 auStack_4c [60];
  
  FUN_103f1c79c(auStack_4c);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1c720; end: 103f1c79b; -[SCUpNextV2Config init] */

void FUN_103f1c720(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCUpNextV2ConfigWrapper.swift",0x39,2,0x79,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1c768);
  (*pcVar1)();
}



/* Entry: 103f1c79c; end: 103f1c8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1c79c(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  
  uVar1 = *(undefined4 *)(param_2 + _DAT_11302e678);
  uVar2 = *(undefined4 *)(param_2 + _DAT_11302e680);
  uVar3 = *(undefined4 *)(param_2 + _DAT_11302e688);
  uVar4 = *(undefined4 *)(param_2 + _DAT_11302e690);
  uVar12 = *(undefined1 *)(param_2 + _DAT_11302e698);
  uVar13 = *(undefined1 *)(param_2 + _DAT_11302e6a0);
  uVar14 = *(undefined1 *)(param_2 + _DAT_11302e6a8);
  uVar5 = *(undefined4 *)(param_2 + _DAT_11302e6b0);
  uVar6 = *(undefined4 *)(param_2 + _DAT_11302e6b8);
  uVar7 = *(undefined4 *)(param_2 + _DAT_11302e6c0);
  uVar8 = *(undefined4 *)(param_2 + _DAT_11302e6c8);
  uVar15 = *(undefined1 *)(param_2 + _DAT_11302e6d0);
  uVar9 = *(undefined4 *)(param_2 + _DAT_11302e6d8);
  uVar16 = *(undefined1 *)(param_2 + _DAT_11302e6e0);
  uVar10 = *(undefined4 *)(param_2 + _DAT_11302e6e8);
  uVar11 = *(undefined4 *)(param_2 + _DAT_11302e6f0);
  *param_1 = *(undefined1 *)(param_2 + _DAT_11302e670);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  param_1[0x14] = uVar12;
  param_1[0x15] = uVar13;
  param_1[0x16] = uVar14;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  param_1[0x28] = uVar15;
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  param_1[0x30] = uVar16;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  return;
}



/* Entry: 103f1c8a4; end: 103f1c8c3;  */

void FUN_103f1c8a4(void)

{
  _objc_opt_self(&PTR_PTR_112965df8);
  return;
}



/* Entry: 103f1c8c4; end: 103f1c8cb; +[SCStoriesPlaybackScopeLocation none] */

undefined8 FUN_103f1c8c4(void)

{
  return 0;
}



/* Entry: 103f1c8cc; end: 103f1c8d3; +[SCStoriesPlaybackScopeLocation storiesTab] */

undefined8 FUN_103f1c8cc(void)

{
  return 1;
}



/* Entry: 103f1c8d4; end: 103f1c8db; +[SCStoriesPlaybackScopeLocation searchAndProfile] */

undefined8 FUN_103f1c8d4(void)

{
  return 2;
}



/* Entry: 103f1c8dc; end: 103f1c8e3; +[SCStoriesPlaybackScopeLocation deeplink] */

undefined8 FUN_103f1c8dc(void)

{
  return 4;
}



/* Entry: 103f1c8e4; end: 103f1c8eb; +[SCStoriesPlaybackScopeLocation friendsFeed] */

undefined8 FUN_103f1c8e4(void)

{
  return 8;
}



/* Entry: 103f1c8ec; end: 103f1c8f3; +[SCStoriesPlaybackScopeLocation chat] */

undefined8 FUN_103f1c8ec(void)

{
  return 0x10;
}



/* Entry: 103f1c8f4; end: 103f1c8fb; +[SCStoriesPlaybackScopeLocation context] */

undefined8 FUN_103f1c8f4(void)

{
  return 0x20;
}



/* Entry: 103f1c8fc; end: 103f1c903; +[SCStoriesPlaybackScopeLocation communityProfile] */

undefined8 FUN_103f1c8fc(void)

{
  return 0x40;
}



/* Entry: 103f1c904; end: 103f1c90b; +[SCStoriesPlaybackScopeLocation myStoryManagement] */

undefined8 FUN_103f1c904(void)

{
  return 0x80;
}



/* Entry: 103f1c90c; end: 103f1c9a7; -[SCStoriesPlaybackScopeLocation init] */

void FUN_103f1c90c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCStoriesPlaybackScopeLocationEnumWrapper.swift",0x4b,2,
             0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1c954);
  (*pcVar1)();
}



/* Entry: 103f1c9a8; end: 103f1c9af; +[SCDiscoverFeedUpNextV2AutoAdvanceEnum disabled] */

undefined8 FUN_103f1c9a8(void)

{
  return 0;
}



/* Entry: 103f1c9b0; end: 103f1c9b7; +[SCDiscoverFeedUpNextV2AutoAdvanceEnum fourthTab] */

undefined8 FUN_103f1c9b0(void)

{
  return 1;
}



/* Entry: 103f1c9b8; end: 103f1c9bf; +[SCDiscoverFeedUpNextV2AutoAdvanceEnum secondTab] */

undefined8 FUN_103f1c9b8(void)

{
  return 2;
}



/* Entry: 103f1c9c0; end: 103f1ca5b; -[SCDiscoverFeedUpNextV2AutoAdvanceEnum init] */

void FUN_103f1c9c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCDiscoverFeedUpNextV2AutoAdvanceEnumWrapper.swift",0x4e,2
             ,0x12,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1ca08);
  (*pcVar1)();
}



/* Entry: 103f1ca5c; end: 103f1ca6b; -[SCSpotlightDynamicPrefetchConfig enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1ca5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e770);
}



/* Entry: 103f1ca6c; end: 103f1ca7b; -[SCSpotlightDynamicPrefetchConfig viewCountToUpdateCursor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1ca6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e778);
}



/* Entry: 103f1ca7c; end: 103f1ca8b; -[SCSpotlightDynamicPrefetchConfig updateTtlIfCursorWithinSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1ca7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e780);
}



/* Entry: 103f1ca8c; end: 103f1ca9b; -[SCSpotlightDynamicPrefetchConfig newPrefetchTtlSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1ca8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e788);
}



/* Entry: 103f1ca9c; end: 103f1caab; -[SCSpotlightDynamicPrefetchConfig uninterestedUserSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1ca9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e790);
}



/* Entry: 103f1caac; end: 103f1cb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1caac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302e770) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302e778) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302e780) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e788) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302e790) = param_3;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1cb50; end: 103f1cbf3; -[SCSpotlightDynamicPrefetchConfig initWithEnabled:viewCountToUpdateCursor:updateTtlIfCursorWithinSeconds:newPrefetchTtlSeconds:uninterestedUserSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1cb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_4;
  _swift_getObjectType();
  *(undefined1 *)(param_4 + _DAT_11302e770) = param_6;
  *(undefined8 *)(param_4 + _DAT_11302e778) = param_7;
  *(undefined8 *)(param_4 + _DAT_11302e780) = param_1;
  *(undefined8 *)(param_4 + _DAT_11302e788) = param_2;
  *(undefined8 *)(param_4 + _DAT_11302e790) = param_3;
  lStack_60 = param_4;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1cbf4; end: 103f1cc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1cbf4(undefined1 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302e770) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e778) = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x20 + _DAT_11302e780) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + _DAT_11302e788) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e790) = *(undefined8 *)(param_1 + 0x20);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1cc80; end: 103f1cc83; -[SCSpotlightDynamicPrefetchConfig copyWithZone:] */

void FUN_103f1cc80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f1cc84; end: 103f1cc9f; -[SCSpotlightDynamicPrefetchConfig description] */

void FUN_103f1cc84(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1cca0; end: 103f1cd3b; -[SCSpotlightDynamicPrefetchConfig init] */

void FUN_103f1cca0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCSpotlightDynamicPrefetchConfigWrapper.swift",0x49,2,0x37
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1cce8);
  (*pcVar1)();
}



/* Entry: 103f1cd3c; end: 103f1cd4b; -[SCSpotlightDynamicRankingConfig negativeViewDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1cd3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e7c0);
}



/* Entry: 103f1cd4c; end: 103f1cd5b; -[SCSpotlightDynamicRankingConfig negativeTimeInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1cd4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e7c8);
}



/* Entry: 103f1cd5c; end: 103f1cd6b; -[SCSpotlightDynamicRankingConfig positiveViewDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1cd5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e7d0);
}



/* Entry: 103f1cd6c; end: 103f1cd7b; -[SCSpotlightDynamicRankingConfig positiveTimeInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1cd6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e7d8);
}



/* Entry: 103f1cd7c; end: 103f1cd8b; -[SCSpotlightDynamicRankingConfig disableNegativeBoost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1cd7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e7e0);
}



/* Entry: 103f1cd8c; end: 103f1cd9b; -[SCSpotlightDynamicRankingConfig disablePositiveBoost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1cd8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e7e8);
}



/* Entry: 103f1cd9c; end: 103f1cdab; -[SCSpotlightDynamicRankingConfig decayFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1cd9c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e7f0);
}



/* Entry: 103f1cdac; end: 103f1cdbb; -[SCSpotlightDynamicRankingConfig resetRankingOnNewPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1cdac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e7f8);
}



/* Entry: 103f1cdbc; end: 103f1cdcb; -[SCSpotlightDynamicRankingConfig defaultScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1cdbc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e800);
}



/* Entry: 103f1cdcc; end: 103f1cddb; -[SCSpotlightDynamicRankingConfig onlyAffectRelatedContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1cdcc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e808);
}



/* Entry: 103f1cddc; end: 103f1cfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1cddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302e7c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e7c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302e7d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302e7d8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11302e7e0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11302e7e8) = param_8;
  *(undefined4 *)(unaff_x20 + _DAT_11302e7f0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11302e7f8) = param_9;
  *(undefined4 *)(unaff_x20 + _DAT_11302e800) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11302e808) = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1cfe4; end: 103f1d11b; -[SCSpotlightDynamicRankingConfig initWithNegativeViewDuration:negativeTimeInterval:positiveViewDuration:positiveTimeInterval:disableNegativeBoost:disablePositiveBoost:decayFactor:resetRankingOnNewPage:defaultScore:onlyAffectRelatedContent:] */

void FUN_103f1cfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000103f1cee0(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103f1d11c; end: 103f1d11f; -[SCSpotlightDynamicRankingConfig copyWithZone:] */

void FUN_103f1d11c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f1d120; end: 103f1d14b; -[SCSpotlightDynamicRankingConfig description] */

void FUN_103f1d120(void)

{
  undefined1 auStack_48 [56];
  
  FUN_103f1d1c8(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1d14c; end: 103f1d1c7; -[SCSpotlightDynamicRankingConfig init] */

void FUN_103f1d14c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCSpotlightDynamicRankingConfigWrapper.swift",0x48,2,0x51,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1d194);
  (*pcVar1)();
}



/* Entry: 103f1d1c8; end: 103f1d263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1d1c8(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_11302e7c8);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11302e7d0);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11302e7d8);
  uVar1 = *(undefined1 *)(param_2 + _DAT_11302e7e0);
  uVar2 = *(undefined1 *)(param_2 + _DAT_11302e7e8);
  uVar8 = *(undefined4 *)(param_2 + _DAT_11302e7f0);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11302e7f8);
  uVar9 = *(undefined4 *)(param_2 + _DAT_11302e800);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11302e808);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11302e7c0);
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *(undefined1 *)(param_1 + 4) = uVar1;
  *(undefined1 *)((long)param_1 + 0x21) = uVar2;
  *(undefined4 *)((long)param_1 + 0x24) = uVar8;
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar9;
  *(undefined1 *)(param_1 + 6) = uVar4;
  return;
}



/* Entry: 103f1d264; end: 103f1d283;  */

void FUN_103f1d264(void)

{
  _objc_opt_self(&PTR_PTR_112966188);
  return;
}



/* Entry: 103f1d284; end: 103f1d293; -[SCSpotlightLensesFeedConfig enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1d284(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e838);
}



/* Entry: 103f1d294; end: 103f1d2a3; -[SCSpotlightLensesFeedConfig feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1d294(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e840);
}



/* Entry: 103f1d2a4; end: 103f1d2ff; -[SCSpotlightLensesFeedConfig routeTagHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1d2a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302e848))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302e848);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f1d300; end: 103f1d30f; -[SCSpotlightLensesFeedConfig prefetchMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1d300(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e850);
}



/* Entry: 103f1d310; end: 103f1d31f; -[SCSpotlightLensesFeedConfig prefetchStoriesNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1d310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e858);
}



/* Entry: 103f1d320; end: 103f1d32f; -[SCSpotlightLensesFeedConfig paginationStoriesNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1d320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e860);
}



/* Entry: 103f1d330; end: 103f1d33f; -[SCSpotlightLensesFeedConfig refreshTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1d330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e868);
}



/* Entry: 103f1d340; end: 103f1d413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1d340(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302e838) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302e840) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e848);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302e850) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302e858) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11302e860) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302e868) = param_1;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1d414; end: 103f1d4ff; -[SCSpotlightLensesFeedConfig initWithEnabled:feedType:routeTagHeader:prefetchMode:prefetchStoriesNumber:paginationStoriesNumber:refreshTimeSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1d414(undefined8 param_1,long param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  _swift_getObjectType();
  if (param_6 == 0) {
    param_6 = 0;
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_2 + _DAT_11302e838) = param_4;
  *(undefined8 *)(param_2 + _DAT_11302e840) = param_5;
  plVar1 = (long *)(param_2 + _DAT_11302e848);
  *plVar1 = param_6;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_11302e850) = param_7;
  *(undefined8 *)(param_2 + _DAT_11302e858) = param_8;
  *(undefined8 *)(param_2 + _DAT_11302e860) = param_9;
  *(undefined8 *)(param_2 + _DAT_11302e868) = param_1;
  lStack_70 = param_2;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1d500; end: 103f1d5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1d500(undefined1 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302e838) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e840) = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e848);
  puVar1[1] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x20 + _DAT_11302e850) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + _DAT_11302e858) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11302e860) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(unaff_x20 + _DAT_11302e868) = *(undefined8 *)(param_1 + 0x38);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1d5ac; end: 103f1d5af; -[SCSpotlightLensesFeedConfig copyWithZone:] */

void FUN_103f1d5ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f1d5b0; end: 103f1d5e3; -[SCSpotlightLensesFeedConfig description] */

void FUN_103f1d5b0(void)

{
  undefined1 auStack_50 [64];
  
  func_0x000103f1d674(auStack_50);
  FUN_103f1d6ec(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1d5e4; end: 103f1d65f; -[SCSpotlightLensesFeedConfig init] */

void FUN_103f1d5e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCSpotlightLensesFeedConfigWrapper.swift",0x44,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1d62c);
  (*pcVar1)();
}



/* Entry: 103f1d660; end: 103f1d6eb; -[SCSpotlightLensesFeedConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1d660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302e848 + 8))
  ;
  return;
}



/* Entry: 103f1d6ec; end: 103f1d71f;  */

undefined8 FUN_103f1d6ec(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f1aec4)();
  return param_1;
}



/* Entry: 103f1d720; end: 103f1d73f;  */

void FUN_103f1d720(void)

{
  _objc_opt_self(&PTR_PTR_112966298);
  return;
}



/* Entry: 103f1d740; end: 103f1d747; +[SCStoriesInteractionHistoryAllowanceFeatureName null] */

undefined8 FUN_103f1d740(void)

{
  return 0;
}



/* Entry: 103f1d748; end: 103f1d74f; +[SCStoriesInteractionHistoryAllowanceFeatureName default] */

undefined8 FUN_103f1d748(void)

{
  return 1;
}



/* Entry: 103f1d750; end: 103f1d757; +[SCStoriesInteractionHistoryAllowanceFeatureName upNextV2] */

undefined8 FUN_103f1d750(void)

{
  return 2;
}



/* Entry: 103f1d758; end: 103f1d75f; +[SCStoriesInteractionHistoryAllowanceFeatureName mixedFeedUpNext] */

undefined8 FUN_103f1d758(void)

{
  return 4;
}



/* Entry: 103f1d760; end: 103f1d767; +[SCStoriesInteractionHistoryAllowanceFeatureName storiesEverywhere] */

undefined8 FUN_103f1d760(void)

{
  return 8;
}



/* Entry: 103f1d768; end: 103f1d76f; +[SCStoriesInteractionHistoryAllowanceFeatureName mixedFeed] */

undefined8 FUN_103f1d768(void)

{
  return 0x10;
}



/* Entry: 103f1d770; end: 103f1d777; +[SCStoriesInteractionHistoryAllowanceFeatureName stories4thTab] */

undefined8 FUN_103f1d770(void)

{
  return 0x20;
}



/* Entry: 103f1d778; end: 103f1d7bf; -[SCStoriesInteractionHistoryAllowanceFeatureName init] */

void FUN_103f1d778(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCStoriesConfigProvidingWrapper.swift",0x41,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1d7c0);
  (*pcVar1)();
}



/* Entry: 103f1d7c0; end: 103f1d7c7; +[SCMixedCarouselRectangularShapeStoryTypeMask none] */

undefined8 FUN_103f1d7c0(void)

{
  return 0;
}



/* Entry: 103f1d7c8; end: 103f1d7cf; +[SCMixedCarouselRectangularShapeStoryTypeMask publisher] */

undefined8 FUN_103f1d7c8(void)

{
  return 1;
}



/* Entry: 103f1d7d0; end: 103f1d7d7; +[SCMixedCarouselRectangularShapeStoryTypeMask publicUser] */

undefined8 FUN_103f1d7d0(void)

{
  return 2;
}



/* Entry: 103f1d7d8; end: 103f1d81f; -[SCMixedCarouselRectangularShapeStoryTypeMask init] */

void FUN_103f1d7d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCStoriesConfigProvidingWrapper.swift",0x41,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1d820);
  (*pcVar1)();
}



/* Entry: 103f1d820; end: 103f1d823;  */

void FUN_103f1d820(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1d824; end: 103f1d897;  */

void FUN_103f1d824(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1d898; end: 103f1d89b;  */

void FUN_103f1d898(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1d89c; end: 103f1d8a3; +[SCSpotlightPrefetchJobAppStateOption none] */

undefined8 FUN_103f1d89c(void)

{
  return 0;
}



/* Entry: 103f1d8a4; end: 103f1d8ab; +[SCSpotlightPrefetchJobAppStateOption foreground] */

undefined8 FUN_103f1d8a4(void)

{
  return 0;
}



/* Entry: 103f1d8ac; end: 103f1d8b3; +[SCSpotlightPrefetchJobAppStateOption background] */

undefined8 FUN_103f1d8ac(void)

{
  return 2;
}



/* Entry: 103f1d8b4; end: 103f1d8bb; +[SCSpotlightPrefetchJobAppStateOption systemBackgroundWakeup] */

undefined8 FUN_103f1d8b4(void)

{
  return 4;
}



/* Entry: 103f1d8bc; end: 103f1d8c3; +[SCSpotlightPrefetchJobAppStateOption notificationWakeup] */

undefined8 FUN_103f1d8bc(void)

{
  return 8;
}



/* Entry: 103f1d8c4; end: 103f1d8cb; +[SCSpotlightPrefetchJobAppStateOption bgProcessingWakeup] */

undefined8 FUN_103f1d8c4(void)

{
  return 0x10;
}



/* Entry: 103f1d8cc; end: 103f1d967; -[SCSpotlightPrefetchJobAppStateOption init] */

void FUN_103f1d8cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesExperimentServices/SCSpotlightConfigProviding_DEPRECATEDWrapper.swift",0x4e,2
             ,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1d914);
  (*pcVar1)();
}



/* Entry: 103f1d968; end: 103f1d97b;  */

bool FUN_103f1d968(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f1d97c; end: 103f1da53;  */

void FUN_103f1d97c(void)

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



/* Entry: 103f1da54; end: 103f1da5f;  */

void FUN_103f1da54(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f1da60; end: 103f1dab3;  */

void FUN_103f1da60(void)

{
  undefined8 uVar1;
  
  FUN_103f1fa98(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000021;
  FUN_103f1f594(0xd000000000000021,0x800000010f1cfb10,0,0xe000000000000000);
  uRam00000001138125b0 = uVar1;
  return;
}



/* Entry: 103f1dab4; end: 103f1dacf; +[SCSpotlightPlaybackFeatureConfigKeys debugFeedCompositeId] */

void FUN_103f1dab4(void)

{
  if (lRam00000001135eb660 != -1) {
    _swift_once(0x1135eb660,FUN_103f1da60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138125b0);
  return;
}



/* Entry: 103f1dad0; end: 103f1db23;  */

void FUN_103f1dad0(void)

{
  undefined8 uVar1;
  
  FUN_103f1fa98(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002b;
  FUN_103f1f594(0xd00000000000002b,0x800000010f1cfae0,0,0xe000000000000000);
  uRam00000001138125b8 = uVar1;
  return;
}



/* Entry: 103f1db24; end: 103f1db3f; +[SCSpotlightPlaybackFeatureConfigKeys debugFeedBatchRequestCompositeStoryIds] */

void FUN_103f1db24(void)

{
  if (lRam00000001135eb668 != -1) {
    _swift_once(0x1135eb668,FUN_103f1dad0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138125b8);
  return;
}



/* Entry: 103f1db40; end: 103f1db8f;  */

void FUN_103f1db40(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000028;
  func_0x000100442ccc(0xd000000000000028,0x800000010f1cfab0,0);
  uRam00000001138125c0 = uVar1;
  return;
}



/* Entry: 103f1db90; end: 103f1dbcf;  */

undefined8 FUN_103f1db90(void)

{
  if (lRam00000001135eb670 != -1) {
    _swift_once(0x1135eb670,FUN_103f1db40);
  }
  return 0x1138125c0;
}



/* Entry: 103f1dbd0; end: 103f1dbeb; +[SCSpotlightPlaybackFeatureConfigKeys inAppSubmissionWidgetEnabled] */

void FUN_103f1dbd0(void)

{
  if (lRam00000001135eb670 != -1) {
    _swift_once(0x1135eb670,FUN_103f1db40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138125c0);
  return;
}



/* Entry: 103f1dbec; end: 103f1dc3b;  */

void FUN_103f1dbec(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000001e;
  func_0x000100442ccc(0xd00000000000001e,0x800000010f1cfa90,0);
  uRam00000001138125c8 = uVar1;
  return;
}


