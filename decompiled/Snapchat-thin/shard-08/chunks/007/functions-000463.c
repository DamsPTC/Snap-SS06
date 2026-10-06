/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064ae96c; end: 1064ae9bf; -[SCContextOperaPlaylistPlugin contextWillPresentSwipeUpContent:] */

void FUN_1064ae96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4eca0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ae9c0; end: 1064ae9f3; -[SCContextOperaPlaylistPlugin contextWillDismissSwipeUpContent:] */

void FUN_1064ae9c0(long param_1)

{
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4ec80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ae9f4; end: 1064aea6f; -[SCContextOperaPlaylistPlugin contextBeganMediaPresentation:] */

void FUN_1064ae9f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,1,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064aea70; end: 1064aeab3; -[SCContextOperaPlaylistPlugin contextFinishedMediaPresentation:] */

void FUN_1064aea70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064aeab4; end: 1064aeaf3; -[SCContextOperaPlaylistPlugin operaNavigationForContextPresenter:] */

void FUN_1064aeab4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064aeaf4; end: 1064aeaf7; -[SCContextOperaPlaylistPlugin contextDidDismissSwipeUpContent:] */

void FUN_1064aeaf4(void)

{
  return;
}



/* Entry: 1064aeaf8; end: 1064aeafb; -[SCContextOperaPlaylistPlugin contextDidPresentSwipeUpContent:] */

void FUN_1064aeaf8(void)

{
  return;
}



/* Entry: 1064aeafc; end: 1064aeb3f; -[SCContextOperaPlaylistPlugin contextPresenterShouldDismissOpera:] */

void FUN_1064aeafc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064aeb40; end: 1064aeb43; -[SCContextOperaPlaylistPlugin contextDidFinishPresentingAccessoryView:] */

void FUN_1064aeb40(void)

{
  return;
}



/* Entry: 1064aeb44; end: 1064aeb47; -[SCContextOperaPlaylistPlugin contextDidPresentAccessoryView:] */

void FUN_1064aeb44(void)

{
  return;
}



/* Entry: 1064aeb48; end: 1064aeb4f; -[SCContextOperaPlaylistPlugin contextPresenterShouldSwipeUp:] */

undefined8 FUN_1064aeb48(void)

{
  return 1;
}



/* Entry: 1064aeb50; end: 1064aeb67; -[SCContextOperaPlaylistPlugin delegate] */

void FUN_1064aeb50(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064aeb68; end: 1064aeb73; -[SCContextOperaPlaylistPlugin setDelegate:] */

void FUN_1064aeb68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1064aeb74; end: 1064aebff; -[SCContextOperaPlaylistPlugin .cxx_destruct] */

void FUN_1064aeb74(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064aec00; end: 1064aecc7; -[SCContextV2OverlayProvider initWithContextDelegate:circumstanceEngine:] */

undefined1 *
FUN_1064aec00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1640;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    _objc_alloc();
    func_0x00010c020e80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064aecc8; end: 1064aee73; -[SCContextV2OverlayProvider _createPresenterWithLayerViewController:presenterProvider:operaNavigationStyle:contextDrivenSwipePresentationEnabled:] */

void FUN_1064aecc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf99b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0f18a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf55700(lVar5,param_2,uVar4,param_3,param_5,uVar2,uVar3,uVar6,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar5);
    func_0x00010c18b5e0(lVar1,param_2,param_1);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,lVar1,param_3);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064aee74; end: 1064aee7b; -[SCContextV2OverlayProvider shouldAnimateTransition:] */

undefined8 FUN_1064aee74(void)

{
  return 1;
}



/* Entry: 1064aee7c; end: 1064aeeaf; -[SCContextV2OverlayProvider contextLayerWillFullyAppear:] */

void FUN_1064aee7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064aeeb0; end: 1064aeeb3; -[SCContextV2OverlayProvider contextMenuControllerWithLayerViewController:presenterProvider:operaNavigationStyle:contextDrivenSwipePresentationEnabled:] */

void FUN_1064aeeb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf1e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createPresenterWithLayerViewCon_11255a120);
  return;
}



/* Entry: 1064aeeb4; end: 1064aef4f; -[SCContextV2OverlayProvider contextDidPresentSwipeUpContent:] */

void FUN_1064aeeb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010be48b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c109c40(param_1,param_2,1,1);
    func_0x00010c1d8a80(param_1,param_2,0);
    lVar1 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9a88;
    func_0x00010bf4cf80(PTR_PTR_1126c9a88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064aef50; end: 1064aeff3; -[SCContextV2OverlayProvider contextDidDismissSwipeUpContent:] */

void FUN_1064aef50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010be48b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c109c40(param_1,param_2,0,0);
    lVar1 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9a88;
    func_0x00010bf4c380(PTR_PTR_1126c9a88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    func_0x00010c1d8a80(param_1,param_2,1);
    func_0x00010c13d600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064aeff4; end: 1064af03b; -[SCContextV2OverlayProvider contextBeganMediaPresentation:] */

void FUN_1064aeff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4e340();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064af03c; end: 1064af083; -[SCContextV2OverlayProvider contextFinishedMediaPresentation:] */

void FUN_1064af03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4e800();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064af084; end: 1064af0cb; -[SCContextV2OverlayProvider contextWillDismissSwipeUpContent:] */

void FUN_1064af084(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4f560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064af0cc; end: 1064af113; -[SCContextV2OverlayProvider contextWillPresentSwipeUpContent:] */

void FUN_1064af0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4f5a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064af114; end: 1064af177; -[SCContextV2OverlayProvider operaNavigationForContextPresenter:] */

void FUN_1064af114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0ea820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064af178; end: 1064af1bf; -[SCContextV2OverlayProvider contextPresenterShouldDismissOpera:] */

void FUN_1064af178(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4eea0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064af1c0; end: 1064af2e3; -[SCContextV2OverlayProvider contextDidPresentAccessoryView:] */

void FUN_1064af1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf4e580();
    _objc_release(lVar3);
  }
  func_0x00010be48b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c161300(param_1);
    func_0x00010c135f00(param_1);
    lVar3 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2638;
    func_0x00010c0f5e80(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(lVar3);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064af2e4; end: 1064af3d7; -[SCContextV2OverlayProvider contextDidFinishPresentingAccessoryView:] */

void FUN_1064af2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4e520();
  _objc_release(lVar1);
  func_0x00010be48b40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_1 != 0) {
    func_0x00010c161300(param_1,param_2,0);
    func_0x00010c135f00(param_1,param_2,0);
    lVar1 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c13d5c0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(lVar1,param_2,puVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064af3d8; end: 1064af477; -[SCContextV2OverlayProvider contextPresenterShouldSwipeUp:] */

long FUN_1064af3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010bf4eec0();
  _objc_release(lVar2);
  if ((int)lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010be48b40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar2 = 1;
    }
    else {
      lVar2 = param_1;
      func_0x00010c0806a0(param_1);
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1064af478; end: 1064af5c3; -[SCContextV2OverlayProvider _layerViewControllerForPresenter:] */

void FUN_1064af478(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        lVar2 = *(long *)(param_1 + 0x10);
        func_0x00010c0dff20(lVar2,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == param_3) {
          _objc_retain(uVar4);
          goto LAB_1064af574;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
LAB_1064af574:
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_3 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064af5c4; end: 1064af5db; -[SCContextV2OverlayProvider contextDelegate] */

void FUN_1064af5c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064af5dc; end: 1064af5e7; -[SCContextV2OverlayProvider setContextDelegate:] */

void FUN_1064af5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1064af5e8; end: 1064af61f; -[SCContextV2OverlayProvider .cxx_destruct] */

void FUN_1064af5e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064af620; end: 1064af65b; -[SCContextOperaEventSwipeUpActionHandler init] */

void FUN_1064af620(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f1648;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1064af65c; end: 1064af663; -[SCContextOperaEventSwipeUpActionHandler swipeUpAction] */

undefined8 FUN_1064af65c(void)

{
  return 0;
}



/* Entry: 1064af664; end: 1064af66b; -[SCContextOperaEventSwipeUpActionHandler willSwipeToContextCards] */

undefined8 FUN_1064af664(void)

{
  return 0;
}



/* Entry: 1064af66c; end: 1064af713; -[SCContextOperaEventSwipeUpActionHandler setSwipeUpEventName:parameters:] */

void FUN_1064af66c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x18);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064af714; end: 1064af963; -[SCContextOperaEventSwipeUpActionHandler handleSwipeUpActionWithBaseViewController:container:actionParams:actionType:isAd:] */

bool FUN_1064af714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    uVar5 = 9;
    if (param_6 != 1) {
      uVar5 = 7;
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126c9a28;
    func_0x00010c29d280(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126b5cb8;
    func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126b5cb8;
    func_0x00010c06b7e0(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR_PTR_1126b5cb8;
    func_0x00010bfbaa20(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,PTR____kCFBooleanFalse_11034ab60,puVar1);
    _objc_release(puVar1);
    uVar5 = param_5;
    func_0x00010c0ea4c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = param_5;
    func_0x00010c0ea8e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar5,param_2,uVar4,uVar3,*(undefined8 *)(param_1 + 0x10));
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar6 != 0;
}



/* Entry: 1064af964; end: 1064af993; -[SCContextOperaEventSwipeUpActionHandler .cxx_destruct] */

void FUN_1064af964(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064af994; end: 1064afa87; -[SCContextSwipeUpActionHandler initWithV3InteropProvider:actionHandlerDelegate:actionHandlerLazy:appStartExperimentReader:] */

undefined1 *
FUN_1064af994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1650;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064afa88; end: 1064afaff; -[SCContextSwipeUpActionHandler setSwipeUpAction:] */

void FUN_1064afa88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064afb00; end: 1064afb47; -[SCContextSwipeUpActionHandler swipeUpAction] */

void FUN_1064afb00(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064afb48; end: 1064afb67; -[SCContextSwipeUpActionHandler willSwipeToContextCards] */

bool FUN_1064afb48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010beeed20(uVar1);
  return (int)uVar1 == 5;
}



/* Entry: 1064afb68; end: 1064afcbf; -[SCContextSwipeUpActionHandler handleSwipeUpActionWithBaseViewController:container:actionParams:actionType:isAd:] */

bool FUN_1064afb68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b6038;
  if (*(long *)(param_1 + 0x30) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_5);
    _objc_alloc(puVar2);
    uVar4 = param_5;
    func_0x00010bf4eae0(param_5);
    uVar5 = param_5;
    func_0x00010bf4eb00(param_5);
    _objc_release(param_5);
    func_0x00010bff0a60(puVar2,param_2,param_6,4,uVar4,uVar5,0xffffffffffffffff);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf544e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      _objc_release(uVar5);
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,lVar3);
      _objc_release(lVar3);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    func_0x00010bfd0040(lVar3,param_2,*(undefined8 *)(param_1 + 0x30),puVar2,param_3,param_4,
                        &PTR___NSConcreteGlobalBlock_110924f80);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1064afcc0; end: 1064afcc3;  */

void FUN_1064afcc0(void)

{
  return;
}



/* Entry: 1064afcc4; end: 1064afd1f; -[SCContextSwipeUpActionHandler .cxx_destruct] */

void FUN_1064afcc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064afd20; end: 1064afdb3; -[SCContextAppearanceStateMachine initWithDelegate:] */

undefined8 * FUN_1064afd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  puStack_30 = PTR_PTR_1126f1658;
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c18b5e0(puVar1);
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_28);
  return puVar1;
}



/* Entry: 1064afdb4; end: 1064afe6f; -[SCContextAppearanceStateMachine initWithInitialState:delegate:] */

undefined8 **
FUN_1064afdb4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined1 *puVar4;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_4);
  puVar1 = PTR_s_init_1125d9248;
  puStack_40 = PTR_PTR_1126f1658;
  puVar2 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puStack_50 = PTR_PTR_1126f1658;
  ppuVar3 = &puStack_58;
  puStack_58 = puVar2;
  _objc_msgSendSuper2(ppuVar3,puVar1);
  if (ppuVar3 != (undefined8 **)0x0) {
    puVar4 = auStack_38;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c18b5e0(ppuVar3);
    _objc_release(puVar4);
    ppuVar3[2] = param_3;
  }
  _objc_destroyWeak(auStack_38);
  return ppuVar3;
}



/* Entry: 1064afe70; end: 1064aff0f; -[SCContextAppearanceStateMachine setState:] */

void FUN_1064afe70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (param_3 != lVar2) {
    lVar1 = lVar2;
    if (param_3 < 2) {
      if (param_3 == 0) {
        lVar1 = param_1;
        func_0x00010bf74a60(param_1,param_2,lVar2);
      }
      else if (param_3 == 1) {
        lVar1 = param_1;
        func_0x00010c2a5ea0(param_1,param_2,lVar2);
      }
    }
    else if (param_3 == 2) {
      lVar1 = param_1;
      func_0x00010bf72480(param_1,param_2,lVar2);
    }
    else if (param_3 == 3) {
      lVar1 = param_1;
      func_0x00010c2a5880(param_1,param_2,lVar2);
    }
    *(long *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bf77ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_didMoveToState_fromState__1125bb960,param_3,lVar1);
    return;
  }
  return;
}



/* Entry: 1064aff10; end: 1064aff17; -[SCContextAppearanceStateMachine willAppearFromState:] */

undefined8 FUN_1064aff10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 1064aff18; end: 1064aff4f; -[SCContextAppearanceStateMachine didAppearFromState:] */

undefined8 FUN_1064aff18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 1) {
      uVar1 = 3;
      if (param_3 == 2) {
        uVar1 = 2;
      }
      return uVar1;
    }
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf77ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didMoveToState_fromState__1125bb960,3,uVar1);
  return param_1;
}



/* Entry: 1064aff50; end: 1064aff57; -[SCContextAppearanceStateMachine willDisappearFromState:] */

undefined8 FUN_1064aff50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 1064aff58; end: 1064aff93; -[SCContextAppearanceStateMachine didDisappearFromState:] */

undefined8 FUN_1064aff58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 2) {
    uVar1 = 2;
  }
  else {
    if (param_3 != 3) {
      return 1;
    }
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf77ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didMoveToState_fromState__1125bb960,1,uVar1);
  return param_1;
}



/* Entry: 1064aff94; end: 1064affeb; -[SCContextAppearanceStateMachine didMoveToState:fromState:] */

undefined8 FUN_1064aff94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06900();
  _objc_release(param_1);
  return param_3;
}



/* Entry: 1064affec; end: 1064b0003; -[SCContextAppearanceStateMachine delegate] */

void FUN_1064affec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064b0004; end: 1064b000f; -[SCContextAppearanceStateMachine setDelegate:] */

void FUN_1064b0004(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1064b0010; end: 1064b0017; -[SCContextAppearanceStateMachine state] */

undefined8 FUN_1064b0010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064b0018; end: 1064b001f; -[SCContextAppearanceStateMachine .cxx_destruct] */

void FUN_1064b0018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064b0020; end: 1064b00b3; -[SCContextOperaBackdropViewContainer initWithHostViewController:] */

undefined8 * FUN_1064b0020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  puStack_30 = PTR_PTR_1126f1660;
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_28);
  return puVar1;
}



/* Entry: 1064b00b4; end: 1064b034f; -[SCContextOperaBackdropViewContainer attachView:] */

void FUN_1064b00b4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = param_3;
  _objc_release(uVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar3 != 0) {
    func_0x00010c219b60(param_3,param_2,0);
    func_0x00010c066fa0(lVar3,param_2,param_3,0);
    puVar4 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c274200(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf49460(puVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = param_3;
    puStack_88 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0(puVar7,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    puStack_80 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c2793a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0(puVar9,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    puStack_78 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010bf1ff80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0(puVar12,param_2,lVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(puVar4);
  func_0x00010c12c960(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0;
  _objc_release(uVar2);
  (**(code **)(puVar4 + 0x10))(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1064b0350; end: 1064b03a7; -[SCContextOperaBackdropViewContainer detachView:] */

void FUN_1064b0350(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c12c960(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b03a8; end: 1064b03af; -[SCContextOperaBackdropViewContainer attachedView] */

undefined8 FUN_1064b03a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064b03b0; end: 1064b03db; -[SCContextOperaBackdropViewContainer .cxx_destruct] */

void FUN_1064b03b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064b03dc; end: 1064b0487; -[SCContextOperaLayerUIContainer initWithParentViewController:layoutGuide:] */

undefined8
FUN_1064b03dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puVar1 = auStack_38;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c034160(*(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8,
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8),
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10),
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18),param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return param_1;
}



/* Entry: 1064b0488; end: 1064b0557; -[SCContextOperaLayerUIContainer initWithParentViewController:layoutGuide:layoutMargins:ignoreEdgeOptions:] */

undefined8
FUN_1064b0488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_7);
  _objc_retain(param_8);
  puVar1 = auStack_58;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c034160(param_1,param_2,param_3,param_4,param_5);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_58);
  return param_5;
}



/* Entry: 1064b0558; end: 1064b057b; -[SCContextOperaLayerUIContainer initWithViewContainer:] */

void FUN_1064b0558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c034170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8,
             *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8),
             *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10),
             *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18),param_1,
             PTR_s_initWithParentViewController_vie_1125eaa58,0,param_3,0,0);
  return;
}



/* Entry: 1064b057c; end: 1064b0737; -[SCContextOperaLayerUIContainer initWithParentViewController:viewContainer:layoutGuide:layoutMargins:ignoreEdgeOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1064b057c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar2 = &uStack_80;
  _objc_initWeak(auStack_68,param_7);
  _objc_initWeak(auStack_70,param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f1668;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar6 = (long)_DAT_112748c2c;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010bf77520(*(undefined8 *)((long)puVar2 + lVar6));
    puVar4 = auStack_68;
    _objc_loadWeakRetained(puVar4);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_112748c30),puVar4);
    _objc_release(puVar4);
    lVar6 = (long)_DAT_112748c34;
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_9;
    _objc_release(uVar5);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112748c38);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar4 = auStack_70;
    _objc_loadWeakRetained(puVar4);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_112748c3c),puVar4);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126caee8;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112748c40);
    *(undefined **)((long)puVar2 + (long)_DAT_112748c40) = puVar3;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112748c44) = param_10;
  }
  _objc_release(param_9);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return (undefined1 *)puVar2;
}



/* Entry: 1064b0738; end: 1064b0787; -[SCContextOperaLayerUIContainer loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1);
  puVar1 = PTR_PTR_1126c95d8;
  _objc_opt_new(PTR_PTR_1126c95d8);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064b0788; end: 1064b07e7; -[SCContextOperaLayerUIContainer viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f1668;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 1064b07e8; end: 1064b0847; -[SCContextOperaLayerUIContainer viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b07e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f1668;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 1064b0848; end: 1064b08a7; -[SCContextOperaLayerUIContainer viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0848(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f1668;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 1064b08a8; end: 1064b0907; -[SCContextOperaLayerUIContainer viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b08a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f1668;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 1064b0908; end: 1064b097b; -[SCContextOperaLayerUIContainer beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126f1668;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 1064b097c; end: 1064b09cf; -[SCContextOperaLayerUIContainer endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b097c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1);
  puStack_28 = PTR_PTR_1126f1668;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 1064b09d0; end: 1064b0a4b; -[SCContextOperaLayerUIContainer willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b09d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748c2c);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_1126f1668;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1064b0a4c; end: 1064b0ac7; -[SCContextOperaLayerUIContainer didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748c2c);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_1126f1668;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1064b0ac8; end: 1064b0acf; -[SCContextOperaLayerUIContainer shouldAutomaticallyForwardAppearanceMethods] */

undefined8 FUN_1064b0ac8(void)

{
  return 0;
}



/* Entry: 1064b0ad0; end: 1064b0b33; -[SCContextOperaLayerUIContainer attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112748c48;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010bf6f260(param_1);
  func_0x00010bdd07a0(param_1);
  func_0x00010bf0c9e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b0b34; end: 1064b0c57; -[SCContextOperaLayerUIContainer attachUIWithManagedAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0b34(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_112748c40;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c252440();
    if (lVar2 == 3) {
      uStack_48 = true;
    }
    else {
      lVar2 = *(long *)(param_1 + lVar3);
      func_0x00010c252440();
      uStack_48 = lVar2 == 2;
    }
    func_0x00010bef7700(param_1,param_2,param_3);
    lVar2 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1064b0c58;
    puStack_70 = &UNK_110878f70;
    _objc_retain(param_3);
    lStack_68 = param_3;
    lStack_60 = param_1;
    lStack_58 = lVar2;
    lStack_50 = lVar3;
    func_0x00010c0f9680(puVar1,param_2,&puStack_88);
    func_0x00010bf77e80(param_3,param_2,param_1);
    _objc_release(lStack_68);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b0c58; end: 1064b0d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0c58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x20),param_2,1,0);
  }
  func_0x00010bf0ca60(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(*(long *)(param_1 + 0x28) + (long)_DAT_112748c4c) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c262ca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar1);
  }
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + (long)_DAT_112748c40);
  func_0x00010c252440();
  if (lVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bf941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_endAppearanceTransition_1125c2a10);
    return;
  }
  return;
}



/* Entry: 1064b0d04; end: 1064b0d57; -[SCContextOperaLayerUIContainer detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112748c48;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,0);
  func_0x00010bf6f480(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b0d58; end: 1064b0d9b; -[SCContextOperaLayerUIContainer detachUIWithManagedAppearance:] */

void FUN_1064b0d58(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6f260(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b0d9c; end: 1064b0f73; -[SCContextOperaLayerUIContainer detachChildren] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0d9c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  long unaff_x22;
  long unaff_x23;
  ulong uVar5;
  long lVar6;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = (long)_DAT_112748c40;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c252440();
  if (lVar2 == 3) {
    uVar5 = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c252440();
    uVar5 = (ulong)(lVar2 == 2);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar3 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x21 = *(long *)(lStack_128 + lVar3 * 8);
        func_0x00010c2a6740(unaff_x21,param_2,0);
        unaff_x22 = unaff_x21;
        func_0x00010c29d0c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x22;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x22);
        if (unaff_x23 != 0) {
          if ((int)uVar5 == 0) {
            unaff_x22 = unaff_x21;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12c960();
            _objc_release(unaff_x22);
          }
          else {
            func_0x00010bf17b00(unaff_x21,param_2,0,0);
            unaff_x22 = unaff_x21;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12c960();
            _objc_release(unaff_x22);
            func_0x00010bf941a0(unaff_x21);
          }
        }
        func_0x00010c12c8e0(unaff_x21);
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
      lVar3 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1064b0f74;
  lVar4 = (long)_DAT_112748c30;
  lVar6 = lVar2 + lVar4;
  uStack_170 = uVar5;
  lStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  lStack_150 = lVar3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar6 == 0) {
    lVar3 = lVar2 + _DAT_112748c3c;
    _objc_loadWeakRetained();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar6);
  lVar3 = (long)_DAT_112748c50;
  if ((*(char *)(lVar2 + lVar3) != '\x01') || (!bVar1)) {
    lVar6 = lVar2 + lVar4;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar6 != 0) {
      lVar6 = lVar2 + lVar4;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bef7700();
      _objc_release(lVar6);
    }
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1064b10b8;
    puStack_180 = &UNK_110842e18;
    lStack_178 = lVar2;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_198);
    func_0x00010bf941a0(lVar2);
    lVar6 = lVar2 + lVar4;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar6 != 0) {
      lVar4 = lVar2 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf77e80(lVar2,param_2,lVar4);
      _objc_release(lVar4);
    }
    *(undefined1 *)(lVar2 + lVar3) = 1;
  }
  return;
}



/* Entry: 1064b0f74; end: 1064b10b7; -[SCContextOperaLayerUIContainer _attachToParent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b0f74(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar3 = (long)_DAT_112748c30;
  lVar4 = param_1 + lVar3;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar2 = param_1 + _DAT_112748c3c;
    _objc_loadWeakRetained();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar4);
  lVar4 = (long)_DAT_112748c50;
  if ((*(char *)(param_1 + lVar4) != '\x01') || (!bVar1)) {
    lVar2 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_1 + lVar3;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bef7700();
      _objc_release(lVar2);
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1064b10b8;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
    func_0x00010bf941a0(param_1);
    lVar2 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar3 = param_1 + lVar3;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf77e80(param_1,param_2,lVar3);
      _objc_release(lVar3);
    }
    *(undefined1 *)(param_1 + lVar4) = 1;
  }
  return;
}



/* Entry: 1064b10b8; end: 1064b14f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b10b8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x20),param_2,1,0);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112748c3c;
  lVar12 = *(long *)(param_1 + 0x20) + lVar10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar12 == 0) {
    lVar12 = *(long *)(param_1 + 0x20) + (long)_DAT_112748c30;
    _objc_loadWeakRetained(lVar12);
    lVar10 = lVar12;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    func_0x00010c219b60(lVar2,param_2,0);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0665c0();
    if (iVar1 == 0) {
      func_0x00010befbb60(lVar10,param_2,lVar2);
    }
    else {
      func_0x00010c066fa0(lVar10,param_2,lVar2,0);
    }
    lVar12 = (long)_DAT_112748c44;
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar12);
    uVar7 = (uint)uVar8;
    if ((uVar8 & 1) == 0) {
      lVar3 = lVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c34);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      if (lVar4 == 0) {
        lVar6 = lVar10;
        func_0x00010c274200(lVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar5 = lVar3;
      func_0x00010bf493c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c38),lVar3,
                          param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)_DAT_112748c54;
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11);
      *(long *)(*(long *)(param_1 + 0x20) + lVar11) = lVar5;
      _objc_release(uVar9);
      if (lVar4 == 0) {
        _objc_release(lVar6);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010c162480(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11),param_2,1);
      uVar7 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar12);
    }
    if ((uVar7 >> 1 & 1) == 0) {
      lVar3 = lVar2;
      func_0x00010c2793a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c34);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      if (lVar4 == 0) {
        lVar6 = lVar10;
        func_0x00010c2793a0(lVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar5 = lVar3;
      func_0x00010bf493c0(-*(double *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c38 + 0x18),
                          lVar3,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(lVar5);
      if (lVar4 == 0) {
        _objc_release(lVar6);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      uVar7 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar12);
    }
    if ((uVar7 >> 2 & 1) == 0) {
      lVar3 = lVar2;
      func_0x00010bf1ff80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c34);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      if (lVar4 == 0) {
        lVar6 = lVar10;
        func_0x00010bf1ff80(lVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar5 = lVar3;
      func_0x00010bf493c0(-*(double *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c38 + 0x10),
                          lVar3,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(lVar5);
      if (lVar4 == 0) {
        _objc_release(lVar6);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      uVar7 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar12);
    }
    if ((uVar7 >> 3 & 1) == 0) {
      lVar12 = lVar2;
      func_0x00010c08de00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c34);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      if (lVar6 == 0) {
        lVar3 = lVar10;
        func_0x00010c08de00(lVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar4 = lVar12;
      func_0x00010bf493c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c38 + 8),
                          lVar12,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(lVar4);
      if (lVar6 == 0) {
        _objc_release(lVar3);
      }
      _objc_release(lVar6);
      _objc_release(lVar12);
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x20) + lVar10;
    _objc_loadWeakRetained(lVar10);
    func_0x00010bf0ca20();
  }
  _objc_release(lVar10);
  if ((*(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748c4c) & 1) == 0) {
    func_0x00010c08cdc0(lVar2);
  }
  else {
    lVar10 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    if (lVar10 != 0) {
      lVar12 = lVar10;
    }
    func_0x00010c08cdc0(lVar12);
    _objc_release(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1064b14f8; end: 1064b1637; -[SCContextOperaLayerUIContainer updateTopLayoutMargin:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b14f8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  double dStack_28;
  
  if ((((*(byte *)(param_2 + _DAT_112748c44) & 1) == 0) &&
      (1.1920928955078125e-07 < ABS(*(double *)(param_2 + _DAT_112748c38) - param_1))) &&
     (*(double *)(param_2 + _DAT_112748c38) = param_1, *(long *)(param_2 + _DAT_112748c54) != 0)) {
    ppuVar1 = &puStack_50;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1064b15d0;
    puStack_38 = &UNK_110848c48;
    lStack_30 = param_2;
    dStack_28 = param_1;
    _objc_retainBlock();
    if (param_4 == 0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    }
    else {
      func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_3,ppuVar1);
    }
    _objc_release(ppuVar1);
  }
  return;
}



/* Entry: 1064b1638; end: 1064b165f; -[SCContextOperaLayerUIContainer setForceHiddenState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1638(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112748c58) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112748c58) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hide_1125d5f18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_show_11266b038);
  return;
}



/* Entry: 1064b1660; end: 1064b169f; -[SCContextOperaLayerUIContainer hide] */

/* WARNING: Possible PIC construction at 0x0001064b1680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001064b1684) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748c40),PTR_s_setState__112660218,1);
  return;
}



/* Entry: 1064b16a0; end: 1064b16d3; -[SCContextOperaLayerUIContainer hideContainer] */

void FUN_1064b16a0(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064b16d4; end: 1064b1727; -[SCContextOperaLayerUIContainer show] */

/* WARNING: Possible PIC construction at 0x0001064b1708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001064b170c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b16d4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112748c58) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748c40),PTR_s_setState__112660218,3);
  return;
}



/* Entry: 1064b1728; end: 1064b175b; -[SCContextOperaLayerUIContainer showContainer] */

void FUN_1064b1728(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064b175c; end: 1064b176f; -[SCContextOperaLayerUIContainer willDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b175c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748c40),PTR_s_setState__112660218,1);
  return;
}



/* Entry: 1064b1770; end: 1064b1783; -[SCContextOperaLayerUIContainer didDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748c40),PTR_s_setState__112660218,0);
  return;
}



/* Entry: 1064b1784; end: 1064b1797; -[SCContextOperaLayerUIContainer willAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748c40),PTR_s_setState__112660218,3);
  return;
}



/* Entry: 1064b1798; end: 1064b17ab; -[SCContextOperaLayerUIContainer didAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748c40),PTR_s_setState__112660218,2);
  return;
}



/* Entry: 1064b17ac; end: 1064b17ff; -[SCContextOperaLayerUIContainer setAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b17ac(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + _DAT_112748c58) & 1) != 0) {
    return;
  }
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b1800; end: 1064b184f; -[SCContextOperaLayerUIContainer setTransform:] */

void FUN_1064b1800(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(param_1);
  return;
}



/* Entry: 1064b1850; end: 1064b1acb; -[SCContextOperaLayerUIContainer attachViewToContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(param_3);
  func_0x00010befbb60(param_1,param_2,param_3);
  func_0x00010c219b60(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  uStack_88 = uVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  uStack_80 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  uStack_78 = uVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar12 = param_1;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = 4;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  if (lVar16 < 2) {
    if (lVar16 != 0) {
      if (lVar16 != 1) goto LAB_1064b1b74;
      param_1 = param_1 + _DAT_112748c48;
      _objc_loadWeakRetained(param_1);
      goto LAB_1064b1b48;
    }
LAB_1064b1b54:
    param_1 = param_1 + _DAT_112748c48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf941a0();
  }
  else {
    if (lVar16 == 2) goto LAB_1064b1b54;
    if (lVar16 != 3) goto LAB_1064b1b74;
    param_1 = param_1 + _DAT_112748c48;
    _objc_loadWeakRetained(param_1);
LAB_1064b1b48:
    func_0x00010bf17b00();
  }
  _objc_release(param_1);
LAB_1064b1b74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 1064b1acc; end: 1064b1b87; -[SCContextOperaLayerUIContainer appearanceStateMachine:didMoveToState:fromState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1acc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 < 2) {
    if (param_4 != 0) {
      if (param_4 != 1) goto LAB_1064b1b74;
      param_1 = param_1 + _DAT_112748c48;
      _objc_loadWeakRetained(param_1);
      goto LAB_1064b1b48;
    }
LAB_1064b1b54:
    param_1 = param_1 + _DAT_112748c48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf941a0();
  }
  else {
    if (param_4 == 2) goto LAB_1064b1b54;
    if (param_4 != 3) goto LAB_1064b1b74;
    param_1 = param_1 + _DAT_112748c48;
    _objc_loadWeakRetained(param_1);
LAB_1064b1b48:
    func_0x00010bf17b00();
  }
  _objc_release(param_1);
LAB_1064b1b74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


