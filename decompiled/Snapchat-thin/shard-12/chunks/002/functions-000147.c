/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e9b38c; end: 108e9b3c3; -[CTPUserDataUpdateJobBuilder withFavoritedState:] */

long FUN_108e9b38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e9b3c4; end: 108e9b3fb; -[CTPUserDataUpdateJobBuilder withError:] */

long FUN_108e9b3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e9b3fc; end: 108e9b433; -[CTPUserDataUpdateJobBuilder withStartTime:] */

long FUN_108e9b3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e9b434; end: 108e9b46b; -[CTPUserDataUpdateJobBuilder withCompletionTime:] */

long FUN_108e9b434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e9b46c; end: 108e9b4bf; -[CTPUserDataUpdateJobBuilder .cxx_destruct] */

void FUN_108e9b46c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9b4c0; end: 108e9b56f; -[CTPUserDataPaginatedResult initWithCoder:] */

undefined1 * FUN_108e9b4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feec0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e9b570; end: 108e9b61b; -[CTPUserDataPaginatedResult initWithItems:pageToken:] */

undefined1 *
FUN_108e9b570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126feec0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e9b61c; end: 108e9b63f; -[CTPUserDataPaginatedResult copyWithZone:] */

undefined8 FUN_108e9b61c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e9b640; end: 108e9b69f; -[CTPUserDataPaginatedResult encodeWithCoder:] */

void FUN_108e9b640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb038);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110efda18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e9b6a0; end: 108e9b713; -[CTPUserDataPaginatedResult hash] */

undefined8 * FUN_108e9b6a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e9b794:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e9b7a0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108e9b7a0;
        }
        goto LAB_108e9b794;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e9b7a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e9b714; end: 108e9b7bb; -[CTPUserDataPaginatedResult isEqual:] */

long FUN_108e9b714(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e9b794:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e9b7a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108e9b7a0;
        }
        goto LAB_108e9b794;
      }
    }
    lVar3 = 0;
  }
LAB_108e9b7a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e9b7bc; end: 108e9b7c3; -[CTPUserDataPaginatedResult items] */

undefined8 FUN_108e9b7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e9b7c4; end: 108e9b7cb; -[CTPUserDataPaginatedResult pageToken] */

undefined8 FUN_108e9b7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e9b7cc; end: 108e9b7fb; -[CTPUserDataPaginatedResult .cxx_destruct] */

void FUN_108e9b7cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9b7fc; end: 108e9b86f; -[SCStoryInviteNotificationActionDataModel initWithNotification:] */

undefined1 * FUN_108e9b7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feec8;
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



/* Entry: 108e9b870; end: 108e9b893; -[SCStoryInviteNotificationActionDataModel copyWithZone:] */

undefined8 FUN_108e9b870(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e9b894; end: 108e9b89b; -[SCStoryInviteNotificationActionDataModel notification] */

undefined8 FUN_108e9b894(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e9b89c; end: 108e9b8a7; -[SCStoryInviteNotificationActionDataModel .cxx_destruct] */

void FUN_108e9b89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9b8a8; end: 108e9b8eb;  */

void FUN_108e9b8a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e9b8ec; end: 108e9bb3f;  */

void FUN_108e9b8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf62500(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108e9bb40; end: 108e9bb73;  */

void FUN_108e9bb40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x77297f71;
  if (param_1 != 3) {
    uVar1 = 0x180cb163;
  }
  func_0x00010b769b8c(uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e9bb74; end: 108e9bd9f; +[SCStoryInviteHelpers storyInviteReceiverSwipeUpVCWithDeepLinkURL:storyOwnerFirstName:storyParticipants:hasAlreadyJoinedStory:storyType:bitmojiImageFetcher:userSession:launchSource:customStoriesDataFetcher:customStoriesDataSyncer:storiesDataCoordinator:storiesFetcher:imageDownloader:composerRuntimeProviding:inviteService:userLogger:killSwitchProvider:storiesConfigProvider:] */

void FUN_108e9bb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc4c8;
  _objc_retain();
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c009ce0();
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e9bda0; end: 108e9bfb7;  */

void FUN_108e9bda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010bfa6cc0(param_2);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 108e9bfb8; end: 108e9bfcb;  */

void FUN_108e9bfb8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108e9bfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108e9bfcc; end: 108e9c03f; -[SCStoryInviteLogger initWithLogger:] */

undefined1 * FUN_108e9bfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feed0;
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



/* Entry: 108e9c040; end: 108e9c16f; -[SCStoryInviteLogger logStoryInviteCreationForStoryId:inviteId:storyType:] */

void FUN_108e9c040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126ba308;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x00010c16ac20();
  _objc_release(param_3);
  uVar4 = param_4;
  func_0x00010bf64920(param_4,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar4;
  func_0x00010bdc2560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aeb20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = 0xac5e77c;
  func_0x00010b782e30(0xac5e77c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aec80(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110efda58;
  if (param_5 != 3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110efda38;
  }
  func_0x00010c16ac80(puVar2,param_2,ppuVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e9c170; end: 108e9c29f; -[SCStoryInviteLogger logStoryInviteAcceptForStoryId:inviteId:storyType:] */

void FUN_108e9c170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b55b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x00010c16ac20();
  _objc_release(param_3);
  uVar4 = param_4;
  func_0x00010bf64920(param_4,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar4;
  func_0x00010bdc2560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aeb20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = 0xac5e77c;
  func_0x00010b782e30(0xac5e77c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aec80(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110efda58;
  if (param_5 != 3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110efda38;
  }
  func_0x00010c16ac80(puVar2,param_2,ppuVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e9c2a0; end: 108e9c2ab; -[SCStoryInviteLogger .cxx_destruct] */

void FUN_108e9c2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9c2ac; end: 108e9c3bf;  */

void FUN_108e9c2ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain();
  func_0x00010c23ba80(puVar2,param_2,0x7d);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1,param_2,param_1,puVar2,puVar3);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e9c3c0; end: 108e9c9a7; -[SCStoryInviteReceiverSwipeUpViewController initWithDeeplink:storyOwnerFirstName:storyParticipants:hasAlreadyJoinedStory:storyType:bitmojiImageFetcher:userSession:launchSource:customStoriesDataFetcher:customStoriesDataSyncer:storiesDataCoordinator:storiesFetcher:imageDownloader:composerRuntimeProviding:inviteService:userLogger:killSwitchProvider:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_108e9c3c0(undefined8 param_1,double param_2,undefined8 ***param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  double dVar9;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  uVar2 = param_5;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11277cfc4;
  uVar4 = *(undefined8 *)((long)param_3 + lVar8);
  *(undefined8 *)((long)param_3 + lVar8) = uVar5;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277cfc8;
  uVar5 = *(undefined8 *)((long)param_3 + lVar6);
  *(undefined8 *)((long)param_3 + lVar6) = uVar2;
  _objc_release(uVar5);
  if ((*(long *)((long)param_3 + lVar8) == 0) || (*(long *)((long)param_3 + lVar6) == 0)) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR_PTR_1126feed8;
    pppuVar7 = &ppuStack_e0;
    dVar9 = 0.0;
    ppuStack_e0 = param_3;
    _objc_msgSendSuper2(pppuVar7,PTR_s_initWithStyle_backgroundColor_sh_1125282c0,2,puVar1);
    _objc_release(puVar1);
    if (pppuVar7 != (undefined8 ***)0x0) {
      lVar6 = (long)_DAT_11277cfcc;
      _objc_retain(param_20);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_20;
      _objc_release(uVar2);
      uVar2 = param_5;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)pppuVar7 + (long)_DAT_11277cfd0);
      *(undefined8 *)((long)pppuVar7 + (long)_DAT_11277cfd0) = uVar5;
      _objc_release(uVar4);
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277cfd4;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_7;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277cfd8;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_6;
      _objc_release(uVar2);
      *(undefined1 *)((long)pppuVar7 + (long)_DAT_11277cfdc) = param_8;
      lVar6 = (long)_DAT_11277cfe0;
      _objc_retain(param_9);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_9;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277cfe4;
      _objc_retain(param_10);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_10;
      _objc_release(uVar2);
      _objc_storeWeak((long)pppuVar7 + (long)_DAT_11277cfe8,param_11);
      *(undefined8 *)((long)pppuVar7 + (long)_DAT_11277cfec) = param_12;
      lVar6 = (long)_DAT_11277cff0;
      _objc_retain(param_13);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_13;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277cff4;
      _objc_retain(param_14);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_14;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277cff8;
      _objc_retain(param_15);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_15;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277cffc;
      _objc_retain(param_16);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_16;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277d000;
      _objc_retain(param_17);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_17;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277d004;
      _objc_retain(param_18);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_18;
      _objc_release(uVar2);
      lVar6 = (long)_DAT_11277d008;
      _objc_retain(param_19);
      uVar2 = *(undefined8 *)((long)pppuVar7 + lVar6);
      *(undefined8 *)((long)pppuVar7 + lVar6) = param_19;
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 1;
      FUN_108ffef38(1,puVar1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010c23d0a0(uVar2);
      func_0x00010c23d0a0(uVar2);
      dVar9 = (dVar9 / param_2) * 425.0;
      puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc();
      func_0x00010c0469e0(0x407b600000000000,0x4080d00000000000);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_108e9ef30;
      puStack_b8 = &UNK_1108e4d60;
      uStack_a0 = 0x405c400000000000;
      uStack_90 = 0x407a900000000000;
      uStack_b0 = uVar2;
      dStack_a8 = (438.0 - dVar9) * 0.5;
      dStack_98 = dVar9;
      _objc_retain(uVar2);
      puVar3 = puVar1;
      func_0x00010bfe91c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_b0);
      _objc_release(uVar2);
      _objc_release(puVar1);
      uVar2 = *(undefined8 *)((long)pppuVar7 + (long)_DAT_11277d00c);
      *(undefined **)((long)pppuVar7 + (long)_DAT_11277d00c) = puVar3;
      _objc_release(uVar2);
      uVar2 = param_21;
      func_0x00010c07fc40();
      *(char *)((long)pppuVar7 + (long)_DAT_11277d010) = (char)uVar2;
      func_0x00010c181ce0(pppuVar7);
      func_0x00010c167760(pppuVar7);
      func_0x00010c1a6d20(pppuVar7);
      func_0x00010c181d00(pppuVar7);
    }
    _objc_retain(pppuVar7);
    param_3 = pppuVar7;
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return pppuVar7;
}



/* Entry: 108e9c9a8; end: 108e9ca0b; -[SCStoryInviteReceiverSwipeUpViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9c9a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126feed8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  if (*(char *)(param_1 + _DAT_11277d010) == '\x01') {
    func_0x00010bead880();
  }
  else {
    func_0x00010beafba0(param_1);
  }
  return;
}



/* Entry: 108e9ca0c; end: 108e9ca7b; -[SCStoryInviteReceiverSwipeUpViewController viewDidDisappear:] */

void FUN_108e9ca0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126feed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)uVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259ec0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 108e9ca7c; end: 108e9cd2f; -[SCStoryInviteReceiverSwipeUpViewController _setupSheetView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9ca7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126dc4d0;
  _objc_alloc(PTR_PTR_1126dc4d0);
  func_0x00010c04de20();
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126dc4d8;
  _objc_alloc(PTR_PTR_1126dc4d8);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108e9cd30;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x108e9cddc;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_f8 = puVar5;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x108e9ce80;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_80);
  puStack_120 = puVar5;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x108e9cf24;
  puStack_108 = &UNK_110ac7ee8;
  _objc_copyWeak(auStack_100,auStack_80);
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c00d1e0(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277d004);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126dc4e0;
  _objc_alloc(PTR_PTR_1126dc4e0);
  func_0x00010c061d40();
  func_0x00010c182b20(param_1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  return;
}



/* Entry: 108e9cd30; end: 108e9cfd3;  */

void FUN_108e9cd30(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108e9cda8;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000107c312d0("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108e9cfd4; end: 108e9d0d3; -[SCStoryInviteReceiverSwipeUpViewController _fetchStorySummaryInfoWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9cfd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e9d0d4;
  puStack_50 = &UNK_110ac7f48;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  uStack_48 = param_3;
  _objc_retainBlock(ppuVar1);
  FUN_108e9bda0(*(undefined8 *)(param_1 + _DAT_11277cfc8),*(undefined8 *)(param_1 + _DAT_11277cffc),
                *(undefined8 *)(param_1 + _DAT_11277cff8),ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e9d0d4; end: 108e9d18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9d0d4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (lVar1 == 0)) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0);
    }
  }
  else {
    lVar4 = (long)_DAT_11277d014;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + lVar4);
    *(long *)(lVar1 + lVar4) = param_2;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4a40;
    _objc_alloc(PTR_PTR_1126b4a40);
    func_0x00010c041000();
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e9d18c; end: 108e9d29b; -[SCStoryInviteReceiverSwipeUpViewController _onTapJoinStoryWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9d18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e9d29c;
  puStack_50 = &UNK_110849380;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  uStack_48 = param_3;
  _objc_retainBlock(ppuVar1);
  FUN_108e9ef44(*(undefined8 *)(param_1 + _DAT_11277cfc8),*(undefined8 *)(param_1 + _DAT_11277cfc4),
                *(undefined8 *)(param_1 + _DAT_11277cfe0),*(undefined8 *)(param_1 + _DAT_11277d008),
                *(undefined8 *)(param_1 + _DAT_11277cfcc),ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e9d29c; end: 108e9d2df;  */

void FUN_108e9d29c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e9d2e0; end: 108e9d5a3; -[SCStoryInviteReceiverSwipeUpViewController _didJoinStoryWithSuccess:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9d2e0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar2 = param_4;
  _objc_retain();
  if ((param_3 & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
  }
  else {
    _dispatch_group_create();
    _objc_initWeak(auStack_78,param_1);
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_108e9d5a4;
    uStack_88 = 0x108e9d5b4;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_108e9d5a4;
    uStack_b8 = 0x108e9d5b4;
    uStack_b0 = 0;
    puStack_a0 = &uStack_a8;
    _dispatch_group_enter(lVar2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277cff0);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277cff4);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11277cfc8);
    uVar3 = 0x19;
    func_0x000107c312b8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_108e9d5bc;
    puStack_f8 = &UNK_110ac7f78;
    puStack_e8 = &uStack_a8;
    _objc_copyWeak(auStack_e0,auStack_78);
    _objc_retain(lVar2);
    lStack_f0 = lVar2;
    FUN_108e9b8ec(uVar4,uVar5,uVar6,uVar3,&puStack_110);
    _objc_release(uVar3);
    _dispatch_group_enter(lVar2);
    puStack_140 = puVar1;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x108e9d634;
    puStack_128 = &UNK_110ac7fa8;
    puStack_118 = &uStack_d8;
    _objc_retain(lVar2);
    lStack_120 = lVar2;
    func_0x00010be14ae0(param_1);
    uVar3 = 0x19;
    func_0x000107c312b8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar1;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108e9d690;
    puStack_160 = &UNK_110849cb0;
    puStack_150 = &uStack_a8;
    _objc_retain(param_4);
    puStack_148 = &uStack_d8;
    lStack_158 = param_4;
    func_0x000107c27d98(lVar2,uVar3,&puStack_178);
    _objc_release(uVar3);
    _objc_release(lStack_158);
    _objc_release(lStack_120);
    _objc_release(lStack_f0);
    _objc_destroyWeak(auStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108e9d5a4; end: 108e9d5bb;  */

void FUN_108e9d5a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e9d5bc; end: 108e9d68f;  */

void FUN_108e9d5bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be27c80();
  _objc_release(lVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e9d690; end: 108e9d783;  */

void FUN_108e9d690(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    func_0x000107c312d0("APPSTORE",&PTR___NSConcreteGlobalBlock_110ac7fd8);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c312d0("APPSTORE",&PTR___NSConcreteGlobalBlock_110ac7ff8);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000108e9d714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,uVar2,uVar3);
  return;
}



/* Entry: 108e9d784; end: 108e9da07; -[SCStoryInviteReceiverSwipeUpViewController _setupLegacySheetView] */

void FUN_108e9d784(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126dc4e8;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108e9da08;
  puStack_88 = &UNK_110849200;
  _objc_copyWeak(auStack_80,auStack_78);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x108e9da40;
  puStack_b0 = &UNK_110862438;
  _objc_copyWeak(auStack_a8,auStack_78);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_108e9dae4;
  puStack_d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d0,auStack_78);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x108e9db88;
  puStack_100 = &UNK_1108434b0;
  _objc_copyWeak(auStack_f8,auStack_78);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x108e9dc34;
  puStack_128 = &UNK_110ac8048;
  _objc_copyWeak(auStack_120,auStack_78);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x108e9dc7c;
  puStack_150 = &UNK_1108434b0;
  _objc_copyWeak(auStack_148,auStack_78);
  func_0x00010bffa080();
  _objc_copyWeak(auStack_170,auStack_78);
  _objc_retain(puVar2);
  func_0x00010be11540(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 108e9da08; end: 108e9dad7;  */

void FUN_108e9da08(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be465a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e9dad8; end: 108e9dae3;  */

void FUN_108e9dad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e9dae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e9dae4; end: 108e9dd1f;  */

void FUN_108e9dae4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108e9db5c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000107c312d0("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108e9dd20; end: 108e9dddf;  */

void FUN_108e9dd20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e9dde0;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e9dde0; end: 108e9de13;  */

void FUN_108e9dde0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beafbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e9de14; end: 108e9df1b; -[SCStoryInviteReceiverSwipeUpViewController _setupSheetViewWithSheetContext:storyThumbnailData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9de14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277d004);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126dc4f0;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010bdf59e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c032a60(puVar2,param_2,param_1,lVar3,param_3,uVar1);
  _objc_release(param_3);
  lVar4 = (long)_DAT_11277d018;
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar5);
  _objc_release(lVar3);
  func_0x00010c182b20(param_1,param_2,*(undefined8 *)(param_1 + lVar4),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e9df1c; end: 108e9e03b; -[SCStoryInviteReceiverSwipeUpViewController _joinStoryWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9df1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277cfc8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277cfc4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277cfe0);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277d008);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cfcc);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_78 = FUN_108e9e03c;
  puStack_70 = &UNK_110849380;
  uStack_80 = 0xc2000000;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_3;
  FUN_108e9ef44(uVar2,uVar3,uVar4,uVar5,uVar1,&puStack_88);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 108e9e03c; end: 108e9e07f;  */

void FUN_108e9e03c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e9e080; end: 108e9e343; -[SCStoryInviteReceiverSwipeUpViewController _handleJoinWithSuccess:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9e080(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar2 = param_4;
  _objc_retain();
  if ((param_3 & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
  }
  else {
    _dispatch_group_create();
    _objc_initWeak(auStack_78,param_1);
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_108e9d5a4;
    uStack_88 = 0x108e9d5b4;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_108e9d5a4;
    uStack_b8 = 0x108e9d5b4;
    uStack_b0 = 0;
    puStack_a0 = &uStack_a8;
    _dispatch_group_enter(lVar2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277cff0);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277cff4);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11277cfc8);
    uVar3 = 0x19;
    func_0x000107c312b8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_108e9e344;
    puStack_f8 = &UNK_110ac7f78;
    puStack_e8 = &uStack_a8;
    _objc_copyWeak(auStack_e0,auStack_78);
    _objc_retain(lVar2);
    lStack_f0 = lVar2;
    FUN_108e9b8ec(uVar4,uVar5,uVar6,uVar3,&puStack_110);
    _objc_release(uVar3);
    _dispatch_group_enter(lVar2);
    puStack_140 = puVar1;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x108e9e3bc;
    puStack_128 = &UNK_110ac80a8;
    puStack_118 = &uStack_d8;
    _objc_retain(lVar2);
    lStack_120 = lVar2;
    func_0x00010be11540(param_1);
    uVar3 = 0x19;
    func_0x000107c312b8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar1;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108e9e418;
    puStack_160 = &UNK_110849cb0;
    puStack_150 = &uStack_a8;
    _objc_retain(param_4);
    puStack_148 = &uStack_d8;
    lStack_158 = param_4;
    func_0x000107c27d98(lVar2,uVar3,&puStack_178);
    _objc_release(uVar3);
    _objc_release(lStack_158);
    _objc_release(lStack_120);
    _objc_release(lStack_f0);
    _objc_destroyWeak(auStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108e9e344; end: 108e9e417;  */

void FUN_108e9e344(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be27c80();
  _objc_release(lVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e9e418; end: 108e9e50b;  */

void FUN_108e9e418(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    func_0x000107c312d0("APPSTORE",&PTR___NSConcreteGlobalBlock_110ac80d8);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c312d0("APPSTORE",&PTR___NSConcreteGlobalBlock_110ac80f8);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000108e9e49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,uVar2,uVar3);
  return;
}



/* Entry: 108e9e50c; end: 108e9e56b; -[SCStoryInviteReceiverSwipeUpViewController _handleCustomStoryMetadataFetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9e50c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11277d01c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c259ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e9e56c; end: 108e9e66b; -[SCStoryInviteReceiverSwipeUpViewController _fetchFriendStoriesWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9e56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277cfc8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277cffc);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cff8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108e9e66c;
  puStack_60 = &UNK_110ac7f48;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_3;
  FUN_108e9bda0(uVar2,uVar3,uVar1,&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108e9e66c; end: 108e9e6bf;  */

void FUN_108e9e66c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31200();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e9e6c0; end: 108e9e8eb; -[SCStoryInviteReceiverSwipeUpViewController _handleStorySummaryInfo:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9e6c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar14 = (long)_DAT_11277d014;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = param_3;
  _objc_release(uVar1);
  if (param_4 != 0) {
    if (*(long *)(param_1 + lVar14) == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      puVar2 = PTR_PTR_1126dc4f8;
      _objc_alloc();
      uVar3 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0ed6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c26d760(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0880c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c26d760(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020bc0(puVar2);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
      (**(code **)(param_4 + 0x10))(param_4,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e9e8ec; end: 108e9e94b; -[SCStoryInviteReceiverSwipeUpViewController _addToStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9e8ec(long param_1)

{
  param_1 = param_1 + _DAT_11277d01c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c259ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e9e94c; end: 108e9e9b3; -[SCStoryInviteReceiverSwipeUpViewController _showStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9e94c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277d014) != 0) {
    param_1 = param_1 + _DAT_11277d01c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c259f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e9e9b4; end: 108e9ec63; -[SCStoryInviteReceiverSwipeUpViewController _createViewModelWithStoryThumbnailData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9e9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar12 = (long)_DAT_11277cfd4;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dc500;
  _objc_alloc(PTR_PTR_1126dc500);
  uVar4 = uVar2;
  func_0x00010bf1bae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf1bae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7c00(puVar3,param_2,uVar5,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010befa120(puVar1,param_2,puVar3);
  uVar9 = *(ulong *)(param_1 + lVar12);
  func_0x00010bf529e0();
  if (1 < uVar9) {
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126dc500;
    _objc_alloc(PTR_PTR_1126dc500);
    uVar4 = uVar10;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf1bae0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c2923e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7c00(puVar11,param_2,uVar5,uVar7,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010befa120(puVar1,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar10);
  }
  puVar11 = PTR_PTR_1126dc508;
  _objc_alloc(PTR_PTR_1126dc508);
  func_0x00010bff8360();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 108e9ec64; end: 108e9ed9b; -[SCStoryInviteReceiverSwipeUpViewController composerWillCreateViewForClass:nodeId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9ec64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126dc510;
  _objc_opt_class(PTR_PTR_1126dc510);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,puVar4);
  if ((int)uVar1 == 0) {
    puVar4 = PTR_PTR_1126dc518;
    _objc_opt_class(PTR_PTR_1126dc518);
    func_0x00010c071ae0(param_3,param_2,puVar4);
    if ((int)param_3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126dc518;
      _objc_alloc(PTR_PTR_1126dc518);
      func_0x00010c063340();
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277cfd4);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126dc510;
    _objc_alloc(PTR_PTR_1126dc510);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277cfe4);
    uVar1 = uVar2;
    func_0x00010bf1bae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013f20(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar4,param_2,uVar5,uVar3
                        ,*(undefined8 *)(param_1 + _DAT_11277d00c));
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e9ed9c; end: 108e9eda3; -[SCStoryInviteReceiverSwipeUpViewController pageViewName] */

undefined8 FUN_108e9ed9c(void)

{
  return 0x140;
}



/* Entry: 108e9eda4; end: 108e9edc3; -[SCStoryInviteReceiverSwipeUpViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9eda4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d01c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e9edc4; end: 108e9edd7; -[SCStoryInviteReceiverSwipeUpViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9edc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d01c,param_3);
  return;
}



/* Entry: 108e9edd8; end: 108e9ef2f; -[SCStoryInviteReceiverSwipeUpViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9edd8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277d01c);
  _objc_storeStrong(param_1 + _DAT_11277d008,0);
  _objc_storeStrong(param_1 + _DAT_11277cfcc,0);
  _objc_storeStrong(param_1 + _DAT_11277d00c,0);
  _objc_storeStrong(param_1 + _DAT_11277d014,0);
  _objc_storeStrong(param_1 + _DAT_11277d000,0);
  _objc_storeStrong(param_1 + _DAT_11277cffc,0);
  _objc_storeStrong(param_1 + _DAT_11277d004,0);
  _objc_storeStrong(param_1 + _DAT_11277cff8,0);
  _objc_storeStrong(param_1 + _DAT_11277cff4,0);
  _objc_storeStrong(param_1 + _DAT_11277cff0,0);
  _objc_destroyWeak(param_1 + _DAT_11277cfe8);
  _objc_storeStrong(param_1 + _DAT_11277cfe4,0);
  _objc_storeStrong(param_1 + _DAT_11277d018,0);
  _objc_storeStrong(param_1 + _DAT_11277cfe0,0);
  _objc_storeStrong(param_1 + _DAT_11277cfd4,0);
  _objc_storeStrong(param_1 + _DAT_11277cfd8,0);
  _objc_storeStrong(param_1 + _DAT_11277cfd0,0);
  _objc_storeStrong(param_1 + _DAT_11277cfc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cfc4,0);
  return;
}



/* Entry: 108e9ef30; end: 108e9ef43;  */

void FUN_108e9ef30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 108e9ef44; end: 108e9f10f;  */

void FUN_108e9ef44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c48a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c0271a0();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b55a8;
  _objc_alloc(PTR_PTR_1126b55a8);
  func_0x00010c01eaa0();
  uVar3 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retain(param_6);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c085aa0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  return;
}



/* Entry: 108e9f110; end: 108e9f18f;  */

void FUN_108e9f110(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_2 == 1) && (param_3 == 0)) {
    func_0x00010c0b1060(*(undefined8 *)(param_1 + 0x28));
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e9f190; end: 108e9f4f7;  */

void FUN_108e9f190(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfee000();
  if (lVar1 == 10) {
    lVar1 = param_3;
    func_0x00010c0846e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c259fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b13b0;
    lVar1 = lVar4;
    func_0x00010c25a5c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(lVar4);
    func_0x00010c259fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar11 = PTR_PTR_1126ba898;
    _objc_alloc();
    func_0x00010c27dd80();
    func_0x00010bfee000();
    lVar1 = param_3;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf377a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf5d7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1281e0(param_3);
    uVar12 = param_1;
    uVar15 = param_2;
    func_0x00010bf345e0(param_3);
    uVar13 = uVar12;
    func_0x00010c141a80(param_3);
    uVar14 = uVar13;
    func_0x00010c14e120(param_3);
    lVar6 = param_3;
    func_0x00010c269880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081660();
    func_0x00010c081160();
    lVar7 = param_3;
    func_0x00010c2790e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c000();
    func_0x00010c280560();
    func_0x00010c073260();
    lVar9 = param_3;
    func_0x00010bf06320();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010bf8c1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055c20(param_1,param_2,uVar12,uVar15,uVar13,uVar14,puVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 108e9f4f8; end: 108e9f8a7; +[SCStoryInviteSenderUtilities createStoryWithUserSession:stickerState:customStoriesDataFetcher:customStoriesDataMutator:logger:inviteService:completionPerformer:completion:] */

void FUN_108e9f4f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c259fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  lVar2 = lVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    _objc_release(lVar2);
  }
  else {
    lVar3 = lVar4;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar5 != 0) {
      uVar8 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c259cc0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_9;
      func_0x00010c11de00(param_9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_10);
      _objc_retain(lVar4);
      func_0x00010bf62500(uVar8);
      _objc_release(uVar6);
      _objc_release(lVar2);
      _objc_release(uVar8);
      _objc_release(lVar4);
      _objc_release(param_10);
      goto LAB_108e9f848;
    }
  }
  lVar2 = param_3;
  func_0x00010c135d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c27dd80();
  iVar1 = (int)lVar3;
  if (((iVar1 == -0x4524111) || (iVar1 == 2)) || (iVar1 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 3;
  }
  lVar3 = lVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    _objc_release(lVar3);
LAB_108e9f7d4:
    lVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25a5c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e9fb4c(lVar3,lVar5,uVar8,param_6,param_5,lVar2,param_7,param_8,param_9,param_10);
    _objc_release(lVar5);
  }
  else {
    lVar5 = lVar4;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar3);
    if (lVar7 != 0) goto LAB_108e9f7d4;
    lVar3 = lVar4;
    func_0x00010c259cc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e9f930(param_5,lVar3,uVar8,param_7,param_8,param_9,param_10);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_108e9f848:
  _objc_release(lVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108e9f8a8; end: 108e9f92f;  */

void FUN_108e9f8a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06a860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,uVar2,uVar3);
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e9f930; end: 108e9fb4b;  */

void FUN_108e9f930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ba300;
  _objc_alloc(PTR_PTR_1126ba300);
  func_0x00010c01eac0();
  uVar4 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf56ae0(uVar4);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar3);
  return;
}



/* Entry: 108e9fb4c; end: 108e9febf;  */

void FUN_108e9fb4c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar8 = param_4;
  uVar9 = param_5;
  uVar10 = param_6;
  uVar11 = param_7;
  puVar12 = param_8;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126c24b0;
  if (param_1 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_2);
    func_0x00010c114400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c24b0;
    if (param_3 == (undefined *)0x3) {
      func_0x00010bf62780();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c114400();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126c24b8;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_90 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d340();
    _objc_release(param_2);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar5 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x108ea07e4;
    puStack_d0 = &UNK_110a48810;
    _objc_retain(param_5);
    uStack_c8 = param_5;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    puStack_98 = param_3;
    _objc_retain(param_7);
    uStack_b8 = param_7;
    _objc_retain(param_8);
    puStack_b0 = param_8;
    _objc_retain(param_9);
    uStack_a8 = param_9;
    _objc_retain(param_10);
    uStack_a0 = param_10;
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_108ea07fc;
    puStack_100 = &UNK_11096aa50;
    _objc_retain(param_9);
    uStack_f8 = param_9;
    _objc_retain(param_10);
    uStack_f0 = param_10;
    ppuStack_148 = &puStack_118;
    ppuStack_150 = &puStack_e8;
    puVar8 = (undefined *)0x0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    puVar4 = puVar3;
    puVar12 = PTR___dispatch_main_q_11034be20;
    func_0x00010bf55a40(puVar5);
    _objc_release(puVar5);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  _objc_retain(puVar12);
  _objc_retain(ppuStack_150);
  _objc_retain(ppuStack_148);
  if (puVar8 == (undefined *)0x0) goto LAB_108ea01b8;
  puVar1 = puVar8;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  else {
    puVar2 = puVar8;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      uVar6 = uVar9;
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar8;
      func_0x00010c259cc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuStack_150;
      func_0x00010c11de00(ppuStack_150);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuStack_148);
      _objc_retain(puVar8);
      func_0x00010bf62500(uVar6);
      _objc_release(ppuVar7);
      _objc_release(puVar1);
      _objc_release(uVar6);
      _objc_release(puVar8);
      _objc_release(ppuStack_148);
      goto LAB_108ea01b8;
    }
  }
  puVar1 = puVar4;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c25b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b769af0();
  uVar6 = 3;
  if (puVar3 != (undefined *)0x77297f71) {
    uVar6 = 0;
  }
  _objc_release(puVar2);
  puVar2 = puVar8;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar2);
LAB_108ea0144:
    puVar2 = puVar4;
    func_0x00010c2923e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c25a5c0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e9fb4c(puVar2,puVar3,uVar6,uVar10,uVar9,puVar1,uVar11,puVar12,ppuStack_150,ppuStack_148);
    _objc_release(puVar3);
  }
  else {
    puVar3 = puVar8;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar5 != (undefined *)0x0) goto LAB_108ea0144;
    puVar2 = puVar8;
    func_0x00010c259cc0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e9f930(uVar9,puVar2,uVar6,uVar11,puVar12,ppuStack_150,ppuStack_148);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_108ea01b8:
  _objc_release(ppuStack_148);
  _objc_release(ppuStack_150);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  return;
}



/* Entry: 108e9fec0; end: 108ea0217; +[SCStoryInviteSenderUtilities createStoryWithUserSession:storyInviteStickerStyle:customStoriesDataFetcher:customStoriesDataMutator:logger:inviteService:completionPerformer:completion:] */

void FUN_108e9fec0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_4 == 0) goto LAB_108ea01b8;
  lVar1 = param_4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_4;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar4 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c259cc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_9;
      func_0x00010c11de00(param_9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_10);
      _objc_retain(param_4);
      func_0x00010bf62500(uVar4);
      _objc_release(uVar5);
      _objc_release(lVar1);
      _objc_release(uVar4);
      _objc_release(param_4);
      _objc_release(param_10);
      goto LAB_108ea01b8;
    }
  }
  lVar1 = param_3;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c25b720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b769af0();
  uVar4 = 3;
  if (lVar3 != 0x77297f71) {
    uVar4 = 0;
  }
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    _objc_release(lVar2);
LAB_108ea0144:
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c25a5c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e9fb4c(lVar2,lVar3,uVar4,param_6,param_5,lVar1,param_7,param_8,param_9,param_10);
    _objc_release(lVar3);
  }
  else {
    lVar3 = param_4;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar6 != 0) goto LAB_108ea0144;
    lVar2 = param_4;
    func_0x00010c259cc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e9f930(param_5,lVar2,uVar4,param_7,param_8,param_9,param_10);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108ea01b8:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ea0218; end: 108ea029f;  */

void FUN_108ea0218(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06a860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,uVar2,uVar3);
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ea02a0; end: 108ea067f; +[SCStoryInviteSenderUtilities createStoryWithUserSession:storyInviteInfo:customStoriesDataFetcher:customStoriesDataMutator:logger:inviteService:completionPerformer:completion:] */

void FUN_108ea02a0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (((((param_8 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0))))
     && ((param_7 != 0 && ((param_9 != 0 && (param_10 != 0)))))) {
    uVar2 = param_4;
    func_0x00010bfdcc80();
    if (((int)uVar2 == 0) || (uVar2 = param_4, func_0x00010bfd80a0(), (int)uVar2 == 0)) {
      uVar2 = param_3;
      func_0x00010c135d00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c25b720();
      uVar1 = 0;
      if ((int)uVar5 != 0 && (int)uVar5 != -0x4524111) {
        uVar1 = 3;
      }
      uVar5 = param_4;
      func_0x00010bfdcc80();
      if (((int)uVar5 == 0) || (uVar5 = param_4, func_0x00010bfd80a0(), (uVar5 & 1) != 0)) {
        uVar5 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_4;
        func_0x00010c25a5c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        FUN_108e9fb4c(uVar5,uVar6,uVar1,param_6,param_5,uVar2,param_7,param_8,param_9,param_10);
        _objc_release(uVar6);
      }
      else {
        uVar6 = param_4;
        func_0x00010c259cc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bfe2ee0();
        uVar5 = uVar6;
        func_0x00010c0b5940(uVar6);
        func_0x000107c30948(uVar7,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar6);
        FUN_108e9f930(param_5,uVar5,uVar1,param_7,param_8,param_9,param_10);
      }
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
    else {
      uVar2 = param_4;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bfe2ee0();
      uVar6 = uVar2;
      func_0x00010c0b5940(uVar2);
      func_0x000107c30948(uVar5,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c06a860();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bfe2ee0();
      uVar7 = uVar2;
      func_0x00010c0b5940(uVar2);
      func_0x000107c30948(uVar5,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar2);
      lVar3 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_9;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_10);
      _objc_retain();
      _objc_retain(uVar6);
      func_0x00010bf62500(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(param_10);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ea0680; end: 108ea0693;  */

void FUN_108ea0680(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108ea0690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108ea0694; end: 108ea07b7;  */

void FUN_108ea0694(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108ea07b8;
    puStack_58 = &UNK_1108465d0;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_38 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = uVar3;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = uVar2;
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_70);
    func_0x00010c0b1080(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50));
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    uVar1 = uStack_38;
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x108ea07cc;
    puStack_80 = &UNK_110849530;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    uStack_78 = uVar2;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_98);
    uVar1 = uStack_78;
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 108ea07b8; end: 108ea07fb;  */

void FUN_108ea07b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108ea07c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108ea07fc; end: 108ea086b;  */

void FUN_108ea07fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108ea086c;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 108ea086c; end: 108ea0883;  */

void FUN_108ea086c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108ea0880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 108ea0884; end: 108ea08ff; -[SCStoryInviteStoryThumbnailView initWithWithImageDownloader:] */

undefined1 * FUN_108ea0884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feee0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bead240(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea0900; end: 108ea0927; +[SCStoryInviteStoryThumbnailView bindAttributes:] */

void FUN_108ea0900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_bindAttribute_invalidateLayoutOn_1125a4208,
             &PTR____CFConstantStringClassReference_110efda78,1,
             &PTR___NSConcreteGlobalBlock_110ac81f8,&PTR___NSConcreteGlobalBlock_110ac8238);
  return;
}



/* Entry: 108ea0928; end: 108ea0ae7;  */

bool FUN_108ea0928(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126dc4f8;
  _objc_alloc(PTR_PTR_1126dc4f8);
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c020bc0(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bee4e40(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_3);
  return puVar2 != (undefined *)0x0;
}



/* Entry: 108ea0ae8; end: 108ea0afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea0ae8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cc210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11277d020),PTR_s_setNetworkImage__112650aa8,0);
  return;
}



/* Entry: 108ea0afc; end: 108ea0b9b; -[SCStoryInviteStoryThumbnailView _setupImageViewWithImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea0afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  lVar3 = (long)_DAT_11277d020;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c16d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setAutoresizingMask__112638f48,0x12);
  return;
}



/* Entry: 108ea0b9c; end: 108ea0dcf; -[SCStoryInviteStoryThumbnailView _updateWithThumbnailData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea0b9c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126d5168;
    _objc_alloc(PTR_PTR_1126d5168);
    lVar2 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c085300(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar1,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      uVar8 = 1;
    }
    else {
      lVar3 = param_3;
      func_0x00010c0880c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar8 = 2;
      lVar2 = lVar3;
    }
    puVar5 = PTR_PTR_1126d5170;
    _objc_alloc(PTR_PTR_1126d5170);
    func_0x00010c052020();
    lVar3 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126d5178;
    _objc_alloc(PTR_PTR_1126d5178);
    lVar3 = lVar4;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c0ed6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa8c0(puVar6,param_2,lVar3,uVar8,puVar5,0);
      _objc_release(lVar3);
    }
    else {
      func_0x00010bffa8c0(puVar6,param_2,lVar4,uVar8,puVar5,0);
    }
    puVar7 = PTR_PTR_1126b4860;
    func_0x00010c258dc0(PTR_PTR_1126b4860,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200(*(undefined8 *)(param_1 + _DAT_11277d020),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar4);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ea0dd0; end: 108ea0de3; -[SCStoryInviteStoryThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea0dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d020,0);
  return;
}



/* Entry: 108ea0de4; end: 108ea0fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ea0de4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = param_2;
  func_0x00010c25b6c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_88 = uVar7;
  func_0x00010c127e40(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(0x7fefffffffffffff,param_1,puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c0c78e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_98 = uVar7;
  func_0x00010c127e40(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(0x7fefffffffffffff,param_1,puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_e0;
  pcStack_a8 = FUN_108ea0fc4;
  puStack_d8 = PTR_PTR_1126feee8;
  puStack_e0 = puVar5;
  puStack_d0 = puVar3;
  puStack_c8 = puVar4;
  puStack_c0 = puVar1;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_initWithFrame__1125e2948);
  if (ppuVar6 != (undefined1 **)0x0) {
    func_0x00010beaffc0(ppuVar6);
    func_0x00010beaffe0(ppuVar6);
    func_0x00010beb19c0(ppuVar6);
    func_0x00010beb09c0(ppuVar6);
    puVar1 = (undefined1 *)ppuVar6;
    func_0x00010beae100();
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb668);
    puVar5 = puVar1;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_11277d024);
    *(undefined1 **)((long)ppuVar6 + (long)_DAT_11277d024) = puVar1;
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
  return (undefined1 *)ppuVar6;
}



/* Entry: 108ea0fc4; end: 108ea10af; -[SCStoryInviteStoryStickerCarouselCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ea0fc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126feee8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaffc0(puVar1);
    func_0x00010beaffe0(puVar1);
    func_0x00010beb19c0(puVar1);
    func_0x00010beb09c0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010beae100();
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb668);
    puVar3 = puVar2;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d024);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277d024) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ea10b0; end: 108ea10b7;  */

void FUN_108ea10b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchatterPublicInfoFetcher_11266ebb0);
  return;
}



/* Entry: 108ea10b8; end: 108ea126f; -[SCStoryInviteStoryStickerCarouselCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea10b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277d028;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uVar4 = param_3;
  if (param_3 == uVar5) {
LAB_108ea1248:
    _objc_release(uVar5);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108ea1258;
    }
    puVar2 = PTR_PTR_1126dc370;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + _DAT_11277d02c) = 0;
    if (*(long *)(param_1 + lVar6) != 0) {
      uVar5 = uVar4;
      func_0x00010c25b6c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277d030));
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010c0c78e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277d034));
      _objc_release(uVar5);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      FUN_108ea1270(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277d038));
      _objc_release(uVar3);
      uVar5 = uVar4;
      func_0x00010c25a700(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be10020(param_1);
      goto LAB_108ea1248;
    }
  }
  _objc_release(uVar4);
LAB_108ea1258:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ea1270; end: 108ea12e7;  */

void FUN_108ea1270(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c25b720();
  ppuVar3 = &PTR____CFConstantStringClassReference_110efc3b8;
  if (lVar1 != 3) {
    lVar1 = param_1;
    func_0x00010c25b720();
    if (lVar1 != 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110efc3d8;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ea12e8; end: 108ea1427; -[SCStoryInviteStoryStickerCarouselCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea12e8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277d03c;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    uVar4 = param_3;
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108ea1410;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11277d040));
    puVar3 = PTR_PTR_1126dc370;
    uVar5 = *(ulong *)(param_1 + _DAT_11277d028);
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar4 = uVar1;
    func_0x00010c25a700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be10020(param_1);
  }
  _objc_release(uVar4);
LAB_108ea1410:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ea1428; end: 108ea16e3; -[SCStoryInviteStoryStickerCarouselCell _setupStoryParticipantsContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea1428(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar6 = (long)_DAT_11277d044;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar5);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4000000000000000);
  _objc_release(uVar5);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2a5060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe0660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108ea16e4; end: 108ea1913; -[SCStoryInviteStoryStickerCarouselCell _setupStoryParticipantsImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea16e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126dc520;
  _objc_opt_new();
  lVar5 = (long)_DAT_11277d040;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release();
  FUN_108ffeee0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277d048);
  *(undefined8 *)(param_1 + _DAT_11277d048) = uVar3;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar3);
  _objc_release(puVar1);
  lVar6 = (long)_DAT_11277d044;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf34860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf34860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf348e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108ea1914; end: 108ea1b07; -[SCStoryInviteStoryStickerCarouselCell _setupstoryTypeImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea1914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277d028);
  FUN_108ea1270(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,uVar2);
  lVar5 = (long)_DAT_11277d038;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf34860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277d040;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf34860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf348e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108ea1b08; end: 108ea1cd7; -[SCStoryInviteStoryStickerCarouselCell _setupTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea1b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar6 = (long)_DAT_11277d030;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277d040);
  func_0x00010c2793a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4020000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108ea1cd8; end: 108ea1e8f; -[SCStoryInviteStoryStickerCarouselCell _setupMemberTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea1cd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11277d034;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277d030;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c274200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


