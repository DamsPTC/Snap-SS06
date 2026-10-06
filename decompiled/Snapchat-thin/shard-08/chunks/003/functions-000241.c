/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10602b2a8; end: 10602b2b7;  */

void FUN_10602b2a8(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = *(undefined8 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010be03ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchNumFriendsUpdate_11255e958);
  return;
}



/* Entry: 10602b2b8; end: 10602b333; -[SCMyProfileFriendsSectionDataSource _dispatchNumFriendsUpdate] */

void FUN_10602b2b8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 10602b334; end: 10602b34b;  */

void FUN_10602b334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110e393b8);
  return;
}



/* Entry: 10602b34c; end: 10602b393; -[SCMyProfileFriendsSectionDataSource .cxx_destruct] */

void FUN_10602b34c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602b394; end: 10602b3af; -[SCMyUnifiedProfileAddFriendSection sectionInsets] */

void FUN_10602b394(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4030000000000000,0x4024000000000000,0x4030000000000000,
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 10602b3b0; end: 10602b433; -[SCMyUnifiedProfileAddFriendSection sectionInfo] */

undefined1 * FUN_10602b3b0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x7;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb5718;
  pppuVar6 = &ppuStack_20;
  pppuVar7 = &ppuStack_28;
  uVar8 = 1;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar2 = ppuStack_20;
  ppuVar1 = ppuStack_28;
  ppuVar4 = &puStack_a0;
  _objc_retain(pppuVar6);
  _objc_retain(pppuVar7);
  _objc_retain(uVar8);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  _objc_retain(uStack_30);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  puStack_98 = PTR_PTR_1126ef298;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(pppuVar6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined ****)((long)ppuVar4 + 8) = pppuVar6;
    _objc_release(uVar5);
    _objc_retain(pppuVar7);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x40);
    *(undefined ****)((long)ppuVar4 + 0x40) = pppuVar7;
    _objc_release(uVar5);
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x38);
    *(undefined8 *)((long)ppuVar4 + 0x38) = uVar8;
    _objc_release(uVar5);
    _objc_retain(in_x5);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x48);
    *(undefined8 *)((long)ppuVar4 + 0x48) = in_x5;
    _objc_release(uVar5);
    _objc_retain(in_x7);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x50);
    *(undefined8 *)((long)ppuVar4 + 0x50) = in_x7;
    _objc_release(uVar5);
    _objc_retain(uStack_30);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x58);
    *(undefined8 *)((long)ppuVar4 + 0x58) = uStack_30;
    _objc_release(uVar5);
    _objc_retain(ppuVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x60);
    *(undefined ***)((long)ppuVar4 + 0x60) = ppuVar1;
    _objc_release(uVar5);
    _objc_retain(ppuVar2);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x68);
    *(undefined ***)((long)ppuVar4 + 0x68) = ppuVar2;
    _objc_release(uVar5);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_30);
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(uVar8);
  _objc_release(pppuVar7);
  _objc_release(pppuVar6);
  return (undefined1 *)ppuVar4;
}



/* Entry: 10602b434; end: 10602b5db; -[SCMyUnifiedProfileAddFriendSectionDataProvider initWithIncomingFriendsRepository:unviewedSuggestedSnapchatterRepository:userInfoProvider:snapProPopularStatusProvider:userSession:storyPrivacySettingManager:snapchattersSynchronousDataFetcher:userInfoServices:resourceDownloader:] */

undefined1 *
FUN_10602b434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ef298;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10602b5dc; end: 10602b5e7; +[SCMyUnifiedProfileAddFriendSectionDataProvider announcerIdentifier] */

undefined ** FUN_10602b5dc(void)

{
  return &PTR____CFConstantStringClassReference_110e392b8;
}



/* Entry: 10602b5e8; end: 10602b5ef; -[SCMyUnifiedProfileAddFriendSectionDataProvider addListener:] */

void FUN_10602b5e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10602b5f0; end: 10602b5f7; -[SCMyUnifiedProfileAddFriendSectionDataProvider removeListener:] */

void FUN_10602b5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10602b5f8; end: 10602b5ff; -[SCMyUnifiedProfileAddFriendSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10602b5f8(void)

{
  return 2;
}



/* Entry: 10602b600; end: 10602b687; -[SCMyUnifiedProfileAddFriendSectionDataProvider setUp] */

void FUN_10602b600(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar2);
  func_0x00010be66800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be67010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeUnreadNewSuggestionsDidC_1125775a0);
  return;
}



/* Entry: 10602b688; end: 10602b68f; -[SCMyUnifiedProfileAddFriendSectionDataProvider tearDown] */

void FUN_10602b688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 10602b690; end: 10602b6c3; -[SCMyUnifiedProfileAddFriendSectionDataProvider setSectionDataModel:] */

void FUN_10602b690(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602b6c4; end: 10602b6cb; -[SCMyUnifiedProfileAddFriendSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_10602b6c4(void)

{
  return 1;
}



/* Entry: 10602b6cc; end: 10602b71f; -[SCMyUnifiedProfileAddFriendSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10602b6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10602b720;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602b720; end: 10602b727;  */

void FUN_10602b720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addFriendContainerCellViewModel_11254f4f8);
  return;
}



/* Entry: 10602b728; end: 10602b7a7; -[SCMyUnifiedProfileAddFriendSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10602b728(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10602b8d4;
    puStack_90 = &UNK_110845ae0;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e39298;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_70 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_88);
    puVar4 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4d40();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602b7a8; end: 10602b8d3; -[SCMyUnifiedProfileAddFriendSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10602b7a8(undefined8 param_1)

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
  pcStack_68 = FUN_10602b8d4;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e39298;
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
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10602b8d4; end: 10602b91b;  */

void FUN_10602b8d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602b91c; end: 10602b98b; -[SCMyUnifiedProfileAddFriendSectionDataProvider _configureCell:] */

void FUN_10602b91c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa0;
  _objc_opt_class(PTR_PTR_1126aeaa0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10602b98c; end: 10602b9a7; -[SCMyUnifiedProfileAddFriendSectionDataProvider _badgeNumber] */

ulong FUN_10602b98c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  if (0x62 < uVar1) {
    uVar1 = 99;
  }
  return uVar1;
}



/* Entry: 10602b9a8; end: 10602badf; -[SCMyUnifiedProfileAddFriendSectionDataProvider _badgeViewModel] */

void FUN_10602b9a8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010bdd26e0();
  if ((uVar1 == 0) ||
     (func_0x00010be3e300(), puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0, (param_1 & 1) != 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bdd26e0();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x000108f5d5cc(puVar2,puVar5,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4dc0;
    _objc_alloc(PTR_PTR_1126b4dc0);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6820(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10602bae0; end: 10602bdaf; -[SCMyUnifiedProfileAddFriendSectionDataProvider _isAspiringInfluencer] */

undefined * FUN_10602bae0(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_2 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010c07a6a0();
  _objc_release();
  if (((ulong)puVar19 & 1) == 0) {
    puVar1 = *(undefined **)(param_2 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010c25aac0();
    _objc_release();
    if (puVar19 == (undefined *)0x0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c127bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010beed420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      param_1 = param_1 * 1000.0;
      lVar21 = (long)param_1;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release();
      if (lVar21 + 0xf731400 < (long)(param_1 * 1000.0)) {
        puVar19 = *(undefined **)(param_2 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar19;
        func_0x00010bf00200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_retain(puVar1);
        puVar6 = puVar1;
        func_0x00010bf52a60();
        lVar21 = lRam0000000000000000;
        puVar19 = (undefined *)0x0;
        if (puVar6 != (undefined *)0x0) {
          lVar22 = 0;
          do {
            puVar19 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar21) {
                _objc_enumerationMutation(puVar1);
              }
              lVar20 = *(long *)((long)puVar19 * 8);
              lVar7 = lVar20;
              func_0x00010bfebe20();
              _objc_retainAutoreleasedReturnValue();
              if (lVar7 != 0) {
                func_0x00010bfebe20();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar20;
                func_0x00010befcae0();
                func_0x0001090216ac();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar8;
                func_0x00010c0b4ca0();
                _objc_release(lVar8);
                _objc_release(lVar20);
                _objc_release(lVar7);
                if ((long)(param_1 * 1000.0) <= lVar9 + 0xf731400) {
                  lVar22 = lVar22 + 1;
                }
              }
              puVar19 = puVar19 + 1;
            } while (puVar6 != puVar19);
            puVar6 = puVar1;
            func_0x00010bf52a60();
          } while (puVar6 != (undefined *)0x0);
          puVar19 = (undefined *)(ulong)(0x27 < lVar22);
        }
        _objc_release(puVar1);
        _objc_release();
        goto LAB_10602bd6c;
      }
    }
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = (undefined *)0x1;
  }
LAB_10602bd6c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar19 = puVar1;
    func_0x00010bdd26e0();
    ppuVar10 = &PTR____CFConstantStringClassReference_110e39318;
    if (*(long *)(puVar1 + 0x28) != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e392d8;
    }
    ppuVar11 = &PTR____CFConstantStringClassReference_110e39338;
    if (*(long *)(puVar1 + 0x28) != 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e392f8;
    }
    func_0x00010bcbeaa8(ppuVar10,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(ppuVar11,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar19 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      if (puVar19 == (undefined *)0x1) {
        _objc_retain(ppuVar10);
        ppuVar12 = ppuVar10;
      }
      else {
        puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
      }
      puVar19 = PTR_PTR_1126c72f8;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_retain(ppuVar12);
      _objc_alloc(puVar1);
      puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar1);
      _objc_release(ppuVar12);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c7300;
      func_0x00010c26cce0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c044860();
      _objc_release(puVar1);
      _objc_release(puVar6);
      _objc_release(ppuVar12);
    }
    _objc_release(ppuVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      ppuVar11 = &PTR____CFConstantStringClassReference_110e2ba78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba78,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar10;
      func_0x00010bdd26e0();
      ppuVar15 = ppuVar11;
      if (ppuVar12 == (undefined **)0x0) {
        func_0x000108f62f68(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f632a8(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar12 = ppuVar10;
      func_0x00010bdd2820(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b0c40;
      func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar13 = PTR_PTR_1126b2c10;
      _objc_alloc(PTR_PTR_1126b2c10);
      func_0x00010bec8b40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar10;
      func_0x000108f637bc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar16;
      func_0x000108f62cd0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053700(puVar13);
      _objc_release(ppuVar17);
      _objc_release(ppuVar16);
      _objc_release(ppuVar10);
      puVar19 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      _objc_release(puVar13);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(ppuVar12);
      _objc_release(ppuVar15);
      _objc_release(ppuVar11);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return puVar19;
  }
  return puVar19;
}



/* Entry: 10602bdb0; end: 10602c057; -[SCMyUnifiedProfileAddFriendSectionDataProvider _subtitleViewModel] */

void FUN_10602bdb0(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bdd26e0();
  bVar1 = *(long *)(param_1 + 0x28) != 0;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e39318;
  if (bVar1) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e392d8;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110e39338;
  if (bVar1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e392f8;
  }
  func_0x00010bcbeaa8(ppuVar3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    if (lVar2 == 1) {
      _objc_retain(ppuVar3);
      ppuVar5 = ppuVar3;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
    }
    puVar14 = PTR_PTR_1126c72f8;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_retain(ppuVar5);
    _objc_alloc(puVar6);
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar6);
    _objc_release(ppuVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c7300;
    func_0x00010c26cce0(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044860();
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e2ba78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba78,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bdd26e0();
    ppuVar10 = ppuVar4;
    if (ppuVar5 == (undefined **)0x0) {
      func_0x000108f62f68(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f632a8(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar5 = ppuVar3;
    func_0x00010bdd2820(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar8 = PTR_PTR_1126b2c10;
    _objc_alloc(PTR_PTR_1126b2c10);
    func_0x00010bec8b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar3;
    func_0x000108f637bc();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x000108f62cd0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053700(puVar8);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar3);
    puVar14 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar10);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10602c058; end: 10602c233; -[SCMyUnifiedProfileAddFriendSectionDataProvider _addFriendContainerCellViewModel] */

void FUN_10602c058(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ba78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba78,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd26e0();
  ppuVar3 = ppuVar1;
  if (lVar2 == 0) {
    func_0x000108f62f68(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f632a8(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_1;
  func_0x00010bdd2820(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar6 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  func_0x00010bec8b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x000108f62cd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700(puVar6);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  puVar9 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10602c234; end: 10602c273; -[SCMyUnifiedProfileAddFriendSectionDataProvider _reloadWithPendingIncomingFriends:] */

void FUN_10602c234(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf529e0();
  *(undefined8 *)(param_1 + 0x28) = param_3;
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602c274; end: 10602c2b3; -[SCMyUnifiedProfileAddFriendSectionDataProvider _reloadWithUnviewedNewSuggestions:] */

void FUN_10602c274(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf529e0();
  *(undefined8 *)(param_1 + 0x30) = param_3;
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602c2b4; end: 10602c3db; -[SCMyUnifiedProfileAddFriendSectionDataProvider _observePendingAddedFriendsDidChange] */

void FUN_10602c2b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
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



/* Entry: 10602c3dc; end: 10602c423;  */

void FUN_10602c3dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8af20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602c424; end: 10602c54b; -[SCMyUnifiedProfileAddFriendSectionDataProvider _observeUnreadNewSuggestionsDidChange] */

void FUN_10602c424(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
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



/* Entry: 10602c54c; end: 10602c593;  */

void FUN_10602c54c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8af60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602c594; end: 10602c5ab; -[SCMyUnifiedProfileAddFriendSectionDataProvider dataProviderDelegate] */

void FUN_10602c594(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602c5ac; end: 10602c5b7; -[SCMyUnifiedProfileAddFriendSectionDataProvider setDataProviderDelegate:] */

void FUN_10602c5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 10602c5b8; end: 10602c5bf; -[SCMyUnifiedProfileAddFriendSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10602c5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10602c5c0; end: 10602c5ef; -[SCMyUnifiedProfileAddFriendSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10602c5c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10602c5f0; end: 10602c5f7; -[SCMyUnifiedProfileAddFriendSectionDataProvider sectionDataModel] */

undefined8 FUN_10602c5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10602c5f8; end: 10602c6b3; -[SCMyUnifiedProfileAddFriendSectionDataProvider .cxx_destruct] */

void FUN_10602c5f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602c6b4; end: 10602c9c7; -[SCMyUnifiedProfileAddFriendSectionRegistrator initWithUserSession:displayContentDelegate:resourceDownloadServices:userInfoServices:storiesPreferencesServices:snapProServices:legacySnapchatterServices:snapchatterServices:networkImageServices:bitmojiSelfieServices:circumstanceEngineServices:myFriendsScopeExposer:addFriendsScopeExposer:addFriendsScopeServices:] */

undefined8 *
FUN_10602c6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126ef2a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
  }
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10602c9c8; end: 10602ccfb; -[SCMyUnifiedProfileAddFriendSectionRegistrator makeSectionProviders] */

void FUN_10602c9c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdaf60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c073920();
  _objc_release(uVar2);
  _objc_release(uVar4);
  *(byte *)(param_1 + 8) = (byte)uVar3 & ((byte)uVar1 ^ 1);
  _objc_initWeak(auStack_90,param_1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10602ccfc;
  puStack_a0 = &UNK_11085a8b8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_90);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126afda8;
  _objc_alloc();
  func_0x00010c032260();
  puVar8 = PTR_PTR_1126c7308;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c244ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfe7580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf89340(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf398e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049800();
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar7;
  puStack_80 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  puVar11 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume(puVar11);
    puVar5 = puVar11 + 0x20;
    _objc_loadWeakRetained(puVar5);
    puVar10 = puVar5;
    func_0x00010bdf2f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10602ccfc; end: 10602cd7b;  */

void FUN_10602ccfc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10602cd7c; end: 10602ce53; -[SCMyUnifiedProfileAddFriendSectionRegistrator _createSection] */

void FUN_10602cd7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010602d550();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010602d568();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1100;
  _objc_alloc(PTR_PTR_1126b1100);
  func_0x00010c043040();
  puVar4 = PTR_PTR_1126c7310;
  _objc_alloc(PTR_PTR_1126c7310);
  func_0x00010c04f820();
  func_0x00010bdf7e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9240(puVar4,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10602ce54; end: 10602cee7; -[SCMyUnifiedProfileAddFriendSectionRegistrator _createActionHandler] */

void FUN_10602ce54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126c7318;
  _objc_alloc(PTR_PTR_1126c7318);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf398e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02d180(puVar4,param_2,uVar3,uVar1,uVar2,uVar5,param_1);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10602cee8; end: 10602d033; -[SCMyUnifiedProfileAddFriendSectionRegistrator _dataProvider] */

void FUN_10602cee8(long param_1,undefined8 param_2)

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
  
  puVar2 = PTR_PTR_1126c7320;
  _objc_alloc(PTR_PTR_1126c7320);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfebf20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c282ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2928c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c103c00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c25aae0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d6e0(puVar2,param_2,uVar3,uVar4,uVar5,uVar6,uVar10,uVar7,uVar8,uVar1,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10602d034; end: 10602d0ef; -[SCMyUnifiedProfileAddFriendSectionRegistrator .cxx_destruct] */

void FUN_10602d034(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10602d0f0; end: 10602d20b; -[SCMyUnifiedProfileFriendActionHandler initWithMyFriendsScopeExposer:addFriendsScopeExposer:addFriendsScopeServices:circumstanceEngine:displayContentDelegate:] */

undefined1 *
FUN_10602d0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ef2a8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10602d20c; end: 10602d2e7; -[SCMyUnifiedProfileFriendActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10602d20c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = 0;
      goto LAB_10602d2c8;
    }
    func_0x00010beb93e0(param_1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf4dea0();
    _objc_release(param_1);
  }
  else {
    func_0x00010beb7860(param_1);
  }
  uVar2 = 1;
LAB_10602d2c8:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 10602d2e8; end: 10602d327; -[SCMyUnifiedProfileFriendActionHandler didDismissMyFriends] */

void FUN_10602d2e8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602d328; end: 10602d3f3; -[SCMyUnifiedProfileFriendActionHandler _showAddFriends] */

void FUN_10602d328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126af668;
  _objc_alloc(PTR_PTR_1126af668);
  func_0x00010c033380();
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c038f40(puVar3,param_2,lVar4,1);
  _objc_release(lVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf22980(uVar5,param_2,puVar2,puVar3,0,0x22,0,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10602d3f4; end: 10602d487; -[SCMyUnifiedProfileFriendActionHandler _showFriends] */

void FUN_10602d3f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126ae620;
  _objc_alloc(PTR_PTR_1126ae620);
  func_0x00010c0575e0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10602d488; end: 10602d48b; -[SCMyUnifiedProfileFriendActionHandler addFriendsWorkflowSkipped:] */

void FUN_10602d488(void)

{
  return;
}



/* Entry: 10602d48c; end: 10602d4d3; -[SCMyUnifiedProfileFriendActionHandler addFriendsWorkflowCompleted:] */

void FUN_10602d48c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10602d4d4; end: 10602d4eb; -[SCMyUnifiedProfileFriendActionHandler presentingViewController] */

void FUN_10602d4d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602d4ec; end: 10602d4f7; -[SCMyUnifiedProfileFriendActionHandler setPresentingViewController:] */

void FUN_10602d4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10602d4f8; end: 10602d54f; -[SCMyUnifiedProfileFriendActionHandler .cxx_destruct] */

void FUN_10602d4f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602d550; end: 10602d57f;  */

void FUN_10602d550(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e39358;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e39358,
                      &PTR____CFConstantStringClassReference_110e39378,0);
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



/* Entry: 10602d580; end: 10602d6b3; -[SCFriendUnifiedProfileFriendCompassDataProvider initWithFriendUserId:userId:updateQueuePerformer:mapPersonLocationsProvider:] */

undefined1 *
FUN_10602d580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ef2b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10602d6b4; end: 10602d7c7; -[SCFriendUnifiedProfileFriendCompassDataProvider setUp] */

void FUN_10602d6b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09fa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bee3060(param_1);
  func_0x00010bed8760(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10602d7c8; end: 10602d7f3;  */

void FUN_10602d7c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2de60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602d7f4; end: 10602d82b; -[SCFriendUnifiedProfileFriendCompassDataProvider tearDown] */

void FUN_10602d7f4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10602d82c; end: 10602d86b; -[SCFriendUnifiedProfileFriendCompassDataProvider isFriendNearby] */

bool FUN_10602d82c(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(long *)(param_2 + 0x38) != 0) {
    if (*(long *)(param_2 + 0x30) == 0) {
      return false;
    }
    func_0x00010bf86f80();
    bVar1 = param_1 <= 60.0;
  }
  return bVar1;
}



/* Entry: 10602d86c; end: 10602d96b; -[SCFriendUnifiedProfileFriendCompassDataProvider bearingToFriendDegrees] */

double FUN_10602d86c(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(long *)(param_3 + 0x38) != 0) {
    if (*(long *)(param_3 + 0x30) == 0) {
      dVar2 = NAN;
    }
    else {
      func_0x00010bf51c80();
      dVar2 = param_1;
      dVar3 = param_2;
      func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x38));
      dVar5 = (param_1 / 180.0) * 3.141592653589793;
      dVar6 = (dVar2 / 180.0) * 3.141592653589793;
      dVar1 = (dVar3 / 180.0) * 3.141592653589793 - (param_2 / 180.0) * 3.141592653589793;
      ___sincos_stret(dVar1);
      dVar2 = dVar3;
      ___sincos_stret(dVar6);
      dVar1 = dVar2 * dVar1;
      dVar4 = dVar2;
      ___sincos_stret(dVar5);
      _atan2(dVar1,-(dVar3 * dVar5 * dVar2) + dVar6 * dVar4);
      dVar2 = (dVar1 * 180.0) / 3.141592653589793 + 360.0;
      _fmod(dVar2);
    }
    return dVar2;
  }
  return NAN;
}



/* Entry: 10602d96c; end: 10602d98f; -[SCFriendUnifiedProfileFriendCompassDataProvider distanceToFriendMeters] */

undefined8 FUN_10602d96c(undefined8 param_1,long param_2)

{
  if ((*(long *)(param_2 + 0x38) != 0) && (*(long *)(param_2 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf86f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 0x38),PTR_s_distanceFromLocation__1125bf588);
    return param_1;
  }
  return 0x7ff8000000000000;
}



/* Entry: 10602d990; end: 10602daff; -[SCFriendUnifiedProfileFriendCompassDataProvider distanceText] */

void FUN_10602d990(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  puVar3 = *(undefined **)(param_2 + 0x38);
  if ((puVar3 == (undefined *)0x0) || (*(long *)(param_2 + 0x30) == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf86f80();
    if (param_1 <= 60.0) {
      FUN_10603a9ec();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      bVar2 = (int)puVar5 == 0;
      dVar6 = 1000.0;
      if (bVar2) {
        dVar6 = 1609.3399658203125;
      }
      uVar1 = 0xe;
      if (bVar2) {
        uVar1 = 0x504;
      }
      puVar4 = PTR__OBJC_CLASS___NSLengthFormatter_1126c7328;
      _objc_opt_new(PTR__OBJC_CLASS___NSLengthFormatter_1126c7328);
      puVar3 = puVar4;
      func_0x00010c0de9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c3b00();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010c0de9c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eea40();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010c25d5e0(param_1 / dVar6,puVar4,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10602db00; end: 10602db0b; +[SCFriendUnifiedProfileFriendCompassDataProvider announcerIdentifier] */

undefined ** FUN_10602db00(void)

{
  return &PTR____CFConstantStringClassReference_110e393f8;
}



/* Entry: 10602db0c; end: 10602db13; -[SCFriendUnifiedProfileFriendCompassDataProvider addUpdateListener:] */

void FUN_10602db0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10602db14; end: 10602db1b; -[SCFriendUnifiedProfileFriendCompassDataProvider removeUpdateListener:] */

void FUN_10602db14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10602db1c; end: 10602dbc3; -[SCFriendUnifiedProfileFriendCompassDataProvider _handlePersonLocationsProviderDidUpdate] */

void FUN_10602db1c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10602dbc4; end: 10602dbef;  */

void FUN_10602dbc4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedaf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602dbf0; end: 10602dcfb; -[SCFriendUnifiedProfileFriendCompassDataProvider _updateLocationsAndReloadSectionIfNecessary] */

void FUN_10602dbf0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bed8760();
  uVar2 = param_1;
  func_0x00010bee3060();
  if (((uVar1 & 1) != 0) || ((int)uVar2 != 0)) {
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar4 = PTR_PTR_1126b4758;
    func_0x00010bf04780(PTR_PTR_1126b4758);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 10602dcfc; end: 10602de47; -[SCFriendUnifiedProfileFriendCompassDataProvider _updateFriendMapLocation] */

undefined8 FUN_10602dcfc(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  
  lVar2 = *(long *)(param_3 + 0x38);
  if (lVar2 == 0) {
    if (*(long *)(param_3 + 0x28) == 0) {
      return 0;
    }
  }
  else if (*(long *)(param_3 + 0x28) == 0) {
    *(undefined8 *)(param_3 + 0x38) = 0;
    uVar3 = 1;
    goto LAB_10602de10;
  }
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = *(undefined **)(param_3 + 0x38);
  if ((puVar4 == (undefined *)0x0) || (lVar2 != 0)) {
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_10602de10;
    }
    puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
    _objc_alloc();
    func_0x00010bf51c80(lVar2);
    func_0x00010bf51c80(lVar2);
    func_0x00010c021a60();
    if (*(long *)(param_3 + 0x38) == 0) {
LAB_10602ddf0:
      _objc_retain(puVar4);
      uVar3 = *(undefined8 *)(param_3 + 0x38);
      *(undefined **)(param_3 + 0x38) = puVar4;
      _objc_release(uVar3);
      goto LAB_10602de04;
    }
    func_0x00010bf51c80();
    dVar5 = param_1;
    uVar3 = param_2;
    func_0x00010bf51c80(puVar4);
    func_0x000108d312a8(param_1,param_2,dVar5,uVar3);
    if (100.0 < param_1) goto LAB_10602ddf0;
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(param_3 + 0x38) = 0;
LAB_10602de04:
    uVar3 = 1;
  }
  _objc_release(puVar4);
LAB_10602de10:
  _objc_release(lVar2);
  return uVar3;
}



/* Entry: 10602de48; end: 10602df57; -[SCFriendUnifiedProfileFriendCompassDataProvider _updateUserMapLocation] */

undefined8 FUN_10602de48(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = 0;
    goto LAB_10602df38;
  }
  puVar3 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc();
  func_0x00010bf51c80(lVar2);
  func_0x00010bf51c80(lVar2);
  func_0x00010c021a60();
  if (*(long *)(param_3 + 0x30) == 0) {
LAB_10602df08:
    _objc_retain(puVar3);
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar3;
    _objc_release(uVar4);
    uVar4 = 1;
  }
  else {
    func_0x00010bf51c80();
    dVar5 = param_1;
    uVar4 = param_2;
    func_0x00010bf51c80(puVar3);
    func_0x000108d312a8(param_1,param_2,dVar5,uVar4);
    if (100.0 < param_1) goto LAB_10602df08;
    uVar4 = 0;
  }
  _objc_release(puVar3);
LAB_10602df38:
  _objc_release(lVar2);
  return uVar4;
}



/* Entry: 10602df58; end: 10602df7f; -[SCFriendUnifiedProfileFriendCompassDataProvider friendCompassUpdateObservable] */

void FUN_10602df58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602df80; end: 10602e003; -[SCFriendUnifiedProfileFriendCompassDataProvider .cxx_destruct] */

void FUN_10602df80(long param_1)

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



/* Entry: 10602e004; end: 10602e22b; -[SCFriendUnifiedProfileMapDataSource initWithSnapchatter:mapPersonLocationsProvider:bitmojiAvatarGenerator:circumstanceEngine:] */

undefined8 *
FUN_10602e004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ef2b8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c7330;
    _objc_alloc();
    func_0x00010bff7b60();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    func_0x00010c1daa20(puVar1[3]);
    func_0x00010c18b5e0(puVar1[3]);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = puVar1[5];
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10602e22c; end: 10602e257;  */

void FUN_10602e22c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602e258; end: 10602e25f; -[SCFriendUnifiedProfileMapDataSource tearDown] */

void FUN_10602e258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 10602e260; end: 10602e287; -[SCFriendUnifiedProfileMapDataSource mapDataModelObservable] */

void FUN_10602e260(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602e288; end: 10602e2ff; -[SCFriendUnifiedProfileMapDataSource _setUp] */

void FUN_10602e288(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be10060();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be66540(param_1,param_2,puVar1);
  func_0x00010be4da60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10602e300; end: 10602e41b; -[SCFriendUnifiedProfileMapDataSource _fetchBitmojiModel] */

void FUN_10602e300(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7338;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bfa0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfa55c0(uVar8);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_initWeak(auStack_a8,puVar1);
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c09fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_a8);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar6);
  return;
}



/* Entry: 10602e41c; end: 10602e563; -[SCFriendUnifiedProfileMapDataSource _observeLocationUpdatesWithQueue:] */

void FUN_10602e41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10602e564; end: 10602e58f;  */

void FUN_10602e564(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be07a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602e590; end: 10602e593; -[SCFriendUnifiedProfileMapDataSource _loadInitialData] */

void FUN_10602e590(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitDataModel_11255f820);
  return;
}



/* Entry: 10602e594; end: 10602e64b; -[SCFriendUnifiedProfileMapDataSource _emitDataModel] */

void FUN_10602e594(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
    param_2 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  }
  else {
    func_0x00010bf3e6a0(lVar2);
  }
  puVar3 = PTR_PTR_1126c7340;
  _objc_alloc(PTR_PTR_1126c7340);
  func_0x00010c015e20(param_1,param_2);
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x38),param_4,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10602e64c; end: 10602e64f; -[SCFriendUnifiedProfileMapDataSource profileMapCardBitmojiLoaderDidFinishFetching:] */

void FUN_10602e64c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitDataModel_11255f820);
  return;
}



/* Entry: 10602e650; end: 10602e6bb; -[SCFriendUnifiedProfileMapDataSource .cxx_destruct] */

void FUN_10602e650(long param_1)

{
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



/* Entry: 10602e6bc; end: 10602e7d3; -[SCFriendUnifiedProfileMapSection initWithSupplementaryViewProvider:actionHandler:] */

undefined1 *
FUN_10602e6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef2c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined8 *)((long)puVar1 + 0x20) = 0x406dc00000000000;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10602e7d4; end: 10602e87b; -[SCFriendUnifiedProfileMapSection setUp] */

void FUN_10602e7d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10602e87c; end: 10602e8af;  */

void FUN_10602e87c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c21c120(*(undefined8 *)(param_1 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602e8b0; end: 10602e957; -[SCFriendUnifiedProfileMapSection tearDown] */

void FUN_10602e8b0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10602e958; end: 10602e993;  */

void FUN_10602e958(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    func_0x00010c26ab80(*(undefined8 *)(param_1 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602e994; end: 10602ea2b; -[SCFriendUnifiedProfileMapSection reuseCellClassesByIdentifiers] */

void FUN_10602e994(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10602ea2c; end: 10602ea33; -[SCFriendUnifiedProfileMapSection numberOfCellsInSection] */

void FUN_10602ea2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10602ea34; end: 10602eb17; -[SCFriendUnifiedProfileMapSection cellForItemAtIndexInSection:] */

void FUN_10602ea34(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c7358;
    _objc_opt_class(PTR_PTR_1126c7358);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar1 & 1) == 0) {
      puVar3 = PTR_PTR_1126c7360;
      _objc_opt_class(PTR_PTR_1126c7360);
      uVar1 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar1 & 1) == 0) {
        param_1 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
      }
      else {
        func_0x00010be77e60(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010be77e40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
  }
  else {
    param_1 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10602eb18; end: 10602ebff; -[SCFriendUnifiedProfileMapSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16]
FUN_10602eb18(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = param_5 + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c156160();
  _objc_release(lVar1);
  uVar2 = *(ulong *)(param_5 + 8);
  func_0x00010bf529e0();
  uVar5 = 0;
  if (param_7 < uVar2) {
    uVar3 = *(ulong *)(param_5 + 8);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c7358;
    _objc_opt_class(PTR_PTR_1126c7358);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    if ((uVar2 & 1) == 0) {
      puVar4 = PTR_PTR_1126c7360;
      _objc_opt_class(PTR_PTR_1126c7360);
      uVar2 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      if ((uVar2 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_5 + 0x20);
      }
    }
    else {
      uVar5 = 0x4061800000000000;
    }
    _objc_release(uVar3);
  }
  auVar6._0_8_ = (param_1 - param_2) - param_4;
  auVar6._8_8_ = uVar5;
  return auVar6;
}



/* Entry: 10602ec00; end: 10602ec07; -[SCFriendUnifiedProfileMapSection minimumSectionLineSpacing] */

undefined8 FUN_10602ec00(void)

{
  return 0;
}



/* Entry: 10602ec08; end: 10602ec2f; -[SCFriendUnifiedProfileMapSection supplementaryViewProvider] */

void FUN_10602ec08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602ec30; end: 10602ec57; -[SCFriendUnifiedProfileMapSection sectionInfo] */

void FUN_10602ec30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602ec58; end: 10602ec87; -[SCFriendUnifiedProfileMapSection setSectionInfo:] */

void FUN_10602ec58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10602ec88; end: 10602ecff; -[SCFriendUnifiedProfileMapSection setSectionDataProvider:] */

void FUN_10602ec88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x70) != param_3) {
    func_0x00010c1896c0(*(long *)(param_1 + 0x70),param_2,0);
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0x70),param_2,0);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = param_3;
    _objc_release(uVar1);
    func_0x00010c1896c0(*(undefined8 *)(param_1 + 0x70),param_2,param_1);
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0x70),param_2,*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


