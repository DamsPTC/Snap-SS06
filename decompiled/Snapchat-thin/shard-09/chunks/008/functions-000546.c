/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10722222c; end: 10722229b; -[SCOperaStoriesPageProviderPlaylistAdapter friendsPlayListCount] */

long FUN_10722222c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10722229c; end: 10722235f; -[SCOperaStoriesPageProviderPlaylistAdapter indexOfFriendStoriesInPlaylist:] */

long FUN_10722229c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1014c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfecde0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
  return lVar4;
}



/* Entry: 107222360; end: 107222397; -[SCOperaStoriesPageProviderPlaylistAdapter isLastFriendStoriesToDisplay:] */

bool FUN_107222360(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfecd00();
  func_0x00010bfba540(param_1);
  return lVar1 == param_1 + -1;
}



/* Entry: 107222398; end: 10722239f; -[SCOperaStoriesPageProviderPlaylistAdapter .cxx_destruct] */

void FUN_107222398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1072223a0; end: 1072223ab; +[SCSingleStoryOperaDataSource announcerIdentifier] */

undefined ** FUN_1072223a0(void)

{
  return &PTR____CFConstantStringClassReference_110ea3018;
}



/* Entry: 1072223ac; end: 107222ce7; -[SCSingleStoryOperaDataSource initWithStoriesPlaybackSequence:viewingType:initialClientId:storiesMediaCoordinator:storiesMediaFetcher:userSession:viewLocation:viewLocationPos:isJoinedPlayback:chromeAvatarProvider:type:customStoriesDataFetcher:snapchatterFetcher:snapchatterPublicInfoFetcher:snapchattersSynchronousDataFetcher:debugViewer:readReceiptCoordinator:impalaLegacyServices:lazyEventsController:circumstanceEngine:lazyDataFetcher:grapheneMetricsEmitter:musicContentRestrictionServices:snapchatterUserInfoProvider:storyAvailability:crashLogger:offPlatformLinkGenerationService:enableSingleSnapPlayer:enableSingleSnapPlayerForImages:enableOperaBuiltInMediaResolver:storiesConfigProvider:profilesProvider:spotlightDataFetcher:p2pOptions:pageType:snapchatterObservableRepository:subscriptionsInfoProvider:creatorInfoProvider:] */

undefined8 *
FUN_1072223ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined4 param_32,
             undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
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
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  puStack_80 = PTR_PTR_1126f8c98;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x3e];
    puVar1[0x3e] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar4);
    puVar1[5] = param_5;
    _objc_retain(param_6);
    uVar4 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[0x40];
    puVar1[0x40] = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d53a8;
    _objc_retain(param_34);
    _objc_alloc();
    uVar4 = param_34;
    func_0x00010c0b50e0(param_34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar5 = param_34;
    uVar6 = param_1;
    func_0x00010c269680(param_34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bf91020(param_34);
    _objc_release(param_34);
    func_0x00010c00ebc0(param_1,uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = puVar1[0x34];
    puVar1[0x34] = puVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[0x40];
    func_0x000107d2ceb8();
    puVar1[0x26] = uVar4;
    uVar4 = puVar1[0x40];
    func_0x000107d2c3fc(uVar4,param_10,puVar1[0x34]);
    puVar1[0x27] = uVar4;
    _objc_retain(param_7);
    uVar4 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar4);
    puVar1[6] = param_10;
    puVar1[7] = param_11;
    *(undefined1 *)(puVar1 + 8) = param_12;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x14];
    puVar1[0x14] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    uVar4 = param_16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar5);
    _objc_retain(param_17);
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = param_17;
    _objc_release(uVar4);
    _objc_retain(param_18);
    uVar4 = puVar1[0x1b];
    puVar1[0x1b] = param_18;
    _objc_release(uVar4);
    _objc_retain(param_19);
    uVar4 = puVar1[0x1c];
    puVar1[0x1c] = param_19;
    _objc_release(uVar4);
    _objc_retain(param_26);
    uVar4 = puVar1[0x22];
    puVar1[0x22] = param_26;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar4 = puVar1[0x16];
    puVar1[0x16] = param_15;
    _objc_release(uVar4);
    _objc_retain(param_20);
    uVar4 = puVar1[0x17];
    puVar1[0x17] = param_20;
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar4 = puVar1[0x18];
    puVar1[0x18] = param_21;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[0x19];
    puVar1[0x19] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_22);
    uVar4 = puVar1[0x1d];
    puVar1[0x1d] = param_22;
    _objc_release(uVar4);
    _objc_retain(param_27);
    uVar4 = puVar1[0x1e];
    puVar1[0x1e] = param_27;
    _objc_release(uVar4);
    _objc_retain(param_23);
    uVar4 = puVar1[0x1f];
    puVar1[0x1f] = param_23;
    _objc_release(uVar4);
    _objc_retain(param_24);
    uVar4 = puVar1[0x20];
    puVar1[0x20] = param_24;
    _objc_release(uVar4);
    _objc_retain(param_25);
    uVar4 = puVar1[0x21];
    puVar1[0x21] = param_25;
    _objc_release(uVar4);
    _objc_retain(param_28);
    uVar4 = puVar1[0x23];
    puVar1[0x23] = param_28;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x2e];
    puVar1[0x2e] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x2f];
    puVar1[0x2f] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x30];
    puVar1[0x30] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x31];
    puVar1[0x31] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_34);
    uVar4 = puVar1[0x25];
    puVar1[0x25] = param_34;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bde4980();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x2b];
    puVar1[0x2b] = puVar3;
    _objc_release(uVar4);
    puVar1[0x28] = param_29;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = puVar1[0x2a];
    puVar1[0x2a] = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x169) = (undefined1)param_32;
    *(undefined1 *)((long)puVar1 + 0x16a) = param_32._1_1_;
    *(undefined1 *)(puVar1 + 0x2d) = param_32._2_1_;
    _objc_retain(param_30);
    uVar4 = puVar1[0x2c];
    puVar1[0x2c] = param_30;
    _objc_release(uVar4);
    _objc_retain(param_31);
    uVar4 = puVar1[0x24];
    puVar1[0x24] = param_31;
    _objc_release(uVar4);
    _objc_retain(param_35);
    uVar4 = puVar1[0x32];
    puVar1[0x32] = param_35;
    _objc_release(uVar4);
    _objc_retain(param_36);
    uVar4 = puVar1[0x33];
    puVar1[0x33] = param_36;
    _objc_release(uVar4);
    _objc_retain(param_37);
    uVar4 = puVar1[0x35];
    puVar1[0x35] = param_37;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[0x36];
    puVar1[0x36] = puVar2;
    _objc_release(uVar4);
    *(bool *)(puVar1 + 0x37) = param_10 == 0x62 || param_10 == 0x65;
    puVar1[0x38] = param_38;
    _objc_retain(param_39);
    uVar4 = puVar1[0x39];
    puVar1[0x39] = param_39;
    _objc_release(uVar4);
    _objc_retain(param_40);
    uVar4 = puVar1[0x3a];
    puVar1[0x3a] = param_40;
    _objc_release(uVar4);
    _objc_retain(param_41);
    uVar4 = puVar1[0x3b];
    puVar1[0x3b] = param_41;
    _objc_release(uVar4);
  }
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_31);
  _objc_release(param_30);
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107222ce8; end: 107222cef; -[SCSingleStoryOperaDataSource updateViewLocation:andViewLocationPos:] */

void FUN_107222ce8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  return;
}



/* Entry: 107222cf0; end: 107222def; -[SCSingleStoryOperaDataSource disableAutoProgressingForSnap:isNext:isCurrent:] */

void FUN_107222cf0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x148) = 1;
  puVar1 = PTR_PTR_1126d5388;
  _objc_alloc();
  func_0x00010bffc380(0);
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  *(undefined **)(param_1 + 0x158) = puVar1;
  _objc_release(uVar3);
  if (param_5 == 0) {
    lVar2 = param_1;
    if (param_4 == 0) {
      func_0x00010be7fb60(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be63c20();
      _objc_retainAutoreleasedReturnValue();
    }
    if (lVar2 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x150),param_2,lVar2);
      func_0x00010bedd6c0(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x150),param_2,param_3);
    func_0x00010bedd6c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107222df0; end: 107222f23; -[SCSingleStoryOperaDataSource resetAutoProgression] */

void FUN_107222df0(long param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar9 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  lVar17 = param_1;
  func_0x00010bde4980(param_1,param_2,*(undefined8 *)(param_1 + 0x200),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x140),uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x158);
  *(long *)(param_1 + 0x158) = lVar17;
  _objc_release(uVar13);
  *(undefined1 *)(param_1 + 0x148) = 0;
  lVar5 = *(long *)(param_1 + 0x150);
  func_0x00010bf51e00();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain();
  puVar10 = auStack_c8;
  lVar17 = lVar5;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar15 = *plStack_100;
    do {
      lVar16 = 0;
      do {
        if (*plStack_100 != lVar15) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bedd6c0(param_1,param_2,*(undefined8 *)(lStack_108 + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar17 != lVar16);
      puVar10 = auStack_c8;
      lVar17 = lVar5;
      puVar9 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(uVar11);
  puVar6 = PTR_PTR_1126d5388;
  _objc_alloc(PTR_PTR_1126d5388);
  func_0x00010bffc380(0);
  puVar7 = puVar10;
  func_0x000108535678();
  if (((ulong)puVar7 & 1) == 0) {
LAB_1072230d8:
    _objc_retain(puVar6);
    puVar8 = puVar6;
  }
  else {
    puVar7 = (undefined1 *)puVar9;
    func_0x000108536b9c();
    if (((ulong)puVar7 & 1) == 0) {
      puVar7 = (undefined1 *)puVar9;
      func_0x000108538ba0();
      uVar12 = (uint)puVar7 ^ 1;
    }
    else {
      uVar12 = 0;
    }
    if (puVar10 == (undefined1 *)0x1e) {
      puVar7 = (undefined1 *)puVar9;
      func_0x0001085394d0();
      if ((int)puVar7 != 0) goto LAB_1072230d8;
      bVar14 = false;
      bVar4 = true;
      fVar1 = 0.0;
    }
    else {
      fVar1 = 0.0;
      if (puVar10 == (undefined1 *)0x2b) {
        bVar14 = false;
        bVar4 = true;
      }
      else {
        if ((((ulong)puVar10 & 0xfffffffffffffffb) == 0x62 & uVar12) != 0) goto LAB_1072230d8;
        bVar4 = puVar10 == (undefined1 *)0x7;
        if (puVar10 == (undefined1 *)0x2d) {
          lVar17 = *(long *)(lVar5 + 0x128);
          puVar8 = PTR_PTR_1126c11f8;
          func_0x00010c25faa0(PTR_PTR_1126c11f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067e20(lVar17,param_2,puVar8);
          _objc_release(puVar8);
          bVar14 = 0 < lVar17;
          lVar15 = *(long *)(lVar5 + 0x128);
          puVar8 = PTR_PTR_1126c11f8;
          func_0x00010c25fac0(PTR_PTR_1126c11f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f320(lVar15,param_2,puVar8);
          _objc_release(puVar8);
          bVar4 = false;
          fVar1 = (float)lVar17;
        }
        else {
          bVar14 = false;
        }
      }
    }
    lVar17 = *(long *)(lVar5 + 0x128);
    puVar8 = PTR_PTR_1126c11f8;
    func_0x00010bf71340(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067e20(lVar17,param_2,puVar8);
    _objc_release(puVar8);
    fVar3 = 3.0;
    if (((ulong)puVar10 & 0xfffffffffffffffb) != 0x62) {
      fVar3 = 0.0;
    }
    fVar2 = (float)lVar17;
    if (!bVar4) {
      fVar2 = fVar3;
    }
    if (!bVar14) {
      fVar1 = fVar2;
    }
    puVar8 = PTR_PTR_1126d5388;
    _objc_alloc(PTR_PTR_1126d5388);
    func_0x00010bffc380(fVar1);
  }
  _objc_release(puVar6);
  _objc_release(uVar11);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107222f24; end: 1072231b7; -[SCSingleStoryOperaDataSource _configurationWithStoriesPlaybackSequence:viewLocation:storyAvailability:circumstanceEngine:] */

void FUN_107222f24(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar5 = PTR_PTR_1126d5388;
  _objc_alloc(PTR_PTR_1126d5388);
  func_0x00010bffc380(0);
  uVar6 = param_4;
  func_0x000108535678();
  if ((uVar6 & 1) == 0) {
LAB_1072230d8:
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    uVar6 = param_3;
    func_0x000108536b9c();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_3;
      func_0x000108538ba0();
      uVar8 = (uint)uVar6 ^ 1;
    }
    else {
      uVar8 = 0;
    }
    if (param_4 == 0x1e) {
      uVar6 = param_3;
      func_0x0001085394d0();
      if ((int)uVar6 != 0) goto LAB_1072230d8;
      bVar9 = false;
      bVar4 = true;
      fVar1 = 0.0;
    }
    else {
      fVar1 = 0.0;
      if (param_4 == 0x2b) {
        bVar9 = false;
        bVar4 = true;
      }
      else {
        if (((param_4 & 0xfffffffffffffffb) == 0x62 & uVar8) != 0) goto LAB_1072230d8;
        bVar4 = param_4 == 7;
        if (param_4 == 0x2d) {
          lVar11 = *(long *)(param_1 + 0x128);
          puVar7 = PTR_PTR_1126c11f8;
          func_0x00010c25faa0(PTR_PTR_1126c11f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067e20(lVar11,param_2,puVar7);
          _objc_release(puVar7);
          bVar9 = 0 < lVar11;
          lVar10 = *(long *)(param_1 + 0x128);
          puVar7 = PTR_PTR_1126c11f8;
          func_0x00010c25fac0(PTR_PTR_1126c11f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f320(lVar10,param_2,puVar7);
          _objc_release(puVar7);
          bVar4 = false;
          fVar1 = (float)lVar11;
        }
        else {
          bVar9 = false;
        }
      }
    }
    lVar11 = *(long *)(param_1 + 0x128);
    puVar7 = PTR_PTR_1126c11f8;
    func_0x00010bf71340(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067e20(lVar11,param_2,puVar7);
    _objc_release(puVar7);
    fVar3 = 3.0;
    if ((param_4 & 0xfffffffffffffffb) != 0x62) {
      fVar3 = 0.0;
    }
    fVar2 = (float)lVar11;
    if (!bVar4) {
      fVar2 = fVar3;
    }
    if (!bVar9) {
      fVar1 = fVar2;
    }
    puVar7 = PTR_PTR_1126d5388;
    _objc_alloc(PTR_PTR_1126d5388);
    func_0x00010bffc380(fVar1);
  }
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1072231b8; end: 10722328b; -[SCSingleStoryOperaDataSource skipStorySnap:synchronously:] */

void FUN_1072231b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10722328c;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010be30540(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10722328c; end: 1072232bf;  */

void FUN_10722328c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072232c0; end: 10722348b; -[SCSingleStoryOperaDataSource _handleSkipStorySnap:] */

void FUN_1072232c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010853a244();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x200);
    func_0x000108538468(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10722348c;
  puStack_68 = &UNK_1108622b8;
  _objc_retain(param_3);
  uStack_60 = param_3;
  lStack_58 = param_1;
  func_0x000107cd2a60(uVar3,uVar4,uVar2,&puStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_88,param_1);
  param_1 = param_1 + 0x1f8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_3);
  func_0x00010c134d60(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10722348c; end: 1072235bf;  */

void FUN_10722348c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cd207c(0,lVar1,param_2,uVar4,0,0,1,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x110)
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  if (lVar1 != 0) {
    func_0x0001085381ac(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x200));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x200);
    func_0x000108535b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010853a834(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108539930(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c14af20(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1072235c0; end: 1072235f3;  */

void FUN_1072235c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072235f4; end: 1072236f3; -[SCSingleStoryOperaDataSource _updatePagePropertiesForStorySnap:withError:] */

void FUN_1072235f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1072236f4;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  func_0x00010c196f20(*(undefined8 *)(param_1 + 0x210));
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1072236f4; end: 107223727;  */

void FUN_1072236f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107223728; end: 10722385b; -[SCSingleStoryOperaDataSource _removeStorySnapFromStoriesViewingOrder:] */

void FUN_107223728(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107cb5994();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  lVar1 = param_1 + 0x218;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be75360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db80(lVar1);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10722385c; end: 1072238eb; -[SCSingleStoryOperaDataSource prefetchRequestFromPlaylistItem:prefetchSignals:importance:] */

void FUN_10722385c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c25b1e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be775c0(param_1,param_2,lVar1,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1072238ec; end: 107224307; -[SCSingleStoryOperaDataSource _prefetchRequestFromSnapPlaybackMetadata:prefetchSignals:importance:] */

void FUN_1072238ec(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  _objc_release(puVar16);
  if (puVar6 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    iVar3 = (int)*(undefined8 *)(param_1 + 0x128);
    func_0x00010c258980();
    puVar5 = puVar16;
    if (iVar3 != 0) {
      puVar6 = param_3;
      func_0x00010c26f2a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        puVar5 = puVar7;
      }
      _objc_retain(puVar5);
      _objc_release(puVar16);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    puVar6 = PTR_PTR_1126c98a8;
    _objc_alloc();
    puVar16 = puVar4;
    func_0x00010bf93e00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar16;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf93e00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar16);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x10722416c;
    puStack_88 = &UNK_110993890;
    _objc_retain(puVar4);
    puStack_80 = puVar4;
    puStack_78 = puVar6;
    uStack_68 = param_5;
    _objc_retain(puVar5);
    ppuVar10 = &puStack_a0;
    puStack_70 = puVar5;
    _objc_retainBlock();
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar16 = puVar4;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    _objc_release(puVar16);
    ppuVar17 = (undefined **)0x0;
    if (puVar9 != (undefined *)0x0) {
      puVar16 = PTR_PTR_1126bfef0;
      _objc_alloc(PTR_PTR_1126bfef0);
      puVar8 = puVar4;
      func_0x00010bf1eea0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      FUN_107224308();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar4;
      func_0x00010c25b720();
      uVar1 = 0x1d;
      if (puVar12 != (undefined *)0x3) {
        uVar1 = 0x10;
      }
      uVar2 = 4;
      if (puVar12 != (undefined *)0x0) {
        uVar2 = uVar1;
      }
      ppuVar17 = ppuVar10;
      (*(code *)ppuVar10[2])
                (ppuVar10,&PTR____CFConstantStringClassReference_110de71b8,uVar2,param_4,
                 *(undefined8 *)(param_1 + 0x30),1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029760(puVar16);
      _objc_release(ppuVar17);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010befa120(puVar7);
      _objc_release(puVar16);
      ppuVar17 = &PTR____CFConstantStringClassReference_110de7678;
    }
    iVar3 = (int)*(undefined8 *)(param_1 + 0x128);
    func_0x00010c258900();
    if (iVar3 != 0) {
      puVar16 = puVar4;
      func_0x00010c27dd80();
      ppuVar17 = &PTR____CFConstantStringClassReference_110de7678;
      if (((puVar16 + 1 < (undefined *)0x1c) &&
          ((1L << ((ulong)(puVar16 + 1) & 0x3f) & 0xb4b5dbbU) != 0)) &&
         (ppuVar17 = &PTR____CFConstantStringClassReference_110de7678,
         puVar16 + 1 < (undefined *)0x1b)) {
        ppuVar17 = *(undefined ***)(&UNK_1109939e0 + (long)(puVar16 + 1) * 8);
      }
      _objc_retain(ppuVar17);
    }
    iVar3 = (int)*(undefined8 *)(param_1 + 0x128);
    func_0x00010c258920();
    if (iVar3 != 0) {
      func_0x00010c27dd80();
    }
    puVar8 = PTR_PTR_1126bfef0;
    _objc_alloc(PTR_PTR_1126bfef0);
    puVar16 = puVar4;
    func_0x00010bf1eea0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    FUN_107224308();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010c25b720();
    uVar1 = 0x1d;
    if (puVar12 != (undefined *)0x3) {
      uVar1 = 0x10;
    }
    uVar2 = 4;
    if (puVar12 != (undefined *)0x0) {
      uVar2 = uVar1;
    }
    ppuVar13 = ppuVar10;
    (*(code *)ppuVar10[2])(ppuVar10,ppuVar17,uVar2,param_4,*(undefined8 *)(param_1 + 0x30),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029760(puVar8);
    _objc_release(ppuVar13);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar16);
    func_0x00010befa120(puVar7);
    puVar16 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar16);
    puVar16 = puVar11;
    func_0x00010c08fa60();
    if (puVar16 != (undefined *)0x0) {
      puVar16 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((puVar16 != (undefined *)0x0) && (*(char *)(param_1 + 0x1b8) == '\x01')) {
        puVar16 = puVar4;
        func_0x00010bf1eea0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar16;
        func_0x00010c0802a0();
        _objc_release(puVar16);
        puVar16 = PTR_PTR_1126bfef0;
        _objc_alloc(PTR_PTR_1126bfef0);
        puVar12 = puVar11;
        FUN_107224308(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar4;
        func_0x00010c25b720();
        uVar1 = 0x1d;
        if (puVar14 != (undefined *)0x3) {
          uVar1 = 0x10;
        }
        uVar2 = 4;
        if (puVar14 != (undefined *)0x0) {
          uVar2 = uVar1;
        }
        ppuVar13 = ppuVar10;
        (*(code *)ppuVar10[2])
                  (ppuVar10,&PTR____CFConstantStringClassReference_110dad858,uVar2,param_4,
                   *(undefined8 *)(param_1 + 0x30),puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029760(puVar16);
        _objc_release(ppuVar13);
        _objc_release(puVar12);
        func_0x00010befa120(puVar7);
        _objc_release(puVar16);
      }
    }
    puVar16 = puVar4;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    func_0x00010bfb11c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010c08fa60();
    _objc_release(puVar9);
    _objc_release(puVar16);
    if (puVar12 != (undefined *)0x0) {
      puVar9 = PTR_PTR_1126bfef0;
      _objc_alloc(PTR_PTR_1126bfef0);
      puVar16 = PTR_PTR_1126b2c80;
      puVar12 = puVar4;
      func_0x00010bf1eea0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bfb11c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cda0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar4;
      func_0x00010c25b720();
      uVar1 = 0x17;
      if (puVar15 != (undefined *)0x0) {
        uVar1 = 0x18;
      }
      uVar2 = 5;
      if (puVar15 != (undefined *)0x3) {
        uVar2 = uVar1;
      }
      ppuVar13 = ppuVar10;
      (*(code *)ppuVar10[2])
                (ppuVar10,&PTR____CFConstantStringClassReference_110ea3038,uVar2,param_4,
                 *(undefined8 *)(param_1 + 0x30),1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029760(puVar9);
      _objc_release(ppuVar13);
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar12);
      func_0x00010befa120(puVar7);
      _objc_release(puVar9);
    }
    puVar16 = PTR_PTR_1126c98e8;
    _objc_alloc(PTR_PTR_1126c98e8);
    puVar9 = PTR_PTR_1126c98f0;
    _objc_alloc(PTR_PTR_1126c98f0);
    func_0x00010c25b720();
    puVar12 = puVar4;
    func_0x00010c0c5180(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029180(puVar9);
    func_0x00010c029c60(puVar16);
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(ppuVar17);
    _objc_release(puVar7);
    _objc_release(ppuVar10);
    _objc_release(puStack_70);
    _objc_release(puStack_80);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 107224308; end: 107224367;  */

void FUN_107224308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2c80;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cda0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107224368; end: 107224623; -[SCSingleStoryOperaDataSource prefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:] */

void FUN_107224368(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  func_0x000108535b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((int)uVar2 != 0) {
    if (param_4 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = param_4;
      func_0x00010c282760();
      uVar11 = uVar11 & 0xffffffff;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(ulong *)(param_1 + 0x200);
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bf529e0();
    if (uVar11 < uVar12) {
      uVar12 = 0;
      do {
        uVar5 = uVar4;
        func_0x00010c0dfd40(uVar4,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(ulong *)(param_1 + 0xc0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf602c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = uVar5;
        func_0x00010c15f2e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0e00e0(uVar7,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (uVar8 == 0) {
          uVar6 = uVar5;
          func_0x00010c29e300();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x00010c083540();
          _objc_release(uVar6);
        }
        else {
          uVar9 = uVar8;
          func_0x00010c29ea60();
        }
        if ((uVar9 & 1) == 0) {
          uVar2 = param_5;
          func_0x00010c0dfd40(param_5,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_6;
          func_0x00010c0dfd40(param_6,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x00010c282760();
          lVar10 = param_1;
          func_0x00010be775c0(param_1,param_2,uVar5,uVar2,uVar9 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar2);
          if (lVar10 != 0) {
            func_0x00010befa120(puVar3,param_2,lVar10);
            uVar12 = uVar12 + 1;
          }
          _objc_release(lVar10);
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar5);
        if (param_7 <= uVar12) break;
        uVar11 = uVar11 + 1;
        uVar5 = uVar4;
        func_0x00010bf529e0();
      } while (uVar11 < uVar5);
    }
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107224624; end: 107224d6f; -[SCSingleStoryOperaDataSource resolvePlaylistItemGroupWithMutator:] */

undefined ** FUN_107224624(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **unaff_x23;
  undefined **ppuVar14;
  undefined **unaff_x24;
  long unaff_x25;
  long lVar15;
  long unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar16;
  undefined *puStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *apuStack_3f0 [16];
  long lStack_370;
  undefined **ppuStack_360;
  long lStack_358;
  undefined **ppuStack_350;
  long lStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  long lStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *apuStack_1f0 [16];
  undefined *apuStack_170 [16];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x200);
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  lStack_2e0 = lVar3;
  func_0x00010beb3c00();
  ppuStack_2c0 = (undefined **)CONCAT44(ppuStack_2c0._4_4_,(int)lVar15);
  if ((*(long *)(param_1 + 0x28) == 4 || *(long *)(param_1 + 0x28) == 1) &&
     (*(long *)(param_1 + 0x78) == 0)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar4;
    _objc_release(uVar9);
    lVar15 = lStack_2e0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    _objc_retain(lStack_2e0);
    func_0x00010bf52a60(lVar15,param_2,&uStack_230,auStack_f0,0x10);
    if (lVar15 != 0) {
      lVar3 = *plStack_220;
      do {
        unaff_x25 = 0;
        do {
          if (*plStack_220 != lVar3) {
            _objc_enumerationMutation(lStack_2e0);
          }
          ppuVar12 = *(undefined ***)(lStack_228 + unaff_x25 * 8);
          unaff_x23 = ppuVar12;
          func_0x00010c29e300();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c083540();
          _objc_release(unaff_x23);
          if ((int)unaff_x24 != 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x78),param_2,ppuVar12);
          }
          unaff_x25 = unaff_x25 + 1;
        } while (lVar15 != unaff_x25);
        lVar15 = lStack_2e0;
        func_0x00010bf52a60(lStack_2e0,param_2,&uStack_230,auStack_f0,0x10);
      } while (lVar15 != 0);
    }
    _objc_release(lStack_2e0);
  }
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  ppuStack_2d0 = ppuVar12;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar4;
  _objc_release(uVar9);
  ppuVar12 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar12);
  if (ppuVar5 == (undefined **)0x0) {
    lVar15 = param_1;
    func_0x00010be17d80();
    _objc_retainAutoreleasedReturnValue();
    lStack_2c8 = lVar15;
  }
  else {
    lStack_2c8 = 0;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_300 = param_3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_2f0 = puVar4;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_2f8 = puVar13;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_2e8 = ppuVar5;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lStack_2e0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppuStack_2b8 = ppuVar16;
  _objc_retain(lStack_2e0);
  ppuVar5 = apuStack_170;
  func_0x00010bf52a60(lVar15,param_2,&uStack_270,ppuVar5,0x10);
  if (lVar15 == 0) {
    ppuStack_2d8 = (undefined **)0x0;
  }
  else {
    ppuStack_2d8 = (undefined **)0x0;
    unaff_x27 = *plStack_260;
    do {
      lVar3 = 0;
      do {
        if (*plStack_260 != unaff_x27) {
          _objc_enumerationMutation(lStack_2e0);
        }
        ppuVar12 = *(undefined ***)(lStack_268 + lVar3 * 8);
        if (((int)ppuStack_2c0 == 0) ||
           (ppuVar5 = ppuVar12, func_0x00010bfa0a00(), (long)ppuVar5 < 1)) {
          unaff_x25 = param_1;
          func_0x00010be75360(param_1,param_2,ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          iVar2 = (int)*(undefined8 *)(param_1 + 0x100);
          func_0x000108f4a29c();
          if (iVar2 == 0) {
            param_3 = (undefined **)0x0;
          }
          else {
            param_3 = ppuVar12;
            func_0x000107aec32c();
            _objc_retainAutoreleasedReturnValue();
          }
          unaff_x28 = (undefined **)PTR_PTR_1126b23d8;
          _objc_alloc();
          func_0x00010c0558c0();
          func_0x00010befa120(ppuStack_2b8,param_2,unaff_x28);
          lVar10 = *(long *)(param_1 + 0x28);
          ppuVar5 = ppuStack_2d0;
          if (lVar10 - 2U < 2) {
LAB_1072249cc:
            func_0x00010befa120(ppuVar5,param_2,unaff_x28);
          }
          else if (((lVar10 == 4) || (lVar10 == 1)) &&
                  (ppuVar5 = ppuVar12, func_0x00010bfa0a00(), (long)ppuVar5 < 1)) {
            ppuVar5 = ppuVar12;
            func_0x00010c29e300();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar5;
            func_0x00010c083540();
            _objc_release(ppuVar5);
            ppuVar5 = ppuStack_2e8;
            if ((int)ppuVar16 != 0) {
              uVar9 = *(undefined8 *)(param_1 + 0x78);
              func_0x00010bf4b900(uVar9,param_2,ppuVar12);
              ppuVar5 = &puStack_2f0;
              if ((int)uVar9 == 0) {
                ppuVar5 = &puStack_2f8;
              }
              ppuVar5 = (undefined **)*ppuVar5;
            }
            goto LAB_1072249cc;
          }
          ppuVar5 = unaff_x28;
          func_0x00010bdc1720();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar5;
          func_0x00010c08fa60();
          _objc_release(ppuVar5);
          if (ppuVar16 != (undefined **)0x0) {
            uVar9 = *(undefined8 *)(param_1 + 0x58);
            ppuVar5 = unaff_x28;
            func_0x00010bdc1720(unaff_x28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar9,param_2,ppuVar12,ppuVar5);
            _objc_release(ppuVar5);
          }
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lStack_2c8;
          func_0x00010bf3cf60(lStack_2c8);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuVar12;
          func_0x00010c0720c0(ppuVar12,param_2,lVar10);
          _objc_release(lVar10);
          _objc_release(ppuVar12);
          if ((int)unaff_x24 != 0) {
            _objc_retain(unaff_x28);
            _objc_release(ppuStack_2d8);
            ppuStack_2d8 = unaff_x28;
          }
          _objc_release(unaff_x28);
          _objc_release(param_3);
          _objc_release(unaff_x25);
        }
        lVar3 = lVar3 + 1;
      } while (lVar15 != lVar3);
      ppuVar5 = apuStack_170;
      lVar15 = lStack_2e0;
      func_0x00010bf52a60(lStack_2e0,param_2,&uStack_270,ppuVar5,0x10);
    } while (lVar15 != 0);
    unaff_x23 = (undefined **)0x0;
  }
  _objc_release(lStack_2e0);
  if ((*(long *)(param_1 + 0x28) == 4) || (ppuVar16 = ppuStack_2d0, *(long *)(param_1 + 0x28) == 1))
  {
    unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    func_0x00010befa160(unaff_x24,param_2,puStack_2f8);
    func_0x00010befa160(unaff_x24,param_2,ppuStack_2e8);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuStack_2b8;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    ppuStack_2c0 = ppuVar5;
    _objc_retain(ppuStack_2b8);
    ppuVar5 = apuStack_1f0;
    ppuVar16 = ppuVar12;
    func_0x00010bf52a60(ppuVar12,param_2,&uStack_2b0,ppuVar5,0x10);
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar12 = (undefined **)0x0;
      unaff_x27 = *plStack_2a0;
      do {
        unaff_x23 = (undefined **)0x0;
        do {
          if (*plStack_2a0 != unaff_x27) {
            _objc_enumerationMutation(ppuStack_2b8);
          }
          unaff_x28 = *(undefined ***)(lStack_2a8 + (long)unaff_x23 * 8);
          param_3 = *(undefined ***)(param_1 + 0x58);
          ppuVar5 = unaff_x28;
          func_0x00010bdc1720(unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(param_3,param_2,ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
          ppuVar5 = param_3;
          func_0x00010bfa0a00();
          if ((long)ppuVar5 < 1) {
            ppuVar5 = unaff_x24;
            func_0x00010bf529e0();
            if (ppuVar12 < ppuVar5) {
              ppuVar5 = unaff_x24;
              func_0x00010c0dfd40(unaff_x24,param_2,ppuVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuStack_2c0,param_2,ppuVar5);
              _objc_release(ppuVar5);
              ppuVar12 = (undefined **)((long)ppuVar12 + 1);
            }
          }
          else {
            func_0x00010befa120(ppuStack_2c0,param_2,unaff_x28);
          }
          _objc_release(param_3);
          unaff_x23 = (undefined **)((long)unaff_x23 + 1);
        } while (ppuVar16 != unaff_x23);
        ppuVar5 = apuStack_1f0;
        ppuVar16 = ppuStack_2b8;
        func_0x00010bf52a60(ppuStack_2b8,param_2,&uStack_2b0,ppuVar5,0x10);
        unaff_x25 = 0;
      } while (ppuVar16 != (undefined **)0x0);
    }
    _objc_release(ppuStack_2b8);
    _objc_release(ppuStack_2d0);
    _objc_release(unaff_x24);
    ppuVar16 = ppuStack_2c0;
  }
  ppuVar11 = ppuVar16;
  func_0x00010bf529e0();
  ppuVar14 = ppuStack_2d8;
  ppuVar7 = ppuStack_300;
  *(undefined ***)(param_1 + 0x130) = ppuVar11;
  ppuVar11 = ppuVar16;
  if (ppuStack_2d8 == (undefined **)0x0) {
    func_0x00010c13a9c0(ppuStack_300);
  }
  else {
    ppuVar12 = ppuStack_2d8;
    func_0x00010bdc1720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar12;
    func_0x00010c13a9e0(ppuVar7);
    _objc_release(ppuVar12);
  }
  _objc_release(ppuStack_2b8);
  _objc_release(ppuStack_2e8);
  _objc_release(puStack_2f8);
  _objc_release(puStack_2f0);
  _objc_release(ppuVar14);
  _objc_release(lStack_2c8);
  _objc_release(ppuVar16);
  _objc_release(lStack_2e0);
  ppuVar6 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_430;
  ppuStack_330 = ppuVar14;
  ppuStack_328 = ppuVar7;
  pcStack_308 = FUN_107224d70;
  lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar11;
  ppuVar7 = ppuVar5;
  ppuStack_360 = unaff_x28;
  lStack_358 = unaff_x27;
  ppuStack_350 = param_3;
  lStack_348 = unaff_x25;
  ppuStack_340 = unaff_x24;
  ppuStack_338 = unaff_x23;
  ppuStack_320 = ppuVar12;
  ppuStack_318 = ppuVar16;
  puStack_310 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar5);
  ppuVar12 = ppuVar6;
  func_0x00010bfa0bc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar12 == (undefined **)0x0) {
LAB_107224ee8:
    ppuVar8 = ppuVar14;
    ppuVar12 = (undefined **)0x0;
  }
  else {
    ppuVar16 = ppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppuVar12);
    if (ppuVar16 == (undefined **)0x0) goto LAB_107224ee8;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    puStack_430 = (undefined *)0x0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    _objc_retain(ppuVar11);
    ppuVar7 = apuStack_3f0;
    ppuVar12 = ppuVar11;
    func_0x00010bf52a60(ppuVar11,param_2,&puStack_430,ppuVar7,0x10);
    if (ppuVar12 != (undefined **)0x0) {
      lVar15 = *plStack_420;
      do {
        ppuVar16 = (undefined **)0x0;
        do {
          if (*plStack_420 != lVar15) {
            _objc_enumerationMutation(ppuVar11);
          }
          ppuVar14 = *(undefined ***)(lStack_428 + (long)ppuVar16 * 8);
          ppuVar7 = ppuVar14;
          func_0x00010bfa0a00();
          if (0 < (long)ppuVar7) {
            func_0x00010bf5b080();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar14;
            func_0x00010bf5b440();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar7 != (undefined **)0x0) {
              ppuVar1 = ppuVar7;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar7);
            _objc_release(ppuVar14);
            ppuVar7 = ppuVar1;
            func_0x00010c08fa60();
            if (ppuVar7 != (undefined **)0x0) {
              func_0x00010bfa0bc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar6;
              ppuVar8 = ppuVar1;
              ppuVar7 = ppuVar5;
              func_0x00010c234960();
              _objc_release(ppuVar6);
              _objc_release(ppuVar1);
              goto LAB_107224f24;
            }
            _objc_release(ppuVar1);
          }
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        } while (ppuVar12 != ppuVar16);
        ppuVar7 = apuStack_3f0;
        ppuVar12 = ppuVar11;
        ppuVar8 = &puStack_430;
        func_0x00010bf52a60(ppuVar11,param_2,&puStack_430,ppuVar7,0x10);
      } while (ppuVar12 != (undefined **)0x0);
    }
    ppuVar12 = (undefined **)0x0;
LAB_107224f24:
    _objc_release(ppuVar11);
  }
  _objc_release(ppuVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_370) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar7);
  ppuVar12 = ppuVar7;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar12);
  if (ppuVar5 != (undefined **)0x0) {
    puVar13 = ppuVar11[0xb];
    ppuVar12 = ppuVar7;
    func_0x00010bfce400(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar12;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar13,param_2,ppuVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
    _objc_release(ppuVar5);
    _objc_release(ppuVar12);
    puVar4 = puVar13;
    func_0x00010bfa0a00();
    _objc_release(puVar13);
    if (0 < (long)puVar4) {
      ppuVar11 = (undefined **)0x0;
      goto LAB_1072250b8;
    }
  }
  ppuVar12 = ppuVar7;
  func_0x00010bfce400(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb6960(ppuVar11,param_2,ppuVar8,ppuVar5);
  _objc_release(ppuVar5);
  _objc_release(ppuVar12);
LAB_1072250b8:
  _objc_release(ppuVar7);
  _objc_release(ppuVar8);
  return ppuVar11;
}



/* Entry: 107224d70; end: 107224f7b; -[SCSingleStoryOperaDataSource _shouldSkipFanPassPlaceholdersForSnaps:groupId:] */

undefined **
FUN_107224d70(undefined **param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar3 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar8 = param_1;
  func_0x00010bfa0bc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar8 == (undefined **)0x0) {
LAB_107224ee8:
    ppuVar3 = ppuVar12;
    ppuVar8 = (undefined **)0x0;
  }
  else {
    puVar2 = param_4;
    func_0x00010c08fa60();
    _objc_release(ppuVar8);
    if (puVar2 == (undefined1 *)0x0) goto LAB_107224ee8;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar7 = auStack_f0;
    ppuVar8 = param_3;
    func_0x00010bf52a60(param_3,param_2,&puStack_130,puVar7,0x10);
    if (ppuVar8 != (undefined **)0x0) {
      lVar11 = *plStack_120;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar10 = *(undefined ***)(lStack_128 + (long)ppuVar12 * 8);
          ppuVar3 = ppuVar10;
          func_0x00010bfa0a00();
          if (0 < (long)ppuVar3) {
            func_0x00010bf5b080();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar10;
            func_0x00010bf5b440();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar3 != (undefined **)0x0) {
              ppuVar1 = ppuVar3;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar3);
            _objc_release(ppuVar10);
            ppuVar3 = ppuVar1;
            func_0x00010c08fa60();
            if (ppuVar3 != (undefined **)0x0) {
              func_0x00010bfa0bc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = param_1;
              ppuVar3 = ppuVar1;
              puVar7 = param_4;
              func_0x00010c234960();
              _objc_release(param_1);
              _objc_release(ppuVar1);
              goto LAB_107224f24;
            }
            _objc_release(ppuVar1);
          }
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar8 != ppuVar12);
        puVar7 = auStack_f0;
        ppuVar8 = param_3;
        ppuVar3 = &puStack_130;
        func_0x00010bf52a60(param_3,param_2,&puStack_130,puVar7,0x10);
      } while (ppuVar8 != (undefined **)0x0);
    }
    ppuVar8 = (undefined **)0x0;
LAB_107224f24:
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  _objc_retain(puVar7);
  puVar2 = puVar7;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (puVar4 != (undefined1 *)0x0) {
    puVar9 = param_3[0xb];
    puVar2 = puVar7;
    func_0x00010bfce400(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar9,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar6 = puVar9;
    func_0x00010bfa0a00();
    _objc_release(puVar9);
    if (0 < (long)puVar6) {
      param_3 = (undefined **)0x0;
      goto LAB_1072250b8;
    }
  }
  puVar2 = puVar7;
  func_0x00010bfce400(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb6960(param_3,param_2,ppuVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
LAB_1072250b8:
  _objc_release(puVar7);
  _objc_release(ppuVar3);
  return param_3;
}



/* Entry: 107224f7c; end: 1072250e3; -[SCSingleStoryOperaDataSource _shouldFilterFanPassPlaceholdersForSnaps:mutator:] */

long FUN_107224f7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    lVar1 = param_4;
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010bfa0a00();
    _objc_release(lVar4);
    if (0 < lVar1) {
      param_1 = 0;
      goto LAB_1072250b8;
    }
  }
  lVar1 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb6960(param_1,param_2,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_1072250b8:
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1072250e4; end: 107225297; -[SCSingleStoryOperaDataSource _specificSnapForClientId:inSnaps:] */

void FUN_1072250e4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        uVar1 = param_4;
        func_0x00010c0dfd40(param_4,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        if ((uVar1 == 0) || (uVar3 = uVar1, func_0x00010bfa0a00(), uVar2 = uVar4, (long)uVar3 < 1))
        goto LAB_107225188;
        goto LAB_1072251e4;
      }
      uVar4 = uVar4 + 1;
      uVar1 = param_4;
      func_0x00010bf529e0();
    } while (uVar4 < uVar1);
  }
  uVar5 = 0;
  goto LAB_107225188;
  while( true ) {
    uVar5 = param_4;
    func_0x00010c0dfd40(param_4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfa0a00();
    _objc_release(uVar5);
    if ((long)uVar3 < 1) break;
LAB_1072251e4:
    uVar2 = uVar2 + 1;
    uVar5 = param_4;
    func_0x00010bf529e0();
    if (uVar5 <= uVar2) goto LAB_107225230;
  }
  goto LAB_107225268;
  while( true ) {
    uVar4 = param_4;
    func_0x00010c0dfd40(param_4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa0a00();
    _objc_release(uVar4);
    uVar4 = uVar2;
    if ((long)uVar5 < 1) break;
LAB_107225230:
    uVar2 = uVar4 - 1;
    if ((long)uVar4 < 1) {
      uVar5 = 0;
      goto LAB_107225288;
    }
  }
LAB_107225268:
  uVar5 = param_4;
  func_0x00010c0dfd40(param_4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_107225288:
  _objc_release(uVar1);
LAB_107225188:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107225298; end: 1072257eb; -[SCSingleStoryOperaDataSource _firstStorySnapToDisplayForOperaPlaylist] */

/* WARNING: Possible PIC construction at 0x000107225538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010722553c) */
/* WARNING: Removing unreachable block (ram,0x000107225590) */
/* WARNING: Removing unreachable block (ram,0x000107225564) */
/* WARNING: Removing unreachable block (ram,0x000107225570) */
/* WARNING: Removing unreachable block (ram,0x00010722558c) */

void FUN_107225298(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
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
  long lStack_68;
  
  puVar8 = &uStack_430;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x200);
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 4) {
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    _objc_retain(uVar1);
    puVar8 = &uStack_370;
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 == 0) {
      uVar9 = 0;
      uVar7 = 0;
    }
    else {
      uVar9 = 0;
      uVar7 = 0;
      lVar6 = *plStack_360;
      do {
        uVar10 = 0;
        do {
          if (*plStack_360 != lVar6) {
            _objc_enumerationMutation(uVar1);
          }
          param_1 = *(ulong *)(lStack_368 + uVar10 * 8);
          uVar3 = param_1;
          func_0x00010bfa0a00();
          if ((long)uVar3 < 1) {
            if (uVar7 == 0) {
              _objc_retain(param_1);
              uVar7 = param_1;
            }
            uVar3 = param_1;
            func_0x00010c29e300();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c083540();
            _objc_release(uVar3);
            if ((uVar4 & 1) == 0) {
              if (uVar9 != 0) {
                param_1 = uVar9;
              }
              _objc_retain(param_1);
              _objc_release(uVar1);
              goto LAB_107225794;
            }
            _objc_retain(param_1);
            _objc_release(uVar9);
            uVar9 = param_1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
        puVar8 = &uStack_370;
        uVar2 = uVar1;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release(uVar1);
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    _objc_retain(uVar1);
    puVar8 = &uStack_3b0;
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar6 = *plStack_3a0;
      do {
        uVar10 = 0;
        do {
          if (*plStack_3a0 != lVar6) {
            _objc_enumerationMutation(uVar1);
          }
          lVar5 = *(long *)(lStack_3a8 + uVar10 * 8);
          func_0x00010bfa0a00();
          if (0 < lVar5) {
            _objc_release(uVar1);
            if ((uVar7 == 0) || (uVar9 == 0)) goto LAB_107225788;
            _objc_retain(uVar7);
            param_1 = uVar7;
            goto LAB_107225794;
          }
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
        puVar8 = &uStack_3b0;
        uVar2 = uVar1;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release(uVar1);
LAB_107225788:
    _objc_retain(uVar9);
    param_1 = uVar9;
LAB_107225794:
    _objc_release(uVar9);
LAB_1072257a0:
    _objc_release(uVar7);
  }
  else if (lVar6 == 3) {
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    func_0x00010bebe8c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar6 == 1) {
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      _objc_retain(uVar1);
      puVar8 = &uStack_330;
      uVar2 = uVar1;
      func_0x00010bf52a60();
      if (uVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        lVar6 = *plStack_320;
        do {
          uVar9 = 0;
          do {
            if (*plStack_320 != lVar6) {
              _objc_enumerationMutation(uVar1);
            }
            param_1 = *(ulong *)(lStack_328 + uVar9 * 8);
            uVar10 = param_1;
            func_0x00010bfa0a00();
            if ((long)uVar10 < 1) {
              if (uVar7 == 0) {
                _objc_retain(param_1);
                uVar7 = param_1;
              }
              uVar10 = param_1;
              func_0x00010c29e300();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar10;
              func_0x00010c083540();
              _objc_release(uVar10);
              if ((int)uVar3 == 0) {
                _objc_retain(param_1);
                _objc_release(uVar1);
                goto LAB_1072257a0;
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar2 != uVar9);
          puVar8 = &uStack_330;
          uVar2 = uVar1;
          func_0x00010bf52a60();
        } while (uVar2 != 0);
      }
      _objc_release(uVar1);
      _objc_retain(uVar7);
      param_1 = uVar7;
      goto LAB_1072257a0;
    }
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    plStack_3e8 = (long *)0x0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    _objc_retain(uVar1);
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      if (*plStack_3e0 != *plStack_3e0) {
        _objc_enumerationMutation(uVar1);
      }
      puVar8 = (undefined8 *)*plStack_3e8;
      goto code_r0x00010bf3cf60;
    }
    _objc_release(uVar1);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    _objc_retain(uVar1);
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar6 = *plStack_420;
      do {
        uVar7 = 0;
        do {
          if (*plStack_420 != lVar6) {
            _objc_enumerationMutation(uVar1);
          }
          param_1 = *(ulong *)(lStack_428 + uVar7 * 8);
          uVar9 = param_1;
          func_0x00010bfa0a00();
          if ((long)uVar9 < 1) {
            _objc_retain(param_1);
            uVar7 = uVar1;
            goto LAB_1072257a0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
        uVar2 = uVar1;
        puVar8 = &uStack_430;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release(uVar1);
    param_1 = uVar1;
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
code_r0x00010bf3cf60:
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar8,PTR_s_clientId_1125acd80);
  return;
}



/* Entry: 1072257ec; end: 1072257f3; -[SCSingleStoryOperaDataSource _playlistItemIdForStorySnap:] */

void FUN_1072257ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_clientId_1125acd80);
  return;
}



/* Entry: 1072257f4; end: 107225847; -[SCSingleStoryOperaDataSource storySnapForItem:] */

void FUN_1072257f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107225848; end: 107225887; -[SCSingleStoryOperaDataSource teardownStoryForItem:] */

void FUN_107225848(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107225888; end: 10722597f; -[SCSingleStoryOperaDataSource _isOperaBuiltInMediaResolverEnabledForDataModel:] */

undefined8 FUN_107225888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x218;
  _objc_loadWeakRetained();
  uVar5 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c101420(lVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if (((int)lVar3 == 0) || (*(char *)(param_1 + 0x168) != '\x01')) {
    uVar5 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c0c5340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_10722f3f0();
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107225980; end: 107225ed3; -[SCSingleStoryOperaDataSource pageDataForDataModel:completion:] */

void FUN_107225980(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010beb52e0();
  lVar9 = *(long *)(param_1 + 0x68);
  lVar10 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  uVar4 = param_1;
  func_0x00010be427a0();
  if (((int)uVar4 != 0) && (lVar9 != 0)) {
    lVar10 = param_1 + 0x218;
    _objc_loadWeakRetained(lVar10);
    lVar11 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010c101420(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar10);
    lVar10 = param_1 + 0x218;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c0778a0();
    _objc_release(lVar10);
    lVar10 = lVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar5;
    func_0x00010bf1f3c0();
    if ((int)lVar11 != (int)lVar10) {
      func_0x00010be8cc00(param_1);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  lVar11 = *(long *)(param_1 + 0x68);
  lVar10 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar11 == 0) || ((uVar2 & 1) != 0)) {
    _objc_release(lVar11);
    _objc_release(lVar10);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x150);
    func_0x00010bf4b900();
    _objc_release(lVar11);
    _objc_release(lVar10);
    if ((uVar4 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 0x68);
      lVar11 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      func_0x00010bde2ee0(param_1);
      goto LAB_107225e6c;
    }
  }
  lVar10 = param_3;
  func_0x00010853a834();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    lVar11 = *(long *)(param_1 + 0x98);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 == 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010bf625c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98));
      lVar11 = lVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010c08fa60();
      _objc_release(lVar11);
      if (lVar3 == 0) {
        func_0x00010bdd7840(param_1);
      }
      _objc_release(lVar5);
    }
  }
  lVar11 = param_3;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  puVar6 = PTR_PTR_1126c3320;
  func_0x00010c0729e0();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x100);
  func_0x00010bf1f440();
  lVar11 = *(long *)(param_1 + 0x1d0);
  _objc_retain(lVar11);
  if (iVar1 == 0) {
LAB_107225e40:
    func_0x00010bde2f40(param_1);
  }
  else {
    lVar5 = lVar3;
    func_0x00010c08fa60();
    if (((uint)(lVar5 != 0) & (uint)puVar6) != 1) goto LAB_107225e40;
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    if ((int)uVar8 == 0) {
      if (lVar11 == 0) goto LAB_107225e40;
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 0;
      _objc_initWeak(auStack_88,param_1);
      _objc_copyWeak(auStack_98,auStack_88);
      _objc_retain(lVar3);
      _objc_retain(param_4);
      _objc_retain(param_3);
      uStack_90 = (undefined1)uVar2;
      func_0x00010bfa9720(lVar11);
      if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
        *(undefined1 *)(puStack_78 + 3) = 1;
        func_0x00010bde2f40(param_1);
      }
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_88);
      __Block_object_dispose(&uStack_80,8);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x1d8);
      _objc_retain(uVar7);
      uVar8 = uVar7;
      func_0x00010c2608e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde2f40(param_1);
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
  }
  _objc_release(lVar11);
  _objc_release(lVar3);
LAB_107225e6c:
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107225ed4; end: 107225fcf;  */

void FUN_107225ed4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107225fd0;
  puStack_70 = &UNK_1109938c0;
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = lVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  uStack_38 = *(undefined1 *)(param_1 + 0x48);
  uStack_58 = uVar2;
  uStack_50 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(param_2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107225fd0; end: 107226017;  */

void FUN_107225fd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__completePageDataForStorySnap_di_112556570,
               *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107226014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  return;
}



/* Entry: 107226018; end: 107226157; -[SCSingleStoryOperaDataSource _completePageDataForStorySnap:didUpdateCurrentStorySnap:fanPassDisplayName:completion:] */

void FUN_107226018(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010be6fae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  func_0x00010bde2ee0(param_1);
  _objc_release(param_6);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be427a0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(char *)(param_1 + 0x148) == '\x01') {
    func_0x00010befa120();
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x150));
  }
  if (param_4 != 0) {
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107226158;
    puStack_58 = &UNK_110841f80;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107226158; end: 107226197;  */

void FUN_107226158(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar1;
  func_0x00010be63c20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd6c0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107226198; end: 1072262b7; -[SCSingleStoryOperaDataSource _getDiscoverFeedStoryForStorySnap:] */

void FUN_107226198(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x218;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c101420(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x218;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar3;
  func_0x00010bfce400(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf63e80(lVar1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  func_0x000107d005a8(lVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1072262b8; end: 1072263e7; -[SCSingleStoryOperaDataSource _discoverFeedFriendOfGroupDisplayNameForStorySnap:] */

void FUN_1072262b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010853a834();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
    goto LAB_1072263c0;
  }
  func_0x00010be1ea60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010afefe3c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar2 == 0) {
LAB_1072263a4:
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c0720c0();
      _objc_release(lVar4);
      if ((int)lVar3 == 0) goto LAB_1072263a4;
      lVar4 = lVar2;
      func_0x00010bf85d80(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
LAB_1072263c0:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1072263e8; end: 1072264ef; -[SCSingleStoryOperaDataSource _cacheFriendOfGroupFeedDisplayNameForStorySnapIfNeeded:] */

void FUN_1072263e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010853a834();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0xa0);
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = *(ulong *)(param_1 + 0xa8);
      func_0x00010bf4b900(uVar3,param_2,lVar1);
      if ((uVar3 & 1) != 0) goto LAB_10722644c;
      lVar4 = param_1;
      func_0x00010be02060(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      lVar2 = lVar4;
      if (lVar5 == 0) {
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x00010bfb8580(lVar2,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
      lVar4 = lVar2;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0xa8),param_2,lVar1);
      }
      else {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa0),param_2,lVar2,lVar1);
      }
    }
    _objc_release(lVar2);
  }
LAB_10722644c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1072264f0; end: 1072265cb; -[SCSingleStoryOperaDataSource _friendOfGroupFeedDisplayNameForStorySnap:] */

void FUN_1072264f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010853a834();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa0);
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      uVar3 = *(ulong *)(param_1 + 0xa8);
      func_0x00010bf4b900(uVar3,param_2,lVar1);
      if ((uVar3 & 1) == 0) {
        func_0x00010bdd7840(param_1,param_2,param_3);
        lVar4 = *(long *)(param_1 + 0xa0);
        func_0x00010c0e00e0(lVar4,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar4 = 0;
      }
    }
    else {
      _objc_retain(lVar2);
      lVar4 = lVar2;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1072265cc; end: 107226a63; -[SCSingleStoryOperaDataSource _pagesPropertiesForStorySnap:fanPassDisplayName:] */

void FUN_1072265cc(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_1;
  func_0x00010be427a0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = param_3;
    func_0x00010853a834(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d2d330(*(undefined8 *)(param_1 + 0x200),param_3);
    func_0x000107d2d8b0(*(undefined8 *)(param_1 + 0x200),param_3,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x1a0));
    puVar2 = PTR_PTR_1126d5398;
    uVar10 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    func_0x00010bf98b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf5b1a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1[0x148] == '\x01') {
      func_0x00010bf4b900();
    }
    puVar7 = param_1;
    func_0x00010be19340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f26e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar10);
  }
  else {
    puVar2 = param_1;
    func_0x00010be63f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c26fe00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      func_0x000108f4a29c(*(undefined8 *)(param_1 + 0x100));
    }
    _objc_release(puVar3);
    if (param_1[0x169] == '\x01') {
      uVar9 = *(ulong *)(param_1 + 0x30);
      if ((uVar9 < 0x3a) && ((1L << (uVar9 & 0x3f) & 0x200380060800180U) != 0)) {
        uVar10 = 1;
      }
      else {
        if ((0x19 < uVar9 - 0x49) || ((1L << (uVar9 - 0x49 & 0x3f) & 0x2020001U) == 0)) {
          uVar10 = 0;
          uVar1 = uVar9 - 0x57 >> 1;
          if ((7 < (uVar1 | uVar9 - 0x57 << 0x3f)) || ((1L << (uVar1 & 0x3f) & 0xb1U) == 0))
          goto LAB_107226948;
        }
        uVar10 = *(undefined8 *)(param_1 + 0x100);
        FUN_10723dd44(uVar10);
      }
    }
    else {
      uVar10 = 0;
    }
LAB_107226948:
    uVar8 = *(undefined8 *)(param_1 + 0x200);
    FUN_10722f4a0(uVar8,param_3,*(undefined8 *)(param_1 + 0x128),param_1[0x1b8],uVar10,
                  param_1[0x16a]);
    if ((int)uVar8 == 0) goto LAB_10722698c;
    puVar5 = param_1;
    func_0x00010bdc8340(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puVar2 = puVar5;
  }
  _objc_release(puVar3);
LAB_10722698c:
  puVar3 = param_1;
  func_0x00010bdc8320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bdc7a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  puVar3 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar10);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bfb1920(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7680(param_1);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107226a64; end: 107226b5b; -[SCSingleStoryOperaDataSource _cacheContextParamsIfPresent:forStorySnap:] */

void FUN_107226a64(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      lVar2 = param_4;
      func_0x00010bf3cf60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(lVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107226b5c; end: 107226c37; -[SCSingleStoryOperaDataSource _addOperaSnapPlaybackFeatureAttributionsForStorySnap:properties:] */

void FUN_107226b5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  func_0x00010bdf0ce0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (param_1 != 0)) {
    func_0x00010c1d0640(lVar2,param_2,param_1,&PTR____CFConstantStringClassReference_110f0bbf8);
    func_0x00010c1d04c0(param_4,param_2,lVar2,0);
  }
  lVar1 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107226c38; end: 1072271db; -[SCSingleStoryOperaDataSource _nonMediaPagePropertiesForStorySnap:fanPassDisplayName:] */

void FUN_107226c38(long param_1,undefined8 param_2,undefined8 ***param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined8 **ppuStack_270;
  undefined8 **ppuStack_268;
  undefined8 **ppuStack_260;
  undefined8 **ppuStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined8 **ppuStack_210;
  undefined8 **ppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 **ppuStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_80 = (undefined8 **)param_4;
  _objc_retain(param_3);
  pppuVar8 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_opt_new();
  pppuVar3 = param_3;
  ppuStack_88 = pppuVar8;
  func_0x00010853a834();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  pppuVar8 = param_3;
  func_0x000107d267d0(param_3,uVar2,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0xe0)
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_a0 = *(undefined **)(param_1 + 0x200);
  ppuStack_98 = (undefined8 **)PTR_PTR_1126d5398;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  ppuStack_90 = pppuVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = *(long *)(param_1 + 0x30);
  uStack_b0 = *(undefined8 *)(param_1 + 0x38);
  ppuStack_c0 = *(undefined8 ***)(param_1 + 0x90);
  pppuVar3 = *(undefined8 ****)(param_1 + 0x80);
  uStack_b8 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = *(undefined8 *)(param_1 + 0x108);
  ppuStack_d0 = *(undefined8 ***)(param_1 + 0x100);
  uVar25 = *(undefined8 *)(param_1 + 0xf0);
  uVar24 = *(undefined8 *)(param_1 + 0x118);
  uVar26 = *(undefined8 *)(param_1 + 0xe0);
  uVar27 = *(undefined8 *)(param_1 + 0x128);
  lVar7 = param_1;
  func_0x00010be19340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuStack_80;
  uVar2 = uStack_b8;
  uStack_140 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_130 = *(undefined8 *)(param_1 + 0x1c8);
  ppuStack_138 = (undefined8 **)CONCAT71(ppuStack_138._1_7_,*(undefined1 *)(param_1 + 0x40));
  uStack_150 = ppuStack_80;
  uStack_178 = uStack_c8;
  ppuStack_180 = ppuStack_d0;
  ppuStack_190 = ppuStack_c0;
  ppuVar14 = ppuStack_98;
  ppuStack_188 = pppuVar3;
  uStack_170 = uVar25;
  uStack_168 = uVar24;
  uStack_160 = uVar26;
  uStack_158 = uVar27;
  lStack_148 = lVar7;
  ppuStack_98 = pppuVar8;
  func_0x00010c22bd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  _objc_release(lVar7);
  _objc_release(pppuVar3);
  _objc_release(uVar2);
  ppuVar13 = ppuStack_88;
  func_0x00010bef7f60(ppuStack_88);
  func_0x00010c1d0640(ppuVar13);
  func_0x00010c1d0640(ppuVar13);
  lVar7 = param_1 + 0x218;
  _objc_loadWeakRetained();
  pppuVar8 = param_3;
  ppuStack_80 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar8);
  _objc_release(lVar7);
  lVar7 = param_1 + 0x218;
  _objc_loadWeakRetained();
  lVar5 = lVar7;
  func_0x00010c0778a0();
  _objc_release(lVar7);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar13);
  _objc_release(puVar6);
  pppuVar3 = (undefined8 ***)ppuStack_80;
  pppuVar8 = (undefined8 ***)ppuStack_90;
  if ((int)lVar5 == 0) {
    lVar7 = *(long *)(param_1 + 0x70);
    func_0x00010bf3cf60(ppuStack_80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar3);
    iVar23 = (int)*(undefined8 *)(param_1 + 0x128);
    pppuVar10 = (undefined8 ***)PTR_PTR_1126c11f8;
    func_0x00010bf32de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    pppuVar12 = (undefined8 ***)ppuStack_88;
    if ((iVar23 == 0) || (lVar7 == 0)) {
      _objc_release(pppuVar10);
      pppuVar12 = (undefined8 ***)ppuStack_88;
    }
    else {
      pppuVar3 = (undefined8 ***)ppuStack_88;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(pppuVar10);
      if (pppuVar3 == (undefined8 ***)0x0) {
        func_0x000107b281fc(pppuVar12,lVar7);
      }
    }
    pppuVar16 = &ppuStack_78;
    pppuVar20 = (undefined8 ***)0x1;
    pppuVar11 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_78 = pppuVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    pppuVar22 = (undefined8 ***)ppuStack_98;
    pppuVar19 = pppuVar8;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x200);
    lStack_a8 = lVar4;
    puStack_a0 = (undefined *)ppuVar14;
    func_0x000107d2d330(uVar2,ppuStack_80);
    lVar7 = *(long *)(param_1 + 0x200);
    uStack_b8 = uVar2;
    func_0x000107d2d8b0(lVar7,pppuVar3,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x1a0));
    ppuStack_d8 = (undefined8 **)PTR_PTR_1126d5398;
    ppuStack_c0 = *(undefined8 ***)(param_1 + 0x200);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    lStack_e8 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = *(undefined8 *)(param_1 + 0x30);
    pppuVar8 = *(undefined8 ****)(param_1 + 0x80);
    uStack_b0 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = pppuVar8;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar3;
    func_0x00010bf5b1a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = *(undefined8 ****)(param_1 + 0x100);
    uVar25 = *(undefined8 *)(param_1 + 0x108);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    uVar26 = *(undefined8 *)(param_1 + 0xe8);
    uVar24 = *(undefined8 *)(param_1 + 0x130);
    uVar27 = *(undefined8 *)(param_1 + 0x138);
    uVar15 = *(undefined8 *)(param_1 + 0x1a0);
    param_3 = *(undefined8 ****)(param_1 + 0x158);
    if (*(char *)(param_1 + 0x148) == '\x01') {
      uVar9 = *(undefined8 *)(param_1 + 0x150);
      uStack_f0 = uVar15;
      func_0x00010bf4b900(uVar9,uVar27,ppuStack_80);
      uVar1 = (undefined1)uVar9;
      uVar15 = uStack_f0;
    }
    else {
      uVar1 = 0;
    }
    pppuVar12 = (undefined8 ***)ppuStack_88;
    pppuVar22 = (undefined8 ***)ppuStack_98;
    uVar9 = uStack_b0;
    pppuVar19 = (undefined8 ***)ppuStack_d0;
    uStack_128 = *(undefined8 *)(param_1 + 0x120);
    uStack_118 = *(undefined8 *)(param_1 + 0x128);
    uStack_110 = *(undefined8 *)(param_1 + 0x198);
    uStack_108 = *(undefined1 *)(param_1 + 0x40);
    uStack_100 = *(undefined8 *)(param_1 + 0x1a8);
    uStack_120 = 0;
    uStack_130 = CONCAT71(uStack_130._1_7_,uVar1);
    lStack_148 = lStack_e8;
    uStack_158 = uStack_b8;
    ppuStack_190 = ppuStack_d0;
    pppuVar11 = (undefined8 ***)ppuStack_d8;
    pppuVar16 = (undefined8 ***)ppuStack_88;
    pppuVar20 = (undefined8 ***)ppuStack_80;
    ppuStack_188 = pppuVar10;
    ppuStack_180 = pppuVar8;
    uStack_178 = uVar25;
    uStack_170 = uVar2;
    uStack_168 = uVar26;
    uStack_160 = uVar24;
    uStack_150 = uVar27;
    uStack_140 = uVar15;
    ppuStack_138 = param_3;
    func_0x00010bf06ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar10);
    _objc_release(pppuVar3);
    _objc_release(pppuVar19);
    _objc_release(uVar9);
    pppuVar8 = (undefined8 ***)ppuStack_90;
    ppuVar14 = (undefined8 **)puStack_a0;
    lVar4 = lStack_a8;
  }
  _objc_release(lVar4);
  _objc_release(ppuVar14);
  _objc_release(pppuVar22);
  _objc_release(pppuVar8);
  _objc_release(pppuVar12);
  pppuVar3 = (undefined8 ***)ppuStack_80;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pppuVar18 = &ppuStack_1f0;
    pcStack_198 = FUN_1072271dc;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar17 = pppuVar16;
    pppuVar21 = pppuVar20;
    puStack_1e0 = (undefined *)ppuVar14;
    ppuStack_1d8 = pppuVar19;
    ppuStack_1d0 = pppuVar12;
    ppuStack_1c8 = pppuVar11;
    ppuStack_1c0 = pppuVar10;
    ppuStack_1b8 = pppuVar22;
    ppuStack_1b0 = pppuVar8;
    ppuStack_1a8 = param_3;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar16);
    _objc_retain(pppuVar20);
    if ((((ulong)pppuVar3[0x37] & 1) == 0) ||
       (pppuVar8 = pppuVar20, func_0x00010bf529e0(), pppuVar8 == (undefined8 ***)0x0)) {
      pppuVar18 = pppuVar17;
      _objc_retain(pppuVar20);
      pppuVar10 = pppuVar20;
      pppuVar8 = pppuVar11;
    }
    else {
      pppuVar8 = pppuVar20;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar8;
      func_0x00010c0d3c80();
      _objc_release(pppuVar8);
      puVar6 = PTR_PTR_1126c9448;
      _objc_alloc(PTR_PTR_1126c9448);
      pppuVar8 = pppuVar16;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = pppuVar8;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar10 = pppuVar12;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c00f960(puVar6);
      func_0x00010c1d0640(pppuVar3);
      _objc_release(puVar6);
      _objc_release(pppuVar10);
      _objc_release(pppuVar12);
      _objc_release(pppuVar8);
      func_0x00010c1d0640(pppuVar3);
      pppuVar21 = (undefined8 ***)0x1;
      pppuVar10 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_1f0 = pppuVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar3);
    }
    pppuVar11 = pppuVar10;
    _objc_release(pppuVar20);
    pppuVar10 = pppuVar16;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      pppuVar17 = (undefined8 ***)&puStack_240;
      pcStack_1f8 = FUN_1072273a8;
      lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar19 = pppuVar18;
      pppuVar22 = pppuVar21;
      ppuStack_230 = pppuVar12;
      ppuStack_228 = pppuVar8;
      ppuStack_220 = pppuVar11;
      ppuStack_218 = pppuVar3;
      ppuStack_210 = pppuVar20;
      ppuStack_208 = pppuVar16;
      ppuStack_200 = &puStack_1a0;
      _objc_retain(pppuVar18);
      pppuVar8 = pppuVar18;
      func_0x00010bf529e0();
      if ((pppuVar8 == (undefined8 ***)0x0) || ((*(byte *)((long)pppuVar10 + 0x169) & 1) == 0)) {
        _objc_retain(pppuVar18);
        pppuVar11 = pppuVar18;
      }
      else {
        pppuVar8 = pppuVar18;
        func_0x00010bfb1920(pppuVar18);
        _objc_retainAutoreleasedReturnValue();
        pppuVar3 = pppuVar8;
        func_0x00010c0d3c80();
        _objc_release(pppuVar8);
        func_0x00010c1d0640(pppuVar3);
        if ((int)pppuVar21 != 0) {
          func_0x00010c1d0640(pppuVar3);
        }
        ppuVar13 = pppuVar10[0x40];
        func_0x0001085394d0(ppuVar13);
        ppuVar14 = pppuVar10[0x20];
        func_0x00010723df8c(ppuVar14,pppuVar10[6],ppuVar13);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)ppuVar14 != 0) {
          FUN_10723e120(pppuVar10[0x20],pppuVar10[6]);
          func_0x00010c0df780(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(pppuVar3);
          _objc_release(puVar6);
        }
        ppuVar13 = (undefined8 **)PTR_PTR_1126b2de0;
        func_0x00010befa320();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar13;
        func_0x00010c0d3c80();
        _objc_release(pppuVar3);
        _objc_release(ppuVar13);
        pppuVar22 = (undefined8 ***)0x1;
        pppuVar11 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_240 = ppuVar14;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        pppuVar19 = pppuVar17;
      }
      _objc_release(pppuVar18);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
        ___stack_chk_fail();
        pcStack_248 = FUN_107227570;
        ppuStack_260 = pppuVar11;
        ppuStack_258 = pppuVar18;
        ppuStack_250 = &ppuStack_200;
        _objc_retain(pppuVar19);
        _objc_retain(pppuVar22);
        puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_288 = 0xc2000000;
        pcStack_280 = FUN_107227614;
        puStack_278 = &UNK_11084aaa8;
        ppuStack_270 = pppuVar19;
        ppuStack_268 = pppuVar22;
        _objc_retain(pppuVar19);
        _objc_retain(pppuVar22);
        func_0x00010bcbe2c4("APPSTORE",&puStack_290);
        _objc_release(ppuStack_270);
        _objc_release(ppuStack_268);
        _objc_release(pppuVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pppuVar22);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar11);
  return;
}



/* Entry: 1072271dc; end: 1072273a7; -[SCSingleStoryOperaDataSource _addSingleSnapPlayerAudioTranscriptionSubtitlePropertiesForStorySnap:properties:] */

void FUN_1072271dc(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar6 = &puStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar8 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_1[0x1b8] & 1) == 0) ||
     (puVar1 = param_4, func_0x00010bf529e0(), puVar1 == (undefined *)0x0)) {
    ppuVar6 = (undefined **)puVar2;
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  else {
    puVar2 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9448;
    _objc_alloc(PTR_PTR_1126c9448);
    unaff_x23 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = unaff_x24;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c00f960(puVar2);
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    func_0x00010c1d0640(param_1);
    puVar8 = (undefined *)0x1;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = param_1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_b0;
    pcStack_68 = FUN_1072273a8;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = (undefined *)ppuVar6;
    puVar9 = puVar8;
    puStack_a0 = unaff_x24;
    puStack_98 = unaff_x23;
    puStack_90 = puVar2;
    puStack_88 = param_1;
    puStack_80 = param_4;
    puStack_78 = param_3;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar6);
    puVar2 = (undefined *)ppuVar6;
    func_0x00010bf529e0();
    if ((puVar2 == (undefined *)0x0) || ((puVar1[0x169] & 1) == 0)) {
      _objc_retain(ppuVar6);
      puVar2 = (undefined *)ppuVar6;
    }
    else {
      puVar2 = (undefined *)ppuVar6;
      func_0x00010bfb1920(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0d3c80();
      _objc_release(puVar2);
      func_0x00010c1d0640(puVar3);
      if ((int)puVar8 != 0) {
        func_0x00010c1d0640(puVar3);
      }
      uVar4 = *(undefined8 *)(puVar1 + 0x200);
      func_0x0001085394d0(uVar4);
      uVar5 = *(undefined8 *)(puVar1 + 0x100);
      func_0x00010723df8c(uVar5,*(undefined8 *)(puVar1 + 0x30),uVar4);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)uVar5 != 0) {
        FUN_10723e120(*(undefined8 *)(puVar1 + 0x100),*(undefined8 *)(puVar1 + 0x30));
        func_0x00010c0df780(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar2);
      }
      puVar2 = PTR_PTR_1126b2de0;
      func_0x00010befa320();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0d3c80();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar9 = (undefined *)0x1;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar3 = (undefined *)ppuVar7;
    }
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      pcStack_b8 = FUN_107227570;
      puStack_d0 = puVar2;
      puStack_c8 = (undefined *)ppuVar6;
      ppuStack_c0 = &puStack_70;
      _objc_retain(puVar3);
      _objc_retain(puVar9);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_107227614;
      puStack_e8 = &UNK_11084aaa8;
      puStack_e0 = puVar3;
      puStack_d8 = puVar9;
      _objc_retain(puVar3);
      _objc_retain(puVar9);
      func_0x00010bcbe2c4("APPSTORE",&puStack_100);
      _objc_release(puStack_e0);
      _objc_release(puStack_d8);
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar9);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1072273a8; end: 10722756f; -[SCSingleStoryOperaDataSource _addSingleSnapPlayerPropertiesForStorySnap:snapHasTimeAdPlacements:] */

void FUN_1072273a8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar6 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  uVar3 = param_4;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if ((puVar1 == (undefined *)0x0) || ((*(byte *)(param_1 + 0x169) & 1) == 0)) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    func_0x00010c1d0640(puVar2);
    if ((int)param_4 != 0) {
      func_0x00010c1d0640(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x200);
    func_0x0001085394d0(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010723df8c(uVar4,*(undefined8 *)(param_1 + 0x30),uVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 != 0) {
      FUN_10723e120(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x30));
      func_0x00010c0df780(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126b2de0;
    func_0x00010befa320();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar3 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar2 = (undefined *)ppuVar6;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_107227570;
  puStack_70 = puVar1;
  puStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(uVar3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107227614;
  puStack_88 = &UNK_11084aaa8;
  puStack_80 = puVar2;
  uStack_78 = uVar3;
  _objc_retain(puVar2);
  _objc_retain(uVar3);
  func_0x00010bcbe2c4("APPSTORE",&puStack_a0);
  _objc_release(puStack_80);
  _objc_release(uStack_78);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107227570; end: 107227613; -[SCSingleStoryOperaDataSource _completeOnMainThread:completion:] */

void FUN_107227570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107227614;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bcbe2c4("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107227614; end: 1072276df;  */

void FUN_107227614(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 == 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = 0;
  }
  func_0x00010c033240(puVar1);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  _objc_release(puVar1);
  if (lVar3 == 2) {
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1072276e0; end: 107227b5f; -[SCSingleStoryOperaDataSource _createOperaItemAttributionInfoForDataModel:] */

void FUN_1072276e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c08fa60();
    lVar7 = param_3;
    if (lVar11 == 0) {
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar2);
LAB_107227814:
      func_0x00010c0c5340(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x000107cc6524();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar11 = param_3;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar11;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar11);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar2);
      if (lVar6 == 0) goto LAB_107227814;
      func_0x00010c0c5340(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x000107cc65c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar7);
  }
  lVar1 = param_1;
  func_0x00010be1ea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar8 = (undefined **)(param_1 + 0x218);
    _objc_loadWeakRetained();
    lVar3 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(ppuVar8);
    if (ppuVar9 == (undefined **)0x0) {
      puVar13 = (undefined *)0x0;
      goto LAB_107227b1c;
    }
    ppuVar8 = (undefined **)(param_1 + 0x218);
    _objc_loadWeakRetained();
    ppuVar10 = ppuVar9;
    func_0x00010bfce400(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar8;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    _objc_release(ppuVar8);
    puVar13 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    ppuVar10 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar13);
    ppuVar8 = ppuVar12;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar12);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar12 = (undefined **)0x0;
      goto LAB_107227ad0;
    }
    lVar3 = param_3;
    func_0x00010853a834();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x98);
      func_0x00010c0e00e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = PTR_PTR_1126d53a0;
    func_0x00010c258c80(PTR_PTR_1126d53a0);
    _objc_retainAutoreleasedReturnValue();
LAB_107227b04:
    _objc_release(lVar3);
    _objc_release(lVar11);
  }
  else {
    lVar3 = lVar1;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c084ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010c080120();
    ppuVar12 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)lVar3 == 0) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110dad398;
    }
    _objc_retain(ppuVar12);
    if (lVar11 == 0) {
      _objc_retain(ppuVar12);
      ppuVar9 = ppuVar12;
    }
    else {
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
    }
    lVar3 = lVar1;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar3);
    if (lVar11 != 0) {
LAB_107227a64:
      puVar13 = PTR_PTR_1126b2dc0;
      _objc_alloc(PTR_PTR_1126b2dc0);
      lVar3 = lVar1;
      func_0x00010c25a160(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c084c40();
      func_0x00010bb14c74();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ff20(puVar13);
      _objc_release(lVar7);
      goto LAB_107227b04;
    }
    lVar11 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) goto LAB_107227a64;
LAB_107227ad0:
    puVar13 = (undefined *)0x0;
  }
  _objc_release(ppuVar12);
LAB_107227b1c:
  _objc_release(ppuVar9);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107227b60; end: 107227fe7; -[SCSingleStoryOperaDataSource extraPropertiesForDataModel:completion:] */

void FUN_107227b60(ulong param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x200);
  func_0x000108539290();
  if (iVar1 == 0) {
LAB_107227c28:
    puVar8 = (undefined *)0x0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x128);
    puVar2 = PTR_PTR_1126c11f8;
    func_0x00010c24c820(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    if (iVar1 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126ce808;
      func_0x00010c29d3a0();
      _objc_release(puVar2);
      if ((int)puVar8 == 0) goto LAB_107227c28;
      puVar2 = param_3;
      func_0x00010853a834();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        uStack_70 = 0;
      }
      else {
        uStack_70 = *(undefined8 *)(param_1 + 0x98);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x000107d267d0(param_3,uVar3,*(undefined8 *)(param_1 + 0x118),
                          *(undefined8 *)(param_1 + 0xe0));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar8 = PTR_PTR_1126d5398;
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be19340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22bd60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(puVar4);
      _objc_release(uStack_70);
    }
    _objc_release(puVar2);
  }
  lVar6 = *(long *)(param_1 + 0x210);
  func_0x00010bf98b00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be427a0();
  if (((uVar5 & 1) == 0) && (lVar6 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x210);
    func_0x00010c10a540(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x210);
    func_0x00010c09cc00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar7);
    lVar9 = *(long *)(param_1 + 0x1b0);
    puVar4 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    if (lVar9 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x1b0);
      puVar4 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be6f520(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(puVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x1b0);
      puVar4 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(puVar4);
    }
    if (puVar8 != (undefined *)0x0) {
      func_0x00010bef7f60(puVar2);
    }
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    (**(code **)(param_4 + 0x10))(param_4,puVar4,0);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar8 != (undefined *)0x0) {
      puVar2 = puVar8;
    }
    (**(code **)(param_4 + 0x10))(param_4,puVar2,0);
  }
  _objc_release(lVar6);
  _objc_release(puVar8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107227fe8; end: 10722804f; -[SCSingleStoryOperaDataSource mediaLoadDidFailFor:error:] */

void FUN_107227fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  _objc_retain(param_3);
  func_0x00010c1d0640(uVar1,param_2,param_4,param_3);
  param_1 = param_1 + 0x218;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107228050; end: 10722818f; -[SCSingleStoryOperaDataSource reloadMediaFor:] */

void FUN_107228050(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (uVar2 = param_1, func_0x00010be427a0(), (uVar2 & 1) == 0)) {
    func_0x00010c12dcc0(*(undefined8 *)(param_1 + 0x210));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c12e6c0(*(undefined8 *)(param_1 + 0x210));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x10));
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010be78b40(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107228190; end: 1072281e3;  */

void FUN_107228190(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x218;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c101400();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072281e4; end: 107228277; -[SCSingleStoryOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1072281e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    func_0x00010be78b40(param_1,param_2,lVar1,param_5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107228278; end: 1072283db; -[SCSingleStoryOperaDataSource _handleDownloadedMediaWithStorySnap:completion:] */

void FUN_107228278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1072283dc;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  func_0x00010be78b40(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1072283dc; end: 10722840f;  */

void FUN_1072283dc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107228410; end: 1072284d7;  */

void FUN_107228410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1072284d8;
  puStack_50 = &UNK_110842a68;
  uStack_38 = param_2;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1072284d8; end: 107228517;  */

void FUN_1072284d8(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107228518; end: 107228593; -[SCSingleStoryOperaDataSource _updatePlaylistItemWithStorySnap:] */

void FUN_107228518(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1 + 0x218;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be75360(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c101400(lVar1,param_2,param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107228594; end: 1072286a3; -[SCSingleStoryOperaDataSource _prepareMediaForStorySnap:completion:] */

void FUN_107228594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1072286a4;
  puStack_70 = &UNK_110993980;
  _objc_retain(param_3);
  uStack_68 = param_3;
  uStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_4);
  ppuVar2 = &puStack_88;
  _objc_retainBlock();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107228c44;
  puStack_a8 = &UNK_11084a9e8;
  uStack_a0 = param_1;
  uStack_98 = param_3;
  ppuStack_90 = ppuVar2;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_c0);
  _objc_release(uStack_98);
  _objc_release(ppuVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1072286a4; end: 107228aa3;  */

void FUN_1072286a4(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    if (param_2 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x68);
      func_0x00010bf3cf60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      lVar6 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if ((lVar3 != 0) && (lVar6 = lVar3, func_0x00010c067ec0(), (int)lVar6 != 0)) {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_107228aa4;
        puStack_68 = &UNK_110841f80;
        auVar9 = *(undefined1 (*) [16])(param_1 + 0x20);
        _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
        auVar9 = NEON_ext(auVar9,auVar9,8,1);
        uStack_58 = auVar9._8_8_;
        uStack_60 = auVar9._0_8_;
        func_0x0001000d76cc("APPSTORE",&puStack_80);
        _objc_release(uStack_58);
      }
      _objc_release(lVar3);
      _objc_release(lVar5);
    }
    param_3 = (undefined *)0x0;
    goto LAB_107228948;
  }
  puVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = param_3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)puVar2 == 0) {
        puVar1 = param_3;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if (((int)puVar2 != 0) &&
           ((puVar1 = param_3, func_0x00010bf3ec40(), puVar1 == (undefined *)0x1 ||
            (puVar1 = param_3, func_0x00010bf3ec40(), puVar1 == (undefined *)0x2))))
        goto LAB_1072288f0;
      }
      else {
        puVar1 = param_3;
        func_0x00010bf3ec40();
        if (puVar1 == (undefined *)0xcb) {
LAB_1072288f0:
          func_0x00010c23e4a0(*(undefined8 *)(param_1 + 0x28));
          goto LAB_107228948;
        }
      }
    }
    else {
      puVar1 = param_3;
      func_0x00010bf3ec40();
      if (puVar1 == (undefined *)0x5) goto LAB_1072288f0;
    }
  }
  else {
    puVar1 = param_3;
    func_0x00010bf3ec40();
    if (puVar1 == (undefined *)0x3) goto LAB_1072288f0;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bedca80(*(undefined8 *)(param_1 + 0x28));
  param_3 = puVar1;
LAB_107228948:
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    if (param_3 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar1 = param_3;
      func_0x00010bf3ec40();
      uVar7 = 1;
      if (puVar1 == (undefined *)0xc9) {
        uVar7 = 2;
      }
      lVar6 = *(long *)(param_1 + 0x30);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c27dd80();
    FUN_10722fa8c();
    (**(code **)(lVar6 + 0x10))(lVar6,uVar7,param_3,uVar8);
    _objc_release(uVar4);
  }
  if (param_2 != 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010be63c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      lVar3 = lVar6;
      func_0x00010c0c5340(lVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar8);
      _objc_retain(lVar6);
      _objc_retain(param_2);
      func_0x00010c11d580(uVar7);
      _objc_release(lVar3);
      _objc_release(param_2);
      _objc_release(lVar6);
      _objc_release(uVar8);
    }
    _objc_release(lVar6);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107228aa4; end: 107228b87;  */

void FUN_107228aa4(long param_1,undefined8 param_2)

{
  func_0x00010be8cc00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bedd6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaylistItemWithStorySnap_112594f58,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107228b88; end: 107228c43;  */

void FUN_107228b88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x210);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a620(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedd6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__updatePlaylistItemWithStorySnap_112594f58,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107228c44; end: 107228c57;  */

void FUN_107228c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x210),
             PTR_s_prepareToViewStorySnap_completio_1126202c0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107228c58; end: 107228def; -[SCSingleStoryOperaDataSource _nextStorySnapAfterStorySnap:] */

void FUN_107228c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x218;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010be75360(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c101420(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfecde0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  if (uVar5 + 1 < uVar6) {
    uVar1 = uVar3;
    func_0x00010bfce400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010c25b1e0(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107228df0; end: 107228f3f; -[SCSingleStoryOperaDataSource _prevStorySnapBeforeStorySnap:] */

void FUN_107228df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x218;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010be75360(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c101420(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfecde0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 < 1) {
    param_1 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010bfce400(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c25b1e0(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107228f40; end: 107228fd7; -[SCSingleStoryOperaDataSource removeMediaForItem:] */

void FUN_107228f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    func_0x00010c12dcc0(*(undefined8 *)(param_1 + 0x210),param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c12e6c0(*(undefined8 *)(param_1 + 0x210),param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107228fd8; end: 10722901b; -[SCSingleStoryOperaDataSource _removeOutdatedPagePropertiesForStorySnap:] */

void FUN_107228fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10722901c; end: 1072290eb; -[SCSingleStoryOperaDataSource didUpdateMediaStateChangeRequest:] */

void FUN_10722901c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1072290ec;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1072290ec; end: 10722912b;  */

void FUN_1072290ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    func_0x00010be2c300(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10722912c; end: 1072291fb; -[SCSingleStoryOperaDataSource didUpdateMediaStateIdempotencyRequest:] */

void FUN_10722912c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1072291fc;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1072291fc; end: 10722923b;  */

void FUN_1072291fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    func_0x00010be2c320(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10722923c; end: 10722947b; -[SCSingleStoryOperaDataSource _handleMediaStateChangeRequest:] */

void FUN_10722923c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x200);
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10722947c;
  puStack_68 = &UNK_1109939b0;
  lStack_60 = param_1;
  _objc_retain(param_3);
  lVar2 = lVar1;
  lStack_58 = param_3;
  func_0x00010bfb2040(lVar1,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x210);
    func_0x00010bf98b00(lVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_3;
      func_0x00010c252440();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 0x210);
        func_0x00010bf98b00(lVar3,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          lVar3 = param_3;
          func_0x00010bf336e0();
          if (lVar3 == 2) {
            puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                                &PTR____CFConstantStringClassReference_110ea2fb8,
                                &PTR____CFConstantStringClassReference_110ea2ab8,0xd0);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_3;
            func_0x00010bf987e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
            if (lVar3 != 0) {
              lVar3 = param_3;
              func_0x00010bf987e0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99280(puVar5,param_2,&PTR____CFConstantStringClassReference_110ea2fb8,
                                  &PTR____CFConstantStringClassReference_110ea2ab8,0xd0,lVar3);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              _objc_release(lVar3);
              puVar4 = puVar5;
            }
            func_0x00010bedca80(param_1,param_2,lVar2,puVar4);
            func_0x00010bedd6c0(param_1,param_2,lVar2);
            _objc_release(puVar4);
          }
          else {
            lVar3 = param_3;
            func_0x00010bf336e0();
            if (lVar3 == 3) {
              func_0x00010c23e4a0(param_1,param_2,lVar2,1);
            }
          }
        }
      }
      else if (lVar3 == 2) {
        func_0x00010c196f20(*(undefined8 *)(param_1 + 0x210),param_2,0,lVar2);
        func_0x00010be28b20(param_1,param_2,lVar2,0);
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(lStack_58);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10722947c; end: 10722950f;  */

undefined8 FUN_10722947c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3a60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf267e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107229510; end: 107229627; -[SCSingleStoryOperaDataSource _handleMediaStateIdempotencyChangeRequest:] */

void FUN_107229510(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 2) {
    lVar2 = *(long *)(param_1 + 0x200);
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107229628;
    puStack_58 = &UNK_1109939b0;
    lStack_50 = param_1;
    _objc_retain(param_3);
    lVar1 = lVar2;
    lStack_48 = param_3;
    func_0x00010bfb2040(lVar2,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x210);
      func_0x00010bf98b00(lVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        func_0x00010c196f20(*(undefined8 *)(param_1 + 0x210),param_2,0,lVar1);
        func_0x00010be28b20(param_1,param_2,lVar1,0);
      }
    }
    _objc_release(lVar1);
    _objc_release(lStack_48);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107229628; end: 1072296bb;  */

undefined8 FUN_107229628(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3a60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf267e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1072296bc; end: 10722974b; -[SCSingleStoryOperaDataSource _componentIdFromClientId:] */

void FUN_1072296bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 200);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x000108ea5f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 200),param_2,lVar1,param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10722974c; end: 1072298fb; -[SCSingleStoryOperaDataSource _shouldRegeneratePagePropertiesForStorySnap:] */

uint FUN_10722974c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x100);
  func_0x00010bf1f440();
  uVar8 = *(ulong *)(param_1 + 0x68);
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (iVar1 != 0) {
    uVar3 = uVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = uVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar3 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x00010bf46560(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c07c500();
        uVar10 = *(undefined8 *)(param_1 + 0x200);
        uVar7 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x000107d2b30c(param_3,uVar10,uVar7,*(undefined8 *)(param_1 + 0xe0),
                            *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x30));
        uVar9 = (uint)uVar6 ^ (uint)uVar2;
        _objc_release(uVar7);
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
      goto LAB_1072298d0;
    }
  }
  uVar9 = 0;
LAB_1072298d0:
  _objc_release(uVar8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1072298fc; end: 107229b4f; -[SCSingleStoryOperaDataSource _pagePropertiesForError:] */

void FUN_1072298fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 == 0) goto LAB_107229b30;
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba158;
  func_0x00010bf87dc0(PTR_PTR_1126ba158);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    _objc_release(puVar2);
    _objc_release(lVar1);
LAB_1072299fc:
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    ppuVar6 = &PTR____CFConstantStringClassReference_110e49a58;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e49a38;
    ppuVar4 = &PTR____CFConstantStringClassReference_110db3738;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf3ec40();
    _objc_release(puVar2);
    _objc_release(lVar1);
    if (lVar3 != 0x66) goto LAB_1072299fc;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar2);
    ppuVar6 = &PTR____CFConstantStringClassReference_110e49a98;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e49a78;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  }
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(ppuVar4);
  func_0x00010c1d0640(puVar2);
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(ppuVar5);
  func_0x00010bcbeaa8(ppuVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(ppuVar6);
LAB_107229b30:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107229b50; end: 107229b57; -[SCSingleStoryOperaDataSource rootViewModel] */

undefined8 FUN_107229b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 107229b58; end: 107229b5f; -[SCSingleStoryOperaDataSource lastViewModel] */

undefined8 FUN_107229b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 107229b60; end: 107229b67; -[SCSingleStoryOperaDataSource generatedViewModels] */

undefined8 FUN_107229b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 107229b68; end: 107229b97; -[SCSingleStoryOperaDataSource setGeneratedViewModels:] */

void FUN_107229b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107229b98; end: 107229baf; -[SCSingleStoryOperaDataSource delegate] */

void FUN_107229b98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107229bb0; end: 107229bbb; -[SCSingleStoryOperaDataSource setDelegate:] */

void FUN_107229bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1f8,param_3);
  return;
}



/* Entry: 107229bbc; end: 107229bc3; -[SCSingleStoryOperaDataSource storiesPlaybackSequence] */

undefined8 FUN_107229bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 107229bc4; end: 107229bf3; -[SCSingleStoryOperaDataSource setStoriesPlaybackSequence:] */

void FUN_107229bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107229bf4; end: 107229c0b; -[SCSingleStoryOperaDataSource fanPassUpsellPlaylistFiltering] */

void FUN_107229bf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107229c0c; end: 107229c17; -[SCSingleStoryOperaDataSource setFanPassUpsellPlaylistFiltering:] */

void FUN_107229c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x208,param_3);
  return;
}



/* Entry: 107229c18; end: 107229c1f; -[SCSingleStoryOperaDataSource storiesMediaManager] */

undefined8 FUN_107229c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



/* Entry: 107229c20; end: 107229c4f; -[SCSingleStoryOperaDataSource setStoriesMediaManager:] */

void FUN_107229c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107229c50; end: 107229c67; -[SCSingleStoryOperaDataSource playlistItemController] */

void FUN_107229c50(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107229c68; end: 107229c73; -[SCSingleStoryOperaDataSource setPlaylistItemController:] */

void FUN_107229c68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x218,param_3);
  return;
}



/* Entry: 107229c74; end: 107229f1f; -[SCSingleStoryOperaDataSource .cxx_destruct] */

void FUN_107229c74(long param_1)

{
  _objc_destroyWeak(param_1 + 0x218);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_destroyWeak(param_1 + 0x208);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_destroyWeak(param_1 + 0x1f8);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
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
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107229f20; end: 10722a7fb; -[SCStoriesOperaDataSource initWithViewingType:userSession:storiesPlaybackDataProvider:storiesMediaCoordinator:viewLocation:playSingleSnap:isJoinedPlayback:initialClientId:type:customStoriesDataFetcher:snapchatterFetcher:snapchatterPublicInfoFetcher:snapchattersSynchronousDataFetcher:shakePromptHelper:debugViewer:storiesCachedSummaryInfoProvider:readReceiptCoordinator:circumstanceEngine:firstStoryId:impalaLegacyServices:networkConnectivityMonitor:lazyEventsController:lazyDataFetcher:grapheneMetricsEmitter:grapheneRegistry:musicContentRestrictionServices:imageDownloader:snapchatterUserInfoProvider:playbackAssetRepository:crashLogger:offPlatformLinkGenerationService:storiesConfigProvider:profilesProvider:spotlightDataFetcher:p2pOptions:pageType:snapchatterObservableRepository:subscriptionsInfoProvider:creatorInfoProvider:] */

undefined8 *
FUN_107229f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             ulong param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
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
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain();
  _objc_retain(param_33);
  _objc_retain();
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_80 = PTR_PTR_1126f8ca0;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_32);
    uVar3 = puVar2[1];
    puVar2[1] = param_32;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[3];
    puVar2[3] = param_6;
    _objc_release(uVar3);
    puVar2[0x35] = param_3;
    _objc_retain(param_4);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_4;
    _objc_release(uVar3);
    puVar2[5] = param_7;
    *(undefined1 *)(puVar2 + 6) = param_8;
    *(undefined1 *)((long)puVar2 + 0x31) = param_9;
    _objc_retain(param_11);
    uVar3 = puVar2[7];
    puVar2[7] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[8];
    puVar2[8] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[9];
    puVar2[9] = param_22;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d53b0;
    _objc_alloc();
    func_0x00010c05e840();
    uVar3 = puVar2[0x32];
    puVar2[0x32] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[10];
    puVar2[10] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xb];
    puVar2[0xb] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b2d18;
    _objc_alloc();
    func_0x00010c01c860();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c2480;
    _objc_alloc();
    func_0x00010c04d1e0();
    uVar3 = puVar2[4];
    puVar2[4] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_16;
    _objc_release(uVar3);
    puVar2[0x17] = param_17;
    _objc_retain(param_18);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[0x20];
    puVar2[0x20] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_33);
    uVar3 = puVar2[0x24];
    puVar2[0x24] = param_33;
    _objc_release(uVar3);
    uVar6 = puVar2[5];
    uVar5 = param_21;
    FUN_10723db40(param_21,param_7);
    *(char *)((long)puVar2 + 0x131) = (char)uVar5;
    uVar5 = param_21;
    func_0x00010723ddac(param_21,param_7);
    *(char *)((long)puVar2 + 0x132) = (char)uVar5;
    _objc_retain(param_35);
    uVar3 = puVar2[0x27];
    puVar2[0x27] = param_35;
    _objc_release(uVar3);
    uVar5 = param_21;
    func_0x00010723df0c(param_21,puVar2[5]);
    uVar1 = 1;
    if (((*(byte *)((long)puVar2 + 0x131) & 1) == 0) && ((uVar5 & 1) == 0)) {
      func_0x000108534aa8(uVar6);
      uVar5 = param_21;
      func_0x00010723de5c(param_21,uVar6);
      uVar1 = (undefined1)uVar5;
    }
    *(undefined1 *)(puVar2 + 0x26) = uVar1;
    _objc_retain(param_34);
    uVar3 = puVar2[0x25];
    puVar2[0x25] = param_34;
    _objc_release(uVar3);
    _objc_retain(param_36);
    uVar3 = puVar2[0x28];
    puVar2[0x28] = param_36;
    _objc_release(uVar3);
    _objc_retain(param_37);
    uVar3 = puVar2[0x29];
    puVar2[0x29] = param_37;
    _objc_release(uVar3);
    _objc_retain(param_38);
    uVar3 = puVar2[0x2a];
    puVar2[0x2a] = param_38;
    _objc_release(uVar3);
    _objc_retain(param_40);
    uVar3 = puVar2[0x2e];
    puVar2[0x2e] = param_40;
    _objc_release(uVar3);
    _objc_retain(param_41);
    uVar3 = puVar2[0x2f];
    puVar2[0x2f] = param_41;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar2[0x30];
    puVar2[0x30] = param_42;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_21);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_21);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x2c];
    puVar2[0x2c] = puVar4;
    _objc_release(uVar3);
    puVar2[0x2d] = param_39;
    _objc_release(param_21);
    _objc_release(param_21);
  }
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
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
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 10722a7fc; end: 10722a87b;  */

void FUN_10722a7fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110ea3058,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 10722a87c; end: 10722a9af; -[SCStoriesOperaDataSource updateStoryIdsList:] */

void FUN_10722a87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x1a0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x1a0;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c2889a0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10722a9b0; end: 10722ab5f;  */

long FUN_10722a9b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0d3c80();
    _objc_retain();
    func_0x00010bfade80(param_2);
    _objc_retain(lVar3);
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar5 = lVar2;
        func_0x00010c1014e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010bf06bc0(param_2);
        }
        _objc_release(lVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  iVar9 = (int)*(undefined8 *)(param_2 + 0x20);
  lVar2 = lVar6;
  func_0x00010be36bc0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(lVar2);
  lVar2 = lVar6;
  if (iVar9 == 0) {
    if (lVar6 != *(long *)(param_2 + 0x28)) {
      lVar7 = 0;
      goto LAB_10722ac20;
    }
    func_0x00010c27dd80(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0720c0();
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be36bc0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar8);
    lVar7 = 1;
  }
  _objc_release(lVar2);
LAB_10722ac20:
  _objc_release(lVar6);
  return lVar7;
}



/* Entry: 10722ab60; end: 10722ac3b;  */

long FUN_10722ab60(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  _objc_retain(param_2);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar1 = param_2;
  func_0x00010be36bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(lVar1);
  lVar1 = param_2;
  if (iVar4 == 0) {
    if (param_2 != *(long *)(param_1 + 0x28)) {
      lVar3 = 0;
      goto LAB_10722ac20;
    }
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be36bc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2);
    lVar3 = 1;
  }
  _objc_release(lVar1);
LAB_10722ac20:
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 10722ac3c; end: 10722acaf; -[SCStoriesOperaDataSource requestCallbackWhenViewModelConnectionIsStable:] */

void FUN_10722ac3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x198;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    param_1 = param_1 + 0x198;
    _objc_loadWeakRetained(param_1);
    func_0x00010c134d60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


