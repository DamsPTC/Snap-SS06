/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079e5ff8; end: 1079e603f; -[SCStoriesPlaybackDataProvider customStoryPlaybackSequences] */

void FUN_1079e5ff8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001084e77a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079e6040; end: 1079e60ab; -[SCStoriesPlaybackDataProvider customStoryPlaybackSequenceWithStoryIds:] */

void FUN_1079e6040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x0001084e787c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e60ac; end: 1079e60b3; -[SCStoriesPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_1079e60ac(void)

{
  return 0;
}



/* Entry: 1079e60b4; end: 1079e60bb; -[SCStoriesPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_1079e60b4(void)

{
  return 0;
}



/* Entry: 1079e60bc; end: 1079e61ff; -[SCStoriesPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

void FUN_1079e60bc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd5820();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0e60();
      _objc_release(uVar3);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x0001084db7f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bf00760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x000107a87ebc(lVar5,1,1,uVar3,*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar6);
    }
    _objc_release(lVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1079e6200; end: 1079e6207; -[SCStoriesPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e6200(void)

{
  return 0;
}



/* Entry: 1079e6208; end: 1079e620f; -[SCStoriesPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e6208(void)

{
  return 0;
}



/* Entry: 1079e6210; end: 1079e6217; -[SCStoriesPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e6210(void)

{
  return 0;
}



/* Entry: 1079e6218; end: 1079e6287; -[SCStoriesPlaybackDataProvider storyAvailability] */

undefined8 FUN_1079e6218(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001084e6e98();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1079e6288; end: 1079e6327; -[SCStoriesPlaybackDataProvider _storiesPlaybackMetadataWithSnapsInfo:viewStateMap:] */

void FUN_1079e6288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1079e6350;
  puStack_48 = &UNK_1108bdb80;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010bd869d0(param_3,&PTR___NSConcreteGlobalBlock_1109f41f8,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1079e6328; end: 1079e634f;  */

void FUN_1079e6328(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1079e6350; end: 1079e636b;  */

void FUN_1079e6350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a87230;
  puStack_60 = &UNK_1109f84d0;
  uStack_48 = 1;
  uStack_47 = 1;
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x000100504554(param_2,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1079e636c; end: 1079e63ef; -[SCStoriesPlaybackDataProvider .cxx_destruct] */

void FUN_1079e636c(long param_1)

{
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



/* Entry: 1079e63f0; end: 1079e657f; -[SCStoriesPlaybackManagementDataProvider initWithStoriesDataCoordinator:myStoriesDataCoordinator:friendStoriesPlaybackDataProvider:localSnapProPlaybackDataProvider:snapViewersDataCoordinator:] */

undefined1 *
FUN_1079e63f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f92f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5c30;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079e6580; end: 1079e65fb; -[SCStoriesPlaybackManagementDataProvider deleteStateWithStoryId:snapComponentId:] */

undefined8 FUN_1079e6580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfaa2c0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1079e65fc; end: 1079e6677; -[SCStoriesPlaybackManagementDataProvider saveStateWithStoryId:snapComponentId:] */

undefined8 FUN_1079e65fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfaa3a0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1079e6678; end: 1079e66db; -[SCStoriesPlaybackManagementDataProvider postingStateByClientId:] */

undefined8 FUN_1079e6678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c105a00();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1079e66dc; end: 1079e6723; -[SCStoriesPlaybackManagementDataProvider snapIdToSnapViewersObservable] */

void FUN_1079e66dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079e6724; end: 1079e684b; -[SCStoriesPlaybackManagementDataProvider queryFriendStorySummaryInfoWithUserId:completion:] */

void FUN_1079e6724(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c25b4c0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_4 + 0x28);
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079e684c; end: 1079e688f;  */

void FUN_1079e684c(long param_1,undefined8 param_2)

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



/* Entry: 1079e6890; end: 1079e6897; -[SCStoriesPlaybackManagementDataProvider friendStoriesPlaybackDataProvider] */

void FUN_1079e6890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1079e6898; end: 1079e689f; -[SCStoriesPlaybackManagementDataProvider localSnapProPlaybackDataProvider] */

void FUN_1079e6898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1079e68a0; end: 1079e68a7; -[SCStoriesPlaybackManagementDataProvider addListener:] */

void FUN_1079e68a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079e68a8; end: 1079e68af; -[SCStoriesPlaybackManagementDataProvider removeListener:] */

void FUN_1079e68a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079e68b0; end: 1079e68b3; -[SCStoriesPlaybackManagementDataProvider didUpdateSummaryInfo:] */

void FUN_1079e68b0(void)

{
  return;
}



/* Entry: 1079e68b4; end: 1079e6a0f; -[SCStoriesPlaybackManagementDataProvider didUpdateMyStoriesDataRequest:] */

void FUN_1079e68b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1079e6a10;
  uStack_40 = 0x1079e6a20;
  uStack_38 = 0;
  func_0x00010c0be260(param_3);
  if (puStack_58[5] != 0) {
    func_0x00010bf7e5e0(*(undefined8 *)(param_1 + 0x30));
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e6a10; end: 1079e6a27;  */

void FUN_1079e6a10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079e6a28; end: 1079e6b07;  */

void FUN_1079e6a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5c38;
  func_0x00010c14b0e0(PTR_PTR_1126d5c38,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079e6b08; end: 1079e6bd7;  */

void FUN_1079e6b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126d5c38;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1052c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1079e6bd8; end: 1079e6c37; -[SCStoriesPlaybackManagementDataProvider .cxx_destruct] */

void FUN_1079e6bd8(long param_1)

{
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



/* Entry: 1079e6c38; end: 1079e6eb7; -[SCStoriesRemoteStoryFetcher initWithMixerNetworkRequester:grapheneMetricsEmitter:adConfigProvider:networkConnectivityMonitor:locationProvider:storiesConfigProvider:circumstanceEngine:adRenderDataParser:discoverFeedDataMutator:discoverFeedDataFetcher:contentObjectResolver:] */

undefined8 *
FUN_1079e6c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f9300;
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
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
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



/* Entry: 1079e6eb8; end: 1079e6efb; -[SCStoriesRemoteStoryFetcher fetchStoriesWithUserIds:ignoreBlockerStories:source:completionQueue:completion:] */

void FUN_1079e6eb8(void)

{
  func_0x00010be148c0();
  return;
}



/* Entry: 1079e6efc; end: 1079e6f0f;  */

void FUN_1079e6efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1080;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1a99c0();
  _objc_release(param_2);
  func_0x00010c1843a0(puVar1);
  func_0x00010c220e20(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079e6f10; end: 1079e6ff7; -[SCStoriesRemoteStoryFetcher fetchPublicUserStoriesWithUserIds:ignoreBlockerStories:source:completionQueue:completion:] */

void FUN_1079e6f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8fe00();
  _objc_release(uVar2);
  func_0x00010be148c0(param_1,param_2,param_3,param_4,(uint)uVar1 ^ 1,param_5,0,
                      &PTR___NSConcreteGlobalBlock_1109f4298,&PTR___NSConcreteGlobalBlock_1109f42b8,
                      param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079e6ff8; end: 1079e700b;  */

void FUN_1079e6ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1080;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1a99c0();
  _objc_release(param_2);
  func_0x00010c1843a0(puVar1);
  func_0x00010c220e20(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079e700c; end: 1079e7053; -[SCStoriesRemoteStoryFetcher fetchSpotlightStoriesWithStoryIds:ignoreBlockerStories:source:completionQueue:completion:] */

void FUN_1079e700c(void)

{
  func_0x00010be148c0();
  return;
}



/* Entry: 1079e7054; end: 1079e7063;  */

void FUN_1079e7054(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bf44740(param_2,param_2,&PTR____CFConstantStringClassReference_110e610f8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 3) {
    puVar2 = PTR_PTR_1126b1080;
    _objc_alloc_init(PTR_PTR_1126b1080);
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1843a0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c220e20(puVar2);
    _objc_release(lVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079e7064; end: 1079e735f; -[SCStoriesRemoteStoryFetcher _fetchStoriesWithStoryIds:ignoreBlockerStories:lookupSource:source:feedType:compositeStoryIdBuilder:compositeStoryIdParser:completionQueue:completion:] */

void FUN_1079e7064(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1079e7360;
    puStack_88 = &UNK_110849530;
    _objc_retain(param_11);
    uStack_80 = param_11;
    func_0x00010007380c(param_10,&puStack_a0);
    uVar3 = uStack_80;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_a8,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1079e7374;
    puStack_d8 = &UNK_1109f4318;
    _objc_copyWeak(auStack_b8,auStack_a8);
    _objc_retain(param_3);
    lStack_d0 = param_3;
    uStack_b0 = param_4;
    _objc_retain(param_7);
    uStack_c8 = param_7;
    _objc_retain(param_8);
    uStack_c0 = param_8;
    _objc_retain(uVar3);
    _objc_copyWeak(auStack_f8,auStack_a8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    func_0x00010bfa5340(uVar2);
    _objc_release(uVar2);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_destroyWeak(auStack_f8);
    _objc_release(uVar3);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(lStack_d0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(uVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e7360; end: 1079e7373;  */

void FUN_1079e7360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e7370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1079e7374; end: 1079e73c3;  */

void FUN_1079e7374(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd2ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1079e73c4; end: 1079e742b;  */

void FUN_1079e73c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x000108471400(param_3,uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29b60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079e742c; end: 1079e7b3b; -[SCStoriesRemoteStoryFetcher _handleFetchedStoryResponse:compositeStoryIdParser:completionQueue:completion:] */

void FUN_1079e742c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010846e4c8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0ef8;
  _objc_alloc();
  lVar4 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ef40();
  _objc_release(puVar12);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x000108482f84(lVar2,puVar3,0,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar13 = *(long *)(param_1 + 0x50);
    func_0x00010c259740(lVar4);
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 == 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_f8 = lVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a480(uVar14);
      _objc_release(puVar12);
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_retain(uVar14);
  _objc_retain(param_4);
  lVar13 = param_3;
  func_0x00010c13b980();
  if (lVar13 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar13 = param_3;
    func_0x00010c13b960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar13;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar16 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar13);
          }
          uVar15 = *(ulong *)(lStack_138 + lVar16 * 8);
          _objc_retain(uVar15);
          _objc_retain(uVar14);
          _objc_retain(param_4);
          uVar7 = uVar15;
          func_0x00010bfd58a0();
          if ((int)uVar7 == 0) {
            lVar11 = 0;
          }
          else {
            uVar7 = uVar15;
            func_0x00010bf454e0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = param_4;
            (**(code **)(param_4 + 0x10))(param_4,uVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
          }
          uVar7 = uVar15;
          func_0x00010c252d60();
          if ((int)uVar7 != 3) {
            uVar7 = uVar15;
            func_0x00010c252d60();
            if ((int)uVar7 == 1) {
              uVar7 = uVar15;
              func_0x00010bfdcc60();
              if ((uVar7 & 1) != 0) {
                uVar7 = uVar15;
                func_0x00010c2592e0();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x00010bf31ee0();
                _objc_release(uVar7);
                uVar7 = uVar15;
                if ((int)uVar8 == 0x26) {
                  func_0x00010c2592e0(uVar15);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar7;
                  func_0x00010c23cdc0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = uVar8;
                  func_0x000108f0a708();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  if ((int)uVar8 != 4) {
                    puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
                    _objc_alloc(PTR__OBJC_CLASS___NSException_1126af520);
                    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c2592e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf31ee0();
                    func_0x00010c14de00(puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c02da20(puVar3);
                    _objc_autorelease();
                    _objc_release(puVar12);
                    _objc_release(uVar15);
                    goto LAB_1079e796c;
                  }
                  func_0x00010c2592e0(uVar15);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar7;
                  func_0x00010c11ab00();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = uVar8;
                  func_0x000108f08890();
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(uVar8);
                _objc_release(uVar7);
                uVar7 = uVar15;
                func_0x00010c2592e0(uVar15);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x000108f09284();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar7);
                _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
                uVar7 = uVar9;
                func_0x00010c246ca0(uVar9);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar9);
                _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
                puVar12 = PTR_PTR_1126d5c40;
                _objc_alloc(PTR_PTR_1126d5c40);
                func_0x00010c04db60();
                _objc_release(uVar8);
                _objc_release(uVar7);
                goto LAB_1079e78d4;
              }
              puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
              _objc_alloc(PTR__OBJC_CLASS___NSException_1126af520);
              func_0x00010c02da20();
              _objc_autorelease();
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
              _objc_alloc(PTR__OBJC_CLASS___NSException_1126af520);
              func_0x00010c02da20();
              _objc_autorelease();
            }
LAB_1079e796c:
            _objc_exception_throw(puVar3);
            goto LAB_1079e7b34;
          }
          puVar12 = PTR_PTR_1126d5c40;
          _objc_alloc(PTR_PTR_1126d5c40);
          func_0x00010c04db60();
LAB_1079e78d4:
          _objc_release(lVar11);
          _objc_release(param_4);
          _objc_release(uVar14);
          _objc_release(uVar15);
          func_0x00010befa120(puVar5);
          _objc_release(puVar12);
          lVar16 = lVar16 + 1;
        } while (lVar6 != lVar16);
        lVar6 = lVar13;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar13);
    puVar12 = puVar5;
    func_0x00010bf51e00();
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(uVar14);
  _objc_release(param_3);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1079e7b3c;
  puStack_158 = &UNK_11084aaa8;
  puStack_150 = puVar12;
  uStack_148 = param_6;
  _objc_retain();
  func_0x00010007380c(param_5,&puStack_170);
  _objc_release(param_5);
  _objc_release(uStack_148);
  _objc_release(param_6);
  _objc_release(puVar12);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_1079e7b34:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1079e7b38);
  (*pcVar1)();
}



/* Entry: 1079e7b3c; end: 1079e7b4f;  */

void FUN_1079e7b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e7b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1079e7b50; end: 1079e7d0b; -[SCStoriesRemoteStoryFetcher _batchStoryLookupRequestWithStoryIds:ignoreBlockerStories:feedType:compositeStoryIdBuilder:] */

void FUN_1079e7b50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d5c48;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d64a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f13840(uVar3,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar1);
  _objc_release(uVar3);
  func_0x00010c1a9c80(puVar1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = param_3;
  func_0x00010bf43280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf51e00(uVar3);
  func_0x00010c1ebde0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079e7d0c; end: 1079e7db7;  */

void FUN_1079e7d0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c0dd8;
    _objc_opt_new(PTR_PTR_1126c0dd8);
    func_0x00010c1805c0();
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar2 = PTR_PTR_1126d5c50;
      _objc_opt_new(PTR_PTR_1126d5c50);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c067ec0(uVar3);
      func_0x00010c19b200(puVar2,param_2,uVar3);
      func_0x00010c196c60(puVar4,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079e7db8; end: 1079e7e53; -[SCStoriesRemoteStoryFetcher .cxx_destruct] */

void FUN_1079e7db8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1079e7e54; end: 1079e7fff; -[SCStoriesOperaPlaybackSequence storySnaps] */

void FUN_1079e7e54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_170 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1079e8000;
  uStack_30 = 0x1079e8010;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1079e8018;
  puStack_60 = &UNK_1109214e8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1079e8058;
  puStack_88 = &UNK_110921518;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1079e8098;
  puStack_b0 = &UNK_11092a400;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1079e80d8;
  puStack_d8 = &UNK_11092a430;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1079e8118;
  puStack_100 = &UNK_110920c78;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1079e8158;
  puStack_128 = &UNK_11092a460;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x1079e8198;
  puStack_150 = &UNK_1109215c8;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x1079e81d8;
  puStack_178 = &UNK_110960ea8;
  puStack_148 = puStack_170;
  puStack_120 = puStack_170;
  puStack_f8 = puStack_170;
  puStack_d0 = puStack_170;
  puStack_a8 = puStack_170;
  puStack_80 = puStack_170;
  puStack_58 = puStack_170;
  puStack_48 = puStack_170;
  func_0x00010c0bdf40(param_1,param_2,&puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118,
                      &puStack_140,&puStack_168,&puStack_190);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e8000; end: 1079e8017;  */

void FUN_1079e8000(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079e8018; end: 1079e8217;  */

void FUN_1079e8018(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e8218; end: 1079e8317; -[SCStoriesOperaPlaybackSequence asFriendMergedPlaybackSequence] */

void FUN_1079e8218(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1079e8000;
  uStack_30 = 0x1079e8010;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1079e8318;
  puStack_60 = &UNK_1109214e8;
  puStack_48 = puStack_58;
  func_0x00010c0bdf40(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_1109f43a8,
                      &PTR___NSConcreteGlobalBlock_1109f43c8,&PTR___NSConcreteGlobalBlock_1109f43e8,
                      &PTR___NSConcreteGlobalBlock_1109f4408,&PTR___NSConcreteGlobalBlock_1109f4428,
                      &PTR___NSConcreteGlobalBlock_1109f4448,&PTR___NSConcreteGlobalBlock_1109f4468)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e8318; end: 1079e834f;  */

void FUN_1079e8318(long param_1,undefined8 param_2)

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



/* Entry: 1079e8350; end: 1079e836b;  */

void FUN_1079e8350(void)

{
  return;
}



/* Entry: 1079e836c; end: 1079e846b; -[SCStoriesOperaPlaybackSequence asSingleSnapPlaybackSequence] */

void FUN_1079e836c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1079e8000;
  uStack_30 = 0x1079e8010;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1079e847c;
  puStack_60 = &UNK_110920c78;
  puStack_48 = puStack_58;
  func_0x00010c0bdf40(param_1,param_2,&PTR___NSConcreteGlobalBlock_1109f4488,
                      &PTR___NSConcreteGlobalBlock_1109f44a8,&PTR___NSConcreteGlobalBlock_1109f44c8,
                      &PTR___NSConcreteGlobalBlock_1109f44e8,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_1109f4508,&PTR___NSConcreteGlobalBlock_1109f4528,
                      &PTR___NSConcreteGlobalBlock_1109f4548);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e846c; end: 1079e847b;  */

void FUN_1079e846c(void)

{
  return;
}



/* Entry: 1079e847c; end: 1079e84b3;  */

void FUN_1079e847c(long param_1,undefined8 param_2)

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



/* Entry: 1079e84b4; end: 1079e84bf;  */

void FUN_1079e84b4(void)

{
  return;
}



/* Entry: 1079e84c0; end: 1079e858b; -[SCStoriesPublicProfilePlaybackInfo initWithUserId:displayName:isOfficial:officialBadgeType:showOfficialBadge:] */

undefined1 *
FUN_1079e84c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f9308;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079e858c; end: 1079e85af; -[SCStoriesPublicProfilePlaybackInfo copyWithZone:] */

undefined8 FUN_1079e858c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079e85b0; end: 1079e863b; -[SCStoriesPublicProfilePlaybackInfo hash] */

undefined8 * FUN_1079e85b0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1079e86ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079e86f8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)((long)puVar3 + 9) == param_3[9])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1079e86f8;
        }
        goto LAB_1079e86ec;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1079e86f8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1079e863c; end: 1079e8713; -[SCStoriesPublicProfilePlaybackInfo isEqual:] */

long FUN_1079e863c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079e86ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079e86f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1079e86f8;
        }
        goto LAB_1079e86ec;
      }
    }
    lVar3 = 0;
  }
LAB_1079e86f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079e8714; end: 1079e871b; -[SCStoriesPublicProfilePlaybackInfo userId] */

undefined8 FUN_1079e8714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079e871c; end: 1079e8723; -[SCStoriesPublicProfilePlaybackInfo displayName] */

undefined8 FUN_1079e871c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079e8724; end: 1079e872b; -[SCStoriesPublicProfilePlaybackInfo isOfficial] */

undefined1 FUN_1079e8724(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1079e872c; end: 1079e8733; -[SCStoriesPublicProfilePlaybackInfo officialBadgeType] */

undefined8 FUN_1079e872c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079e8734; end: 1079e873b; -[SCStoriesPublicProfilePlaybackInfo showOfficialBadge] */

undefined1 FUN_1079e8734(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1079e873c; end: 1079e876b; -[SCStoriesPublicProfilePlaybackInfo .cxx_destruct] */

void FUN_1079e873c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079e876c; end: 1079e8853; -[SCStoriesRemoteStory initWithStoryId:storySnaps:storyType:discoverMetadata:] */

undefined1 *
FUN_1079e876c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9310;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079e8854; end: 1079e8877; -[SCStoriesRemoteStory copyWithZone:] */

undefined8 FUN_1079e8854(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079e8878; end: 1079e88fb; -[SCStoriesRemoteStory hash] */

undefined8 * FUN_1079e8878(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1079e89a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079e89b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1079e89b0;
          }
          goto LAB_1079e89a4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1079e89b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1079e88fc; end: 1079e89cb; -[SCStoriesRemoteStory isEqual:] */

long FUN_1079e88fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079e89a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079e89b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1079e89b0;
          }
          goto LAB_1079e89a4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079e89b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079e89cc; end: 1079e89d3; -[SCStoriesRemoteStory storyId] */

undefined8 FUN_1079e89cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079e89d4; end: 1079e89db; -[SCStoriesRemoteStory storySnaps] */

undefined8 FUN_1079e89d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079e89dc; end: 1079e89e3; -[SCStoriesRemoteStory storyType] */

undefined8 FUN_1079e89dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079e89e4; end: 1079e89eb; -[SCStoriesRemoteStory discoverMetadata] */

undefined8 FUN_1079e89e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079e89ec; end: 1079e8a27; -[SCStoriesRemoteStory .cxx_destruct] */

void FUN_1079e89ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079e8a28; end: 1079e8bcb; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider initWithDiscoverFeedStories:cachedReadReceiptViewStateProvider:grapheneRegistry:storyPlayerModerationData:spotlightInChatContextParams:compositeStoryIdToMessageMap:storiesConfigProvider:] */

undefined1 *
FUN_1079e8a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f9318;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined8 *)((long)puVar2 + 0x48) = param_9;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_5;
    _objc_release(uVar3);
    puVar1 = PTR____NSDictionary0__struct_11034ab58;
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar1;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_8;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x40) = 0xffffffffffffffff;
    func_0x00010c066720(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1079e8bcc; end: 1079e8bcf; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider insertDiscoverFeedStories:] */

void FUN_1079e8bcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beabed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupDataModels__112588958);
  return;
}



/* Entry: 1079e8bd0; end: 1079e8bd3; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider setViewLocationOverride:] */

void FUN_1079e8bd0(void)

{
  return;
}



/* Entry: 1079e8bd4; end: 1079e8bdb; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider setOverrideViewLocation:] */

void FUN_1079e8bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1079e8bdc; end: 1079e8d2f; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider fetchPlaybackMetadataMapForStoryIds:] */

void FUN_1079e8bdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1079e8d58;
  puStack_60 = &UNK_11089dda8;
  lVar2 = param_3;
  uStack_58 = param_1;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1109f4568,&puStack_78);
  lVar3 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  lVar5 = param_3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar4 != lVar5) {
    lVar3 = lVar2;
    func_0x00010bf002e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1079e8d68;
    puStack_88 = &UNK_110856a28;
    puStack_80 = puVar6;
    _objc_retain(puVar6);
    func_0x0001006372a4(param_3,&puStack_a0);
    _objc_release();
    _objc_release(puStack_80);
    _objc_release(puVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1079e8d30; end: 1079e8d57;  */

void FUN_1079e8d30(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1079e8d58; end: 1079e8d73;  */

void FUN_1079e8d58(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_objectForKeyedSubscript__112615a50
             ,param_2);
  return;
}



/* Entry: 1079e8d74; end: 1079e8d77; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider insertAdditionalDiscoverFeedStories:] */

void FUN_1079e8d74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_insertDiscoverFeedStories__1125f73d8);
  return;
}



/* Entry: 1079e8d78; end: 1079e8d7b; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_1079e8d78(void)

{
  return;
}



/* Entry: 1079e8d7c; end: 1079e8de3; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_1079e8d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010bfa9480(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079e8de4; end: 1079e8deb; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider fetchAllDiscoverFeedStories] */

void FUN_1079e8de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 1079e8dec; end: 1079e93bf; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

void FUN_1079e8dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  undefined4 uStack_b0;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      uVar4 = uVar3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      lVar2 = param_1;
      func_0x00010be0eea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cc610;
      _objc_alloc();
      uVar4 = uVar5;
      func_0x00010bf85d80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf24ec0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf24fc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010bf24e60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010bf1acc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010bf1ade0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010c238c20();
      func_0x00010c0e1a60();
      func_0x00010c11a980();
      func_0x00010bff9cc0(puVar6,param_2,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,(char)uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010c0ea200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar7 = uVar5;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      FUN_1079e93c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar13 = PTR_PTR_1126c9028;
      _objc_alloc();
      uVar7 = uVar3;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c259740();
      uVar11 = uVar3;
      func_0x00010c080120();
      uVar12 = uVar5;
      func_0x00010c078f60();
      if ((uVar12 & 1) == 0) {
        uVar12 = uVar5;
        func_0x00010c238c20();
        uStack_b0 = (undefined4)uVar12;
      }
      else {
        uStack_b0 = 1;
      }
      uVar12 = uVar5;
      func_0x00010c0e1a60();
      uVar14 = uVar5;
      func_0x00010c078f60();
      func_0x00010c11ce20();
      func_0x00010bf20ec0();
      uVar15 = uVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b500();
      uVar17 = uVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0724e0();
      uVar19 = uVar3;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c940();
      uVar20 = uVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0822a0();
      func_0x00010c07d8e0();
      if (uVar4 == 0) {
        func_0x00010c000ac0(puVar13,param_2,uVar9,lVar2,uVar10,uVar11 & 0xffffffff,uStack_b0,uVar12,
                            (char)uVar14);
      }
      else {
        uVar4 = uVar3;
        func_0x00010c0ea200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe28e0();
        func_0x00010c000ac0(puVar13,param_2,uVar9,lVar2,uVar10,uVar11 & 0xffffffff,uStack_b0,uVar12,
                            (char)uVar14);
        _objc_release(uVar4);
      }
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar9);
      _objc_release(uVar7);
      lVar21 = lVar2;
      func_0x00010c067ec0();
      if ((int)lVar21 == 2) {
        lVar21 = 0x2d;
      }
      else {
        lVar21 = lVar2;
        func_0x00010c067ec0();
        if (((int)lVar21 == 3) || (lVar21 = lVar2, func_0x00010c067ec0(), (int)lVar21 == 0xf7)) {
          lVar21 = 0x2c;
        }
        else {
          lVar21 = -1;
        }
      }
      if (*(long *)(param_1 + 0x40) != -1) {
        lVar21 = *(long *)(param_1 + 0x40);
      }
      puVar22 = PTR_PTR_1126cc618;
      _objc_alloc(PTR_PTR_1126cc618);
      uVar4 = uVar5;
      func_0x00010c2923e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05b080(puVar22,param_2,uVar4,puVar13,lVar1,lVar21,0,0);
      _objc_release(uVar4);
      _objc_release(puVar13);
      _objc_release(uVar8);
      _objc_release(puVar6);
      _objc_release(lVar2);
      _objc_release(uVar5);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 1079e93c0; end: 1079e9527;  */

void FUN_1079e93c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined *puStack_1c0;
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
  
  puVar24 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  puVar25 = PTR____NSArray0__struct_11034ab48;
  if (lVar3 != 0) {
    lVar27 = *plStack_110;
    do {
      lVar28 = 0;
      do {
        if (*plStack_110 != lVar27) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = *(undefined **)(lStack_118 + lVar28 * 8);
        func_0x00010bf4bf60();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar25;
        if (puVar4 != (undefined *)0x0) {
          puVar1 = puVar4;
        }
        func_0x00010befa160(puVar2,param_2,puVar1);
        _objc_release(puVar4);
        lVar28 = lVar28 + 1;
      } while (lVar3 != lVar28);
      lVar3 = param_1;
      puVar24 = &uStack_120;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  puVar25 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar24);
    lVar27 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar27,param_2,puVar24);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar27;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x10);
      func_0x00010c0e00e0(uVar5,param_2,puVar24);
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == 0) {
        puVar25 = (undefined *)0x0;
      }
      else {
        uVar6 = uVar5;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        puVar2 = PTR_PTR_1126cc610;
        _objc_alloc();
        uVar6 = uVar7;
        func_0x00010c291e80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf24ec0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010bf24fc0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e1a60();
        func_0x00010c14bb20();
        func_0x00010bff9cc0(puVar2,param_2,uVar6,uVar8,uVar9,0,0,0,0);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar6);
        func_0x00010be0eea0(param_1,param_2,puVar24);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0ea200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar8 = uVar7;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        FUN_1079e93c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        puStack_1c0 = PTR_PTR_1126c9028;
        _objc_alloc();
        uVar8 = uVar5;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x000108f51f98();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar5;
        func_0x00010c259740();
        uVar12 = uVar5;
        func_0x00010c080120();
        uVar13 = uVar7;
        func_0x00010c078f60();
        uVar14 = uVar7;
        func_0x00010c0e1a60();
        uVar15 = uVar7;
        func_0x00010c078f60();
        func_0x00010c11ce20();
        uVar16 = uVar5;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar16;
        func_0x00010c11fd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07b500();
        uVar18 = uVar5;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar18;
        func_0x00010c11fd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0724e0();
        uVar20 = uVar5;
        func_0x00010bf66200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07c940();
        uVar21 = uVar5;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0822a0();
        uVar22 = uVar5;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar22;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07d8e0();
        if (uVar6 == 0) {
          func_0x00010c000ac0(puStack_1c0,param_2,uVar10,param_1,uVar11,uVar12 & 0xffffffff,
                              uVar13 & 0xffffffff,uVar14,(char)uVar15);
        }
        else {
          uVar6 = uVar5;
          func_0x00010c0ea200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe28e0();
          func_0x00010c000ac0(puStack_1c0,param_2,uVar10,param_1,uVar11,uVar12 & 0xffffffff,
                              uVar13 & 0xffffffff,uVar14,(char)uVar15);
          _objc_release(uVar6);
        }
        _objc_release(uVar23);
        _objc_release(uVar22);
        _objc_release(uVar21);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(uVar10);
        _objc_release(uVar8);
        lVar3 = param_1;
        func_0x00010c067ec0();
        if ((int)lVar3 == 2) {
          uVar26 = 0x2d;
        }
        else {
          lVar3 = param_1;
          func_0x00010c067ec0();
          if (((int)lVar3 == 3) || (lVar3 = param_1, func_0x00010c067ec0(), (int)lVar3 == 0xf7)) {
            uVar26 = 0x2c;
          }
          else {
            lVar3 = param_1;
            func_0x00010c067ec0();
            uVar26 = 0x39;
            if ((int)lVar3 != 0x101) {
              uVar26 = 0xffffffffffffffff;
            }
          }
        }
        puVar25 = PTR_PTR_1126cc628;
        _objc_alloc(PTR_PTR_1126cc628);
        uVar6 = uVar7;
        func_0x00010c291e80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c25b6c0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar7;
        func_0x00010bf454e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00d500(puVar25,param_2,uVar6,uVar8,uVar10,puStack_1c0,lVar27,uVar26);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(puStack_1c0);
        _objc_release(uVar9);
        _objc_release(param_1);
        _objc_release(puVar2);
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
    }
    _objc_release(lVar27);
    _objc_release(puVar24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1079e9528; end: 1079e9ad3; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

void FUN_1079e9528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uStack_a0;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      uVar4 = uVar3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126cc610;
      _objc_alloc();
      uVar4 = uVar5;
      func_0x00010c291e80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf24ec0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf24fc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1a60();
      func_0x00010c14bb20();
      func_0x00010bff9cc0(puVar6,param_2,uVar4,uVar7,uVar8,0,0,0,0);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar4);
      func_0x00010be0eea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0ea200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar7 = uVar5;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      FUN_1079e93c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uStack_a0 = PTR_PTR_1126c9028;
      _objc_alloc();
      uVar7 = uVar3;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c259740();
      uVar11 = uVar3;
      func_0x00010c080120();
      uVar12 = uVar5;
      func_0x00010c078f60();
      uVar13 = uVar5;
      func_0x00010c0e1a60();
      uVar14 = uVar5;
      func_0x00010c078f60();
      func_0x00010c11ce20();
      uVar15 = uVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b500();
      uVar17 = uVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0724e0();
      uVar19 = uVar3;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c940();
      uVar20 = uVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0822a0();
      uVar21 = uVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d8e0();
      if (uVar4 == 0) {
        func_0x00010c000ac0(uStack_a0,param_2,uVar9,param_1,uVar10,uVar11 & 0xffffffff,
                            uVar12 & 0xffffffff,uVar13,(char)uVar14);
      }
      else {
        uVar4 = uVar3;
        func_0x00010c0ea200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe28e0();
        func_0x00010c000ac0(uStack_a0,param_2,uVar9,param_1,uVar10,uVar11 & 0xffffffff,
                            uVar12 & 0xffffffff,uVar13,(char)uVar14);
        _objc_release(uVar4);
      }
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar9);
      _objc_release(uVar7);
      lVar2 = param_1;
      func_0x00010c067ec0();
      if ((int)lVar2 == 2) {
        uVar24 = 0x2d;
      }
      else {
        lVar2 = param_1;
        func_0x00010c067ec0();
        if (((int)lVar2 == 3) || (lVar2 = param_1, func_0x00010c067ec0(), (int)lVar2 == 0xf7)) {
          uVar24 = 0x2c;
        }
        else {
          lVar2 = param_1;
          func_0x00010c067ec0();
          uVar24 = 0x39;
          if ((int)lVar2 != 0x101) {
            uVar24 = 0xffffffffffffffff;
          }
        }
      }
      puVar23 = PTR_PTR_1126cc628;
      _objc_alloc(PTR_PTR_1126cc628);
      uVar4 = uVar5;
      func_0x00010c291e80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c25b6c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010bf454e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00d500(puVar23,param_2,uVar4,uVar7,uVar9,uStack_a0,lVar1,uVar24);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uStack_a0);
      _objc_release(uVar8);
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1079e9ad4; end: 1079e9adb; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_1079e9ad4(void)

{
  return 0;
}



/* Entry: 1079e9adc; end: 1079e9ae3; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_1079e9adc(void)

{
  return 0;
}



/* Entry: 1079e9ae4; end: 1079e9aeb; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_1079e9ae4(void)

{
  return 0;
}



/* Entry: 1079e9aec; end: 1079e9af3; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e9aec(void)

{
  return 0;
}



/* Entry: 1079e9af4; end: 1079ea233; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

void FUN_1079e9af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
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
  undefined1 uStack_d0;
  undefined4 uStack_c4;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0(puVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010afef994();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    if (puVar4 == (undefined *)0x0) {
      puStack_a0 = puVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010bfe9ee0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar6;
      func_0x00010bf24ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = puVar12;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b500();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0724e0();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0822a0();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c940();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar12;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c080120();
      uStack_c4 = SUB84(puVar6,0);
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ce20();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c078f60();
      uStack_d0 = SUB81(puVar6,0);
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0803a0();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010bf4bf60();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR____NSArray0__struct_11034ab48;
      if (puVar6 != (undefined *)0x0) {
        puStack_78 = puVar6;
      }
      _objc_retain();
      _objc_release(puVar6);
    }
    else {
      puStack_a0 = puVar4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar4;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010c0ea200();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c1561c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = puVar6;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar12);
      puVar12 = puVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b500();
      _objc_release(puVar6);
      _objc_release(puVar12);
      puVar12 = puVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0724e0();
      _objc_release(puVar6);
      _objc_release(puVar12);
      puVar12 = puVar3;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c940();
      _objc_release(puVar12);
      puVar12 = puVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0822a0();
      _objc_release(puVar12);
      puVar12 = puVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar12;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar3;
      func_0x00010c080120();
      uStack_c4 = SUB84(puVar12,0);
      func_0x00010c11ce20();
      puVar12 = puVar3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0803a0();
      _objc_release(puVar6);
      _objc_release(puVar12);
      puVar12 = puVar4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = puVar12;
      FUN_1079e93c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_d0 = 0;
    }
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126cc610;
    _objc_alloc();
    puVar6 = puVar4;
    func_0x00010bf85d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf25140(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010bff9cc0(puVar12,param_2,puVar6,puVar7,0,0,0,0,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c0ea200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR_PTR_1126c9028;
    _objc_alloc(PTR_PTR_1126c9028);
    puVar9 = puVar3;
    func_0x00010bf454e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c259740(puVar3);
    func_0x00010c07d8e0();
    if (puVar6 != (undefined *)0x0) {
      puVar12 = puVar3;
      func_0x00010c0ea200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe28e0();
    }
    func_0x00010c06f940();
    func_0x00010c000ac0(puVar7,param_2,puVar10,puStack_b0,puVar11,uStack_c4,0,0,uStack_d0);
    if (puVar6 != (undefined *)0x0) {
      _objc_release(puVar12);
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar12 = PTR_PTR_1126cc4e8;
    _objc_alloc(PTR_PTR_1126cc4e8);
    puVar6 = puVar4;
    func_0x00010bf85d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d880(puVar12,param_2,param_3,puVar6,puVar7,lVar1);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puStack_78);
    _objc_release(puStack_70);
    _objc_release(puStack_b0);
    _objc_release(puStack_a8);
    _objc_release(puStack_a0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1079ea234; end: 1079ea23b; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider storyAvailability] */

void FUN_1079ea234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1079ea23c; end: 1079ea35f; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider _feedTypeByIdentifier:] */

void FUN_1079ea23c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ea200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1561c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      func_0x00010c0e00e0(lVar5,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    else {
      _objc_retain(lVar4);
      lVar7 = lVar4;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1079ea360; end: 1079ea483; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider storyIdForDiscoverFeedStory:] */

void FUN_1079ea360(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25b720();
  lVar3 = param_3;
  if (lVar1 == 0xe) {
    func_0x000107d01e1c(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 == 0xd) {
      lVar1 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010afef994();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        func_0x000107d02054(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar3 = lVar2;
        func_0x00010bf454e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (lVar1 != 3) {
        lVar3 = 0;
        goto LAB_1079ea460;
      }
      lVar1 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar2;
        func_0x00010c2923e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(lVar2);
  }
LAB_1079ea460:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1079ea484; end: 1079ea5db; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider _setupDataModels:] */

void FUN_1079ea484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1079ea5dc;
  puStack_60 = &UNK_1109f4198;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1079ea5e8;
  puStack_88 = &UNK_1109f4588;
  lStack_80 = param_1;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010050471c(param_3,&puStack_78,&puStack_a0);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1079ea8e0;
  puStack_b0 = &UNK_1109f4198;
  uVar3 = param_3;
  lStack_a8 = param_1;
  func_0x00010050471c(param_3,&puStack_c8,&PTR___NSConcreteGlobalBlock_1109f45b8);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00();
  uVar5 = uVar4;
  func_0x0001006decbc();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar5 = uVar4;
  func_0x0001006decbc();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1079ea5dc; end: 1079ea5e7;  */

void FUN_1079ea5dc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_storyIdForDiscoverFeedStory__112674160,param_2);
  return;
}



/* Entry: 1079ea5e8; end: 1079ea8df;  */

void FUN_1079ea5e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_2);
  lVar10 = param_2;
  func_0x00010c25b720();
  lVar11 = param_2;
  if (lVar10 == 0xe) {
    func_0x000107d01cd8(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1079ea8b4;
  }
  if (lVar10 != 0xd) {
    if (lVar10 == 3) {
      func_0x000107d01514(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar11 = 0;
    }
    goto LAB_1079ea8b4;
  }
  lVar10 = param_2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010afef994();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (lVar1 == 0) {
    lVar10 = *(long *)(param_1 + 0x20);
    func_0x000107d029e0(param_2,*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x28),
                        *(undefined8 *)(lVar10 + 0x30),*(undefined8 *)(lVar10 + 0x38));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar10 = lVar1;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c131c00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if ((lVar2 == 0) && (lVar11 == 0)) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
      func_0x00010bf529e0();
      if (lVar11 == 0) goto LAB_1079ea724;
      lVar3 = 0;
    }
    else {
LAB_1079ea724:
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x00010bf51e00();
      if ((lVar2 != 0) && (lVar3 != 0)) {
        lVar11 = lVar2;
        func_0x00010bf490e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e6d00(lVar3);
        _objc_release(lVar11);
        lVar11 = lVar2;
        func_0x00010bf026e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e6c80(lVar3);
        _objc_release(lVar11);
      }
    }
    lVar4 = lVar2;
    func_0x000107d04fac();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c245680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c22c400(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf25140(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c07dce0();
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    FUN_107a84a68(lVar5,lVar10,lVar6,1,1,1,lVar3,lVar7,lVar4,(char)lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar10);
  }
  _objc_release(lVar1);
LAB_1079ea8b4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}


