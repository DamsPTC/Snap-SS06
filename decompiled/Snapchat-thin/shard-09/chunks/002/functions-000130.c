/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a6312c; end: 106a631c7;  */

void FUN_106a6312c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106a631c8;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 106a631c8; end: 106a631d7;  */

void FUN_106a631c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a631d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106a631d8; end: 106a63263; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _emitTimeMetricsWithStartTime:step:sequence:] */

void FUN_106a631d8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  dVar2 = param_1;
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar2 - param_1) * 1000.0),uVar1,param_3,param_4,param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a63264; end: 106a6326b; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager desiredPlaylistReordering] */

undefined8 FUN_106a63264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 106a6326c; end: 106a63273; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager setDesiredPlaylistReordering:] */

void FUN_106a6326c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a63274; end: 106a63437; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager .cxx_destruct] */

void FUN_106a63274(long param_1)

{
  _objc_destroyWeak(param_1 + 0x140);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a63438; end: 106a6352b; -[SCDiscoverFeedUpNextPlaybackSessionData initWithPlaybackDataProvider:operaPresenter:lastPlaylistIndexBeforeUpNext:sequence:upNextStories:isRetryRequest:] */

undefined1 *
FUN_106a63438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4818;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a6352c; end: 106a6354f; -[SCDiscoverFeedUpNextPlaybackSessionData copyWithZone:] */

undefined8 FUN_106a6352c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a63550; end: 106a635db; -[SCDiscoverFeedUpNextPlaybackSessionData hash] */

undefined8 * FUN_106a63550(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106a636a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a636b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[4] == param_3[4] && (puVar3[5] == param_3[5])) &&
        (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[6];
          if (puVar6 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_106a636b0;
          }
          goto LAB_106a636a4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106a636b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106a635dc; end: 106a636cb; -[SCDiscoverFeedUpNextPlaybackSessionData isEqual:] */

long FUN_106a635dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a636a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a636b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_106a636b0;
          }
          goto LAB_106a636a4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106a636b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a636cc; end: 106a636d3; -[SCDiscoverFeedUpNextPlaybackSessionData playbackDataProvider] */

undefined8 FUN_106a636cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a636d4; end: 106a636db; -[SCDiscoverFeedUpNextPlaybackSessionData operaPresenter] */

undefined8 FUN_106a636d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a636dc; end: 106a636e3; -[SCDiscoverFeedUpNextPlaybackSessionData lastPlaylistIndexBeforeUpNext] */

undefined8 FUN_106a636dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a636e4; end: 106a636eb; -[SCDiscoverFeedUpNextPlaybackSessionData sequence] */

undefined8 FUN_106a636e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a636ec; end: 106a636f3; -[SCDiscoverFeedUpNextPlaybackSessionData upNextStories] */

undefined8 FUN_106a636ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106a636f4; end: 106a636fb; -[SCDiscoverFeedUpNextPlaybackSessionData isRetryRequest] */

undefined1 FUN_106a636f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106a636fc; end: 106a63737; -[SCDiscoverFeedUpNextPlaybackSessionData .cxx_destruct] */

void FUN_106a636fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106a63738; end: 106a63743; -[SCFeatureSettingsService hasSpotlightInterstitialImpressionCount] */

void FUN_106a63738(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e68c58);
  return;
}



/* Entry: 106a63744; end: 106a6374f; -[SCFeatureSettingsService spotlightInterstitialImpressionCountServerParam] */

undefined ** FUN_106a63744(void)

{
  return &PTR____CFConstantStringClassReference_110e68c58;
}



/* Entry: 106a63750; end: 106a6375f; -[SCFeatureSettingsService setSpotlightInterstitialImpressionCount:] */

void FUN_106a63750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e68c58,param_3);
  return;
}



/* Entry: 106a63760; end: 106a63767; -[SCFeatureSettingsService spotlight_interstitial_impression_count_client_value:] */

void FUN_106a63760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106a63768; end: 106a6376f; -[SCFeatureSettingsService spotlight_interstitial_impression_count_server_value:] */

void FUN_106a63768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106a63770; end: 106a6377f; -[SCFeatureSettingsService spotlightInterstitialImpressionCount] */

void FUN_106a63770(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e68c58,0);
  return;
}



/* Entry: 106a63780; end: 106a63803; -[SCSpotlightOperaUserInteractionPlugin initWithUserInteractionDelegate:deepEngagmentThrehold:] */

undefined1 *
FUN_106a63780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4820;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    *(undefined8 *)((long)puVar1 + 0x20) = 1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a63804; end: 106a63807; -[SCSpotlightOperaUserInteractionPlugin setPlaylistItemController:] */

void FUN_106a63804(void)

{
  return;
}



/* Entry: 106a63808; end: 106a638cf; -[SCSpotlightOperaUserInteractionPlugin setOperaControlling:] */

void FUN_106a63808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_retain();
  uVar3 = param_3;
  func_0x00010bf99b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar3);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a638d0; end: 106a63a1b; -[SCSpotlightOperaUserInteractionPlugin registeredEventsForOperaSession] */

void FUN_106a638d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c08ea40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_88 = puVar1;
  func_0x00010c2694a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_80 = puVar2;
  func_0x00010bf7a560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2638;
  puStack_78 = puVar3;
  func_0x00010bf7a540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2638;
  puStack_70 = puVar4;
  func_0x00010bf75b40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2638;
  puStack_68 = puVar5;
  func_0x00010c269640();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &puStack_88;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar9);
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c2694a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_f8 = puVar2;
  func_0x00010bf7a540();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf4b900();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((int)puVar5 == 0) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c269640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2638;
    puStack_110 = puVar2;
    func_0x00010c08ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2638;
    puStack_108 = puVar3;
    func_0x00010bf7a560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_100 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_110,3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf4b900();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar6 == 0) goto LAB_106a63bc4;
    puVar1[0x18] = 0;
    puVar2 = puVar1 + 8;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c24b920();
  }
  else {
    puVar1[0x18] = 1;
    if ((*(long *)(puVar1 + 0x20) < *(long *)(puVar1 + 0x28)) && (puVar1[0x19] != '\x01'))
    goto LAB_106a63bc4;
    puVar1[0x19] = 1;
    puVar2 = puVar1 + 8;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c24b940();
  }
  _objc_release(puVar2);
LAB_106a63bc4:
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010bf75b40(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar9;
  func_0x00010c0720c0(ppuVar9,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar8 != 0) {
    lVar10 = *(long *)(puVar1 + 0x20) + -1;
    if (puVar1[0x18] != '\0') {
      lVar10 = *(long *)(puVar1 + 0x20) + 1;
    }
    *(long *)(puVar1 + 0x20) = lVar10;
  }
  _objc_release(ppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(ppuVar9 + 1);
  return;
}



/* Entry: 106a63a1c; end: 106a63c4b; -[SCSpotlightOperaUserInteractionPlugin operaViewDidSendEvent:page:params:] */

void FUN_106a63a1c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c2694a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_68 = puVar1;
  func_0x00010bf7a540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf4b900();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar4 == 0) {
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010c269640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2638;
    puStack_80 = puVar1;
    func_0x00010c08ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2638;
    puStack_78 = puVar2;
    func_0x00010bf7a560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf4b900();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar5 == 0) goto LAB_106a63bc4;
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c24b920();
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    if ((*(long *)(param_1 + 0x20) < *(long *)(param_1 + 0x28)) &&
       (*(char *)(param_1 + 0x19) != '\x01')) goto LAB_106a63bc4;
    *(undefined1 *)(param_1 + 0x19) = 1;
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c24b940();
  }
  _objc_release(lVar6);
LAB_106a63bc4:
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010bf75b40(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)lVar6 != 0) {
    lVar6 = *(long *)(param_1 + 0x20) + -1;
    if (*(char *)(param_1 + 0x18) != '\0') {
      lVar6 = *(long *)(param_1 + 0x20) + 1;
    }
    *(long *)(param_1 + 0x20) = lVar6;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + 8);
  return;
}



/* Entry: 106a63c4c; end: 106a63c73; -[SCSpotlightOperaUserInteractionPlugin .cxx_destruct] */

void FUN_106a63c4c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a63c74; end: 106a64c7b; -[SCSpotlightPlaybackManager initWithUserSession:pageType:operaDismissGestureView:pluginInitializer:playableViewModelGenerator:cachedReadReceiptViewStateProvider:discoverFeedDataFetcher:discoverFeedDataMutator:preferences:storiesConfigProvider:circumstanceEngine:complianceEngine:appStartExperimentReader:pageSessionCoordinator:interactionHistoryManager:readReceiptCoordinator:adConfigProvider:snapchattersSynchronousDataFetcher:grapheneRegistry:operaSessionScopeExposer:operaSessionScopeServices:storiesMixerNetworkRequester:snapchattersDataFetcher:pageLoadMetricManager:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:configuration:sourcePage:prefersHorizontalNavigation:notificationPool:storiesMediaCoordinator:contentDelivery:spotlightMediaFetcherFactory:spotlightDisplayOrdererFactory:spotlightStoriesPrefetcherFactory:dsaExplainerScopeExposer:dsaExplainerScopeServices:networkConnectivityMonitor:locationProvider:spotlightRepliesScopeExposer:adRenderDataParser:spotlightUsageTracker:operaPluginCreator:contentObjectResolver:operaLifecycleObserver:featureSettingsService:interstitialRepository:] */

undefined8 *
FUN_106a63c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined1 param_31,undefined4 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  puVar2 = &UNK_10f3aae97;
  func_0x0001000ba800();
  puStack_80 = PTR_PTR_1126f4828;
  puVar3 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar9 = puVar3[0x53];
    puVar3[0x53] = puVar4;
    _objc_release(uVar9);
    puVar3[0x84] = 0xffffffffffffffff;
    _objc_retain(param_33);
    uVar9 = puVar3[0x4a];
    puVar3[0x4a] = param_33;
    _objc_release(uVar9);
    puVar3[0x44] = param_30;
    *(undefined1 *)(puVar3 + 0x45) = param_31;
    _objc_retain(param_3);
    uVar9 = puVar3[5];
    puVar3[5] = param_3;
    _objc_release(uVar9);
    puVar3[0x18] = param_4;
    _objc_storeWeak(puVar3 + 0x1b,param_5);
    _objc_retain(param_7);
    uVar9 = puVar3[6];
    puVar3[6] = param_7;
    _objc_release(uVar9);
    _objc_retain(param_16);
    uVar9 = puVar3[0x6e];
    puVar3[0x6e] = param_16;
    _objc_release(uVar9);
    uVar9 = param_6;
    _objc_retainBlock();
    uVar10 = puVar3[8];
    puVar3[8] = uVar9;
    _objc_release(uVar10);
    _objc_retain(param_8);
    uVar9 = puVar3[9];
    puVar3[9] = param_8;
    _objc_release(uVar9);
    _objc_retain(param_9);
    uVar9 = puVar3[10];
    puVar3[10] = param_9;
    _objc_release(uVar9);
    _objc_retain(param_10);
    uVar9 = puVar3[0xb];
    puVar3[0xb] = param_10;
    _objc_release(uVar9);
    puVar3[0x1f] = 0x4092c00000000000;
    _objc_retain(param_35);
    uVar9 = puVar3[0x4d];
    puVar3[0x4d] = param_35;
    _objc_release(uVar9);
    _objc_retain(param_36);
    uVar9 = puVar3[0x4e];
    puVar3[0x4e] = param_36;
    _objc_release(uVar9);
    _objc_retain(param_37);
    uVar9 = puVar3[0x4f];
    puVar3[0x4f] = param_37;
    _objc_release(uVar9);
    _objc_retain(param_38);
    uVar9 = puVar3[0x50];
    puVar3[0x50] = param_38;
    _objc_release(uVar9);
    _objc_retain(param_47);
    uVar9 = puVar3[0x78];
    puVar3[0x78] = param_47;
    _objc_release(uVar9);
    _objc_retain(param_48);
    uVar9 = puVar3[0x46];
    puVar3[0x46] = param_48;
    _objc_release(uVar9);
    _objc_retain(param_49);
    uVar9 = puVar3[0x7c];
    puVar3[0x7c] = param_49;
    _objc_release(uVar9);
    _objc_retain(param_50);
    uVar9 = puVar3[0x7d];
    puVar3[0x7d] = param_50;
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar9 = puVar3[0x79];
    puVar3[0x79] = puVar4;
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_retain(puVar3);
    _objc_retain(puVar3);
    _objc_retain(puVar3);
    _objc_retain(puVar3);
    func_0x00010c0bec00(param_29);
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar9 = puVar3[0x11];
    puVar3[0x11] = puVar4;
    _objc_release(uVar9);
    uVar9 = puVar3[0x37];
    func_0x000100504554(uVar9,&PTR___NSConcreteGlobalBlock_110958da8);
    func_0x00010be4f940(puVar3);
    _objc_release(uVar9);
    uVar9 = puVar3[10];
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = puVar3[0xc];
    puVar3[0xc] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = puVar3[0xd];
    puVar3[0xd] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar9 = puVar3[0x62];
    puVar3[0x62] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = puVar3[0x10];
    puVar3[0x10] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar9 = puVar3[0x13];
    puVar3[0x13] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar9 = puVar3[0x14];
    puVar3[0x14] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar9 = puVar3[0x15];
    puVar3[0x15] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar9 = puVar3[0x16];
    puVar3[0x16] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar9 = puVar3[0x1c];
    puVar3[0x1c] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar9 = puVar3[0xf];
    puVar3[0xf] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar9 = puVar3[0x1d];
    puVar3[0x1d] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010c1878e0(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = puVar3[0x58];
    puVar3[0x58] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar9 = puVar3[0x57];
    puVar3[0x57] = puVar4;
    _objc_release(uVar9);
    uVar10 = puVar3[0x57];
    uVar9 = puVar3[0x58];
    func_0x00010bf51e00();
    func_0x00010c0d9840(uVar10);
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = puVar3[0x68];
    puVar3[0x68] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = puVar3[0x6a];
    puVar3[0x6a] = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = puVar3[0x66];
    puVar3[0x66] = puVar4;
    _objc_release(uVar9);
    _objc_retain(param_11);
    uVar9 = puVar3[0x22];
    puVar3[0x22] = param_11;
    _objc_release(uVar9);
    _objc_retain(param_17);
    uVar9 = puVar3[0x24];
    puVar3[0x24] = param_17;
    _objc_release(uVar9);
    _objc_retain(param_18);
    uVar9 = puVar3[0x26];
    puVar3[0x26] = param_18;
    _objc_release(uVar9);
    _objc_retain(param_19);
    uVar9 = puVar3[0x27];
    puVar3[0x27] = param_19;
    _objc_release(uVar9);
    _objc_retain(param_13);
    uVar9 = puVar3[0x2a];
    puVar3[0x2a] = param_13;
    _objc_release(uVar9);
    _objc_retain(param_14);
    uVar9 = puVar3[0x2b];
    puVar3[0x2b] = param_14;
    _objc_release(uVar9);
    _objc_retain(param_15);
    uVar9 = puVar3[0x2c];
    puVar3[0x2c] = param_15;
    _objc_release(uVar9);
    _objc_retain(param_12);
    uVar9 = puVar3[0x2d];
    puVar3[0x2d] = param_12;
    _objc_release(uVar9);
    _objc_retain(param_20);
    uVar9 = puVar3[0x2e];
    puVar3[0x2e] = param_20;
    _objc_release(uVar9);
    _objc_retain(param_21);
    uVar9 = puVar3[0x2f];
    puVar3[0x2f] = param_21;
    _objc_release(uVar9);
    _objc_retain(param_24);
    uVar9 = puVar3[0x30];
    puVar3[0x30] = param_24;
    _objc_release(uVar9);
    _objc_retain(param_25);
    uVar9 = puVar3[0x34];
    puVar3[0x34] = param_25;
    _objc_release(uVar9);
    _objc_retain(param_26);
    uVar9 = puVar3[0x40];
    puVar3[0x40] = param_26;
    _objc_release(uVar9);
    _objc_retain(param_27);
    uVar9 = puVar3[0x47];
    puVar3[0x47] = param_27;
    _objc_release(uVar9);
    _objc_retain(param_28);
    uVar9 = puVar3[0x48];
    puVar3[0x48] = param_28;
    _objc_release(uVar9);
    _objc_retain(param_22);
    uVar9 = puVar3[0x32];
    puVar3[0x32] = param_22;
    _objc_release(uVar9);
    _objc_retain(param_23);
    uVar9 = puVar3[0x33];
    puVar3[0x33] = param_23;
    _objc_release(uVar9);
    iVar1 = (int)puVar3[0x2c];
    func_0x00010c067f00();
    puVar3[0x35] = (long)iVar1;
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    _objc_retain(param_34);
    uVar9 = puVar3[0x4b];
    puVar3[0x4b] = param_34;
    _objc_release(uVar9);
    uVar10 = param_21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bfb1d20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar3[0x4c];
    puVar3[0x4c] = uVar9;
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_retain(param_39);
    uVar9 = puVar3[0x59];
    puVar3[0x59] = param_39;
    _objc_release(uVar9);
    _objc_retain(param_40);
    uVar9 = puVar3[0x5a];
    puVar3[0x5a] = param_40;
    _objc_release(uVar9);
    uVar9 = param_13;
    func_0x000108f4ae38();
    *(char *)(puVar3 + 0x5b) = (char)uVar9;
    _objc_retain(param_41);
    uVar9 = puVar3[0x5c];
    puVar3[0x5c] = param_41;
    _objc_release(uVar9);
    _objc_retain(param_42);
    uVar9 = puVar3[0x5d];
    puVar3[0x5d] = param_42;
    _objc_release(uVar9);
    fVar13 = 60.0;
    func_0x00010bfb2cc0(puVar3[0x2c]);
    puVar3[0x5e] = (double)fVar13;
    fVar13 = 60.0;
    func_0x00010bfb2cc0(puVar3[0x2c]);
    puVar3[0x5f] = (double)fVar13;
    puVar4 = PTR_PTR_1126cffb8;
    _objc_alloc_init();
    uVar9 = puVar3[0x90];
    puVar3[0x90] = puVar4;
    _objc_release(uVar9);
    func_0x00010c2059c0(puVar3[0x90]);
    _objc_retain(param_43);
    uVar9 = puVar3[0x60];
    puVar3[0x60] = param_43;
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126cffc0;
    _objc_alloc_init();
    uVar9 = puVar3[99];
    puVar3[99] = puVar4;
    _objc_release(uVar9);
    _objc_retain(param_45);
    uVar9 = puVar3[0x6d];
    puVar3[0x6d] = param_45;
    _objc_release(uVar9);
    _objc_retain(param_44);
    uVar9 = puVar3[0x28];
    puVar3[0x28] = param_44;
    _objc_release(uVar9);
    _objc_retain(param_46);
    uVar9 = puVar3[0x70];
    puVar3[0x70] = param_46;
    _objc_release(uVar9);
    lVar7 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0e00;
    func_0x00010bf7fda0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010bf1f320();
    *(byte *)(puVar3 + 0x71) = (byte)lVar6 ^ 1;
    _objc_release(puVar4);
    _objc_release(lVar7);
    lVar6 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0e00;
    func_0x00010c11bee0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1f360();
    *(char *)((long)puVar3 + 0x33b) = (char)lVar7;
    _objc_release(puVar4);
    _objc_release(lVar6);
    lVar7 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0e00;
    func_0x00010befe3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010bf1f360();
    *(char *)((long)puVar3 + 0x33c) = (char)lVar6;
    _objc_release(puVar4);
    _objc_release(lVar7);
    lVar6 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar7;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar12;
    func_0x00010bf926c0();
    *(char *)((long)puVar3 + 0x33d) = (char)lVar8;
    _objc_release(lVar12);
    _objc_release(lVar7);
    _objc_release();
    func_0x000108f5538c();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      lVar12 = param_12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c0e00;
      func_0x00010bf66120(PTR_PTR_1126c0e00);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar12;
      func_0x00010c25d300();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puVar3[0x6c];
      puVar3[0x6c] = lVar7;
      _objc_release(uVar9);
      _objc_release(puVar4);
    }
    else {
      func_0x000108f5538c();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = puVar3[0x6c];
      puVar3[0x6c] = lVar7;
    }
    _objc_release(lVar12);
    _objc_release(lVar6);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar3[0x72];
    puVar3[0x72] = puVar4;
    _objc_release(uVar9);
    uVar9 = puVar3[0x74];
    puVar3[0x74] = 0;
    puVar3[0x73] = 0;
    _objc_release(uVar9);
    *(undefined1 *)(puVar3 + 0x7a) = 0;
    puVar3[0x7b] = 0;
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  func_0x0001000e2a84(puVar2);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106a64c7c; end: 106a64caf;  */

void FUN_106a64c7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x358);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x358) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a64cb0; end: 106a64e5f;  */

void FUN_106a64cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1b8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1b8) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x1e8) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1e0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1e0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1f0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1f0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1f8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1f8) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 800);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 800) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x328);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x328) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x358);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x358) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x210);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x210) = param_9;
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a64e60; end: 106a64f53;  */

void FUN_106a64e60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c0) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x328);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x328) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1f0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1f0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 800);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 800) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x1e8) = 1;
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a64f54; end: 106a64fcb;  */

void FUN_106a64f54(long param_1)

{
  undefined8 uVar1;
  long in_x5;
  long lVar2;
  
  _objc_retain(in_x5);
  if (in_x5 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(in_x5);
    uVar1 = *(undefined8 *)(lVar2 + 0x208);
    *(long *)(lVar2 + 0x208) = in_x5;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 106a64fcc; end: 106a6506b; -[SCSpotlightPlaybackManager applicationDidBackground] */

void FUN_106a64fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if ((*(byte *)(param_1 + 0x33f) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010bf60f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf60f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c259740();
      func_0x00010c0df880(puVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5200(param_1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0x33f) = 1;
    }
  }
  return;
}



/* Entry: 106a6506c; end: 106a650b7; -[SCSpotlightPlaybackManager applicationWillEnterForeground] */

void FUN_106a6506c(long param_1)

{
  if (*(char *)(param_1 + 0x33c) == '\x01') {
    func_0x00010be5df40(param_1);
  }
  else if (*(char *)(param_1 + 0x33b) == '\x01') {
    func_0x00010be5e140(param_1);
  }
  *(undefined1 *)(param_1 + 0x33f) = 0;
  return;
}



/* Entry: 106a650b8; end: 106a65133; -[SCSpotlightPlaybackManager _shouldRefreshMixedFeedOnForegroundAfterTTL] */

bool FUN_106a650b8(double param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  if ((*(long *)(param_2 + 0x248) == 0x62) &&
     (lVar1 = param_2, func_0x00010c07ab40(), (int)lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010be46f20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      bVar2 = false;
    }
    else {
      func_0x00010c26f3a0(lVar1);
      bVar2 = *(double *)(param_2 + 0x2f8) <= -param_1;
    }
    _objc_release(lVar1);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 106a65134; end: 106a6516b; -[SCSpotlightPlaybackManager _maybePurgeWatchedStoriesOnForeground] */

void FUN_106a65134(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb52c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be88ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshStoriesUserInitiated__11257fc48,0);
    return;
  }
  return;
}



/* Entry: 106a6516c; end: 106a6519f; -[SCSpotlightPlaybackManager _maybeAdvanceToUnwatchedOnForeground] */

void FUN_106a6516c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb52c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__advanceToNextUnwatchedStoryInCu_11254ffb0)
    ;
    return;
  }
  return;
}



/* Entry: 106a651a0; end: 106a6541f; -[SCSpotlightPlaybackManager _advanceToNextUnwatchedStoryInCurrentPlaylist] */

void FUN_106a651a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  long unaff_x21;
  long lVar8;
  int iVar9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x148);
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    unaff_x19 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x19 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_140 = unaff_x19;
      puStack_138 = puVar2;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = unaff_x19;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        unaff_x21 = *plStack_120;
        do {
          lVar7 = 0;
          do {
            if (*plStack_120 != unaff_x21) {
              _objc_enumerationMutation(unaff_x19);
            }
            lVar8 = *(long *)(lStack_128 + lVar7 * 8);
            lVar4 = lVar8;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c08fa60();
            _objc_release(lVar4);
            if (lVar5 != 0) {
              iVar9 = (int)*(undefined8 *)(param_1 + 0x68);
              lVar4 = lVar8;
              func_0x00010be36bc0(lVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4b900();
              _objc_release(lVar4);
              if (iVar9 == 0) {
                lVar4 = lVar1;
                func_0x00010bf63e80();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar4;
                func_0x000107d005a8();
                if (lVar5 != 0) {
                  iVar9 = (int)*(undefined8 *)(param_1 + 0x60);
                  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf4b900();
                  _objc_release(puVar2);
                  if (iVar9 != 0) {
                    func_0x00010be36bc0(lVar8);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puStack_138);
                    _objc_release(lVar8);
                  }
                }
              }
              else {
                func_0x00010be36bc0(lVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puStack_138);
                lVar4 = lVar8;
              }
              _objc_release(lVar4);
            }
            lVar7 = lVar7 + 1;
          } while (lVar3 != lVar7);
          lVar3 = unaff_x19;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(unaff_x19);
      puVar2 = puStack_138;
      func_0x00010bea3260(param_1);
      _objc_release(puVar2);
      unaff_x19 = lStack_140;
    }
    _objc_release(unaff_x19);
  }
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106a65420;
  uVar6 = *(undefined8 *)(lVar3 + 0x50);
  lStack_170 = lVar1;
  lStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar6);
  lVar1 = *(long *)(lVar3 + 400);
  if (lVar1 != 0) {
    uStack_1a0 = 0;
    uStack_190 = 0x3032000000;
    pcStack_188 = FUN_106a65534;
    uStack_180 = 0x106a65544;
    puStack_198 = &uStack_1a0;
    _objc_retain(lVar1);
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    uStack_1b8 = 0x106a6554c;
    puStack_1b0 = &UNK_110847658;
    puStack_1a8 = &uStack_1a0;
    lStack_178 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_1c8);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(lStack_178);
  }
  puStack_1d0 = PTR_PTR_1126f4828;
  lStack_1d8 = lVar3;
  _objc_msgSendSuper2(&lStack_1d8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a65420; end: 106a65533; -[SCSpotlightPlaybackManager dealloc] */

void FUN_106a65420(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 400);
  if (lVar2 != 0) {
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106a65534;
    uStack_40 = 0x106a65544;
    puStack_58 = &uStack_60;
    _objc_retain(lVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x106a6554c;
    puStack_70 = &UNK_110847658;
    puStack_68 = &uStack_60;
    lStack_38 = lVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(lStack_38);
  }
  puStack_90 = PTR_PTR_1126f4828;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a65534; end: 106a6555f;  */

void FUN_106a65534(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a65560; end: 106a6560f; -[SCSpotlightPlaybackManager setCurrentlyPlayingStory:] */

void FUN_106a65560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf26620(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a65610; end: 106a65b9b; -[SCSpotlightPlaybackManager _refreshContentAvailabilityForPlaylist:] */

void FUN_106a65610(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puStack_210;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined8 *)PTR_PTR_1126c0e00;
    func_0x00010bef0e00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar3;
    puVar18 = puVar2;
    func_0x00010bf1f320();
    _objc_release(puVar2);
    _objc_release(uVar3);
    if ((int)uVar17 != 0) {
      puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      _objc_opt_new();
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      _objc_retain(param_3);
      puVar18 = &uStack_1b0;
      puStack_210 = param_3;
      func_0x00010bf52a60();
      if (puStack_210 != (undefined8 *)0x0) {
        lVar16 = *plStack_1a0;
        do {
          puVar18 = (undefined8 *)0x0;
          do {
            if (*plStack_1a0 != lVar16) {
              _objc_enumerationMutation(param_3);
            }
            uVar17 = *(undefined8 *)(lStack_1a8 + (long)puVar18 * 8);
            lVar4 = *(long *)(param_1 + 0x310);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 == 0) {
              lVar5 = *(long *)(param_1 + 0x50);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c282800(uVar17);
              lVar6 = lVar5;
              func_0x00010c25bac0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar5);
            }
            else {
              _objc_retain(lVar4);
              lVar6 = lVar4;
            }
            _objc_release(lVar4);
            lVar7 = lVar6;
            func_0x000108f4bad8();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar7;
            func_0x00010bf52a60();
            lVar5 = lRam0000000000000000;
            while (lVar4 != 0) {
              lVar19 = 0;
              do {
                if (lRam0000000000000000 != lVar5) {
                  _objc_enumerationMutation(lVar7);
                }
                lVar8 = *(long *)(lVar19 * 8);
                func_0x000107d03060(lVar8,0);
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar8;
                func_0x00010bf267e0();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010c08fa60();
                _objc_release(lVar9);
                if (lVar10 != 0) {
                  lVar9 = lVar8;
                  func_0x000107cc6524(lVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar2);
                  _objc_release(lVar9);
                  lVar9 = lVar8;
                  func_0x00010bf1eea0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar9;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar10;
                  func_0x00010c08fa60();
                  if (lVar11 == 0) {
                    _objc_release(lVar10);
LAB_106a65950:
                    _objc_release(lVar9);
                  }
                  else {
                    lVar11 = lVar8;
                    func_0x00010c27dd80();
                    uVar1 = lVar11 + 1;
                    if (((0x1b < uVar1 || (1L << (uVar1 & 0x3f) & 0xb4b5dbbU) == 0) || 0x1a < uVar1)
                        || (1L << (uVar1 & 0x3f) & 0x6c6bd77U) == 0) {
                      _objc_release(lVar10);
                      _objc_release(lVar9);
LAB_106a65924:
                      lVar9 = lVar8;
                      func_0x000107cc65c0(lVar8);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar2);
                      goto LAB_106a65950;
                    }
                    lVar11 = lVar8;
                    func_0x00010bf1eea0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar12 = lVar11;
                    func_0x00010c0ef4a0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar12;
                    func_0x00010c08fa60();
                    _objc_release(lVar12);
                    _objc_release(lVar11);
                    _objc_release(lVar10);
                    _objc_release(lVar9);
                    if (lVar13 != 0) goto LAB_106a65924;
                  }
                  lVar9 = lVar8;
                  func_0x00010bf1eea0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar9;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar10;
                  func_0x00010c08fa60();
                  if (lVar11 == 0) {
                    _objc_release(lVar10);
LAB_106a65a00:
                    _objc_release(lVar9);
                  }
                  else {
                    lVar11 = lVar8;
                    func_0x00010bf1eea0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar12 = lVar11;
                    func_0x00010c0ef4a0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar12;
                    func_0x00010c08fa60();
                    _objc_release(lVar12);
                    _objc_release(lVar11);
                    _objc_release(lVar10);
                    _objc_release(lVar9);
                    if (lVar13 != 0) {
                      lVar9 = lVar8;
                      func_0x000107cc66ac(lVar8);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar2);
                      goto LAB_106a65a00;
                    }
                  }
                  lVar9 = lVar8;
                  func_0x00010bf1eea0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar9;
                  func_0x00010c260dc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar10;
                  func_0x00010c08fa60();
                  _objc_release(lVar10);
                  _objc_release(lVar9);
                  if (lVar11 != 0) {
                    lVar9 = lVar8;
                    func_0x000107cc6880();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2);
                    _objc_release(lVar9);
                  }
                }
                _objc_release(lVar8);
                lVar19 = lVar19 + 1;
              } while (lVar4 != lVar19);
              lVar4 = lVar7;
              func_0x00010bf52a60();
            }
            _objc_release(lVar7);
            _objc_release(lVar6);
            puVar18 = (undefined8 *)((long)puVar18 + 1);
          } while (puVar18 != puStack_210);
          puVar18 = &uStack_1b0;
          puStack_210 = param_3;
          func_0x00010bf52a60();
        } while (puStack_210 != (undefined8 *)0x0);
      }
      _objc_release(param_3);
      puVar14 = puVar2;
      func_0x00010bf529e0();
      if (puVar14 != (undefined8 *)0x0) {
        uVar17 = *(undefined8 *)(param_1 + 0x268);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar14;
        func_0x00010c125180(uVar17);
        _objc_release(puVar14);
        _objc_release(uVar17);
      }
      _objc_release(puVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar18);
  lVar16 = param_3[0x91];
  _objc_retain(lVar16);
  func_0x00010be88460(param_3);
  _objc_retain(puVar18);
  uVar17 = param_3[0x91];
  param_3[0x91] = puVar18;
  _objc_release(uVar17);
  func_0x00010c0d9840(param_3[0xf]);
  uVar3 = param_3[0x2d];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c0e00;
  func_0x00010c24b280(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf1f320();
  _objc_release(puVar15);
  _objc_release(uVar3);
  if ((int)uVar17 != 0) {
    lVar4 = lVar16;
    func_0x00010bf529e0();
    if (((lVar4 == 0) || (puVar2 = puVar18, func_0x00010bf529e0(), puVar2 != (undefined8 *)0x0)) ||
       (puVar2 = param_3, func_0x00010c07ab40(), (int)puVar2 == 0)) {
      puVar2 = param_3;
      func_0x00010be3f620();
      if ((int)puVar2 == 0) goto LAB_106a65cc0;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ffa60();
    }
    else {
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff8e0();
    }
    _objc_release(param_3);
  }
LAB_106a65cc0:
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar18);
  return;
}



/* Entry: 106a65b9c; end: 106a65cdf; -[SCSpotlightPlaybackManager setCurrentPlaylist:] */

void FUN_106a65b9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x488);
  _objc_retain(lVar5);
  func_0x00010be88460(param_1,param_2,param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x488);
  *(long *)(param_1 + 0x488) = param_3;
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0e00;
  func_0x00010c24b280(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1f320(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    lVar4 = lVar5;
    func_0x00010bf529e0();
    if (((lVar4 == 0) || (lVar4 = param_3, func_0x00010bf529e0(), lVar4 != 0)) ||
       (lVar4 = param_1, func_0x00010c07ab40(), (int)lVar4 == 0)) {
      lVar4 = param_1;
      func_0x00010be3f620(param_1,param_2,param_3);
      if ((int)lVar4 == 0) goto LAB_106a65cc0;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ffa60();
    }
    else {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff8e0();
    }
    _objc_release(param_1);
  }
LAB_106a65cc0:
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a65ce0; end: 106a65d07; -[SCSpotlightPlaybackManager desiredOrderSectionSource] */

void FUN_106a65ce0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a65d08; end: 106a65fcf; -[SCSpotlightPlaybackManager setDesiredPlaylistReordering:] */

void FUN_106a65d08(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x4c0);
  *(long *)(param_1 + 0x4c0) = param_3;
  _objc_release(uVar3);
  if ((param_3 != 0) && (*(long *)(param_1 + 0x1c0) == 0)) {
    uVar13 = param_1;
    func_0x00010c089a00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar13 == 0) {
      bVar1 = false;
    }
    else {
      uVar4 = param_1;
      func_0x00010c089a00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c259740();
      uVar6 = param_1;
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c282800();
      bVar1 = uVar5 == uVar8;
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    _objc_release(uVar13);
    if (*(long *)(param_1 + 0x2a8) == 0) {
      uVar12 = 0;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x90);
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        uVar12 = 0;
      }
      else {
        uVar13 = *(ulong *)(param_1 + 0x2a8);
        uVar3 = *(undefined8 *)(param_1 + 0x90);
        func_0x00010bfa4340(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071f40();
        if ((uVar13 & 1) == 0) {
          iVar2 = (int)*(undefined8 *)(param_1 + 0x2a8);
          func_0x00010c071f40();
          if (iVar2 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (uint)*(undefined8 *)(param_1 + 0x2c0);
            uVar10 = *(undefined8 *)(param_1 + 0x90);
            func_0x00010bfa4340(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            uVar12 = uVar12 ^ 1;
            _objc_release(uVar10);
          }
        }
        else {
          uVar12 = 1;
        }
        _objc_release(uVar3);
      }
      _objc_release(lVar9);
    }
    if (bVar1 || (uVar12 & 1) != 0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106a65fd0;
      puStack_68 = &UNK_110841f80;
      uStack_60 = param_1;
      _objc_retain(param_3);
      lStack_58 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_80);
      _objc_release(lStack_58);
    }
    else {
      uVar13 = param_1;
      func_0x00010c07ab40();
      if ((uVar13 & 1) == 0) {
        lVar9 = param_1 + 0x108;
        _objc_loadWeakRetained();
        if (lVar9 != 0) {
          lVar11 = param_3;
          func_0x00010bf529e0();
          _objc_release(lVar9);
          if (lVar11 != 0) {
            _objc_initWeak(auStack_88,param_1);
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0xc2000000;
            pcStack_a8 = FUN_106a660d0;
            puStack_a0 = &UNK_110841fb0;
            _objc_copyWeak(auStack_90,auStack_88);
            _objc_retain(param_3);
            lStack_98 = param_3;
            func_0x000100162d98("APPSTORE",&puStack_b8);
            _objc_release(lStack_98);
            _objc_destroyWeak(auStack_90);
            _objc_destroyWeak(auStack_88);
          }
        }
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a65fd0; end: 106a660cf;  */

void FUN_106a65fd0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a8) = 0;
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if ((lVar3 != 0) && (*(char *)(*(long *)(param_1 + 0x20) + 0xb9) == '\x01')) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c0e00;
      func_0x00010c24b960(PTR_PTR_1126c0e00);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf1f320(uVar5,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar5);
      if ((int)uVar2 != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb9) = 0;
        func_0x00010be17140(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28))
        ;
      }
    }
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb9) = 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar5;
  func_0x00010c089a00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd700(uVar5,param_2,uVar2,0);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x2b0) = 0;
  return;
}



/* Entry: 106a660d0; end: 106a66103;  */

void FUN_106a660d0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be17120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a66104; end: 106a661b7; -[SCSpotlightPlaybackManager _finishPresentingOperaPresenterIfNeededWithStories:] */

void FUN_106a66104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    if (*(char *)(param_1 + 0xb9) != '\x01') goto LAB_106a661a0;
    uVar1 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24b960(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f320(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) goto LAB_106a661a0;
    *(undefined1 *)(param_1 + 0xb9) = 0;
  }
  func_0x00010be17140(param_1,param_2,param_3);
LAB_106a661a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a661b8; end: 106a66207; -[SCSpotlightPlaybackManager currentSectionKey] */

void FUN_106a661b8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x498);
  if (-1 < (long)uVar2) {
    uVar1 = *(ulong *)(param_1 + 0x460);
    func_0x00010bf529e0();
    if (uVar2 < uVar1) {
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x460),param_2,*(undefined8 *)(param_1 + 0x498))
      ;
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a66208; end: 106a66253; -[SCSpotlightPlaybackManager _initialSectionKey] */

void FUN_106a66208(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0xf0);
  uVar1 = *(ulong *)(param_1 + 0x460);
  func_0x00010bf529e0();
  if (uVar2 < uVar1) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x460),param_2,*(undefined8 *)(param_1 + 0xf0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a66254; end: 106a662ab; -[SCSpotlightPlaybackManager _forceUpdateCurrentSpotlightDisplayOrdererObservable] */

void FUN_106a66254(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a662ac;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106a662ac; end: 106a662e7;  */

void FUN_106a662ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2b8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2c0);
  func_0x00010bf51e00(uVar1);
  func_0x00010c0d9840(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a662e8; end: 106a663c7; -[SCSpotlightPlaybackManager _currentSpotlightDisplayOrdererObservable] */

void FUN_106a662e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x2b8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a663c8; end: 106a66857;  */

void FUN_106a663c8(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  ulong uVar18;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (uVar2 == 0) {
    uVar18 = *(ulong *)(param_1 + 0x20);
    func_0x00010c24b200(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = uVar2;
    func_0x00010bf5ff00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010c1561e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (uVar15 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      bVar17 = false;
      do {
        uVar16 = 0;
        uVar6 = uVar18;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar13);
          }
          uVar18 = *(ulong *)(uVar16 * 8);
          uVar4 = uVar18;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c067fc0();
          _objc_release(uVar4);
          _objc_retain(uVar18);
          _objc_release(uVar6);
          if (uVar5 != 0) {
            uVar6 = uVar3;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar18;
            func_0x00010bfa4340(uVar18);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar6;
            func_0x00010c071f40();
            _objc_release(uVar4);
            _objc_release(uVar6);
            if ((uVar5 & 1) != 0 || bVar17) {
              uVar6 = uVar18;
              func_0x00010bfa4340(uVar18);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = param_2;
              func_0x00010bf4b900();
              if ((uVar4 & 1) == 0) {
                _objc_release(uVar6);
              }
              else {
                lVar7 = *(long *)(uVar2 + 0xa8);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar6);
                if (lVar7 != 0) {
                  uVar8 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x168);
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar8;
                  func_0x00010c24afa0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar6;
                  func_0x00010c098520();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010bf926c0();
                  _objc_release(uVar4);
                  _objc_release(uVar6);
                  _objc_release(uVar8);
                  if ((uVar5 & 1) == 0) {
                    bVar17 = true;
                    goto LAB_106a665e8;
                  }
                  goto LAB_106a6664c;
                }
              }
              _objc_retain(uVar18);
              uVar12 = *(undefined8 *)(uVar2 + 0x90);
              *(ulong *)(uVar2 + 0x90) = uVar18;
              _objc_release(uVar12);
              uVar16 = *(ulong *)(param_1 + 0x20);
              func_0x00010c24b200();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar16;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar16);
              goto LAB_106a667f0;
            }
            bVar17 = false;
          }
LAB_106a665e8:
          uVar16 = uVar16 + 1;
          uVar6 = uVar18;
        } while (uVar15 != uVar16);
        uVar15 = uVar13;
        func_0x00010bf52a60();
      } while (uVar15 != 0);
    }
LAB_106a6664c:
    _objc_release(uVar13);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf926c0();
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar9);
    if (((int)uVar11 != 0) && (uVar15 = *(ulong *)(uVar2 + 0x4b0), uVar15 != 0x7fffffffffffffff)) {
      uVar13 = uVar2;
      func_0x00010c1561e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar13;
      func_0x00010bf529e0();
      _objc_release(uVar13);
      if (uVar15 < uVar16) {
        uVar15 = uVar2;
        func_0x00010c1561e0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar15;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar18);
        _objc_release(uVar15);
        uVar15 = uVar13;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(uVar15);
        uVar18 = uVar13;
      }
    }
    _objc_retain(uVar18);
    uVar12 = *(undefined8 *)(uVar2 + 0x90);
    *(ulong *)(uVar2 + 0x90) = uVar18;
    _objc_release(uVar12);
    uVar13 = *(ulong *)(param_1 + 0x20);
    func_0x00010c24b200(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
LAB_106a667f0:
    _objc_release(uVar13);
    _objc_release(uVar3);
  }
  _objc_release(uVar18);
  _objc_release(uVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    func_0x00010bdf71a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return;
}



/* Entry: 106a66858; end: 106a668a3; -[SCSpotlightPlaybackManager desiredPlaylistOrderingObservable] */

void FUN_106a66858(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf71a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a668a4; end: 106a668ab;  */

void FUN_106a668a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ece30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_orderedStories_112618da0);
  return;
}



/* Entry: 106a668ac; end: 106a669db; -[SCSpotlightPlaybackManager _observeDesiredPlaylistOrdering] */

void FUN_106a668ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x290) == 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1;
    func_0x00010bf6eac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x290);
    *(long *)(param_1 + 0x290) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106a669dc; end: 106a66a23;  */

void FUN_106a669dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18c200();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a66a24; end: 106a66b4f; -[SCSpotlightPlaybackManager _observeCurrentSectionForPrefetching] */

void FUN_106a66a24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106a66b50; end: 106a66c17;  */

void FUN_106a66b50(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf5ff00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2827c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x280);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c24c440();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x288) = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a66c18; end: 106a66eeb; -[SCSpotlightPlaybackManager _observeSectionEOF] */

void FUN_106a66c18(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((param_1[0x33e] & 1) == 0) && (param_1[0x339] == '\x01')) {
    param_2 = param_1;
    _objc_initWeak(auStack_108,param_1);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 0x460);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar10 = *plStack_140;
      do {
        lVar12 = 0;
        do {
          if (*plStack_140 != lVar10) {
            _objc_enumerationMutation(lVar9);
          }
          lVar11 = *(long *)(lStack_148 + lVar12 * 8);
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar11;
          func_0x00010c067fc0();
          _objc_release(lVar11);
          if (lVar2 != 0) {
            uVar3 = *(undefined8 *)(param_1 + 0x278);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c24b200();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar3);
            uVar4 = uVar5;
            func_0x00010bfd9420(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar4;
            func_0x00010bf870a0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x000100078e94();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar3;
            func_0x00010c0e0ea0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            param_2 = auStack_108;
            _objc_copyWeak(auStack_158,param_2);
            uVar8 = uVar7;
            func_0x00010c25ff60(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1a3e0();
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar4);
            _objc_destroyWeak(auStack_158);
            _objc_release(uVar5);
          }
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar12);
        lVar1 = lVar9;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    param_1[0x33e] = 1;
    param_1 = auStack_108;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2fb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a66eec; end: 106a66f53;  */

void FUN_106a66eec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2fb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a66f54; end: 106a66f5b; -[SCSpotlightPlaybackManager operaSpinnerWasVisible] */

void FUN_106a66f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x148),PTR_s_operaSpinnerWasVisible_112618760);
  return;
}



/* Entry: 106a66f5c; end: 106a66f63; -[SCSpotlightPlaybackManager hasCurrentOperaPageStartedPlayback] */

void FUN_106a66f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x148),PTR_s_mediaWasMidPlaybackBeforeDismiss_11260f698);
  return;
}



/* Entry: 106a66f64; end: 106a66f6b; -[SCSpotlightPlaybackManager feedSwitcherFeedDidDisappear] */

void FUN_106a66f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x148),PTR_s_announceFeedSwitcherFeedDidDisap_11259eac8);
  return;
}



/* Entry: 106a66f6c; end: 106a66f73; -[SCSpotlightPlaybackManager feedSwitcherFeedDidAppear] */

void FUN_106a66f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x148),PTR_s_announceFeedSwitcherFeedDidAppea_11259eac0);
  return;
}



/* Entry: 106a66f74; end: 106a66f8b; -[SCSpotlightPlaybackManager _currentOperaPresenting] */

void FUN_106a66f74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a66f8c; end: 106a66faf; -[SCSpotlightPlaybackManager _usesFriendsFeedDismissalTransition] */

bool FUN_106a66f8c(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    return *(long *)(param_1 + 0x220) == 0x16;
  }
  return false;
}



/* Entry: 106a66fb0; end: 106a66feb; -[SCSpotlightPlaybackManager _currentTransitionAnimator] */

void FUN_106a66fb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bee7360();
  if (((int)lVar1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    lVar1 = *(long *)(param_1 + 0x118);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a66fec; end: 106a6777f; -[SCSpotlightPlaybackManager presentOperaWithBaseView:presentingViewController:entryEvent:interactionContext:viewLocation:pageSessionId:notification:notificationsToPrepend:deepLink:compositeStoryId:discoverFeedStory:] */

void FUN_106a66fec(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined *param_5,undefined **param_6,undefined **param_7,undefined *param_8,
                  undefined **param_9,undefined **param_10,undefined **param_11,long param_12,
                  long param_13)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 auStack_178 [8];
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_128 = param_7;
  ppuStack_120 = param_3;
  _objc_retain(param_3);
  ppuStack_108 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  ppuStack_110 = param_10;
  _objc_retain(param_10);
  _objc_retain(param_11);
  lStack_118 = param_12;
  _objc_retain(param_12);
  _objc_retain(param_13);
  ppuVar3 = param_1;
  func_0x00010c1561e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010bf529e0();
  _objc_release(ppuVar3);
  ppuVar3 = (undefined **)0x0;
  if (ppuVar9 == (undefined **)0x0) goto LAB_106a676c8;
  if (param_8 != (undefined *)0x0) {
    puVar1 = param_1[0x8b];
    func_0x00010c0720c0();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = param_1[0x8e];
      param_1[0x8e] = (undefined *)0x0;
      _objc_release(puVar1);
      puVar1 = param_1[0x8f];
      param_1[0x8f] = (undefined *)0x0;
      _objc_release(puVar1);
    }
  }
  ppuVar3 = ppuStack_120;
  _objc_retain(ppuStack_120);
  puVar1 = param_1[0x20];
  param_1[0x20] = (undefined *)ppuVar3;
  _objc_release(puVar1);
  param_2 = ppuStack_108;
  _objc_storeWeak(param_1 + 0x21);
  puVar1 = param_8;
  func_0x00010bf51e00();
  puVar8 = param_1[0x8b];
  param_1[0x8b] = puVar1;
  _objc_release(puVar8);
  param_1[0x19] = param_5;
  param_1[0x1a] = (undefined *)param_6;
  param_1[0x49] = (undefined *)ppuStack_128;
  ppuVar3 = param_9;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar9 == (undefined **)0x0) {
    puVar1 = param_1[0x77];
    _objc_retain(puVar1);
    ppuVar9 = (undefined **)param_1[0x76];
    param_1[0x76] = puVar1;
  }
  else {
    ppuVar9 = param_9;
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar9;
    func_0x00010bf51e00();
    puVar1 = param_1[0x76];
    param_1[0x76] = (undefined *)ppuVar2;
    _objc_release(puVar1);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
  puVar1 = param_1[0x77];
  param_1[0x77] = (undefined *)0x0;
  _objc_release(puVar1);
  if (param_1[0x49] == (undefined *)0x62) {
    bVar7 = *(byte *)((long)param_1 + 0x33d);
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((long)param_1 + 0x339) = bVar7 & 1;
  *(byte *)((long)param_1 + 0x33a) = bVar7 & 1;
  ppuVar9 = param_1;
  func_0x00010beb4ee0();
  ppuVar3 = param_1;
  func_0x00010be340a0();
  ppuVar2 = (undefined **)param_1[0x2d];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c24c2c0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  param_6 = ppuVar2;
  func_0x00010bf1f320();
  _objc_release(puVar1);
  _objc_release(ppuVar2);
  if (((int)ppuVar3 == 0) && ((uint)param_6 != 0)) {
    ppuVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ffa00();
    _objc_release(ppuVar3);
  }
  if ((((uint)param_6 | (uint)ppuVar9 ^ 0xffffffff) & 1) != 0) {
    ppuVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ffa20();
    _objc_release(ppuVar3);
  }
  func_0x00010be4c900(param_1);
  ppuVar3 = (undefined **)PTR_PTR_1126afdd8;
  puVar1 = param_1[0x40];
  func_0x00010c0f2220(ppuStack_108);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63d40(puVar1);
  _objc_release(ppuVar3);
  if (param_11 != (undefined **)0x0) {
    param_3 = param_11;
    func_0x00010be30a80(param_1);
    goto LAB_106a676c8;
  }
  ppuVar3 = (undefined **)param_1[0x2d];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c2470;
  func_0x00010bf91d20(PTR_PTR_1126c2470);
  _objc_retainAutoreleasedReturnValue();
  param_6 = ppuVar3;
  func_0x00010bf1f320();
  _objc_release(puVar1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  ppuVar2 = param_1;
  func_0x00010bfa4060();
  if ((param_9 == (undefined **)0x0) || (ppuVar2 != (undefined **)0x21)) {
    ppuVar2 = ppuStack_110;
    func_0x00010bf529e0();
    if (ppuVar2 == (undefined **)0x0) goto LAB_106a67420;
    if ((int)param_6 == 0) {
      ppuVar2 = param_1;
      func_0x00010be30b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      goto LAB_106a67418;
    }
    param_3 = ppuStack_110;
    func_0x00010be2e600(param_1);
  }
  else {
    ppuVar4 = param_9;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = param_1;
    func_0x00010be30ae0();
    if ((((ulong)ppuVar4 & 1) == 0) &&
       (ppuVar4 = ppuVar2, func_0x00010c08fa60(), ppuVar4 != (undefined **)0x0)) {
      func_0x00010befa120(puVar1);
    }
LAB_106a67418:
    _objc_release(ppuVar2);
LAB_106a67420:
    if (param_1[0x38] == (undefined *)0x0) {
      param_6 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar8 = param_1[0x6c];
      func_0x00010c08fa60();
      if (puVar8 != (undefined *)0x0) {
        ppuVar3 = param_1;
        func_0x00010bdd2e20(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(param_6);
        _objc_release(ppuVar3);
      }
      lVar5 = lStack_118;
      func_0x00010c08fa60();
      if ((lVar5 != 0) ||
         ((puVar8 = param_1[0x6b], puVar8 != (undefined *)0x0 &&
          (func_0x00010c08fa60(), puVar8 != (undefined *)0x0)))) {
        func_0x00010c066b00(param_6);
      }
      puVar6 = puVar1;
      func_0x00010bf529e0();
      puVar8 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      if (puVar6 != (undefined *)0x0) {
        func_0x00010bf529e0(param_6);
        func_0x00010bf529e0(puVar1);
        func_0x00010bfed320(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066b20(param_6);
        _objc_release(puVar8);
      }
      ppuVar2 = param_6;
      func_0x00010c12c080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c0d3c80();
      _objc_release(param_6);
      _objc_release(ppuVar2);
      _objc_initWeak(&puStack_90,param_1);
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_106a67780;
      puStack_b8 = &UNK_110958e38;
      param_2 = &puStack_90;
      _objc_copyWeak(auStack_98);
      _objc_retain(ppuVar3);
      ppuStack_b0 = ppuVar3;
      _objc_retain(param_9);
      ppuStack_a8 = param_9;
      ppuVar2 = &puStack_d0;
      ppuStack_a0 = param_1;
      _objc_retainBlock();
      ppuVar4 = ppuVar3;
      ppuStack_128 = ppuVar2;
      func_0x00010bf529e0();
      if ((param_13 == 0) && (ppuVar4 == (undefined **)0x0)) {
        if ((uint)ppuVar9 == 0) {
          puStack_100 = puVar8;
          uStack_f8 = 0xc2000000;
          uStack_f0 = 0x106a67964;
          puStack_e8 = &UNK_11085c6a8;
          param_6 = &puStack_100;
          param_2 = &puStack_90;
          _objc_copyWeak(auStack_d8);
          _objc_retain(param_9);
          ppuStack_e0 = param_9;
          param_3 = &puStack_100;
          func_0x00010be1e580(param_1);
          _objc_release(ppuStack_e0);
          _objc_destroyWeak(auStack_d8);
        }
        else {
          param_3 = param_9;
          func_0x00010be7cfa0(param_1);
        }
      }
      else {
        func_0x00010bf17ac0(PTR_PTR_1126cffc8);
        param_6 = &puStack_90;
        _objc_loadWeakRetained();
        param_3 = ppuVar3;
        func_0x00010be1ea80();
        _objc_release(param_6);
      }
      _objc_release(ppuStack_128);
      _objc_release(ppuStack_a8);
      _objc_release(ppuStack_b0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(&puStack_90);
      _objc_release(ppuVar3);
    }
    else {
      param_6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = param_1[0x38];
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_3 = param_6;
      func_0x00010be7d0e0(param_1);
      _objc_release(param_6);
    }
  }
  _objc_release(puVar1);
LAB_106a676c8:
  _objc_release(param_13);
  _objc_release(lStack_118);
  _objc_release(param_11);
  _objc_release(ppuStack_110);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(ppuStack_108);
  ppuVar9 = ppuStack_120;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_6 + 5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(&puStack_90);
  ppuVar2 = ppuVar9;
  __Unwind_Resume();
  ppuStack_170 = param_11;
  ppuStack_160 = param_9;
  pcStack_138 = FUN_106a67780;
  ppuStack_168 = param_6;
  puStack_158 = param_8;
  ppuStack_150 = ppuVar3;
  ppuStack_148 = ppuVar9;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bf95500(PTR_PTR_1126cffc8);
  ppuVar3 = ppuVar2 + 7;
  _objc_loadWeakRetained();
  if (ppuVar3 != (undefined **)0x0) {
    if (param_2 == (undefined **)0x0) {
      func_0x00010be56760(ppuVar2[6]);
    }
    else {
      ppuVar9 = param_2;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = ppuVar3[0x37];
      ppuVar3[0x37] = (undefined *)ppuVar9;
      _objc_release(puVar1);
      puVar1 = ppuVar3[0x6b];
      ppuVar3[0x6b] = (undefined *)0x0;
      _objc_release(puVar1);
      ppuVar9 = ppuVar2 + 7;
      _objc_loadWeakRetained(ppuVar9);
      _objc_copyWeak(auStack_178,ppuVar2 + 7);
      puVar1 = ppuVar2[5];
      _objc_retain(puVar1);
      func_0x00010be1e580(ppuVar9);
      _objc_release(ppuVar9);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_178);
    }
  }
  _objc_release(ppuVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106a67780; end: 106a678ef;  */

void FUN_106a67780(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bf95500(PTR_PTR_1126cffc8);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010be56760(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      lVar2 = param_2;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x1b8);
      *(long *)(lVar1 + 0x1b8) = lVar2;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar1 + 0x358);
      *(undefined8 *)(lVar1 + 0x358) = 0;
      _objc_release(uVar3);
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
      _objc_copyWeak(auStack_48,param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      func_0x00010be1e580(lVar2);
      _objc_release(lVar2);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106a678f0; end: 106a679f3;  */

void FUN_106a678f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee08e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a679f4; end: 106a67b57; -[SCSpotlightPlaybackManager _hasLoadedMetadataForPresentationWithDiscoverFeedStory:] */

bool FUN_106a679f4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if ((param_3 == 0) && (*(long *)(param_1 + 0x1c0) == 0)) {
    lVar2 = *(long *)(param_1 + 0x1b8);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        lVar2 = param_1;
        func_0x00010bf5ff00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          bVar1 = false;
        }
        else {
          lVar4 = *(long *)(param_1 + 0x278);
          func_0x00010c269d40(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bfa4340(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010c067fc0();
          lVar6 = lVar4;
          func_0x00010c24b200(lVar4,param_2,lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(lVar3);
          _objc_release(lVar4);
          lVar3 = lVar5;
          func_0x00010bf5f700(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar3;
          func_0x00010bf529e0();
          bVar1 = lVar6 != 0;
          _objc_release(lVar3);
          _objc_release(lVar5);
        }
        _objc_release(lVar2);
        goto LAB_106a67a5c;
      }
    }
  }
  bVar1 = true;
LAB_106a67a5c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106a67b58; end: 106a67daf; -[SCSpotlightPlaybackManager _getDiscoverFeedStoryFromCacheOrFetch:discoverFeedStory:completion:] */

void FUN_106a67b58(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x000108f51d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c25ba80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 == 0) {
        _objc_release(lVar1);
        goto LAB_106a67c8c;
      }
    }
    else {
      _objc_retain(param_4);
      lVar4 = param_4;
    }
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)0x0;
    puVar7 = puVar5;
    (**(code **)(param_5 + 0x10))(param_5,puVar5,0);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  else {
LAB_106a67c8c:
    func_0x00010bf17ac0(PTR_PTR_1126cffc8);
    uVar6 = *(undefined8 *)(param_1 + 0x180);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x238);
    uVar10 = *(undefined8 *)(param_1 + 0x240);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106a67db0;
    puStack_70 = &UNK_11084e3a0;
    _objc_retain(param_5);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e68df8;
    puVar7 = (undefined *)0x5;
    lStack_68 = param_5;
    func_0x00010846e82c(uVar6,5,&PTR____CFConstantStringClassReference_110e68df8,uVar9,uVar10,
                        param_3,0,PTR___dispatch_main_q_11034be20,&puStack_88,
                        *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x150),
                        *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x2e0),
                        *(undefined8 *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x140),
                        *(undefined8 *)(param_1 + 0x3c0));
    _objc_release(uVar6);
    lVar1 = lStack_68;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126cffc8;
  _objc_retain(ppuVar8);
  _objc_retain(puVar7);
  func_0x00010bf95500(puVar5);
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),puVar7,ppuVar8);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106a67db0; end: 106a67e23;  */

void FUN_106a67db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cffc8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf95500(puVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a67e24; end: 106a67f4f; -[SCSpotlightPlaybackManager _shouldPresentOperaBeforeResolutionWithDeepLink:notification:notificationsToPrepend:compositeStoryId:discoverFeedStory:] */

uint FUN_106a67e24(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010c10d580(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar5 = 0;
    if (((param_4 != 0) || (param_3 != 0)) || (param_7 != 0)) goto LAB_106a67f10;
    lVar4 = param_5;
    func_0x00010bf529e0();
    if (((lVar4 == 0) && (lVar4 = param_6, func_0x00010c08fa60(), lVar4 == 0)) &&
       (*(long *)(param_1 + 0x1c0) == 0)) {
      lVar4 = *(long *)(param_1 + 0x360);
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        lVar4 = *(long *)(param_1 + 0x358);
        func_0x00010c08fa60();
        if (lVar4 == 0) {
          lVar4 = *(long *)(param_1 + 800);
          func_0x00010bf529e0();
          if (lVar4 == 0) {
            func_0x00010beb6700(param_1);
            uVar5 = (uint)param_1 ^ 1;
            goto LAB_106a67f10;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_106a67f10:
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar5;
}



/* Entry: 106a67f50; end: 106a68093; -[SCSpotlightPlaybackManager _presentOperaBeforeResolutionWithNotification:] */

void FUN_106a67f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)lVar1 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar2 = PTR_PTR_1126cffd0;
    _objc_alloc();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c03f800();
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined **)(param_1 + 0x1c8) = puVar2;
    _objc_release(uVar3);
    func_0x00010bfa9500(puVar2);
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x00010be7d0e0(param_1);
    *(undefined1 *)(param_1 + 0x1d0) = 0;
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010be56760(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a68094; end: 106a68163;  */

void FUN_106a68094(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010be1e580(lVar1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106a68164; end: 106a681d7;  */

void FUN_106a68164(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be57840(param_1);
    func_0x00010bee08e0(param_1);
    func_0x00010be19be0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a681d8; end: 106a68493; -[SCSpotlightPlaybackManager _fulfillPendingPlaylistFetcherWithStories:callback:] */

/* WARNING: Possible PIC construction at 0x000106a685e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a685e8) */
/* WARNING: Removing unreachable block (ram,0x000106a68618) */

void FUN_106a681d8(double param_1,undefined8 ***param_2,undefined **param_3,undefined8 ***param_4,
                  undefined8 ***param_5,undefined8 ***param_6,undefined8 *param_7,
                  undefined8 *param_8,long *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  long lVar15;
  undefined8 ***pppuVar16;
  double dVar17;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 **ppuStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 **ppuStack_300;
  long lStack_1f8;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  long lStack_f8;
  undefined8 *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_4;
  pppuVar13 = param_5;
  _objc_retain(param_5);
  if (param_2[0x39] != (undefined8 **)0x0) {
    ppuStack_100 = (undefined8 ***)0x0;
    lStack_f8 = 0;
    uStack_110 = 0;
    ppuStack_108 = (undefined8 ***)0x0;
    uStack_118 = 0;
    pppuVar13 = &ppuStack_100;
    param_6 = &ppuStack_108;
    param_7 = &uStack_110;
    param_8 = &uStack_118;
    param_9 = &lStack_f8;
    pppuVar3 = param_2;
    func_0x00010be94f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuStack_100;
    _objc_retain(ppuStack_100);
    ppuVar7 = ppuStack_108;
    _objc_retain(ppuStack_108);
    uVar2 = uStack_110;
    _objc_retain(uStack_110);
    uVar1 = uStack_118;
    _objc_retain(uStack_118);
    if (pppuVar3 == (undefined8 ***)0x0) {
      if (param_5 != (undefined8 ***)0x0) {
        param_3 = (undefined **)0x0;
        param_4 = (undefined8 ***)0x0;
        pppuVar13 = (undefined8 ***)0x0;
        (*(code *)param_5[2])(param_5,0);
      }
    }
    else {
      ppuVar4 = param_2[0x39];
      param_2[0x39] = (undefined8 **)0x0;
      _objc_release(ppuVar4);
      pppuVar13 = param_2;
      func_0x00010bf5fae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be5e300(param_2);
      _objc_release(pppuVar13);
      func_0x00010c066720(param_2[7]);
      pppuVar5 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      param_6 = (undefined8 ***)0x0;
      param_4 = param_2;
      pppuVar13 = (undefined8 ***)ppuVar8;
      func_0x00010c0ff860();
      _objc_release(pppuVar5);
      pppuVar5 = param_2;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar5 != (undefined8 ***)0x0) {
        func_0x00010c1d0640(param_2[0x14]);
        func_0x00010c1d0640(param_2[0x15]);
        param_1 = 0.0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        puStack_160 = (undefined8 **)0x0;
        uStack_148 = 0;
        plStack_150 = (long *)0x0;
        pppuVar6 = param_2;
        func_0x00010bf5fae0();
        _objc_retainAutoreleasedReturnValue();
        param_4 = (undefined8 ***)&puStack_160;
        pppuVar13 = (undefined8 ***)apuStack_f0;
        param_6 = (undefined8 ***)0x10;
        pppuVar10 = pppuVar6;
        func_0x00010bf52a60();
        if (pppuVar10 != (undefined8 ***)0x0) {
          lVar15 = *plStack_150;
          do {
            pppuVar13 = (undefined8 ***)0x0;
            do {
              if (*plStack_150 != lVar15) {
                _objc_enumerationMutation(pppuVar6);
              }
              func_0x00010c1d0640(param_2[0x16]);
              pppuVar13 = (undefined8 ***)((long)pppuVar13 + 1);
            } while (pppuVar10 != pppuVar13);
            param_4 = (undefined8 ***)&puStack_160;
            pppuVar13 = (undefined8 ***)apuStack_f0;
            param_6 = (undefined8 ***)0x10;
            pppuVar10 = pppuVar6;
            func_0x00010bf52a60();
          } while (pppuVar10 != (undefined8 ***)0x0);
        }
        _objc_release(pppuVar6);
      }
      if (param_5 != (undefined8 ***)0x0) {
        pppuVar13 = (undefined8 ***)0x0;
        param_3 = (undefined **)pppuVar3;
        param_4 = (undefined8 ***)ppuVar7;
        (*(code *)param_5[2])(param_5,pppuVar3);
      }
      _objc_release(pppuVar5);
    }
    _objc_release(pppuVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    pppuVar3 = param_4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar3);
  if (*(char *)(param_5 + 0x3a) == '\x01') {
    if (pppuVar13 != (undefined8 ***)0x0) {
      *pppuVar13 = (undefined8 **)0x0;
    }
    if (param_6 != (undefined8 ***)0x0) {
      *param_6 = (undefined8 **)0x0;
    }
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = PTR____NSArray0__struct_11034ab48;
    }
    if (param_8 != (undefined8 *)0x0) {
      *param_8 = PTR____NSArray0__struct_11034ab48;
    }
    pppuVar13 = (undefined8 ***)PTR____NSArray0__struct_11034ab48;
    if (param_9 != (long *)0x0) {
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      *param_9 = (long)(param_1 * 1000.0);
      pppuVar13 = (undefined8 ***)PTR____NSArray0__struct_11034ab48;
    }
  }
  else {
    pppuVar5 = param_5;
    func_0x00010be1b9c0();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    puStack_338 = (undefined8 *)0x0;
    uStack_340 = 0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    pppuVar6 = pppuVar5;
    func_0x00010bf52a60();
    if (pppuVar6 != (undefined8 ***)0x0) {
      if (*plStack_330 != *plStack_330) {
        _objc_enumerationMutation(pppuVar5);
      }
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      param_3 = (undefined **)*puStack_338;
      func_0x00010c259740(param_3);
      goto code_r0x00010c0df880;
    }
    param_3 = &PTR___NSConcreteGlobalBlock_110958e98;
    pppuVar6 = pppuVar5;
    func_0x000100504554(pppuVar5,&PTR___NSConcreteGlobalBlock_110958e98);
    func_0x00010c1878e0(param_5);
    _objc_release(pppuVar6);
    ppuVar7 = param_5[0x37];
    func_0x00010bf529e0();
    if (ppuVar7 != (undefined8 **)0x0) {
      ppuVar8 = param_5[0x2d];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126c11f8;
      func_0x00010bf81ba0(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar8;
      func_0x00010bf1f320();
      _objc_release(puVar9);
      _objc_release(ppuVar8);
      if ((int)ppuVar7 != 0) {
        pppuVar6 = param_5;
        func_0x00010bf5ff00(param_5);
        _objc_retainAutoreleasedReturnValue();
        pppuVar10 = pppuVar6;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(pppuVar10);
        _objc_release(pppuVar6);
        ppuVar7 = param_5[0xb];
        func_0x00010c269d40(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10a660();
        _objc_release(ppuVar7);
      }
    }
    func_0x00010be6e960(param_5);
    pppuVar6 = pppuVar5;
    func_0x00010bf529e0();
    pppuVar10 = pppuVar3;
    func_0x00010bf529e0();
    if (pppuVar6 != pppuVar10) {
      func_0x00010be8d740(param_5);
    }
    pppuVar6 = param_5 + 0x21;
    _objc_loadWeakRetained();
    _objc_release();
    puVar9 = PTR_PTR_1126afdd8;
    if (pppuVar6 != (undefined8 ***)0x0) {
      ppuVar7 = param_5[0x40];
      pppuVar6 = param_5 + 0x21;
      _objc_loadWeakRetained(pppuVar6);
      func_0x00010c0f2220();
      func_0x00010bfc8740(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63ce0(ppuVar7);
      _objc_release(puVar9);
      _objc_release(pppuVar6);
    }
    func_0x00010bec3d80(param_5);
    pppuVar6 = pppuVar5;
    func_0x00010bf529e0();
    if (pppuVar6 == (undefined8 ***)0x0) {
      pppuVar13 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff980();
      _objc_release(pppuVar13);
      if (*(char *)(param_5 + 0x25) == '\x01') {
        pppuVar13 = param_5;
        func_0x00010bf6b020(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ffa80();
        _objc_release(pppuVar13);
      }
      *(undefined1 *)(param_5 + 0x25) = 1;
      func_0x00010bf04340(PTR_PTR_1126cffc8);
      func_0x00010be56760(param_5);
      pppuVar13 = (undefined8 ***)0x0;
    }
    else {
      pppuVar6 = pppuVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar6 == (undefined8 ***)0x0) {
        func_0x00010be56760(param_5);
      }
      else {
        pppuVar10 = param_5;
        func_0x00010bf6b020(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ff920();
        _objc_release(pppuVar10);
      }
      pppuVar10 = (undefined8 ***)param_5[0x3c];
      if (pppuVar10 != (undefined8 ***)0x0) {
        func_0x00010c282800();
        dVar17 = 0.0;
        lStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        plStack_370 = (long *)0x0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        _objc_retain(pppuVar5);
        pppuVar11 = pppuVar5;
        func_0x00010bf52a60();
        if (pppuVar11 != (undefined8 ***)0x0) {
          lVar15 = *plStack_370;
          do {
            pppuVar16 = (undefined8 ***)0x0;
            do {
              if (*plStack_370 != lVar15) {
                _objc_enumerationMutation(pppuVar5);
              }
              pppuVar14 = *(undefined8 ****)(lStack_378 + (long)pppuVar16 * 8);
              pppuVar12 = pppuVar14;
              func_0x00010c259740();
              if (pppuVar12 == pppuVar10) {
                _objc_retain(pppuVar14);
                _objc_release(pppuVar6);
                pppuVar6 = pppuVar14;
                goto LAB_106a68968;
              }
              pppuVar16 = (undefined8 ***)((long)pppuVar16 + 1);
            } while (pppuVar11 != pppuVar16);
            pppuVar11 = pppuVar5;
            func_0x00010bf52a60();
          } while (pppuVar11 != (undefined8 ***)0x0);
        }
LAB_106a68968:
        _objc_release(pppuVar5);
      }
      func_0x00010be55ba0(param_5);
      ppuVar8 = param_5[6];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar8;
      func_0x00010c0fed80();
      _objc_retainAutoreleasedReturnValue();
      pppuVar10 = param_5;
      func_0x00010be3b080(param_5);
      _objc_retainAutoreleasedReturnValue();
      pppuVar11 = param_5;
      func_0x00010bedd280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar10);
      _objc_release(ppuVar7);
      pppuVar10 = param_5;
      func_0x00010bdd5c00();
      _objc_retainAutoreleasedReturnValue();
      if ((pppuVar10 == (undefined8 ***)0x0) ||
         (pppuVar16 = pppuVar10, func_0x00010bf529e0(), pppuVar16 == (undefined8 ***)0x0)) {
        if (pppuVar11 != (undefined8 ***)0x0) {
          pppuVar16 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
          ppuStack_300 = pppuVar11;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppuVar10);
          pppuVar10 = pppuVar16;
          goto LAB_106a68a58;
        }
        func_0x00010bf04340(PTR_PTR_1126cffc8);
        func_0x00010be56760(param_5);
        pppuVar13 = (undefined8 ***)0x0;
      }
      else {
LAB_106a68a58:
        func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
        pppuVar16 = param_5;
        func_0x00010be3b080();
        _objc_retainAutoreleasedReturnValue();
        pppuVar12 = pppuVar16;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        pppuVar14 = pppuVar12;
        func_0x00010c067fc0();
        func_0x000108f4bab4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar12);
        _objc_release(pppuVar16);
        puStack_3a8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
        uStack_3a0 = 0xc2000000;
        uStack_398 = 0x106a68cd8;
        puStack_390 = &UNK_1108f1040;
        ppuStack_388 = pppuVar14;
        _objc_retain(pppuVar14);
        param_3 = (undefined **)&puStack_3a8;
        pppuVar16 = pppuVar5;
        func_0x0001006372a4(pppuVar5,param_3);
        _objc_release(ppuStack_388);
        _objc_release(pppuVar14);
        ppuVar4 = param_5[0x2d];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126c11f8;
        func_0x00010c29e2c0(PTR_PTR_1126c11f8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar4;
        func_0x00010bf1f320();
        _objc_release(puVar9);
        _objc_release(ppuVar4);
        if ((int)ppuVar7 != 0) {
          func_0x00010bee9d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppuVar16);
          pppuVar16 = param_5;
        }
        if (pppuVar13 != (undefined8 ***)0x0) {
          _objc_retainAutorelease(pppuVar6);
          *pppuVar13 = pppuVar6;
        }
        if (param_6 != (undefined8 ***)0x0) {
          pppuVar13 = pppuVar11;
          _objc_retainAutorelease();
          *param_6 = pppuVar13;
        }
        if (param_7 != (undefined8 *)0x0) {
          _objc_retainAutorelease(pppuVar16);
          *param_7 = pppuVar16;
        }
        if (param_8 != (undefined8 *)0x0) {
          _objc_retainAutorelease(pppuVar5);
          *param_8 = pppuVar5;
        }
        if (param_9 != (long *)0x0) {
          *param_9 = (long)(dVar17 * 1000.0);
        }
        _objc_retain(pppuVar10);
        _objc_release(pppuVar16);
        pppuVar13 = pppuVar10;
      }
      _objc_release(pppuVar10);
      _objc_release(pppuVar11);
      _objc_release(ppuVar8);
      _objc_release(pppuVar6);
    }
    _objc_release(pppuVar5);
  }
  _objc_release(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar13);
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_3);
code_r0x00010c0df880:
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar9,PTR_s_numberWithUnsignedLongLong__112615838,param_3)
  ;
  return;
}



/* Entry: 106a68494; end: 106a68ca7; -[SCSpotlightPlaybackManager _resolvedOperaGroupDataModelsForStories:outInitialStory:outInitialGroupDataModel:outDfStories:outPlaylist:outStorySessionId:] */

/* WARNING: Possible PIC construction at 0x000106a685e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a685e8) */
/* WARNING: Removing unreachable block (ram,0x000106a68618) */

void FUN_106a68494(double param_1,undefined *param_2,undefined **param_3,undefined *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  long *param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_2[0x1d0] == '\x01') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
    }
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = PTR____NSArray0__struct_11034ab48;
    }
    if (param_8 != (undefined8 *)0x0) {
      *param_8 = puVar1;
    }
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (param_9 != (long *)0x0) {
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      *param_9 = (long)(param_1 * 1000.0);
      puVar6 = PTR____NSArray0__struct_11034ab48;
    }
  }
  else {
    puVar1 = param_2;
    func_0x00010be1b9c0();
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 0.0;
    puStack_1c8 = (undefined8 *)0x0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    puVar6 = puVar1;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      if (*plStack_1c0 != *plStack_1c0) {
        _objc_enumerationMutation(puVar1);
      }
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      param_3 = (undefined **)*puStack_1c8;
      func_0x00010c259740(param_3);
      goto code_r0x00010c0df880;
    }
    param_3 = &PTR___NSConcreteGlobalBlock_110958e98;
    puVar6 = puVar1;
    func_0x000100504554(puVar1,&PTR___NSConcreteGlobalBlock_110958e98);
    func_0x00010c1878e0(param_2);
    _objc_release(puVar6);
    lVar2 = *(long *)(param_2 + 0x1b8);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c11f8;
      func_0x00010bf81ba0(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf1f320();
      _objc_release(puVar6);
      _objc_release(uVar3);
      if ((int)uVar5 != 0) {
        puVar6 = param_2;
        func_0x00010bf5ff00(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(puVar4);
        _objc_release(puVar6);
        uVar5 = *(undefined8 *)(param_2 + 0x58);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10a660();
        _objc_release(uVar5);
      }
    }
    func_0x00010be6e960(param_2);
    puVar6 = puVar1;
    func_0x00010bf529e0();
    puVar4 = param_4;
    func_0x00010bf529e0();
    if (puVar6 != puVar4) {
      func_0x00010be8d740(param_2);
    }
    puVar6 = param_2 + 0x108;
    _objc_loadWeakRetained();
    _objc_release();
    puVar4 = PTR_PTR_1126afdd8;
    if (puVar6 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_2 + 0x200);
      puVar6 = param_2 + 0x108;
      _objc_loadWeakRetained(puVar6);
      func_0x00010c0f2220();
      func_0x00010bfc8740(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63ce0(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar6);
    }
    func_0x00010bec3d80(param_2);
    puVar6 = puVar1;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff980();
      _objc_release(puVar6);
      if (param_2[0x128] == '\x01') {
        puVar6 = param_2;
        func_0x00010bf6b020(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ffa80();
        _objc_release(puVar6);
      }
      param_2[0x128] = 1;
      func_0x00010bf04340(PTR_PTR_1126cffc8);
      func_0x00010be56760(param_2);
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        func_0x00010be56760(param_2);
      }
      else {
        puVar6 = param_2;
        func_0x00010bf6b020(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ff920();
        _objc_release(puVar6);
      }
      puVar6 = *(undefined **)(param_2 + 0x1e0);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c282800();
        dVar12 = 0.0;
        lStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        plStack_200 = (long *)0x0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        _objc_retain(puVar1);
        puVar7 = puVar1;
        func_0x00010bf52a60();
        if (puVar7 != (undefined *)0x0) {
          lVar2 = *plStack_200;
          do {
            puVar11 = (undefined *)0x0;
            do {
              if (*plStack_200 != lVar2) {
                _objc_enumerationMutation(puVar1);
              }
              puVar10 = *(undefined **)(lStack_208 + (long)puVar11 * 8);
              puVar8 = puVar10;
              func_0x00010c259740();
              if (puVar8 == puVar6) {
                _objc_retain(puVar10);
                _objc_release(puVar4);
                puVar4 = puVar10;
                goto LAB_106a68968;
              }
              puVar11 = puVar11 + 1;
            } while (puVar7 != puVar11);
            puVar7 = puVar1;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined *)0x0);
        }
LAB_106a68968:
        _objc_release(puVar1);
      }
      func_0x00010be55ba0(param_2);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0fed80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010be3b080(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010bedd280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar5);
      puVar11 = param_2;
      func_0x00010bdd5c00();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar11 == (undefined *)0x0) ||
         (puVar6 = puVar11, func_0x00010bf529e0(), puVar6 == (undefined *)0x0)) {
        if (puVar7 != (undefined *)0x0) {
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_190 = puVar7;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          puVar11 = puVar6;
          goto LAB_106a68a58;
        }
        func_0x00010bf04340(PTR_PTR_1126cffc8);
        func_0x00010be56760(param_2);
        puVar6 = (undefined *)0x0;
      }
      else {
LAB_106a68a58:
        func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
        puVar6 = param_2;
        func_0x00010be3b080();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c067fc0();
        func_0x000108f4bab4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar6);
        puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_230 = 0xc2000000;
        uStack_228 = 0x106a68cd8;
        puStack_220 = &UNK_1108f1040;
        puStack_218 = puVar10;
        _objc_retain(puVar10);
        param_3 = &puStack_238;
        puVar6 = puVar1;
        func_0x0001006372a4(puVar1,param_3);
        _objc_release(puStack_218);
        _objc_release(puVar10);
        uVar9 = *(undefined8 *)(param_2 + 0x168);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126c11f8;
        func_0x00010c29e2c0(PTR_PTR_1126c11f8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010bf1f320();
        _objc_release(puVar8);
        _objc_release(uVar9);
        if ((int)uVar5 != 0) {
          func_0x00010bee9d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = param_2;
        }
        if (param_5 != (undefined8 *)0x0) {
          _objc_retainAutorelease(puVar4);
          *param_5 = puVar4;
        }
        if (param_6 != (undefined8 *)0x0) {
          puVar8 = puVar7;
          _objc_retainAutorelease();
          *param_6 = puVar8;
        }
        if (param_7 != (undefined8 *)0x0) {
          _objc_retainAutorelease(puVar6);
          *param_7 = puVar6;
        }
        if (param_8 != (undefined8 *)0x0) {
          _objc_retainAutorelease(puVar1);
          *param_8 = puVar1;
        }
        if (param_9 != (long *)0x0) {
          *param_9 = (long)(dVar12 * 1000.0);
        }
        _objc_retain(puVar11);
        _objc_release(puVar6);
        puVar6 = puVar11;
      }
      _objc_release(puVar11);
      _objc_release(puVar7);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_3);
code_r0x00010c0df880:
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_3)
  ;
  return;
}



/* Entry: 106a68ca8; end: 106a68d37;  */

void FUN_106a68ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106a68d38; end: 106a68f3f; -[SCSpotlightPlaybackManager _prepareInterstitialAndPresentOperaWithStories:baseView:presentingViewController:entryEvent:interactionContext:pageSessionId:viewLocation:isCachedContent:notification:] */

void FUN_106a68d38(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  ulong uVar1;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_12);
  uVar1 = param_1;
  func_0x00010c07ab40();
  if (((((uVar1 & 1) == 0) && (*(long *)(param_1 + 1000) != 0)) &&
      ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010beb6700(), (int)uVar1 != 0)) {
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_98,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_90 = param_6;
    uStack_88 = param_7;
    _objc_retain(param_8);
    uStack_80 = param_9;
    uStack_78 = param_10;
    _objc_retain(param_12);
    func_0x00010be79000(param_1);
    _objc_release(param_12);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
  }
  else {
    func_0x00010be7d0c0(param_1);
  }
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a68f40; end: 106a68fe7;  */

void FUN_106a68f40(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0ff880();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010be7d0c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                          *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),
                          *(undefined1 *)(param_1 + 0x68));
      goto LAB_106a68fd0;
    }
  }
  uVar4 = *(undefined8 *)(uVar1 + 0x3f8);
  *(undefined8 *)(uVar1 + 0x3f8) = 0;
  _objc_release(uVar4);
LAB_106a68fd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a68fe8; end: 106a6b12b; -[SCSpotlightPlaybackManager _presentOperaWithStories:baseView:presentingViewController:entryEvent:interactionContext:pageSessionId:viewLocation:isCachedContent:notification:] */

ulong FUN_106a68fe8(double param_1,undefined *param_2,undefined **param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,long param_10,undefined4 param_11,undefined4 param_12,
                   long param_13)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined **ppuVar36;
  undefined *puStack_5f0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined8 uStack_580;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  undefined *puStack_440;
  undefined **ppuStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined1 auStack_360 [8];
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined1 auStack_338 [8];
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_13);
  func_0x00010bf17ac0(PTR_PTR_1126cffc8);
  puVar6 = param_2;
  func_0x00010c07ab40();
  if ((int)puVar6 != 0) {
    func_0x00010be56760(param_2);
    goto LAB_106a6af64;
  }
  func_0x00010bf18180();
  func_0x00010bf18180(PTR_PTR_1126cffc8);
  func_0x00010be65fe0(param_2);
  func_0x00010be65f20(param_2);
  uStack_2b8 = 0;
  lStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  puStack_2d8 = (undefined *)0x0;
  puVar29 = param_2;
  func_0x00010be94f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_2c0;
  _objc_retain();
  uVar3 = uStack_2c8;
  _objc_retain();
  uVar2 = uStack_2d0;
  _objc_retain();
  puVar6 = puStack_2d8;
  _objc_retain();
  if (puVar29 != (undefined *)0x0) {
    func_0x00010bf94960(PTR_PTR_1126cffc8);
    func_0x00010bf18180();
    puVar7 = PTR_PTR_1126c6988;
    _objc_alloc();
    func_0x00010c00cf80();
    uVar26 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = puVar7;
    _objc_release(uVar26);
    if (param_2[0x339] == '\x01') {
      func_0x00010c1d7a00(*(undefined8 *)(param_2 + 0x38));
    }
    bVar1 = param_2[0x228];
    func_0x00010becff80();
    if (param_10 != 0x1d) {
      puVar7 = param_2;
      func_0x00010bf0bea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0eda0(param_2);
      _objc_release(puVar7);
    }
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110dcad78;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110f41c18;
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar7;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e5f1f8;
    puVar31 = *(undefined **)(param_2 + 0x458);
    puVar35 = puVar31;
    puStack_90 = puVar11;
    if (puVar31 == (undefined *)0x0) {
      puVar35 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar30 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar35;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar30;
    func_0x00010c0d3c80();
    _objc_release(puVar30);
    if (puVar31 == (undefined *)0x0) {
      _objc_release(puVar35);
    }
    _objc_release(puVar11);
    _objc_release(puVar7);
    uVar9 = *(undefined8 *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c2470;
    func_0x00010bf91d40(PTR_PTR_1126c2470);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar9;
    func_0x00010bf1f320();
    _objc_release(puVar7);
    _objc_release(uVar9);
    if ((int)uVar26 == 0) {
      lVar10 = param_13;
      func_0x00010c0dc140();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 == 0) {
        puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar8);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c1d0640(puVar8);
      }
      _objc_release(lVar10);
    }
    else {
      lVar10 = *(long *)(param_2 + 0x3b0);
      func_0x00010c08fa60();
      if (lVar10 != 0) {
        func_0x00010c1d0640(puVar8);
      }
    }
    func_0x00010bef7f60(puVar8);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar26 = *(undefined8 *)(param_2 + 0x218);
    *(undefined8 *)(param_2 + 0x218) = 0;
    _objc_release(uVar26);
    puVar11 = *(undefined **)(param_2 + 0x380);
    puVar35 = param_2;
    if (puVar11 == (undefined *)0x0) {
      puStack_590 = *(undefined **)(param_2 + 0x40);
      ppuVar36 = *(undefined ***)(param_2 + 0x28);
      puVar11 = param_2;
      func_0x00010be3b080(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uStack_2b8;
      uVar12 = *(undefined8 *)(param_2 + 0xc0);
      uVar34 = *(undefined8 *)(param_2 + 0x458);
      uVar9 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010bebb3a0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(puStack_590 + 0x10))
                (puStack_590,ppuVar36,puVar11,bVar1 ^ 1,uVar12,uVar34,param_7,uVar9,uVar26,param_10,
                 param_2,uVar3,param_8,0xffffffffffffffff,puVar8,puVar35,
                 *(undefined8 *)(param_2 + 0x170),0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3b080(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar36 = *(undefined ***)(param_2 + 0x38);
      puVar31 = param_2;
      func_0x00010bebb3a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_590 = puVar11;
      func_0x00010bf82a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar31);
    }
    _objc_release(puVar35);
    _objc_release(puVar11);
    func_0x00010befa160(puVar7);
    if (*(long *)(param_2 + 0x208) != 0) {
      func_0x00010befa120(puVar7);
    }
    func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x210));
    if (0.0 < param_1) {
      lVar10 = lVar4;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar10;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar10 = lVar16;
      func_0x00010c08fa60();
      if (lVar10 != 0) {
        puVar11 = PTR_PTR_1126cffd8;
        _objc_alloc(PTR_PTR_1126cffd8);
        func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x210));
        func_0x00010c000c20(puVar11);
        func_0x00010befa120(puVar7);
        _objc_release(puVar11);
      }
      _objc_release(lVar16);
    }
    puVar11 = puVar7;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_2 + 0x218);
    *(undefined **)(param_2 + 0x218) = puVar11;
    _objc_release(uVar26);
    puVar11 = param_2;
    func_0x00010bee7360();
    if (((ulong)puVar11 & 1) == 0) {
      _objc_retain(param_5);
      uStack_580 = param_5;
    }
    else {
      uStack_580 = param_6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uStack_580);
      _objc_release(uStack_580);
    }
    puVar11 = PTR_PTR_1126cc5b0;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar9;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff71e0();
    _objc_release(uVar12);
    _objc_release(uVar26);
    _objc_release(uVar9);
    puVar35 = param_2;
    func_0x00010bf5ff00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar35;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187320(puVar11);
    _objc_release(puVar31);
    _objc_release(puVar35);
    _objc_retain(puVar11);
    uVar26 = *(undefined8 *)(param_2 + 0x148);
    *(undefined **)(param_2 + 0x148) = puVar11;
    _objc_release(uVar26);
    _objc_initWeak(&puStack_2e0,param_2);
    puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_300 = 0xc2000000;
    pcStack_2f8 = FUN_106a6b174;
    puStack_2f0 = &UNK_110871898;
    _objc_copyWeak(auStack_2e8,&puStack_2e0);
    func_0x00010c1d4cc0(*(undefined8 *)(param_2 + 0x148));
    puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_328 = 0xc2000000;
    pcStack_320 = FUN_106a6b200;
    puStack_318 = &UNK_110858d90;
    _objc_copyWeak(auStack_310,&puStack_2e0);
    func_0x00010c202860(*(undefined8 *)(param_2 + 0x148));
    puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_350 = 0xc2000000;
    uStack_348 = 0x106a6b280;
    puStack_340 = &UNK_1108434b0;
    _objc_copyWeak(auStack_338,&puStack_2e0);
    func_0x00010c1dbea0(*(undefined8 *)(param_2 + 0x148));
    puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_378 = 0xc2000000;
    pcStack_370 = FUN_106a6b2ec;
    puStack_368 = &UNK_110842a38;
    param_3 = &puStack_2e0;
    _objc_copyWeak(auStack_360);
    func_0x00010c2216e0(*(undefined8 *)(param_2 + 0x148));
    func_0x00010c1ab7e0(*(undefined8 *)(param_2 + 0x148));
    lVar10 = *(long *)(param_2 + 800);
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      uVar13 = *(ulong *)(param_2 + 0x150);
      param_3 = *(undefined ***)(param_2 + 0x158);
      func_0x000108f4b46c();
      if ((uVar13 & 1) == 0) {
        uVar14 = *(ulong *)(param_2 + 0x328);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        param_3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class();
        uVar15 = uVar14;
        _objc_opt_isKindOfClass();
        uVar13 = uVar14;
        if ((uVar15 & 1) == 0) {
          uVar13 = 0;
        }
        _objc_retain(uVar13);
        _objc_release(uVar14);
        puVar35 = PTR_PTR_1126cffe0;
        _objc_alloc(PTR_PTR_1126cffe0);
        func_0x00010c04b4e0();
        func_0x00010befa120(puVar7);
        _objc_release(puVar35);
        uVar26 = *(undefined8 *)(param_2 + 800);
        *(undefined8 *)(param_2 + 800) = 0;
        _objc_release(uVar26);
        _objc_release(uVar13);
      }
    }
    uVar9 = *(undefined8 *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = PTR_PTR_1126ce7c8;
    func_0x00010c0cee00(PTR_PTR_1126ce7c8);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar9;
    func_0x00010bf1f320();
    _objc_release(puVar35);
    _objc_release(uVar9);
    if ((int)uVar26 != 0) {
      uVar26 = *(undefined8 *)(param_2 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = PTR_PTR_1126ce7c8;
      func_0x00010c0cedc0(PTR_PTR_1126ce7c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067e20();
      _objc_release(puVar35);
      _objc_release(uVar26);
      uVar9 = *(undefined8 *)(param_2 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = PTR_PTR_1126c2470;
      func_0x00010bf91d80(PTR_PTR_1126c2470);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar9;
      func_0x00010bf1f360();
      if ((int)uVar26 != 0) {
        uVar26 = *(undefined8 *)(param_2 + 0x168);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar31 = PTR_PTR_1126c2470;
        func_0x00010c0de760(PTR_PTR_1126c2470);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067e40();
        _objc_release(puVar31);
        _objc_release(uVar26);
      }
      _objc_release(puVar35);
      _objc_release(uVar9);
      puVar35 = PTR_PTR_1126cffe8;
      _objc_alloc(PTR_PTR_1126cffe8);
      func_0x00010c05c5c0();
      func_0x00010befa120(puVar7);
      _objc_release(puVar35);
    }
    if (((param_2[0x2d8] == '\x01') && (*(long *)(param_2 + 0x2c8) != 0)) &&
       (*(long *)(param_2 + 0x2d0) != 0)) {
      puVar35 = PTR_PTR_1126cfff0;
      _objc_alloc(PTR_PTR_1126cfff0);
      func_0x00010c0081a0();
      func_0x00010befa120(puVar7);
      _objc_release(puVar35);
    }
    if (param_2[0x388] == '\x01') {
      puVar35 = PTR_PTR_1126cfff8;
      _objc_alloc(PTR_PTR_1126cfff8);
      func_0x00010c02d0a0(0x3ff0000000000000);
      func_0x00010c18b5e0();
      func_0x00010befa120(puVar7);
      _objc_release(puVar35);
    }
    if ((param_10 == 0x62) || (param_10 == 0x49)) {
      puVar35 = param_2;
      func_0x00010bf5a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(param_2 + 0x308);
      *(undefined **)(param_2 + 0x308) = puVar35;
      _objc_release(uVar26);
      func_0x00010befa120(puVar7);
    }
    func_0x00010befa120(puVar7);
    puStack_598 = puVar29;
    if (((param_2[0x339] & 1) != 0) || (puVar35 = param_2, func_0x00010beb6700(), (int)puVar35 != 0)
       ) {
      puVar35 = PTR_PTR_1126d0000;
      _objc_alloc_init();
      puVar31 = PTR_PTR_1126d0008;
      _objc_alloc();
      func_0x00010c008d60();
      uVar26 = *(undefined8 *)(param_2 + 0x378);
      *(undefined **)(param_2 + 0x378) = puVar31;
      _objc_release(uVar26);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x378));
      puVar31 = param_2;
      func_0x00010bf5ff00(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar31;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19b200(*(undefined8 *)(param_2 + 0x378));
      _objc_release(puVar30);
      _objc_release(puVar31);
      func_0x00010befa120(puVar7);
      puVar31 = param_2;
      func_0x00010beb6700();
      if ((int)puVar31 != 0) {
        func_0x00010be92fc0(param_2);
        lVar16 = *(long *)(param_2 + 0x168);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar31 = PTR_PTR_1126d0010;
        func_0x00010c26ef00(PTR_PTR_1126d0010);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar16;
        func_0x00010c067e20();
        _objc_release(puVar31);
        _objc_release(lVar16);
        lVar17 = *(long *)(param_2 + 0x3e0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar17;
        func_0x00010c24b4c0();
        _objc_release(lVar17);
        if ((lVar10 < 0) || (lVar16 < lVar10)) {
          if (*(long *)(param_2 + 1000) == 0) {
            puVar31 = (undefined *)0x0;
          }
          else {
            puVar31 = *(undefined **)(param_2 + 0x400);
          }
          _objc_retain();
          lVar16 = *(long *)(param_2 + 0x168);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar30 = PTR_PTR_1126d0010;
          func_0x00010c26ef20(PTR_PTR_1126d0010);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar16;
          func_0x00010c067e20();
          _objc_release(puVar30);
          _objc_release(lVar16);
          puVar30 = (undefined *)(lVar10 + -1);
          if ((puVar31 != (undefined *)0x0) &&
             (puVar18 = puVar31, func_0x00010c084960(), -1 < (long)puVar18)) {
            puVar30 = puVar31;
            func_0x00010c084960();
          }
          puVar18 = puVar31;
          func_0x00010bf2f7c0();
          _objc_retainAutoreleasedReturnValue();
          param_3 = &PTR___NSConcreteGlobalBlock_110958f28;
          puVar33 = puVar18;
          func_0x000100504554();
          _objc_release(puVar18);
          if ((-1 < (long)puVar30) &&
             (puVar18 = puVar6, func_0x00010bf529e0(), (long)puVar30 < (long)puVar18)) {
            ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            if (puVar31 == (undefined *)0x0) {
              if (*(long *)(param_2 + 1000) == 0) {
                puVar23 = PTR__OBJC_CLASS___NSSet_1126ae870;
                func_0x00010c226900();
                _objc_retainAutoreleasedReturnValue();
                puVar18 = puVar30;
                while ((puVar32 = puVar6, func_0x00010bf529e0(), (long)puVar18 < (long)puVar32 &&
                       (ppuVar24 = ppuVar19, func_0x00010bf529e0(),
                       puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570, ppuVar24 < (undefined **)0x4)
                       )) {
                  puVar25 = puVar6;
                  func_0x00010c0dfd40(puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25b720();
                  func_0x00010c0df780(puVar32);
                  _objc_retainAutoreleasedReturnValue();
                  puVar28 = puVar23;
                  func_0x00010bf4b900();
                  _objc_release(puVar32);
                  _objc_release(puVar25);
                  if ((int)puVar28 != 0) {
                    puVar32 = puVar6;
                    func_0x00010c0dfd40(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppuVar19);
                    _objc_release(puVar32);
                  }
                  puVar18 = puVar18 + 1;
                }
                goto LAB_106a69f18;
              }
            }
            else {
              uStack_398 = 0;
              uStack_3a0 = 0;
              uStack_388 = 0;
              uStack_390 = 0;
              lStack_3b8 = 0;
              uStack_3c0 = 0;
              uStack_3a8 = 0;
              plStack_3b0 = (long *)0x0;
              puVar23 = puVar31;
              func_0x00010bf2f7c0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar23;
              func_0x00010bf52a60();
              if (puVar18 != (undefined *)0x0) {
                lVar10 = *plStack_3b0;
                do {
                  puVar32 = (undefined *)0x0;
                  do {
                    if (*plStack_3b0 != lVar10) {
                      _objc_enumerationMutation(puVar23);
                    }
                    uVar26 = *(undefined8 *)(lStack_3b8 + (long)puVar32 * 8);
                    func_0x00010bf2f760(uVar26);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppuVar19);
                    _objc_release(uVar26);
                    puVar32 = puVar32 + 1;
                  } while (puVar18 != puVar32);
                  puVar18 = puVar23;
                  func_0x00010bf52a60();
                } while (puVar18 != (undefined *)0x0);
              }
LAB_106a69f18:
              _objc_release(puVar23);
            }
            ppuVar24 = ppuVar19;
            func_0x00010bf529e0();
            if ((undefined **)0x3 < ppuVar24) {
              puVar18 = PTR__OBJC_CLASS___NSUUID_1126b0270;
              func_0x00010bdc3540();
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar18;
              func_0x00010bdc3580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar18);
              uVar26 = *(undefined8 *)(param_2 + 0x168);
              func_0x00010c269d40(uVar26);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = PTR_PTR_1126d0010;
              func_0x00010c26ee80(PTR_PTR_1126d0010);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f320(uVar26);
              _objc_release(puVar18);
              _objc_release(uVar26);
              if (puVar31 == (undefined *)0x0) {
                puVar18 = PTR_PTR_1126d0018;
                _objc_alloc();
                func_0x00010c01b320();
                _objc_retain();
                puStack_5f0 = puVar18;
              }
              else {
                puStack_5f0 = PTR_PTR_1126d0018;
                _objc_alloc();
                puVar18 = puVar31;
                func_0x00010bf2f7c0(puVar31);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c01b200();
                _objc_retain();
                _objc_release(puStack_5f0);
              }
              _objc_release(puVar18);
              puVar18 = PTR_PTR_1126d0020;
              _objc_alloc();
              func_0x00010c01b260();
              func_0x00010c1ad880(puVar18);
              uVar26 = *(undefined8 *)(param_2 + 0x378);
              func_0x00010bf643e0(uVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c126740();
              _objc_release(uVar26);
              _objc_retain(puVar23);
              uVar26 = *(undefined8 *)(param_2 + 0x408);
              *(undefined **)(param_2 + 0x408) = puVar23;
              _objc_release(uVar26);
              _objc_retain(puVar18);
              uVar26 = *(undefined8 *)(param_2 + 0x410);
              *(undefined **)(param_2 + 0x410) = puVar18;
              _objc_release(uVar26);
              if (puVar31 == (undefined *)0x0) {
                ppuVar24 = ppuVar19;
                func_0x00010c0ba200();
                _objc_retainAutoreleasedReturnValue();
                puVar25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_opt_new();
                puVar32 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf529e0(puVar29);
                func_0x00010bf0a0e0();
                _objc_retainAutoreleasedReturnValue();
                puVar30 = puVar6;
                func_0x00010bf529e0();
                puVar28 = puVar29;
                func_0x00010bf529e0();
                if (puVar28 <= puVar30) {
                  puVar30 = puVar28;
                }
                if (puVar30 != (undefined *)0x0) {
                  puVar28 = (undefined *)0x0;
                  do {
                    puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    puVar21 = puVar6;
                    func_0x00010c0dfd40(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c259740();
                    func_0x00010c0df880(puVar27);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar21);
                    ppuVar22 = ppuVar24;
                    func_0x00010bf4b900();
                    puVar21 = puVar29;
                    if ((int)ppuVar22 == 0) {
                      func_0x00010c0dfd40(puVar29);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar32);
                    }
                    else {
                      func_0x00010c0dfd40(puVar29);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar25);
                    }
                    _objc_release(puVar21);
                    _objc_release(puVar27);
                    puVar28 = puVar28 + 1;
                  } while (puVar30 != puVar28);
                }
                puVar30 = puVar25;
                func_0x00010bf51e00();
                uVar26 = *(undefined8 *)(param_2 + 0x430);
                *(undefined **)(param_2 + 0x430) = puVar30;
                _objc_release(uVar26);
                puVar30 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_opt_new();
                uStack_408 = 0;
                uStack_410 = 0;
                uStack_3f8 = 0;
                uStack_400 = 0;
                lStack_428 = 0;
                uStack_430 = 0;
                uStack_418 = 0;
                plStack_420 = (long *)0x0;
                _objc_retain(ppuVar19);
                ppuVar22 = ppuVar19;
                func_0x00010bf52a60();
                if (ppuVar22 != (undefined **)0x0) {
                  lVar10 = *plStack_420;
                  do {
                    ppuVar36 = (undefined **)0x0;
                    do {
                      if (*plStack_420 != lVar10) {
                        _objc_enumerationMutation(ppuVar19);
                      }
                      puVar28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c259740(*(undefined8 *)(lStack_428 + (long)ppuVar36 * 8));
                      func_0x00010c0df880(puVar28);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar30);
                      _objc_release(puVar28);
                      ppuVar36 = (undefined **)((long)ppuVar36 + 1);
                    } while (ppuVar22 != ppuVar36);
                    ppuVar22 = ppuVar19;
                    func_0x00010bf52a60();
                  } while (ppuVar22 != (undefined **)0x0);
                }
                _objc_release(ppuVar19);
                puVar28 = puVar30;
                func_0x00010bf51e00();
                uVar26 = *(undefined8 *)(param_2 + 0x438);
                *(undefined **)(param_2 + 0x438) = puVar28;
                _objc_release(uVar26);
                func_0x00010bf529e0();
                func_0x00010c066b00(puVar32);
                puStack_598 = puVar32;
                func_0x00010bf51e00();
                _objc_release(puVar29);
                puVar29 = param_2;
                func_0x00010bf5fae0(param_2);
                _objc_retainAutoreleasedReturnValue();
                puStack_458 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_450 = 0xc2000000;
                pcStack_448 = FUN_106a6b3e0;
                puStack_440 = &UNK_110886d58;
                _objc_retain(ppuVar24);
                puVar28 = puVar29;
                ppuStack_438 = ppuVar24;
                func_0x00010bfaea20(puVar29);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1878e0(param_2);
                _objc_release(puVar28);
                _objc_release(puVar29);
                ppuVar22 = ppuVar24;
                func_0x00010bf00560(ppuVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be8d760(param_2);
                _objc_release(ppuVar22);
                _objc_release(ppuStack_438);
                _objc_release(puVar30);
                _objc_release(puVar32);
                _objc_release(puVar25);
                _objc_release(ppuVar24);
              }
              else {
                puVar28 = PTR__OBJC_CLASS___NSSet_1126ae870;
                func_0x00010c225c20();
                _objc_retainAutoreleasedReturnValue();
                puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf529e0(puVar29);
                func_0x00010bf0a0e0();
                _objc_retainAutoreleasedReturnValue();
                puVar32 = puVar6;
                func_0x00010bf529e0();
                puVar27 = puVar29;
                func_0x00010bf529e0();
                if (puVar27 <= puVar32) {
                  puVar32 = puVar27;
                }
                if (puVar32 != (undefined *)0x0) {
                  puVar27 = (undefined *)0x0;
                  do {
                    ppuVar36 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    puVar21 = puVar6;
                    func_0x00010c0dfd40(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c259740();
                    func_0x00010c0df880();
                    _objc_retainAutoreleasedReturnValue();
                    puVar20 = puVar28;
                    func_0x00010bf4b900();
                    _objc_release(ppuVar36);
                    _objc_release(puVar21);
                    if (((ulong)puVar20 & 1) == 0) {
                      puVar21 = puVar29;
                      func_0x00010c0dfd40(puVar29);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar25);
                      _objc_release(puVar21);
                    }
                    puVar27 = puVar27 + 1;
                  } while (puVar32 != puVar27);
                }
                for (; puVar27 = puVar29, func_0x00010bf529e0(), puVar32 < puVar27;
                    puVar32 = puVar32 + 1) {
                  puVar27 = puVar29;
                  func_0x00010c0dfd40(puVar29);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar25);
                  _objc_release(puVar27);
                }
                puVar32 = puVar25;
                func_0x00010bf51e00();
                _objc_release(puVar29);
                puVar29 = param_2;
                func_0x00010bf5fae0(param_2);
                _objc_retainAutoreleasedReturnValue();
                puStack_3e8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_3e0 = 0xc2000000;
                pcStack_3d8 = FUN_106a6b390;
                puStack_3d0 = &UNK_110886d58;
                _objc_retain(puVar28);
                puVar27 = puVar29;
                puStack_3c8 = puVar28;
                func_0x00010bfaea20(puVar29);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1878e0(param_2);
                _objc_release(puVar27);
                _objc_release(puVar29);
                puVar29 = puVar28;
                func_0x00010bf00560(puVar28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be8d760(param_2);
                _objc_release(puVar29);
                _objc_release(puStack_3c8);
                _objc_release(puVar25);
                _objc_release(puVar28);
                if (puVar30 == (undefined *)0x0) {
                  puVar29 = puVar32;
                  func_0x00010c0d3c80();
                  func_0x00010c066b00();
                  puStack_598 = puVar29;
                  func_0x00010bf51e00();
                  _objc_release(puVar32);
                  _objc_release(puVar29);
                }
                else {
                  *(undefined **)(param_2 + 0x420) = puVar30;
                  puStack_598 = puVar32;
                }
              }
              uVar26 = *(undefined8 *)(param_2 + 0x3e0);
              func_0x00010c269d40(uVar26);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = *(undefined8 *)(param_2 + 0x3e0);
              func_0x00010c269d40(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c24b4c0();
              func_0x00010c2087c0(uVar26);
              _objc_release(uVar9);
              _objc_release(uVar26);
              _objc_release(puVar18);
              _objc_release(puStack_5f0);
              _objc_release(puVar23);
            }
            _objc_release(ppuVar19);
          }
          _objc_release(puVar33);
          _objc_release(puVar31);
        }
      }
      _objc_release(puVar35);
    }
    if ((param_2[0x1d0] & 1) == 0) {
      puVar29 = param_2;
      func_0x00010bf5fae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be5e300(param_2);
      _objc_release(puVar29);
    }
    *(undefined8 *)(param_2 + 0xf8) = 0x4092c00000000000;
    lStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    plStack_490 = (long *)0x0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    _objc_retain(puVar7);
    puVar29 = puVar7;
    func_0x00010bf52a60();
    if (puVar29 != (undefined *)0x0) {
      lVar10 = *plStack_490;
      do {
        puVar35 = (undefined *)0x0;
        do {
          if (*plStack_490 != lVar10) {
            _objc_enumerationMutation(puVar7);
          }
          uVar12 = *(undefined8 *)(lStack_498 + (long)puVar35 * 8);
          _objc_retain(uVar12);
          uVar9 = uVar12;
          param_3 = (undefined **)PTR_DAT_1126a56d8;
          func_0x00010010fab4();
          uVar26 = uVar12;
          if ((int)uVar9 == 0) {
            uVar26 = 0;
          }
          _objc_retain(uVar26);
          _objc_release(uVar12);
          uVar9 = uVar26;
          func_0x00010c235280();
          if ((int)uVar9 != 0) {
            *(undefined8 *)(param_2 + 0xf8) = 0x4072c00000000000;
          }
          _objc_release(uVar26);
          puVar35 = puVar35 + 1;
        } while (puVar29 != puVar35);
        puVar29 = puVar7;
        func_0x00010bf52a60();
      } while (puVar29 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    func_0x00010bf94960(PTR_PTR_1126cffc8);
    puVar29 = param_2;
    func_0x00010bee7360();
    if ((int)puVar29 == 0) {
      puVar35 = PTR_PTR_1126ce7e8;
      _objc_alloc();
      puVar29 = param_2 + 0xd8;
      _objc_loadWeakRetained(puVar29);
      puVar31 = puVar29;
      func_0x00010c0f36c0();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(param_2 + 0x168);
      func_0x00010c269d40(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0340a0();
      uVar9 = *(undefined8 *)(param_2 + 0x118);
      *(undefined **)(param_2 + 0x118) = puVar35;
      _objc_release(uVar9);
      _objc_release(uVar26);
      _objc_release(puVar31);
    }
    else {
      puVar29 = *(undefined **)(param_2 + 0x118);
      *(undefined8 *)(param_2 + 0x118) = 0;
    }
    _objc_release(puVar29);
    if (*(long *)(param_2 + 0x1c8) == 0) {
      puVar29 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff860();
      _objc_release(puVar29);
    }
    uVar26 = *(undefined8 *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR_PTR_1126c63a0;
    func_0x00010c24b660(PTR_PTR_1126c63a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f360();
    _objc_release(puVar29);
    _objc_release(uVar26);
    if (((param_10 - 0x49U < 0x1a) && ((1L << (param_10 - 0x49U & 0x3f) & 0x2020001U) != 0)) ||
       ((uVar13 = param_10 - 0x57U >> 1, (uVar13 | param_10 - 0x57U << 0x3f) < 8 &&
        ((1L << (uVar13 & 0x3f) & 0xb1U) != 0)))) {
      uVar26 = *(undefined8 *)(param_2 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265680();
      _objc_release(uVar26);
    }
    puVar29 = PTR_PTR_1126b2400;
    _objc_alloc(PTR_PTR_1126b2400);
    func_0x00010c018aa0(0);
    if (*(long *)(param_2 + 0x188) != 0) {
      func_0x00010be56760(param_2);
      func_0x00010bddf8a0(param_2);
    }
    puVar35 = PTR_PTR_1126b23f0;
    _objc_alloc(PTR_PTR_1126b23f0);
    puVar31 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108534aa8(param_10);
    func_0x00010c011ae0(puVar35);
    _objc_release(puVar31);
    uVar26 = *(undefined8 *)(param_2 + 0x198);
    puVar31 = PTR_PTR_1126b23f8;
    if (*(long *)(param_2 + 0x1c8) == 0) {
      _objc_alloc(PTR_PTR_1126b23f8);
      func_0x00010c0087a0();
    }
    else {
      _objc_alloc(PTR_PTR_1126b23f8);
      func_0x00010c0372c0();
    }
    puVar30 = puVar7;
    func_0x00010bf51e00();
    func_0x00010bf23920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(param_2 + 0x188) = uVar26;
    _objc_release(uVar9);
    _objc_release(puVar30);
    _objc_release(puVar31);
    uVar9 = *(undefined8 *)(param_2 + 0x138);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar9;
    func_0x00010bf8f100();
    _objc_release(uVar9);
    if ((int)uVar26 != 0) {
      puVar30 = puVar7;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126cc5d8;
      _objc_alloc(PTR_PTR_1126cc5d8);
      puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR_PTR_1126ae720;
      if (puVar30 == (undefined *)0x0) {
        puVar31 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar30);
        puStack_4a8 = puVar30;
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar36 = &puStack_4a8;
      }
      func_0x00010c04e040(puVar18);
      if (puVar30 != (undefined *)0x0) {
        _objc_release(puVar31);
      }
      _objc_release(puVar33);
      func_0x00010c20c580(*(undefined8 *)(param_2 + 0x188));
      _objc_release(puVar18);
      if (puVar30 != (undefined *)0x0) {
        _objc_release(*ppuVar36);
      }
      _objc_release(puVar30);
    }
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010bf9d620(*(undefined8 *)(param_2 + 400));
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010bf04340(PTR_PTR_1126cffc8);
    func_0x00010be3ce20(param_2);
    param_2[0xb8] = 1;
    func_0x00010bf94960(PTR_PTR_1126cffc8);
    if (param_2[0x339] == '\x01') {
      func_0x00010be66c60(param_2);
    }
    if (*(long *)(param_2 + 0x1c8) == 0) {
      puVar31 = param_2;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      if (puVar31 != (undefined *)0x0) {
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xa0));
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xa8));
        puVar18 = param_2;
        func_0x00010bf5fae0();
        _objc_retainAutoreleasedReturnValue();
        puVar30 = puVar18;
        func_0x00010bf52a60();
        lVar10 = lRam0000000000000000;
        while (puVar30 != (undefined *)0x0) {
          puVar33 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar10) {
              _objc_enumerationMutation(puVar18);
            }
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xb0));
            puVar33 = puVar33 + 1;
          } while (puVar30 != puVar33);
          puVar30 = puVar18;
          func_0x00010bf52a60();
        }
        _objc_release(puVar18);
      }
      _objc_release(puVar31);
    }
    func_0x00010bf95500(PTR_PTR_1126cffc8);
    _objc_release(puVar35);
    _objc_release(puVar29);
    _objc_destroyWeak(auStack_360);
    _objc_destroyWeak(auStack_338);
    _objc_destroyWeak(auStack_310);
    _objc_destroyWeak(auStack_2e8);
    _objc_destroyWeak(&puStack_2e0);
    _objc_release(puVar11);
    _objc_release(uStack_580);
    _objc_release(puStack_590);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puStack_598);
  }
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar4);
LAB_106a6af64:
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_360);
    _objc_destroyWeak(auStack_338);
    _objc_destroyWeak(auStack_310);
    _objc_destroyWeak(auStack_2e8);
    _objc_destroyWeak(&puStack_2e0);
    __Unwind_Resume(param_4);
    _objc_retain(param_3);
    ppuVar36 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a56d0);
    uVar5 = 0;
    if (param_3 != (undefined **)0x0) {
      uVar5 = (uint)ppuVar36;
    }
    _objc_release(param_3);
    return (ulong)uVar5;
  }
  return param_4;
}



/* Entry: 106a6b12c; end: 106a6b173;  */

undefined4 FUN_106a6b12c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a56d0);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (undefined4)lVar2;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106a6b174; end: 106a6b1ff;  */

void FUN_106a6b174(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010c0ff8c0(lVar2);
  }
  else {
    func_0x00010c0ff780();
  }
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a6b200; end: 106a6b2eb;  */

void FUN_106a6b200(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar3 = lVar2;
  func_0x00010c23b780(lVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106a6b2ec; end: 106a6b38f;  */

void FUN_106a6b2ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1b81c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a6b390; end: 106a6b3af;  */

uint FUN_106a6b390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106a6b3b0; end: 106a6b3df;  */

void FUN_106a6b3b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106a6b3e0; end: 106a6b3ff;  */

uint FUN_106a6b3e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106a6b400; end: 106a6b46f;  */

undefined4 FUN_106a6b400(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5580);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (undefined4)lVar2;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106a6b470; end: 106a6b7a7; -[SCSpotlightPlaybackManager _storeAvailableMetadataAndMediaCountAtStartUpIfNeeded:] */

void FUN_106a6b470(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x470) == 0) && (*(long *)(param_1 + 0x478) == 0)) {
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_106a65534;
    uStack_100 = 0x106a65544;
    uStack_f8 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x270);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010be3b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    uVar5 = uVar1;
    func_0x00010c24b6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c25a440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ff60();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x470);
    *(undefined **)(param_1 + 0x470) = puVar4;
    _objc_release(uVar1);
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar1 = puStack_118[5];
        func_0x00010c259740(*(undefined8 *)(lVar7 * 8));
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(uVar1);
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      lVar6 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x478);
    *(undefined **)(param_1 + 0x478) = puVar4;
    _objc_release(uVar1);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  _objc_retain(uVar1);
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106a6b7a8; end: 106a6b7df;  */

void FUN_106a6b7a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a6b7e0; end: 106a6b7e7; -[SCSpotlightPlaybackManager currentOperaSessionId] */

void FUN_106a6b7e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x148),PTR_s_currentOperaSessionId_1125b5758);
  return;
}



/* Entry: 106a6b7e8; end: 106a6b7eb; -[SCSpotlightPlaybackManager _installPlaybackDebugView:] */

void FUN_106a6b7e8(void)

{
  return;
}



/* Entry: 106a6b7ec; end: 106a6b7ef; -[SCSpotlightPlaybackManager _resetDebugPlaybackStateWithDedupeFpsAndRequestBatchRefresh:] */

void FUN_106a6b7ec(void)

{
  return;
}


