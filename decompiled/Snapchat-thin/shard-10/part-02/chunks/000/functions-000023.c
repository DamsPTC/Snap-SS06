/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a09ec8; end: 107a09f9f; -[SCDropShareDataModel hash] */

undefined8 * FUN_107a09ec8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 != (undefined8 *)param_3) {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107a0a0a0;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) == 0) ||
         ((((*(char *)((long)puVar4 + 8) != param_3[8] ||
            (2.220446049250313e-16 <
             ABS(*(double *)((long)puVar4 + 0x30) - *(double *)(param_3 + 0x30)))) ||
           (2.220446049250313e-16 <
            ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38)))) ||
          ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 != *(long *)(param_3 + 0x10) &&
           (func_0x00010c071ae0(), (int)lVar6 == 0)))))) ||
        ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 != *(long *)(param_3 + 0x18) &&
         (func_0x00010c071ae0(), (int)lVar6 == 0)))) ||
       ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 != *(long *)(param_3 + 0x20) &&
        (func_0x00010c071ae0(), (int)lVar6 == 0)))) {
      puVar8 = (undefined1 *)0x0;
      goto LAB_107a0a0a0;
    }
    puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
    if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
      func_0x00010c071ae0();
      goto LAB_107a0a0a0;
    }
  }
  puVar8 = (undefined1 *)0x1;
LAB_107a0a0a0:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107a09fa0; end: 107a0a0bb; -[SCDropShareDataModel isEqual:] */

long FUN_107a09fa0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a0a0a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) == 0) ||
         ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (2.220446049250313e-16 < ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30)))
            ) || (2.220446049250313e-16 <
                  ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38)))) ||
          ((lVar3 = *(long *)(param_1 + 0x10), lVar3 != *(long *)(param_3 + 0x10) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)))))) ||
        ((lVar3 = *(long *)(param_1 + 0x18), lVar3 != *(long *)(param_3 + 0x18) &&
         (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
       ((lVar3 = *(long *)(param_1 + 0x20), lVar3 != *(long *)(param_3 + 0x20) &&
        (func_0x00010c071ae0(), (int)lVar3 == 0)))) {
      lVar3 = 0;
      goto LAB_107a0a0a0;
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != *(long *)(param_3 + 0x28)) {
      func_0x00010c071ae0();
      goto LAB_107a0a0a0;
    }
  }
  lVar3 = 1;
LAB_107a0a0a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a0a0bc; end: 107a0a0c3; -[SCDropShareDataModel dropIdentifier] */

undefined8 FUN_107a0a0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a0a0c4; end: 107a0a0cb; -[SCDropShareDataModel creatorIdentifier] */

undefined8 FUN_107a0a0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a0a0cc; end: 107a0a0d3; -[SCDropShareDataModel dropTitle] */

undefined8 FUN_107a0a0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a0a0d4; end: 107a0a0db; -[SCDropShareDataModel coordinate] */

undefined1  [16] FUN_107a0a0d4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 107a0a0dc; end: 107a0a0e3; -[SCDropShareDataModel shouldPersist] */

undefined1 FUN_107a0a0dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a0a0e4; end: 107a0a0eb; -[SCDropShareDataModel pinIcon] */

undefined8 FUN_107a0a0e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a0a0ec; end: 107a0a133; -[SCDropShareDataModel .cxx_destruct] */

void FUN_107a0a0ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a0a134; end: 107a0a217; -[SCStoriesSnapViewerProperties initWithClientId:properties:isOurStory:isPrivate:segmentViewerInfoSnapIds:] */

undefined1 *
FUN_107a0a134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f94b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a0a218; end: 107a0a21f; -[SCStoriesSnapViewerProperties clientId] */

undefined8 FUN_107a0a218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a0a220; end: 107a0a227; -[SCStoriesSnapViewerProperties properties] */

undefined8 FUN_107a0a220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a0a228; end: 107a0a22f; -[SCStoriesSnapViewerProperties isOurStory] */

undefined1 FUN_107a0a228(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a0a230; end: 107a0a237; -[SCStoriesSnapViewerProperties isPrivate] */

undefined1 FUN_107a0a230(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107a0a238; end: 107a0a23f; -[SCStoriesSnapViewerProperties segmentViewerInfoSnapIds] */

undefined8 FUN_107a0a238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a0a240; end: 107a0a27b; -[SCStoriesSnapViewerProperties .cxx_destruct] */

void FUN_107a0a240(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a0a27c; end: 107a0b0d3; -[SCStoriesManagementOperaPlugin initWithUserSession:storyId:storyType:variant:myStoriesDataCoordinator:storiesDataCoordinator:snapViewerDataCoordinator:storiesMediaCoordinator:playbackManagementDataProvider:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:friendProfileScopeExposer:myStorySettingsScopeExposer:myStorySettingsScopeServices:customStoryMenuScopeExposer:webBrowsingScopeExposer:operaPageProviderObservable:isSingleSnap:mergeMultiSnapOurStories:shouldShowViewersListOnOpen:navigationServices:spotlightNavigationDelegate:storiesCachedSummaryInfoProvider:snapchatterFetcher:grapheneMetricsEmitter:circumstanceEngine:snapchattersSynchronousDataFetcher:standardExternalContentShareScopeExposer:externalLinkSendingService:safetyReportScopeExposer:saveFriendStoryOperaPluginProvider:plusServices:storyBoostService:applicationLifecycleEvents:bloopsReportScopeExposer:temporaryFileWriter:isPendingSnapProSnap:isJoinedPlayback:ourStoriesAttributionManager:storiesConfigProvider:pageLauncher:optInDataProvider:profileProvider:avatarFactory:ourStorySnapPlaybackInfos:settingsScopeServices:customStoryMenuScopeServices:] */

undefined8 *
FUN_107a0a27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined4 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined4 param_41,undefined4 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain();
  _objc_retain(param_51);
  puStack_80 = PTR_PTR_1126f94b8;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_50);
    uVar4 = puVar2[0x1f];
    puVar2[0x1f] = param_50;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdfd0);
    uVar3 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[2];
    puVar2[2] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar3 = puVar2[3];
    puVar2[3] = param_11;
    _objc_release(uVar3);
    func_0x00010bef9980(puVar2[3]);
    _objc_retain(param_12);
    uVar3 = puVar2[4];
    puVar2[4] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[5];
    puVar2[5] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[6];
    puVar2[6] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[7];
    puVar2[7] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[8];
    puVar2[8] = param_20;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 9,param_51);
    *(undefined1 *)(puVar2 + 10) = (undefined1)param_23;
    *(undefined1 *)((long)puVar2 + 0x51) = param_23._1_1_;
    _objc_retain(param_30);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_30;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + 0x52) = param_23._2_1_;
    _objc_storeWeak(puVar2 + 0x13,param_26);
    _objc_retain(param_25);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_25;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 0x2a) = (undefined1)param_41;
    *(undefined1 *)((long)puVar2 + 0x151) = param_41._1_1_;
    _objc_retain(param_43);
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = param_43;
    _objc_release(uVar3);
    _objc_retain(param_47);
    uVar3 = puVar2[0x30];
    puVar2[0x30] = param_47;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b2d18;
    _objc_alloc();
    uVar3 = puVar2[1];
    func_0x00010bfe7580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c860();
    uVar4 = puVar2[0xe];
    puVar2[0xe] = puVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar2[0x17] = param_5;
    puVar2[0x31] = param_6;
    puVar5 = PTR_PTR_1126d5df8;
    _objc_alloc();
    func_0x00010c05e940();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar5;
    _objc_release(uVar3);
    uVar4 = puVar2[0x11];
    func_0x00010c18b5e0();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c12b8);
    uVar3 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[0x1c];
    puVar2[0x1c] = uVar3;
    _objc_release(uVar9);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cf130);
    uVar3 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[0x28];
    puVar2[0x28] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_retain(param_36);
    uVar3 = puVar2[0x29];
    puVar2[0x29] = param_36;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0x22];
    func_0x000108060950();
    *(undefined1 *)((long)puVar2 + 0x53) = uVar1;
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x2c];
    puVar2[0x2c] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = puVar5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_90,puVar2);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107a0b0ec;
    puStack_a0 = &UNK_1109f5018;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar3 = param_22;
    func_0x00010c25ff60(param_22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    uVar4 = puVar2[3];
    func_0x00010c241380();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x107a0b134;
    puStack_c8 = &UNK_1108531d0;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    uVar3 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[0x1e];
    puVar2[0x1e] = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar2[0x18];
    puVar2[0x18] = puVar5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_e8,puVar2);
    uVar4 = param_38;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_107a0b184;
    puStack_f8 = &UNK_110846510;
    _objc_copyWeak(auStack_f0,auStack_e8);
    uVar3 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b1a08;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4060400000000000,0x4060400000000000);
    uVar3 = puVar2[0x20];
    puVar2[0x20] = puVar5;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200(puVar2[0x20]);
    _objc_release(uVar3);
    uVar3 = param_48;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2284c0();
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar2[0x24];
    puVar2[0x24] = param_29;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x27];
    puVar2[0x27] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[0x25];
    puVar2[0x25] = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar6);
    uVar3 = param_44;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1270;
    func_0x00010c117140(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    _objc_release(puVar5);
    _objc_release(uVar3);
    if (((param_5 != 0) && (param_5 != 3)) && ((*(byte *)(puVar2 + 0x2a) & 1) == 0)) {
      puVar5 = PTR_PTR_1126d5e00;
      _objc_alloc();
      uVar3 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar2[0x28];
      func_0x00010bfe63a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dc20();
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar6 = PTR_PTR_1126d5e08;
      _objc_alloc();
      puVar7 = puVar6;
      func_0x000107d6fc14();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar2[2];
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar2[0x1c];
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puVar2[0x28];
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar2[1];
      func_0x00010c293260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0091c0();
      uVar10 = puVar2[0x10];
      puVar2[0x10] = puVar6;
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar7);
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_107a0b1b8;
      puStack_120 = &UNK_110842e18;
      _objc_retain(puVar2);
      puStack_118 = puVar2;
      func_0x0001000d76cc("APPSTORE",&puStack_138);
      uVar3 = puVar2[0x2d];
      puVar2[0x2d] = puVar5;
      _objc_retain(puVar5);
      _objc_release(uVar3);
      _objc_retain(param_21);
      uVar3 = puVar2[0x2f];
      puVar2[0x2f] = param_21;
      _objc_release(uVar3);
      _objc_release(puStack_118);
      _objc_release(puVar5);
    }
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107a0b0d4; end: 107a0b0eb;  */

void FUN_107a0b0d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_imageDownloader_1125d7728);
  return;
}



/* Entry: 107a0b0ec; end: 107a0b17b;  */

void FUN_107a0b0ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28cb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0b17c; end: 107a0b183;  */

void FUN_107a0b17c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c228170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_settingsLauncher_112667a80);
  return;
}



/* Entry: 107a0b184; end: 107a0b1b7;  */

void FUN_107a0b184(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcd900(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0b1b8; end: 107a0b1db;  */

void FUN_107a0b1b8(long param_1)

{
  func_0x00010c29bf00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a0b1dc; end: 107a0b1e7; +[SCStoriesManagementOperaPlugin announcerIdentifier] */

undefined ** FUN_107a0b1dc(void)

{
  return &PTR____CFConstantStringClassReference_110ea99b8;
}



/* Entry: 107a0b1e8; end: 107a0b1ef; -[SCStoriesManagementOperaPlugin addListener:] */

void FUN_107a0b1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a0b1f0; end: 107a0b1f7; -[SCStoriesManagementOperaPlugin removeListener:] */

void FUN_107a0b1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a0b1f8; end: 107a0b8d7; -[SCStoriesManagementOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107a0b1f8(long param_1,undefined8 param_2,undefined ***param_3,undefined ***param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = (undefined **)param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  pppuVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  pppuVar17 = param_3;
  if (((ulong)pppuVar4 & 1) == 0) {
    pppuVar17 = (undefined ***)0x0;
  }
  _objc_retain(pppuVar17);
  if (pppuVar17 == (undefined ***)0x0) {
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    (**(code **)(param_6 + 0x10))(param_6);
    goto LAB_107a0b760;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = param_3;
  func_0x00010853acb4(param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  pppuVar6 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = pppuVar6;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar6);
  pppuVar6 = pppuVar4;
  func_0x00010c0720c0();
  if (((((ulong)pppuVar6 & 1) != 0) ||
      (pppuVar6 = pppuVar4, func_0x00010c0720c0(), ((ulong)pppuVar6 & 1) != 0)) ||
     (pppuVar6 = pppuVar4, func_0x00010c0720c0(), (int)pppuVar6 != 0)) {
    func_0x00010c14b120(*(undefined8 *)(param_1 + 0x18));
    func_0x00010bf6ca80(*(undefined8 *)(param_1 + 0x18));
  }
  lVar19 = *(long *)(param_1 + 0x18);
  pppuVar6 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1059a0();
  _objc_release(pppuVar6);
  pppuVar6 = param_3;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  pppuVar8 = pppuVar6;
  func_0x00010bf5b1a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = pppuVar8;
  func_0x00010c08fa60();
  bVar1 = pppuVar9 != (undefined ***)0x0;
  _objc_release(pppuVar8);
  _objc_release(pppuVar6);
  if ((*(byte *)(param_1 + 0x150) & 1) == 0) {
    pppuVar6 = param_3;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar6;
    func_0x00010c08fa60();
    if (((pppuVar8 != (undefined ***)0x0) || (6 < lVar19 + 6U)) ||
       ((1L << (lVar19 + 6U & 0x3f) & 0x45U) == 0)) {
      bVar1 = false;
    }
    _objc_release(pppuVar6);
  }
  else {
    bVar1 = true;
  }
  pppuVar6 = param_3;
  func_0x00010853a0e0();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0d578;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0d598;
  pppuVar8 = param_3;
  puStack_90 = puVar10;
  func_0x00010c12fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = pppuVar8;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0d538;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar3;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f0d558;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar11;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = (undefined **)&ppuStack_b0;
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar12;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c0d3c80();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(pppuVar9);
  _objc_release(pppuVar8);
  _objc_release(puVar10);
  if (bVar1) {
    func_0x00010c1d0640(puVar14);
    ppuVar18 = &PTR____CFConstantStringClassReference_110f0bcf8;
    func_0x00010c1d0640(puVar14);
  }
  pppuVar8 = param_3;
  func_0x000108539a68();
  if ((int)pppuVar8 == 0) {
    lVar20 = *(long *)(param_1 + 0xb8);
    lVar19 = *(long *)(param_1 + 8);
    func_0x00010c2923e0(lVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(lVar19);
    if (lVar20 != 2) {
LAB_107a0b6a4:
      _objc_release(lVar19);
      _objc_release(param_3);
      _objc_release(lVar19);
      if (!bVar1 && ((ulong)pppuVar6 & 1) == 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x110);
        func_0x000108f485c8();
        if ((iVar2 == 0) || ((*(byte *)(param_1 + 0x151) & 1) == 0)) {
          ppuVar18 = (undefined **)param_3;
          func_0x00010bdc8720(param_1);
        }
      }
      goto LAB_107a0b6f0;
    }
    pppuVar8 = param_3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar8;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar9;
    func_0x00010c0720c0();
    _objc_release(pppuVar9);
    _objc_release(pppuVar8);
    if (((ulong)pppuVar15 & 1) != 0) goto LAB_107a0b6a4;
    uStack_d0 = 0;
    uStack_c0 = 0x2020000000;
    uStack_b8 = 0;
    pppuVar8 = param_3;
    puStack_c8 = &uStack_d0;
    func_0x00010bf0e700(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x107a10e24;
    puStack_e0 = &UNK_110992258;
    ppuVar18 = (undefined **)&ppuStack_f8;
    puStack_d8 = &uStack_d0;
    func_0x00010c0c1320();
    _objc_release(pppuVar8);
    if ((6 < (ulong)puStack_c8[3]) || ((1L << (puStack_c8[3] & 0x3f) & 0x58U) == 0)) {
      __Block_object_dispose(&uStack_d0,8);
      goto LAB_107a0b6a4;
    }
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(lVar19);
    _objc_release(param_3);
  }
  else {
    ppuVar18 = (undefined **)param_3;
    func_0x00010bedca60(param_1);
LAB_107a0b6f0:
    func_0x00010bee9f20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar14);
    lVar19 = param_1;
  }
  _objc_release(lVar19);
  puVar10 = puVar14;
  func_0x00010bf51e00();
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  (**(code **)(param_6 + 0x10))(param_6,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar14);
  _objc_release(pppuVar7);
  _objc_release(pppuVar4);
LAB_107a0b760:
  _objc_release(pppuVar17);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d0,8);
  __Unwind_Resume();
  _objc_retain(puVar3);
  _objc_retain(ppuVar18);
  ppuVar16 = param_3[0x22];
  func_0x00010bf1f440();
  if ((((ulong)ppuVar16 & 1) == 0) && (*(char *)((long)param_3 + 0x53) == '\x01')) {
    FUN_107a0bb80(param_3[0x17],ppuVar18);
  }
  puVar11 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar12 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar10);
  puVar10 = puVar11;
  if (((ulong)puVar12 & 1) == 0) {
    puVar10 = (undefined *)0x0;
  }
  _objc_retain(puVar10);
  _objc_release(puVar11);
  puVar11 = PTR____NSArray0__struct_11034ab48;
  if (puVar10 != (undefined *)0x0) {
    puVar11 = puVar10;
  }
  _objc_retain(puVar11);
  _objc_release(puVar10);
  _objc_opt_class(PTR_PTR_1126d5e10);
  puVar10 = puVar11;
  func_0x00010bf09f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar10);
  pppuVar17 = (undefined ***)ppuVar18;
  func_0x00010bf3cf60(ppuVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(pppuVar17);
  func_0x00010c1d0640(puVar3);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)((long)param_3 + 0x53) == '\x01') {
    FUN_107a0bb80(param_3[0x17],ppuVar18);
  }
  func_0x00010c0df760(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar10);
  func_0x00010c1d0640(puVar3);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pppuVar17 = (undefined ***)ppuVar18;
  func_0x00010bf4e860(ppuVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d294ec();
  func_0x00010c0df6e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar10);
  _objc_release(pppuVar17);
  _objc_release(ppuVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a0b8d8; end: 107a0bb7f; -[SCStoriesManagementOperaPlugin _addStoryManagementPropertiesToProperties:currentSnap:] */

void FUN_107a0b8d8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x110);
  func_0x00010bf1f440();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x53) == '\x01')) {
    FUN_107a0bb80(*(undefined8 *)(param_1 + 0xb8),param_4);
  }
  puVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126d5e10);
  puVar3 = puVar2;
  func_0x00010bf09f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  uVar5 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(uVar5);
  func_0x00010c1d0640(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(param_1 + 0x53) == '\x01') {
    FUN_107a0bb80(*(undefined8 *)(param_1 + 0xb8),param_4);
  }
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  func_0x00010c1d0640(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_4;
  func_0x00010bf4e860(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d294ec();
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a0bb80; end: 107a0bca3;  */

bool FUN_107a0bb80(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_1 == 2) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar2 = param_2;
    func_0x00010bf0e700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(uVar2);
    bVar1 = puStack_48[3] == 4;
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107a0bca4; end: 107a0be7b; -[SCStoriesManagementOperaPlugin _viewerInfoPropertiesFromStorySnap:] */

void FUN_107a0bca4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *unaff_x21;
  undefined8 uVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010853b1cc();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar2 != (undefined *)0x0) {
    unaff_x21 = *(undefined **)(param_1 + 0x138);
    puVar5 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x21 == (undefined *)0x0) {
      puVar3 = param_3;
      func_0x00010c25a280(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c1585a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = PTR_PTR_1126d5e18;
      _objc_alloc();
      puVar5 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x000108539a68(param_3);
      puVar7 = param_3;
      func_0x000108539930(param_3);
      puVar3 = PTR____NSDictionary0__struct_11034ab58;
      func_0x00010bffefe0(puVar4,param_2,puVar5,PTR____NSDictionary0__struct_11034ab58,puVar6,puVar7
                          ,puVar2);
      _objc_release(puVar5);
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar1;
      puStack_70 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&puStack_78,1
                         );
      _objc_retainAutoreleasedReturnValue();
      param_4 = *(undefined8 *)(param_1 + 0x130);
      puVar5 = puVar6;
      func_0x00010be88e00(param_1);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      puVar3 = unaff_x21;
      func_0x00010c118b40(unaff_x21);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(unaff_x21);
  }
  _objc_release(puVar1);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_88 = FUN_107a0be7c;
    lStack_b0 = param_1;
    puStack_a8 = unaff_x21;
    puStack_a0 = puVar1;
    puStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    _objc_retain(param_4);
    puVar3 = puVar5;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      uVar8 = *(undefined8 *)(puVar2 + 0x128);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_107a0bf40;
      puStack_d0 = &UNK_110848ba8;
      _objc_retain(puVar5);
      puStack_c8 = puVar5;
      puStack_c0 = puVar2;
      _objc_retain(param_4);
      uStack_b8 = param_4;
      func_0x00010c0f7fc0(uVar8,param_2,&puStack_e8);
      _objc_release(uStack_b8);
      _objc_release(puStack_c8);
    }
    _objc_release(param_4);
    _objc_release(puVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a0be7c; end: 107a0bf3f; -[SCStoriesManagementOperaPlugin _refreshViewerInfoPropertiesWithCurrentViewerProperties:snapViewersByViewerSnapId:] */

void FUN_107a0be7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x128);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107a0bf40;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    lStack_40 = param_1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a0bf40; end: 107a0c547;  */

void FUN_107a0bf40(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  long lStack_410;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar12);
  lStack_410 = lVar12;
  func_0x00010bf52a60();
  if (lStack_410 != 0) {
    lVar10 = *plStack_2e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2e0 != lVar10) {
          _objc_enumerationMutation(lVar12);
        }
        uVar18 = *(undefined8 *)(lStack_2e8 + lVar11 * 8);
        puVar4 = *(undefined **)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c079680();
        bVar1 = *(byte *)(*(long *)(param_1 + 0x28) + 0x51);
        puVar15 = puVar4;
        func_0x00010c1585a0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = *(undefined **)(param_1 + 0x30);
        _objc_retain(uVar18);
        _objc_retain(puVar15);
        _objc_retain(puVar20);
        if ((((uint)puVar5 & (uint)bVar1) == 1) &&
           (puVar5 = puVar15, func_0x00010bf529e0(), puVar5 != (undefined *)0x0)) {
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0xc2000000;
          uStack_a0 = 0x107a10e70;
          puStack_98 = &UNK_1109f5258;
          _objc_retain(puVar20);
          puStack_3f0 = puVar15;
          puStack_90 = puVar20;
          func_0x000100504554(puVar15,&puStack_b0);
          puVar5 = puStack_90;
        }
        else {
          puVar5 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar5 == (undefined *)0x0) {
            puStack_3f0 = PTR____NSArray0__struct_11034ab48;
          }
          else {
            puStack_3f0 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_b0 = puVar5;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        _objc_release(puVar5);
        _objc_release(puVar20);
        _objc_release(puVar15);
        _objc_release(uVar18);
        _objc_release(puVar15);
        func_0x00010c1d0640(puVar3);
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        lStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        plStack_320 = (long *)0x0;
        _objc_retain(puStack_3f0);
        puVar5 = puStack_3f0;
        func_0x00010bf52a60();
        if (puVar5 != (undefined *)0x0) {
          lVar13 = *plStack_320;
          do {
            puVar15 = (undefined *)0x0;
            do {
              if (*plStack_320 != lVar13) {
                _objc_enumerationMutation(puStack_3f0);
              }
              lVar19 = *(long *)(lStack_328 + (long)puVar15 * 8);
              lStack_368 = 0;
              uStack_370 = 0;
              uStack_358 = 0;
              plStack_360 = (long *)0x0;
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              lVar6 = lVar19;
              func_0x00010bfb9200();
              _objc_retainAutoreleasedReturnValue();
              lVar17 = lVar6;
              func_0x00010bf52a60();
              if (lVar17 != 0) {
                lVar16 = *plStack_360;
                do {
                  lVar14 = 0;
                  do {
                    if (*plStack_360 != lVar16) {
                      _objc_enumerationMutation(lVar6);
                    }
                    uVar18 = *(undefined8 *)(lStack_368 + lVar14 * 8);
                    func_0x00010c2923e0(uVar18);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2);
                    _objc_release(uVar18);
                    lVar14 = lVar14 + 1;
                  } while (lVar17 != lVar14);
                  lVar17 = lVar6;
                  func_0x00010bf52a60();
                } while (lVar17 != 0);
              }
              _objc_release(lVar6);
              uStack_388 = 0;
              uStack_390 = 0;
              uStack_378 = 0;
              uStack_380 = 0;
              lStack_3a8 = 0;
              uStack_3b0 = 0;
              uStack_398 = 0;
              plStack_3a0 = (long *)0x0;
              func_0x00010c0edf60();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar19;
              func_0x00010bf52a60();
              if (lVar6 != 0) {
                lVar17 = *plStack_3a0;
                do {
                  lVar16 = 0;
                  do {
                    if (*plStack_3a0 != lVar17) {
                      _objc_enumerationMutation(lVar19);
                    }
                    uVar18 = *(undefined8 *)(lStack_3a8 + lVar16 * 8);
                    func_0x00010c2923e0(uVar18);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2);
                    _objc_release(uVar18);
                    lVar16 = lVar16 + 1;
                  } while (lVar6 != lVar16);
                  lVar6 = lVar19;
                  func_0x00010bf52a60();
                } while (lVar6 != 0);
              }
              _objc_release(lVar19);
              puVar15 = puVar15 + 1;
            } while (puVar15 != puVar5);
            puVar5 = puStack_3f0;
            func_0x00010bf52a60();
          } while (puVar5 != (undefined *)0x0);
        }
        _objc_release(puStack_3f0);
        _objc_release(puStack_3f0);
        _objc_release(puVar4);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lStack_410);
      lStack_410 = lVar12;
      func_0x00010bf52a60();
    } while (lStack_410 != 0);
  }
  _objc_release(lVar12);
  _objc_initWeak(&puStack_b0,*(long *)(param_1 + 0x28));
  puStack_3e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3e0 = 0xc2000000;
  pcStack_3d8 = FUN_107a0c548;
  puStack_3d0 = &UNK_1109f5068;
  ppuVar9 = &puStack_b0;
  _objc_copyWeak(auStack_3b8,ppuVar9);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar18);
  uStack_3c8 = uVar18;
  _objc_retain(puVar3);
  ppuVar7 = &puStack_3e8;
  puStack_3c0 = puVar3;
  _objc_retainBlock();
  uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x128);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaa4c0(uVar18);
  _objc_release(uVar8);
  _objc_release(uVar18);
  _objc_release(ppuVar7);
  _objc_release(puStack_3c0);
  _objc_release(uStack_3c8);
  _objc_destroyWeak(auStack_3b8);
  _objc_destroyWeak(&puStack_b0);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_3b8);
  _objc_destroyWeak(&puStack_b0);
  __Unwind_Resume();
  _objc_retain(ppuVar9);
  puVar2 = puVar2 + 0x30;
  _objc_loadWeakRetained(puVar2);
  func_0x00010be88e20();
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a0c548; end: 107a0c59b;  */

void FUN_107a0c548(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88e20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0c59c; end: 107a0c97b; -[SCStoriesManagementOperaPlugin _refreshViewerInfoPropertiesWithCurrentViewerProperties:snapViewersListByViewerSnapId:snapchatterByUserId:] */

void FUN_107a0c59c(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lStack_178 = param_3;
  func_0x00010bf52a60();
  if (lStack_178 != 0) {
    lVar17 = *plStack_120;
    do {
      lVar19 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c079680(lVar2);
        uVar18 = *(undefined8 *)(param_1 + 0x120);
        lVar5 = *(long *)(param_1 + 0x148);
        func_0x00010bfa2420(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c25ae60();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c252440();
        uVar10 = uVar3;
        func_0x000107d24be0(uVar3,lVar4,param_5,uVar18,lVar9 == 3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(uVar3);
        puVar11 = PTR_PTR_1126d5e18;
        _objc_alloc(PTR_PTR_1126d5e18);
        lVar4 = lVar2;
        func_0x00010bf3cf60(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079680();
        func_0x00010c07b240();
        lVar6 = lVar2;
        func_0x00010c1585a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffefe0(puVar11);
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar11);
        _objc_release(lVar6);
        _objc_release(lVar4);
        lVar4 = lVar2;
        func_0x00010c07b240();
        if ((int)lVar4 != 0) {
          uVar12 = uVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          uVar13 = uVar12;
          _objc_opt_isKindOfClass(uVar12,puVar11);
          uVar3 = uVar12;
          if ((uVar13 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar12);
          uVar12 = uVar3;
          func_0x00010bf529e0();
          if (uVar12 != 0) {
            func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1109f50b8);
            _objc_release();
          }
          _objc_release(uVar3);
        }
        _objc_release(uVar10);
        _objc_release(lVar2);
        lVar19 = lVar19 + 1;
      } while (lStack_178 != lVar19);
      lStack_178 = param_3;
      func_0x00010bf52a60();
    } while (lStack_178 != 0);
  }
  _objc_release(param_3);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_107a0ca70;
  puStack_150 = &UNK_110848ba8;
  lStack_148 = param_1;
  puStack_140 = puVar1;
  lStack_138 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  ppuVar16 = &puStack_168;
  func_0x000100162d98("APPSTORE");
  _objc_release(lStack_138);
  _objc_release(puStack_140);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar14 = ppuVar16;
  _objc_retain(ppuVar16);
  FUN_107a30ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151b40(ppuVar16);
  func_0x00010c0b0c60(ppuVar14);
  _objc_release(ppuVar14);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar14 = ppuVar16;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151b40();
  _objc_release(ppuVar16);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a0c97c; end: 107a0ca6f;  */

void FUN_107a0c97c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  FUN_107a30ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151b40(param_2);
  func_0x00010c0b0c60(uVar1);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151b40();
  _objc_release(param_2);
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a0ca70; end: 107a0cba3;  */

void FUN_107a0ca70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x138),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_d8;
  puVar11 = (undefined1 *)0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar14 * 8);
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c288420(uVar12);
        _objc_release(uVar3);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar10 = auStack_d8;
      puVar11 = (undefined1 *)0x10;
      lVar2 = lVar1;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puVar4 = (undefined1 *)puVar9;
  FUN_107b27f14(puVar9,puVar10,puVar11);
  if (((ulong)puVar4 & 1) != 0) goto LAB_107a0cf4c;
  puVar4 = (undefined1 *)puVar9;
  func_0x00010c0720c0();
  if ((int)puVar4 != 0) {
    func_0x00010be70da0(lVar1);
    goto LAB_107a0cf4c;
  }
  puVar4 = (undefined1 *)puVar9;
  func_0x00010c0720c0();
  if ((int)puVar4 != 0) {
    func_0x00010be95dc0(lVar1);
    goto LAB_107a0cf4c;
  }
  puVar4 = (undefined1 *)puVar9;
  func_0x00010c0720c0();
  puVar6 = puVar11;
  if ((int)puVar4 == 0) {
    puVar4 = (undefined1 *)puVar9;
    func_0x00010c0720c0();
    if ((int)puVar4 == 0) {
      puVar4 = (undefined1 *)puVar9;
      func_0x00010c0720c0();
      puVar5 = PTR_PTR_1126c9a58;
      if ((int)puVar4 == 0) {
        puVar4 = puVar10;
        func_0x00010c118b40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07fc00();
        _objc_release(puVar4);
        if ((int)puVar5 == 0) goto LAB_107a0cf4c;
        puVar4 = puVar10;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_retain(puVar6);
        uVar3 = *(undefined8 *)(lVar1 + 0x58);
        *(undefined1 **)(lVar1 + 0x58) = puVar6;
        _objc_release(uVar3);
        puVar4 = puVar6;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(lVar1 + 0x60);
        *(undefined1 **)(lVar1 + 0x60) = puVar4;
        _objc_release(uVar3);
        _objc_retain(puVar10);
        uVar3 = *(undefined8 *)(lVar1 + 0xb0);
        *(undefined1 **)(lVar1 + 0xb0) = puVar10;
        _objc_release(uVar3);
        puVar4 = puVar6;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(lVar1 + 0x68);
        *(undefined1 **)(lVar1 + 0x68) = puVar7;
        _objc_release(uVar3);
        _objc_release(puVar4);
        puVar5 = PTR_PTR_1126d5e20;
        func_0x00010bf6b1c0(PTR_PTR_1126d5e20);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = (undefined1 *)puVar9;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        if ((int)puVar4 == 0) {
          puVar5 = PTR_PTR_1126d5e20;
          func_0x00010c149e20(PTR_PTR_1126d5e20);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined1 *)puVar9;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          if ((int)puVar4 == 0) {
            puVar5 = PTR_PTR_1126b2d30;
            func_0x00010c149e20(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = (undefined1 *)puVar9;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            if ((int)puVar4 == 0) {
              puVar5 = PTR_PTR_1126d5e20;
              func_0x00010c1045a0(PTR_PTR_1126d5e20);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = (undefined1 *)puVar9;
              func_0x00010c0720c0();
              _objc_release(puVar5);
              puVar4 = puVar6;
              if ((int)puVar7 == 0) {
                puVar7 = (undefined1 *)puVar9;
                func_0x00010c0720c0();
                if ((int)puVar7 == 0) {
                  puVar7 = (undefined1 *)puVar9;
                  func_0x00010c0720c0();
                  if ((int)puVar7 != 0) {
                    puVar4 = (undefined1 *)(lVar1 + 0x90);
                    _objc_loadWeakRetained(puVar4);
                    puVar7 = puVar4;
                    func_0x00010c29cc40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = PTR_PTR_1126c98a0;
                    func_0x00010c0689a0(PTR_PTR_1126c98a0);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf84d40(puVar7);
                    _objc_release(puVar5);
                    _objc_release(puVar7);
                    goto LAB_107a0cfd8;
                  }
                  puVar7 = (undefined1 *)puVar9;
                  func_0x00010c0720c0();
                  if ((int)puVar7 == 0) {
                    puVar5 = PTR_PTR_1126b2ea8;
                    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = (undefined1 *)puVar9;
                    func_0x00010c0720c0();
                    if ((int)puVar7 == 0) {
                      puVar8 = PTR_PTR_1126b2ea8;
                      func_0x00010c235940(PTR_PTR_1126b2ea8);
                      _objc_retainAutoreleasedReturnValue();
                      puVar7 = (undefined1 *)puVar9;
                      func_0x00010c0720c0();
                      _objc_release(puVar8);
                      _objc_release(puVar5);
                      if ((int)puVar7 == 0) goto LAB_107a0cf44;
                    }
                    else {
                      _objc_release(puVar5);
                    }
                    puVar7 = puVar6;
                    func_0x000108539a68();
                    if ((int)puVar7 == 0) {
                      lVar2 = lVar1 + 0x90;
                      _objc_loadWeakRetained(lVar2);
                      lVar13 = lVar2;
                      func_0x00010c27a680();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c138c60();
                      _objc_release(lVar13);
                      _objc_release(lVar2);
                      func_0x00010853a834();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_initWeak(auStack_188,lVar1);
                      puVar7 = puVar4;
                      func_0x00010c08fa60();
                      if (puVar7 == (undefined1 *)0x0) {
                        func_0x00010be79e00(lVar1);
                      }
                      else {
                        uVar12 = *(undefined8 *)(lVar1 + 0x140);
                        func_0x00010bfe63a0(uVar12);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = uVar12;
                        func_0x00010c269d40();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_retain(PTR___dispatch_main_q_11034be20);
                        _objc_copyWeak(auStack_190,auStack_188);
                        _objc_retain(puVar6);
                        func_0x00010bf62500(uVar3);
                        _objc_release(PTR___dispatch_main_q_11034be20);
                        _objc_release(uVar3);
                        _objc_release(uVar12);
                        _objc_release(puVar6);
                        _objc_destroyWeak(auStack_190);
                      }
                      _objc_destroyWeak(auStack_188);
                      goto LAB_107a0cfd8;
                    }
                    lVar2 = lVar1;
                    func_0x00010beb68a0();
                    if ((int)lVar2 != 0) {
                      lVar2 = lVar1 + 0x90;
                      _objc_loadWeakRetained(lVar2);
                      lVar13 = lVar2;
                      func_0x00010c27a680();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c138c60();
                      _objc_release(lVar13);
                      _objc_release(lVar2);
                      func_0x00010be79d80(lVar1);
                    }
                  }
                  else {
                    func_0x00010bebb1c0(lVar1);
                  }
                }
                else {
                  func_0x00010be31dc0(lVar1);
                }
              }
              else {
                func_0x00010bf3cf60(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be96fc0(lVar1);
LAB_107a0cfd8:
                _objc_release(puVar4);
              }
              goto LAB_107a0cf44;
            }
            lVar2 = lVar1 + 0x90;
            _objc_loadWeakRetained(lVar2);
            lVar13 = lVar2;
            func_0x00010c2bf380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bf1c0();
            _objc_release(lVar13);
            _objc_release(lVar2);
          }
          func_0x00010be99c00(lVar1);
        }
        else {
          func_0x00010bdfa7a0(lVar1);
        }
      }
      else {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010c08fa60();
        if (puVar4 != (undefined1 *)0x0) {
          func_0x00010be96fc0(lVar1);
        }
      }
    }
    else {
      func_0x00010c0e00e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be28300(lVar1);
    }
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c08fa60();
    if (puVar4 != (undefined1 *)0x0) {
      lVar2 = lVar1 + 200;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1ddd40();
      _objc_release(lVar2);
      _objc_retain(puVar6);
      uVar3 = *(undefined8 *)(lVar1 + 0x60);
      *(undefined1 **)(lVar1 + 0x60) = puVar6;
      _objc_release(uVar3);
      puVar4 = puVar6;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x68);
      *(undefined1 **)(lVar1 + 0x68) = puVar4;
      _objc_release(uVar3);
      func_0x00010be70da0(lVar1);
    }
  }
LAB_107a0cf44:
  _objc_release(puVar6);
LAB_107a0cf4c:
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 107a0cba4; end: 107a0d2bf; -[SCStoriesManagementOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_107a0cba4(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  FUN_107b27f14(param_3,param_4,param_5);
  if ((uVar1 & 1) != 0) goto LAB_107a0cf4c;
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    func_0x00010be70da0(param_1);
    goto LAB_107a0cf4c;
  }
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    func_0x00010be95dc0(param_1);
    goto LAB_107a0cf4c;
  }
  uVar1 = param_3;
  func_0x00010c0720c0();
  lVar3 = param_5;
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0();
      puVar4 = PTR_PTR_1126c9a58;
      if ((int)uVar1 == 0) {
        lVar3 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07fc00();
        _objc_release(lVar3);
        if ((int)puVar4 == 0) goto LAB_107a0cf4c;
        lVar5 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_retain(lVar3);
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        *(long *)(param_1 + 0x58) = lVar3;
        _objc_release(uVar2);
        lVar5 = lVar3;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x60);
        *(long *)(param_1 + 0x60) = lVar5;
        _objc_release(uVar2);
        _objc_retain(param_4);
        uVar2 = *(undefined8 *)(param_1 + 0xb0);
        *(long *)(param_1 + 0xb0) = param_4;
        _objc_release(uVar2);
        lVar5 = lVar3;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x68);
        *(long *)(param_1 + 0x68) = lVar6;
        _objc_release(uVar2);
        _objc_release(lVar5);
        puVar4 = PTR_PTR_1126d5e20;
        func_0x00010bf6b1c0(PTR_PTR_1126d5e20);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        if ((int)uVar1 == 0) {
          puVar4 = PTR_PTR_1126d5e20;
          func_0x00010c149e20(PTR_PTR_1126d5e20);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar4);
          if ((int)uVar1 == 0) {
            puVar4 = PTR_PTR_1126b2d30;
            func_0x00010c149e20(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            if ((int)uVar1 == 0) {
              puVar4 = PTR_PTR_1126d5e20;
              func_0x00010c1045a0(PTR_PTR_1126d5e20);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar4);
              lVar5 = lVar3;
              if ((int)uVar1 == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0();
                if ((int)uVar1 == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0();
                  if ((int)uVar1 != 0) {
                    lVar5 = param_1 + 0x90;
                    _objc_loadWeakRetained(lVar5);
                    lVar6 = lVar5;
                    func_0x00010c29cc40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = PTR_PTR_1126c98a0;
                    func_0x00010c0689a0(PTR_PTR_1126c98a0);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf84d40(lVar6);
                    _objc_release(puVar4);
                    _objc_release(lVar6);
                    goto LAB_107a0cfd8;
                  }
                  uVar1 = param_3;
                  func_0x00010c0720c0();
                  if ((int)uVar1 == 0) {
                    puVar4 = PTR_PTR_1126b2ea8;
                    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = param_3;
                    func_0x00010c0720c0();
                    if ((int)uVar1 == 0) {
                      puVar7 = PTR_PTR_1126b2ea8;
                      func_0x00010c235940(PTR_PTR_1126b2ea8);
                      _objc_retainAutoreleasedReturnValue();
                      uVar1 = param_3;
                      func_0x00010c0720c0();
                      _objc_release(puVar7);
                      _objc_release(puVar4);
                      if ((int)uVar1 == 0) goto LAB_107a0cf44;
                    }
                    else {
                      _objc_release(puVar4);
                    }
                    lVar6 = lVar3;
                    func_0x000108539a68();
                    if ((int)lVar6 == 0) {
                      lVar6 = param_1 + 0x90;
                      _objc_loadWeakRetained(lVar6);
                      lVar8 = lVar6;
                      func_0x00010c27a680();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c138c60();
                      _objc_release(lVar8);
                      _objc_release(lVar6);
                      func_0x00010853a834();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_initWeak(auStack_68,param_1);
                      lVar6 = lVar5;
                      func_0x00010c08fa60();
                      if (lVar6 == 0) {
                        func_0x00010be79e00(param_1);
                      }
                      else {
                        uVar9 = *(undefined8 *)(param_1 + 0x140);
                        func_0x00010bfe63a0(uVar9);
                        _objc_retainAutoreleasedReturnValue();
                        uVar2 = uVar9;
                        func_0x00010c269d40();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_retain(PTR___dispatch_main_q_11034be20);
                        _objc_copyWeak(auStack_70,auStack_68);
                        _objc_retain(lVar3);
                        func_0x00010bf62500(uVar2);
                        _objc_release(PTR___dispatch_main_q_11034be20);
                        _objc_release(uVar2);
                        _objc_release(uVar9);
                        _objc_release(lVar3);
                        _objc_destroyWeak(auStack_70);
                      }
                      _objc_destroyWeak(auStack_68);
                      goto LAB_107a0cfd8;
                    }
                    lVar5 = param_1;
                    func_0x00010beb68a0();
                    if ((int)lVar5 != 0) {
                      lVar5 = param_1 + 0x90;
                      _objc_loadWeakRetained(lVar5);
                      lVar6 = lVar5;
                      func_0x00010c27a680();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c138c60();
                      _objc_release(lVar6);
                      _objc_release(lVar5);
                      func_0x00010be79d80(param_1);
                    }
                  }
                  else {
                    func_0x00010bebb1c0(param_1);
                  }
                }
                else {
                  func_0x00010be31dc0(param_1);
                }
              }
              else {
                func_0x00010bf3cf60(lVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be96fc0(param_1);
LAB_107a0cfd8:
                _objc_release(lVar5);
              }
              goto LAB_107a0cf44;
            }
            lVar5 = param_1 + 0x90;
            _objc_loadWeakRetained(lVar5);
            lVar6 = lVar5;
            func_0x00010c2bf380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bf1c0();
            _objc_release(lVar6);
            _objc_release(lVar5);
          }
          func_0x00010be99c00(param_1);
        }
        else {
          func_0x00010bdfa7a0(param_1);
        }
      }
      else {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c08fa60();
        if (lVar5 != 0) {
          func_0x00010be96fc0(param_1);
        }
      }
    }
    else {
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be28300(param_1);
    }
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      lVar5 = param_1 + 200;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c1ddd40();
      _objc_release(lVar5);
      _objc_retain(lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      *(long *)(param_1 + 0x60) = lVar3;
      _objc_release(uVar2);
      lVar5 = lVar3;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      *(long *)(param_1 + 0x68) = lVar5;
      _objc_release(uVar2);
      func_0x00010be70da0(param_1);
    }
  }
LAB_107a0cf44:
  _objc_release(lVar3);
LAB_107a0cf4c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a0d2c0; end: 107a0d353;  */

void FUN_107a0d2c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf5a820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bf5bbc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79e00(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0d354; end: 107a0d59f; -[SCStoriesManagementOperaPlugin registeredEventsForOperaSession] */

void FUN_107a0d354(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5e20;
  func_0x00010bf6b1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5e20;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5e20;
  func_0x00010c1045a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2d30;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar9 = *(long *)(param_1 + 0xb8);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 3) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010befa160(puVar7);
  }
  else {
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c235940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010befa160(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar7 + 200,puVar4);
  return;
}



/* Entry: 107a0d5a0; end: 107a0d5ab; -[SCStoriesManagementOperaPlugin setPlaylistItemController:] */

void FUN_107a0d5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 107a0d5ac; end: 107a0d63b; -[SCStoriesManagementOperaPlugin setOperaControlling:] */

void FUN_107a0d5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x90,param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0f1880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x88));
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a0d63c; end: 107a0d63f; -[SCStoriesManagementOperaPlugin extraPropertiesProvider] */

void FUN_107a0d63c(void)

{
  return;
}



/* Entry: 107a0d640; end: 107a0d6c7; -[SCStoriesManagementOperaPlugin didUpdateSCStoriesPlaybackUpdate:] */

void FUN_107a0d640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107a0d6c8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 107a0d6c8; end: 107a0d75b;  */

void FUN_107a0d6c8(long param_1,undefined8 param_2)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a0d75c;
  puStack_20 = &UNK_110850cc8;
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a0d7a4;
  puStack_48 = &UNK_110850398;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107a0d888;
  puStack_70 = &UNK_110850398;
  uStack_40 = uStack_68;
  uStack_18 = uStack_68;
  func_0x00010c0bf480(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 107a0d75c; end: 107a0d7a3;  */

void FUN_107a0d75c(long param_1,undefined8 param_2)

{
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  if ((int)param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c288430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78),PTR_s_updatePageForID__11267fb30,
               *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
    return;
  }
  return;
}



/* Entry: 107a0d7a4; end: 107a0d96b;  */

void FUN_107a0d7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010853acb4(uVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar2 == 0) {
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (iVar1 != 0) {
      func_0x00010c288420(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a0d96c; end: 107a0da47; -[SCStoriesManagementOperaPlugin deleteSnap] */

void FUN_107a0d96c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010bf83dc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a0da48; end: 107a0da7b;  */

void FUN_107a0da48(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0da7c; end: 107a0db57; -[SCStoriesManagementOperaPlugin saveSnap] */

void FUN_107a0da7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010bf83dc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a0db58; end: 107a0db8b;  */

void FUN_107a0db58(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0db8c; end: 107a0dbe7; -[SCStoriesManagementOperaPlugin sendSnap] */

void FUN_107a0db8c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a0dbe8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf83dc0(*(undefined8 *)(param_1 + 0xa8),param_2,1,&puStack_38);
  return;
}



/* Entry: 107a0dbe8; end: 107a0dc6b;  */

void FUN_107a0dbe8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x90;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(lVar2,param_2,puVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0));
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a0dc6c; end: 107a0dc7b; -[SCStoriesManagementOperaPlugin dismissActionMenu] */

void FUN_107a0dc6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_dismissMenuViewWithAnimation_com_1125be918,1,0);
  return;
}



/* Entry: 107a0dc7c; end: 107a0dc8b; -[SCStoriesManagementOperaPlugin unifiedActionMenuPresenterDidDismiss:] */

void FUN_107a0dc7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a0dc8c; end: 107a0ddb7; -[SCStoriesManagementOperaPlugin _presentActionMenuForOurStory:] */

void FUN_107a0dc8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x000108539d58(param_3);
  puVar1 = PTR_PTR_1126d5e28;
  _objc_alloc(PTR_PTR_1126d5e28);
  func_0x00010c01f7c0();
  puVar2 = PTR_PTR_1126d5e30;
  _objc_alloc(PTR_PTR_1126d5e30);
  func_0x00010bff00e0();
  puVar3 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar4 = 0x12;
  func_0x00010bc9107c(0x12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar3,param_2,puVar1,puVar2,0,0,uVar4);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar3;
  _objc_release(uVar7);
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xa8),param_2,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d0c0(uVar4,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a0ddb8; end: 107a0de6b; -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogWithSnap:] */

void FUN_107a0ddb8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xe8) != 0) goto LAB_107a0de58;
  uVar1 = param_3;
  func_0x000108539e84();
  if (uVar1 < 2) {
    func_0x00010bebb1a0(param_1,param_2,param_3);
LAB_107a0de10:
    func_0x00010bebb160(param_1,param_2,param_3);
LAB_107a0de1c:
    func_0x00010bebb180(param_1,param_2,param_3);
  }
  else {
    if (uVar1 == 2) goto LAB_107a0de10;
    if (uVar1 == 3) goto LAB_107a0de1c;
  }
  uVar2 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58f00(param_1,param_2,0,uVar2,uVar1);
  _objc_release(uVar2);
LAB_107a0de58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a0de6c; end: 107a0e25f; -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogForSubmittedStatusWithSnap:] */

void FUN_107a0de6c(long param_1,undefined1 *param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined **unaff_x28;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xe8) == 0) {
    unaff_x20 = param_1;
    func_0x00010bdd1f00();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x20 == 0) {
      unaff_x21 = 0;
    }
    else {
      func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x100));
      unaff_x21 = *(undefined8 *)(param_1 + 0x100);
      _objc_retain(unaff_x21);
    }
    _objc_initWeak(auStack_98,param_1);
    unaff_x22 = PTR_PTR_1126aed70;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107a0e260;
    puStack_b0 = &UNK_110849410;
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_3);
    lStack_a8 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar2 = PTR_PTR_1126aed70;
    func_0x000108f586b4();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x107a0e378;
    puStack_e0 = &UNK_110849410;
    _objc_copyWeak(auStack_d0,auStack_98);
    _objc_retain(param_3);
    lStack_d8 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000108f586cc();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000108f586e4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = unaff_x22;
    puStack_88 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefe80();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c18b5e0(puVar3);
    _objc_retain(puVar3);
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar3;
    _objc_release(uVar7);
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x107a0e3b0;
    puStack_108 = &UNK_1108434b0;
    param_2 = auStack_98;
    _objc_copyWeak(auStack_100,param_2);
    func_0x00010c10eda0(lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_100);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(unaff_x22);
    _objc_release(lStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    unaff_x28 = &puStack_120;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x20));
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  lVar9 = param_3;
  __Unwind_Resume();
  pcStack_128 = FUN_107a0e260;
  puStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = unaff_x20;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar8 = lVar9 + 0x28;
  _objc_loadWeakRetained(lVar8);
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  func_0x00010c15f2e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58f00(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar8);
  _objc_copyWeak(auStack_158,lVar9 + 0x28);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_158);
  _objc_release(param_2);
  return;
}



/* Entry: 107a0e260; end: 107a0e34b;  */

void FUN_107a0e260(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58f00(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107a0e34c; end: 107a0e3e3;  */

void FUN_107a0e34c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8bdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0e3e4; end: 107a0e877; -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogForAcceptedStatusWithSnap:] */

void FUN_107a0e3e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined **unaff_x20;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xe8) == 0) {
    lVar2 = param_1;
    func_0x00010bdd1f00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_160 = 0;
    }
    else {
      func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x100));
      uStack_160 = *(undefined8 *)(param_1 + 0x100);
      _objc_retain();
    }
    puVar3 = auStack_a0;
    _objc_initWeak(puVar3,param_1);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000108f5872c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_107a0e878;
    puStack_b8 = &UNK_110849410;
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(param_3);
    lStack_b0 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126aed70;
    func_0x000108f586b4();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar1;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x107a0e8ac;
    puStack_e8 = &UNK_110849410;
    _objc_copyWeak(auStack_d8,auStack_a0);
    _objc_retain(param_3);
    lStack_e0 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar7 = PTR_PTR_1126aed70;
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_107a0e8e4;
    puStack_118 = &UNK_110849410;
    _objc_copyWeak(auStack_108,auStack_a0);
    _objc_retain(param_3);
    lStack_110 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    puVar8 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar9 = puVar8;
    func_0x000108f586fc();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x000108f58714();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar4;
    puStack_90 = puVar5;
    puStack_88 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefe80();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010c18b5e0(puVar8);
    _objc_retain(puVar8);
    uVar12 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar8;
    _objc_release(uVar12);
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    lVar13 = param_1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_107a0ea20;
    puStack_140 = &UNK_1108434b0;
    unaff_x20 = &puStack_158;
    _objc_copyWeak(auStack_138,auStack_a0);
    func_0x00010c10eda0(lVar14);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_release(puVar5);
    _objc_release(lStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(puVar4);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_160);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bebae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a0e878; end: 107a0e8e3;  */

void FUN_107a0e878(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0e8e4; end: 107a0e9a3;  */

void FUN_107a0e8e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107a0e9a4; end: 107a0ea1f;  */

void FUN_107a0e9a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58f00(lVar1,param_2,1,uVar2,1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8bdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0ea20; end: 107a0ea53;  */

void FUN_107a0ea20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0ea54; end: 107a0eee7; -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogForRejectedStatusWithSnap:] */

void FUN_107a0ea54(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xe8) == 0) {
    lVar1 = param_1;
    func_0x00010bdd1f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_168 = lVar1;
    if (lVar1 == 0) {
      uStack_160 = 0;
    }
    else {
      func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x100));
      uStack_160 = *(undefined8 *)(param_1 + 0x100);
      _objc_retain();
    }
    puVar2 = auStack_a0;
    _objc_initWeak(puVar2,param_1);
    unaff_x22 = PTR_PTR_1126aed70;
    func_0x000108f5884c();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_107a0eee8;
    puStack_b8 = &UNK_110849410;
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(param_3);
    lStack_b0 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126aed70;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = unaff_x21;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_107a0f040;
    puStack_e8 = &UNK_110849410;
    _objc_copyWeak(auStack_d8,auStack_a0);
    _objc_retain(param_3);
    lStack_e0 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar5 = PTR_PTR_1126aed70;
    func_0x000108f586b4();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = unaff_x21;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_107a0f17c;
    puStack_118 = &UNK_110849410;
    _objc_copyWeak(auStack_108,auStack_a0);
    _objc_retain(param_3);
    lStack_110 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar7 = puVar6;
    func_0x000108f58744();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000108f5875c();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = unaff_x22;
    puStack_90 = puVar4;
    puStack_88 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefe80();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c18b5e0(puVar6);
    _objc_retain(puVar6);
    uVar10 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar6;
    _objc_release(uVar10);
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = unaff_x21;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x107a0f1b4;
    puStack_140 = &UNK_1108434b0;
    unaff_x20 = &puStack_158;
    param_2 = auStack_a0;
    _objc_copyWeak(auStack_138,param_2);
    func_0x00010c10eda0(lVar11);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_release(puVar4);
    _objc_release(lStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(unaff_x22);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_160);
    _objc_release(lStack_168);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  lVar1 = param_3;
  __Unwind_Resume();
  pcStack_178 = FUN_107a0eee8;
  puStack_1a0 = unaff_x22;
  puStack_198 = unaff_x21;
  ppuStack_190 = unaff_x20;
  lStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_1a8,lVar1 + 0x28);
  uVar10 = *(undefined8 *)(lVar1 + 0x20);
  _objc_retain(uVar10);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(param_2);
  return;
}



/* Entry: 107a0eee8; end: 107a0efa7;  */

void FUN_107a0eee8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107a0efa8; end: 107a0f03f;  */

void FUN_107a0efa8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58f00(lVar1,param_2,6,uVar2,3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8bdc0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0f040; end: 107a0f0ff;  */

void FUN_107a0f040(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107a0f100; end: 107a0f17b;  */

void FUN_107a0f100(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58f00(lVar1,param_2,1,uVar2,3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8bdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0f17c; end: 107a0f1e7;  */

void FUN_107a0f17c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a0f1e8; end: 107a0f457; -[SCStoriesManagementOperaPlugin _handleTapWatchSpotlightNowWithCurrentSnap:] */

void FUN_107a0f1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b02a8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126b11d0;
  _objc_alloc(PTR_PTR_1126b11d0);
  uVar9 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04e320(puVar2,param_2,2,uVar9,0,0,0,0);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ebad78,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0xc0);
  lVar3 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb7478;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar9,param_2,&PTR____CFConstantStringClassReference_110eb73f8,lVar3,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x98;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    param_1 = *(long *)(param_1 + 0xa0);
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ce5a0;
    func_0x00010c2479c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x12;
    puStack_78 = puVar2;
    func_0x00010bc9107c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_70 = uVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_70,&puStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    func_0x00010c10c0e0(lVar3,param_2,0,0,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  else {
    param_1 = param_1 + 0x98;
    _objc_loadWeakRetained();
    uVar8 = 0x12;
    func_0x00010c0d6200();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d5e38;
  _objc_retain(uVar8);
  _objc_alloc(puVar2);
  uVar9 = uVar8;
  func_0x00010bf3cf60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf5b080(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf5b080(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar7;
  func_0x00010bf5b1a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffefa0(puVar2,param_2,uVar9,uVar6,uVar8,0,0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(puVar1 + 0x88),param_2,puVar1,puVar4,0);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a0f458; end: 107a0f59f; -[SCStoriesManagementOperaPlugin _deleteSnapWithSnap:] */

void FUN_107a0f458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d5e38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar5;
  func_0x00010bf5b1a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffefa0(puVar1,param_2,uVar2,uVar4,uVar6,0,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x88),param_2,param_1,puVar7,0);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a0f5a0; end: 107a0f6ab; -[SCStoriesManagementOperaPlugin _saveSnapWithSnap:] */

void FUN_107a0f5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d5e38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf5b440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffefa0(puVar1,param_2,uVar2,uVar4,0,0,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x88),param_2,param_1,puVar5,0);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a0f6ac; end: 107a0f777; -[SCStoriesManagementOperaPlugin _retryPostWithClientId:] */

void FUN_107a0f6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d5e38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffefa0(puVar1,param_2,param_3,uVar2,0,0,0);
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x88),param_2,param_1,puVar3,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a0f778; end: 107a0f897; -[SCStoriesManagementOperaPlugin _presentActionMenuWithSnap:customStoryOwnerId:] */

void FUN_107a0f778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d5e38;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf5b440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffefa0(puVar1,param_2,uVar2,uVar4,0,param_4,0);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x88),param_2,param_1,puVar5,0);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a0f898; end: 107a0fd0f; -[SCStoriesManagementOperaPlugin _handleDeletingSnapsWithClientIds:] */

void FUN_107a0f898(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be28310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = param_1 + 200;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (*(char *)(param_1 + 0x151) == '\x01' && uVar4 != 0) {
        uVar3 = param_1 + 200;
        _objc_loadWeakRetained();
        uVar5 = uVar3;
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar5;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar15;
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar15);
        _objc_release(uVar5);
        _objc_release(uVar3);
        if (uVar4 == uVar6) {
          uVar3 = param_1 + 200;
          _objc_loadWeakRetained();
          uVar5 = uVar3;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar4);
          _objc_retain(uVar5);
          uVar15 = uVar4;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar15 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar4;
            func_0x00010bfce400();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar15;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar15);
            uVar15 = uVar6;
            func_0x00010bfecde0();
            if (uVar15 == 0) {
              uVar15 = uVar6;
              func_0x00010bf529e0();
              if (uVar15 < 2) goto LAB_107a0fa9c;
LAB_107a0fa88:
              uVar15 = uVar6;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              if (uVar15 != 0x7fffffffffffffff) goto LAB_107a0fa88;
LAB_107a0fa9c:
              uVar7 = uVar5;
              func_0x00010bfcf800();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar4;
              func_0x00010bfce400(uVar4);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar7;
              func_0x00010bfecde0();
              _objc_release(uVar15);
              if (uVar13 == 0x7fffffffffffffff) {
                uVar15 = 0;
              }
              else {
                if (0 < (long)uVar13) {
                  uVar12 = uVar13 + 1;
                  do {
                    uVar8 = uVar7;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar8;
                    func_0x00010c084fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar15 = uVar9;
                    func_0x00010c089820();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar9);
                    _objc_release(uVar8);
                    if (uVar15 != 0) goto LAB_107a0fbd4;
                    uVar12 = uVar12 - 1;
                  } while (1 < uVar12);
                }
                do {
                  uVar13 = uVar13 + 1;
                  uVar15 = uVar7;
                  func_0x00010bf529e0();
                  if (uVar15 <= uVar13) {
                    uVar15 = 0;
                    break;
                  }
                  uVar12 = uVar7;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar12;
                  func_0x00010c084fc0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar15 = uVar8;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar8);
                  _objc_release(uVar12);
                } while (uVar15 == 0);
              }
LAB_107a0fbd4:
              _objc_release(uVar7);
            }
            _objc_release(uVar6);
          }
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar5);
          _objc_release(uVar3);
          uVar3 = uVar15;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c08fa60();
          _objc_release(uVar3);
          if (uVar5 != 0) {
            lVar10 = param_1 + 200;
            _objc_loadWeakRetained(lVar10);
            uVar3 = uVar15;
            func_0x00010be36bc0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ddd60(lVar10);
            _objc_release(uVar3);
            _objc_release(lVar10);
          }
          _objc_release(uVar15);
        }
      }
      lVar10 = param_1 + 200;
      _objc_loadWeakRetained(lVar10);
      func_0x00010c12db80();
      _objc_release(lVar10);
      _objc_release(uVar4);
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar2);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107a0fd10; end: 107a0fd13; -[SCStoriesManagementOperaPlugin storyManagementWillDeleteSnapsWithClientIds:] */

void FUN_107a0fd10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDeletingSnapsWithClientId_112567a60);
  return;
}



/* Entry: 107a0fd14; end: 107a0fd73; -[SCStoriesManagementOperaPlugin storyManagementActionHandlerViewControllerForPresentation] */

void FUN_107a0fd14(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f1880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107a0fd74; end: 107a0fd87; -[SCStoriesManagementOperaPlugin storyManagementActionHandlerViewerDidUpdateForCurrentStory] */

void FUN_107a0fd74(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107a0fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0xd0) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107a0fd88; end: 107a0fddb; -[SCStoriesManagementOperaPlugin dialogDidDismiss:] */

void FUN_107a0fd88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be8bdc0();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c15f2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x000108539e84(uVar2);
  func_0x00010be58f00(param_1,param_2,5,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a0fddc; end: 107a0fe4b; -[SCStoriesManagementOperaPlugin _logSpotlightSnapStatusWithActionType:snapId:snapStatus:] */

void FUN_107a0fddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(param_4);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b10a0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a0fe4c; end: 107a10013; -[SCStoriesManagementOperaPlugin _avatarViewModelWithBitmojiId:] */

void FUN_107a0fe4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain();
  func_0x000108e07010();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126b4858;
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1bb00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar9);
    puVar4 = PTR_PTR_1126b4860;
    func_0x00010bf1aee0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bd8e8;
    func_0x00010bfe9660(PTR_PTR_1126bd8e8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x000108fec9ec();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0xe8);
  *(undefined8 *)(param_3 + 0xe8) = 0;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010be95dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__resumeOpera_112583110);
  return;
}



/* Entry: 107a10014; end: 107a1003f; -[SCStoriesManagementOperaPlugin _removeDialogAndResumeOpera] */

void FUN_107a10014(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be95dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeOpera_112583110);
  return;
}



/* Entry: 107a10040; end: 107a100cf; -[SCStoriesManagementOperaPlugin _resumeOpera] */

void FUN_107a10040(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    return;
  }
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a100d0; end: 107a10193; -[SCStoriesManagementOperaPlugin _pauseOpera:] */

void FUN_107a100d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a10194; end: 107a103cb; -[SCStoriesManagementOperaPlugin _presentGuidelineWebviewWithSnap:snapStatus:] */

void FUN_107a10194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (*(long *)(param_1 + 0xe8) != 0) {
    _objc_retain(param_3);
    func_0x00010bdc3460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea9a58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar3 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107a103cc;
    puStack_70 = &UNK_110842308;
    puStack_68 = puVar1;
    _objc_retain(puVar1);
    func_0x00010c297260(puVar3,param_2,&puStack_88,0);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar4 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    puVar6 = puVar4;
    func_0x00010bf22ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x178),param_2,puVar6);
    uVar7 = param_3;
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010be58f00(param_1,param_2,2,uVar7,param_4);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puStack_68);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 107a103cc; end: 107a103d7;  */

void FUN_107a103cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107a103d8; end: 107a10593; -[SCStoriesManagementOperaPlugin _showSettingsWithSnap:] */

void FUN_107a103d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  if (*(long *)(param_1 + 0xe8) != 0) {
    _objc_retain(param_3);
    _objc_alloc_init();
    func_0x00010c1cb760();
    func_0x00010c1c8b80(puVar2,param_2,5);
    puVar3 = PTR_PTR_1126aeaf8;
    _objc_alloc();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107a10594;
    puStack_60 = &UNK_110845c10;
    _objc_retain(puVar2);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107a105a4;
    puStack_88 = &UNK_110841f50;
    puStack_80 = puVar2;
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    func_0x00010c0311a0(puVar3,param_2,&puStack_78,&puStack_a0);
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar3;
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010bf22f40(uVar4,param_2,param_1,0,*(undefined8 *)(param_1 + 0x108));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010bfe63a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar5);
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0xe8),param_2,puVar2,1,0);
    uVar5 = param_3;
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010be58f00(param_1,param_2,3,uVar5,2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 107a10594; end: 107a105a3;  */

void FUN_107a10594(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,param_2,1)
  ;
  return;
}



/* Entry: 107a105a4; end: 107a105c7;  */

void FUN_107a105a4(long param_1,undefined8 param_2)

{
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a105c8; end: 107a1064b; -[SCStoriesManagementOperaPlugin settingsScopeWantsDismiss] */

void FUN_107a105c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0xe8));
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x108),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 107a1064c; end: 107a106d3; -[SCStoriesManagementOperaPlugin settingsScopeDidDismiss] */

void FUN_107a1064c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0xe8),param_2,1,0);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107a106d4; end: 107a10723; -[SCStoriesManagementOperaPlugin _applicationWillEnterBackground] */

void FUN_107a106d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c15f2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x000108539e84(uVar2);
  func_0x00010be58f00(param_1,param_2,4,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a10724; end: 107a10753; -[SCStoriesManagementOperaPlugin updateWithOperaPageProvider:] */

void FUN_107a10724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a10754; end: 107a10aab; -[SCStoriesManagementOperaPlugin _updatePagePropertiesForStoriesViewStatsWithPageProperties:currentSnap:baseOperaPage:] */

void FUN_107a10754(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar6 = puVar2;
  }
  _objc_retain(puVar6);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010beb68a0();
  puVar2 = puVar6;
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126d5e40;
    _objc_opt_class();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar6 = PTR_PTR_1126d5e48;
  _objc_opt_class();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0e2b8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0da98;
  puStack_90 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0dc78;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eaa418;
  puStack_88 = PTR____kCFBooleanFalse_11034ab60;
  puStack_80 = PTR____kCFBooleanTrue_11034ab68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_98 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2);
  _objc_release(puVar4);
  lVar3 = param_4;
  func_0x000108539d58();
  if ((int)lVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x110);
    func_0x0001005929c0();
    if (iVar1 != 0) {
      func_0x00010c1d0640(puVar2);
      lVar3 = param_4;
      func_0x000108539e84();
      if (lVar3 < 2) {
        if ((lVar3 == 0) || (lVar3 == 1)) {
          func_0x000108f5842c();
          _objc_retainAutoreleasedReturnValue();
          param_1 = lVar3;
        }
      }
      else if (lVar3 == 2) {
        func_0x000108f58444();
        _objc_retainAutoreleasedReturnValue();
        param_1 = lVar3;
      }
      else if (lVar3 == 3) {
        func_0x000108f5845c();
        _objc_retainAutoreleasedReturnValue();
        param_1 = lVar3;
      }
      func_0x00010c1d0640(puVar2);
      func_0x00010c12d3e0(param_3);
      _objc_release(param_1);
      goto LAB_107a10a28;
    }
  }
  func_0x00010c1d0640(puVar2);
LAB_107a10a28:
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010bef7f60(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_c8 = FUN_107a10aac;
    lStack_e0 = param_4;
    uStack_d8 = param_3;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_107a10b34;
    puStack_f8 = &UNK_110841f80;
    uStack_f0 = uVar7;
    puStack_e8 = puVar5;
    _objc_retain(puVar5);
    func_0x0001000d76cc("APPSTORE",&puStack_110);
    _objc_release(puStack_e8);
    _objc_release(puVar5);
    return;
  }
  return;
}



/* Entry: 107a10aac; end: 107a10b33; -[SCStoriesManagementOperaPlugin _updateSnapViewersByViewerSnapId:] */

void FUN_107a10aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107a10b34;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107a10b34; end: 107a10b93;  */

void FUN_107a10b34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x130);
  *(undefined8 *)(lVar3 + 0x130) = uVar2;
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x138);
  func_0x00010bf51e00(uVar2);
  func_0x00010be88e00(lVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a10b94; end: 107a10bb3; -[SCStoriesManagementOperaPlugin _shouldShowViewStatsLayerForOurStorySnap:] */

uint FUN_107a10b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108539be8(param_3,*(undefined8 *)(param_1 + 0x110));
  return (uint)param_3 ^ 1;
}



/* Entry: 107a10bb4; end: 107a10bfb; -[SCStoriesManagementOperaPlugin webBrowserDidDismiss:] */

void FUN_107a10bb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x178);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x178));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a10bfc; end: 107a10e1f; -[SCStoriesManagementOperaPlugin .cxx_destruct] */

void FUN_107a10bfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
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
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 107a10e20; end: 107a10e7b;  */

void FUN_107a10e20(void)

{
  return;
}


