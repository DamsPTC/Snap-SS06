/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e92224; end: 104e92263; -[SCProfileFriendsListView viewModel] */

void FUN_104e92224(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e92278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e92264; end: 104e9229b;  */

void FUN_104e92264(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 104e9229c; end: 104e922e3; -[SCCFollowerData initWithUserId:username:displayName:bitmojiAvatarId:bitmojiSelfieId:snapLogoUrl:followedTimeInEpochMillis:] */

void FUN_104e9229c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4a98;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104e922e4; end: 104e922f3; +[SCCFollowerData valdiMarshallableObjectDescriptor] */

void FUN_104e922e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110856168;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e922f4; end: 104e9232b; -[SCCGetFollowersResult initWithFollowers:nextCursor:] */

void FUN_104e922f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4aa0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104e9232c; end: 104e9233f; +[SCCGetFollowersResult valdiMarshallableObjectDescriptor] */

void FUN_104e9232c(undefined8 *param_1)

{
  *param_1 = &PTR_s_followers_110856228;
  param_1[1] = &PTR_s_SCCFollowerData_110856270;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e92340; end: 104e9235f; -[SCFollowersListTabContext init] */

void FUN_104e92340(void)

{
  func_0x000104e924a0(PTR_PTR_1126e4aa8);
  return;
}



/* Entry: 104e92360; end: 104e92373; +[SCFollowersListTabContext valdiMarshallableObjectDescriptor] */

void FUN_104e92360(undefined8 *param_1)

{
  *param_1 = &PTR_s_followersProvider_110856280;
  param_1[1] = &PTR_s_SCCAtlasFollowersProviding_1108562e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e92374; end: 104e92393; -[SCFriendsFollowingFollowersTabsViewContext init] */

void FUN_104e92374(void)

{
  func_0x000104e924a0(PTR_PTR_1126e4ab0);
  return;
}



/* Entry: 104e92394; end: 104e923a7; +[SCFriendsFollowingFollowersTabsViewContext valdiMarshallableObjectDescriptor] */

void FUN_104e92394(undefined8 *param_1)

{
  *param_1 = &PTR_s_friends_1108562f0;
  param_1[1] = &PTR_s_SCFriendsListTabContext_110856350;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e923a8; end: 104e923c7; -[SCFriendsListTabContext init] */

void FUN_104e923a8(void)

{
  func_0x000104e924a0(PTR_PTR_1126e4ab8);
  return;
}



/* Entry: 104e923c8; end: 104e923db; +[SCFriendsListTabContext valdiMarshallableObjectDescriptor] */

void FUN_104e923c8(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_110856370;
  param_1[1] = &PTR_s_SCCFriendStoring_110856400;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e923dc; end: 104e923fb; -[SCFriendsListTabViewProps initWithIsSubscribedToPlus:] */

void FUN_104e923dc(void)

{
  func_0x000104e924d0(PTR_PTR_1126e4ac0);
  return;
}



/* Entry: 104e923fc; end: 104e9240b; +[SCFriendsListTabViewProps valdiMarshallableObjectDescriptor] */

void FUN_104e923fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_isSubscribedToPlus_110856420;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e9240c; end: 104e9242b; -[SCHeaderContext init] */

void FUN_104e9240c(void)

{
  func_0x000104e924a0(PTR_PTR_1126e4ac8);
  return;
}



/* Entry: 104e9242c; end: 104e9243b; +[SCHeaderContext valdiMarshallableObjectDescriptor] */

void FUN_104e9242c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_showHeader_110856450;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e9243c; end: 104e9245b; -[SCProfileFriendsListViewContext init] */

void FUN_104e9243c(void)

{
  func_0x000104e924a0(PTR_PTR_1126e4ad0);
  return;
}



/* Entry: 104e9245c; end: 104e9246f; +[SCProfileFriendsListViewContext valdiMarshallableObjectDescriptor] */

void FUN_104e9245c(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_1108564c8;
  param_1[1] = &PTR_s_SCCFriendStoring_110856558;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e92470; end: 104e9248f; -[SCProfileFriendsListViewProps initWithIsSubscribedToPlus:] */

void FUN_104e92470(void)

{
  func_0x000104e924d0(PTR_PTR_1126e4ad8);
  return;
}



/* Entry: 104e92490; end: 104e924fb; +[SCProfileFriendsListViewProps valdiMarshallableObjectDescriptor] */

void FUN_104e92490(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_isSubscribedToPlus_110856578;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e924fc; end: 104e92507; -[SCAddFriendsPageActionSheet defaultProjectNameV2] */

void FUN_104e924fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb9310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_friending_1125cbe68);
  return;
}



/* Entry: 104e92508; end: 104e925fb; -[SCAddFriendsRecentlyActionPageActionMenuPresenter initWithPageTypeItems:presentingViewController:recentlyActionPageScopeExposer:recentlyActionPageScopeServices:] */

undefined1 *
FUN_104e92508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e4ae0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e925fc; end: 104e926a7; -[SCAddFriendsRecentlyActionPageActionMenuPresenter present] */

void FUN_104e925fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1878;
  _objc_alloc(PTR_PTR_1126b1878);
  lVar2 = param_1;
  func_0x00010be1db60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be1f260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar1,param_2,0,0,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10af80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e926a8; end: 104e92757; -[SCAddFriendsRecentlyActionPageActionMenuPresenter _getCells] */

void FUN_104e926a8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104e92758;
  puStack_38 = &UNK_1108565d8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100504554(uVar1,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e92758; end: 104e92897;  */

void FUN_104e92758(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c067fc0();
  puVar2 = PTR_PTR_1126b10a0;
  if (lVar1 == 2) {
    unaff_x22 = lVar1;
    func_0x000104e92b8c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 1) {
    unaff_x22 = lVar1;
    func_0x000104e92b74();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 0) {
    unaff_x22 = lVar1;
    func_0x000104e92b5c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0ec240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x20);
  puVar3 = puVar2;
  lStack_48 = lVar1;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar2);
  _objc_release(unaff_x22);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e92898; end: 104e92943;  */

void FUN_104e92898(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104e92944; end: 104e92977;  */

void FUN_104e92944(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0ce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e92978; end: 104e929f3; -[SCAddFriendsRecentlyActionPageActionMenuPresenter _getFooter] */

void FUN_104e92978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b10a0;
  FUN_104e92b44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e929f4; end: 104e929ff;  */

void FUN_104e929f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheetWithCompletion_1125be5a8,0)
  ;
  return;
}



/* Entry: 104e92a00; end: 104e92ab7; -[SCAddFriendsRecentlyActionPageActionMenuPresenter _exposeFeatureScopeWithType:] */

void FUN_104e92a00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1880;
  _objc_alloc(PTR_PTR_1126b1880);
  func_0x00010c033380();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22fa0(uVar4,param_2,param_1,puVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e92ab8; end: 104e92aff; -[SCAddFriendsRecentlyActionPageActionMenuPresenter recentlyActionPageFinished] */

void FUN_104e92ab8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e92b00; end: 104e92b43; -[SCAddFriendsRecentlyActionPageActionMenuPresenter .cxx_destruct] */

void FUN_104e92b00(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e92b44; end: 104e92ba3;  */

void FUN_104e92b44(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2a78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db2a78,
                      &PTR____CFConstantStringClassReference_110db8978,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104e92ba4; end: 104e92c17; -[SCPostRegAddFriendsActionHandler initWithMultiSelectStateObserver:] */

undefined1 * FUN_104e92ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4ae8;
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



/* Entry: 104e92c18; end: 104e92dbb; -[SCPostRegAddFriendsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined * FUN_104e92c18(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1888;
  _objc_opt_class(PTR_PTR_1126b1888);
  puVar7 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar7 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar7 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar7 != 0) {
    puVar1 = puVar2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)(ulong)(puVar1 != (undefined *)0x0);
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010bfecf20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb560(uVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2,0);
  return puVar2;
}



/* Entry: 104e92dbc; end: 104e92dc7; -[SCPostRegAddFriendsActionHandler .cxx_destruct] */

void FUN_104e92dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e92dc8; end: 104e92dd3; +[SCPostRegAddFriendsSectionDataProvider announcerIdentifier] */

undefined ** FUN_104e92dc8(void)

{
  return &PTR____CFConstantStringClassReference_110db8a38;
}



/* Entry: 104e92dd4; end: 104e92ddb; -[SCPostRegAddFriendsSectionDataProvider addListener:] */

void FUN_104e92dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104e92ddc; end: 104e92de3; -[SCPostRegAddFriendsSectionDataProvider removeListener:] */

void FUN_104e92ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104e92de4; end: 104e92fdf; -[SCPostRegAddFriendsSectionDataProvider initWithSnapchattersDataFetcher:snapchattersDataTracker:imageDownloader:viewModelGenerator:multiSelectStateObserver:circumstanceEngine:friendingExperimentReader:] */

undefined1 *
FUN_104e92de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e4af0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1890;
    uVar2 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf11200();
    *(char *)((long)puVar1 + 0x60) = (char)puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e92fe0; end: 104e92fe3; -[SCPostRegAddFriendsSectionDataProvider reloadSections] */

void FUN_104e92fe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 104e92fe4; end: 104e9301b; -[SCPostRegAddFriendsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104e92fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beafa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupSelectedSnapchattersSubscr_112589830);
  return;
}



/* Entry: 104e9301c; end: 104e93023; -[SCPostRegAddFriendsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_104e9301c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104e93024; end: 104e931df; -[SCPostRegAddFriendsSectionDataProvider setSectionDataModel:] */

void FUN_104e93024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x28) = 1;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e931e0;
  puStack_78 = &UNK_1108434e0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c2622c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010bf4a460(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_98);
  }
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 104e931e0; end: 104e93277;  */

void FUN_104e931e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7bc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e93278; end: 104e9341b; -[SCPostRegAddFriendsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104e93278(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010bf51e00();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          uVar4 = *(ulong *)(lStack_118 + lVar8 * 8);
          func_0x00010c0840e0();
          lVar5 = lVar2;
          func_0x00010bf529e0();
          if (lVar5 - 1U < uVar4) goto LAB_104e933a8;
          lVar5 = lVar2;
          func_0x00010c0dfd40(lVar2,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3,param_2,lVar5);
          _objc_release(lVar5);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
LAB_104e933a8:
    _objc_release(param_3);
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar3 = PTR_PTR_1126b16d8;
    _objc_opt_class(PTR_PTR_1126b16d8);
    func_0x00010c1d0640(puVar6,param_2,puVar3,&PTR____CFConstantStringClassReference_110db89f8);
    puVar3 = PTR_PTR_1126b1898;
    _objc_opt_class(PTR_PTR_1126b1898);
    func_0x00010c1d0640(puVar6,param_2,puVar3,&PTR____CFConstantStringClassReference_110db8a18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e9341c; end: 104e93487; -[SCPostRegAddFriendsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104e9341c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR_PTR_1126b16d8;
  _objc_opt_class(PTR_PTR_1126b16d8);
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db89f8);
  puVar2 = PTR_PTR_1126b1898;
  _objc_opt_class(PTR_PTR_1126b1898);
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db8a18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e93488; end: 104e9348f; -[SCPostRegAddFriendsSectionDataProvider numberOfItemsInSection:] */

void FUN_104e93488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104e93490; end: 104e935bb; -[SCPostRegAddFriendsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104e93490(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e935bc;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db89f8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5680();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104e935bc; end: 104e93603;  */

void FUN_104e935bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e93604; end: 104e93747; -[SCPostRegAddFriendsSectionDataProvider _setupSelectedSnapchattersSubscription] */

void FUN_104e93604(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c15a080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e93748; end: 104e9378f;  */

void FUN_104e93748(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7320();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e93790; end: 104e9393b; -[SCPostRegAddFriendsSectionDataProvider _setSelectedSnapchattersOnPerformer:] */

void FUN_104e93790(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_3);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x10;
  lVar2 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar11);
        }
        lVar12 = *(long *)(lStack_128 + lVar14 * 8);
        lVar3 = lVar12;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar12);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      uVar9 = 0x10;
      lVar2 = lVar11;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar11);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar4;
  _objc_release(uVar10);
  func_0x00010bedf280(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    _objc_retain(puVar8);
    func_0x00010bfed060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x48);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010c2923e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar10);
    _objc_release(puVar5);
    func_0x000108f488b8(*(undefined8 *)(param_3 + 0x58),0);
    uVar6 = *(undefined8 *)(param_3 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1698;
    func_0x00010c125800(PTR_PTR_1126b1698);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    _objc_release(puVar4);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    lVar11 = *(long *)(param_3 + 0x38);
    uVar6 = 1;
    func_0x00010bc9107c(1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar8;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c07be00();
    (**(code **)(lVar11 + 0x10))
              (lVar11,puVar8,puVar1,&PTR____CFConstantStringClassReference_110ea9018,0,uVar6,uVar9,
               uVar10,(char)puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010bffd260(puVar4);
    _objc_release(lVar11);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 104e9393c; end: 104e93b2f; -[SCPostRegAddFriendsSectionDataProvider _containerCellViewModelForSnapchatter:index:snapchattersCount:] */

void FUN_104e9393c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_3);
  func_0x00010bfed060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar7);
  _objc_release(uVar2);
  func_0x000108f488b8(*(undefined8 *)(param_1 + 0x58),0);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1698;
  func_0x00010c125800(PTR_PTR_1126b1698);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  lVar6 = *(long *)(param_1 + 0x38);
  uVar4 = 1;
  func_0x00010bc9107c(1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c07be00();
  (**(code **)(lVar6 + 0x10))
            (lVar6,param_3,puVar1,&PTR____CFConstantStringClassReference_110ea9018,0,uVar4,param_5,
             uVar7,(char)uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bffd260(puVar3);
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e93b30; end: 104e93bd7; -[SCPostRegAddFriendsSectionDataProvider _updateSectionDataModelWithPerformer] */

void FUN_104e93b30(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e93bd8; end: 104e93c03;  */

void FUN_104e93bd8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e93c04; end: 104e93c3b; -[SCPostRegAddFriendsSectionDataProvider _updateSectionDataModel] */

void FUN_104e93c04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf51e00(uVar1);
  func_0x00010c1f9220(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e93c3c; end: 104e93cab; -[SCPostRegAddFriendsSectionDataProvider _configureRecipientCollectionViewCell:] */

void FUN_104e93c3c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b16d8;
  _objc_opt_class(PTR_PTR_1126b16d8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e93cac; end: 104e93e23; -[SCPostRegAddFriendsSectionDataProvider _setSnapchatters:] */

void FUN_104e93cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010befa120(puVar1);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e93e24;
  puStack_60 = &UNK_110856648;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = param_3;
  uStack_58 = param_3;
  func_0x00010bd86420(param_3,&puStack_78);
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x98));
  uVar2 = 1;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e93e24; end: 104e93e9f;  */

void FUN_104e93e24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar1;
  func_0x00010bde7540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e93ea0; end: 104e941cb; -[SCPostRegAddFriendsSectionDataProvider _setAutoAddedSnapchatters:] */

void FUN_104e93ea0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) goto LAB_104e941a8;
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  if (lVar1 == 1) {
    func_0x00010b2d0c64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar8,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_3;
    if (lVar1 == 2) {
      func_0x00010b2d0c7c();
      _objc_retainAutoreleasedReturnValue();
LAB_104e93f94:
      func_0x00010c0dfd40(param_3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar8,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_3;
      func_0x00010bf529e0();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar1 == 3) {
        func_0x00010b2d0c94();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104e93f94;
      }
      func_0x00010b2d0cac();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(param_3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar6 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x00010c0df840(puVar7,param_2,lVar6 + -2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar8,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126b18a0;
  _objc_alloc(PTR_PTR_1126b18a0);
  puVar9 = puVar7;
  func_0x00010b2d0cc4();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0x1e3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0534c0(puVar7,param_2,puVar8,puVar9,puVar10,0);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar9;
  _objc_release(uVar11);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar8);
LAB_104e941a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e941cc; end: 104e941cf; -[SCPostRegAddFriendsSectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_104e941cc(void)

{
  return;
}



/* Entry: 104e941d0; end: 104e941d3; -[SCPostRegAddFriendsSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_104e941d0(void)

{
  return;
}



/* Entry: 104e941d4; end: 104e9423b; -[SCPostRegAddFriendsSectionDataProvider didEndSnapchattersContactDataRequest:withResult:] */

void FUN_104e941d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e9423c;
  puStack_20 = &UNK_1108484c8;
  uStack_18 = param_1;
  func_0x00010c0c0860(param_4,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110856698,
                      &PTR___NSConcreteGlobalBlock_1108566b8);
  return;
}



/* Entry: 104e9423c; end: 104e9424b;  */

void FUN_104e9423c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 104e9424c; end: 104e94263; -[SCPostRegAddFriendsSectionDataProvider dataProviderDelegate] */

void FUN_104e9424c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e94264; end: 104e9426f; -[SCPostRegAddFriendsSectionDataProvider setDataProviderDelegate:] */

void FUN_104e94264(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 104e94270; end: 104e94277; -[SCPostRegAddFriendsSectionDataProvider sectionDataModel] */

undefined8 FUN_104e94270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 104e94278; end: 104e9427f; -[SCPostRegAddFriendsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104e94278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 104e94280; end: 104e9428b; -[SCPostRegAddFriendsSectionDataProvider containerCellViewModelsSubject] */

void FUN_104e94280(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x98,1);
  return;
}



/* Entry: 104e9428c; end: 104e9436b; -[SCPostRegAddFriendsSectionDataProvider .cxx_destruct] */

void FUN_104e9428c(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e9436c; end: 104e94913; -[SCPostRegAddFriendsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9436c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar27 = (long)_DAT_112715530;
  lVar25 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar1 = lVar25;
  func_0x00010bef8c60();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar1;
  func_0x00010c0f1e60();
  _objc_release(lVar1);
  _objc_release(lVar25);
  if (lVar28 == 1) {
    _objc_initWeak(auStack_80,param_1);
    puVar2 = PTR_PTR_1126b18a8;
    _objc_alloc();
    lVar26 = (long)_DAT_112715534;
    lVar25 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar25);
    lVar1 = lVar25;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe1e0();
    _objc_release(lVar1);
    _objc_release(lVar25);
    lVar3 = param_1;
    func_0x00010bdf0380();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae720;
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104e94914;
    puStack_98 = &UNK_1108566d8;
    _objc_copyWeak(auStack_88,auStack_80);
    lStack_90 = lVar3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae720;
    puStack_d8 = puVar8;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x104e9495c;
    puStack_c0 = &UNK_110856708;
    _objc_copyWeak(auStack_b8,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae720;
    puStack_118 = puVar8;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x104e9499c;
    puStack_100 = &UNK_110856738;
    _objc_copyWeak(auStack_e0,auStack_80);
    puStack_f8 = puVar2;
    puStack_f0 = puVar5;
    lStack_e8 = lVar3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = (long)_DAT_112715538;
    lVar25 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar7 = lVar25;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar25);
    puVar8 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_120,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b18b0;
    _objc_alloc(PTR_PTR_1126b18b0);
    lVar27 = param_1 + lVar27;
    _objc_loadWeakRetained();
    lVar10 = lVar27;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar11 = lVar25;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar12 = lVar1;
    func_0x00010c244b40();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar13 = lVar28;
    func_0x00010c0dafe0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar14 = lVar26;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_11271553c;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_112715540;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bfb9460();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_112715544;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c0fb000();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + _DAT_112715548;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057300();
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar26);
    _objc_release(lVar13);
    _objc_release(lVar28);
    _objc_release(lVar12);
    _objc_release(lVar1);
    _objc_release(lVar11);
    _objc_release(lVar25);
    _objc_release(lVar10);
    _objc_release(lVar27);
    puVar23 = PTR_PTR_1126b18b8;
    _objc_alloc();
    func_0x00010c040660();
    lVar25 = (long)_DAT_11271554c;
    uVar24 = *(undefined8 *)(param_1 + lVar25);
    *(undefined **)(param_1 + lVar25) = puVar23;
    _objc_release(uVar24);
    func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar25));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_120);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_e0);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_88);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_80);
  }
  return;
}



/* Entry: 104e94914; end: 104e949e7;  */

void FUN_104e94914(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e949e8; end: 104e94a5f;  */

void FUN_104e949e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdf2ec0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e94a60; end: 104e94adb; -[SCPostRegAddFriendsEntryPoint _createGrapheneLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e94a60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b18c0;
  _objc_alloc(PTR_PTR_1126b18c0);
  param_1 = param_1 + _DAT_112715550;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e94adc; end: 104e94d67; -[SCPostRegAddFriendsEntryPoint _createPostRegAddFriendsLoggerWithViewStateObserver:postRegAddFriendsGrapheneLogger:multiSelectStateObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e94adc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
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
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126b18c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112715554;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112715558;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c104ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271555c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c104e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112715560;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c127c60();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar10 = param_1 + _DAT_112715544;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar15,param_2,lVar14);
  lVar16 = param_1 + _DAT_112715548;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112715564;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0467e0(puVar1,param_2,lVar3,lVar5,lVar7,param_3,param_5,lVar9,(byte)puVar15 ^ 1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e94d68; end: 104e94db3; -[SCPostRegAddFriendsEntryPoint _createActionHandlerWithMultiSelectStateObserver:] */

void FUN_104e94d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b18d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02cac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e94db4; end: 104e94f5b; -[SCPostRegAddFriendsEntryPoint _createMultiSelectObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e94db4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_1 + _DAT_112715564;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b18d8;
  _objc_alloc(PTR_PTR_1126b18d8);
  lVar9 = (long)_DAT_112715538;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar6 = lVar9;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112715534;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112715568;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049b20(puVar4,param_2,lVar5,lVar6,lVar3,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e94f5c; end: 104e9514f; -[SCPostRegAddFriendsEntryPoint _createSearchSectionCreatorWithActionHandler:snapchattersDataFetcher:viewStateObserver:multiSelectStateObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e94f5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_1108567b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b18e8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112715538;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdee9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112715568;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112715534;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112715540;
  _objc_loadWeakRetained();
  lVar10 = param_1;
  func_0x00010bfb9460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049a00(puVar2,param_2,param_4,lVar4,param_3,lVar5,puVar1,param_5,param_6,lVar7,lVar9,
                      lVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e95150; end: 104e9516b;  */

void FUN_104e95150(void)

{
  _objc_opt_new(PTR_PTR_1126b18e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e9516c; end: 104e95327; -[SCPostRegAddFriendsEntryPoint _createImageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9516c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + _DAT_11271556c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715570;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715574;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112715578;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b18f0;
  _objc_alloc(PTR_PTR_1126b18f0);
  puVar7 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108567f8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110856818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff80e0(puVar6,param_2,lVar2,lVar3,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b18f8;
  _objc_alloc(PTR_PTR_1126b18f8);
  func_0x00010c03f140();
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104e95328; end: 104e95337;  */

undefined8 FUN_104e95328(void)

{
  return 0;
}



/* Entry: 104e95338; end: 104e95393; -[SCPostRegAddFriendsEntryPoint addFriendsWorkflowCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e95338(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112715530;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bef8fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8fa0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e95394; end: 104e953ef; -[SCPostRegAddFriendsEntryPoint addFriendsWorkflowSkipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e95394(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112715530;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bef8fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8fe0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e953f0; end: 104e9550f; -[SCPostRegAddFriendsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e953f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715540);
  _objc_destroyWeak(param_1 + _DAT_11271553c);
  _objc_destroyWeak(param_1 + _DAT_112715550);
  _objc_destroyWeak(param_1 + _DAT_112715560);
  _objc_destroyWeak(param_1 + _DAT_112715564);
  _objc_destroyWeak(param_1 + _DAT_112715568);
  _objc_destroyWeak(param_1 + _DAT_112715534);
  _objc_destroyWeak(param_1 + _DAT_112715558);
  _objc_destroyWeak(param_1 + _DAT_112715574);
  _objc_destroyWeak(param_1 + _DAT_112715570);
  _objc_destroyWeak(param_1 + _DAT_11271556c);
  _objc_destroyWeak(param_1 + _DAT_112715578);
  _objc_destroyWeak(param_1 + _DAT_112715554);
  _objc_destroyWeak(param_1 + _DAT_11271555c);
  _objc_destroyWeak(param_1 + _DAT_112715538);
  _objc_destroyWeak(param_1 + _DAT_112715530);
  _objc_destroyWeak(param_1 + _DAT_112715544);
  _objc_destroyWeak(param_1 + _DAT_112715580);
  _objc_destroyWeak(param_1 + _DAT_11271557c);
  _objc_destroyWeak(param_1 + _DAT_112715548);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271554c,0);
  return;
}



/* Entry: 104e95510; end: 104e9560f; +[SCPostRegAddFriendsAutoAddingHelper autoAddingEnabledWithExperimentReader:] */

bool FUN_104e95510(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126b1698;
  _objc_retain(param_3);
  func_0x00010c104ea0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1f320();
  _objc_release(param_3);
  _objc_release(puVar2);
  if ((uVar3 & 1) == 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((iVar1 != 0) &&
       (puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900, func_0x00010bf10fe0(),
       puVar2 == (undefined *)0x4)) {
      puVar2 = PTR_PTR_1126b1908;
      _objc_opt_new(PTR_PTR_1126b1908);
      puVar4 = puVar2;
      func_0x00010bfa4aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      return (long)puVar6 < 0xb;
    }
  }
  return false;
}



/* Entry: 104e95610; end: 104e956bf; -[SCPostRegAddFriendsCollectionCellViewModelGenerator postRegAddFriendsCollectionCellViewModelGeneratingBlock] */

void FUN_104e95610(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104e95660;
  puStack_20 = &UNK_110856838;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e956c0; end: 104e9592f; -[SCPostRegAddFriendsCollectionCellViewModelGenerator _createSnapchatterCollectionViewCellViewModelWithSnapchatter:indexPath:sectionType:isLoading:sourcePageType:rowsInSection:isSelected:isRecentlyActive:isNewUIEnabled:shouldShowProfilePicture:isCondensedUIEnabled:] */

void FUN_104e956c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 uStack0000000000000000;
  undefined1 uStack0000000000000001;
  undefined1 uStack0000000000000002;
  undefined1 uStack0000000000000003;
  char in_stack_00000004;
  undefined8 in_stack_ffffffffffffff70;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar8 = param_6;
  func_0x0001079ec584(param_6);
  uVar2 = param_6;
  func_0x0001079ec668(param_6);
  _objc_release(param_6);
  lVar3 = param_4;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar2 = 0xffffffff9c9717e5;
  }
  lVar3 = param_4;
  func_0x000107d3d960(param_4,param_5,0xd,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x000107cf6a60(param_4,uVar8,lVar3,0,lVar3,0xffffffffffffffff,uStack0000000000000000,
                      uStack0000000000000001,
                      CONCAT71(CONCAT61(CONCAT51((int5)((ulong)in_stack_ffffffffffffff70 >> 0x18),
                                                 in_stack_00000004),uStack0000000000000003),
                               uStack0000000000000002));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if ((_uStack0000000000000000 & 0x10000) == 0) {
    func_0x000107cf426c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_4 = 0;
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)0x11323cd48;
  if (in_stack_00000004 == '\0') {
    puVar1 = (undefined8 *)0x11323cd40;
  }
  uVar8 = *puVar1;
  puVar7 = PTR_PTR_1126b1910;
  _objc_alloc(PTR_PTR_1126b1910);
  uVar2 = uRam000000011323cd50;
  func_0x00010b816670();
  func_0x00010c142240();
  func_0x00010c0495a0(0x7fefffffffffffff,uVar8,uVar2,param_1,puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104e95930; end: 104e95b0b; -[SCPostRegAddFriendsCollectionCellViewModelGenerator _createAddFriendsActionButtonViewModelWithSnapchatter:displayType:indexPath:addSourceType:isLoading:] */

void FUN_104e95930(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be43dc0();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be43dc0();
  if ((uVar2 & 1) == 0) {
    uVar6 = param_3;
    func_0x000107d3d8a4(param_3,param_5,0xd,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = 0;
  }
  puVar3 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  uVar2 = param_1;
  func_0x00010bdc6e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x88;
  func_0x00010900fd90(0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x000107cf3180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053140(0,0x402f000000000000,0,0x4031000000000000,puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e95b0c; end: 104e95b4f; -[SCPostRegAddFriendsCollectionCellViewModelGenerator _isSnapchatterAdded:isLoading:] */

bool FUN_104e95b0c(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  bool bVar1;
  
  if ((param_4 & 1) == 0) {
    func_0x00010bfb8280(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104e95b50; end: 104e95bb7; -[SCPostRegAddFriendsCollectionCellViewModelGenerator _addFriendsButtonImageWithSnapchatterAddedStatus:] */

void FUN_104e95b50(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8a78;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8a98;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e95bb8; end: 104e95c2f; -[SCPostRegAddFriendsCollectionCellViewModelGenerator _addFriendsButtonTextWithSnapchatter:displayType:isLoading:] */

void FUN_104e95bb8(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010be43dc0();
  if (param_1 == 0) {
    if ((param_4 - 2U < 4) || (param_4 == 0)) {
      func_0x00010b2d0bec();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8ab8,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010b2d0c04();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e95c30; end: 104e95d57; -[SCPostRegAddFriendsPageEndObserverSnapshot initWithPreselectionChanged:preselectedCount:preselectSource:serverPreselectionNumber:appPreselectedIndicesString:currentSelectedIndicesString:userSelectedIndicesString:] */

undefined1 *
FUN_104e95c30(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e4af8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 104e95d58; end: 104e95d5f; -[SCPostRegAddFriendsPageEndObserverSnapshot preselectionChanged] */

undefined1 FUN_104e95d58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e95d60; end: 104e95d67; -[SCPostRegAddFriendsPageEndObserverSnapshot preselectedCount] */

undefined8 FUN_104e95d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e95d68; end: 104e95d6f; -[SCPostRegAddFriendsPageEndObserverSnapshot preselectSource] */

undefined8 FUN_104e95d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e95d70; end: 104e95d77; -[SCPostRegAddFriendsPageEndObserverSnapshot serverPreselectionNumber] */

undefined8 FUN_104e95d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e95d78; end: 104e95d7f; -[SCPostRegAddFriendsPageEndObserverSnapshot appPreselectedIndicesString] */

undefined8 FUN_104e95d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104e95d80; end: 104e95d87; -[SCPostRegAddFriendsPageEndObserverSnapshot currentSelectedIndicesString] */

undefined8 FUN_104e95d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104e95d88; end: 104e95d8f; -[SCPostRegAddFriendsPageEndObserverSnapshot userSelectedIndicesString] */

undefined8 FUN_104e95d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


