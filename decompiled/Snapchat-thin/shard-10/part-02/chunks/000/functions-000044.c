/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a7509c; end: 107a7509f; -[SCTopicViewerViewController viewControllerDismissSelf:] */

void FUN_107a7509c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissTopicViewerWithCompletion_1125bebc8);
  return;
}



/* Entry: 107a750a0; end: 107a750bf; -[SCTopicViewerViewController _getTotalNumSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a750a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c124d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768f60),PTR_s_reduce_withInitialValue__112626d68,
             &PTR___NSConcreteGlobalBlock_1109f8218,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb2d8);
  return;
}



/* Entry: 107a750c0; end: 107a7514b;  */

void FUN_107a750c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c067fc0(param_2);
  uVar1 = param_3;
  func_0x00010c275680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf529e0(uVar1);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a7514c; end: 107a7514f; -[SCTopicViewerViewController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:] */

void FUN_107a7514c(void)

{
  return;
}



/* Entry: 107a75150; end: 107a751af; -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75150(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a751b0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_112768f28),param_2,&puStack_38);
  return;
}



/* Entry: 107a751b0; end: 107a751d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a751b0(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768f50) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768f50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be8ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__reloadSectionsConfigurations_1125804c0);
    return;
  }
  return;
}



/* Entry: 107a751d8; end: 107a751db; -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:] */

void FUN_107a751d8(void)

{
  return;
}



/* Entry: 107a751dc; end: 107a751df; -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didSetUpSections:] */

void FUN_107a751dc(void)

{
  return;
}



/* Entry: 107a751e0; end: 107a751e3; -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didTearDownSections:] */

void FUN_107a751e0(void)

{
  return;
}



/* Entry: 107a751e4; end: 107a751f7; -[SCTopicViewerViewController sectionInsetsForSectionBasedCollectionViewUpdater:] */

undefined8 FUN_107a751e4(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 107a751f8; end: 107a751fb; -[SCTopicViewerViewController presentingViewControllerForSectionBasedCollectionViewUpdater:] */

void FUN_107a751f8(void)

{
  return;
}



/* Entry: 107a751fc; end: 107a7521b; -[SCTopicViewerViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a751fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112768f78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a7521c; end: 107a7522f; -[SCTopicViewerViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7521c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112768f78,param_3);
  return;
}



/* Entry: 107a75230; end: 107a7523f; -[SCTopicViewerViewController headerAccessoryButtonProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a75230(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768f58);
}



/* Entry: 107a75240; end: 107a7527f; -[SCTopicViewerViewController setHeaderAccessoryButtonProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768f58;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a75280; end: 107a7528f; -[SCTopicViewerViewController imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a75280(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768f94);
}



/* Entry: 107a75290; end: 107a752cf; -[SCTopicViewerViewController setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768f94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a752d0; end: 107a752df; -[SCTopicViewerViewController bitmojiAvatarProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a752d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768f98);
}



/* Entry: 107a752e0; end: 107a7531f; -[SCTopicViewerViewController setBitmojiAvatarProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a752e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768f98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a75320; end: 107a7532f; -[SCTopicViewerViewController complianceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a75320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768f70);
}



/* Entry: 107a75330; end: 107a7536f; -[SCTopicViewerViewController setComplianceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768f70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a75370; end: 107a7560b; -[SCTopicViewerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75370(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768f70,0);
  _objc_storeStrong(param_1 + _DAT_112768f98,0);
  _objc_storeStrong(param_1 + _DAT_112768f94,0);
  _objc_storeStrong(param_1 + _DAT_112768f58,0);
  _objc_destroyWeak(param_1 + _DAT_112768f78);
  _objc_storeStrong(param_1 + _DAT_112768f38,0);
  _objc_storeStrong(param_1 + _DAT_112768f34,0);
  _objc_storeStrong(param_1 + _DAT_112768f20,0);
  _objc_storeStrong(param_1 + _DAT_112768f1c,0);
  _objc_storeStrong(param_1 + _DAT_112768f64,0);
  _objc_storeStrong(param_1 + _DAT_112768f18,0);
  _objc_storeStrong(param_1 + _DAT_112768f4c,0);
  _objc_storeStrong(param_1 + _DAT_112768f0c,0);
  _objc_storeStrong(param_1 + _DAT_112768f74,0);
  _objc_storeStrong(param_1 + _DAT_112768ee8,0);
  _objc_storeStrong(param_1 + _DAT_112768f90,0);
  _objc_storeStrong(param_1 + _DAT_112768f8c,0);
  _objc_storeStrong(param_1 + _DAT_112768f00,0);
  _objc_storeStrong(param_1 + _DAT_112768f68,0);
  _objc_storeStrong(param_1 + _DAT_112768f48,0);
  _objc_storeStrong(param_1 + _DAT_112768f28,0);
  _objc_storeStrong(param_1 + _DAT_112768f80,0);
  _objc_storeStrong(param_1 + _DAT_112768f7c,0);
  _objc_storeStrong(param_1 + _DAT_112768ecc,0);
  _objc_storeStrong(param_1 + _DAT_112768ec4,0);
  _objc_storeStrong(param_1 + _DAT_112768ef4,0);
  _objc_storeStrong(param_1 + _DAT_112768ef8,0);
  _objc_storeStrong(param_1 + _DAT_112768f30,0);
  _objc_storeStrong(param_1 + _DAT_112768efc,0);
  _objc_storeStrong(param_1 + _DAT_112768ee4,0);
  _objc_storeStrong(param_1 + _DAT_112768ee0,0);
  _objc_storeStrong(param_1 + _DAT_112768edc,0);
  _objc_storeStrong(param_1 + _DAT_112768ed8,0);
  _objc_storeStrong(param_1 + _DAT_112768ed4,0);
  _objc_storeStrong(param_1 + _DAT_112768ed0,0);
  _objc_storeStrong(param_1 + _DAT_112768f6c,0);
  _objc_storeStrong(param_1 + _DAT_112768f2c,0);
  _objc_storeStrong(param_1 + _DAT_112768f60,0);
  _objc_storeStrong(param_1 + _DAT_112768f5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768f54,0);
  return;
}



/* Entry: 107a7560c; end: 107a7577b; -[SCTopicViewerLensHeaderViewModel initWithLensName:creatorName:lensIcon:lensFavoritesButtonState:officialBadgeType:creatorNameInteractable:favoriteTapActionModel:profileTapActionModel:] */

undefined1 *
FUN_107a7560c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f98b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a7577c; end: 107a7579f; -[SCTopicViewerLensHeaderViewModel copyWithZone:] */

undefined8 FUN_107a7577c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a757a0; end: 107a757a7; -[SCTopicViewerLensHeaderViewModel lensName] */

undefined8 FUN_107a757a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a757a8; end: 107a757af; -[SCTopicViewerLensHeaderViewModel creatorName] */

undefined8 FUN_107a757a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a757b0; end: 107a757b7; -[SCTopicViewerLensHeaderViewModel lensIcon] */

undefined8 FUN_107a757b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a757b8; end: 107a757bf; -[SCTopicViewerLensHeaderViewModel lensFavoritesButtonState] */

undefined8 FUN_107a757b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a757c0; end: 107a757c7; -[SCTopicViewerLensHeaderViewModel officialBadgeType] */

undefined8 FUN_107a757c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a757c8; end: 107a757cf; -[SCTopicViewerLensHeaderViewModel creatorNameInteractable] */

undefined1 FUN_107a757c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a757d0; end: 107a757d7; -[SCTopicViewerLensHeaderViewModel favoriteTapActionModel] */

undefined8 FUN_107a757d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107a757d8; end: 107a757df; -[SCTopicViewerLensHeaderViewModel profileTapActionModel] */

undefined8 FUN_107a757d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a757e0; end: 107a7583f; -[SCTopicViewerLensHeaderViewModel .cxx_destruct] */

void FUN_107a757e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a75840; end: 107a75863; -[SCTopicViewerViewSnapShimmerCellViewModel copyWithZone:] */

undefined8 FUN_107a75840(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a75864; end: 107a758db; -[SCTopicViewerAlbumArtPlaceholderView initWithSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107a75864(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f98b8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112768fbc) = param_1;
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a758dc; end: 107a75a47; -[SCTopicViewerAlbumArtPlaceholderView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a758dc(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  double dVar7;
  double dVar8;
  
  ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_1111817a8;
  func_0x00010bf529e0();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar6 = (undefined **)0x0;
    do {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111817a8;
      func_0x00010c0dfd40(&PTR__OBJC_CLASS___NSConstantArray_1111817a8,param_3,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = (double)((ulong)ppuVar6 & 0xffffffff) * 9.0 + 15.0;
      dVar7 = *(double *)(param_2 + _DAT_112768fbc);
      puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
      _objc_opt_new(PTR__OBJC_CLASS___CALayer_1126b1750);
      func_0x00010c1842e0(0x4008000000000000);
      func_0x00010c19f0e0(dVar8,dVar7 * 0.5 - param_1 * 0.5,0x4018000000000000,param_1,puVar2);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xc0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(puVar2,param_3,puVar4);
      _objc_release(puVar3);
      lVar5 = param_2;
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb20();
      _objc_release(lVar5);
      _objc_release(puVar2);
      _objc_release(ppuVar1);
      ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111817a8;
      func_0x00010bf529e0();
      param_1 = dVar8;
    } while (ppuVar6 < ppuVar1);
  }
  return;
}



/* Entry: 107a75a48; end: 107a75afb; -[SCTopicViewerCTAButtonView initWithDelegate:viewModelObservable:imageLabelSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a75a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f98c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112768fc0),param_3);
    func_0x00010beb1160(puVar1);
    func_0x00010beae760(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a75afc; end: 107a75c23; -[SCTopicViewerCTAButtonView _setupObservation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112768fc4);
  *(undefined8 *)(param_1 + _DAT_112768fc4) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a75c24; end: 107a75c6b;  */

void FUN_107a75c24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a75c6c; end: 107a75f83; -[SCTopicViewerCTAButtonView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75c6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25ce0(PTR_PTR_1126aec40,param_2,1,&PTR___NSConcreteGlobalBlock_1109f8268);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112768fc8;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar16));
  _objc_initWeak(auStack_90,param_1);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  puVar14 = auStack_90;
  _objc_copyWeak(auStack_98,puVar14);
  func_0x00010c1d3960(uVar15);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_98);
  puVar13 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar13);
  _objc_retain(puVar14);
  func_0x00010c21ad00(puVar14);
  func_0x00010c165e20(puVar14);
  func_0x00010c1c83a0(0x3fe6666666666666,puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 107a75f84; end: 107a75fd3;  */

void FUN_107a75f84(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c21ad00(param_2);
  func_0x00010c165e20(param_2);
  func_0x00010c1c83a0(0x3fe6666666666666,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a75fd4; end: 107a76037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a75fd4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112768fc0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf787e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a76038; end: 107a76117; -[SCTopicViewerCTAButtonView _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a76038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768fcc);
  *(undefined8 *)(param_1 + _DAT_112768fcc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bf25920(param_3);
  lVar3 = (long)_DAT_112768fc8;
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 107a76118; end: 107a76127; -[SCTopicViewerCTAButtonView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a76118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768fc8),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 107a76128; end: 107a76183; -[SCTopicViewerCTAButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a76128(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768fcc,0);
  _objc_storeStrong(param_1 + _DAT_112768fc4,0);
  _objc_destroyWeak(param_1 + _DAT_112768fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768fc8,0);
  return;
}



/* Entry: 107a76184; end: 107a7631b; -[SCTopicViewerEmptyStateCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107a76184(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f98c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112768fd0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar4);
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar5 = (long)_DAT_112768fd4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010bdc4ae0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a7631c; end: 107a7663b; -[SCTopicViewerEmptyStateCollectionViewCell _activateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7631c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  
  puVar23 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_112768fd0;
  lVar1 = *(long *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf493c0(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf493c0(0xc044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar22;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112768fd4;
  uVar10 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  func_0x00010beef8c0(puVar23);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar19);
  lVar24 = (long)_DAT_112768fd8;
  puVar23 = *(undefined **)(lVar1 + lVar24);
  _objc_retain(puVar19);
  _objc_retain(puVar23);
  if (puVar19 == puVar23) {
    _objc_release(puVar23);
    puVar23 = puVar19;
  }
  else {
    if (puVar23 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar16 = puVar19;
      func_0x00010c071ae0();
      _objc_release(puVar23);
      _objc_release(puVar19);
      if (((ulong)puVar16 & 1) != 0) goto LAB_107a7679c;
    }
    _objc_retain(puVar19);
    uVar17 = *(undefined8 *)(lVar1 + lVar24);
    *(undefined **)(lVar1 + lVar24) = puVar19;
    _objc_release(uVar17);
    puVar16 = PTR_PTR_1126d60e0;
    puVar23 = *(undefined **)(lVar1 + lVar24);
    _objc_retain(puVar23);
    _objc_opt_class(puVar16);
    puVar18 = puVar23;
    _objc_opt_isKindOfClass(puVar23,puVar16);
    puVar16 = puVar23;
    if (((ulong)puVar18 & 1) == 0) {
      puVar16 = (undefined *)0x0;
    }
    _objc_retain(puVar16);
    _objc_release(puVar23);
    if (puVar16 == (undefined *)0x0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar16 = puVar23;
      func_0x00010c238140();
      lVar24 = (long)_DAT_112768fd4;
      if ((int)puVar16 == 0) {
        func_0x00010c2558c0(*(undefined8 *)(lVar1 + lVar24));
      }
      else {
        func_0x00010c1a7f60();
        func_0x00010c24dbc0(*(undefined8 *)(lVar1 + lVar24));
      }
      uVar17 = *(undefined8 *)(lVar1 + _DAT_112768fd0);
      puVar16 = puVar23;
      func_0x00010c0cb140(puVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar17);
      _objc_release(puVar16);
      func_0x00010c1cbe20(lVar1);
    }
  }
  _objc_release(puVar23);
LAB_107a7679c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar19);
  return;
}



/* Entry: 107a7663c; end: 107a767b3; -[SCTopicViewerEmptyStateCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7663c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112768fd8;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  if (param_3 == uVar5) {
    _objc_release(uVar5);
    uVar5 = param_3;
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
      if ((uVar1 & 1) != 0) goto LAB_107a7679c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d60e0;
    uVar5 = *(ulong *)(param_1 + lVar6);
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
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = uVar5;
      func_0x00010c238140();
      lVar6 = (long)_DAT_112768fd4;
      if ((int)uVar1 == 0) {
        func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar6));
      }
      else {
        func_0x00010c1a7f60();
        func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar6));
      }
      uVar2 = *(undefined8 *)(param_1 + _DAT_112768fd0);
      uVar1 = uVar5;
      func_0x00010c0cb140(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar2);
      _objc_release(uVar1);
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(uVar5);
LAB_107a7679c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a767b4; end: 107a7680b; +[SCTopicViewerEmptyStateCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107a767b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  auVar2._8_8_ = param_4 * 0.5;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107a7680c; end: 107a7681b; -[SCTopicViewerEmptyStateCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7680c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768fd8);
}



/* Entry: 107a7681c; end: 107a7686b; -[SCTopicViewerEmptyStateCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7681c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768fd8,0);
  _objc_storeStrong(param_1 + _DAT_112768fd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768fd0,0);
  return;
}



/* Entry: 107a7686c; end: 107a7693b; -[SCTopicViewerHeaderAccessoryButton initWithIcon:text:onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a7686c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f98d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768fdc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112768fdc) = uVar2;
    _objc_release(uVar3);
    func_0x00010beb1740(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a7693c; end: 107a769d7; -[SCTopicViewerHeaderAccessoryButton updateWithIcon:text:onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7693c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768fdc);
  *(undefined8 *)(param_1 + _DAT_112768fdc) = param_5;
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112768fe0),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112768fe4),param_2,param_4);
  func_0x00010c161020(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a769d8; end: 107a76f63; -[SCTopicViewerHeaderAccessoryButton _setupWithIcon:text:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a769d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c219b60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar2);
  func_0x00010c1af000(param_1);
  func_0x00010c161080(param_1);
  func_0x00010c161020(param_1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_3);
  lVar24 = (long)_DAT_112768fe0;
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar24));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar23 = (long)_DAT_112768fe4;
  uVar3 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar23));
  _objc_release(param_4);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar23));
  _objc_release(uVar3);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar23));
  _objc_release(puVar1);
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(param_1);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar24);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + _DAT_112768fdc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107a76f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + _DAT_112768fdc) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107a76f64; end: 107a76f7f; -[SCTopicViewerHeaderAccessoryButton _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a76f64(long param_1)

{
  if (*(long *)(param_1 + _DAT_112768fdc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107a76f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112768fdc) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107a76f80; end: 107a76fcf; -[SCTopicViewerHeaderAccessoryButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a76f80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768fdc,0);
  _objc_storeStrong(param_1 + _DAT_112768fe4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768fe0,0);
  return;
}



/* Entry: 107a76fd0; end: 107a76feb; +[SCTopicViewerHeaderView sigSectionHeaderHeightWithTitle:] */

undefined8 FUN_107a76fd0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x404b000000000000;
  if (param_3 == 0) {
    uVar1 = 0x4040000000000000;
  }
  return uVar1;
}



/* Entry: 107a76fec; end: 107a77063; -[SCTopicViewerHeaderView setHeaderText:] */

void FUN_107a76fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d61a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c053940();
  _objc_release(param_3);
  func_0x00010c1a7b00(param_1,param_2,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a77064; end: 107a770d7; -[SCTopicViewerHeaderView setHeaderViewModel:useSIGSectionHeader:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a77064(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + _DAT_112768fe8) = param_4;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768fec);
  *(undefined8 *)(param_1 + _DAT_112768fec) = param_5;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010beb15c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a770d8; end: 107a7782f; -[SCTopicViewerHeaderView _setupViewsWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a770d8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar15 = (long)_DAT_112768ff0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar15));
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = 0;
  _objc_release(uVar2);
  lVar17 = (long)_DAT_112768ff4;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar17));
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  *(undefined8 *)(param_1 + lVar17) = 0;
  _objc_release(uVar2);
  lVar14 = (long)_DAT_112768ff8;
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = 0;
  _objc_release(uVar2);
  lVar13 = (long)_DAT_112768ffc;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = 0;
  _objc_release(uVar2);
  lVar9 = (long)_DAT_112769000;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = 0;
  _objc_release(uVar2);
  lVar10 = (long)_DAT_112769004;
  if (*(long *)(param_1 + lVar10) != 0) {
    func_0x00010c12c9c0(param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    *(undefined8 *)(param_1 + lVar10) = 0;
    _objc_release(uVar2);
  }
  lVar11 = (long)_DAT_112769008;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = 0;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar3);
  _objc_release(puVar3);
  lVar4 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  puVar16 = (undefined8 *)PTR__CGRectZero_110347608;
  if (lVar5 != 0) {
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*puVar16,*(undefined8 *)((long)puVar16 + 8),
                        *(undefined8 *)((long)puVar16 + 0x10),*(undefined8 *)((long)puVar16 + 0x18))
    ;
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar3;
    _objc_release(uVar2);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar15),param_2,0x16);
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
    lVar4 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15),param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  }
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar3;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar17),param_2,3);
  lVar15 = (long)_DAT_112768fe8;
  uVar18 = 0x4000000000000000;
  uVar2 = 0x4000000000000000;
  if (*(char *)(param_1 + lVar15) == '\0') {
    uVar2 = 0x4018000000000000;
  }
  func_0x00010c207380(uVar2,*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar17));
  lVar4 = param_3;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    if (*(char *)(param_1 + lVar15) == '\x01') {
      lVar5 = param_3;
      func_0x00010bfe5680();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar12 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar3;
      _objc_release(uVar12);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar14),param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar14),param_2,4);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
      lVar5 = param_3;
      func_0x00010bfe5680(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(lVar5);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010bf49420(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar14);
      uStack_88 = uVar12;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf49420(uVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = uVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(uVar2);
      _objc_release(uVar7);
      puVar16 = (undefined8 *)PTR__CGRectZero_110347608;
      _objc_release(uVar12);
      _objc_release(uVar6);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      lVar4 = param_3;
      func_0x00010bfe5680(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar3,param_2,lVar4);
      uVar2 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar3;
      _objc_release(uVar2);
    }
    _objc_release(lVar4);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar14),param_2,0);
    func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar14),param_2,0);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar17),param_2,*(undefined8 *)(param_1 + lVar14))
    ;
  }
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*puVar16,puVar16[1],puVar16[2],puVar16[3]);
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + lVar15);
  lVar14 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010c08fa60();
  _objc_release(lVar14);
  if (cVar1 == '\x01') {
    if (lVar4 != 0) {
      func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar13),param_2,0x17);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar8;
      goto LAB_107a77650;
    }
LAB_107a77648:
    uVar2 = 0x16;
  }
  else {
    if (lVar4 == 0) goto LAB_107a77648;
    uVar2 = 6;
  }
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar13),param_2,uVar2);
LAB_107a77650:
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar13),param_2,puVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
  lVar14 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar13),param_2,lVar14);
  _objc_release(lVar14);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar17),param_2,*(undefined8 *)(param_1 + lVar13));
  lVar13 = param_3;
  func_0x00010beee7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c08fa60();
  if (lVar14 == 0) {
    _objc_release(lVar13);
  }
  else {
    lVar14 = *(long *)(param_1 + _DAT_112768fec);
    _objc_release(lVar13);
    if (lVar14 != 0) {
      lVar13 = param_3;
      func_0x00010beee7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar11);
      *(long *)(param_1 + lVar11) = lVar13;
      _objc_release(uVar2);
      puVar8 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)(param_1 + lVar10);
      *(undefined **)(param_1 + lVar10) = puVar8;
      _objc_release(uVar2);
      func_0x00010bef9040(param_1,param_2,*(undefined8 *)(param_1 + lVar10));
      if ((*(byte *)(param_1 + lVar15) & 1) == 0) {
        puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        lVar10 = param_1;
        func_0x00010be36780(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bf60(puVar8,param_2,lVar10);
        uVar2 = *(undefined8 *)(param_1 + lVar9);
        *(undefined **)(param_1 + lVar9) = puVar8;
        _objc_release(uVar2);
        _objc_release(lVar10);
        func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
        func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar9),param_2,0);
        func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar9),param_2,0);
        func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar17),param_2,
                            *(undefined8 *)(param_1 + lVar9));
      }
    }
  }
  func_0x00010beabac0(param_1);
  func_0x00010c1cbe20(param_1);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b0c40;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x402c000000000000,0x402c000000000000,puVar3,param_2,0x88,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a77830; end: 107a7789b; -[SCTopicViewerHeaderView _iconArrowRightImage] */

void FUN_107a77830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x402c000000000000,0x402c000000000000,puVar2,param_2,0x88,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a7789c; end: 107a78107; -[SCTopicViewerHeaderView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7789c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + _DAT_112768fe8) == '\x01') {
    puStack_100 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar19 = (long)_DAT_112768ff0;
    lVar1 = *(long *)(param_1 + lVar19);
    if (lVar1 == 0) {
      lVar20 = (long)_DAT_112768ff4;
      lVar1 = *(long *)(param_1 + lVar20);
      func_0x00010c274200(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1;
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar1;
      func_0x00010bf493c0(0x4020000000000000,lVar1,param_2,lVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puStack_100,param_2,lVar18);
      _objc_release(lVar18);
      _objc_release(lVar19);
    }
    else {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf493c0(0x4020000000000000,lVar1,param_2,lVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar19);
      lStack_90 = lVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010bf493c0(0x4020000000000000,uVar3,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar19);
      uStack_88 = uVar14;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c2793a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x00010bf49520(0xc020000000000000,uVar5,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = (long)_DAT_112768ff4;
      uVar7 = *(undefined8 *)(param_1 + lVar20);
      uStack_80 = uVar15;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010bf1ff80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar7;
      func_0x00010bf493c0(0,uVar7,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puStack_100,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar16);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar15);
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(uVar14);
      _objc_release(lVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar18);
    }
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf493c0(0xc020000000000000,uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar20);
    uStack_a8 = uVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0x4020000000000000,uVar5,param_2,lVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar20);
    uStack_a0 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010bf49520(0xc020000000000000,uVar7,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_100,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar16);
    _objc_release(param_1);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(lVar19);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(lVar1);
    _objc_release(uVar3);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puStack_100);
  }
  else {
    lVar1 = (long)_DAT_112768ff0;
    puStack_100 = *(undefined **)(param_1 + lVar1);
    lStack_110 = param_1;
    if (puStack_100 == (undefined *)0x0) {
      lVar18 = (long)_DAT_112768ff4;
      puStack_100 = *(undefined **)(param_1 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puStack_118 = puStack_100;
      func_0x00010bf493a0(puStack_100,param_2,lStack_110);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar18);
      puStack_f8 = puStack_118;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar7;
      func_0x00010bf493a0(uVar7,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar18);
      uStack_f0 = uVar14;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1;
      func_0x00010c08de00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar3;
      func_0x00010bf493a0(uVar3,param_2,lVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar18);
      uStack_e8 = uVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar5;
      func_0x00010bf493a0(uVar5,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_e0 = uVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar9,param_2,puVar17);
      _objc_release(puVar17);
      _objc_release(uVar16);
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(lVar19);
      _objc_release(uVar3);
      _objc_release(uVar14);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_118 = puStack_100;
      func_0x00010bf493a0(puStack_100,param_2,lStack_110);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar1);
      puStack_d8 = puStack_118;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar7;
      func_0x00010bf493a0(uVar7,param_2,lVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar1);
      uStack_d0 = uVar14;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = (long)_DAT_112768ff4;
      uVar10 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar8;
      func_0x00010bf493c0(0xc010000000000000,uVar8,param_2,uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar20);
      uStack_c8 = uVar15;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar11;
      func_0x00010bf493c0(0xc010000000000000,uVar11,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar20);
      uStack_c0 = uVar16;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1;
      func_0x00010c08de00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar12;
      func_0x00010bf493a0(uVar12,param_2,lVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar20);
      uStack_b8 = uVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar13;
      func_0x00010bf493a0(uVar13,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_b0 = uVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar9,param_2,puVar17);
      _objc_release(puVar17);
      _objc_release(uVar5);
      _objc_release(param_1);
      _objc_release(uVar13);
      _objc_release(uVar3);
      _objc_release(lVar18);
      _objc_release(uVar12);
      _objc_release(uVar16);
      _objc_release(lVar1);
      _objc_release(uVar11);
      _objc_release(uVar15);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar14);
      _objc_release(lVar19);
    }
    _objc_release(uVar7);
    _objc_release(puStack_118);
    _objc_release(lStack_110);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((*(long *)(puStack_100 + _DAT_112769008) != 0) &&
     (lVar1 = (long)_DAT_112768fec, *(long *)(puStack_100 + lVar1) != 0)) {
    puVar9 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(puStack_100 + lVar1),param_2,puStack_100,puVar9,puStack_100)
    ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 107a78108; end: 107a7818f; -[SCTopicViewerHeaderView _triggerActionFromHeaderTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a78108(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + _DAT_112769008) != 0) &&
     (lVar2 = (long)_DAT_112768fec, *(long *)(param_1 + lVar2) != 0)) {
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + lVar2),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107a78190; end: 107a7822f; -[SCTopicViewerHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a78190(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768fec,0);
  _objc_storeStrong(param_1 + _DAT_112769004,0);
  _objc_storeStrong(param_1 + _DAT_112769008,0);
  _objc_storeStrong(param_1 + _DAT_112768ff4,0);
  _objc_storeStrong(param_1 + _DAT_112769000,0);
  _objc_storeStrong(param_1 + _DAT_112768ff8,0);
  _objc_storeStrong(param_1 + _DAT_112768ffc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768ff0,0);
  return;
}



/* Entry: 107a78230; end: 107a782a3; -[SCTopicViewerLensHeaderCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107a78230(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f98d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276900c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276900c) = puVar2;
    _objc_release(uVar3);
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a782a4; end: 107a78687; -[SCTopicViewerLensHeaderCollectionViewCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a782a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar4 = (long)_DAT_112769010;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c207380(0x4000000000000000,*(undefined8 *)(param_1 + lVar4));
  lVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar5 = (long)_DAT_112769014;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c178280();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar5 = (long)_DAT_112769018;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar5),param_2,5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126b0648;
  _objc_alloc_init();
  lVar5 = (long)_DAT_11276901c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  lVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112769020;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar5),param_2,0xd6,0);
  func_0x00010c1aab40(*(undefined8 *)(param_1 + lVar5),param_2,0xc6,0);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                      PTR_s__favoriteTapped__112538118,0x40);
  lVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010bea9520(param_1);
  func_0x00010c1cbf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a78688; end: 107a78bff; -[SCTopicViewerLensHeaderCollectionViewCell updateConstraints] */

/* WARNING: Possible PIC construction at 0x000107a78c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a78c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a78688(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf495c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar1);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar38 = (long)_DAT_11276901c;
  uVar3 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar38);
  uStack_e0 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar38);
  uStack_d8 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar38);
  uStack_d0 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar38);
  uStack_c8 = uVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar39 = (long)_DAT_112769010;
  uVar18 = *(undefined8 *)(param_1 + lVar39);
  uStack_c0 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar39);
  uStack_b8 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = (long)_DAT_112769020;
  uVar22 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar39);
  uStack_b0 = uVar23;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar40);
  uStack_a8 = uVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar39;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar40);
  uStack_a0 = uVar29;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf348e0(uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar40);
  uStack_98 = uVar32;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar40);
  uStack_90 = uVar34;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar36;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(lVar28);
  _objc_release(lVar39);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  puStack_e8 = PTR_PTR_1126f98d8;
  lStack_f0 = param_1;
  _objc_msgSendSuper2(&lStack_f0,PTR_s_updateConstraints_11267ec30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107a78c00; end: 107a78c53; -[SCTopicViewerLensHeaderCollectionViewCell _setUpKarma] */

/* WARNING: Possible PIC construction at 0x000107a78c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a78c1c) */

void FUN_107a78c00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110eaae18);
  return;
}



/* Entry: 107a78c54; end: 107a78fbf; -[SCTopicViewerLensHeaderCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a78c54(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112769024;
  uVar6 = *(ulong *)(param_1 + lVar8);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  if (param_3 == uVar6) {
    _objc_release(uVar6);
    uVar6 = param_3;
  }
  else {
    if (uVar6 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107a78f70;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = param_3;
    _objc_release(uVar2);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11276900c));
    puVar3 = PTR_PTR_1126d60a8;
    uVar7 = *(ulong *)(param_1 + lVar8);
    _objc_retain(uVar7);
    _objc_opt_class(puVar3);
    uVar1 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar6 = uVar7;
    if ((uVar1 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    if (uVar6 != 0) {
      uVar1 = uVar7;
      func_0x00010c094340(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa620(*(undefined8 *)(param_1 + _DAT_11276901c));
      _objc_release(uVar1);
      uVar1 = uVar7;
      func_0x00010c095760(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112769014));
      _objc_release(uVar1);
      uVar1 = uVar7;
      func_0x00010bfa11e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112769028);
      *(ulong *)(param_1 + _DAT_112769028) = uVar1;
      _objc_release(uVar2);
      uVar1 = uVar7;
      func_0x00010c117300();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276902c);
      *(ulong *)(param_1 + _DAT_11276902c) = uVar1;
      _objc_release(uVar2);
      func_0x00010bf5b5a0(uVar7);
      lVar9 = (long)_DAT_112769018;
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar9));
      uVar1 = uVar7;
      func_0x00010bf5b580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5b5a0(uVar7);
      func_0x00010c0e1a60(uVar7);
      lVar8 = param_1;
      func_0x00010bdd0f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar9));
      _objc_release(lVar8);
      _objc_release(uVar1);
      _objc_initWeak(auStack_68,param_1);
      func_0x00010c093b40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar7;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c0e0ea0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      uVar5 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar7);
      func_0x00010c1cbf40(param_1);
      func_0x00010c1cbe20(param_1);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(uVar6);
LAB_107a78f70:
  _objc_release(param_3);
  return;
}



/* Entry: 107a78fc0; end: 107a79007;  */

void FUN_107a78fc0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a79008; end: 107a79013; +[SCTopicViewerLensHeaderCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_107a79008(void)

{
  return;
}



/* Entry: 107a79014; end: 107a7905b; -[SCTopicViewerLensHeaderCollectionViewCell _favoriteTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a79014(undefined8 param_1)

{
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a7905c; end: 107a790c3; -[SCTopicViewerLensHeaderCollectionViewCell _profileTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7905c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276902c) != 0) {
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a790c4; end: 107a79323; -[SCTopicViewerLensHeaderCollectionViewCell _attributedCreatorNameFromCreatorName:shouldShowArrowImage:officialBadgeType:] */

void FUN_107a790c4(undefined **param_1,undefined8 param_2,undefined **param_3,int param_4,
                  long param_5)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uStack_78 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    uStack_70 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    ppuStack_68 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184fc0;
    puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_68,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if (param_5 != 0) {
      func_0x000108f470a4();
      _objc_retainAutoreleasedReturnValue();
      if (param_5 != 0) {
        func_0x00010befa120(ppuVar2,param_2,param_5);
      }
      _objc_release(param_5);
    }
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c15b1c0(param_1);
    func_0x00010c292b00(puVar5,param_2,param_1);
    if (param_4 != 0) {
      param_1 = &PTR____CFConstantStringClassReference_110eaae78;
      if (puVar5 != (undefined *)0x1) {
        param_1 = &PTR____CFConstantStringClassReference_110eaae98;
      }
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar6 != (undefined **)0x0) {
        param_1 = ppuVar6;
        func_0x00010befa120(ppuVar2,param_2,ppuVar6);
      }
      _objc_release(ppuVar6);
    }
    ppuVar6 = ppuVar2;
    func_0x00010bf529e0();
    puVar8 = puVar4;
    if (ppuVar6 == (undefined **)0x0) {
      _objc_retain(puVar4);
    }
    else {
      ppuVar6 = param_3;
      func_0x00010b8047e8(param_3);
      ppuVar7 = ppuVar2;
      func_0x00010bf51e00(ppuVar2);
      if (puVar5 == (undefined *)0x1) {
        bVar1 = ppuVar6 != (undefined **)0x2;
      }
      else {
        bVar1 = ppuVar6 == (undefined **)0x2;
      }
      param_1 = ppuVar7;
      func_0x00010bf0e480(puVar4,param_2,ppuVar7,bVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
    _objc_release(ppuVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    ppuVar6 = param_1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_107a79324;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107a7939c;
  puStack_a0 = &UNK_110842e18;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107a793b4;
  puStack_c8 = &UNK_11085b900;
  ppuStack_c0 = param_3;
  ppuStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c0be320(ppuVar6,param_2,&puStack_b8,&puStack_e0);
  return;
}



/* Entry: 107a79324; end: 107a7939b; -[SCTopicViewerLensHeaderCollectionViewCell _updateFavoritesButtonToState:] */

void FUN_107a79324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  pcStack_28 = FUN_107a7939c;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a793b4;
  puStack_48 = &UNK_11085b900;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0be320(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 107a7939c; end: 107a793b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7939c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769020),
             PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107a793b4; end: 107a79443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a793b4(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if ((param_2 & 1) == 0) {
    func_0x00010be36920(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be368e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = (long)_DAT_112769020;
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c195460(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c1a9fc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a79444; end: 107a794bf; -[SCTopicViewerLensHeaderCollectionViewCell _iconHeartFillImage] */

void FUN_107a79444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14d,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a794c0; end: 107a7953b; -[SCTopicViewerLensHeaderCollectionViewCell _iconHeartOutlineImage] */

void FUN_107a794c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14e,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a7953c; end: 107a7954b; -[SCTopicViewerLensHeaderCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7953c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112769024);
}



/* Entry: 107a7954c; end: 107a7955b; -[SCTopicViewerLensHeaderCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7954c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112769030);
}



/* Entry: 107a7955c; end: 107a7959b; -[SCTopicViewerLensHeaderCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7955c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112769030;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a7959c; end: 107a7966b; -[SCTopicViewerLensHeaderCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7959c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769030,0);
  _objc_storeStrong(param_1 + _DAT_112769024,0);
  _objc_storeStrong(param_1 + _DAT_112769034,0);
  _objc_storeStrong(param_1 + _DAT_11276902c,0);
  _objc_storeStrong(param_1 + _DAT_112769028,0);
  _objc_storeStrong(param_1 + _DAT_112769010,0);
  _objc_storeStrong(param_1 + _DAT_112769020,0);
  _objc_storeStrong(param_1 + _DAT_112769018,0);
  _objc_storeStrong(param_1 + _DAT_112769014,0);
  _objc_storeStrong(param_1 + _DAT_11276901c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276900c,0);
  return;
}



/* Entry: 107a7966c; end: 107a796ef; -[SCTopicViewerShimmerView initWithFrame:] */

undefined1 * FUN_107a7966c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f98e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a796f0; end: 107a79763; -[SCTopicViewerShimmerView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a796f0(long param_1)

{
  char cVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f98e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar2 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) &&
     (cVar1 = *(char *)(param_1 + _DAT_112769038), _objc_release(), cVar1 == '\x01')) {
    func_0x00010bdc6fe0(param_1);
  }
  return;
}



/* Entry: 107a79764; end: 107a797b7; -[SCTopicViewerShimmerView startShimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a79764(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112769038) = 1;
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc6ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addGlowAnimation_11254f598);
    return;
  }
  return;
}



/* Entry: 107a797b8; end: 107a797fb; -[SCTopicViewerShimmerView stopShimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a797b8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112769038) = 0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a797fc; end: 107a79aaf; -[SCTopicViewerShimmerView _addGlowAnimation] */

void FUN_107a797fc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x2c);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c279540(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c13afc0(puVar1,param_6,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc0fe0();
  dVar7 = (double)_CGColorGetAlpha();
  uVar8 = NEON_fminnm(dVar7 * 2.6,0x3ff0000000000000);
  puVar1 = puVar3;
  func_0x00010bf414e0(uVar8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_6,
                      &PTR____CFConstantStringClassReference_110e20958);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc0fe0();
  func_0x00010c1a1180(puVar4,param_6,puVar5);
  puVar5 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc0fe0();
  func_0x00010c216920(puVar4,param_6,puVar5);
  func_0x00010c192d40(0x3feccccccccccccd,puVar4);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_6,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar4,param_6,puVar5);
  _objc_release(puVar5);
  func_0x00010c16d4c0(puVar4,param_6,1);
  func_0x00010c1eabe0(puVar4);
  func_0x00010c1ea580(puVar4,param_6,0);
  lVar2 = param_5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = *(double *)(PTR__CGPointZero_110347540 + 8);
    dVar7 = (double)func_0x00010bf512a0(*(undefined8 *)PTR__CGPointZero_110347540,param_5,param_6,
                                        lVar2);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar6 = param_5;
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar6);
    _objc_release(lVar2);
    if (0.0 < param_3 + param_4) {
      dVar9 = (dVar7 + dVar9) / (param_3 + param_4);
      dVar9 = (double)((ulong)dVar9 ^
                      ((ulong)dVar9 ^ (ulong)(dVar9 - (double)(long)dVar9)) & 0x7ff8000000000000);
      dVar7 = dVar9 + 1.0;
      if (0.0 <= dVar9) {
        dVar7 = dVar9;
      }
      func_0x00010c214e40(dVar7 * 1.8,puVar4);
    }
  }
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a79ab0; end: 107a79aff; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell initWithFrame:] */

undefined1 * FUN_107a79ab0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f98e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a79b00; end: 107a79e03; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a79b00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar3 = (long)_DAT_11276903c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c207380(0x4000000000000000,*(undefined8 *)(param_1 + lVar3));
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar4 = (long)_DAT_112769040;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar4 = (long)_DAT_112769044;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar4 = (long)_DAT_112769048;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4044000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276904c);
  *(undefined **)(param_1 + _DAT_11276904c) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0648;
  _objc_alloc();
  func_0x00010c01cb60();
  lVar4 = (long)_DAT_112769050;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateConstraints_1126509f8);
  return;
}



/* Entry: 107a79e04; end: 107a7a597; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a79e04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar20 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = param_1;
  func_0x00010bf495c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar20);
  _objc_release(lVar31);
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar29 = (long)_DAT_11276903c;
  uVar1 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112769048;
  uVar2 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar1;
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  uStack_c0 = uVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar29);
  uStack_b8 = uVar21;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar32);
  uStack_b0 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar29;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar32);
  uStack_a8 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar32);
  uStack_a0 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar13;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar32);
  uStack_98 = uVar24;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar16;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar32);
  uStack_90 = uVar25;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar25);
  _objc_release(uVar16);
  _objc_release(uVar24);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar23);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar22);
  _objc_release(lVar9);
  _objc_release(lVar29);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar21);
  _objc_release(lVar4);
  _objc_release(lVar31);
  _objc_release(uVar3);
  _objc_release(uVar27);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar31 = (long)_DAT_112769050;
  uVar21 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar21;
  func_0x00010c071ae0();
  _objc_release(uVar21);
  if ((int)uVar27 == 0) {
    lVar31 = (long)_DAT_112769054;
    uVar21 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar21;
    func_0x00010c071ae0();
    _objc_release(uVar21);
    if ((int)uVar27 != 0) {
      uStack_120 = *(undefined8 *)(param_1 + lVar31);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_130 = uStack_120;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = *(undefined8 *)(param_1 + lVar31);
      uStack_100 = uStack_130;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_140 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uStack_138;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(param_1 + lVar31);
      uStack_f8 = uVar27;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c274200(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar22;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(param_1 + lVar31);
      uStack_f0 = uVar21;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar24;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_e8 = uVar7;
      goto LAB_107a7a498;
    }
  }
  else {
    uStack_120 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uStack_120;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = *(undefined8 *)(param_1 + lVar31);
    uStack_e0 = uStack_130;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uStack_138;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + lVar31);
    uStack_d8 = uVar27;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c274200(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + lVar31);
    uStack_d0 = uVar21;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar7;
LAB_107a7a498:
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar20);
    _objc_release(puVar19);
    _objc_release(uVar7);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar21);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar27);
    _objc_release(uStack_140);
    _objc_release(uStack_138);
    _objc_release(uStack_130);
    _objc_release(uStack_128);
    _objc_release(uStack_120);
  }
  puVar19 = puVar20;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puStack_108 = PTR_PTR_1126f98e8;
  lStack_110 = param_1;
  _objc_msgSendSuper2(&lStack_110,PTR_s_updateConstraints_11267ec30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar19);
  lVar31 = (long)_DAT_112769058;
  puVar30 = *(undefined **)(puVar20 + lVar31);
  _objc_retain(puVar19);
  _objc_retain(puVar30);
  if (puVar19 == puVar30) {
    _objc_release(puVar30);
    puVar30 = puVar19;
  }
  else {
    if (puVar30 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar26 = puVar19;
      func_0x00010c071ae0();
      _objc_release(puVar30);
      _objc_release(puVar19);
      if (((ulong)puVar26 & 1) != 0) goto LAB_107a7a704;
    }
    _objc_retain(puVar19);
    uVar27 = *(undefined8 *)(puVar20 + lVar31);
    *(undefined **)(puVar20 + lVar31) = puVar19;
    _objc_release(uVar27);
    puVar26 = PTR_PTR_1126b60b8;
    puVar30 = *(undefined **)(puVar20 + lVar31);
    _objc_retain(puVar30);
    _objc_opt_class(puVar26);
    puVar28 = puVar30;
    _objc_opt_isKindOfClass(puVar30,puVar26);
    puVar26 = puVar30;
    if (((ulong)puVar28 & 1) == 0) {
      puVar26 = (undefined *)0x0;
    }
    _objc_retain(puVar26);
    _objc_release(puVar30);
    if (puVar26 == (undefined *)0x0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar26 = puVar30;
      func_0x00010bf05ba0(puVar30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(puVar20 + _DAT_112769040));
      _objc_release(puVar26);
      puVar26 = puVar30;
      func_0x00010bf04f20(puVar30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(puVar20 + _DAT_112769044));
      _objc_release(puVar26);
      func_0x00010bed3220(puVar20);
      func_0x00010c1cbf40(puVar20);
      func_0x00010c1cbe20(puVar20);
    }
  }
  _objc_release(puVar30);
LAB_107a7a704:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar19);
  return;
}



/* Entry: 107a7a598; end: 107a7a71b; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7a598(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112769058;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  if (param_3 == uVar5) {
    _objc_release(uVar5);
    uVar5 = param_3;
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
      if ((uVar1 & 1) != 0) goto LAB_107a7a704;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b60b8;
    uVar5 = *(ulong *)(param_1 + lVar6);
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
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = uVar5;
      func_0x00010bf05ba0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112769040));
      _objc_release(uVar1);
      uVar1 = uVar5;
      func_0x00010bf04f20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112769044));
      _objc_release(uVar1);
      func_0x00010bed3220(param_1);
      func_0x00010c1cbf40(param_1);
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(uVar5);
LAB_107a7a704:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a7a71c; end: 107a7a727; +[SCTopicViewerThirdPartyAppHeaderCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_107a7a71c(void)

{
  return;
}



/* Entry: 107a7a728; end: 107a7a97b; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell _updateAppIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7a728(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf052a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112769050));
    lVar5 = (long)_DAT_112769054;
    if (*(long *)(param_1 + lVar5) == 0) {
      puVar3 = PTR_PTR_1126d6210;
      _objc_alloc();
      func_0x00010c0469e0(0x4054000000000000);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar4);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
      _objc_release(puVar3);
    }
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112769048));
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112769054));
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112769048));
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276905c);
    puVar3 = PTR_PTR_1126aebd8;
    func_0x00010c14e320(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar2);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf88c20(uVar4);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107a7a97c; end: 107a7aa9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7a97c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b60b8;
  if ((param_2 == 0) || (lVar2 == 0)) goto LAB_107a7aa7c;
  uVar5 = *(ulong *)(lVar2 + _DAT_112769058);
  _objc_retain(uVar5);
  _objc_opt_class(puVar3);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar6 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  if (uVar6 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar6);
LAB_107a7aa54:
    func_0x00010c0d9840(*(undefined8 *)(lVar2 + _DAT_11276904c));
  }
  else if (uVar1 == 0) {
    _objc_release(uVar6);
  }
  else {
    uVar4 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    if ((int)uVar4 != 0) goto LAB_107a7aa54;
  }
  _objc_release(uVar1);
LAB_107a7aa7c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a7aa9c; end: 107a7aaab; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7aa9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112769058);
}



/* Entry: 107a7aaac; end: 107a7aabb; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell onDemandResourceDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7aaac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276905c);
}



/* Entry: 107a7aabc; end: 107a7aafb; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell setOnDemandResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7aabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276905c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a7aafc; end: 107a7abab; -[SCTopicViewerThirdPartyAppHeaderCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7aafc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276905c,0);
  _objc_storeStrong(param_1 + _DAT_112769058,0);
  _objc_storeStrong(param_1 + _DAT_11276904c,0);
  _objc_storeStrong(param_1 + _DAT_112769054,0);
  _objc_storeStrong(param_1 + _DAT_112769048,0);
  _objc_storeStrong(param_1 + _DAT_11276903c,0);
  _objc_storeStrong(param_1 + _DAT_112769044,0);
  _objc_storeStrong(param_1 + _DAT_112769040,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769050,0);
  return;
}



/* Entry: 107a7abac; end: 107a7ad9b; -[SCTopicViewerView initWithDisplayName:topicStoryType:backButtonActionModel:moreButtonActionModel:defaultCTAButtonActionModel:imageProvider:ctaProvider:useUpdatedCTAButtonStyle:useNavbarStyling:topicPageNewSnapGridEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107a7abac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f98f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112769060;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112769064) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112769068) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276906c) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112769070) = param_10._2_1_;
    lVar3 = (long)_DAT_112769074;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769078;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276907c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769080;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769084;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    func_0x00010beb0340(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}


