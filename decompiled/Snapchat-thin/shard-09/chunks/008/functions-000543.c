/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10720fc3c; end: 10720fe5b; -[SCLegacyStoriesSharingSession didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10720fc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  _objc_opt_class(uVar2);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126b4030;
    func_0x00010bf5b2c0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      puVar5 = PTR_PTR_1126b4030;
      func_0x00010bf5b2e0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      if ((int)uVar3 == 0) goto LAB_10720fe0c;
    }
    else {
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126b4038;
    func_0x00010bf5b6e0(PTR_PTR_1126b4038);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b4040;
    _objc_opt_class(PTR_PTR_1126b4040);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar1 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10720fe5c;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
  }
LAB_10720fe0c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720fe5c; end: 10720fe9b;  */

void FUN_10720fe5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c079480(uVar2);
  func_0x00010beba280(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10720fe9c; end: 10720ff37; -[SCLegacyStoriesSharingSession _photoPermissionCoordinator] */

void FUN_10720fe9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bc858;
  _objc_opt_class(PTR_PTR_1126bc858);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110993260);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10720ff38; end: 10720ff3f;  */

void FUN_10720ff38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fb4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_photoPermissionCoordinator_11261c750);
  return;
}



/* Entry: 10720ff40; end: 1072100db; -[SCLegacyStoriesSharingSession _updateFavoriteStatusForPage:params:] */

void FUN_10720ff40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x000107b2883c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107b288cc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010bfa1100(PTR_PTR_1126b5bf0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf1f3c0(uVar5);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010bf1f3c0();
  uVar8 = *(undefined8 *)(param_1 + 0x100);
  uVar5 = uVar1;
  func_0x00010c25a6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c082620();
  if ((int)puVar4 == 0) {
    func_0x000107b28768(uVar8,uVar2,uVar3,uVar7,&PTR___NSConcreteGlobalBlock_1109932a0);
  }
  else {
    func_0x000107b28694(uVar8,uVar2,uVar3,uVar7,&PTR___NSConcreteGlobalBlock_110993280);
  }
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1072100dc; end: 1072100e3;  */

void FUN_1072100dc(void)

{
  return;
}



/* Entry: 1072100e4; end: 1072100eb; -[SCLegacyStoriesSharingSession trackingId] */

undefined8 FUN_1072100e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 1072100ec; end: 1072100f3; -[SCLegacyStoriesSharingSession setTrackingId:] */

void FUN_1072100ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1072100f4; end: 1072102cf; -[SCLegacyStoriesSharingSession .cxx_destruct] */

void FUN_1072100f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
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
  _objc_storeStrong(param_1 + 0xe8,0);
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
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1072102d0; end: 1072102d7;  */

void FUN_1072102d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyShareSender_112674660);
  return;
}



/* Entry: 1072102d8; end: 10721096f; -[SCLegacyStoriesViewingSession initWithUserSession:startChatDelegate:storyPlayMode:recentUpdateFriendNameList:viewLocation:sortOrderId:viewingType:storiesViewingContext:viewLocationPosition:storyViewingActionContext:playSource:startingEntryEvent:navigationServices:storySessionId:readReceiptCoordinator:storyAnalyticsOptions:safetyReportScopeExposer:externalLinkSendingService:grapheneRegistry:snapProShareMessageSender:isSavedStorySharingEnabled:boostCoordinator:circumstanceEngine:notificationOSSettingsRetriever:temporaryFileWriter:storiesMediaCoordinator:offPlatformLinkGenerationService:spotlightShareSender:snapchattersSynchronousDataFetcher:storiesUsageLogger:lazyDiscoverFeedEventsController:lazyDiscoverFeedInteractionHistoryManager:] */

undefined8 *
FUN_1072102d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_15);
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
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  puStack_70 = PTR_PTR_1126f8c68;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar6 = puVar2[0x3d];
    puVar3 = puVar2;
    func_0x00010c127820(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar6);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar6 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar6);
    puVar2[0x31] = param_16;
    _objc_retain(param_33);
    uVar6 = puVar2[0x27];
    puVar2[0x27] = param_33;
    _objc_release(uVar6);
    uVar6 = param_33;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[2];
    puVar2[2] = uVar6;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[7];
    puVar2[7] = puVar4;
    _objc_release(uVar6);
    puVar2[0x34] = 0;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[0x35];
    puVar2[0x35] = puVar4;
    _objc_release(uVar6);
    _objc_storeWeak(puVar2 + 3,param_4);
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[4] = 0;
    *(bool *)(puVar2 + 0x2a) = param_5 == 1;
    *(bool *)((long)puVar2 + 0x151) = param_5 == 3;
    puVar2[0x13] = param_5;
    puVar2[0x39] = param_13;
    puVar2[0x3a] = param_14;
    uVar6 = param_6;
    func_0x00010bf51e00();
    uVar5 = puVar2[0x36];
    puVar2[0x36] = uVar6;
    _objc_release(uVar5);
    puVar2[0x2d] = param_7;
    puVar2[0x2e] = param_7;
    puVar2[0x37] = 0;
    _objc_retain(param_8);
    uVar6 = puVar2[0x38];
    puVar2[0x38] = param_8;
    _objc_release(uVar6);
    puVar2[0x2b] = param_9;
    puVar2[0x2c] = param_10;
    puVar2[0x2f] = param_11;
    puVar2[0x33] = param_12;
    _objc_retain(param_15);
    uVar6 = puVar2[0xe];
    puVar2[0xe] = param_15;
    _objc_release(uVar6);
    puVar2[0x3b] = 0xffffffffffffffff;
    _objc_retain(param_17);
    uVar6 = puVar2[0x19];
    puVar2[0x19] = param_17;
    _objc_release(uVar6);
    _objc_retain(param_18);
    uVar6 = puVar2[0x3c];
    puVar2[0x3c] = param_18;
    _objc_release(uVar6);
    _objc_retain(param_19);
    uVar6 = puVar2[0x1a];
    puVar2[0x1a] = param_19;
    _objc_release(uVar6);
    _objc_retain(param_20);
    uVar6 = puVar2[0x1b];
    puVar2[0x1b] = param_20;
    _objc_release(uVar6);
    _objc_retain(param_21);
    uVar6 = puVar2[0x1c];
    puVar2[0x1c] = param_21;
    _objc_release(uVar6);
    _objc_retain(param_22);
    uVar6 = puVar2[0x1d];
    puVar2[0x1d] = param_22;
    _objc_release(uVar6);
    *(undefined1 *)(puVar2 + 0x1e) = param_23;
    _objc_retain(param_25);
    uVar6 = puVar2[0x1f];
    puVar2[0x1f] = param_25;
    _objc_release(uVar6);
    _objc_retain(param_26);
    uVar6 = puVar2[0x20];
    puVar2[0x20] = param_26;
    _objc_release(uVar6);
    _objc_retain(param_27);
    uVar6 = puVar2[0x21];
    puVar2[0x21] = param_27;
    _objc_release(uVar6);
    _objc_retain(param_28);
    uVar6 = puVar2[0x22];
    puVar2[0x22] = param_28;
    _objc_release(uVar6);
    _objc_retain(param_29);
    uVar6 = puVar2[0x23];
    puVar2[0x23] = param_29;
    _objc_release(uVar6);
    _objc_retain(param_30);
    uVar6 = puVar2[0x24];
    puVar2[0x24] = param_30;
    _objc_release(uVar6);
    _objc_retain(param_31);
    uVar6 = puVar2[0x25];
    puVar2[0x25] = param_31;
    _objc_release(uVar6);
    _objc_retain(param_32);
    uVar6 = puVar2[0x26];
    puVar2[0x26] = param_32;
    _objc_release(uVar6);
    _objc_retain(param_34);
    uVar6 = puVar2[0x28];
    puVar2[0x28] = param_34;
    _objc_release(uVar6);
    _objc_retain(param_35);
    uVar6 = puVar2[0x29];
    puVar2[0x29] = param_35;
    _objc_release(uVar6);
    uVar1 = (undefined1)puVar2[0x20];
    func_0x00010bf1f440();
    *(undefined1 *)(puVar2 + 0x12) = uVar1;
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
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
  }
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
  _objc_release(param_15);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107210970; end: 107210973; -[SCLegacyStoriesViewingSession startSession] */

void FUN_107210970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed81f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFirstPagePropertyWithTool_112593a20);
  return;
}



/* Entry: 107210974; end: 107210a27; -[SCLegacyStoriesViewingSession _updateFirstPagePropertyWithTooltipIfNecessary] */

void FUN_107210974(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010723fe7c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdb860();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = param_1 + 0x1f0;
  _objc_loadWeakRetained(lVar4);
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010bfb1d60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288440(lVar4,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107210a28; end: 107210b53; -[SCLegacyStoriesViewingSession stopSession] */

void FUN_107210a28(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [128];
  long lStack_180;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x69) = 1;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar2 = *(long *)(param_1 + 0x1a8);
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar10 = *plStack_100;
      do {
        lVar12 = 0;
        do {
          if (*plStack_100 != lVar10) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010c256a80(*(undefined8 *)(lStack_108 + lVar12 * 8),param_2,0,
                              *(undefined1 *)(param_1 + 0x78));
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar2);
    func_0x00010be593e0();
    if (*(char *)(param_1 + 0x90) == '\x01') {
      func_0x00010becb000();
      lVar3 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar3;
  if ((*(byte *)(lVar3 + 0x69) & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x69) = 1;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lVar4 = *(long *)(lVar3 + 0x1a8);
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_230;
      do {
        lVar12 = 0;
        do {
          if (*plStack_230 != lVar10) {
            _objc_enumerationMutation(lVar4);
          }
          uVar11 = *(undefined8 *)(lStack_238 + lVar12 * 8);
          uVar1 = *(undefined1 *)(lVar3 + 0x78);
          lVar5 = lVar3 + 0x200;
          _objc_loadWeakRetained(lVar5);
          lVar6 = lVar5;
          func_0x00010c0688c0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c089060();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f6060(uVar11,param_2,uVar1,lVar7);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          lVar12 = lVar12 + 1;
        } while (lVar2 != lVar12);
        lVar2 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_240,auStack_200,0x10);
      } while (lVar2 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(long *)(lVar4 + 0x168) - 0x54;
  if ((0x13 < uVar9 || (1L << (uVar9 & 0x3f) & 0x80021U) == 0) && *(long *)(lVar4 + 0x168) != 7) {
    func_0x00010c0b1220(*(undefined8 *)(lVar4 + 0x10),param_2,lVar4);
  }
  func_0x00010bf3c220(*(undefined8 *)(lVar4 + 0x10));
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar4 + 0x1a8);
  *(undefined **)(lVar4 + 0x1a8) = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 107210b54; end: 107210cbf; -[SCLegacyStoriesViewingSession _pauseSession] */

void FUN_107210b54(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x69) = 1;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar2 = *(long *)(param_1 + 0x1a8);
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar2);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          uVar1 = *(undefined1 *)(param_1 + 0x78);
          lVar4 = param_1 + 0x200;
          _objc_loadWeakRetained(lVar4);
          lVar5 = lVar4;
          func_0x00010c0688c0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c089060();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f6060(uVar9,param_2,uVar1,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          lVar11 = lVar11 + 1;
        } while (lVar3 != lVar11);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(long *)(lVar2 + 0x168) - 0x54;
  if ((0x13 < uVar8 || (1L << (uVar8 & 0x3f) & 0x80021U) == 0) && *(long *)(lVar2 + 0x168) != 7) {
    func_0x00010c0b1220(*(undefined8 *)(lVar2 + 0x10),param_2,lVar2);
  }
  func_0x00010bf3c220(*(undefined8 *)(lVar2 + 0x10));
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + 0x1a8);
  *(undefined **)(lVar2 + 0x1a8) = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107210cc0; end: 107210d3f; -[SCLegacyStoriesViewingSession _logStoryStoryViewSession] */

void FUN_107210cc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_1 + 0x168) - 0x54;
  if ((0x13 < uVar3 || (1L << (uVar3 & 0x3f) & 0x80021U) == 0) && *(long *)(param_1 + 0x168) != 7) {
    func_0x00010c0b1220(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  }
  func_0x00010bf3c220(*(undefined8 *)(param_1 + 0x10));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined **)(param_1 + 0x1a8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107210d40; end: 107210de7; -[SCLegacyStoriesViewingSession _incrementTotalViewedStoriesCount:] */

void FUN_107210d40(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x1a0) + 1;
  func_0x00010723fe7c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22fca0();
  _objc_release(lVar1);
  _objc_release(param_1);
  if ((int)lVar2 != 0) {
    func_0x00010723fe7c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec7c0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107210de8; end: 107210f7b; -[SCLegacyStoriesViewingSession _shouldShowCheetahSwipeLeftInterstitial:] */

bool FUN_107210de8(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = param_3;
  _objc_retain();
  func_0x00010723fe7c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c157f40();
  if (uVar4 < 5) {
    bVar1 = false;
LAB_107210f14:
    _objc_release(uVar3);
  }
  else {
    func_0x00010723fe7c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c22fca0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar6 == 0) {
      bVar1 = false;
      goto LAB_107210f2c;
    }
    uVar3 = param_1 + 0x210;
    _objc_loadWeakRetained(uVar3);
    uVar4 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c101420(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar7 = *(long *)(param_1 + 0x168);
    if ((lVar7 == 0x24) || (lVar7 == 0x1e)) {
      uVar3 = uVar2;
      func_0x00010bfce400(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar4 == uVar2;
    }
    else {
      bVar1 = false;
    }
    if (((lVar7 == 0x24) || (lVar7 == 0x1e)) &&
       ((_objc_release(), lVar7 == 0x24 || (lVar7 == 0x1e)))) goto LAB_107210f14;
  }
  _objc_release(uVar2);
LAB_107210f2c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107210f7c; end: 107210fc3; -[SCLegacyStoriesViewingSession _markCheetahSwipeLeftInterstitialCompleted] */

void FUN_107210f7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010723fe7c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1907a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107210fc4; end: 107211087; -[SCLegacyStoriesViewingSession extraPropertiesForStory:] */

void FUN_107210fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf9eac0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be0d9e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef7f60(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107211088; end: 10721122f; -[SCLegacyStoriesViewingSession _extraToolTipsPropertiesForStories:] */

void FUN_107211088(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010723fe7c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfdb860();
  if ((int)puVar4 == 0) {
    lVar5 = param_1 + 0x1f0;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bfb1d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (param_3 == lVar6) {
      puVar2 = PTR_PTR_1126c9ae8;
      func_0x00010bfc1ca0(PTR_PTR_1126c9ae8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107211198;
    }
  }
  else {
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  lVar5 = param_1;
  func_0x00010beb5d60(param_1,param_2,param_3);
  if ((int)lVar5 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126c9ae8;
    func_0x00010bfc1c80(PTR_PTR_1126c9ae8);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107211198:
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f0d278);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x6c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f0d298);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107211230; end: 107211623; -[SCLegacyStoriesViewingSession registeredEventsForOperaSession] */

void FUN_107211230(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined **ppuVar32;
  long lVar33;
  undefined **ppuVar34;
  ulong uVar35;
  long in_x4;
  undefined8 uVar36;
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
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9c10;
  puStack_140 = puVar1;
  func_0x00010c0e92a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9c10;
  puStack_138 = puVar2;
  func_0x00010bf3dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_130 = puVar3;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_128 = puVar4;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_120 = puVar5;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_118 = puVar6;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2338;
  puStack_110 = puVar7;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2338;
  puStack_108 = puVar8;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b6128;
  puStack_100 = puVar9;
  func_0x00010c08c2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c95c8;
  puStack_f8 = puVar10;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c9460;
  puStack_f0 = puVar11;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c9460;
  puStack_e8 = puVar12;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9460;
  puStack_e0 = puVar13;
  func_0x00010c0f2600();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9460;
  puStack_d8 = puVar14;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c9460;
  puStack_d0 = puVar15;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c9460;
  puStack_c8 = puVar16;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2330;
  puStack_c0 = puVar17;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b2338;
  puStack_b8 = puVar18;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9c10;
  puStack_b0 = puVar19;
  func_0x00010bf1d800();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126c9c10;
  puStack_a8 = puVar20;
  func_0x00010bf3de20();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126ca2c0;
  puStack_a0 = puVar21;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126c9a10;
  puStack_98 = puVar22;
  func_0x00010c29dbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126d5300;
  puStack_90 = puVar23;
  func_0x00010c06a5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2ea8;
  puStack_88 = puVar24;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126b2ea8;
  puStack_80 = puVar25;
  func_0x00010c2685e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar34 = &puStack_140;
  uVar35 = 0x1a;
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
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar34);
  _objc_retain(uVar35);
  _objc_retain(in_x4);
  func_0x00010bed6560(puVar1);
  uVar28 = uVar35;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  puVar2 = PTR_PTR_1126c6d90;
  _objc_opt_class(PTR_PTR_1126c6d90);
  uVar30 = uVar29;
  _objc_opt_isKindOfClass(uVar29,puVar2);
  uVar28 = uVar29;
  if ((uVar30 & 1) == 0) {
    uVar28 = 0;
  }
  _objc_retain(uVar28);
  _objc_release(uVar29);
  uVar29 = uVar35;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  uVar31 = uVar30;
  func_0x00010010fab4(uVar30,PTR_DAT_1126a5998);
  uVar29 = uVar30;
  if ((uVar31 & 1) == 0) {
    uVar29 = 0;
  }
  _objc_retain(uVar29);
  _objc_release(uVar30);
  puVar2 = PTR_PTR_1126c9a58;
  if (uVar28 == 0 && uVar29 == 0) goto LAB_107211d8c;
  uVar30 = uVar35;
  func_0x00010c118b40(uVar35);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf17ae0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar34;
    func_0x00010c0720c0();
    if (((ulong)ppuVar32 & 1) != 0) {
LAB_107211804:
      _objc_release(puVar2);
      goto LAB_10721180c;
    }
    puVar3 = PTR_PTR_1126c9a10;
    func_0x00010c29dbc0(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar34;
    func_0x00010c0720c0();
    if (((ulong)ppuVar32 & 1) != 0) {
LAB_1072117f8:
      _objc_release(puVar3);
      goto LAB_107211804;
    }
    puVar4 = PTR_PTR_1126b2ea8;
    func_0x00010c268600(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar34;
    func_0x00010c0720c0();
    if (((ulong)ppuVar32 & 1) != 0) {
      _objc_release(puVar4);
      goto LAB_1072117f8;
    }
    puVar5 = PTR_PTR_1126b2ea8;
    func_0x00010c2685e0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar34;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar30);
    if (((ulong)ppuVar32 & 1) == 0) goto LAB_107211d8c;
  }
  else {
LAB_10721180c:
    _objc_release(uVar30);
  }
  uVar30 = uVar29;
  func_0x00010c07c580();
  if ((int)uVar30 != 0) {
    func_0x00010beaf6c0(puVar1);
  }
  if (*(long *)(puVar1 + 0x58) == 0) {
    func_0x00010beafb80(puVar1);
  }
  if (*(long *)(puVar1 + 0xb0) == 0) {
    func_0x00010beb0220(puVar1);
  }
  if (uVar28 != 0) {
    func_0x00010beab800(puVar1);
  }
  uVar30 = uVar35;
  func_0x00010c118b40(uVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar31);
  _objc_release(uVar30);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar32 != 0) {
    *(undefined8 *)(puVar1 + 400) = 5;
    puVar2 = puVar1;
    func_0x00010be749e0();
    *(undefined **)(puVar1 + 0xb8) = puVar2;
    func_0x00010bedc6e0(puVar1);
    goto LAB_107211d8c;
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2340;
  if ((int)ppuVar32 != 0) {
    uVar30 = uVar35;
    func_0x00010c118b40(uVar35);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    puVar1[0x153] = (char)puVar2;
    _objc_release(uVar30);
    if ((puVar1[0x78] & 1) == 0) {
      puVar2 = puVar1;
      func_0x00010bf5ed40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf78060();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b2340;
    uVar30 = uVar35;
    func_0x00010c118b40(uVar35);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60();
    puVar1[0x6a] = (char)puVar2;
    _objc_release(uVar30);
    if (puVar1[0x6a] != '\x01') goto LAB_107211d8c;
    *(long *)(puVar1 + 0x1b8) = *(long *)(puVar1 + 0x1b8) + 1;
    func_0x00010bf5ed40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250a80();
    puVar2 = puVar1;
    goto LAB_1072119e0;
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar32 != 0) {
    puVar1[0x6a] = 0;
    puVar3 = puVar1;
    func_0x00010bf5ed40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2340;
    uVar30 = uVar35;
    func_0x00010c118b40(uVar35);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0(puVar2);
    func_0x00010c250a40(puVar3);
    _objc_release(uVar30);
    _objc_release(puVar3);
    uVar30 = uVar29;
    func_0x00010c074fe0();
    if ((int)uVar30 == 0) goto LAB_107211d8c;
LAB_107211af4:
    func_0x00010be00800(puVar1);
    goto LAB_107211d8c;
  }
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010bfe8ca0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if (((ulong)ppuVar32 & 1) != 0) goto LAB_107211d8c;
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar32 != 0) goto LAB_107211af4;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar32 != 0) {
    puVar2 = puVar1 + 0x200;
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c27dd80();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar5 == (undefined *)0x5) {
      puVar2 = puVar1;
      func_0x00010bf5ed40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23e420();
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bf5ed40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256ae0();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf9ba60();
    if (puVar2 + -0xc < (undefined *)0x2) {
      uVar36 = 2;
    }
    else if (puVar2 == (undefined *)0x7) {
      uVar36 = 1;
    }
    else if (puVar2 == (undefined *)0x2) {
      uVar36 = 3;
    }
    else {
      uVar36 = 0;
    }
    *(undefined8 *)(puVar1 + 400) = uVar36;
    goto LAB_107211d8c;
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bf3df20(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar32 != 0) {
    func_0x00010c2569c0(puVar1);
    goto LAB_107211d8c;
  }
  puVar2 = PTR_PTR_1126b6128;
  func_0x00010c08c2c0(PTR_PTR_1126b6128);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar34;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar32 == 0) {
    puVar2 = PTR_PTR_1126c95c8;
    func_0x00010c09d2c0(PTR_PTR_1126c95c8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar34;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)ppuVar32 == 0) {
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c0f2600(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar32 = ppuVar34;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)ppuVar32 == 0) {
        puVar2 = PTR_PTR_1126c9460;
        func_0x00010c0f25a0(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        ppuVar32 = ppuVar34;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)ppuVar32 != 0) {
          func_0x00010bf5ed40(puVar1);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107211e80;
        }
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf17ae0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar32 = ppuVar34;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)ppuVar32 != 0) {
          func_0x00010c2569c0(puVar1);
          goto LAB_107211d8c;
        }
        puVar2 = PTR_PTR_1126c9c10;
        func_0x00010c0e92a0(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar32 = ppuVar34;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)ppuVar32 != 0) {
          puVar2 = puVar1 + 0x200;
          _objc_loadWeakRetained(puVar2);
          puVar3 = puVar2;
          func_0x00010c29e000();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          _objc_opt_class(puVar1);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f6200(puVar3);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126c9ae8;
          uVar30 = uVar35;
          func_0x00010c118b40(uVar35);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4bb40();
          _objc_release(uVar30);
          if ((int)puVar2 == 0) goto LAB_107211d8c;
LAB_107211f9c:
          func_0x00010be5d280(puVar1);
          goto LAB_107211d8c;
        }
        puVar2 = PTR_PTR_1126c9c10;
        func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar32 = ppuVar34;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)ppuVar32 == 0) {
          puVar2 = PTR_PTR_1126c9c10;
          func_0x00010bf1d800(PTR_PTR_1126c9c10);
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar34;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)ppuVar32 != 0) {
            puVar1[0x6c] = 1;
            goto LAB_10721214c;
          }
          puVar2 = PTR_PTR_1126c9c10;
          func_0x00010bf3de20(PTR_PTR_1126c9c10);
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar34;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)ppuVar32 != 0) {
            func_0x00010723fe7c();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a6c40();
            _objc_release(puVar3);
            _objc_release(puVar2);
            func_0x00010723fe7c();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fa8a0();
            _objc_release(puVar3);
            _objc_release(puVar2);
            puVar2 = puVar1 + 0x200;
            _objc_loadWeakRetained(puVar2);
            puVar3 = puVar2;
            func_0x00010c08f5e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18ebe0();
            _objc_release(puVar3);
            _objc_release(puVar2);
            puVar1[0x6c] = 0;
            goto LAB_10721214c;
          }
          puVar2 = PTR_PTR_1126c9460;
          func_0x00010c0f25e0(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar34;
          func_0x00010c0720c0();
          if (((ulong)ppuVar32 & 1) != 0) {
LAB_1072121e0:
            _objc_release(puVar2);
LAB_1072121e8:
            if ((puVar1[0x151] & 1) == 0) {
              puVar2 = puVar1 + 0x200;
              _objc_loadWeakRetained();
              puVar3 = puVar2;
              func_0x00010c0688c0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c089060();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c27dd80();
              if (puVar5 == (undefined *)0x7) {
                _objc_release(puVar4);
                _objc_release(puVar3);
                _objc_release(puVar2);
              }
              else {
                puVar5 = puVar1 + 0x200;
                _objc_loadWeakRetained();
                puVar6 = puVar5;
                func_0x00010c0688c0();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                func_0x00010c089060();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                func_0x00010c27dd80();
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar5);
                _objc_release(puVar4);
                _objc_release(puVar3);
                _objc_release(puVar2);
                if (puVar8 != (undefined *)0x8) goto LAB_1072122bc;
              }
              *(undefined8 *)(puVar1 + 0xb8) = 3;
            }
LAB_1072122bc:
            puVar2 = puVar1 + 0x200;
            _objc_loadWeakRetained();
            puVar3 = puVar2;
            func_0x00010c0688c0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c089060();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c27dd80();
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(puVar2);
            if (puVar5 != (undefined *)0x7) goto LAB_107211d8c;
            goto LAB_107211f9c;
          }
          puVar3 = PTR_PTR_1126c9460;
          func_0x00010c0f2620(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar34;
          func_0x00010c0720c0();
          if (((ulong)ppuVar32 & 1) != 0) {
LAB_1072121d8:
            _objc_release(puVar3);
            goto LAB_1072121e0;
          }
          puVar4 = PTR_PTR_1126c9460;
          func_0x00010c0f2580(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar34;
          func_0x00010c0720c0();
          if ((int)ppuVar32 != 0) {
            _objc_release(puVar4);
            goto LAB_1072121d8;
          }
          puVar5 = PTR_PTR_1126c9460;
          func_0x00010c0f2560(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar34;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if (((ulong)ppuVar32 & 1) != 0) goto LAB_1072121e8;
          puVar2 = PTR_PTR_1126ca2c0;
          func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar34;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)ppuVar32 == 0) {
            puVar2 = PTR_PTR_1126c9a10;
            func_0x00010c29dbc0(PTR_PTR_1126c9a10);
            _objc_retainAutoreleasedReturnValue();
            ppuVar32 = ppuVar34;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)ppuVar32 == 0) {
              puVar2 = PTR_PTR_1126d5300;
              func_0x00010c06a5c0(PTR_PTR_1126d5300);
              _objc_retainAutoreleasedReturnValue();
              ppuVar32 = ppuVar34;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)ppuVar32 == 0) {
                puVar2 = PTR_PTR_1126b2ea8;
                func_0x00010c268600(PTR_PTR_1126b2ea8);
                _objc_retainAutoreleasedReturnValue();
                ppuVar32 = ppuVar34;
                func_0x00010c0720c0();
                if ((int)ppuVar32 == 0) {
                  puVar3 = PTR_PTR_1126b2ea8;
                  func_0x00010c2685e0(PTR_PTR_1126b2ea8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar32 = ppuVar34;
                  func_0x00010c0720c0();
                  _objc_release(puVar3);
                  _objc_release(puVar2);
                  if ((int)ppuVar32 == 0) goto LAB_107211d8c;
                }
                else {
                  _objc_release(puVar2);
                }
                func_0x00010c291d20(puVar1);
              }
              else {
                *(undefined8 *)(puVar1 + 0xc0) = 0x22d52a;
              }
              goto LAB_107211d8c;
            }
            puVar2 = PTR_PTR_1126c9898;
            func_0x00010c250a00(PTR_PTR_1126c9898);
            _objc_retainAutoreleasedReturnValue();
            lVar33 = in_x4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar2);
            if (lVar33 != 0) {
              puVar2 = PTR_PTR_1126c9898;
              func_0x00010c250a00(PTR_PTR_1126c9898);
              _objc_retainAutoreleasedReturnValue();
              lVar33 = in_x4;
              func_0x00010c0e00e0(in_x4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              *(undefined8 *)(puVar1 + 0xa0) = param_1;
              _objc_release(lVar33);
              _objc_release(puVar2);
            }
            puVar2 = PTR_PTR_1126c9898;
            func_0x00010c2299a0(PTR_PTR_1126c9898);
            _objc_retainAutoreleasedReturnValue();
            lVar33 = in_x4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar2);
            if (lVar33 == 0) goto LAB_107211d8c;
            puVar2 = PTR_PTR_1126c9898;
            func_0x00010c2299a0(PTR_PTR_1126c9898);
            _objc_retainAutoreleasedReturnValue();
            lVar33 = in_x4;
            func_0x00010c0e00e0(in_x4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            *(undefined8 *)(puVar1 + 0xa8) = param_1;
            _objc_release(lVar33);
            goto LAB_1072119e0;
          }
          puVar1[0x78] = 0;
          uVar36 = *(undefined8 *)(puVar1 + 0x38);
          uVar30 = uVar28;
          func_0x00010c259cc0(uVar28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar36);
          _objc_release(uVar30);
          func_0x00010be389e0(puVar1);
          func_0x00010bf5ed40(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf78060();
        }
        else {
          puVar2 = puVar1 + 0x200;
          _objc_loadWeakRetained(puVar2);
          puVar3 = puVar2;
          func_0x00010c29e000();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13d1c0();
          _objc_release(puVar3);
          _objc_release(puVar2);
          func_0x00010723fe7c();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a6a40();
          _objc_release(puVar3);
          _objc_release(puVar2);
LAB_10721214c:
          puVar1 = puVar1 + 0x1f0;
          _objc_loadWeakRetained(puVar1);
          func_0x00010c288440();
        }
      }
      else {
        func_0x00010bf5ed40(puVar1);
        _objc_retainAutoreleasedReturnValue();
LAB_107211e80:
        func_0x00010bf73460();
      }
      _objc_release(puVar1);
      goto LAB_107211d8c;
    }
    *(undefined8 *)(puVar1 + 400) = 4;
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    FUN_1071fe940(uVar28,uVar29,puVar2);
  }
  else {
    func_0x00010bf5ed40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c3c0();
    puVar2 = puVar1;
  }
LAB_1072119e0:
  _objc_release(puVar2);
LAB_107211d8c:
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(in_x4);
  _objc_release(uVar35);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar34);
  return;
}



/* Entry: 107211624; end: 1072125eb; -[SCLegacyStoriesViewingSession operaViewDidSendEvent:page:params:] */

void FUN_107211624(undefined8 param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bed6560(param_2);
  uVar1 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c6d90;
  _objc_opt_class(PTR_PTR_1126c6d90);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar5 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5998);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c9a58;
  if (uVar1 == 0 && uVar2 == 0) goto LAB_107211d8c;
  uVar4 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf17ae0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0720c0();
    if ((uVar5 & 1) != 0) {
LAB_107211804:
      _objc_release(puVar3);
      goto LAB_10721180c;
    }
    puVar6 = PTR_PTR_1126c9a10;
    func_0x00010c29dbc0(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0720c0();
    if ((uVar5 & 1) != 0) {
LAB_1072117f8:
      _objc_release(puVar6);
      goto LAB_107211804;
    }
    puVar7 = PTR_PTR_1126b2ea8;
    func_0x00010c268600(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0720c0();
    if ((uVar5 & 1) != 0) {
      _objc_release(puVar7);
      goto LAB_1072117f8;
    }
    puVar8 = PTR_PTR_1126b2ea8;
    func_0x00010c2685e0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) goto LAB_107211d8c;
  }
  else {
LAB_10721180c:
    _objc_release(uVar4);
  }
  uVar4 = uVar2;
  func_0x00010c07c580();
  if ((int)uVar4 != 0) {
    func_0x00010beaf6c0(param_2);
  }
  if (*(long *)(param_2 + 0x58) == 0) {
    func_0x00010beafb80(param_2);
  }
  if (*(long *)(param_2 + 0xb0) == 0) {
    func_0x00010beb0220(param_2);
  }
  if (uVar1 != 0) {
    func_0x00010beab800(param_2);
  }
  uVar4 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 != 0) {
    *(undefined8 *)(param_2 + 400) = 5;
    puVar3 = param_2;
    func_0x00010be749e0();
    *(undefined **)(param_2 + 0xb8) = puVar3;
    func_0x00010bedc6e0(param_2);
    goto LAB_107211d8c;
  }
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2340;
  if ((int)uVar4 != 0) {
    uVar4 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    param_2[0x153] = (char)puVar3;
    _objc_release(uVar4);
    if ((param_2[0x78] & 1) == 0) {
      puVar3 = param_2;
      func_0x00010bf5ed40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf78060();
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126b2340;
    uVar4 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60();
    param_2[0x6a] = (char)puVar3;
    _objc_release(uVar4);
    if (param_2[0x6a] != '\x01') goto LAB_107211d8c;
    *(long *)(param_2 + 0x1b8) = *(long *)(param_2 + 0x1b8) + 1;
    func_0x00010bf5ed40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250a80();
    puVar3 = param_2;
    goto LAB_1072119e0;
  }
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 != 0) {
    param_2[0x6a] = 0;
    puVar6 = param_2;
    func_0x00010bf5ed40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2340;
    uVar4 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0(puVar3);
    func_0x00010c250a40(puVar6);
    _objc_release(uVar4);
    _objc_release(puVar6);
    uVar4 = uVar2;
    func_0x00010c074fe0();
    if ((int)uVar4 == 0) goto LAB_107211d8c;
LAB_107211af4:
    func_0x00010be00800(param_2);
    goto LAB_107211d8c;
  }
  puVar3 = PTR_PTR_1126b2338;
  func_0x00010bfe8ca0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((uVar4 & 1) != 0) goto LAB_107211d8c;
  puVar3 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 != 0) goto LAB_107211af4;
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 != 0) {
    puVar3 = param_2 + 0x200;
    _objc_loadWeakRetained();
    puVar6 = puVar3;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c27dd80();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    if (puVar8 == (undefined *)0x5) {
      puVar3 = param_2;
      func_0x00010bf5ed40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23e420();
      _objc_release(puVar3);
    }
    puVar3 = param_2;
    func_0x00010bf5ed40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256ae0();
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010bf9ba60();
    if (puVar3 + -0xc < (undefined *)0x2) {
      uVar13 = 2;
    }
    else if (puVar3 == (undefined *)0x7) {
      uVar13 = 1;
    }
    else if (puVar3 == (undefined *)0x2) {
      uVar13 = 3;
    }
    else {
      uVar13 = 0;
    }
    *(undefined8 *)(param_2 + 400) = uVar13;
    goto LAB_107211d8c;
  }
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010bf3df20(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 != 0) {
    func_0x00010c2569c0(param_2);
    goto LAB_107211d8c;
  }
  puVar3 = PTR_PTR_1126b6128;
  func_0x00010c08c2c0(PTR_PTR_1126b6128);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 == 0) {
    puVar3 = PTR_PTR_1126c95c8;
    func_0x00010c09d2c0(PTR_PTR_1126c95c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)uVar4 == 0) {
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c0f2600(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)uVar4 == 0) {
        puVar3 = PTR_PTR_1126c9460;
        func_0x00010c0f25a0(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bf5ed40(param_2);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107211e80;
        }
        puVar3 = PTR_PTR_1126b2330;
        func_0x00010bf17ae0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)uVar4 != 0) {
          func_0x00010c2569c0(param_2);
          goto LAB_107211d8c;
        }
        puVar3 = PTR_PTR_1126c9c10;
        func_0x00010c0e92a0(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)uVar4 != 0) {
          puVar3 = param_2 + 0x200;
          _objc_loadWeakRetained(puVar3);
          puVar6 = puVar3;
          func_0x00010c29e000();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_2;
          _objc_opt_class(param_2);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f6200(puVar6);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar3);
          puVar3 = PTR_PTR_1126c9ae8;
          uVar4 = param_5;
          func_0x00010c118b40(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4bb40();
          _objc_release(uVar4);
          if ((int)puVar3 == 0) goto LAB_107211d8c;
LAB_107211f9c:
          func_0x00010be5d280(param_2);
          goto LAB_107211d8c;
        }
        puVar3 = PTR_PTR_1126c9c10;
        func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)uVar4 == 0) {
          puVar3 = PTR_PTR_1126c9c10;
          func_0x00010bf1d800(PTR_PTR_1126c9c10);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)uVar4 != 0) {
            param_2[0x6c] = 1;
            goto LAB_10721214c;
          }
          puVar3 = PTR_PTR_1126c9c10;
          func_0x00010bf3de20(PTR_PTR_1126c9c10);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)uVar4 != 0) {
            func_0x00010723fe7c();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a6c40();
            _objc_release(puVar6);
            _objc_release(puVar3);
            func_0x00010723fe7c();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fa8a0();
            _objc_release(puVar6);
            _objc_release(puVar3);
            puVar3 = param_2 + 0x200;
            _objc_loadWeakRetained(puVar3);
            puVar6 = puVar3;
            func_0x00010c08f5e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18ebe0();
            _objc_release(puVar6);
            _objc_release(puVar3);
            param_2[0x6c] = 0;
            goto LAB_10721214c;
          }
          puVar3 = PTR_PTR_1126c9460;
          func_0x00010c0f25e0(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_4;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
LAB_1072121e0:
            _objc_release(puVar3);
LAB_1072121e8:
            if ((param_2[0x151] & 1) == 0) {
              puVar3 = param_2 + 0x200;
              _objc_loadWeakRetained();
              puVar6 = puVar3;
              func_0x00010c0688c0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010c089060();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c27dd80();
              if (puVar8 == (undefined *)0x7) {
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar3);
              }
              else {
                puVar8 = param_2 + 0x200;
                _objc_loadWeakRetained();
                puVar9 = puVar8;
                func_0x00010c0688c0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar9;
                func_0x00010c089060();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010c27dd80();
                _objc_release(puVar10);
                _objc_release(puVar9);
                _objc_release(puVar8);
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar3);
                if (puVar11 != (undefined *)0x8) goto LAB_1072122bc;
              }
              *(undefined8 *)(param_2 + 0xb8) = 3;
            }
LAB_1072122bc:
            puVar3 = param_2 + 0x200;
            _objc_loadWeakRetained();
            puVar6 = puVar3;
            func_0x00010c0688c0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c089060();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c27dd80();
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar3);
            if (puVar8 != (undefined *)0x7) goto LAB_107211d8c;
            goto LAB_107211f9c;
          }
          puVar6 = PTR_PTR_1126c9460;
          func_0x00010c0f2620(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_4;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
LAB_1072121d8:
            _objc_release(puVar6);
            goto LAB_1072121e0;
          }
          puVar7 = PTR_PTR_1126c9460;
          func_0x00010c0f2580(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_4;
          func_0x00010c0720c0();
          if ((int)uVar4 != 0) {
            _objc_release(puVar7);
            goto LAB_1072121d8;
          }
          puVar8 = PTR_PTR_1126c9460;
          func_0x00010c0f2560(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar3);
          if ((uVar4 & 1) != 0) goto LAB_1072121e8;
          puVar3 = PTR_PTR_1126ca2c0;
          func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)uVar4 == 0) {
            puVar3 = PTR_PTR_1126c9a10;
            func_0x00010c29dbc0(PTR_PTR_1126c9a10);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            if ((int)uVar4 == 0) {
              puVar3 = PTR_PTR_1126d5300;
              func_0x00010c06a5c0(PTR_PTR_1126d5300);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)uVar4 == 0) {
                puVar3 = PTR_PTR_1126b2ea8;
                func_0x00010c268600(PTR_PTR_1126b2ea8);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = param_4;
                func_0x00010c0720c0();
                if ((int)uVar4 == 0) {
                  puVar6 = PTR_PTR_1126b2ea8;
                  func_0x00010c2685e0(PTR_PTR_1126b2ea8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = param_4;
                  func_0x00010c0720c0();
                  _objc_release(puVar6);
                  _objc_release(puVar3);
                  if ((int)uVar4 == 0) goto LAB_107211d8c;
                }
                else {
                  _objc_release(puVar3);
                }
                func_0x00010c291d20(param_2);
              }
              else {
                *(undefined8 *)(param_2 + 0xc0) = 0x22d52a;
              }
              goto LAB_107211d8c;
            }
            puVar3 = PTR_PTR_1126c9898;
            func_0x00010c250a00(PTR_PTR_1126c9898);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = param_6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar3);
            if (lVar12 != 0) {
              puVar3 = PTR_PTR_1126c9898;
              func_0x00010c250a00(PTR_PTR_1126c9898);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              *(undefined8 *)(param_2 + 0xa0) = param_1;
              _objc_release(lVar12);
              _objc_release(puVar3);
            }
            puVar3 = PTR_PTR_1126c9898;
            func_0x00010c2299a0(PTR_PTR_1126c9898);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = param_6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar3);
            if (lVar12 == 0) goto LAB_107211d8c;
            puVar3 = PTR_PTR_1126c9898;
            func_0x00010c2299a0(PTR_PTR_1126c9898);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = param_6;
            func_0x00010c0e00e0(param_6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            *(undefined8 *)(param_2 + 0xa8) = param_1;
            _objc_release(lVar12);
            goto LAB_1072119e0;
          }
          param_2[0x78] = 0;
          uVar13 = *(undefined8 *)(param_2 + 0x38);
          uVar4 = uVar1;
          func_0x00010c259cc0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar13);
          _objc_release(uVar4);
          func_0x00010be389e0(param_2);
          func_0x00010bf5ed40(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf78060();
        }
        else {
          puVar3 = param_2 + 0x200;
          _objc_loadWeakRetained(puVar3);
          puVar6 = puVar3;
          func_0x00010c29e000();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13d1c0();
          _objc_release(puVar6);
          _objc_release(puVar3);
          func_0x00010723fe7c();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a6a40();
          _objc_release(puVar6);
          _objc_release(puVar3);
LAB_10721214c:
          param_2 = param_2 + 0x1f0;
          _objc_loadWeakRetained(param_2);
          func_0x00010c288440();
        }
      }
      else {
        func_0x00010bf5ed40(param_2);
        _objc_retainAutoreleasedReturnValue();
LAB_107211e80:
        func_0x00010bf73460();
      }
      _objc_release(param_2);
      goto LAB_107211d8c;
    }
    *(undefined8 *)(param_2 + 400) = 4;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    FUN_1071fe940(uVar1,uVar2,puVar3);
  }
  else {
    func_0x00010bf5ed40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c3c0();
    puVar3 = param_2;
  }
LAB_1072119e0:
  _objc_release(puVar3);
LAB_107211d8c:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1072125ec; end: 10721268b; -[SCLegacyStoriesViewingSession viewWillEnterForeground] */

void FUN_1072125ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010c069d00();
  }
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__editionDoesDisplaySinceForegrou_112537ae8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38);
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  return;
}



/* Entry: 10721268c; end: 1072126cf; -[SCLegacyStoriesViewingSession viewDidEnterBackground] */

void FUN_10721268c(long param_1)

{
  func_0x00010be70ec0();
  func_0x00010be593e0(param_1);
  if (*(char *)(param_1 + 0x90) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010becb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__teardownForegroundDisplayLink_1125905a8);
    return;
  }
  return;
}



/* Entry: 1072126d0; end: 107212723; -[SCLegacyStoriesViewingSession _editionDoesDisplaySinceForegroundedApp] */

void FUN_1072126d0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x69) = 0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  func_0x00010bf5ed40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107212724; end: 10721274f; -[SCLegacyStoriesViewingSession _teardownForegroundDisplayLink] */

void FUN_107212724(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107212750; end: 107212757; -[SCLegacyStoriesViewingSession hasSessionEnded] */

undefined1 FUN_107212750(long param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



/* Entry: 107212758; end: 10721288b; -[SCLegacyStoriesViewingSession _didStartPlayingStory:friendStories:] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_107212758(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + 0x152) = 1;
  }
  else {
    _objc_retain(param_4);
    lVar2 = param_1 + 0x1f0;
    _objc_loadWeakRetained();
    lVar3 = param_4;
    func_0x00010c259cc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar4 = lVar2;
    func_0x00010c076060();
    *(char *)(param_1 + 0x152) = (char)lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar3 = param_1;
  func_0x00010bf5ed40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fe60(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar2 = param_1 + 0x1f0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf7bf40();
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar6);
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar7 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c14fb00();
    _objc_release(puVar7);
    if (((ulong)puVar8 & 1) != 0) {
      ppuVar9 = &PTR___NSConcreteGlobalBlock_110d5b230;
      goto SUB_1000d76cc;
    }
  }
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar9 = &PTR___NSConcreteGlobalBlock_110d5b250;
SUB_1000d76cc:
  puVar7 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(ppuVar9);
  func_0x000107c4a02c();
  if ((int)puVar7 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 10721288c; end: 1072129ab; -[SCLegacyStoriesViewingSession _setupChromeInteractionSession] */

void FUN_10721288c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d5308;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0d6760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c05de80(puVar1,param_2,uVar6,uVar3,lVar4,lVar5,*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x140),
                      *(undefined8 *)(param_1 + 0x148));
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x1e8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = uVar2;
  func_0x00010c127820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar6,param_2,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1072129ac; end: 107212a6f; -[SCLegacyStoriesViewingSession _setupReportSession] */

void FUN_1072129ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d5310;
  _objc_alloc();
  lVar2 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + 0x1f0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c031c60(puVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0xd0));
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x1e8);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = uVar5;
  func_0x00010c127820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar6,param_2,uVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107212a70; end: 107212ba7; -[SCLegacyStoriesViewingSession _setupSharingSession] */

void FUN_107212a70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d5318;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x170);
  lVar2 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + 0x1f0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x210;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c05ed40(puVar1,*(undefined8 *)(param_1 + 0x140),uVar5,uVar6,lVar2,lVar3,lVar4,
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0xe8),*(undefined1 *)(param_1 + 0xf0));
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x1e8);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c127820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107212ba8; end: 107212d2f; -[SCLegacyStoriesViewingSession _setupSubscriptionSession] */

void FUN_107212ba8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d5320;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000108f229ec();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f21604();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100c67ae4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000108f2293c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000100c68168();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x130);
  puVar7 = puVar6;
  func_0x000108f2174c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000108f217fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049de0(puVar1,param_2,puVar2,puVar3,puVar4,puVar5,puVar6,uVar10,puVar7,puVar8,
                      *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126d5328;
  _objc_alloc();
  func_0x00010c04ef60();
  uVar10 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
  _objc_release(uVar10);
  lVar9 = param_1 + 0x210;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0xb0),param_2,lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 107212d30; end: 107212df3; -[SCLegacyStoriesViewingSession _updateOperaNavigationTypeWithParams:] */

void FUN_107212d30(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c9a20;
  _objc_retain(param_3);
  func_0x00010c0d6c60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
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
  func_0x00010c067fc0();
  _objc_release(uVar1);
  *(ulong *)(param_1 + 0x1d8) = (ulong)(uVar3 != 0);
  return;
}



/* Entry: 107212df4; end: 107212dfb; -[SCLegacyStoriesViewingSession currentFriendStoriesViewingSession] */

void FUN_107212df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c089830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_lastObject_112600018);
  return;
}



/* Entry: 107212dfc; end: 107212e8b; -[SCLegacyStoriesViewingSession currentFriendStoriesAbsoluteIndex] */

long FUN_107212dfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x1f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfecd00();
  _objc_release(param_1);
  _objc_release(lVar3);
  return lVar1;
}



/* Entry: 107212e8c; end: 107212ec7; -[SCLegacyStoriesViewingSession currentFriendStoriesRelativeIndex] */

long FUN_107212e8c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x151) == '\x01') {
    lVar1 = param_1;
    func_0x00010bf5ed00();
    return lVar1 - *(long *)(param_1 + 0x80);
  }
  return -1;
}



/* Entry: 107212ec8; end: 107212f23; -[SCLegacyStoriesViewingSession indexOfStoryRelativeToInitialStory:] */

long FUN_107212ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x1f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfecea0();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107212f24; end: 107213347; -[SCLegacyStoriesViewingSession _updateCurrentFriendStoriesViewingSessionsWithEvent:page:] */

void FUN_107212f24(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2330;
  _objc_retain(param_3);
  func_0x00010c0e9c40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar10 != 0) {
    uVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126c6d90;
    _objc_opt_class(PTR_PTR_1126c6d90);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = uVar4;
    func_0x00010010fab4(uVar4,PTR_DAT_1126a5998);
    uVar3 = uVar4;
    if ((int)uVar5 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0771a0();
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010bf5ed40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb8ba0();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar5 == 0) || (uVar5 != uVar2)) && ((uVar5 != 0 || ((uVar2 != 0 || (uVar3 != 0)))))) {
      if (uVar4 != 0) {
        func_0x00010c256a80(uVar4);
        uVar6 = uVar4;
        func_0x00010bfb8ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x1f8);
        *(ulong *)(param_1 + 0x1f8) = uVar6;
        _objc_release(uVar10);
        func_0x00010be8c260(param_1);
      }
      puVar1 = PTR_PTR_1126b2340;
      if (uVar2 == 0 && uVar3 == 0) {
        if (*(long *)(param_1 + 0xb0) != 0) {
          func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x1e8));
        }
      }
      else {
        uVar6 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079440();
        *(char *)(param_1 + 0x78) = (char)puVar1;
        _objc_release(uVar6);
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x38);
          uVar6 = uVar2;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar6 == 0) {
            uVar7 = uVar3;
            func_0x00010c259cc0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar10);
            _objc_release(uVar7);
          }
          else {
            func_0x00010befa120(uVar10);
          }
          _objc_release(uVar6);
          func_0x00010be389e0(param_1);
        }
        puVar1 = PTR_PTR_1126d5330;
        _objc_alloc();
        lVar11 = param_1 + 0x1f0;
        _objc_loadWeakRetained(lVar11);
        lVar8 = param_1 + 0x200;
        _objc_loadWeakRetained();
        lVar9 = lVar8;
        func_0x00010c0e9f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c013620(puVar1);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar11);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x1a8));
        func_0x00010c251960(puVar1);
        if ((uVar4 == 0) && (lVar11 = *(long *)(param_1 + 0xb0), lVar11 != 0)) {
          uVar10 = *(undefined8 *)(param_1 + 0x1e8);
          func_0x00010c127820(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef99a0(uVar10);
          _objc_release(lVar11);
        }
        _objc_release(puVar1);
      }
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107213348; end: 1072133bb; -[SCLegacyStoriesViewingSession _removeFriendStoriesViewingSession:] */

void FUN_107213348(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c280700();
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar1;
  lVar1 = param_3;
  func_0x00010c277040();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar1;
  lVar1 = param_3;
  func_0x00010c276940();
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + lVar1;
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1072133bc; end: 1072133eb; -[SCLegacyStoriesViewingSession userDidTakeScreenshot] */

void FUN_1072133bc(undefined8 param_1)

{
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072133ec; end: 1072133f7; -[SCLegacyStoriesViewingSession viewWillEnterBackground] */

void FUN_1072133ec(long param_1)

{
  *(undefined1 *)(param_1 + 0x6b) = 1;
  return;
}



/* Entry: 1072133f8; end: 10721348b; -[SCLegacyStoriesViewingSession exitReason] */

long FUN_1072133f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x6a) & 1) != 0) {
    return 0xe;
  }
  if ((*(byte *)(param_1 + 0x6b) & 1) != 0) {
    return 6;
  }
  param_1 = param_1 + 0x200;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10721348c; end: 1072134eb; -[SCLegacyStoriesViewingSession lastInteraction] */

void FUN_10721348c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x200;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1072134ec; end: 1072134f3; -[SCLegacyStoriesViewingSession uniqueViewedStoriesCount] */

void FUN_1072134ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1072134f4; end: 107213607; -[SCLegacyStoriesViewingSession uniqueViewedSnapsCount] */

long FUN_1072134f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x1a8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(lStack_118 + lVar7 * 8);
        func_0x00010c280700();
        lVar5 = lVar2 + lVar5;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return *(long *)(param_1 + 0x20) + lVar5;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar5 = *(long *)(lVar4 + 0x1a8);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_230;
    do {
      lVar2 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        lVar3 = *(long *)(lStack_238 + lVar2 * 8);
        func_0x00010c277040();
        lVar6 = lVar3 + lVar6;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return *(long *)(lVar4 + 0x28) + lVar6;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  lVar4 = *(long *)(lVar5 + 0x1a8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_360,auStack_318,0x10);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_350;
    do {
      lVar2 = 0;
      do {
        if (*plStack_350 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        lVar3 = *(long *)(lStack_358 + lVar2 * 8);
        func_0x00010c276940(lVar3);
        lVar6 = lVar3 + lVar6;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_360,auStack_318,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
    ___stack_chk_fail();
    if ((*(byte *)(lVar4 + 0x151) & 1) == 0) {
      lVar1 = 5;
      if (*(long *)(lVar4 + 0x198) != 1) {
        lVar1 = 1;
      }
      return lVar1;
    }
    return 2;
  }
  return *(long *)(lVar5 + 0x30) + lVar6;
}



/* Entry: 107213608; end: 10721371b; -[SCLegacyStoriesViewingSession totalViewedSnapsCount] */

long FUN_107213608(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x1a8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(lStack_118 + lVar7 * 8);
        func_0x00010c277040();
        lVar5 = lVar2 + lVar5;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return *(long *)(param_1 + 0x28) + lVar5;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar5 = *(long *)(lVar4 + 0x1a8);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_230;
    do {
      lVar2 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        lVar3 = *(long *)(lStack_238 + lVar2 * 8);
        func_0x00010c276940(lVar3);
        lVar6 = lVar3 + lVar6;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    if ((*(byte *)(lVar5 + 0x151) & 1) == 0) {
      lVar1 = 5;
      if (*(long *)(lVar5 + 0x198) != 1) {
        lVar1 = 1;
      }
      return lVar1;
    }
    return 2;
  }
  return *(long *)(lVar4 + 0x30) + lVar6;
}



/* Entry: 10721371c; end: 10721382f; -[SCLegacyStoriesViewingSession totalOpenedSnapsCount] */

long FUN_10721371c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 0x1a8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar2 = *(long *)(lStack_118 + lVar6 * 8);
        func_0x00010c276940(lVar2);
        lVar4 = lVar2 + lVar4;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((*(byte *)(lVar3 + 0x151) & 1) == 0) {
      lVar1 = 5;
      if (*(long *)(lVar3 + 0x198) != 1) {
        lVar1 = 1;
      }
      return lVar1;
    }
    return 2;
  }
  return *(long *)(param_1 + 0x30) + lVar4;
}



/* Entry: 107213830; end: 107213853; -[SCLegacyStoriesViewingSession _playSourceUponOpenOpera] */

undefined8 FUN_107213830(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x151) & 1) != 0) {
    return 2;
  }
  uVar1 = 5;
  if (*(long *)(param_1 + 0x198) != 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107213854; end: 107213893; +[SCLegacyStoriesViewingSession announcerIdentifier] */

void FUN_107213854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e280f8);
  return;
}



/* Entry: 107213894; end: 107213903; -[SCLegacyStoriesViewingSession viewLocationPosition] */

long FUN_107213894(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x170) == 0x2b) {
    func_0x00010bf5ed40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfb8ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf818c0();
    _objc_release(lVar1);
    _objc_release(param_1);
    return lVar2;
  }
  return *(long *)(param_1 + 0x178);
}



/* Entry: 107213904; end: 107213997; -[SCLegacyStoriesViewingSession setEventAnnouncing:] */

void FUN_107213904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x1e8) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c12cf80(*(long *)(param_1 + 0x1e8),param_2,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x1e8);
  }
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x1e8);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar2,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107213998; end: 1072139f3; -[SCLegacyStoriesViewingSession setOperaPageProvider:] */

void FUN_107213998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x1f0,param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bfba540();
  _objc_release(param_3);
  *(undefined8 *)(param_1 + 0x208) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1072139f4; end: 107213aaf; -[SCLegacyStoriesViewingSession setPlaylistItemController:] */

void FUN_1072139f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c101260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfecde0();
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x210,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107213ab0; end: 107213aef; -[SCLegacyStoriesViewingSession setOperaControlling:] */

void FUN_107213ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_storeWeak(param_1 + 0x200,param_3);
  lVar1 = param_1 + 0x1f0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfba540();
  *(long *)(param_1 + 0x208) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107213af0; end: 107213c67; -[SCLegacyStoriesViewingSession extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107213af0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5b38;
  func_0x00010c08f700(PTR_PTR_1126c5b38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(param_4);
  puVar2 = PTR_DAT_1126a5998;
  if ((uVar3 & 1) == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    uVar1 = param_3;
    if ((int)uVar4 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0xb0);
    if (lVar5 != 0) {
      func_0x00010bf9ea20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar2);
      _objc_release(lVar5);
    }
    func_0x00010bf9eac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,param_1,puVar2);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107213c68; end: 107213c6f; -[SCLegacyStoriesViewingSession shouldUseExtendedResetToCamera] */

undefined8 FUN_107213c68(void)

{
  return 0;
}



/* Entry: 107213c70; end: 107213d1b; -[SCLegacyStoriesViewingSession isPromoted] */

undefined8 FUN_107213c70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf38d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c07b500();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107213d1c; end: 107213dc7; -[SCLegacyStoriesViewingSession isExplorationStory] */

undefined8 FUN_107213d1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf38d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0724e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107213dc8; end: 107213dcf; -[SCLegacyStoriesViewingSession isReplayMode] */

undefined1 FUN_107213dc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x150);
}



/* Entry: 107213dd0; end: 107213dd7; -[SCLegacyStoriesViewingSession viewingType] */

undefined8 FUN_107213dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 107213dd8; end: 107213ddf; -[SCLegacyStoriesViewingSession setViewingType:] */

void FUN_107213dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x158) = param_3;
  return;
}



/* Entry: 107213de0; end: 107213de7; -[SCLegacyStoriesViewingSession storiesViewingContext] */

undefined8 FUN_107213de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 107213de8; end: 107213def; -[SCLegacyStoriesViewingSession setStoriesViewingContext:] */

void FUN_107213de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x160) = param_3;
  return;
}



/* Entry: 107213df0; end: 107213df7; -[SCLegacyStoriesViewingSession sourceViewLocation] */

undefined8 FUN_107213df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 107213df8; end: 107213dff; -[SCLegacyStoriesViewingSession setSourceViewLocation:] */

void FUN_107213df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x168) = param_3;
  return;
}



/* Entry: 107213e00; end: 107213e07; -[SCLegacyStoriesViewingSession viewLocation] */

undefined8 FUN_107213e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 107213e08; end: 107213e0f; -[SCLegacyStoriesViewingSession setViewLocation:] */

void FUN_107213e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x170) = param_3;
  return;
}



/* Entry: 107213e10; end: 107213e17; -[SCLegacyStoriesViewingSession setViewLocationPosition:] */

void FUN_107213e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x178) = param_3;
  return;
}



/* Entry: 107213e18; end: 107213e1f; -[SCLegacyStoriesViewingSession liveStoriesCount] */

undefined8 FUN_107213e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 107213e20; end: 107213e27; -[SCLegacyStoriesViewingSession setLiveStoriesCount:] */

void FUN_107213e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}



/* Entry: 107213e28; end: 107213e2f; -[SCLegacyStoriesViewingSession storySessionId] */

undefined8 FUN_107213e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 107213e30; end: 107213e37; -[SCLegacyStoriesViewingSession setStorySessionId:] */

void FUN_107213e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x188) = param_3;
  return;
}



/* Entry: 107213e38; end: 107213e3f; -[SCLegacyStoriesViewingSession entryReason] */

undefined8 FUN_107213e38(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 107213e40; end: 107213e47; -[SCLegacyStoriesViewingSession setEntryReason:] */

void FUN_107213e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



/* Entry: 107213e48; end: 107213e4f; -[SCLegacyStoriesViewingSession defaultStoryViewingActionContext] */

undefined8 FUN_107213e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 107213e50; end: 107213e57; -[SCLegacyStoriesViewingSession setDefaultStoryViewingActionContext:] */

void FUN_107213e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 107213e58; end: 107213e5f; -[SCLegacyStoriesViewingSession totalViewedStoriesCount] */

undefined8 FUN_107213e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 107213e60; end: 107213e67; -[SCLegacyStoriesViewingSession currentFriendStoriesViewingSessions] */

undefined8 FUN_107213e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 107213e68; end: 107213e6f; -[SCLegacyStoriesViewingSession isInStoryPlaylistMode] */

undefined1 FUN_107213e68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x151);
}



/* Entry: 107213e70; end: 107213e77; -[SCLegacyStoriesViewingSession friendNamesInRecentUpdate] */

undefined8 FUN_107213e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 107213e78; end: 107213e7f; -[SCLegacyStoriesViewingSession loadingScreenCount] */

undefined8 FUN_107213e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 107213e80; end: 107213e87; -[SCLegacyStoriesViewingSession isFullyViewed] */

undefined1 FUN_107213e80(long param_1)

{
  return *(undefined1 *)(param_1 + 0x152);
}



/* Entry: 107213e88; end: 107213e8f; -[SCLegacyStoriesViewingSession sortOrderId] */

undefined8 FUN_107213e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 107213e90; end: 107213e97; -[SCLegacyStoriesViewingSession isViewingLongform] */

undefined1 FUN_107213e90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x153);
}



/* Entry: 107213e98; end: 107213e9f; -[SCLegacyStoriesViewingSession playSource] */

undefined8 FUN_107213e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 107213ea0; end: 107213ea7; -[SCLegacyStoriesViewingSession startingEntryEvent] */

undefined8 FUN_107213ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 107213ea8; end: 107213eaf; -[SCLegacyStoriesViewingSession operaNavigationType] */

undefined8 FUN_107213ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 107213eb0; end: 107213eb7; -[SCLegacyStoriesViewingSession storyAnalyticsOptions] */

undefined8 FUN_107213eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 107213eb8; end: 107213ebf; -[SCLegacyStoriesViewingSession eventAnnouncing] */

undefined8 FUN_107213eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 107213ec0; end: 107213ed7; -[SCLegacyStoriesViewingSession operaPageProvider] */

void FUN_107213ec0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107213ed8; end: 107213edf; -[SCLegacyStoriesViewingSession previousFriendStoriesDisplayed] */

undefined8 FUN_107213ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 107213ee0; end: 107213ef7; -[SCLegacyStoriesViewingSession operaControlling] */

void FUN_107213ee0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107213ef8; end: 107213eff; -[SCLegacyStoriesViewingSession initialFriendsPlayListCount] */

undefined8 FUN_107213ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 107213f00; end: 107213f17; -[SCLegacyStoriesViewingSession playlistItemController] */

void FUN_107213f00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107213f18; end: 1072140db; -[SCLegacyStoriesViewingSession .cxx_destruct] */

void FUN_107213f18(long param_1)

{
  _objc_destroyWeak(param_1 + 0x210);
  _objc_destroyWeak(param_1 + 0x200);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_destroyWeak(param_1 + 0x1f0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
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
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1072140dc; end: 10721436b;  */

void FUN_1072140dc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x000107a30ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c22c3e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        func_0x000107a30ee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b0e00();
        _objc_release(lVar2);
      }
      lVar2 = param_4;
      func_0x000108f226fc();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107cd1fc8();
      func_0x000107cd2018();
      func_0x00010c078fe0();
      puVar6 = PTR_PTR_1126d5338;
      _objc_alloc();
      lVar3 = param_2;
      func_0x00010be36bc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bf9c720(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar7 = param_1 * 1000.0;
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x000107cd1f78(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047d80(dVar7,param_1 * 1000.0,0,puVar6);
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_107214324;
    }
    func_0x000107a30ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0b0e00();
  puVar6 = (undefined *)0x0;
LAB_107214324:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10721436c; end: 1072146bb; -[SCGalleryStorySaver initWithUserSession:storiesMediaCoordinator:snapchatterFetcher:memoriesSaveManager:snapDocManager:activeVideoPaths:overlayFormatServices:featureSettingsService:memoriesSharedStoryMutator:memoriesTweaksServices:] */

undefined8 *
FUN_10721436c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f8c70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b9940;
    _objc_alloc(PTR_PTR_1126b9940);
    func_0x00010c02d5c0();
    uVar2 = puVar1[1];
    func_0x00010bf262e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ced18;
    _objc_alloc();
    puVar5 = PTR_PTR_1126bfb50;
    func_0x00010c22b6a0(PTR_PTR_1126bfb50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa6e0();
    uVar6 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1072146bc; end: 107214acb; -[SCGalleryStorySaver storeStoryWithClientID:originalPhoto:overlayFormat:sojuOverlay:assetMedias:sojuMediaType:servletMediaFormat:completion:] */

void FUN_1072146bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10721484c;
  puStack_b0 = &UNK_110976e28;
  uStack_88 = param_9;
  uStack_70 = param_10;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  uStack_98 = param_3;
  uStack_90 = param_6;
  uStack_80 = param_7;
  lStack_78 = param_1;
  uStack_68 = param_8;
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_c8);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107214acc; end: 107214ae3;  */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_107214acc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x000107c61174(lVar2);
    func_0x000107c4a02c();
    if ((int)puVar1 == 0) {
      func_0x0001000d77b8();
      func_0x000107c61180();
    }
    else {
      func_0x0001005855a8();
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}


