/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bdaca8; end: 106bdaceb; -[SCCameraLensesViewControllerManager lensStateDelegateObservable] */

void FUN_106bdaca8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c096ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c096ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bdacec; end: 106bdacf3; -[SCCameraLensesViewControllerManager uiUpdateAnnouncer] */

undefined8 FUN_106bdacec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 106bdacf4; end: 106bdad0b; -[SCCameraLensesViewControllerManager cameraLensesViewControllerCarouselScopeManager] */

void FUN_106bdacf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdad0c; end: 106bdad17; -[SCCameraLensesViewControllerManager setCameraLensesViewControllerCarouselScopeManager:] */

void FUN_106bdad0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106bdad18; end: 106bdad1f; -[SCCameraLensesViewControllerManager cameraViewControllerInfoProvider] */

undefined8 FUN_106bdad18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106bdad20; end: 106bdad27; -[SCCameraLensesViewControllerManager arBarFeatureEnabled] */

undefined1 FUN_106bdad20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x150);
}



/* Entry: 106bdad28; end: 106bdb037; -[SCCameraLensesViewControllerManager .cxx_destruct] */

void FUN_106bdad28(long param_1)

{
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106bdb038; end: 106bdb0db; -[SCLensCreatorProfileScopePresenter initWithScopeExposer:scopeServices:] */

undefined1 *
FUN_106bdb038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f58f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bdb0dc; end: 106bdb15f; -[SCLensCreatorProfileScopePresenter dealloc] */

void FUN_106bdb0dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_release();
    if (lVar1 == lVar2) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  puStack_38 = PTR_PTR_1126f58f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106bdb160; end: 106bdb20b; -[SCLensCreatorProfileScopePresenter presentCreatorProfileFromViewController:lensCreatorProfileModel:source:dismissBlock:] */

void FUN_106bdb160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_6;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf232e0(uVar2,param_2,param_4,param_5,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bdb20c; end: 106bdb243; -[SCLensCreatorProfileScopePresenter isPresented] */

bool FUN_106bdb20c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106bdb244; end: 106bdb29f; -[SCLensCreatorProfileScopePresenter lensCreatorProfiledDismissedWithScope:] */

void FUN_106bdb244(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106bdb2a0; end: 106bdb2e7; -[SCLensCreatorProfileScopePresenter .cxx_destruct] */

void FUN_106bdb2a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bdb2e8; end: 106bdb35b; -[SCLensStudioServices initWithRequestHandler:] */

undefined1 * FUN_106bdb2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f58f8;
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



/* Entry: 106bdb35c; end: 106bdb363; -[SCLensStudioServices lensStudioRequestHandler] */

undefined8 FUN_106bdb35c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bdb364; end: 106bdb36f; -[SCLensStudioServices .cxx_destruct] */

void FUN_106bdb364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bdb370; end: 106bdb3db; -[SCFeatureLensCloseButtonDelegateHandler initWithLensesUIControllerProvider:] */

undefined1 * FUN_106bdb370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5900;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bdb3dc; end: 106bdb447; -[SCFeatureLensCloseButtonDelegateHandler lensCloseButton:setMainCloseButtonHidden:] */

void FUN_106bdb3dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c098880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d500();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bdb448; end: 106bdb4b3; -[SCFeatureLensCloseButtonDelegateHandler handleLensCloseButtonTap:] */

undefined8 FUN_106bdb448(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c098880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0860();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return 1;
}



/* Entry: 106bdb4b4; end: 106bdb4bb; -[SCFeatureLensCloseButtonDelegateHandler .cxx_destruct] */

void FUN_106bdb4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106bdb4bc; end: 106bdb4c7; -[SCFeatureLensFeedDelegateHandler lensFeedFeatureDidEnterBackground:] */

void FUN_106bdb4bc(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 2;
  return;
}



/* Entry: 106bdb4c8; end: 106bdb583; -[SCFeatureLensFeedDelegateHandler lensFeedFeatureDidPresentLensFeed:] */

void FUN_106bdb4c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c255c00();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c255e20();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c224240();
  _objc_release(lVar1);
  func_0x00010bed0660(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126d1310;
  func_0x00010c29ca00(PTR_PTR_1126d1310);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x00010c1cbd20(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 106bdb584; end: 106bdb64f; -[SCFeatureLensFeedDelegateHandler lensFeedFeatureBeginDismissLensFeed:] */

void FUN_106bdb584(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e3a0(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c24e900();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c224240();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 106bdb650; end: 106bdb71f; -[SCFeatureLensFeedDelegateHandler lensFeedFeatureDidDismissLensFeed:] */

void FUN_106bdb650(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d1310;
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c29c980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_3;
  func_0x00010c10f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c247520();
  _objc_release(lVar2);
  if ((lVar3 != 10) && (*(long *)(param_1 + 0x38) != 0)) {
    func_0x00010be9d9c0(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar4);
  }
  func_0x00010c1cbd20(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 106bdb720; end: 106bdb787; -[SCFeatureLensFeedDelegateHandler lensFeedFeatureDidToggleCamera:] */

void FUN_106bdb720(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2726a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272720();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bdb788; end: 106bdb847; -[SCFeatureLensFeedDelegateHandler presentingViewControllerForLensFeedFeature:] */

void FUN_106bdb788(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c8208;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf92b60();
  _objc_release(lVar1);
  uVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (((ulong)puVar2 & 1) == 0) {
    uVar4 = uVar3;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aefc0;
    _objc_opt_class(PTR_PTR_1126aefc0);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(uVar4);
      uVar3 = uVar4;
    }
    else {
      uVar3 = param_1 + 0x48;
      _objc_loadWeakRetained(uVar3);
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106bdb848; end: 106bdb877; -[SCFeatureLensFeedDelegateHandler lensFeedFeature:didRequestToUpdateLastActiveLens:] */

void FUN_106bdb848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bdb878; end: 106bdb87b; -[SCFeatureLensFeedDelegateHandler navigationDelegate] */

void FUN_106bdb878(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd9690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cameraViewControllerNavigationD_112553f40);
  return;
}



/* Entry: 106bdb87c; end: 106bdb947; -[SCFeatureLensFeedDelegateHandler _cameraViewControllerNavigationDelegate] */

void FUN_106bdb87c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_class();
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c080080();
  _objc_release(uVar3);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar5 = param_1;
  if ((uVar4 & 1) == 0) {
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  puVar2 = PTR_DAT_1126a5618;
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010010fab4(lVar5,puVar2);
  lVar1 = lVar5;
  if ((int)lVar6 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bdb948; end: 106bdba73; -[SCFeatureLensFeedDelegateHandler _selectLens:] */

void FUN_106bdb948(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010be721a0(param_1);
  uVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126c8d50;
  _objc_opt_class(PTR_PTR_1126c8d50);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c06dfa0();
  if (((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c06dfe0(), (int)uVar2 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e3a0(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 106bdba74; end: 106bdbb6b;  */

void FUN_106bdba74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b1bf8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010bef0200(uVar4);
  func_0x00010bf32440(puVar2);
  puVar2 = PTR_PTR_1126b00f8;
  uVar1 = uVar4;
  func_0x00010c094540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158d00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0240;
  _objc_alloc(PTR_PTR_1126b0240);
  func_0x00010bff0c60();
  _objc_release(uVar4);
  func_0x00010bef0080(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106bdbb6c; end: 106bdbb7f; -[SCFeatureLensFeedDelegateHandler _turnLensesOff] */

void FUN_106bdbb6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be721b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performOnLensCarouselManager__11257a208,
             &PTR___NSConcreteGlobalBlock_110966c70);
  return;
}



/* Entry: 106bdbb80; end: 106bdbc87; -[SCFeatureLensFeedDelegateHandler _performOnLensCarouselManager:] */

void FUN_106bdbb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(param_1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106bdbc88; end: 106bdbd2f;  */

void FUN_106bdbc88(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_3 == 0) && (lVar2 != 0)) {
      lVar3 = *(long *)(param_1 + 0x20);
      lVar2 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bdbd30; end: 106bdbd47; -[SCFeatureLensFeedDelegateHandler cameraViewController] */

void FUN_106bdbd30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdbd48; end: 106bdbda3; -[SCFeatureLensFeedDelegateHandler .cxx_destruct] */

void FUN_106bdbd48(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106bdbda4; end: 106bdbdaf; -[SCLensCarouselPrivateServices .cxx_destruct] */

void FUN_106bdbda4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bdbdb0; end: 106bdbdbb; -[SCLensCarouselRestorationServices .cxx_destruct] */

void FUN_106bdbdb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bdbdbc; end: 106bdbe07; +[SCLensCarouselRestorationEvent didFailRestoreState] */

void FUN_106bdbdbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1318;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bdbe08; end: 106bdbe53; +[SCLensCarouselRestorationEvent didResetState] */

void FUN_106bdbe08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1318;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bdbe54; end: 106bdbe9f; +[SCLensCarouselRestorationEvent didRestoreState] */

void FUN_106bdbe54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1318;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bdbea0; end: 106bdbee7; +[SCLensCarouselRestorationEvent willRestoreState] */

void FUN_106bdbea0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1318;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bdbee8; end: 106bdbf0b; -[SCLensCarouselRestorationEvent copyWithZone:] */

undefined8 FUN_106bdbee8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bdbf0c; end: 106bdbf13; -[SCLensCarouselRestorationEvent hash] */

undefined8 FUN_106bdbf0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bdbf14; end: 106bdbf57; -[SCLensCarouselRestorationEvent internalInit] */

void FUN_106bdbf14(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5920;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdbf58; end: 106bdbfdf; -[SCLensCarouselRestorationEvent isEqual:] */

bool FUN_106bdbf58(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106bdbfe0; end: 106bdc0b3; -[SCLensCarouselRestorationEvent matchWillRestoreState:didRestoreState:didFailRestoreState:didResetState:] */

void FUN_106bdbfe0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_106bdc06c;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_106bdc06c;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_106bdc06c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bdc0b4; end: 106bdc0bf; -[SCCameraUIScopedLensOperaServices .cxx_destruct] */

void FUN_106bdc0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bdc0c0; end: 106bdc133; -[SCOffCameraLensOperaServices initWithLensOperaControllerProvider:] */

undefined1 * FUN_106bdc0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5930;
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



/* Entry: 106bdc134; end: 106bdc13b; -[SCOffCameraLensOperaServices lensOperaControllerProvider] */

undefined8 FUN_106bdc134(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bdc13c; end: 106bdc147; -[SCOffCameraLensOperaServices .cxx_destruct] */

void FUN_106bdc13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bdc148; end: 106bdc1bb; -[SCGrapheneLensPlusUpgradeEligibilityMetric2 init] */

undefined1 * FUN_106bdc148(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5938;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106bdc1bc; end: 106bdc32f;  */

char * FUN_106bdc1bc(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110966cc0);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_e0;
  _objc_retain(puVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_d8 = PTR_PTR_1126f5940;
  pcStack_e0 = pcVar1;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    _objc_retain(puVar4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 8);
    *(undefined1 **)((long)ppcVar2 + 8) = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x10);
    *(undefined1 **)((long)ppcVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x28);
    *(undefined8 *)((long)ppcVar2 + 0x28) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x18);
    *(undefined8 *)((long)ppcVar2 + 0x18) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x38);
    *(undefined8 *)((long)ppcVar2 + 0x38) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x20);
    *(undefined8 *)((long)ppcVar2 + 0x20) = param_8;
    _objc_release(uVar3);
    *(char *)((long)ppcVar2 + 0x40) = '\0';
    *(char *)((long)ppcVar2 + 0x41) = '\0';
    *(char *)((long)ppcVar2 + 0x42) = '\0';
    *(char *)((long)ppcVar2 + 0x43) = '\0';
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  return (char *)ppcVar2;
}



/* Entry: 106bdc330; end: 106bdc487; -[SCManagerBasedUserTaggingFriendsProvider initWithUserId:snapchattersDataFetcher:snapchattersSynchronousDataFetcher:bitmojiSelfieFetcher:imageFetchingService:storyPrivacySettingManager:] */

undefined1 *
FUN_106bdc330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f5940;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bdc488; end: 106bdc563; -[SCManagerBasedUserTaggingFriendsProvider blockedStorySnapchatters] */

void FUN_106bdc488(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf005c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bdc564; end: 106bdc56b; -[SCManagerBasedUserTaggingFriendsProvider bitmojiSelfieFetcher] */

void FUN_106bdc564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 106bdc56c; end: 106bdc593; -[SCManagerBasedUserTaggingFriendsProvider imageFetchingService] */

void FUN_106bdc56c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bdc594; end: 106bdc5d7; -[SCManagerBasedUserTaggingFriendsProvider isStoryPrivacyCustom] */

bool FUN_106bdc594(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25aac0();
  _objc_release(lVar1);
  return lVar2 == 2;
}



/* Entry: 106bdc5d8; end: 106bdc68b; -[SCManagerBasedUserTaggingFriendsProvider snapchattersListForUsertaggingWithQueryName:filterBlock:] */

void FUN_106bdc5d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bde6f80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010be164e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becffc0(param_1,param_2,uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdc68c; end: 106bdc693; -[SCManagerBasedUserTaggingFriendsProvider snapchattersListForUsertaggingWithQueryName:] */

void FUN_106bdc68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_snapchattersListForUsertaggingWi_11266ed48,param_3,0);
  return;
}



/* Entry: 106bdc694; end: 106bdc6ff; -[SCManagerBasedUserTaggingFriendsProvider snapchatterForUsername:] */

void FUN_106bdc694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0ee940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bdc700; end: 106bdc70b; -[SCManagerBasedUserTaggingFriendsProvider userTagsFromText:excludeCarouselTaggedItems:] */

void FUN_106bdc700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9ef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d1320,PTR_s_extractUserTagsFromText_excludeC_1125c5580);
  return;
}



/* Entry: 106bdc70c; end: 106bdc7ff; -[SCManagerBasedUserTaggingFriendsProvider allOutgoingSnapchatters] */

void FUN_106bdc70c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar4);
  _os_unfair_lock_unlock(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf005c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bebe3c0(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _os_unfair_lock_lock(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) {
      _objc_retain(lVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar2;
      _objc_release(uVar3);
      lVar5 = *(long *)(param_1 + 0x30);
    }
    _objc_retain(lVar5);
    _os_unfair_lock_unlock(param_1 + 0x40);
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar4);
    lVar5 = lVar4;
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106bdc800; end: 106bdc997; -[SCManagerBasedUserTaggingFriendsProvider allOutgoingSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_106bdc800(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x40);
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x106bdc9b4;
      puStack_80 = &UNK_110849530;
      _objc_retain(param_4);
      lStack_78 = param_4;
      func_0x00010007380c(param_3,&puStack_98);
      lVar2 = lStack_78;
    }
    else {
      _objc_retain(param_4);
      func_0x00010c0eea20(lVar1);
      lVar2 = param_4;
    }
    _objc_release(lVar2);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106bdc998;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(lVar3);
    lStack_50 = lVar3;
    func_0x00010007380c(param_3,&puStack_70);
    _objc_release(lStack_50);
    lVar1 = lStack_48;
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bdc998; end: 106bdc9cb;  */

void FUN_106bdc998(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106bdc9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 106bdc9cc; end: 106bdca9b;  */

void FUN_106bdc9cc(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bebe3c0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(*(long *)(param_1 + 0x20) + 0x40);
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(*(long *)(param_1 + 0x20) + 0x40);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,uVar1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bdca9c; end: 106bdcc77; -[SCManagerBasedUserTaggingFriendsProvider snapchattersForUsertaggingWithQueryName:completionQueue:completionHandler:] */

void FUN_106bdca9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x40);
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106bdccd8;
      puStack_90 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_88 = param_5;
      func_0x00010007380c(param_4,&puStack_a8);
      lVar2 = lStack_88;
    }
    else {
      _objc_retain(param_5);
      _objc_retain(param_3);
      func_0x00010c0eea20(lVar1);
      _objc_release(param_3);
      lVar2 = param_5;
    }
    _objc_release(lVar2);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106bdcc78;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(param_5);
    lStack_60 = param_1;
    lStack_48 = param_5;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(lVar3);
    lStack_50 = lVar3;
    func_0x00010007380c(param_4,&puStack_80);
    _objc_release(lStack_50);
    _objc_release(uStack_58);
    lVar1 = lStack_48;
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bdcc78; end: 106bdccd7;  */

void FUN_106bdcc78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bebd7e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106bdccd8; end: 106bdccef;  */

void FUN_106bdccd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106bdcce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 106bdccf0; end: 106bdcde7;  */

void FUN_106bdccf0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bebe3c0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(*(long *)(param_1 + 0x20) + 0x40);
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(*(long *)(param_1 + 0x20) + 0x40);
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bebd7e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bdcde8; end: 106bdcdeb; -[SCManagerBasedUserTaggingFriendsProvider defaultSnapchatterList] */

void FUN_106bdcde8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde6f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constructSortedFriendsList_112557580);
  return;
}



/* Entry: 106bdcdec; end: 106bdce3b; -[SCManagerBasedUserTaggingFriendsProvider _constructSortedFriendsList] */

void FUN_106bdcdec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf005c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde6fa0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdce3c; end: 106bdd033; -[SCManagerBasedUserTaggingFriendsProvider _constructSortedFriendsListFromSnapchatters:] */

void FUN_106bdce3c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd4020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be21f40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1ce80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  uVar6 = uVar1;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if ((undefined *)0x7 < puVar4) break;
      uVar5 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,uVar5);
      _objc_release(uVar5);
      uVar6 = uVar6 + 1;
      uVar5 = uVar1;
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  uVar6 = uVar2;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if ((undefined *)0x7 < puVar4) break;
      uVar5 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,uVar5);
      _objc_release(uVar5);
      uVar6 = uVar6 + 1;
      uVar5 = uVar2;
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  uVar6 = param_1;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if ((undefined *)0x7 < puVar4) break;
      uVar5 = param_1;
      func_0x00010c0dfd40(param_1,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,uVar5);
      _objc_release(uVar5);
      uVar6 = uVar6 + 1;
      uVar5 = param_1;
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  puVar4 = puVar3;
  func_0x00010bf09f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bdd034; end: 106bdd043; -[SCManagerBasedUserTaggingFriendsProvider _sortedRecentSnapchatters:] */

void FUN_106bdd034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sortedArrayUsingComparator__11266f550,
             &PTR___NSConcreteGlobalBlock_110966d20);
  return;
}



/* Entry: 106bdd044; end: 106bdd153;  */

ulong FUN_106bdd044(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010901dae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010901dae0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 == 0)) {
    uVar5 = (ulong)(uVar2 != 0);
    if (uVar1 != 0) {
      uVar5 = 0xffffffffffffffff;
      goto LAB_106bdd118;
    }
  }
  else {
    uVar5 = uVar2;
    func_0x00010bf433a0();
  }
  if (uVar5 == 0) {
    uVar3 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010901d7c4(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf32ee0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
LAB_106bdd118:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106bdd154; end: 106bdd1c7; -[SCManagerBasedUserTaggingFriendsProvider _filteredAndSortedSnapchattersForQuery:] */

void FUN_106bdd154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf005c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be16500(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdd1c8; end: 106bdd277; -[SCManagerBasedUserTaggingFriendsProvider _filteredAndSortedSnapchattersForQuery:fromSnapchatters:] */

void FUN_106bdd1c8(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010bde6fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_4;
    FUN_106c8c158(param_4,ppuVar1,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdd278; end: 106bdd353; -[SCManagerBasedUserTaggingFriendsProvider _snapchattersListForUsertaggingWithQueryName:fromSnapchatters:filterBlock:] */

void FUN_106bdd278(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bde6fa0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010be16500(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010becffc0(param_1,param_2,uVar2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    param_4 = uVar2;
  }
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdd354; end: 106bdd42b; -[SCManagerBasedUserTaggingFriendsProvider _trimAndApplyFilterForSnapchatters:queryName:filterBlock:] */

void FUN_106bdd354(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar3 = param_3;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    uVar3 = 0;
    do {
      uVar4 = param_3;
      func_0x00010c0dfd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      if ((param_5 == 0) ||
         (lVar5 = param_5, (**(code **)(param_5 + 0x10))(param_5,uVar4), (int)lVar5 != 0)) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x00010bf529e0();
    } while ((uVar3 + 1 < uVar4) && (bVar1 = uVar3 < 0x4a, uVar3 = uVar3 + 1, bVar1));
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bdd42c; end: 106bdd47b; -[SCManagerBasedUserTaggingFriendsProvider _bestFriendsObjects] */

void FUN_106bdd42c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf005c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd4020(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdd47c; end: 106bdd49b; -[SCManagerBasedUserTaggingFriendsProvider _bestFriendsObjectsFromSnapchatters:] */

void FUN_106bdd47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110966d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdd49c; end: 106bdd4a3;  */

undefined1 FUN_106bdd49c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bdea0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106bdd4a4; end: 106bdd4f3; -[SCManagerBasedUserTaggingFriendsProvider _getAllMutualFriends] */

void FUN_106bdd4a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf005c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1ce80(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdd4f4; end: 106bdd513; -[SCManagerBasedUserTaggingFriendsProvider _getAllMutualFriendsFromSnapchatters:] */

void FUN_106bdd4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110966d60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdd514; end: 106bdd51b;  */

bool FUN_106bdd514(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c439a8(param_2);
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3e1d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  return lVar2 != 0;
}



/* Entry: 106bdd51c; end: 106bdd56b; -[SCManagerBasedUserTaggingFriendsProvider _getRecents] */

void FUN_106bdd51c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf005c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be21f40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bdd56c; end: 106bdd5bf; -[SCManagerBasedUserTaggingFriendsProvider _getRecentsFromSnapchatters:] */

void FUN_106bdd56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106bdd5c0;
  puStack_20 = &UNK_11085a548;
  uStack_18 = param_1;
  func_0x0001006372a4(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdd5c0; end: 106bdd643;  */

uint FUN_106bdd5c0(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010901ca64();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3);
    uVar2 = (uint)uVar3 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106bdd644; end: 106bdd6af; -[SCManagerBasedUserTaggingFriendsProvider .cxx_destruct] */

void FUN_106bdd644(long param_1)

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



/* Entry: 106bdd6b0; end: 106bdd8ab; -[SCPreviewScopedUserTaggingFriendsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdd6b0(long param_1,undefined8 param_2)

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
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126d1328;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275a5b8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11275a5bc;
  lVar5 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar7 = lVar15;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11275a5c0;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11275a5c4;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275a5c8;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bb40(puVar1,param_2,lVar4,lVar6,lVar7,lVar9,lVar11,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar13 = PTR_PTR_1126d1330;
  _objc_alloc(PTR_PTR_1126d1330);
  func_0x00010c016660();
  puVar14 = PTR_PTR_1126d1338;
  _objc_alloc(PTR_PTR_1126d1338);
  func_0x00010c05f020();
  _objc_release(puVar13);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106bdd8ac; end: 106bdd913; -[SCPreviewScopedUserTaggingFriendsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdd8ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a5c8);
  _objc_destroyWeak(param_1 + _DAT_11275a5c0);
  _objc_destroyWeak(param_1 + _DAT_11275a5bc);
  _objc_destroyWeak(param_1 + _DAT_11275a5c4);
  _objc_destroyWeak(param_1 + _DAT_11275a5b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a5cc);
  return;
}



/* Entry: 106bdd914; end: 106bddb0f; -[SCSnapEditorPluginScopedUserTaggingFriendsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdd914(long param_1,undefined8 param_2)

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
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126d1328;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275a5d0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11275a5d4;
  lVar5 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar7 = lVar15;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11275a5d8;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11275a5dc;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275a5e0;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bb40(puVar1,param_2,lVar4,lVar6,lVar7,lVar9,lVar11,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar13 = PTR_PTR_1126d1330;
  _objc_alloc(PTR_PTR_1126d1330);
  func_0x00010c016660();
  puVar14 = PTR_PTR_1126d1340;
  _objc_alloc(PTR_PTR_1126d1340);
  func_0x00010c05f020();
  _objc_release(puVar13);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106bddb10; end: 106bddb77; -[SCSnapEditorPluginScopedUserTaggingFriendsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bddb10(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a5e0);
  _objc_destroyWeak(param_1 + _DAT_11275a5d8);
  _objc_destroyWeak(param_1 + _DAT_11275a5d4);
  _objc_destroyWeak(param_1 + _DAT_11275a5dc);
  _objc_destroyWeak(param_1 + _DAT_11275a5d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a5e4);
  return;
}



/* Entry: 106bddb78; end: 106bddbd3; +[SCSnapEditorBlockActionGuard priority:onAction:] */

void FUN_106bddb78(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126d1348;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c03a160();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bddbd4; end: 106bddc5b; -[SCSnapEditorBlockActionGuard initWithPriority:onAction:] */

undefined1 *
FUN_106bddbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5948;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106bddc5c; end: 106bddc6b; -[SCSnapEditorBlockActionGuard onActionWithCompletion:] */

void FUN_106bddc5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106bddc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 106bddc6c; end: 106bddc73; -[SCSnapEditorBlockActionGuard priority] */

undefined8 FUN_106bddc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106bddc74; end: 106bddc7f; -[SCSnapEditorBlockActionGuard .cxx_destruct] */

void FUN_106bddc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bddc80; end: 106bddcdb; +[SCSnapEditorBlockSendActionGuard priority:onAction:] */

void FUN_106bddc80(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126afee8;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c03a160();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bddcdc; end: 106bddd63; -[SCSnapEditorBlockSendActionGuard initWithPriority:onAction:] */

undefined1 *
FUN_106bddcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5950;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}


