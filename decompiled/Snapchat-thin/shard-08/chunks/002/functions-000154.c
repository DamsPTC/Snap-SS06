/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105eae3f0; end: 105eae3f3; -[SCDiscoverFeedManagementSettingFullScreenViewController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:] */

void FUN_105eae3f0(void)

{
  return;
}



/* Entry: 105eae3f4; end: 105eae423; -[SCDiscoverFeedManagementSettingFullScreenViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

void FUN_105eae3f4(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eae424; end: 105eae427; -[SCDiscoverFeedManagementSettingFullScreenViewController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:] */

void FUN_105eae424(void)

{
  return;
}



/* Entry: 105eae428; end: 105eae42b; -[SCDiscoverFeedManagementSettingFullScreenViewController sectionBasedCollectionViewUpdater:didSetUpSections:] */

void FUN_105eae428(void)

{
  return;
}



/* Entry: 105eae42c; end: 105eae42f; -[SCDiscoverFeedManagementSettingFullScreenViewController sectionBasedCollectionViewUpdater:didTearDownSections:] */

void FUN_105eae42c(void)

{
  return;
}



/* Entry: 105eae430; end: 105eae443; -[SCDiscoverFeedManagementSettingFullScreenViewController sectionInsetsForSectionBasedCollectionViewUpdater:] */

undefined8 FUN_105eae430(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 105eae444; end: 105eae447; -[SCDiscoverFeedManagementSettingFullScreenViewController presentingViewControllerForSectionBasedCollectionViewUpdater:] */

void FUN_105eae444(void)

{
  return;
}



/* Entry: 105eae448; end: 105eae53b; -[SCDiscoverFeedManagementSettingFullScreenViewController textField:shouldChangeCharactersInRange:replacementString:] */

bool FUN_105eae448(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (param_3 == lVar2) {
    lVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be8a8a0(param_1,param_2,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return param_3 == lVar2;
}



/* Entry: 105eae53c; end: 105eae55b; -[SCDiscoverFeedManagementSettingFullScreenViewController textFieldShouldClear:] */

undefined8 FUN_105eae53c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be8a8a0(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  return 1;
}



/* Entry: 105eae55c; end: 105eae5c7; -[SCDiscoverFeedManagementSettingFullScreenViewController textFieldShouldReturn:] */

undefined8 FUN_105eae55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8a8a0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c13a0e0(param_3);
  _objc_release(param_3);
  return 0;
}



/* Entry: 105eae5c8; end: 105eae73b; -[SCDiscoverFeedManagementSettingFullScreenViewController _reloadDataWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eae5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5790;
  lVar6 = (long)_DAT_1127390a8;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010c128c40(uVar5);
    _objc_release(param_3);
  }
  puVar2 = PTR_PTR_1126c5798;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  if (uVar3 != 0) {
    _objc_retain(param_3);
    func_0x00010c128c40(uVar4);
    _objc_release(param_3);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105eae73c; end: 105eae88b;  */

ulong FUN_105eae73c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126b15c8;
    _objc_opt_class(PTR_PTR_1126b15c8);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar3 = param_2;
    if ((uVar4 & 1) == 0) {
      func_0x00010c2711a0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010901d7c4(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = uVar3;
    func_0x00010c09e460();
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105eae88c; end: 105eae8ef; -[SCDiscoverFeedManagementSettingFullScreenViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eae88c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eda80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8);
  if ((param_4 == 1) && (*(long *)(param_1 + _DAT_11273906c) != 0)) {
    (**(code **)(*(long *)(param_1 + _DAT_11273906c) + 0x10))();
  }
  return;
}



/* Entry: 105eae8f0; end: 105eae947; -[SCDiscoverFeedManagementSettingFullScreenViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eae8f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eda80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didSelectDismissalActionWithHead_1125bc3f8);
  if (*(long *)(param_1 + _DAT_11273906c) != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_11273906c) + 0x10))();
  }
  return;
}



/* Entry: 105eae948; end: 105eae9f7; -[SCDiscoverFeedManagementSettingFullScreenViewController _subtitleLabel:] */

void FUN_105eae948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21ad00();
  func_0x00010c1cfce0(puVar1,param_2,2);
  func_0x00010c1bdb00(puVar1,param_2,4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c23d620(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105eae9f8; end: 105eaebab; -[SCDiscoverFeedManagementSettingFullScreenViewController _headerButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eae9f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c3298;
  func_0x00010bf25cc0(PTR_PTR_1126c3298,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1);
  _objc_release(puVar6);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar6);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    if (param_3 == 1) {
      func_0x00010befbd60(puVar1);
      func_0x00010c1a8c20(0xc010000000000000,0xc010000000000000,0xc010000000000000,
                          0xc010000000000000,puVar1);
      ppuVar4 = &PTR____CFConstantStringClassReference_110dbb618;
      if (*(char *)(param_1 + _DAT_1127390bc) == '\0') {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e2eeb8;
      }
      func_0x00010bcbeaa8(ppuVar4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(puVar1);
      func_0x00010c23d620(puVar1);
      func_0x00010c160fc0(puVar1);
      _objc_release(ppuVar4);
    }
    lVar7 = (long)_DAT_1127390c0;
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar5);
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105eaebac; end: 105eaecbf; -[SCDiscoverFeedManagementSettingFullScreenViewController _didTapEditButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaebac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127390bc;
  *(byte *)(param_1 + lVar6) = *(byte *)(param_1 + lVar6) ^ 1;
  lVar1 = param_1;
  func_0x00010be34c00(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127390a4);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + lVar6))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e2f258,puVar4);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5,param_2,param_1,puVar3,lVar1);
  _objc_release(lVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105eaecc0; end: 105eaecd3; -[SCDiscoverFeedManagementSettingFullScreenViewController themeBackgroundView:didUpdateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaecc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127390b8),PTR_s_setImage__1126481e8,param_4);
  return;
}



/* Entry: 105eaecd4; end: 105eaeed3; -[SCDiscoverFeedManagementSettingFullScreenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaecd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127390b4,0);
  _objc_storeStrong(param_1 + _DAT_1127390b8,0);
  _objc_storeStrong(param_1 + _DAT_112739098,0);
  _objc_storeStrong(param_1 + _DAT_1127390b0,0);
  _objc_storeStrong(param_1 + _DAT_112739094,0);
  _objc_storeStrong(param_1 + _DAT_112739090,0);
  _objc_storeStrong(param_1 + _DAT_112739088,0);
  _objc_storeStrong(param_1 + _DAT_11273908c,0);
  _objc_storeStrong(param_1 + _DAT_112739084,0);
  _objc_storeStrong(param_1 + _DAT_112739080,0);
  _objc_storeStrong(param_1 + _DAT_11273907c,0);
  _objc_storeStrong(param_1 + _DAT_112739078,0);
  _objc_storeStrong(param_1 + _DAT_112739074,0);
  _objc_storeStrong(param_1 + _DAT_1127390c0,0);
  _objc_storeStrong(param_1 + _DAT_1127390a0,0);
  _objc_storeStrong(param_1 + _DAT_11273909c,0);
  _objc_storeStrong(param_1 + _DAT_112739070,0);
  _objc_storeStrong(param_1 + _DAT_1127390a4,0);
  _objc_storeStrong(param_1 + _DAT_1127390ac,0);
  _objc_storeStrong(param_1 + _DAT_1127390a8,0);
  _objc_storeStrong(param_1 + _DAT_11273906c,0);
  _objc_storeStrong(param_1 + _DAT_112739068,0);
  _objc_storeStrong(param_1 + _DAT_112739064,0);
  _objc_storeStrong(param_1 + _DAT_112739060,0);
  _objc_storeStrong(param_1 + _DAT_11273905c,0);
  _objc_storeStrong(param_1 + _DAT_112739058,0);
  _objc_storeStrong(param_1 + _DAT_112739054,0);
  _objc_storeStrong(param_1 + _DAT_112739050,0);
  _objc_storeStrong(param_1 + _DAT_11273904c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739048,0);
  return;
}



/* Entry: 105eaeed4; end: 105eaf30b; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105eaeed4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126eda88;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127390c4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c22a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1a00;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127390c8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126c57c8;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127390cc;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127390d0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x000105eb174c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar5);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127390d4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    func_0x00010c160fc0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105eaf30c; end: 105eaf407; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaf30c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5788;
  _objc_opt_class(PTR_PTR_1126c5788);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_1127390d8;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_105eaf3e8;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee5000(param_1);
  }
LAB_105eaf3e8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eaf408; end: 105eaf793; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaf408(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126eda88;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_1127390c4;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf199e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  dVar18 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar18 = dVar18 + 10.0;
  dVar11 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar11 = dVar11 + 7.0;
  uVar15 = 0x404a000000000000;
  uVar17 = 0x404a000000000000;
  func_0x00010b8162e0();
  lVar3 = (long)_DAT_1127390d0;
  dVar20 = dVar18;
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetHeight();
  dVar19 = dVar20 + 6.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetWidth();
  dVar7 = dVar20;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetHeight();
  dVar20 = dVar20 + dVar7;
  dVar7 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar5 = (dVar7 + -10.0) - dVar20;
  dVar12 = (66.0 - dVar19) * 0.5;
  func_0x00010b8162e0();
  dVar7 = dVar19;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar7 * 0.5);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_1127390c8;
  dVar6 = 1.79769313486232e+308;
  dVar13 = 1.79769313486232e+308;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar4));
  dVar7 = dVar18;
  _CGRectGetMaxX(dVar18,dVar11,uVar15,uVar17);
  dVar7 = dVar7 + 10.0;
  dVar14 = (66.0 - dVar13) * 0.5;
  dVar16 = (dVar5 + -10.0) - dVar7;
  if (dVar16 <= dVar6) {
    dVar6 = dVar16;
  }
  func_0x00010b8162e0();
  dVar16 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar8 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar9 = dVar8;
  func_0x00010b816670();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar10 = param_1;
  func_0x00010b816670();
  func_0x00010b816528(dVar16,dVar8 - dVar9,param_1,dVar10);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127390d4));
  func_0x00010b8166f8(dVar18,dVar11,uVar15,uVar17,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127390cc));
  func_0x00010b8166f8(dVar5,dVar12,dVar20,dVar19,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010b8166f8(dVar7,dVar14,dVar6,dVar13,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  return;
}



/* Entry: 105eaf794; end: 105eaf79f; +[SCDiscoverFeedManagementHiddenChannelCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_105eaf794(void)

{
  return;
}



/* Entry: 105eaf7a0; end: 105eaf7af; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaf7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127390cc),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 105eaf7b0; end: 105eaf88f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell _updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaf7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe1340(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_1127390c8;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2));
  _objc_release(uVar1);
  func_0x00010c0e1a60(param_3);
  func_0x00010c16eda0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = param_3;
  func_0x00010bfe5c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127390cc));
  _objc_release(uVar1);
  func_0x00010c15e4c0(param_3);
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127390d4));
  func_0x00010c1a7f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105eaf890; end: 105eaf93f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell _didTapCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaf890(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c5788;
  uVar4 = *(ulong *)(param_1 + _DAT_1127390d8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127390e0);
    func_0x00010c268c60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eaf940; end: 105eaf9ff; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell _didTapUnhide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eaf940(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c5788;
  uVar4 = *(ulong *)(param_1 + _DAT_1127390d8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127390e0);
    func_0x00010c27fc00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eafa00; end: 105eafa0f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eafa00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127390e0);
}



/* Entry: 105eafa10; end: 105eafa4f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eafa10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127390e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eafa50; end: 105eafa5f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eafa50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127390dc);
}



/* Entry: 105eafa60; end: 105eafa6f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eafa60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127390dc) = param_3;
  return;
}



/* Entry: 105eafa70; end: 105eafa7f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eafa70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127390d8);
}



/* Entry: 105eafa80; end: 105eafa8f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eafa80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127390e4);
}



/* Entry: 105eafa90; end: 105eafb2f; -[SCDiscoverFeedManagementHiddenChannelCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eafa90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127390e4,0);
  _objc_storeStrong(param_1 + _DAT_1127390d8,0);
  _objc_storeStrong(param_1 + _DAT_1127390e0,0);
  _objc_storeStrong(param_1 + _DAT_1127390d4,0);
  _objc_storeStrong(param_1 + _DAT_1127390d0,0);
  _objc_storeStrong(param_1 + _DAT_1127390c8,0);
  _objc_storeStrong(param_1 + _DAT_1127390cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127390c4,0);
  return;
}



/* Entry: 105eafb30; end: 105eb0013; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105eafb30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126eda90;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127390e8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1a00;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127390ec;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR_PTR_1126c57c8;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127390f0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR_PTR_1126c57d0;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127390f4;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127390f8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    uVar6 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105eb0014;
    puStack_80 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_78 = puVar1;
    func_0x00010007380c(uVar6,&puStack_98);
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127390fc;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar7 = (long)_DAT_112739100;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar7 = (long)_DAT_112739104;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    func_0x00010c1c8340(0x3fd0000000000000,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    func_0x00010c160fc0(puVar1);
    _objc_release(puVar3);
    _objc_release(puStack_78);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 105eb0014; end: 105eb0163;  */

void FUN_105eb0014(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110e2ef38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar3 = puVar1;
  func_0x00010c14e6c0(0x4034000000000000,0x4034000000000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c14d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105eb0164;
  puStack_58 = &UNK_110841f80;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar6);
  uStack_50 = uVar6;
  puStack_48 = puVar5;
  _objc_retain(puVar5);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(puVar5);
  return;
}



/* Entry: 105eb0164; end: 105eb017b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127390f8),
             PTR_s_setImage_forState__112648218,*(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105eb017c; end: 105eb0277; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb017c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5780;
  _objc_opt_class(PTR_PTR_1126c5780);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_112739108;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_105eb0258;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee5000(param_1);
  }
LAB_105eb0258:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eb0278; end: 105eb0643; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0278(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126eda90;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_1127390e8;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf199e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  dVar6 = param_1 + 10.0;
  dVar13 = param_2 + 7.0;
  dVar17 = 52.0;
  dVar21 = 52.0;
  func_0x00010b8162e0();
  lVar3 = (long)_DAT_1127390f4;
  dVar18 = dVar17;
  dVar22 = dVar21;
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  dVar24 = (param_3 + -10.0) - dVar18;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  dVar25 = (66.0 - dVar22) * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010b8162e0();
  dVar9 = dVar22;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar9 * 0.5);
  _objc_release(uVar2);
  dVar7 = param_3 + -10.0 + -28.0;
  uVar14 = 0x4033000000000000;
  dVar19 = 28.0;
  uVar23 = 0x403c000000000000;
  func_0x00010b8162e0();
  lVar5 = (long)_DAT_1127390f8;
  dVar9 = dVar19;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar9 * 0.5);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_1127390ec;
  dVar8 = 1.79769313486232e+308;
  dVar15 = 1.79769313486232e+308;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar4));
  dVar9 = dVar6;
  _CGRectGetMaxX(dVar6,dVar13,dVar17,dVar21);
  dVar9 = dVar9 + 10.0;
  dVar16 = (66.0 - dVar15) * 0.5;
  dVar20 = (dVar24 + -10.0) - dVar9;
  if (dVar20 <= dVar8) {
    dVar8 = dVar20;
  }
  func_0x00010b8162e0();
  dVar20 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar10 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar11 = dVar10;
  func_0x00010b816670();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar12 = param_1;
  func_0x00010b816670();
  func_0x00010b816528(dVar20,dVar10 - dVar11,param_1,dVar12);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127390fc));
  func_0x00010b8166f8(dVar6,dVar13,dVar17,dVar21,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127390f0));
  func_0x00010b8166f8(dVar24,dVar25,dVar18,dVar22,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010b8166f8(dVar7,uVar14,dVar19,uVar23,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010b8166f8(dVar9,dVar16,dVar8,dVar15,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  return;
}



/* Entry: 105eb0644; end: 105eb064f; +[SCDiscoverFeedManagementSubscriptionCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_105eb0644(void)

{
  return;
}



/* Entry: 105eb0650; end: 105eb065f; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127390f0),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 105eb0660; end: 105eb066f; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0660(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11273910c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105eb0670; end: 105eb0753; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105eb0670(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == *(long *)(param_1 + _DAT_112739100) &&
       param_4 == *(long *)(param_1 + _DAT_112739104)) ||
     (param_4 == *(long *)(param_1 + _DAT_112739100) &&
      param_3 == *(long *)(param_1 + _DAT_112739104))) {
    bVar1 = false;
  }
  else {
    lVar2 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == *(long *)(param_1 + _DAT_1127390f4)) {
      bVar1 = false;
    }
    else {
      lVar3 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar3 != *(long *)(param_1 + _DAT_1127390f8);
      _objc_release();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105eb0754; end: 105eb0887; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell _updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0754(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c0ebd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_3;
    func_0x00010c071280(param_3);
  }
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c260a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127390ec;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e1a60(param_3);
  func_0x00010c16eda0(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
  lVar3 = param_3;
  func_0x00010bfe5c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127390f0),param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c071280(param_3);
  func_0x00010bed7480(param_1,param_2,lVar3);
  lVar3 = (long)_DAT_1127390f4;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar3 = param_3;
  func_0x00010c079480(param_3);
  func_0x00010c1fadc0(uVar2,param_2,lVar3);
  func_0x00010c1a7f60(param_1,param_2,0);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eb0888; end: 105eb0947; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell _didTapOptInButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0888(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c5780;
  uVar4 = *(ulong *)(param_1 + _DAT_112739108);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112739110);
    func_0x00010c0ebd60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eb0948; end: 105eb0a3b; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell _didTapCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0948(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c5780;
  uVar4 = *(ulong *)(param_1 + _DAT_112739108);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0 && uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112739110);
    func_0x00010c268c60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eb0a3c; end: 105eb0d7f; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell _didTapUnsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0a3c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar12 = PTR_PTR_1126c5780;
  uVar13 = *(ulong *)(param_1 + _DAT_112739108);
  _objc_retain(uVar13);
  _objc_opt_class(puVar12);
  uVar2 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar12);
  uVar1 = uVar13;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  if (uVar1 != 0) {
    uVar2 = uVar13;
    func_0x00010c260a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_80,param_1);
    puVar4 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110db6ad8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6ad8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(uVar13);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar5 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
    puVar12 = (undefined *)0x0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = puVar6;
    func_0x000105eb17f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar9 = puVar8;
    func_0x000105eb180c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar4;
    puStack_70 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(puVar12);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be250e0();
  func_0x00010c13a0e0(puVar12);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eb0d80; end: 105eb0dfb;  */

void FUN_105eb0d80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be250e0();
  func_0x00010c13a0e0(param_2);
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eb0dfc; end: 105eb0e3b;  */

void FUN_105eb0dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c13a0e0(param_2);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105eb0e3c; end: 105eb0f4b; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell _didLongPressCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0e3c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5780;
  uVar5 = *(ulong *)(param_1 + _DAT_112739108);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if ((uVar1 != 0) &&
     ((lVar4 = param_3, func_0x00010c252440(), lVar4 == 2 ||
      (lVar4 = param_3, func_0x00010c252440(), lVar4 == 1)))) {
    func_0x00010c14c8a0(param_3);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112739110);
    func_0x00010c0b4d20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eb0f4c; end: 105eb0f5f; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell _updateEditingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0f4c(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127390f8),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 105eb0f60; end: 105eb0fcb; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell _handleActionAndProceedToUserUnsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0f60(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112739110);
    func_0x00010c282a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar1,param_2,param_1,param_3,*(undefined8 *)(param_1 + _DAT_1127390f4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105eb0fcc; end: 105eb106f; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb0fcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eda90;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127390e8);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105eb1070; end: 105eb107f; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eb1070(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112739110);
}



/* Entry: 105eb1080; end: 105eb10bf; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb1080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112739110;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eb10c0; end: 105eb10cf; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eb10c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273910c);
}



/* Entry: 105eb10d0; end: 105eb10df; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eb10d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112739108);
}



/* Entry: 105eb10e0; end: 105eb10ef; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eb10e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112739114);
}



/* Entry: 105eb10f0; end: 105eb11bf; -[SCDiscoverFeedManagementSubscriptionCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb10f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739114,0);
  _objc_storeStrong(param_1 + _DAT_112739108,0);
  _objc_storeStrong(param_1 + _DAT_112739110,0);
  _objc_storeStrong(param_1 + _DAT_112739104,0);
  _objc_storeStrong(param_1 + _DAT_112739100,0);
  _objc_storeStrong(param_1 + _DAT_1127390fc,0);
  _objc_storeStrong(param_1 + _DAT_1127390f8,0);
  _objc_storeStrong(param_1 + _DAT_1127390f4,0);
  _objc_storeStrong(param_1 + _DAT_1127390ec,0);
  _objc_storeStrong(param_1 + _DAT_1127390f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127390e8,0);
  return;
}



/* Entry: 105eb11c0; end: 105eb126f; -[SCDiscoverFeedManagementIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105eb11c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126eda98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4730;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739118);
    *(undefined **)((long)puVar1 + (long)_DAT_112739118) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b48f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273911c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273911c) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105eb1270; end: 105eb1317; -[SCDiscoverFeedManagementIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb1270(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eda98;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_4);
  func_0x00010bfb68e0(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_112739118));
  func_0x00010bfb68e0(param_4);
  func_0x00010bfb68e0(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_11273911c));
  return;
}



/* Entry: 105eb1318; end: 105eb14e7; -[SCDiscoverFeedManagementIconView setViewModel:] */

void FUN_105eb1318(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5778;
  _objc_opt_class(PTR_PTR_1126c5778);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c0c0100(param_3);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eb14e8; end: 105eb14ef;  */

void FUN_105eb14e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5c7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_croppedImageToCircle_1125b4ba0);
  return;
}



/* Entry: 105eb14f0; end: 105eb157b; -[SCDiscoverFeedManagementIconView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb14f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112739120;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_112739118;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar2,PTR_s_setImageDownloader__1126482a8);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar3));
  }
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11273911c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eb157c; end: 105eb158b; -[SCDiscoverFeedManagementIconView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eb157c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112739124);
}



/* Entry: 105eb158c; end: 105eb159b; -[SCDiscoverFeedManagementIconView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105eb158c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112739120);
}



/* Entry: 105eb159c; end: 105eb15fb; -[SCDiscoverFeedManagementIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb159c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739120,0);
  _objc_storeStrong(param_1 + _DAT_112739124,0);
  _objc_storeStrong(param_1 + _DAT_11273911c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739118,0);
  return;
}



/* Entry: 105eb15fc; end: 105eb165b; -[SCDiscoverFeedManagementOptInNotificationView initWithFrame:] */

undefined1 * FUN_105eb15fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edaa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c182220(puVar1);
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105eb165c; end: 105eb1703; -[SCDiscoverFeedManagementOptInNotificationView setSelected:] */

void FUN_105eb165c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ef98;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2efb8;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c14d100(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105eb1704; end: 105eb1823;  */

void FUN_105eb1704(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2eff8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2eff8,
                      &PTR____CFConstantStringClassReference_110e2efd8,0);
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



/* Entry: 105eb1824; end: 105eb18ef; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel initWithSnapchatter:snapProProfile:isSubscribed:isOptedInNotifications:isHidden:] */

undefined1 *
FUN_105eb1824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126edaa8;
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
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb18f0; end: 105eb1913; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel copyWithZone:] */

undefined8 FUN_105eb18f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb1914; end: 105eb1997; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel hash] */

undefined8 * FUN_105eb1914(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_38;
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
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105eb1a48:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105eb1a54;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105eb1a54;
        }
        goto LAB_105eb1a48;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105eb1a54:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105eb1998; end: 105eb1a6f; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel isEqual:] */

long FUN_105eb1998(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105eb1a48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105eb1a54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105eb1a54;
        }
        goto LAB_105eb1a48;
      }
    }
    lVar3 = 0;
  }
LAB_105eb1a54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105eb1a70; end: 105eb1a77; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel snapchatter] */

undefined8 FUN_105eb1a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105eb1a78; end: 105eb1a7f; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel snapProProfile] */

undefined8 FUN_105eb1a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105eb1a80; end: 105eb1a87; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel isSubscribed] */

undefined1 FUN_105eb1a80(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105eb1a88; end: 105eb1a8f; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel isOptedInNotifications] */

undefined1 FUN_105eb1a88(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105eb1a90; end: 105eb1a97; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel isHidden] */

undefined1 FUN_105eb1a90(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105eb1a98; end: 105eb1ac7; -[SCDiscoverFeedManagementOpenPublicUserProfileActionDataModel .cxx_destruct] */

void FUN_105eb1a98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105eb1ac8; end: 105eb1bb7; -[SCDiscoverFeedManagementOptInButtonActionDataModel initWithCurrentUserId:optInEntityId:optInEntityDisplayName:isPublisher:isOptingIn:] */

undefined1 *
FUN_105eb1ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126edab0;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb1bb8; end: 105eb1bdb; -[SCDiscoverFeedManagementOptInButtonActionDataModel copyWithZone:] */

undefined8 FUN_105eb1bb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb1bdc; end: 105eb1c67; -[SCDiscoverFeedManagementOptInButtonActionDataModel hash] */

undefined8 * FUN_105eb1bdc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105eb1d20:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105eb1d2c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105eb1d2c;
          }
          goto LAB_105eb1d20;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105eb1d2c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105eb1c68; end: 105eb1d47; -[SCDiscoverFeedManagementOptInButtonActionDataModel isEqual:] */

long FUN_105eb1c68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105eb1d20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105eb1d2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105eb1d2c;
          }
          goto LAB_105eb1d20;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105eb1d2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105eb1d48; end: 105eb1d4f; -[SCDiscoverFeedManagementOptInButtonActionDataModel currentUserId] */

undefined8 FUN_105eb1d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105eb1d50; end: 105eb1d57; -[SCDiscoverFeedManagementOptInButtonActionDataModel optInEntityId] */

undefined8 FUN_105eb1d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105eb1d58; end: 105eb1d5f; -[SCDiscoverFeedManagementOptInButtonActionDataModel optInEntityDisplayName] */

undefined8 FUN_105eb1d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105eb1d60; end: 105eb1d67; -[SCDiscoverFeedManagementOptInButtonActionDataModel isPublisher] */

undefined1 FUN_105eb1d60(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105eb1d68; end: 105eb1d6f; -[SCDiscoverFeedManagementOptInButtonActionDataModel isOptingIn] */

undefined1 FUN_105eb1d68(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105eb1d70; end: 105eb1dab; -[SCDiscoverFeedManagementOptInButtonActionDataModel .cxx_destruct] */

void FUN_105eb1d70(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105eb1dac; end: 105eb1df3; -[SCDiscoverFeedManagementEditButtonUpdateRequest initWithShouldUpdateToEditting:] */

void FUN_105eb1dac(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edab8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 105eb1df4; end: 105eb1e17; -[SCDiscoverFeedManagementEditButtonUpdateRequest copyWithZone:] */

undefined8 FUN_105eb1df4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb1e18; end: 105eb1e1f; -[SCDiscoverFeedManagementEditButtonUpdateRequest hash] */

undefined1 FUN_105eb1e18(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105eb1e20; end: 105eb1ea7; -[SCDiscoverFeedManagementEditButtonUpdateRequest isEqual:] */

bool FUN_105eb1e20(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105eb1ea8; end: 105eb1eaf; -[SCDiscoverFeedManagementEditButtonUpdateRequest shouldUpdateToEditting] */

undefined1 FUN_105eb1ea8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105eb1eb0; end: 105eb1f77; -[SCDiscoverFeedManagementSettingConfig initWithTitle:subtitle:hasSearchView:fullScreenDataProviderEnum:headerButton:] */

undefined1 *
FUN_105eb1eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126edac0;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb1f78; end: 105eb1f9b; -[SCDiscoverFeedManagementSettingConfig copyWithZone:] */

undefined8 FUN_105eb1f78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb1f9c; end: 105eb201b; -[SCDiscoverFeedManagementSettingConfig hash] */

undefined8 * FUN_105eb1f9c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105eb20cc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105eb20d8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105eb20d8;
        }
        goto LAB_105eb20cc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105eb20d8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105eb201c; end: 105eb20f3; -[SCDiscoverFeedManagementSettingConfig isEqual:] */

long FUN_105eb201c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105eb20cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105eb20d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105eb20d8;
        }
        goto LAB_105eb20cc;
      }
    }
    lVar3 = 0;
  }
LAB_105eb20d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105eb20f4; end: 105eb20fb; -[SCDiscoverFeedManagementSettingConfig title] */

undefined8 FUN_105eb20f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


