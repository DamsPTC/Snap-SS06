/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106393e70; end: 106393ee3; -[SCAdChromeInteractionSessionProxy initWithLegacyChromeInteractionSession:] */

undefined1 * FUN_106393e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f10d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106393ee4; end: 106393f13; -[SCAdChromeInteractionSessionProxy _currentChromeInteractionSession] */

void FUN_106393ee4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106393f14; end: 106393f6f; -[SCAdChromeInteractionSessionProxy setChromeInteractionSession:] */

void FUN_106393f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca2b8;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bffe160();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106393f70; end: 106393fbf; -[SCAdChromeInteractionSessionProxy setPlaylistItemController:] */

void FUN_106393f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdf68a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ddde0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106393fc0; end: 106394003; -[SCAdChromeInteractionSessionProxy playlistItemController] */

void FUN_106393fc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf68a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106394004; end: 106394053; -[SCAdChromeInteractionSessionProxy setOperaControlling:] */

void FUN_106394004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdf68a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d53c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106394054; end: 106394097; -[SCAdChromeInteractionSessionProxy operaControlling] */

void FUN_106394054(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf68a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106394098; end: 1063940d3; -[SCAdChromeInteractionSessionProxy isPresentingProfile] */

undefined8 FUN_106394098(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf68a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07aca0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063940d4; end: 106394137; -[SCAdChromeInteractionSessionProxy adsDrivenSwipeLeftToShowAttachmentWithPageId:] */

undefined8 FUN_1063940d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdf68a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010befdf60();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106394138; end: 10639417b; -[SCAdChromeInteractionSessionProxy registeredEventsForOperaSession] */

void FUN_106394138(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf68a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c127820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10639417c; end: 106394203; -[SCAdChromeInteractionSessionProxy operaViewDidSendEvent:page:params:] */

void FUN_10639417c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdf68a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106394204; end: 106394267; -[SCAdChromeInteractionSessionProxy shouldTriggerAttachmentOnTapChromeWithPageId:] */

undefined8 FUN_106394204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdf68a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c234f20();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106394268; end: 1063942cb; -[SCAdChromeInteractionSessionProxy shouldTriggerAttachmentOnTapChromeProfileIconWithPageId:] */

undefined8 FUN_106394268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdf68a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c234f00();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063942cc; end: 1063942fb; -[SCAdChromeInteractionSessionProxy .cxx_destruct] */

void FUN_1063942cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063942fc; end: 1063948f7; -[SCAdAnalyticsSession initWithUserSession:adDataSource:viewLocation:storySessionId:deepLinkId:adTrackerHelper:unskippableAdManager:navigationStyle:adBlizzardLogger:trackMetricsManager:promotedStoryLogger:p2pDataSource:adConfigProvider:adConfigProviderV2:adEOVTimerProvider:grapheneRegistry:circumstanceEngine:memoryPressureState:appInstallAdsDisplayed:skAdNetworkMetricsManager:adCrashLogger:chromeSession:operaEventStateTracker:sessionViewingHistory:] */

undefined8 *
FUN_1063942fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
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
  puStack_70 = PTR_PTR_1126f10e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    puVar1[0xb] = param_5;
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar1[0xe] = param_10;
    _objc_retain(param_12);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x33];
    puVar1[0x33] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010c269d40(param_20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec0520(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x29];
    puVar1[0x29] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_23;
    _objc_release(uVar2);
    puVar1[0x2d] = 0;
    *(undefined1 *)(puVar1 + 0x2e) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x30];
    puVar1[0x30] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x31];
    puVar1[0x31] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x32];
    puVar1[0x32] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_26;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x36];
    puVar1[0x36] = puVar3;
    _objc_release(uVar2);
  }
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1063948f8; end: 106394913;  */

void FUN_1063948f8(void)

{
  _objc_opt_new(PTR_PTR_1126aeea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106394914; end: 106394d2f; -[SCAdAnalyticsSession registeredEventsForOperaSession] */

void FUN_106394914(double param_1,double param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined **ppuVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined *puVar33;
  undefined *in_x4;
  long lVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126c9a00;
  func_0x00010c2a4400();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126b2330;
  puStack_148 = puVar3;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_140 = puVar31;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_138 = puVar4;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_130 = puVar5;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR_PTR_1126b2330;
  puStack_128 = puVar6;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_120 = puVar35;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126c9460;
  puStack_118 = puVar7;
  func_0x00010c0f2600();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9460;
  puStack_110 = puVar36;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2338;
  puStack_108 = puVar8;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2338;
  puStack_100 = puVar9;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2338;
  puStack_f8 = puVar10;
  func_0x00010c0f60e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2338;
  puStack_f0 = puVar11;
  func_0x00010c13d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ca2c0;
  puStack_e8 = puVar12;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9cf0;
  puStack_e0 = puVar13;
  func_0x00010c0ff280();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b2638;
  puStack_d8 = puVar14;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2638;
  puStack_d0 = puVar15;
  func_0x00010bf7a500();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126ca1c0;
  puStack_c8 = puVar16;
  func_0x00010bf7c360();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ca1c0;
  puStack_c0 = puVar17;
  func_0x00010bf7c600();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c7d70;
  puStack_b8 = puVar18;
  func_0x00010bf3c700();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126ca1d0;
  puStack_b0 = puVar19;
  func_0x00010bf7c2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b2638;
  puStack_a8 = puVar20;
  func_0x00010c288220();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126b2638;
  puStack_a0 = puVar21;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2638;
  puStack_98 = puVar22;
  func_0x00010bf7dc80();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126ca1d0;
  puStack_90 = puVar23;
  func_0x00010bf73ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126ca1d8;
  puStack_88 = puVar24;
  func_0x00010bf7c260();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126b2ea8;
  puStack_80 = puVar25;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = &puStack_148;
  puVar33 = (undefined *)0x1b;
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar26;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar36);
  _objc_release(puVar7);
  _objc_release(puVar35);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar31);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar32);
  _objc_retain(puVar33);
  _objc_retain(in_x4);
  if ((puVar33 != (undefined *)0x0) && ((puVar3[0x78] & 1) == 0)) {
    puVar31 = puVar33;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar31;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    _objc_release(puVar31);
    if ((int)puVar5 != 0) {
      puVar3[0x78] = 1;
    }
  }
  puVar31 = puVar3 + 0x1b8;
  _objc_loadWeakRetained();
  puVar4 = puVar31;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar31);
  puVar31 = puVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(puVar3 + 0x80);
  func_0x00010be36bc0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar31;
  func_0x00010c0720c0();
  if ((int)puVar4 == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar29 = ppuVar32;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar28);
    _objc_release(puVar31);
    if (((ulong)ppuVar29 & 1) == 0) {
      puVar31 = puVar3;
      func_0x00010be45640();
      if ((int)puVar31 != 0) {
        _objc_retain(puVar5);
        puVar31 = *(undefined **)(puVar3 + 0x80);
        *(undefined **)(puVar3 + 0x80) = puVar5;
        goto LAB_106394e60;
      }
      func_0x00010c0f5b20(*(undefined8 *)(puVar3 + 0x10));
      puVar31 = puVar3 + 0x1c0;
      _objc_loadWeakRetained(puVar31);
      puVar4 = puVar31;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010be571c0(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar31);
      _objc_retain(puVar5);
      uVar28 = *(undefined8 *)(puVar3 + 0x80);
      *(undefined **)(puVar3 + 0x80) = puVar5;
      _objc_release(uVar28);
      func_0x00010c138160(*(undefined8 *)(puVar3 + 0x10));
    }
  }
  else {
    _objc_release(uVar28);
LAB_106394e60:
    _objc_release(puVar31);
  }
  puVar4 = puVar33;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(ulong *)(puVar3 + 0x178);
  func_0x00010c0720c0();
  puVar31 = PTR_PTR_1126b2340;
  if ((puVar4 != (undefined *)0x0) && ((uVar30 & 1) == 0)) {
    puVar35 = puVar33;
    func_0x00010c118b40(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    puVar6 = PTR_PTR_1126ca2b0;
    if (((ulong)puVar31 & 1) == 0) {
      puVar31 = puVar33;
      func_0x00010c118b40(puVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c400();
      _objc_release(puVar31);
      _objc_release(puVar35);
      if (((ulong)puVar6 & 1) != 0) goto LAB_10639500c;
      *(undefined8 *)(puVar3 + 0x168) = 0;
      puVar3[0x170] = 0;
      _objc_retain(puVar4);
      puVar35 = *(undefined **)(puVar3 + 0x178);
      *(undefined **)(puVar3 + 0x178) = puVar4;
    }
    _objc_release(puVar35);
  }
LAB_10639500c:
  puVar31 = puVar3 + 0x1b8;
  _objc_loadWeakRetained();
  puVar6 = puVar31;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar31);
  puVar31 = puVar6;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(puVar3 + 0x88);
  func_0x00010c0844e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar31;
  func_0x00010c0720c0();
  _objc_release(uVar28);
  _objc_release(puVar31);
  if (((ulong)puVar35 & 1) == 0) {
    uVar28 = *(undefined8 *)(puVar3 + 0x88);
    *(undefined8 *)(puVar3 + 0x88) = 0;
    _objc_release(uVar28);
  }
  puVar31 = puVar3 + 0x1b8;
  _objc_loadWeakRetained(puVar31);
  puVar35 = puVar6;
  FUN_106441e74(puVar6,puVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar31);
  puVar31 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar29 = ppuVar32;
  func_0x00010c0720c0();
  _objc_release(puVar31);
  puVar31 = PTR_PTR_1126b2340;
  if ((int)ppuVar29 == 0) {
    puVar7 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar29 = ppuVar32;
    func_0x00010c0720c0();
    puVar31 = puVar33;
    if ((int)ppuVar29 != 0) {
      bVar1 = puVar3[0xb1];
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2340;
      if ((bVar1 & 1) != 0) goto LAB_10639542c;
      puVar36 = puVar33;
      func_0x00010c118b40(puVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      _objc_release(puVar36);
      if ((int)puVar7 != 0) {
        uVar28 = *(undefined8 *)(puVar3 + 0x50);
LAB_1063951fc:
        func_0x00010c138160(uVar28);
        goto LAB_1063955f0;
      }
      puVar7 = PTR_PTR_1126ca220;
      func_0x00010c0f1420();
      if ((int)puVar7 == 0) {
LAB_1063956a0:
        func_0x00010be941e0(puVar3);
      }
      else {
        iVar2 = (int)*(undefined8 *)(puVar3 + 0x40);
        func_0x00010c0720c0();
        if (iVar2 == 0) goto LAB_1063956a0;
        uVar30 = *(ulong *)(puVar3 + 0x48);
        puVar7 = puVar33;
        func_0x00010be36bc0(puVar33);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar7);
        if ((uVar30 & 1) != 0) goto LAB_1063956a0;
        *(undefined8 *)(puVar3 + 0x28) = 0;
      }
      func_0x00010c24d960(*(undefined8 *)(puVar3 + 0x18));
      puVar7 = PTR_PTR_1126b2340;
      func_0x00010c118b40(puVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040();
      if ((int)puVar7 != 0) {
        lVar34 = *(long *)(puVar3 + 0x88);
        _objc_release(puVar31);
        if (lVar34 != 0) {
          uVar28 = *(undefined8 *)(puVar3 + 0x88);
          func_0x00010bf604e0(PTR_PTR_1126afec0);
          func_0x00010c286ba0(uVar28);
        }
        goto LAB_1063955f0;
      }
      goto LAB_1063955ec;
    }
    _objc_release(puVar7);
LAB_10639542c:
    puVar7 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar29 = ppuVar32;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b2340;
    if ((int)ppuVar29 == 0) {
      puVar7 = PTR_PTR_1126c9a00;
      func_0x00010c2a4400(PTR_PTR_1126c9a00);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar29 != 0) goto LAB_1063955bc;
      puVar7 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar29 != 0) goto LAB_1063955bc;
      puVar7 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2340;
      if ((int)ppuVar29 != 0) {
        func_0x00010c118b40(puVar33);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079440();
        if ((int)puVar7 == 0) {
          _objc_release(puVar31);
        }
        else {
          puVar7 = puVar33;
          func_0x00010c06b7e0();
          _objc_release(puVar31);
          if ((int)puVar7 != 0) {
            func_0x00010c0f5b20(*(undefined8 *)(puVar3 + 0x18));
            func_0x00010be92da0(puVar3);
            func_0x00010be51b60(puVar3);
            goto LAB_1063955f0;
          }
        }
        puVar31 = PTR_PTR_1126b2340;
        puVar7 = puVar33;
        func_0x00010c118b40(puVar33);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0771a0();
        _objc_release(puVar7);
        if ((int)puVar31 == 0) {
          puVar31 = puVar33;
          func_0x00010c06b7e0();
          if ((int)puVar31 != 0) {
            func_0x00010be18120(puVar3);
          }
          func_0x00010c0f5b20(*(undefined8 *)(puVar3 + 0x18));
          func_0x00010be92da0(puVar3);
          puVar31 = PTR_PTR_1126b2348;
          func_0x00010c0f62c0(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = in_x4;
          func_0x00010c0e00e0(in_x4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(puVar7);
          _objc_release(puVar31);
          if ((puVar3[0x20] == '\x01') &&
             (param_1 = param_1 - *(double *)(puVar3 + 0x38), param_1 <= 0.0)) {
            param_1 = 0.0;
          }
          func_0x00010bf67aa0(param_1,*(undefined8 *)(puVar3 + 0x18));
          puVar3[0x20] = 0;
          puVar31 = PTR_PTR_1126ca220;
          func_0x00010c0f1420();
          if (((ulong)puVar31 & 1) == 0) {
            uVar28 = *(undefined8 *)(puVar3 + 0x40);
            *(undefined8 *)(puVar3 + 0x40) = 0;
            _objc_release(uVar28);
            puVar31 = *(undefined **)(puVar3 + 0x48);
            *(undefined8 *)(puVar3 + 0x48) = 0;
          }
          else {
            puVar31 = puVar35;
            func_0x00010bf51e00();
            uVar28 = *(undefined8 *)(puVar3 + 0x40);
            *(undefined **)(puVar3 + 0x40) = puVar31;
            _objc_release(uVar28);
            puVar31 = puVar33;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar31;
            func_0x00010bf51e00();
            uVar28 = *(undefined8 *)(puVar3 + 0x48);
            *(undefined **)(puVar3 + 0x48) = puVar7;
            _objc_release(uVar28);
          }
          _objc_release(puVar31);
          func_0x00010bee83c0(puVar3);
        }
        else {
          func_0x00010c0f5b20(*(undefined8 *)(puVar3 + 0x50));
        }
        goto LAB_1063955f0;
      }
      puVar7 = PTR_PTR_1126b2330;
      func_0x00010bf96a00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar29 != 0) {
        *(undefined8 *)(puVar3 + 0x168) = 0;
        func_0x00010c138160(*(undefined8 *)(puVar3 + 0x10));
        if (puVar3[0xa0] == '\x01') {
          func_0x00010c138160(*(undefined8 *)(puVar3 + 0xa8));
        }
        if (puVar3[0xb1] != '\x01') goto LAB_1063955f0;
        uVar28 = *(undefined8 *)(puVar3 + 0x50);
LAB_106395764:
        func_0x00010c24d960(uVar28);
        goto LAB_1063955f0;
      }
      puVar7 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar29 != 0) {
        func_0x00010c0f5b20(*(undefined8 *)(puVar3 + 0x10));
        func_0x00010c0f5b20(*(undefined8 *)(puVar3 + 0xa8));
        if (puVar3[0xb1] == '\x01') {
          func_0x00010c0f5b20(*(undefined8 *)(puVar3 + 0x50));
        }
        func_0x00010bee43a0(puVar3);
        if ((*(long *)(puVar3 + 0x58) != 0xb) && (*(long *)(puVar3 + 0x58) != 0x1e)) {
          puVar31 = puVar3 + 0x1c0;
          _objc_loadWeakRetained(puVar31);
          puVar7 = puVar31;
          func_0x00010c0688c0();
          _objc_retainAutoreleasedReturnValue();
          puVar36 = puVar7;
          func_0x00010c089060();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
          func_0x00010be571c0(puVar3);
          _objc_release(puVar36);
          _objc_release(puVar7);
          _objc_release(puVar31);
        }
        puVar31 = puVar3 + 0x1c0;
        _objc_loadWeakRetained(puVar31);
        puVar7 = puVar31;
        func_0x00010c0688c0();
        _objc_retainAutoreleasedReturnValue();
        puVar36 = puVar7;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        func_0x00010be56120(puVar3);
        _objc_release(puVar36);
        _objc_release(puVar7);
        _objc_release(puVar31);
        func_0x00010c138160(*(undefined8 *)(puVar3 + 0x10));
        func_0x00010c137fe0(*(undefined8 *)(puVar3 + 0xa8));
        goto LAB_1063955f0;
      }
      puVar7 = PTR_PTR_1126c9460;
      func_0x00010c0f2600(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar29 != 0) {
        puVar3[0xb0] = 0;
        goto LAB_1063955f0;
      }
      puVar7 = PTR_PTR_1126c9460;
      func_0x00010c0f25a0(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar29 != 0) {
        func_0x00010be18120(puVar3);
        puVar3[0xb0] = 1;
        goto LAB_1063955f0;
      }
      puVar7 = PTR_PTR_1126b2ea8;
      func_0x00010c235940(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar29 != 0) {
        puVar7 = puVar33;
        func_0x00010c06b7e0();
        puVar31 = PTR_PTR_1126b2340;
        if ((int)puVar7 != 0) {
          puVar7 = puVar33;
          func_0x00010c118b40(puVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0771a0();
          _objc_release(puVar7);
          if (((ulong)puVar31 & 1) == 0) {
            func_0x00010be18120(puVar3);
          }
        }
        goto LAB_1063955f0;
      }
      puVar7 = PTR_PTR_1126ca2c0;
      func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2340;
      if ((int)ppuVar29 != 0) {
        func_0x00010c118b40(puVar33);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079440();
        if ((int)puVar7 != 0) {
          puVar7 = puVar33;
          func_0x00010c06b7e0();
          _objc_release(puVar31);
          if ((int)puVar7 == 0) goto LAB_1063955f0;
          func_0x00010be51b60(puVar3);
          uVar28 = *(undefined8 *)(puVar3 + 0x10);
          goto LAB_1063951fc;
        }
        goto LAB_1063955ec;
      }
      puVar31 = PTR_PTR_1126c9cf0;
      func_0x00010c0ff280(PTR_PTR_1126c9cf0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar32;
      func_0x00010c0720c0();
      _objc_release(puVar31);
      if ((int)ppuVar29 == 0) {
        puVar31 = PTR_PTR_1126b2638;
        func_0x00010bf7a500(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        ppuVar29 = ppuVar32;
        func_0x00010c0720c0();
        _objc_release(puVar31);
        if ((int)ppuVar29 == 0) {
          puVar31 = PTR_PTR_1126c7d70;
          func_0x00010bf3c700(PTR_PTR_1126c7d70);
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = ppuVar32;
          func_0x00010c0720c0();
          _objc_release(puVar31);
          if ((int)ppuVar29 != 0) {
            func_0x00010be580a0(puVar3);
            goto LAB_1063955f0;
          }
          puVar31 = PTR_PTR_1126ca1d0;
          func_0x00010bf7c2e0(PTR_PTR_1126ca1d0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = ppuVar32;
          func_0x00010c0720c0();
          _objc_release(puVar31);
          if ((int)ppuVar29 == 0) {
            puVar31 = PTR_PTR_1126ca1d8;
            func_0x00010bf7c260(PTR_PTR_1126ca1d8);
            _objc_retainAutoreleasedReturnValue();
            ppuVar29 = ppuVar32;
            func_0x00010c0720c0();
            _objc_release(puVar31);
            if ((int)ppuVar29 != 0) {
              func_0x00010be75ca0(puVar3);
              goto LAB_1063955f0;
            }
            puVar31 = PTR_PTR_1126ca1d0;
            func_0x00010bf798c0(PTR_PTR_1126ca1d0);
            _objc_retainAutoreleasedReturnValue();
            ppuVar29 = ppuVar32;
            func_0x00010c0720c0();
            _objc_release(puVar31);
            if ((int)ppuVar29 == 0) {
              puVar31 = PTR_PTR_1126b2638;
              func_0x00010c288220(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              ppuVar29 = ppuVar32;
              func_0x00010c0720c0();
              _objc_release(puVar31);
              if ((int)ppuVar29 == 0) {
                puVar31 = PTR_PTR_1126b2638;
                func_0x00010c2a59e0(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                ppuVar29 = ppuVar32;
                func_0x00010c0720c0();
                _objc_release(puVar31);
                if ((int)ppuVar29 == 0) {
                  puVar31 = PTR_PTR_1126b2638;
                  func_0x00010bf7dc80(PTR_PTR_1126b2638);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar29 = ppuVar32;
                  func_0x00010c0720c0();
                  _objc_release(puVar31);
                  if ((int)ppuVar29 == 0) {
                    puVar31 = PTR_PTR_1126ca1d0;
                    func_0x00010bf73ca0(PTR_PTR_1126ca1d0);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar29 = ppuVar32;
                    func_0x00010c0720c0();
                    _objc_release(puVar31);
                    if ((int)ppuVar29 != 0) {
                      if (puVar4 != (undefined *)0x0) {
                        func_0x00010befa120(*(undefined8 *)(puVar3 + 400));
                      }
                      goto LAB_1063955f0;
                    }
                    puVar31 = PTR_PTR_1126b2338;
                    func_0x00010c0f60e0(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar29 = ppuVar32;
                    func_0x00010c0720c0();
                    _objc_release(puVar31);
                    if ((int)ppuVar29 != 0) {
                      func_0x00010be59da0(puVar3);
                      goto LAB_1063955f0;
                    }
                    puVar31 = PTR_PTR_1126b2338;
                    func_0x00010c13d9e0(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar29 = ppuVar32;
                    func_0x00010c0720c0();
                    _objc_release(puVar31);
                    if (((int)ppuVar29 == 0) || (puVar3[0x20] != '\x01')) goto LAB_1063955f0;
                    puVar31 = puVar3 + 0x1c0;
                    _objc_loadWeakRetained(puVar31);
                    puVar7 = puVar31;
                    func_0x00010c29dfe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar36 = puVar7;
                    func_0x00010bf60c40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR_PTR_1126b2348;
                    func_0x00010c0f62c0(PTR_PTR_1126b2348);
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar36;
                    func_0x00010c0e00e0(puVar36);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf885a0();
                    *(double *)(puVar3 + 0x38) = param_1;
                    _objc_release(puVar9);
                    _objc_release(puVar8);
                    _objc_release(puVar36);
                    _objc_release(puVar7);
                    _objc_release(puVar31);
                    uVar28 = *(undefined8 *)(puVar3 + 0x18);
                    goto LAB_106395764;
                  }
                  puVar31 = PTR_PTR_1126b6008;
                  func_0x00010c128140(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar31);
                  puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  puVar36 = puVar7;
                  _objc_opt_isKindOfClass(puVar7,puVar31);
                  puVar31 = puVar7;
                  if (((ulong)puVar36 & 1) == 0) {
                    puVar31 = (undefined *)0x0;
                  }
                  _objc_retain();
                  _objc_release(puVar7);
                  puVar7 = PTR_PTR_1126b6008;
                  func_0x00010bf1d980(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  puVar36 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar7);
                  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  puVar8 = puVar36;
                  _objc_opt_isKindOfClass(puVar36,puVar7);
                  puVar7 = puVar36;
                  if (((ulong)puVar8 & 1) == 0) {
                    puVar7 = (undefined *)0x0;
                  }
                  _objc_retain(puVar7);
                  _objc_release(puVar36);
                  puVar36 = PTR_PTR_1126b6008;
                  func_0x00010bf1d9a0(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar36);
                  puVar36 = puVar8;
                  _object_getClass();
                  iVar2 = (int)puVar36;
                  _class_isMetaClass();
                  puVar36 = (undefined *)0x0;
                  if (iVar2 != 0) {
                    puVar36 = puVar8;
                    _NSStringFromClass(puVar8);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  func_0x00010c067fc0(puVar31);
                  func_0x00010bf1f3c0(puVar7);
                  _objc_release(puVar7);
                  func_0x00010be52480(puVar3);
                  _objc_release(puVar36);
                  _objc_release(puVar8);
                }
                else {
                  puVar31 = PTR_PTR_1126c9410;
                  func_0x00010c2979e0(PTR_PTR_1126c9410);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar31);
                  puVar31 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
                  puVar36 = puVar7;
                  _objc_opt_isKindOfClass(puVar7,puVar31);
                  puVar31 = puVar7;
                  if (((ulong)puVar36 & 1) == 0) {
                    puVar31 = (undefined *)0x0;
                  }
                  _objc_retain(puVar31);
                  _objc_release(puVar7);
                  if (((puVar31 != (undefined *)0x0) &&
                      (func_0x00010bdc1060(puVar7), puVar4 != (undefined *)0x0)) && (0.0 <= param_2)
                     ) {
                    func_0x00010befa120(*(undefined8 *)(puVar3 + 0x188));
                  }
                }
                goto LAB_1063955ec;
              }
              puVar31 = PTR_PTR_1126b6008;
              func_0x00010c0ea660(PTR_PTR_1126b6008);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar31);
              puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar36 = puVar7;
              _objc_opt_isKindOfClass(puVar7,puVar31);
              puVar31 = puVar7;
              if (((ulong)puVar36 & 1) == 0) {
                puVar31 = (undefined *)0x0;
              }
              _objc_retain(puVar31);
              _objc_release(puVar7);
              puVar7 = puVar31;
              func_0x00010c067fc0();
              _objc_release(puVar31);
              if (puVar7 != (undefined *)0xa) goto LAB_1063955f0;
            }
            func_0x00010bdd0ca0(puVar3);
            goto LAB_1063955f0;
          }
          func_0x00010bdd0ca0(puVar3);
          puVar31 = PTR_PTR_1126ca240;
          func_0x00010c264d40(PTR_PTR_1126ca240);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = in_x4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar31);
          puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar36 = puVar7;
          _objc_opt_isKindOfClass(puVar7,puVar31);
          puVar31 = puVar7;
          if (((ulong)puVar36 & 1) == 0) {
            puVar31 = (undefined *)0x0;
          }
          _objc_retain(puVar31);
          _objc_release(puVar7);
          puVar7 = puVar31;
          func_0x00010bf1f3c0();
          _objc_release(puVar31);
          puVar31 = PTR_PTR_1126b8d98;
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010c24cd20(PTR_PTR_1126b8d98);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c24cd40();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar36 = puVar3;
          func_0x00010bec9340(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be59860(puVar3);
        }
        else {
          puVar31 = PTR_PTR_1126b6008;
          func_0x00010c152bc0(PTR_PTR_1126b6008);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = in_x4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar31);
          puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar36 = puVar7;
          _objc_opt_isKindOfClass(puVar7,puVar31);
          puVar31 = puVar7;
          if (((ulong)puVar36 & 1) == 0) {
            puVar31 = (undefined *)0x0;
          }
          _objc_retain(puVar31);
          _objc_release(puVar7);
          puVar7 = PTR_PTR_1126ca2b0;
          puVar36 = puVar33;
          func_0x00010c118b40(puVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c080620();
          if (((int)puVar7 != 0) && (puVar7 = puVar31, func_0x00010bf1f3c0(), (int)puVar7 != 0)) {
            _objc_release(puVar36);
            if (puVar4 != (undefined *)0x0) {
              func_0x00010befa120(*(undefined8 *)(puVar3 + 0x180));
            }
            goto LAB_1063955ec;
          }
        }
        _objc_release(puVar36);
        goto LAB_1063955ec;
      }
      *(undefined8 *)(puVar3 + 0xd0) = 0;
      puVar31 = PTR_PTR_1126c9cf8;
      func_0x00010c27c520(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = in_x4;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar31);
      if (puVar7 == (undefined *)0x0) goto LAB_1063955f0;
      puVar31 = PTR_PTR_1126c9cf8;
      func_0x00010c27c520(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar7;
      func_0x00010c067fc0();
      *(undefined **)(puVar3 + 0xd0) = puVar36;
      goto LAB_106395414;
    }
    func_0x00010c118b40(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    if (((ulong)puVar7 & 1) == 0) {
      lVar34 = *(long *)(puVar3 + 0x88);
      _objc_release(puVar31);
      if (lVar34 != 0) {
        uVar28 = *(undefined8 *)(puVar3 + 0x88);
        func_0x00010bf604e0(PTR_PTR_1126afec0);
        func_0x00010c286ba0(uVar28);
      }
    }
    else {
      _objc_release(puVar31);
    }
LAB_1063955bc:
    puVar7 = PTR_PTR_1126afec0;
    puVar31 = *(undefined **)(puVar3 + 0x150);
    func_0x00010c269d40(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec800();
    func_0x00010c155420(puVar7);
    *(double *)(puVar3 + 0x158) = param_1;
  }
  else {
    puVar7 = puVar33;
    func_0x00010c118b40(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60();
    _objc_release(puVar7);
    if ((int)puVar31 != 0) {
      func_0x00010be941e0(puVar3);
    }
    puVar31 = PTR_PTR_1126b2340;
    puVar7 = puVar33;
    func_0x00010c118b40(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079440();
    if (((int)puVar31 == 0) || (puVar31 = puVar33, func_0x00010c06b7e0(), (int)puVar31 == 0)) {
      _objc_release(puVar7);
    }
    else {
      puVar31 = PTR_PTR_1126ca220;
      func_0x00010c0f1400();
      _objc_release(puVar7);
      if (((ulong)puVar31 & 1) == 0) {
        func_0x00010be941e0(puVar3);
      }
    }
    puVar31 = PTR_PTR_1126b2340;
    puVar7 = puVar33;
    func_0x00010c118b40(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    if ((((ulong)puVar31 & 1) == 0) && (puVar31 = puVar33, func_0x00010c06b7e0(), (int)puVar31 != 0)
       ) {
      lVar34 = *(long *)(puVar3 + 0x88);
      _objc_release(puVar7);
      if (lVar34 == 0) {
        func_0x00010bf604e0(PTR_PTR_1126afec0);
        puVar31 = puVar3;
        func_0x00010bee68e0();
        ppuVar29 = &PTR_PTR_1126ca2c8;
        if ((int)puVar31 == 0) {
          ppuVar29 = &PTR_PTR_1126ca2d0;
        }
        puVar31 = *ppuVar29;
        _objc_alloc();
        puVar7 = puVar6;
        func_0x00010be36bc0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01fec0(param_1);
        uVar28 = *(undefined8 *)(puVar3 + 0x88);
        *(undefined **)(puVar3 + 0x88) = puVar31;
        _objc_release(uVar28);
        goto LAB_1063952c0;
      }
    }
    else {
LAB_1063952c0:
      _objc_release(puVar7);
    }
    if (((puVar3[0xa0] & 1) == 0) &&
       (puVar31 = puVar6, FUN_106396408(puVar6,*(undefined8 *)(puVar3 + 8)), (int)puVar31 != 0)) {
      puVar3[0xa0] = 1;
      _objc_retain(puVar6);
      uVar28 = *(undefined8 *)(puVar3 + 0x98);
      *(undefined **)(puVar3 + 0x98) = puVar6;
      _objc_release(uVar28);
      func_0x00010c138160(*(undefined8 *)(puVar3 + 0xa8));
    }
    if ((puVar3[0xa0] == '\x01') &&
       (puVar31 = puVar6, FUN_106396408(puVar6,*(undefined8 *)(puVar3 + 8)),
       ((ulong)puVar31 & 1) == 0)) {
      puVar31 = puVar3 + 0x1c0;
      _objc_loadWeakRetained(puVar31);
      puVar7 = puVar31;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar7;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010be56120(puVar3);
      _objc_release(puVar36);
      _objc_release(puVar7);
      _objc_release(puVar31);
      puVar3[0xa0] = 0;
      uVar28 = *(undefined8 *)(puVar3 + 0x98);
      *(undefined8 *)(puVar3 + 0x98) = 0;
      _objc_release(uVar28);
      func_0x00010c137fe0(*(undefined8 *)(puVar3 + 0xa8));
    }
    puVar31 = PTR_PTR_1126b2340;
    puVar7 = puVar33;
    func_0x00010c118b40(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60(puVar31);
    func_0x00010c1bea20(*(undefined8 *)(puVar3 + 0x88));
    _objc_release(puVar7);
    puVar31 = puVar3 + 0x1c0;
    _objc_loadWeakRetained();
    puVar7 = puVar31;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar7;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar36;
    func_0x00010c27dd80();
    *(undefined **)(puVar3 + 0xd8) = puVar8;
    _objc_release(puVar36);
LAB_106395414:
    _objc_release(puVar7);
  }
LAB_1063955ec:
  _objc_release(puVar31);
LAB_1063955f0:
  _objc_release(puVar35);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(in_x4);
  _objc_release(puVar33);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar32);
  return;
}



/* Entry: 106394d30; end: 106396407; -[SCAdAnalyticsSession operaViewDidSendEvent:page:params:] */

void FUN_106394d30(double param_1,double param_2,undefined *param_3,undefined8 param_4,ulong param_5
                  ,undefined *param_6,undefined *param_7)

{
  undefined **ppuVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_6 != (undefined *)0x0) && ((param_3[0x78] & 1) == 0)) {
    puVar10 = param_6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    _objc_release(puVar10);
    if ((int)puVar5 != 0) {
      param_3[0x78] = 1;
    }
  }
  puVar10 = param_3 + 0x1b8;
  _objc_loadWeakRetained();
  puVar4 = puVar10;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar10);
  puVar10 = puVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x80);
  func_0x00010be36bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010c0720c0();
  if ((int)puVar4 == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar10);
    if ((uVar8 & 1) == 0) {
      puVar10 = param_3;
      func_0x00010be45640();
      if ((int)puVar10 != 0) {
        _objc_retain(puVar5);
        puVar10 = *(undefined **)(param_3 + 0x80);
        *(undefined **)(param_3 + 0x80) = puVar5;
        goto LAB_106394e60;
      }
      func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0x10));
      puVar10 = param_3 + 0x1c0;
      _objc_loadWeakRetained(puVar10);
      puVar4 = puVar10;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010be571c0(param_3);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar10);
      _objc_retain(puVar5);
      uVar6 = *(undefined8 *)(param_3 + 0x80);
      *(undefined **)(param_3 + 0x80) = puVar5;
      _objc_release(uVar6);
      func_0x00010c138160(*(undefined8 *)(param_3 + 0x10));
    }
  }
  else {
    _objc_release(uVar6);
LAB_106394e60:
    _objc_release(puVar10);
  }
  puVar4 = param_6;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(ulong *)(param_3 + 0x178);
  func_0x00010c0720c0();
  puVar10 = PTR_PTR_1126b2340;
  if ((puVar4 != (undefined *)0x0) && ((uVar8 & 1) == 0)) {
    puVar14 = param_6;
    func_0x00010c118b40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    puVar7 = PTR_PTR_1126ca2b0;
    if (((ulong)puVar10 & 1) == 0) {
      puVar10 = param_6;
      func_0x00010c118b40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c400();
      _objc_release(puVar10);
      _objc_release(puVar14);
      if (((ulong)puVar7 & 1) != 0) goto LAB_10639500c;
      *(undefined8 *)(param_3 + 0x168) = 0;
      param_3[0x170] = 0;
      _objc_retain(puVar4);
      puVar14 = *(undefined **)(param_3 + 0x178);
      *(undefined **)(param_3 + 0x178) = puVar4;
    }
    _objc_release(puVar14);
  }
LAB_10639500c:
  puVar10 = param_3 + 0x1b8;
  _objc_loadWeakRetained();
  puVar7 = puVar10;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puVar7;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x88);
  func_0x00010c0844e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar10;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(puVar10);
  if (((ulong)puVar14 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x88);
    *(undefined8 *)(param_3 + 0x88) = 0;
    _objc_release(uVar6);
  }
  puVar10 = param_3 + 0x1b8;
  _objc_loadWeakRetained(puVar10);
  puVar14 = puVar7;
  FUN_106441e74(puVar7,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b2340;
  if ((int)uVar8 == 0) {
    puVar9 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_5;
    func_0x00010c0720c0();
    puVar10 = param_6;
    if ((int)uVar8 != 0) {
      bVar2 = param_3[0xb1];
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126b2340;
      if ((bVar2 & 1) != 0) goto LAB_10639542c;
      puVar15 = param_6;
      func_0x00010c118b40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      _objc_release(puVar15);
      if ((int)puVar9 != 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x50);
LAB_1063951fc:
        func_0x00010c138160(uVar6);
        goto LAB_1063955f0;
      }
      puVar9 = PTR_PTR_1126ca220;
      func_0x00010c0f1420();
      if ((int)puVar9 == 0) {
LAB_1063956a0:
        func_0x00010be941e0(param_3);
      }
      else {
        iVar3 = (int)*(undefined8 *)(param_3 + 0x40);
        func_0x00010c0720c0();
        if (iVar3 == 0) goto LAB_1063956a0;
        uVar8 = *(ulong *)(param_3 + 0x48);
        puVar9 = param_6;
        func_0x00010be36bc0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar9);
        if ((uVar8 & 1) != 0) goto LAB_1063956a0;
        *(undefined8 *)(param_3 + 0x28) = 0;
      }
      func_0x00010c24d960(*(undefined8 *)(param_3 + 0x18));
      puVar9 = PTR_PTR_1126b2340;
      func_0x00010c118b40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040();
      if ((int)puVar9 != 0) {
        lVar13 = *(long *)(param_3 + 0x88);
        _objc_release(puVar10);
        if (lVar13 != 0) {
          uVar6 = *(undefined8 *)(param_3 + 0x88);
          func_0x00010bf604e0(PTR_PTR_1126afec0);
          func_0x00010c286ba0(uVar6);
        }
        goto LAB_1063955f0;
      }
      goto LAB_1063955ec;
    }
    _objc_release(puVar9);
LAB_10639542c:
    puVar9 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b2340;
    if ((int)uVar8 == 0) {
      puVar9 = PTR_PTR_1126c9a00;
      func_0x00010c2a4400(PTR_PTR_1126c9a00);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar8 != 0) goto LAB_1063955bc;
      puVar9 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar8 != 0) goto LAB_1063955bc;
      puVar9 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126b2340;
      if ((int)uVar8 != 0) {
        func_0x00010c118b40(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079440();
        if ((int)puVar9 == 0) {
          _objc_release(puVar10);
        }
        else {
          puVar9 = param_6;
          func_0x00010c06b7e0();
          _objc_release(puVar10);
          if ((int)puVar9 != 0) {
            func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0x18));
            func_0x00010be92da0(param_3);
            func_0x00010be51b60(param_3);
            goto LAB_1063955f0;
          }
        }
        puVar10 = PTR_PTR_1126b2340;
        puVar9 = param_6;
        func_0x00010c118b40(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0771a0();
        _objc_release(puVar9);
        if ((int)puVar10 == 0) {
          puVar10 = param_6;
          func_0x00010c06b7e0();
          if ((int)puVar10 != 0) {
            func_0x00010be18120(param_3);
          }
          func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0x18));
          func_0x00010be92da0(param_3);
          puVar10 = PTR_PTR_1126b2348;
          func_0x00010c0f62c0(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = param_7;
          func_0x00010c0e00e0(param_7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(puVar9);
          _objc_release(puVar10);
          if ((param_3[0x20] == '\x01') &&
             (param_1 = param_1 - *(double *)(param_3 + 0x38), param_1 <= 0.0)) {
            param_1 = 0.0;
          }
          func_0x00010bf67aa0(param_1,*(undefined8 *)(param_3 + 0x18));
          param_3[0x20] = 0;
          puVar10 = PTR_PTR_1126ca220;
          func_0x00010c0f1420();
          if (((ulong)puVar10 & 1) == 0) {
            uVar6 = *(undefined8 *)(param_3 + 0x40);
            *(undefined8 *)(param_3 + 0x40) = 0;
            _objc_release(uVar6);
            puVar10 = *(undefined **)(param_3 + 0x48);
            *(undefined8 *)(param_3 + 0x48) = 0;
          }
          else {
            puVar10 = puVar14;
            func_0x00010bf51e00();
            uVar6 = *(undefined8 *)(param_3 + 0x40);
            *(undefined **)(param_3 + 0x40) = puVar10;
            _objc_release(uVar6);
            puVar10 = param_6;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar10;
            func_0x00010bf51e00();
            uVar6 = *(undefined8 *)(param_3 + 0x48);
            *(undefined **)(param_3 + 0x48) = puVar9;
            _objc_release(uVar6);
          }
          _objc_release(puVar10);
          func_0x00010bee83c0(param_3);
        }
        else {
          func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0x50));
        }
        goto LAB_1063955f0;
      }
      puVar9 = PTR_PTR_1126b2330;
      func_0x00010bf96a00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar8 != 0) {
        *(undefined8 *)(param_3 + 0x168) = 0;
        func_0x00010c138160(*(undefined8 *)(param_3 + 0x10));
        if (param_3[0xa0] == '\x01') {
          func_0x00010c138160(*(undefined8 *)(param_3 + 0xa8));
        }
        if (param_3[0xb1] != '\x01') goto LAB_1063955f0;
        uVar6 = *(undefined8 *)(param_3 + 0x50);
LAB_106395764:
        func_0x00010c24d960(uVar6);
        goto LAB_1063955f0;
      }
      puVar9 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar8 != 0) {
        func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0x10));
        func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0xa8));
        if (param_3[0xb1] == '\x01') {
          func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0x50));
        }
        func_0x00010bee43a0(param_3);
        if ((*(long *)(param_3 + 0x58) != 0xb) && (*(long *)(param_3 + 0x58) != 0x1e)) {
          puVar10 = param_3 + 0x1c0;
          _objc_loadWeakRetained(puVar10);
          puVar9 = puVar10;
          func_0x00010c0688c0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar9;
          func_0x00010c089060();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
          func_0x00010be571c0(param_3);
          _objc_release(puVar15);
          _objc_release(puVar9);
          _objc_release(puVar10);
        }
        puVar10 = param_3 + 0x1c0;
        _objc_loadWeakRetained(puVar10);
        puVar9 = puVar10;
        func_0x00010c0688c0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar9;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        func_0x00010be56120(param_3);
        _objc_release(puVar15);
        _objc_release(puVar9);
        _objc_release(puVar10);
        func_0x00010c138160(*(undefined8 *)(param_3 + 0x10));
        func_0x00010c137fe0(*(undefined8 *)(param_3 + 0xa8));
        goto LAB_1063955f0;
      }
      puVar9 = PTR_PTR_1126c9460;
      func_0x00010c0f2600(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar8 != 0) {
        param_3[0xb0] = 0;
        goto LAB_1063955f0;
      }
      puVar9 = PTR_PTR_1126c9460;
      func_0x00010c0f25a0(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar8 != 0) {
        func_0x00010be18120(param_3);
        param_3[0xb0] = 1;
        goto LAB_1063955f0;
      }
      puVar9 = PTR_PTR_1126b2ea8;
      func_0x00010c235940(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar8 != 0) {
        puVar9 = param_6;
        func_0x00010c06b7e0();
        puVar10 = PTR_PTR_1126b2340;
        if ((int)puVar9 != 0) {
          puVar9 = param_6;
          func_0x00010c118b40(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0771a0();
          _objc_release(puVar9);
          if (((ulong)puVar10 & 1) == 0) {
            func_0x00010be18120(param_3);
          }
        }
        goto LAB_1063955f0;
      }
      puVar9 = PTR_PTR_1126ca2c0;
      func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126b2340;
      if ((int)uVar8 != 0) {
        func_0x00010c118b40(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079440();
        if ((int)puVar9 != 0) {
          puVar9 = param_6;
          func_0x00010c06b7e0();
          _objc_release(puVar10);
          if ((int)puVar9 == 0) goto LAB_1063955f0;
          func_0x00010be51b60(param_3);
          uVar6 = *(undefined8 *)(param_3 + 0x10);
          goto LAB_1063951fc;
        }
        goto LAB_1063955ec;
      }
      puVar10 = PTR_PTR_1126c9cf0;
      func_0x00010c0ff280(PTR_PTR_1126c9cf0);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      if ((int)uVar8 == 0) {
        puVar10 = PTR_PTR_1126b2638;
        func_0x00010bf7a500(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_5;
        func_0x00010c0720c0();
        _objc_release(puVar10);
        if ((int)uVar8 == 0) {
          puVar10 = PTR_PTR_1126c7d70;
          func_0x00010bf3c700(PTR_PTR_1126c7d70);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_5;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          if ((int)uVar8 != 0) {
            func_0x00010be580a0(param_3);
            goto LAB_1063955f0;
          }
          puVar10 = PTR_PTR_1126ca1d0;
          func_0x00010bf7c2e0(PTR_PTR_1126ca1d0);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_5;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          if ((int)uVar8 == 0) {
            puVar10 = PTR_PTR_1126ca1d8;
            func_0x00010bf7c260(PTR_PTR_1126ca1d8);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = param_5;
            func_0x00010c0720c0();
            _objc_release(puVar10);
            if ((int)uVar8 != 0) {
              func_0x00010be75ca0(param_3);
              goto LAB_1063955f0;
            }
            puVar10 = PTR_PTR_1126ca1d0;
            func_0x00010bf798c0(PTR_PTR_1126ca1d0);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = param_5;
            func_0x00010c0720c0();
            _objc_release(puVar10);
            if ((int)uVar8 == 0) {
              puVar10 = PTR_PTR_1126b2638;
              func_0x00010c288220(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = param_5;
              func_0x00010c0720c0();
              _objc_release(puVar10);
              if ((int)uVar8 == 0) {
                puVar10 = PTR_PTR_1126b2638;
                func_0x00010c2a59e0(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = param_5;
                func_0x00010c0720c0();
                _objc_release(puVar10);
                if ((int)uVar8 == 0) {
                  puVar10 = PTR_PTR_1126b2638;
                  func_0x00010bf7dc80(PTR_PTR_1126b2638);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = param_5;
                  func_0x00010c0720c0();
                  _objc_release(puVar10);
                  if ((int)uVar8 == 0) {
                    puVar10 = PTR_PTR_1126ca1d0;
                    func_0x00010bf73ca0(PTR_PTR_1126ca1d0);
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = param_5;
                    func_0x00010c0720c0();
                    _objc_release(puVar10);
                    if ((int)uVar8 != 0) {
                      if (puVar4 != (undefined *)0x0) {
                        func_0x00010befa120(*(undefined8 *)(param_3 + 400));
                      }
                      goto LAB_1063955f0;
                    }
                    puVar10 = PTR_PTR_1126b2338;
                    func_0x00010c0f60e0(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = param_5;
                    func_0x00010c0720c0();
                    _objc_release(puVar10);
                    if ((int)uVar8 != 0) {
                      func_0x00010be59da0(param_3);
                      goto LAB_1063955f0;
                    }
                    puVar10 = PTR_PTR_1126b2338;
                    func_0x00010c13d9e0(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = param_5;
                    func_0x00010c0720c0();
                    _objc_release(puVar10);
                    if (((int)uVar8 == 0) || (param_3[0x20] != '\x01')) goto LAB_1063955f0;
                    puVar10 = param_3 + 0x1c0;
                    _objc_loadWeakRetained(puVar10);
                    puVar9 = puVar10;
                    func_0x00010c29dfe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar15 = puVar9;
                    func_0x00010bf60c40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = PTR_PTR_1126b2348;
                    func_0x00010c0f62c0(PTR_PTR_1126b2348);
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar15;
                    func_0x00010c0e00e0(puVar15);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf885a0();
                    *(double *)(param_3 + 0x38) = param_1;
                    _objc_release(puVar12);
                    _objc_release(puVar11);
                    _objc_release(puVar15);
                    _objc_release(puVar9);
                    _objc_release(puVar10);
                    uVar6 = *(undefined8 *)(param_3 + 0x18);
                    goto LAB_106395764;
                  }
                  puVar10 = PTR_PTR_1126b6008;
                  func_0x00010c128140(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = param_7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar10);
                  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  puVar15 = puVar9;
                  _objc_opt_isKindOfClass(puVar9,puVar10);
                  puVar10 = puVar9;
                  if (((ulong)puVar15 & 1) == 0) {
                    puVar10 = (undefined *)0x0;
                  }
                  _objc_retain();
                  _objc_release(puVar9);
                  puVar9 = PTR_PTR_1126b6008;
                  func_0x00010bf1d980(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  puVar15 = param_7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar9);
                  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  puVar11 = puVar15;
                  _objc_opt_isKindOfClass(puVar15,puVar9);
                  puVar9 = puVar15;
                  if (((ulong)puVar11 & 1) == 0) {
                    puVar9 = (undefined *)0x0;
                  }
                  _objc_retain(puVar9);
                  _objc_release(puVar15);
                  puVar15 = PTR_PTR_1126b6008;
                  func_0x00010bf1d9a0(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = param_7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar15);
                  puVar15 = puVar11;
                  _object_getClass();
                  iVar3 = (int)puVar15;
                  _class_isMetaClass();
                  puVar15 = (undefined *)0x0;
                  if (iVar3 != 0) {
                    puVar15 = puVar11;
                    _NSStringFromClass(puVar11);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  func_0x00010c067fc0(puVar10);
                  func_0x00010bf1f3c0(puVar9);
                  _objc_release(puVar9);
                  func_0x00010be52480(param_3);
                  _objc_release(puVar15);
                  _objc_release(puVar11);
                }
                else {
                  puVar10 = PTR_PTR_1126c9410;
                  func_0x00010c2979e0(PTR_PTR_1126c9410);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = param_7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar10);
                  puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
                  puVar15 = puVar9;
                  _objc_opt_isKindOfClass(puVar9,puVar10);
                  puVar10 = puVar9;
                  if (((ulong)puVar15 & 1) == 0) {
                    puVar10 = (undefined *)0x0;
                  }
                  _objc_retain(puVar10);
                  _objc_release(puVar9);
                  if (((puVar10 != (undefined *)0x0) &&
                      (func_0x00010bdc1060(puVar9), puVar4 != (undefined *)0x0)) && (0.0 <= param_2)
                     ) {
                    func_0x00010befa120(*(undefined8 *)(param_3 + 0x188));
                  }
                }
                goto LAB_1063955ec;
              }
              puVar10 = PTR_PTR_1126b6008;
              func_0x00010c0ea660(PTR_PTR_1126b6008);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = param_7;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar15 = puVar9;
              _objc_opt_isKindOfClass(puVar9,puVar10);
              puVar10 = puVar9;
              if (((ulong)puVar15 & 1) == 0) {
                puVar10 = (undefined *)0x0;
              }
              _objc_retain(puVar10);
              _objc_release(puVar9);
              puVar9 = puVar10;
              func_0x00010c067fc0();
              _objc_release(puVar10);
              if (puVar9 != (undefined *)0xa) goto LAB_1063955f0;
            }
            func_0x00010bdd0ca0(param_3);
            goto LAB_1063955f0;
          }
          func_0x00010bdd0ca0(param_3);
          puVar10 = PTR_PTR_1126ca240;
          func_0x00010c264d40(PTR_PTR_1126ca240);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar15 = puVar9;
          _objc_opt_isKindOfClass(puVar9,puVar10);
          puVar10 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar10 = (undefined *)0x0;
          }
          _objc_retain(puVar10);
          _objc_release(puVar9);
          puVar9 = puVar10;
          func_0x00010bf1f3c0();
          _objc_release(puVar10);
          puVar10 = PTR_PTR_1126b8d98;
          if (((ulong)puVar9 & 1) == 0) {
            func_0x00010c24cd20(PTR_PTR_1126b8d98);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c24cd40();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar15 = param_3;
          func_0x00010bec9340(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be59860(param_3);
        }
        else {
          puVar10 = PTR_PTR_1126b6008;
          func_0x00010c152bc0(PTR_PTR_1126b6008);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar15 = puVar9;
          _objc_opt_isKindOfClass(puVar9,puVar10);
          puVar10 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar10 = (undefined *)0x0;
          }
          _objc_retain(puVar10);
          _objc_release(puVar9);
          puVar9 = PTR_PTR_1126ca2b0;
          puVar15 = param_6;
          func_0x00010c118b40(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c080620();
          if (((int)puVar9 != 0) && (puVar9 = puVar10, func_0x00010bf1f3c0(), (int)puVar9 != 0)) {
            _objc_release(puVar15);
            if (puVar4 != (undefined *)0x0) {
              func_0x00010befa120(*(undefined8 *)(param_3 + 0x180));
            }
            goto LAB_1063955ec;
          }
        }
        _objc_release(puVar15);
        goto LAB_1063955ec;
      }
      *(undefined8 *)(param_3 + 0xd0) = 0;
      puVar10 = PTR_PTR_1126c9cf8;
      func_0x00010c27c520(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_7;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar10);
      if (puVar9 == (undefined *)0x0) goto LAB_1063955f0;
      puVar10 = PTR_PTR_1126c9cf8;
      func_0x00010c27c520(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar9;
      func_0x00010c067fc0();
      *(undefined **)(param_3 + 0xd0) = puVar15;
      goto LAB_106395414;
    }
    func_0x00010c118b40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    if (((ulong)puVar9 & 1) == 0) {
      lVar13 = *(long *)(param_3 + 0x88);
      _objc_release(puVar10);
      if (lVar13 != 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x88);
        func_0x00010bf604e0(PTR_PTR_1126afec0);
        func_0x00010c286ba0(uVar6);
      }
    }
    else {
      _objc_release(puVar10);
    }
LAB_1063955bc:
    puVar9 = PTR_PTR_1126afec0;
    puVar10 = *(undefined **)(param_3 + 0x150);
    func_0x00010c269d40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec800();
    func_0x00010c155420(puVar9);
    *(double *)(param_3 + 0x158) = param_1;
  }
  else {
    puVar9 = param_6;
    func_0x00010c118b40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60();
    _objc_release(puVar9);
    if ((int)puVar10 != 0) {
      func_0x00010be941e0(param_3);
    }
    puVar10 = PTR_PTR_1126b2340;
    puVar9 = param_6;
    func_0x00010c118b40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079440();
    if (((int)puVar10 == 0) || (puVar10 = param_6, func_0x00010c06b7e0(), (int)puVar10 == 0)) {
      _objc_release(puVar9);
    }
    else {
      puVar10 = PTR_PTR_1126ca220;
      func_0x00010c0f1400();
      _objc_release(puVar9);
      if (((ulong)puVar10 & 1) == 0) {
        func_0x00010be941e0(param_3);
      }
    }
    puVar10 = PTR_PTR_1126b2340;
    puVar9 = param_6;
    func_0x00010c118b40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    if ((((ulong)puVar10 & 1) == 0) && (puVar10 = param_6, func_0x00010c06b7e0(), (int)puVar10 != 0)
       ) {
      lVar13 = *(long *)(param_3 + 0x88);
      _objc_release(puVar9);
      if (lVar13 == 0) {
        func_0x00010bf604e0(PTR_PTR_1126afec0);
        puVar10 = param_3;
        func_0x00010bee68e0();
        ppuVar1 = &PTR_PTR_1126ca2c8;
        if ((int)puVar10 == 0) {
          ppuVar1 = &PTR_PTR_1126ca2d0;
        }
        puVar10 = *ppuVar1;
        _objc_alloc();
        puVar9 = puVar7;
        func_0x00010be36bc0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01fec0(param_1);
        uVar6 = *(undefined8 *)(param_3 + 0x88);
        *(undefined **)(param_3 + 0x88) = puVar10;
        _objc_release(uVar6);
        goto LAB_1063952c0;
      }
    }
    else {
LAB_1063952c0:
      _objc_release(puVar9);
    }
    if (((param_3[0xa0] & 1) == 0) &&
       (puVar10 = puVar7, FUN_106396408(puVar7,*(undefined8 *)(param_3 + 8)), (int)puVar10 != 0)) {
      param_3[0xa0] = 1;
      _objc_retain(puVar7);
      uVar6 = *(undefined8 *)(param_3 + 0x98);
      *(undefined **)(param_3 + 0x98) = puVar7;
      _objc_release(uVar6);
      func_0x00010c138160(*(undefined8 *)(param_3 + 0xa8));
    }
    if ((param_3[0xa0] == '\x01') &&
       (puVar10 = puVar7, FUN_106396408(puVar7,*(undefined8 *)(param_3 + 8)),
       ((ulong)puVar10 & 1) == 0)) {
      puVar10 = param_3 + 0x1c0;
      _objc_loadWeakRetained(puVar10);
      puVar9 = puVar10;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar9;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010be56120(param_3);
      _objc_release(puVar15);
      _objc_release(puVar9);
      _objc_release(puVar10);
      param_3[0xa0] = 0;
      uVar6 = *(undefined8 *)(param_3 + 0x98);
      *(undefined8 *)(param_3 + 0x98) = 0;
      _objc_release(uVar6);
      func_0x00010c137fe0(*(undefined8 *)(param_3 + 0xa8));
    }
    puVar10 = PTR_PTR_1126b2340;
    puVar9 = param_6;
    func_0x00010c118b40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60(puVar10);
    func_0x00010c1bea20(*(undefined8 *)(param_3 + 0x88));
    _objc_release(puVar9);
    puVar10 = param_3 + 0x1c0;
    _objc_loadWeakRetained();
    puVar9 = puVar10;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar15;
    func_0x00010c27dd80();
    *(undefined **)(param_3 + 0xd8) = puVar11;
    _objc_release(puVar15);
LAB_106395414:
    _objc_release(puVar9);
  }
LAB_1063955ec:
  _objc_release(puVar10);
LAB_1063955f0:
  _objc_release(puVar14);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106396408; end: 106396527;  */

bool FUN_106396408(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    uVar2 = param_1;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_10643f30c();
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010be36bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010bef4b20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bef60a0();
      _objc_release(lVar5);
      _objc_release(uVar2);
      bVar1 = lVar6 == 5 || lVar6 == 0x16;
      goto LAB_106396500;
    }
  }
  bVar1 = false;
LAB_106396500:
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106396528; end: 1063965cf; -[SCAdAnalyticsSession _logDidTryPagingWhenPagingDisabledWithRelativePosition:blockingLayerPresent:blockingLayerType:itemId:] */

void FUN_106396528(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  if ((param_3 == 4) && (param_6 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 400);
    func_0x00010bf4b900(uVar2,param_2,param_6);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126b8d98;
      func_0x00010c24cd60(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110e4cdf8;
      if (param_4 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      func_0x00010be59860(param_1,param_2,puVar3,param_6,ppuVar1);
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 400));
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1063965d0; end: 1063966b3; -[SCAdAnalyticsSession _verifyAndLogSSFMetricsIfNeededForItemId:] */

void FUN_1063965d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x180);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    if ((int)uVar1 != 0) {
      puVar2 = PTR_PTR_1126b8d98;
      func_0x00010c24cca0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be59860(param_1,param_2,puVar2,param_3,0);
      _objc_release(puVar2);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c24cc80(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be59860(param_1,param_2,puVar2,param_3,0);
    _objc_release(puVar2);
  }
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x180));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x188));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063966b4; end: 106396927; -[SCAdAnalyticsSession _logSwipeSensitivityLayerEvent:forItemId:errorReason:] */

void FUN_1063966b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x1b8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = param_1 + 0x1b8;
    _objc_loadWeakRetained();
    uVar3 = uVar10;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar4 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar10 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef60a0(uVar10);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c2ac460(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef4240(uVar10);
  func_0x00010c0df840(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2ac460(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  lVar1 = param_5;
  func_0x00010c08fa60();
  uVar7 = uVar8;
  if (lVar1 != 0) {
    func_0x00010c2ac460(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106396928; end: 106396c8b; -[SCAdAnalyticsSession _swipeFailureReasonFromParams:] */

undefined ** FUN_106396928(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ca240;
    func_0x00010c264d40(PTR_PTR_1126ca240);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if ((uVar1 == 0) || (func_0x00010bf1f3c0(), (uVar3 & 1) != 0)) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126ca240;
      func_0x00010bf86e80(PTR_PTR_1126ca240);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126ca240;
      func_0x00010bf87020(PTR_PTR_1126ca240);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      uVar4 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      puVar2 = PTR_PTR_1126ca240;
      func_0x00010c2979e0(PTR_PTR_1126ca240);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar2);
      uVar5 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      puVar2 = PTR_PTR_1126ca240;
      func_0x00010c297a40(PTR_PTR_1126ca240);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar2);
      uVar6 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar7);
      puVar2 = PTR_PTR_1126ca240;
      func_0x00010c083ce0(PTR_PTR_1126ca240);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar9 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar2);
      uVar7 = uVar8;
      if ((uVar9 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar8);
      uVar8 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      if ((int)uVar8 == 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e4ce18;
      }
      else {
        func_0x00010bf885a0(uVar3);
        dVar11 = param_1;
        func_0x00010bf885a0(uVar4);
        if (dVar11 <= param_1) {
          func_0x00010bf885a0(uVar5);
          dVar12 = dVar11;
          func_0x00010bf885a0(uVar6);
          ppuVar10 = &PTR____CFConstantStringClassReference_110e4ce58;
          if (dVar12 <= dVar11) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110db8b78;
          }
        }
        else {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e4ce38;
        }
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return ppuVar10;
}



/* Entry: 106396c8c; end: 106396de7; -[SCAdAnalyticsSession _populateContextSwipeGestureParameters:adRequestId:currentItem:page:] */

void FUN_106396c8c(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
    func_0x00010c0e2760(*(undefined8 *)(param_1 + 0xc0));
    puVar2 = PTR_PTR_1126b6168;
    func_0x00010c264d60(PTR_PTR_1126b6168);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if (((int)uVar3 != 0) && (lVar5 = param_1, func_0x00010beb7600(), (int)lVar5 != 0)) {
      lVar5 = param_1;
      func_0x00010bdfb8e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be75d00(param_1);
      *(undefined8 *)(param_1 + 0x168) = 2;
      *(undefined1 *)(param_1 + 0x170) = 0;
      _objc_release(lVar5);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106396de8; end: 106396eb3; -[SCAdAnalyticsSession _attemptPopulateDetailedGestureParameters:adRequestId:currentItem:page:] */

void FUN_106396de8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bdfb8e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x148),param_2,lVar1,param_4);
    lVar2 = param_1;
    func_0x00010beb6f00(param_1,param_2,param_3,param_4);
    _objc_release(param_3);
    if ((int)lVar2 != 0) {
      func_0x00010be75d00(param_1,param_2,lVar1,param_4,param_5);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106396eb4; end: 1063975e7; -[SCAdAnalyticsSession _detailedGestureParametersFromPageParameters:] */

void FUN_106396eb4(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  puVar2 = PTR_PTR_1126c9a28;
  _objc_retain(param_4);
  func_0x00010c29d1e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c9a28;
  func_0x00010c29d260(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126afec0;
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800();
  uVar7 = *(undefined8 *)(param_2 + 0x150);
  dVar11 = param_1;
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fd80();
  dVar12 = dVar11;
  func_0x00010bf885a0(uVar1);
  param_1 = param_1 - (dVar11 - dVar12);
  func_0x00010c155420(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126afec0;
  uVar4 = uVar1;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  func_0x00010bf885a0(uVar4);
  dVar11 = param_1;
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  param_1 = param_1 - dVar11;
  func_0x00010c155420(puVar2);
  puVar2 = PTR_PTR_1126c9a28;
  dVar11 = param_1;
  func_0x00010c29d180(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ca240;
  func_0x00010c154c40(PTR_PTR_1126ca240);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c9a28;
  func_0x00010c29d200(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar8 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar8 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126c9a28;
  func_0x00010c29d1a0(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar5 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126c9a28;
  func_0x00010c29d1c0(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar2);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  func_0x00010bf885a0(uVar5);
  dVar12 = dVar11;
  _objc_release(uVar5);
  func_0x00010bf885a0(uVar8);
  dVar13 = dVar12;
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126ca240;
  func_0x00010c154c60(PTR_PTR_1126ca240);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar5 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126ca240;
  func_0x00010c154c80(PTR_PTR_1126ca240);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar2);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  func_0x00010bf885a0(uVar5);
  dVar14 = dVar13;
  _objc_release(uVar5);
  func_0x00010bf885a0(uVar8);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126c9a28;
  func_0x00010c29d220(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar5 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126c9a28;
  func_0x00010c29d240(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar2);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  func_0x00010bf885a0(uVar5);
  _objc_release(uVar5);
  func_0x00010bf885a0(uVar8);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126ca240;
  func_0x00010c268d60(PTR_PTR_1126ca240);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar5 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126ca2d8;
  uVar6 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uVar9 = (ulong)(uint)(float)param_1;
  uVar8 = uVar1;
  if (uVar4 != 0) {
    uVar8 = uVar4;
  }
  _objc_retain(uVar8);
  _objc_alloc(puVar2);
  func_0x00010bdc1060(uVar1);
  uVar10 = uVar9;
  uVar7 = uVar6;
  func_0x00010bdc1060(uVar3);
  _objc_release(uVar3);
  func_0x00010bdc1060(uVar8);
  _objc_release(uVar8);
  func_0x00010c067fc0(uVar5);
  _objc_release(uVar5);
  func_0x00010c04bb20(uVar9,uVar6,dVar11,dVar12,uVar10,uVar7,dVar13,dVar14,puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063975e8; end: 106397683; -[SCAdAnalyticsSession _populateDetailedGestureParameters:adRequestId:currentItem:] */

void FUN_1063975e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1d0640(uVar1,param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef53c0(uVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c286280(*(undefined8 *)(param_1 + 0xc0),param_2,param_4,uVar1,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106397684; end: 1063978af; -[SCAdAnalyticsSession _logSKAdClickMetricsForItem:params:] */

void FUN_106397684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  _objc_retain(param_4);
  lVar16 = *(long *)(param_1 + 8);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(lVar16,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar16 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = lVar16;
    func_0x00010bef4240();
    lVar3 = lVar16;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar16;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar16;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf3ca00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar16;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c29e460();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar16;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf2bfa0();
    lVar11 = lVar16;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c247820();
    puVar13 = PTR_PTR_1126c7d78;
    func_0x00010bf987e0(PTR_PTR_1126c7d78);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_4;
    func_0x00010c0e00e0(param_4,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aea80(0,0,uVar1,param_2,2,uVar15,0,lVar2,lVar3,lVar4,lVar6,lVar8,lVar10,lVar12,
                        uVar14);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
  }
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063978b0; end: 106397bef; -[SCAdAnalyticsSession logCloseViewWithItem:page:params:dismissModelDurationInSec:lastInteraction:] */

void FUN_1063978b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_2 + 0x1b8;
  _objc_loadWeakRetained(lVar1);
  uVar5 = param_4;
  FUN_106441bb4(param_4,lVar1);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126ca2b0;
  if ((int)uVar5 == 0) goto LAB_106397ae4;
  lVar1 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070440();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ca2b0;
  if (((ulong)puVar2 & 1) != 0) goto LAB_106397ae4;
  lVar1 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c400();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b2340;
  if ((int)puVar3 == 0) {
    lVar1 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    _objc_release(lVar1);
    if ((int)puVar2 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_2 + 0x50));
      puVar2 = PTR_PTR_1126b2340;
      lVar1 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771c0();
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126b2340;
      if ((int)puVar2 == 0) {
        lVar1 = param_5;
        func_0x00010c118b40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c077180();
        _objc_release(lVar1);
        if ((int)puVar3 == 0) {
          lVar1 = param_5;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126bfe00;
          func_0x00010c0fd0e0(PTR_PTR_1126bfe00);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar2);
          _objc_release(lVar1);
          if (lVar4 != 0) {
            func_0x00010c27dd80(param_7);
            func_0x00010be570a0(param_2);
          }
        }
        else {
          func_0x00010c27dd80(param_7);
          func_0x00010be514a0(param_2);
        }
      }
      else {
        func_0x00010c27dd80(param_7);
        func_0x00010be57a20(param_2);
      }
      goto LAB_1063979c8;
    }
    func_0x00010c0f5b20(*(undefined8 *)(param_2 + 0x18));
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    func_0x00010c286b40(uVar5);
    func_0x00010be59dc0(param_1,param_2);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = 0;
    _objc_release(uVar5);
  }
  else {
    func_0x00010c0f5b20(*(undefined8 *)(param_2 + 0x50));
    func_0x00010c27dd80(param_7);
    func_0x00010be502e0(param_2);
LAB_1063979c8:
    func_0x00010bee2c80(param_2);
  }
  puVar2 = PTR_PTR_1126b2340;
  lVar1 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0();
  *(char *)(param_2 + 0xb2) = (char)puVar2;
  _objc_release(lVar1);
LAB_106397ae4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106397bf0; end: 106397cf7; -[SCAdAnalyticsSession logScreenShotViewWithItem:lastInteractionType:] */

void FUN_106397bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x1b8;
  _objc_loadWeakRetained(lVar1);
  uVar4 = param_3;
  FUN_106441bb4(param_3,lVar1);
  _objc_release(lVar1);
  if ((int)uVar4 != 0) {
    puVar2 = PTR_PTR_1126ca2e0;
    _objc_opt_new(PTR_PTR_1126ca2e0);
    lVar1 = 0x50;
    if (*(char *)(param_1 + 0xb0) == '\0') {
      lVar1 = 0x18;
    }
    func_0x00010beed820(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c2bb1e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1060(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be75c20(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0f00(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106397cf8; end: 10639811b; -[SCAdAnalyticsSession _logCloseTileViewWithItem:didAdvanceToNext:] */

void FUN_106397cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong in_stack_ffffffffffffff70;
  
  _objc_retain(param_7);
  lVar2 = param_5 + 0x1b8;
  _objc_loadWeakRetained(lVar2);
  uVar10 = param_7;
  FUN_106441bb4(param_7,lVar2);
  _objc_release(lVar2);
  if (((int)uVar10 != 0) && ((*(byte *)(param_5 + 0x78) & 1) == 0)) {
    puVar3 = (undefined *)(param_5 + 0x1b8);
    _objc_loadWeakRetained();
    uVar10 = param_7;
    func_0x00010bfce400(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b8e08;
    _objc_opt_class(PTR_PTR_1126b8e08);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    if (((ulong)puVar5 & 1) != 0) {
      _objc_retain(puVar4);
      iVar1 = (int)*(undefined8 *)(param_5 + 0x128);
      func_0x000108f54a98();
      uVar10 = 2;
      if (iVar1 == 0) {
        uVar10 = 3;
      }
      func_0x000107c79b74(uVar10,*(undefined8 *)(param_5 + 0x128),0);
      uVar6 = *(undefined8 *)(param_5 + 0xf0);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c07b560();
      _objc_release(uVar6);
      uVar7 = *(undefined8 *)(param_5 + 0x110);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf1f480();
      _objc_release(uVar7);
      puVar3 = PTR_PTR_1126bdcc8;
      puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      if ((int)uVar6 == 0) {
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        puVar3 = puVar4;
        FUN_1063ba690(param_3,param_4,param_1,param_2,0,puVar4,0,0,0,uVar10,0,0,0,
                      in_stack_ffffffffffffff70 & 0xffffffffffffff00,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010bef5920(param_3,param_4,param_1,param_2,0,puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar5);
      uVar6 = *(undefined8 *)(param_5 + 0x110);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010bf1f480();
      _objc_release(uVar6);
      if ((int)uVar10 == 0) {
        puVar5 = puVar4;
        func_0x0001084c2260(puVar4,*(undefined8 *)(param_5 + 0x108));
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = PTR_PTR_1126ca2e8;
        func_0x00010bf82060();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = puVar5;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      uVar10 = *(undefined8 *)(param_5 + 0xf0);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_5 + 0x60);
      func_0x00010c25d700(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb05c0(uVar10);
      _objc_release(uVar6);
      _objc_release(uVar10);
      puVar8 = puVar5;
      func_0x00010c25b720();
      if (puVar8 == (undefined *)0x5) {
        puVar8 = puVar5;
        func_0x00010c259560(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar8;
        func_0x00010afef744();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        uVar10 = *(undefined8 *)(param_5 + 0xf0);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010beed820(*(undefined8 *)(param_5 + 0x10));
        func_0x00010c0df720(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a08c0(0x3ff0000000000000,*(undefined8 *)PTR__CGSizeZero_110347620,
                            *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar10);
        _objc_release(puVar8);
        _objc_release(uVar10);
        _objc_release(puVar11);
      }
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10639811c; end: 106398177; -[SCAdAnalyticsSession markAsCollectionViewAutoPlay] */

void FUN_10639811c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec0c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}



/* Entry: 106398178; end: 1063981b3; -[SCAdAnalyticsSession setShowingCustomAttachment:] */

void FUN_106398178(long param_1,undefined8 param_2,int param_3)

{
  *(char *)(param_1 + 0xb1) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c138170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x50),PTR_s_resetAndStart_11262ba78);
    return;
  }
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_start_112671080);
  return;
}



/* Entry: 1063981b4; end: 1063982ab; -[SCAdAnalyticsSession isOpeningDeepLinkForPageId:] */

void FUN_1063981b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef37e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c076b80();
    if ((int)uVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x1b0);
      func_0x00010c0e00e0(uVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar3 = uVar4;
      func_0x00010bf67e60();
      if (((uVar3 & 1) == 0) && (uVar3 = uVar4, func_0x00010bf67e20(), (uVar3 & 1) == 0)) {
        uVar3 = uVar4;
        func_0x00010bf9a9c0(uVar4);
      }
      else {
        uVar3 = 1;
      }
      func_0x00010c0df760(puVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063982ac; end: 1063983a7; -[SCAdAnalyticsSession tearDown] */

void FUN_1063982ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  lVar1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  func_0x00010be571c0(param_1,param_2,uVar5,0,lVar4,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  lVar1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  func_0x00010be56120(param_1,param_2,uVar5,0,lVar4,*(undefined8 *)(param_1 + 0x178));
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1063983a8; end: 1063983bb; -[SCAdAnalyticsSession updateViewLocation:] */

void FUN_1063983a8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x58)) {
    *(long *)(param_1 + 0x58) = param_3;
  }
  return;
}



/* Entry: 1063983bc; end: 1063985eb; -[SCAdAnalyticsSession beginObservationWithAdUnifiedEventStreams:] */

void FUN_1063983bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1063985ec;
  puStack_78 = &UNK_110887e20;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef2720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106398634;
  puStack_a0 = &UNK_110887e50;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef65c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1063985ec; end: 1063986c3;  */

void FUN_1063985ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063986c4; end: 10639879b; -[SCAdAnalyticsSession _onAdLifecycleEventV2:] */

void FUN_1063986c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release();
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    _objc_release();
    if (lVar1 == 3) {
      func_0x00010be32500(param_1,param_2,param_3);
      goto LAB_106398780;
    }
  }
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    _objc_release();
    if (lVar1 != 1) goto LAB_106398780;
    lVar1 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
    }
    _objc_retain(uVar2);
    func_0x00010be32300(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release();
LAB_106398780:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639879c; end: 106398847; -[SCAdAnalyticsSession _onWebviewEventV2:] */

void FUN_10639879c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x10);
    _objc_release();
    if (lVar1 != 10) goto LAB_106398824;
    lVar1 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
    }
    _objc_retain(uVar2);
    func_0x00010be29060(param_1,param_2,uVar2,1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
LAB_106398824:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106398848; end: 106398a2f; -[SCAdAnalyticsSession _onAdDeeplinkEventV2:] */

void FUN_106398848(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release();
LAB_1063988c4:
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release();
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x18);
      _objc_release();
      if (lVar2 == 2) {
        if (lVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar1 + 0x28);
        }
        _objc_retain(uVar3);
        func_0x00010be27f60(param_1,param_2,uVar3);
        goto LAB_1063989ec;
      }
    }
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release();
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x18);
      _objc_release();
      if (lVar2 == 3) {
        if (lVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar1 + 0x28);
        }
        _objc_retain(uVar3);
        func_0x00010be29780(param_1,param_2,uVar3);
        goto LAB_1063989ec;
      }
    }
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release();
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x18);
      _objc_release();
      if (lVar2 == 5) {
        if (lVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar1 + 0x28);
        }
        _objc_retain(uVar3);
        func_0x00010be29740(param_1,param_2,uVar3);
        goto LAB_1063989ec;
      }
    }
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x18);
      _objc_release();
      if (lVar2 != 4) goto LAB_1063989f4;
      if (lVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + 0x28);
      }
      _objc_retain(uVar3);
      func_0x00010be29760(param_1,param_2,uVar3);
    }
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    _objc_release();
    if (lVar2 != 1) goto LAB_1063988c4;
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
    }
    _objc_retain(uVar3);
    func_0x00010be27ea0(param_1,param_2,uVar3);
  }
LAB_1063989ec:
  _objc_release(uVar3);
LAB_1063989f4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106398a30; end: 106398c73; -[SCAdAnalyticsSession _handleTriggerEventV2:] */

void FUN_106398a30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar1 + 0x28);
  }
  _objc_retain(uVar7);
  func_0x00010bef37e0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar1);
  func_0x00010bed8d80(param_1,param_2,param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x1b0);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
  }
  _objc_retain(uVar8);
  func_0x00010c0e00e0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar1 + 0x30);
  }
  func_0x00010c2a89a0(uVar7,param_2,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar1 + 0x48);
  }
  _objc_retain(uVar8);
  func_0x00010c2b21e0(uVar7,param_2,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar1);
  uVar8 = uVar6;
  func_0x00010c076b80();
  if ((int)uVar8 != 0) {
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c25b280(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c09c880(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c09c880(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be59260(param_1,param_2,puVar2,uVar3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(puVar2);
  }
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106398c74; end: 106398fa7; -[SCAdAnalyticsSession _updateGestureParametersWithEventV2:] */

void FUN_106398c74(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar6 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(lVar6);
  lVar6 = lVar4;
  func_0x00010c08fa60();
  if ((lVar6 != 0) && (lVar1 != 0)) {
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    _objc_retain(uVar5);
    func_0x00010bf885a0(uVar5);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    uVar10 = param_1;
    _objc_retain(uVar7);
    func_0x00010bf885a0(uVar7);
    uVar3 = uVar10;
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    _objc_retain(uVar7);
    func_0x00010bf885a0(uVar7);
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = uVar3;
    _objc_retain(uVar8);
    func_0x00010bf885a0(uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    lVar6 = *(long *)(lVar1 + 0x30);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      _objc_retain(uVar7);
      func_0x00010bf885a0(uVar7);
      uVar8 = *(undefined8 *)(lVar1 + 0x38);
      _objc_retain(uVar8);
      func_0x00010bf885a0(uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    _objc_release(lVar6);
    lVar6 = *(long *)(lVar1 + 0x40);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar1 + 0x40);
      _objc_retain(uVar7);
      func_0x00010bf885a0(uVar7);
      uVar8 = *(undefined8 *)(lVar1 + 0x48);
      _objc_retain(uVar8);
      func_0x00010bf885a0(uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    _objc_release(lVar6);
    puVar2 = PTR_PTR_1126ca2d8;
    _objc_alloc(PTR_PTR_1126ca2d8);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    _objc_retain(uVar7);
    func_0x00010bf885a0(uVar7);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    _objc_retain(uVar8);
    func_0x00010bf885a0(uVar8);
    func_0x00010c04bb20(param_1,uVar10,uVar3,uVar5,*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                        *(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),puVar2,param_3,
                        *(undefined8 *)(lVar1 + 0x60));
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x148),param_3,puVar2,lVar4);
    uVar9 = *(ulong *)(lVar1 + 0x60);
    lVar6 = param_2;
    func_0x00010beb7600(param_2,param_3,1 < uVar9);
    if ((int)lVar6 != 0) {
      *(undefined8 *)(param_2 + 0x168) = 2;
      *(bool *)(param_2 + 0x170) = 1 < uVar9;
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x140),param_3,puVar2,lVar4);
      uVar10 = *(undefined8 *)(param_2 + 0xc0);
      lVar6 = param_4;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar6 + 0x50);
      }
      func_0x00010c286280(uVar10,param_3,lVar4,uVar3,puVar2);
      _objc_release(lVar6);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106398fa8; end: 10639900f; -[SCAdAnalyticsSession _handleTopSnapPresent:] */

void FUN_106398fa8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca2f0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106399010; end: 10639904f; -[SCAdAnalyticsSession _handleDeepLinkAttemptForPageId:] */

void FUN_106399010(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b30e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106399050; end: 1063990c7; -[SCAdAnalyticsSession _handleDeepLinkOpenedForPageId:] */

void FUN_106399050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be4fec0(param_1,param_2,0,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063990c8; end: 106399107; -[SCAdAnalyticsSession _handleFellbackToWebViewForPageId:] */

void FUN_1063990c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abfa0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106399108; end: 106399147; -[SCAdAnalyticsSession _handleFellbackToAppInstallForPageId:] */

void FUN_106399108(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abf60();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106399148; end: 1063991bf; -[SCAdAnalyticsSession _handleFellbackToDefaultBrowserForPageId:] */

void FUN_106399148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abf80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be4fec0(param_1,param_2,0,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063991c0; end: 10639920b; -[SCAdAnalyticsSession _handleExbOpened:isExternal:] */

void FUN_1063991c0(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad680();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10639920c; end: 10639943b; -[SCAdAnalyticsSession _logMidRollAdGroupViewWithItem:params:lastInteractionType:pageId:] */

void FUN_10639920c(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_3 == 0) ||
     (lVar1 = param_3, FUN_106396408(param_3,*(undefined8 *)(param_1 + 8)), (int)lVar1 == 0))
  goto LAB_106399400;
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x58) != 0x27) {
    puVar2 = PTR_PTR_1126c9cc0;
    func_0x00010bfbaae0(PTR_PTR_1126c9cc0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar6 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar3);
    uVar3 = uVar6;
    func_0x00010bf1f3c0();
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ca2f8;
    func_0x00010bf68e80(PTR_PTR_1126ca2f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar6 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar4);
    uVar4 = uVar6;
    func_0x00010bf1f3c0();
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010c079320();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      if ((((uint)uVar3 | (uint)uVar4) & 1) == 0) goto LAB_1063993c8;
    }
    else {
      uVar3 = uVar6;
      func_0x00010bf1f3c0();
      if ((uVar3 & 1) == 0) {
LAB_1063993c8:
        func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
        func_0x00010bece180(param_1);
      }
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar7);
LAB_106399400:
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639943c; end: 1063996a3; -[SCAdAnalyticsSession _isVerticalEndCardSiblingGroupTransitionFrom:to:] */

ulong FUN_10639943c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar12 = 0;
  if ((param_3 == 0) || (param_4 == 0)) goto LAB_106399674;
  lVar2 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if ((lVar4 == 0) || (lVar4 = lVar3, func_0x00010c08fa60(), lVar4 == 0)) {
LAB_106399640:
    uVar12 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126ca220;
    func_0x00010bf94400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0720c0();
    if ((int)puVar6 == 0) {
      puVar6 = PTR_PTR_1126ca220;
      func_0x00010bf94400();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if ((int)puVar7 == 0) goto LAB_106399640;
    }
    else {
      _objc_release(puVar5);
    }
    uVar12 = param_1 + 0x1b8;
    _objc_loadWeakRetained();
    uVar8 = uVar12;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar5 = PTR_PTR_1126b8e08;
    _objc_opt_class(PTR_PTR_1126b8e08);
    uVar12 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar5);
    uVar1 = uVar8;
    if ((uVar12 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar8);
    uVar12 = param_1 + 0x1b8;
    _objc_loadWeakRetained();
    uVar9 = uVar12;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar5 = PTR_PTR_1126b8e08;
    _objc_opt_class(PTR_PTR_1126b8e08);
    uVar12 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar5);
    uVar8 = uVar9;
    if ((uVar12 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    uVar9 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c08fa60();
    if (uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      uVar10 = uVar1;
      func_0x00010bfe5ec0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010bfe5ec0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010c0720c0(uVar10);
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_106399674:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar12;
}



/* Entry: 1063996a4; end: 106399767; -[SCAdAnalyticsSession _logPostRollAdGroupViewWithItemGroup:params:lastInteractionType:page:] */

void FUN_1063996a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x1b8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_3;
    func_0x000106441c20(param_3,lVar1);
    _objc_release(lVar1);
    if (((int)lVar2 != 0) && (*(long *)(param_1 + 0x58) != 0x27)) {
      func_0x00010bece1a0(param_1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106399768; end: 106399a37; -[SCAdAnalyticsSession _trackStoryAdWithItemGroup:params:page:didEnterBackground:] */

void FUN_106399768(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 0x1b8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b8e08;
  _objc_opt_class(PTR_PTR_1126b8e08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if ((uVar1 == 0) ||
     ((uVar4 = uVar2, func_0x00010bef60a0(), uVar4 != 5 &&
      (uVar4 = uVar2, func_0x00010bef60a0(), uVar4 != 0x16)))) goto LAB_1063999fc;
  uVar5 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9cc0;
  func_0x00010bfbaae0(PTR_PTR_1126c9cc0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar4 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar6);
  uVar6 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ca2f8;
  func_0x00010bf68e80(PTR_PTR_1126ca2f8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar3);
  uVar4 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar7);
  uVar7 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c079320();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    if ((((uint)uVar6 | (uint)uVar7) & 1) == 0) goto LAB_106399978;
  }
  else {
    uVar6 = uVar4;
    func_0x00010bf1f3c0();
    if ((uVar6 & 1) == 0) {
LAB_106399978:
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar9 = param_3;
      func_0x00010bf5f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef53c0(uVar10);
      _objc_release(uVar9);
      func_0x00010bef4240();
      if (uVar2 == 4) {
        func_0x00010bece040(param_1);
      }
      else {
        func_0x00010bece180(param_1);
      }
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
LAB_1063999fc:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106399a38; end: 106399d73; -[SCAdAnalyticsSession _trackPromotedStoryAdView:didEnterBackground:snapIndex:page:] */

void FUN_106399a38(long param_1,undefined8 param_2,undefined *param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    if (param_4 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x110);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar1;
      func_0x00010bf1f480();
      _objc_release(uVar1);
      puVar3 = PTR_PTR_1126ca300;
      if ((int)uVar8 != 0) {
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          uVar8 = *(undefined8 *)(param_1 + 0xc0);
          puVar2 = param_3;
          func_0x00010bfe5ec0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf84c60(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e4e20(uVar8);
          _objc_release(puVar3);
          _objc_release(puVar2);
        }
        puVar3 = PTR_PTR_1126ca300;
        uVar8 = *(undefined8 *)(param_1 + 0xc0);
        puVar2 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9b480(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e4e20(uVar8);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
      lVar4 = param_1 + 0x1b8;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c101440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010bef6240(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0xc0);
      puVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
      func_0x00010643afcc(param_6);
      func_0x00010c2869c0(0,uVar1);
      _objc_release(puVar3);
      _objc_release(uVar8);
      _objc_release(lVar5);
    }
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    puVar3 = PTR_PTR_1126b8da0;
    func_0x00010c115b80(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbef00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf1f480();
    _objc_release(uVar6);
    if ((int)uVar8 == 0) {
      puVar3 = param_3;
      func_0x0001084c2260(param_3,*(undefined8 *)(param_1 + 0x108));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR_PTR_1126ca2e8;
      func_0x00010bf82060(PTR_PTR_1126ca2e8);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c25d700(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb05c0(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106399d74; end: 106399f7f; -[SCAdAnalyticsSession _trackStoryAdView:didEnterBackground:snapIndex:page:] */

void FUN_106399d74(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x110);
    _objc_retain(param_6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf1f480();
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ca300;
    if ((int)uVar1 != 0) {
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        uVar7 = *(undefined8 *)(param_1 + 0xc0);
        uVar1 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf84c60(puVar2,param_2,uVar1,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e4e20(uVar7,param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(uVar1);
      }
      puVar2 = PTR_PTR_1126ca300;
      uVar7 = *(undefined8 *)(param_1 + 0xc0);
      uVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b480(puVar2,param_2,uVar1,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4e20(uVar7,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar1);
    }
    lVar3 = param_1 + 0x1b8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef6240(uVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef53c0(uVar6,param_2,lVar4);
    uVar7 = param_6;
    func_0x00010643afcc(param_6);
    _objc_release(param_6);
    func_0x00010c2869c0(0,uVar8,param_2,uVar1,uVar6,uVar7,uVar5);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  func_0x00010c2789a0(*(undefined8 *)(param_1 + 0xc0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106399f80; end: 10639a497; -[SCAdAnalyticsSession _logRemoteWebViewWithItem:page:params:lastInteractionType:] */

void FUN_106399f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bdca2e0(param_1,param_2,param_6,param_4);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126ca2e0;
    _objc_opt_new(PTR_PTR_1126ca2e0);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c0f15a0(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    func_0x00010c2bcda0(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c0f15c0(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    func_0x00010c2bcdc0(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1720(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    func_0x00010c2bcd40(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1740(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    func_0x00010c2bcd60(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c0f2320(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c2bce40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c293160(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    func_0x00010c2bce20(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c293140(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    func_0x00010c2bce00(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c2a4620(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bcd00(puVar2,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c2a4600(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bcce0(puVar2,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9ab0;
    func_0x00010c2a4660(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bcd80(puVar2,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    lVar8 = *(long *)(param_1 + 8);
    uVar4 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef37c0(lVar8,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar1 = lVar8;
    func_0x00010c09c880(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf3ff00();
    _objc_release(lVar6);
    _objc_release(lVar1);
    func_0x00010c2b3100(puVar2,param_2,0 < lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa940(puVar2,param_2,lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca1a8;
    func_0x00010c089020(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b21e0(puVar2,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010be75e40(param_1,param_2,param_3,puVar2,param_6);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0fa0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar3);
    func_0x00010be4fea0(param_1,param_2,puVar3,param_3);
    _objc_release(puVar3);
    _objc_release(lVar8);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639a498; end: 10639a5c7; -[SCAdAnalyticsSession logCommercePdpAttachmentViewWithItem:collectionTotalItemCount:lastInteractedItemIndex:lastInteractionType:] */

void FUN_10639a498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ca2e0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_4;
  func_0x00010c067ec0(param_4);
  func_0x00010c2b3100(puVar1,param_2,0 < (int)uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c067ec0();
  if (0 < (int)uVar2) {
    uVar2 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010c2aa940(puVar1,param_2,(long)(int)uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b21e0(puVar1,param_2,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010be75e40(param_1,param_2,param_3,puVar1,param_6);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0fa0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar3);
  func_0x00010be4fea0(param_1,param_2,puVar3,param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10639a5c8; end: 10639a627; -[SCAdAnalyticsSession _allowRemoteWebViewLogWithLastInteractionType:page:] */

uint FUN_10639a5c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_PTR_1126ca2b0;
  if (param_3 == 0xb) {
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072640(puVar1,param_2,param_4);
    uVar2 = (uint)puVar1 ^ 1;
    _objc_release(param_4);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10639a628; end: 10639a837; -[SCAdAnalyticsSession _logAppInstallAttachmentWithItem:page:params:lastInteractionType:] */

void FUN_10639a628(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ca2e0;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c7d88;
  func_0x00010c0f1720(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c7d88;
  func_0x00010c0f1740(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c7d88;
  func_0x00010c0f2320(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bfb2c80(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca308;
  _objc_alloc(PTR_PTR_1126ca308);
  func_0x00010c0481c0((double)param_1);
  func_0x00010c2a8540(puVar1,param_3,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9420((double)param_1);
  _objc_release(uVar3);
  func_0x00010be75e40(param_2,param_3,param_4,puVar1,param_7);
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0ea0(*(undefined8 *)(param_2 + 0xf8),param_3,puVar4);
  func_0x00010be4fea0(param_2,param_3,puVar4,param_4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10639a838; end: 10639aa4f; -[SCAdAnalyticsSession _logCameraViewWithItem:params:lastInteractionType:] */

void FUN_10639a838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ca2e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126ca120;
  func_0x00010c094ba0(PTR_PTR_1126ca120);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  func_0x00010c2b29a0(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca120;
  func_0x00010c094bc0(PTR_PTR_1126ca120);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  func_0x00010c2b29c0(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca120;
  func_0x00010c096b60(PTR_PTR_1126ca120);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2c80(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2320(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf885a0(uVar3);
  func_0x00010c2b2a00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010be75e40(param_1,param_2,param_3,puVar1,param_5);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0ec0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar2);
  func_0x00010be4fea0(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10639aa50; end: 10639aaef; -[SCAdAnalyticsSession _logPlaceViewWithItem:params:lastInteractionType:] */

void FUN_10639aa50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ca2e0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75e40(param_1,param_2,param_3,puVar1,param_5);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0ee0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar2);
  func_0x00010be4fea0(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10639aaf0; end: 10639ace3; -[SCAdAnalyticsSession _logStoryAdSnapMetric:adResponse:adSnap:] */

void FUN_10639aaf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bef60a0();
  if (lVar1 == 5) {
    if (param_5 == 0) goto LAB_10639acb8;
  }
  else {
    lVar1 = param_4;
    func_0x00010bef60a0();
    if ((param_5 == 0) || (lVar1 != 0x16)) goto LAB_10639acb8;
  }
  puVar2 = PTR_PTR_1126b8ca0;
  lVar1 = param_5;
  func_0x00010bef60a0(param_5);
  func_0x00010c25d240(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b8cd8;
  lVar1 = param_4;
  func_0x00010bef4240(param_4);
  func_0x00010c25d840(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_4;
  func_0x00010c071100(param_4);
  func_0x00010c25d8c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  param_3 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110f24958,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar4);
LAB_10639acb8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639ace4; end: 10639ad73; -[SCAdAnalyticsSession _logAdSwipe:pageId:] */

void FUN_10639ace4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x1b8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  func_0x00010be4fea0(param_1,param_2,param_3,lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10639ad74; end: 10639af97; -[SCAdAnalyticsSession _logAdSwipe:item:] */

void FUN_10639ad74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010bef4260(uVar12,param_2,param_4);
  uVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bef53c0(uVar3,param_2,param_4);
  _objc_release(param_4);
  if (uVar3 < 0x7fffffffffffffff) {
    uVar4 = uVar2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    if (uVar3 < uVar5) {
      uVar5 = uVar2;
      func_0x00010bef52c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar4);
  }
  else {
    uVar3 = 0;
  }
  uVar6 = param_3;
  func_0x00010bef60a0(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c242040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c0c6c20();
  uVar9 = uVar3;
  func_0x00010c242040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c257640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0880(uVar7,param_2,uVar12,uVar6,uVar8,uVar10,uVar11 != 0,
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639af98; end: 10639b10f; -[SCAdAnalyticsSession _populateLongformCommonLogParamWithItem:logParamBuilder:lastInteractionType:] */

void FUN_10639af98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010beed820(uVar4);
  func_0x00010c2bb1e0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  lVar1 = param_1;
  func_0x00010be6d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  FUN_10639b110(uVar4,lVar2 == 1,*(undefined1 *)(param_1 + 0xb2));
  func_0x00010c2ad480(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010bf5f800(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0x12) {
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c234f00(uVar3);
  }
  else if (param_5 == 0x11) {
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c234f20(uVar3);
  }
  else {
    uVar3 = 0;
  }
  lVar1 = param_1;
  func_0x00010be6d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  func_0x00010639b1b8(param_5,lVar2 == 1,0,uVar3);
  func_0x00010c2ad6c0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be75c20(param_1);
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10639b110; end: 10639b26f;  */

undefined8 FUN_10639b110(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  switch(param_1) {
  case 0:
  case 10:
  case 0xc:
  case 0x10:
  case 0x13:
    return 0;
  default:
    return 0xb;
  case 2:
  case 0xe:
    return 0x11;
  case 3:
  case 0xf:
    return 0xe;
  case 4:
    return 10;
  case 5:
    return 7;
  case 6:
    uVar2 = 9;
    if (param_2 == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    goto code_r0x00010639b190;
  case 7:
    uVar2 = 6;
    break;
  case 8:
    uVar2 = 9;
    break;
  case 9:
    uVar2 = 6;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    return uVar2;
  case 0xb:
  case 0xd:
    return 0xc;
  case 0x11:
  case 0x12:
  case 0x14:
    return 0xffffffffffffffff;
  }
  if (param_2 != 0) {
    uVar2 = 0xffffffffffffffff;
  }
code_r0x00010639b190:
  uVar1 = 0xc;
  if (param_3 == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10639b270; end: 10639b4db; -[SCAdAnalyticsSession _populateCommonLogParamWithItem:logParamBuilder:lastInteractionType:] */

void FUN_10639b270(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x25;
  long unaff_x26;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x1b8;
  _objc_loadWeakRetained(lVar1);
  FUN_10643d83c(param_4,param_3,lVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0x58));
  _objc_release(lVar1);
  lVar1 = param_1 + 0x1b8;
  _objc_loadWeakRetained(lVar1);
  FUN_106441da4(param_3,lVar1);
  _objc_release(lVar1);
  func_0x00010c2b3b00(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc8c0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107a59564(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c2b9b80(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108534aa8(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c2bc940(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad6a0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf8c960(*(undefined8 *)(param_1 + 8));
  func_0x00010c2acc60(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0710c0(*(undefined8 *)(param_1 + 8));
  func_0x00010c2b0640(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  if (lVar3 == 0) {
    unaff_x25 = param_3;
    func_0x00010c0f3aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = unaff_x26;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c075a20(uVar2);
  func_0x00010c2b19e0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar4);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010c2ba620(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639b4dc; end: 10639b55f; -[SCAdAnalyticsSession _useSwiftAdItemLoadStatus] */

void FUN_10639b4dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f480();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 10639b560; end: 10639b58f; -[SCAdAnalyticsSession _resetTopSnapStopwatchForNewPage] */

void FUN_10639b560(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10639b590; end: 10639b747; -[SCAdAnalyticsSession _logTopSnapAdViewOnAttachmentCoverIfNeededWithItem:page:] */

void FUN_10639b590(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010beb46c0(param_2,param_3,param_4,param_5);
  if ((int)lVar1 != 0) {
    lVar1 = param_2 + 0x1c0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29dfe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf60c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b2348;
    func_0x00010c0f62c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0e00e0(lVar3,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(undefined8 *)(param_2 + 0x30) = param_1;
    _objc_release(lVar1);
    _objc_release(puVar4);
    dVar7 = *(double *)(param_2 + 0x30) - *(double *)(param_2 + 0x38);
    dVar8 = dVar7;
    if (dVar7 <= 0.0) {
      dVar8 = 0.0;
    }
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x18));
    dVar7 = dVar7 - dVar8;
    lVar1 = param_2 + 0x1c0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010be59d80(param_2,param_3,param_4,param_5,lVar3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c137fe0(*(undefined8 *)(param_2 + 0x18));
    func_0x00010c29bd00(lVar6);
    *(double *)(param_2 + 0x28) = dVar7 + *(double *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x20) = 1;
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10639b748; end: 10639b8cb; -[SCAdAnalyticsSession _shouldLogTopSnapAdViewOnAttachmentCoverForItem:page:] */

long FUN_10639b748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar4 = param_1 + 0x1b8;
    _objc_loadWeakRetained(lVar4);
    uVar2 = param_3;
    FUN_106441bb4(param_3,lVar4);
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126b2340;
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      _objc_release(uVar2);
      if (((ulong)puVar3 & 1) == 0) {
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010bef4260();
        if (lVar4 != 0x16) {
          lVar4 = *(long *)(param_1 + 8);
          uVar2 = param_3;
          func_0x00010be36bc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4b20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (lVar4 == 0) {
            lVar6 = 0;
          }
          else {
            func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
            lVar5 = lVar4;
            func_0x00010bef52e0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c0e9ec0();
            _objc_release(lVar5);
          }
          _objc_release(lVar4);
          goto LAB_10639b820;
        }
      }
    }
  }
  lVar6 = 0;
LAB_10639b820:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 10639b8cc; end: 10639ba67; -[SCAdAnalyticsSession _topSnapMediaViewedTimeMsForItem:params:] */

double FUN_10639b8cc(float param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  float fVar7;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010c068800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  param_2 = param_2 + 0x1b8;
  _objc_loadWeakRetained(param_2);
  uVar3 = param_4;
  FUN_106441da4(param_4,param_2);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2348;
  if ((uVar3 & 1) == 0) {
    func_0x00010c0c4a80(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe74e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  func_0x00010bfb2c80(uVar3);
  fVar7 = param_1;
  _objc_release(uVar3);
  func_0x00010bfb2c80(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
  return (double)(param_1 + fVar7);
}



/* Entry: 10639ba68; end: 10639badb; -[SCAdAnalyticsSession _topSnapAdViewLoadStatusLogParameters] */

void FUN_10639ba68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar1 = PTR_PTR_1126ca308;
    _objc_alloc(PTR_PTR_1126ca308);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c09c980(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c09c9a0(uVar3);
    func_0x00010c0c71e0(*(undefined8 *)(param_1 + 0x88));
    func_0x00010c0481c0(puVar1,param_2,uVar2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639badc; end: 10639cbef; -[SCAdAnalyticsSession _logTopSnapAdViewBlizzardEventWithItem:page:params:topSnapViewTimeInSec:lastInteraction:] */

void FUN_10639badc(float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  float fVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ca2e0;
  _objc_opt_new(PTR_PTR_1126ca2e0);
  uVar20 = *(undefined8 *)(param_2 + 8);
  uVar25 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef37c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar25);
  lVar2 = param_2 + 0x1b8;
  _objc_loadWeakRetained(lVar2);
  uVar25 = param_4;
  FUN_106441da4(param_4,lVar2);
  _objc_release(lVar2);
  if ((int)uVar25 == 0) {
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c0c4a80(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar8 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c068800(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bf8b340(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    func_0x00010bfb2c80(uVar8);
    _objc_release(uVar8);
    param_1 = param_1 / 1000.0;
    dVar27 = (double)param_1;
    func_0x00010bfb2c80(uVar4);
    _objc_release(uVar4);
    dVar26 = (double)(param_1 / 1000.0);
    dVar27 = dVar27 + dVar26;
    func_0x00010bfb2c80(uVar5);
    _objc_release(uVar5);
    dVar26 = (double)(SUB84(dVar26,0) / 1000.0);
  }
  else {
    puVar3 = PTR_PTR_1126c9a78;
    func_0x00010c274cc0(PTR_PTR_1126c9a78);
    dVar26 = (double)(long)puVar3;
    dVar27 = 0.0;
  }
  dVar27 = dVar27 - *(double *)(param_2 + 0x28);
  uVar25 = 0;
  if (dVar27 <= 0.0) {
    dVar27 = 0.0;
  }
  func_0x00010c2bc820(dVar27,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb520(dVar26,puVar1);
  fVar24 = SUB84(dVar26,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3b00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c0cd980(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c0e00e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar26 = (double)fVar24;
  func_0x00010c2bc780(dVar26,puVar1);
  fVar24 = SUB84(dVar26,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c0c2c20(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c0e00e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  func_0x00010c2bc760((double)fVar24,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010bfbbde0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c0e00e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c2b18a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar3);
  lVar2 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar22 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x1b0);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
  }
  uVar9 = uVar22;
  func_0x00010c0a29e0();
  if ((int)uVar9 == 0) {
    func_0x00010bf67e20(uVar22);
    func_0x00010c2b30e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b03a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abee0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abfc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abec0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bcd40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bcd60(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf67e60(uVar22);
    func_0x00010bf67e40(uVar22);
    func_0x00010bf67e20(uVar22);
    puVar3 = PTR_PTR_1126ca120;
    func_0x00010c06dd20(PTR_PTR_1126ca120);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar8);
    _objc_release(puVar3);
    lVar21 = param_7;
    func_0x00010c27dd80();
    if ((lVar21 == 10) ||
       (((lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 9 && (*(long *)(param_2 + 0x70) != 1))
        || (lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 0xc)))) {
      puVar3 = PTR_PTR_1126c9cc0;
      func_0x00010bfa03a0(PTR_PTR_1126c9cc0);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010c0e00e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar8);
      _objc_release(puVar3);
    }
    func_0x00010c2b30e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b03a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abee0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abfc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abec0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca310;
    func_0x00010c09c980(PTR_PTR_1126ca310);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2bcd40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ca310;
    func_0x00010c09c9a0(PTR_PTR_1126ca310);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2bcd60(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar3);
    func_0x00010bf67e00(uVar22);
  }
  func_0x00010c2abea0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar21 = param_2 + 0x1b8;
  _objc_loadWeakRetained(lVar21);
  uVar9 = param_4;
  FUN_106441e74(param_4,lVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  func_0x00010c081da0(*(undefined8 *)(param_2 + 0xe0));
  func_0x00010c2b09c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_106441ee8(param_4,*(undefined8 *)(param_2 + 8));
  func_0x00010c2a7d40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2b21e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar12 = uVar20;
  func_0x00010c09c880(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ff00();
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x00010c2b3100(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar12 = uVar20;
  func_0x00010c09c880(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ff00();
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x00010c2aa960(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa940(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar12 = uVar20;
  func_0x00010c09c880(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ff00();
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x00010c2aa9c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar12 = uVar20;
  func_0x00010c09c880(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x00010c2aa8e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar21 = param_7;
  func_0x00010c27dd80();
  if (((((lVar21 == 4) || (lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 5)) ||
       ((lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 10 ||
        ((lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 0xc ||
         (lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 9)))))) ||
      (lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 0x11)) ||
     (lVar21 = param_7, func_0x00010c27dd80(), lVar21 == 0x12)) {
LAB_10639c4b8:
    func_0x00010c2b3120(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126c9cc0;
    func_0x00010bf7c720(PTR_PTR_1126c9cc0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    if ((uVar5 & 1) != 0) {
      lVar21 = param_7;
      func_0x00010c27dd80();
      if (lVar21 == 2) {
        _objc_release(uVar4);
        _objc_release(puVar3);
      }
      else {
        lVar21 = param_7;
        func_0x00010c27dd80();
        _objc_release(uVar4);
        _objc_release(puVar3);
        if (lVar21 != 1) goto LAB_10639c4cc;
      }
      goto LAB_10639c4b8;
    }
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
LAB_10639c4cc:
  func_0x00010c24f200(param_7);
  func_0x00010c2baca0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24f200(param_7);
  func_0x00010c2bace0(uVar25,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24f260(param_7);
  func_0x00010c2bacc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24f280(param_7);
  func_0x00010c2bad00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb1e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = param_2;
  func_0x00010be6d9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d6c60();
  FUN_10639b110(uVar25,uVar5 == 1,*(undefined1 *)(param_2 + 0xb2));
  func_0x00010c2ad480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar21 = param_7;
  func_0x00010c27dd80();
  lVar10 = param_5;
  if (lVar21 == 0x11) {
    uVar25 = *(undefined8 *)(param_2 + 0x1a0);
    func_0x00010be36bc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234f20(uVar25);
LAB_10639c60c:
    _objc_release(lVar10);
  }
  else {
    lVar21 = param_7;
    func_0x00010c27dd80();
    if (lVar21 == 0x12) {
      uVar25 = *(undefined8 *)(param_2 + 0x1a0);
      func_0x00010be36bc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c234f00(uVar25);
      goto LAB_10639c60c;
    }
    uVar25 = 0;
  }
  lVar21 = param_7;
  func_0x00010c27dd80(param_7);
  uVar4 = param_2;
  func_0x00010be6d9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d6c60();
  func_0x00010639b1b8(lVar21,uVar5 == 1,1,uVar25);
  func_0x00010c2ad6c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c27dd80(param_7);
  func_0x00010be75c20(param_2);
  uVar4 = param_2;
  func_0x00010becd700();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 != 0) {
    func_0x00010c2b2f20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c241d20();
    if ((uVar5 & 1) == 0) {
      func_0x00010c241d40(uVar4);
    }
  }
  func_0x00010c2ad400(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = *(undefined **)(param_2 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf1f480();
  if ((int)puVar3 != 0) {
    lVar21 = *(long *)(param_2 + 0x118);
    _objc_release(puVar11);
    if (lVar21 == 0) goto LAB_10639c84c;
    puVar11 = PTR_PTR_1126ca318;
    _objc_alloc();
    uVar25 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb66c0();
    uVar12 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb66a0();
    uVar13 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb65e0();
    uVar14 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb65a0();
    uVar15 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6660();
    uVar16 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6620();
    func_0x00010c013dc0(puVar11);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar25);
    func_0x00010c2a7b20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar11);
LAB_10639c84c:
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10639cbf0;
  puStack_a0 = &UNK_11091fb78;
  _objc_retain(uVar9);
  ppuVar17 = &puStack_b8;
  uStack_98 = uVar9;
  uStack_90 = param_2;
  FUN_10639cbf0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar17 != (undefined **)0x0) {
    func_0x00010c2ac360(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(double *)(param_2 + 0x158) != 0.0) {
    func_0x00010c2a7dc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar10 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2 + 0x1b8;
  _objc_loadWeakRetained();
  lVar18 = lVar21;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  if (lVar18 == 0) {
    lVar21 = 0;
  }
  else {
    lVar23 = *(long *)(param_2 + 8);
    lVar21 = lVar18;
    func_0x00010be36bc0(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar21);
    if (lVar23 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = lVar23;
      func_0x00010c15ed20();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar19 = lVar23;
    func_0x0001084c6dd0(lVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a7780(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar23);
  }
  func_0x00010bf0d4e0(uVar22);
  func_0x00010c2a7740(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((lVar21 != 0) && (lVar23 = lVar21, func_0x00010c08fa60(), lVar23 != 0)) {
    uVar12 = *(undefined8 *)(param_2 + 0x138);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar12;
    func_0x00010bfc6d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar13 = *(undefined8 *)(param_2 + 0x138);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x00010bfca7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    func_0x00010c2b2200(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b9a80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar25);
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0f60(*(undefined8 *)(param_2 + 0xf8));
  _objc_release(lVar18);
  _objc_release(lVar21);
  _objc_release(lVar10);
  _objc_release(ppuVar17);
  _objc_release(uStack_98);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar22);
  _objc_release(lVar2);
  _objc_release(uVar20);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10639cbf0; end: 10639cc23;  */

void FUN_10639cbf0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c0e00e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x148));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639cc24; end: 10639d50b; -[SCAdAnalyticsSession _logTopSnapAdViewWithItem:page:params:dismissModelDurationInSec:lastInteraction:] */

void FUN_10639cc24(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  
  dVar19 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_7);
  func_0x00010beed820(uVar18);
  dVar19 = dVar19 - param_1;
  if (dVar19 <= 0.0) {
    dVar19 = 0.0;
  }
  lVar2 = param_2;
  func_0x00010be59d80(dVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  lVar3 = param_2 + 0x1b8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_4;
  FUN_106441e74(param_4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010becd700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    uVar18 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010c09c980(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c09c9a0(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c0c71e0(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c28be80(uVar18);
  }
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_2 + 0x148);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x140));
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x148));
    }
  }
  lVar5 = param_2 + 0x1b8;
  _objc_loadWeakRetained();
  uVar18 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(lVar5);
  if (lVar6 != 0) {
    uVar16 = *(undefined8 *)(param_2 + 8);
    lVar5 = lVar6;
    func_0x00010be36bc0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(uVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar7 = PTR_PTR_1126b8d98;
    func_0x00010c25b2a0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef53c0(*(undefined8 *)(param_2 + 8));
    uVar18 = uVar16;
    func_0x00010bef52e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be59260(param_2);
    _objc_release(uVar18);
    _objc_release(puVar7);
    _objc_release(uVar16);
  }
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if ((lVar5 != 0) && (*(long *)(param_2 + 0x58) != 0x27)) {
    func_0x00010becd780(param_2);
    func_0x00010bef4260();
    iVar1 = (int)*(undefined8 *)(param_2 + 200);
    func_0x00010bf4b900();
    uVar17 = *(undefined8 *)(param_2 + 8);
    lVar5 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar18 = uVar17;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar18;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    func_0x00010c257640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar8 = *(undefined8 *)(param_2 + 0xe8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    lVar5 = lVar2;
    func_0x00010c29e220(lVar2);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar18;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    uVar9 = uVar16;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0940(dVar19 / 1000.0,uVar8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar18);
    _objc_release(lVar5);
    _objc_release(uVar8);
    func_0x00010befa120(*(undefined8 *)(param_2 + 200));
    if ((lVar3 != 0) && (iVar1 == 0)) {
      puVar7 = PTR_PTR_1126b8d98;
      func_0x00010c063b40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar7;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar12);
      _objc_release(puVar11);
      uVar14 = *(undefined8 *)(param_2 + 0x120);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar14;
      func_0x00010bef2aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5700(lVar3);
      func_0x00010befc000(uVar18);
      _objc_release(uVar18);
      _objc_release(uVar14);
      puVar7 = PTR_PTR_1126b8d98;
      func_0x00010c063b20(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar7;
      func_0x00010c2ac460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar12);
      _objc_release(puVar11);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c241d20(lVar3);
      func_0x00010c0df6e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar15;
      func_0x00010c2ac460(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar11);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c241d40(lVar3);
      func_0x00010c0df6e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar12;
      func_0x00010c2ac460(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar7);
      uVar14 = *(undefined8 *)(param_2 + 0x120);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar14;
      func_0x00010bef2aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar18);
      _objc_release(uVar14);
      _objc_release(puVar15);
      _objc_release(puVar13);
    }
    puVar7 = PTR_PTR_1126b8d98;
    func_0x00010bef2920(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    func_0x00010c2ac460(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010c2ac460(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf9b740(lVar2);
    func_0x00010c0df780(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2ac460(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    uVar14 = *(undefined8 *)(param_2 + 0x120);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar14;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar18);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(uVar16);
    _objc_release(uVar17);
  }
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10639d50c; end: 10639d5db; -[SCAdAnalyticsSession _updateUnSkippableAdLongformTimeViewedWithItem:] */

void FUN_10639d50c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x1b8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_4;
  FUN_106441e74(param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
  param_2 = param_2 + 0x1b8;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf7eb00(param_1,uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10639d5dc; end: 10639d64f; -[SCAdAnalyticsSession _operaConfiguration] */

void FUN_10639d5dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x1c8;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x1c0;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10639d650; end: 10639d733; -[SCAdAnalyticsSession _resetGestureLoggingStatusIfNeededForTopSnap] */

void FUN_10639d650(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x1b8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(lVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x00010bef60a0();
    if (((lVar1 != 1) && (lVar1 = lVar3, func_0x00010bef60a0(), lVar1 != 0xd)) &&
       (lVar1 = lVar3, func_0x00010bef60a0(), lVar1 != 0xe)) {
      lVar1 = lVar3;
      func_0x00010c257640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) goto LAB_10639d718;
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
LAB_10639d718:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10639d734; end: 10639d8eb; -[SCAdAnalyticsSession _updateWebviewViewingStatusIfNeeded:pageId:] */

void FUN_10639d734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x58) != 0xb && *(long *)(param_1 + 0x58) != 0x1e) {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0ec0c0();
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010bef37e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c076b80();
      if ((int)lVar3 != 0) {
        lVar3 = lVar2;
        func_0x00010c09c880();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bef4a60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if ((lVar4 != 0) && (lVar3 = lVar4, func_0x00010bef60a0(), lVar3 == 0x16)) {
          uVar1 = *(undefined8 *)(param_1 + 8);
          uVar5 = *(undefined8 *)(param_1 + 0x80);
          func_0x00010bf5f0a0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef53c0(uVar1);
          _objc_release(uVar5);
          lVar3 = lVar4;
          func_0x00010bef52e0();
          _objc_retainAutoreleasedReturnValue();
          if ((lVar3 != 0) &&
             ((lVar6 = lVar3, func_0x00010bef60a0(), lVar6 == 10 &&
              (lVar6 = lVar4, func_0x0001084c6f7c(lVar4,lVar3), lVar6 == 3)))) {
            uVar5 = *(undefined8 *)(param_1 + 0xc0);
            lVar6 = lVar4;
            func_0x00010bfe5ec0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c286800(uVar5);
            _objc_release(lVar6);
          }
          _objc_release(lVar3);
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639d8ec; end: 10639da5b; -[SCAdAnalyticsSession _startLoggingMemoryPressure:appInstallAdsDisplayed:] */

void FUN_10639d8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf917e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = param_3;
    func_0x00010bf870a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c2b2440();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10639da5c; end: 10639da6f;  */

void FUN_10639da5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b60f8,PTR_s_pairWithFirst_second__11261a4e8,param_2,param_3);
  return;
}



/* Entry: 10639da70; end: 10639dab7;  */

void FUN_10639da70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10639dab8; end: 10639dc23; -[SCAdAnalyticsSession _logMemoryPressure:] */

void FUN_10639dab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c0eb440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c154b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1dd8,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfb0d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = param_1;
  func_0x00010bec57e0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24e18,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10639dc24; end: 10639dd2f; -[SCAdAnalyticsSession _stringFromMemoryPressureState:] */

void FUN_10639dc24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10639dd30;
  uStack_30 = 0x10639dd40;
  uStack_28 = 0;
  func_0x00010c0bf100(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10639dd30; end: 10639dd9b;  */

void FUN_10639dd30(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10639dd9c; end: 10639dde3; -[SCAdAnalyticsSession _sourcedTapGestureOverwriteEnabled] */

undefined8 FUN_10639dd9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec0c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10639dde4; end: 10639de37; -[SCAdAnalyticsSession _shouldWriteGestureRecordWithTapSource:] */

bool FUN_10639dde4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bebe780();
  if ((int)lVar1 != 0) {
    if ((param_3 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
        return false;
      }
    }
    else if (*(byte *)(param_1 + 0x170) == 0) {
      return true;
    }
  }
  return *(long *)(param_1 + 0x168) != 2;
}



/* Entry: 10639de38; end: 10639e21f; -[SCAdAnalyticsSession _shouldUpdateGestureParametersWithParameters:adRequestId:] */

undefined8 FUN_10639de38(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca240;
  _objc_retain(param_3);
  func_0x00010c264d40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c0ea660(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ca240;
  func_0x00010c268d60(PTR_PTR_1126ca240);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010c067fc0();
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c067fc0();
  _objc_release(uVar4);
  if (uVar5 == 10) {
    lVar10 = 2;
  }
  else if (uVar1 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b3e90;
    func_0x00010befdec0(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(uVar9);
    lVar10 = 0;
  }
  else {
    func_0x00010bf1f3c0();
    lVar10 = 1;
    if ((int)uVar3 != 0) {
      lVar10 = 2;
    }
  }
  if (((1 < uVar6) || (*(char *)(param_1 + 0x170) != '\x01')) ||
     (uVar3 = param_1, func_0x00010bebe780(), (uVar3 & 1) == 0)) {
    if (((lVar10 == 2) && (*(long *)(param_1 + 0x168) == 2)) &&
       ((1 < uVar6 &&
        (((*(byte *)(param_1 + 0x170) & 1) == 0 &&
         (uVar3 = param_1, func_0x00010bebe780(), (int)uVar3 != 0)))))) {
      uVar9 = 1;
      *(undefined1 *)(param_1 + 0x170) = 1;
      goto LAB_10639e1ec;
    }
    if ((lVar10 != *(long *)(param_1 + 0x168)) &&
       ((lVar10 != 1 || (*(long *)(param_1 + 0x168) != 2)))) {
      *(long *)(param_1 + 0x168) = lVar10;
      *(bool *)(param_1 + 0x170) = (lVar10 == 2 && uVar6 != 0) && (lVar10 != 2 || uVar6 != 1);
      uVar9 = 1;
      goto LAB_10639e1ec;
    }
  }
  uVar9 = 0;
LAB_10639e1ec:
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar9;
}



/* Entry: 10639e220; end: 10639e3ff; -[SCAdAnalyticsSession _flushCommercialWakeUpUnskippableTopSnapProgressForItem:] */

void FUN_10639e220(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar2 = param_2 + 0x1b8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_4;
    FUN_106441e74(param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0xe0);
      func_0x00010c081da0();
      if (iVar1 != 0) {
        lVar8 = *(long *)(param_2 + 8);
        lVar2 = param_4;
        func_0x00010be36bc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (lVar8 != 0) {
          func_0x00010bef53c0(*(undefined8 *)(param_2 + 8));
          lVar2 = lVar8;
          func_0x00010bef52e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 != 0) {
            lVar4 = lVar2;
            func_0x00010bef5620();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf66880();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c2a1780();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c2a1800();
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
            if ((lVar7 == 2) &&
               (func_0x00010beed820(*(undefined8 *)(param_2 + 0x18)), 0.0 < param_1)) {
              uVar9 = *(undefined8 *)(param_2 + 0xe0);
              lVar5 = param_4;
              func_0x00010be36bc0(param_4);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = param_2 + 0x1b8;
              _objc_loadWeakRetained(lVar4);
              func_0x00010bf7eb00(param_1,uVar9);
              _objc_release(lVar4);
              _objc_release(lVar5);
              func_0x00010c137fe0(*(undefined8 *)(param_2 + 0x18));
            }
          }
          _objc_release(lVar2);
        }
        _objc_release(lVar8);
      }
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10639e400; end: 10639e617; -[SCAdAnalyticsSession logStoryAdViewed:adSnap:loopCount:] */

void FUN_10639e400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b8cd8;
  _objc_retain(param_4);
  func_0x00010bef4240(param_3);
  func_0x00010c25d840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c242040(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar6 = uVar2;
  func_0x00010c274c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0c6c20();
  func_0x0001084c51cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b8d98;
  func_0x00010c2590c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110f24dd8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f273d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10639e618; end: 10639e62f; -[SCAdAnalyticsSession playlistItemController] */

void FUN_10639e618(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639e630; end: 10639e63b; -[SCAdAnalyticsSession setPlaylistItemController:] */

void FUN_10639e630(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1b8,param_3);
  return;
}



/* Entry: 10639e63c; end: 10639e653; -[SCAdAnalyticsSession operaControlling] */

void FUN_10639e63c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639e654; end: 10639e65f; -[SCAdAnalyticsSession setOperaControlling:] */

void FUN_10639e654(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c0,param_3);
  return;
}



/* Entry: 10639e660; end: 10639e677; -[SCAdAnalyticsSession operaConfiguration] */

void FUN_10639e660(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639e678; end: 10639e683; -[SCAdAnalyticsSession setOperaConfiguration:] */

void FUN_10639e678(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c8,param_3);
  return;
}



/* Entry: 10639e684; end: 10639e893; -[SCAdAnalyticsSession .cxx_destruct] */

void FUN_10639e684(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1c8);
  _objc_destroyWeak(param_1 + 0x1c0);
  _objc_destroyWeak(param_1 + 0x1b8);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
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
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10639e894; end: 10639e9b7; -[SCAdAppInstallSession initWithAdDataSource:adConfigProvider:adConfigProviderV2:attachmentPreloader:applicationPreferences:] */

undefined1 *
FUN_10639e894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f10e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


