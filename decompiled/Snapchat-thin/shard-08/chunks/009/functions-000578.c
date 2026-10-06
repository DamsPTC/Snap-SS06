/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066fba80; end: 1066fbb17; -[SCLensExplorerRouterV3 cardTransitionDidUpdateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fba80(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_5;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (5.0 < param_1 * param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_5 + _DAT_11274e7f8),PTR_s_setScrollEnabled__11265b8f0,0);
    return;
  }
  return;
}



/* Entry: 1066fbb18; end: 1066fbb77; -[SCLensExplorerRouterV3 cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fbb18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 != 0) {
    return;
  }
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093620();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_11274e7f8;
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fbb78; end: 1066fbb87; -[SCLensExplorerRouterV3 animationControllerForPresentedController:presentingController:sourceController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fbb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e7fc),
             PTR_s_animationControllerForPresentedC_11259e840);
  return;
}



/* Entry: 1066fbb88; end: 1066fbb97; -[SCLensExplorerRouterV3 animationControllerForDismissedController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fbb88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e7fc),
             PTR_s_animationControllerForDismissedC_11259e838);
  return;
}



/* Entry: 1066fbb98; end: 1066fbbc7; -[SCLensExplorerRouterV3 interactionControllerForPresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fbb98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e800);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066fbbc8; end: 1066fbbd7; -[SCLensExplorerRouterV3 interactionControllerForDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fbbc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0684b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e7fc),
             PTR_s_interactionControllerForDismissa_1125f7b38);
  return;
}



/* Entry: 1066fbbd8; end: 1066fbc1f; -[SCLensExplorerRouterV3 didSelectDismissalActionWithHeaderItem:] */

void FUN_1066fbbd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0932e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1984e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf83b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissIfNeededWithAnimated_comp_1125be878,1,0);
  return;
}



/* Entry: 1066fbc20; end: 1066fbc2b; -[SCLensExplorerRouterV3 presentLensExplorerFrom:accessoryView:] */

void FUN_1066fbc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentLensExplorerFromViewCont_11257ca58,param_3,0,param_4);
  return;
}



/* Entry: 1066fbc2c; end: 1066fbc3b; -[SCLensExplorerRouterV3 presentLensExplorerWith:accessoryView:] */

void FUN_1066fbc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentLensExplorerFromViewCont_11257ca58,0,param_3,param_4);
  return;
}



/* Entry: 1066fbc3c; end: 1066fc1bb; -[SCLensExplorerRouterV3 _presentLensExplorerFromViewController:uiContainer:accessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fbc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cfd40();
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_90,auStack_80);
  uStack_88 = lVar2 == 1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274e804);
  *(undefined **)(param_1 + _DAT_11274e804) = puVar3;
  _objc_release(uVar7);
  lVar1 = param_1;
  func_0x00010c0b37c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf58d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb820(param_1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0932e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar4 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2afc0();
  func_0x00010c250940(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0f1ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0f1b60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bddbe20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010b837400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11274e7fc;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar1;
  _objc_release(uVar7);
  func_0x00010c1797c0(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar8));
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c068e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274e800);
  *(long *)(param_1 + _DAT_11274e800) = lVar8;
  _objc_release(uVar7);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274e7f0);
  func_0x00010beee120(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd358;
  _objc_alloc(PTR_PTR_1126cd358);
  lVar1 = param_1;
  func_0x00010c092d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042ba0(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar1);
  func_0x00010c1a78e0(puVar3);
  func_0x00010c188020(param_1);
  puVar5 = PTR_PTR_1126aefc0;
  _objc_alloc(PTR_PTR_1126aefc0);
  lVar1 = param_1;
  func_0x00010bf60ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0402e0(puVar5);
  func_0x00010c1cb7c0(param_1);
  _objc_release(puVar5);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8b80();
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274e7ec);
  func_0x00010bfd3040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf86ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar6);
  _objc_release(lVar1);
  _objc_release(uVar6);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cbc0(param_1);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066fc1bc; end: 1066fc203;  */

void FUN_1066fc1bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066fc204; end: 1066fc2a7;  */

void FUN_1066fc204(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12f170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_removeViewController_112629678);
    return;
  }
  func_0x00010c070bc0();
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1066fc2a8; end: 1066fc2fb; -[SCLensExplorerRouterV3 removeViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fc2a8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f29e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_removeViewController_112629678);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e7f8);
  *(undefined8 *)(param_1 + _DAT_11274e7f8) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 1066fc2fc; end: 1066fc34b; -[SCLensExplorerRouterV3 lensSearchDidPickLens:] */

void FUN_1066fc2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ccc68;
  func_0x00010c094c40(PTR_PTR_1126ccc68,param_2,param_3,0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1e60(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066fc34c; end: 1066fc463; -[SCLensExplorerRouterV3 _createSearchPresenterWithPickerModeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fc34c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c092d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_1;
  func_0x00010bf58ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066fc464; end: 1066fc4eb;  */

void FUN_1066fc464(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bf6b020(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0935e0();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fc4ec; end: 1066fc6a7; -[SCLensExplorerRouterV3 _categoriesFetcherForConfiguration:] */

void FUN_1066fc4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1066fc6a8;
  uStack_60 = 0x1066fc6b8;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c10f7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcf60();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cd360;
  _objc_alloc(PTR_PTR_1126cd360);
  uVar1 = param_1;
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf33100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023c60(puVar2);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066fc6a8; end: 1066fc6bf;  */

void FUN_1066fc6a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066fc6c0; end: 1066fc717;  */

void FUN_1066fc6c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066fc718; end: 1066fc797; -[SCLensExplorerRouterV3 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fc718(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e7f8,0);
  _objc_storeStrong(param_1 + _DAT_11274e7f0,0);
  _objc_storeStrong(param_1 + _DAT_11274e7ec,0);
  _objc_storeStrong(param_1 + _DAT_11274e804,0);
  _objc_storeStrong(param_1 + _DAT_11274e7fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e800,0);
  return;
}



/* Entry: 1066fc798; end: 1066fc84f; -[SCLensExplorerSingleCategoryRouter lensExplorerSingleCategoryViewControllerWillBeginDismissing:] */

void FUN_1066fc798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c0932e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1984e0();
    _objc_release(uVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1066fc850; end: 1066fc8c7; -[SCLensExplorerSingleCategoryRouter lensExplorerSingleCategoryViewControllerDidDismiss:] */

void FUN_1066fc850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12f170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeViewController_112629678);
    return;
  }
  return;
}



/* Entry: 1066fc8c8; end: 1066fc8d3; -[SCLensExplorerSingleCategoryRouter presentLensExplorerFrom:accessoryView:] */

void FUN_1066fc8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentLensExplorerFromViewCont_11257ca58,param_3,0,param_4);
  return;
}



/* Entry: 1066fc8d4; end: 1066fc8e3; -[SCLensExplorerSingleCategoryRouter presentLensExplorerWith:accessoryView:] */

void FUN_1066fc8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentLensExplorerFromViewCont_11257ca58,0,param_3,param_4);
  return;
}



/* Entry: 1066fc8e4; end: 1066fcbef; -[SCLensExplorerSingleCategoryRouter _presentLensExplorerFromViewController:uiContainer:accessoryView:] */

void FUN_1066fc8e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cfd40();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0b37c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf58d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb820(param_1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0932e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c247520();
  lVar5 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf2afc0();
  func_0x00010c250940(lVar1,param_2,lVar4,0,lVar6,lVar2 == 1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c23cae0(param_1,param_2,lVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c18b5e0(lVar3,param_2,param_1);
  func_0x00010c188020(param_1,param_2,lVar3);
  puVar7 = PTR_PTR_1126aefc0;
  _objc_alloc(PTR_PTR_1126aefc0);
  lVar1 = param_1;
  func_0x00010bf60ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0402e0(puVar7,param_2,lVar1);
  func_0x00010c1cb7c0(param_1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c27acc0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0cfbe0(lVar3);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8b80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066fcbf0;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_1;
  func_0x00010c10cbc0(param_1,param_2,lVar1,param_3,param_4,&puStack_88);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar3);
  return;
}



/* Entry: 1066fcbf0; end: 1066fcc93;  */

void FUN_1066fcbf0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12f170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_removeViewController_112629678);
    return;
  }
  func_0x00010c070bc0();
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1066fcc94; end: 1066fcd8f; -[SCLensExplorerStoryScopePresenter initWithLensExplorerStoryScopeExposer:lensExplorerStoryScopeServices:storyConfiguration:storyDataSourceFactory:] */

undefined1 *
FUN_1066fcc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f29f0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066fcd90; end: 1066fcdc7; -[SCLensExplorerStoryScopePresenter isPresenting] */

bool FUN_1066fcd90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1066fcdc8; end: 1066fcdff; -[SCLensExplorerStoryScopePresenter dismissWithCompletion:] */

void FUN_1066fcdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeScopeIfNeeded_112580e40);
  return;
}



/* Entry: 1066fce00; end: 1066fcfd3; -[SCLensExplorerStoryScopePresenter presentWithCreatorStory:baseView:sourceViewController:eventHandler:] */

void FUN_1066fce00(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c07ab40();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010bf5b8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126cd368;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010bf5b8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf5b8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bf5b8a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c078f60();
      lVar9 = param_3;
      func_0x00010bf5b8a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e1a60();
      func_0x00010c006900(puVar3,param_2,lVar4,lVar6,lVar8,lVar10);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      puVar11 = PTR_PTR_1126cd370;
      func_0x00010bf5b900(PTR_PTR_1126cd370,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7f700(param_1,param_2,puVar11,param_4,param_5,param_6);
      _objc_release(puVar11);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fcfd4; end: 1066fd0d3; -[SCLensExplorerStoryScopePresenter presentWithStoryId:sectionId:baseView:sourceViewController:eventHandler:] */

void FUN_1066fcfd4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c07ab40();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c259ba0(uVar2,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd370;
    func_0x00010c2586e0(PTR_PTR_1126cd370,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7f700(param_1,param_2,puVar3,param_5,param_6,param_7);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fd0d4; end: 1066fd1bb; -[SCLensExplorerStoryScopePresenter _presentWithStoryInfo:baseView:sourceViewController:eventHandler:] */

void FUN_1066fd0d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_6;
  _objc_release(uVar2);
  func_0x00010be648e0(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010bec4760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23ac0(uVar2,param_2,param_3,lVar1,param_4,param_5,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066fd1bc; end: 1066fd203; -[SCLensExplorerStoryScopePresenter _storyConfiguration] */

void FUN_1066fd1bc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cca18;
    _objc_alloc(PTR_PTR_1126cca18);
    func_0x00010c004140();
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066fd204; end: 1066fd253; -[SCLensExplorerStoryScopePresenter didFinishDismissingWithScope:] */

void FUN_1066fd204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be8d280();
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
  }
  func_0x00010be648e0(param_1,param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fd254; end: 1066fd287; -[SCLensExplorerStoryScopePresenter didFailToPresentStoryWithScope:] */

void FUN_1066fd254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be8d280();
  func_0x00010be648e0(param_1,param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fd288; end: 1066fd2cf; -[SCLensExplorerStoryScopePresenter _removeScopeIfNeeded] */

void FUN_1066fd288(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1066fd2d0; end: 1066fd2e7; -[SCLensExplorerStoryScopePresenter _notifyEventHandler:] */

void FUN_1066fd2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066fd2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1066fd2e8; end: 1066fd347; -[SCLensExplorerStoryScopePresenter .cxx_destruct] */

void FUN_1066fd2e8(long param_1)

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



/* Entry: 1066fd348; end: 1066fd64b; -[SCLensExplorerTabLessRouterV2 initWithLensExplorerFactory:navigationContainer:dependencyProvider:loggerFactory:configuration:pageUIConfiguration:externalRefreshHandler:selectedCategoryIdentifier:uiConfiguration:sessionControlEvents:entryCategory:infoCardSource:searchType:storyConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1066fd348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126f29f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithLensExplorerFactory_depe_1125e6918,param_3,param_5,
                      param_6,param_7,param_8,param_14,param_16);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274e820;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e824;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e828;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e82c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e830;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274e834,param_4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274e838) = param_15;
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e83c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e83c) = puVar3;
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_16);
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



/* Entry: 1066fd64c; end: 1066fd693;  */

void FUN_1066fd64c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066fd694; end: 1066fd93b; -[SCLensExplorerTabLessRouterV2 presentLensExplorerWithUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fd694(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfd40();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c0b37c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf58d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb820(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c0932e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2afc0();
  func_0x00010c250940(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10a400(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11274e840;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar4));
  lVar4 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093620();
  _objc_release(lVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e828);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1066fd93c; end: 1066fda27;  */

void FUN_1066fd93c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066fda28;
  puStack_50 = &UNK_110871898;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bfb60(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1066fda28; end: 1066fda6b;  */

void FUN_1066fda28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066fda6c; end: 1066fda97;  */

void FUN_1066fda6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066fda98; end: 1066fddc3; -[SCLensExplorerTabLessRouterV2 prepareViewControllerWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fda98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010c092e20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f1ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0f1b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar1 = param_1;
  func_0x00010bddbe20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274e824);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf86ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126cd378;
  _objc_alloc(PTR_PTR_1126cd378);
  lVar6 = (long)_DAT_11274e830;
  func_0x00010c264d00(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c290c60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c09d500();
  func_0x00010bf02200();
  func_0x00010c25e1a0();
  func_0x00010bffcee0(puVar3);
  lVar6 = param_1 + _DAT_11274e848;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c1d87e0(puVar3);
  _objc_release(lVar6);
  _objc_storeWeak(param_1 + _DAT_11274e84c,puVar3);
  puVar4 = PTR_PTR_1126b0870;
  _objc_alloc(PTR_PTR_1126b0870);
  func_0x00010c033f60();
  puVar5 = PTR_PTR_1126cd380;
  _objc_alloc();
  func_0x00010c055620();
  func_0x00010c188020(param_1);
  lVar6 = (long)_DAT_11274e844;
  _objc_retain(puVar5);
  uVar7 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar5;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274e820);
  func_0x00010bfd3040(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar7);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066fddc4; end: 1066fde0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fddc4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11274e844;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c29c5a0();
    if (1 < uVar1) {
      func_0x00010c103960(*(undefined8 *)(param_1 + lVar2));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066fde10; end: 1066fdef7; -[SCLensExplorerTabLessRouterV2 finishDismissWorkflowAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fde10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + _DAT_11274e84c,0);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bdfb7a0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1066fdef8; end: 1066fdf43;  */

void FUN_1066fdef8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12f160();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066fdf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066fdf44; end: 1066fdfcb; -[SCLensExplorerTabLessRouterV2 removeViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fdf44(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f29f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_removeViewController_112629678);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e840);
  *(undefined8 *)(param_1 + _DAT_11274e840) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_11274e834,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e844);
  *(undefined8 *)(param_1 + _DAT_11274e844) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_11274e84c,0);
  return;
}



/* Entry: 1066fdfcc; end: 1066fdfeb; -[SCLensExplorerTabLessRouterV2 lensExplorer_renderedController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fdfcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274e84c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066fdfec; end: 1066fe0cf; -[SCLensExplorerTabLessRouterV2 singleCategoryViewControllerWithModelProvider:isLensCollectionCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fdfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0f1ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0f1b60(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126cd340;
  _objc_alloc(PTR_PTR_1126cd340);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274e830);
  func_0x00010c25e1a0(uVar5);
  func_0x00010bffd100(puVar4,param_2,param_3,lVar3,param_4,0,uVar5,0);
  _objc_release(param_3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066fe0d0; end: 1066fe13b; -[SCLensExplorerTabLessRouterV2 presentSingleCategoryPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274e844;
  if (*(long *)(param_1 + lVar1) != 0) {
    _objc_retain(param_3);
    func_0x00010c18b5e0(param_3,param_2,param_1);
    func_0x00010c11c500(*(undefined8 *)(param_1 + lVar1),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1066fe13c; end: 1066fe14b; -[SCLensExplorerTabLessRouterV2 lensExplorerSingleCategoryViewControllerWillBeginDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1039f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e844),PTR_s_popViewController_11261e898);
  return;
}



/* Entry: 1066fe14c; end: 1066fe14f; -[SCLensExplorerTabLessRouterV2 lensExplorerSingleCategoryViewControllerDidDismiss:] */

void FUN_1066fe14c(void)

{
  return;
}



/* Entry: 1066fe150; end: 1066fe19f; -[SCLensExplorerTabLessRouterV2 lensSearchDidPickLens:] */

void FUN_1066fe150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ccc68;
  func_0x00010c094c40(PTR_PTR_1126ccc68,param_2,param_3,0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1e60(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066fe1a0; end: 1066fe1af; -[SCLensExplorerTabLessRouterV2 _handleVerticalScrollEnabled:horizontalScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe1a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2210b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e844),
             PTR_s_setVerticalScrollEnabled_horizon_112665e50);
  return;
}



/* Entry: 1066fe1b0; end: 1066fe207; -[SCLensExplorerTabLessRouterV2 _detachUIWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe1b0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11274e840) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    func_0x00010bf6f440(*(long *)(param_1 + _DAT_11274e840),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fe208; end: 1066fe3c3; -[SCLensExplorerTabLessRouterV2 _categoriesFetcherForConfiguration:] */

void FUN_1066fe208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1066fe3c4;
  uStack_60 = 0x1066fe3d4;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c10f7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcf60();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cd360;
  _objc_alloc(PTR_PTR_1126cd360);
  uVar1 = param_1;
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c092e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf33100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023c60(puVar2);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066fe3c4; end: 1066fe3db;  */

void FUN_1066fe3c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066fe3dc; end: 1066fe433;  */

void FUN_1066fe3dc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066fe434; end: 1066fe51f; -[SCLensExplorerTabLessRouterV2 _presentSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe434(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274e834;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c092e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c159940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274e83c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10cd40(uVar4,param_2,param_1,lVar3);
    _objc_release(param_1);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1066fe520; end: 1066fe647; -[SCLensExplorerTabLessRouterV2 _createSearchPresenterWithDependencyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  lVar2 = (long)_DAT_11274e830;
  func_0x00010c290c60(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c25e1a0(*(undefined8 *)(param_1 + lVar2));
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_3;
  func_0x00010bf58ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066fe648; end: 1066fe6cf;  */

void FUN_1066fe648(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bf6b020(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0935e0();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fe6d0; end: 1066fe6ef; -[SCLensExplorerTabLessRouterV2 pageTransitionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe6d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274e848);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066fe6f0; end: 1066fe703; -[SCLensExplorerTabLessRouterV2 setPageTransitionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274e848,param_3);
  return;
}



/* Entry: 1066fe704; end: 1066fe7c7; -[SCLensExplorerTabLessRouterV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe704(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274e848);
  _objc_destroyWeak(param_1 + _DAT_11274e84c);
  _objc_storeStrong(param_1 + _DAT_11274e83c,0);
  _objc_storeStrong(param_1 + _DAT_11274e828,0);
  _objc_storeStrong(param_1 + _DAT_11274e844,0);
  _objc_destroyWeak(param_1 + _DAT_11274e834);
  _objc_storeStrong(param_1 + _DAT_11274e840,0);
  _objc_storeStrong(param_1 + _DAT_11274e82c,0);
  _objc_storeStrong(param_1 + _DAT_11274e830,0);
  _objc_storeStrong(param_1 + _DAT_11274e820,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e824,0);
  return;
}



/* Entry: 1066fe7c8; end: 1066fe7fb; +[SCLensExplorerPageUIConfiguration defaultConfiguration] */

void FUN_1066fe7c8(void)

{
  _objc_alloc(PTR_PTR_1126cc950);
  func_0x00010c043060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066fe7fc; end: 1066fe9bf; -[SCLensExplorerCategoryPage initWithCategoryId:lensExplorerFactory:layoutProvider:categoryFetchingColleague:sectionsProviderColleague:mediator:disableContentReloadAnimations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066fe7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f2a00;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11274e850;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e854;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e858;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e85c) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e860);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e860) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e864;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e868;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e86c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e870) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066fe9c0; end: 1066fea0f; -[SCLensExplorerCategoryPage didReceiveMemoryWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fe9c0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didReceiveMemoryWarning_1125bbe28);
  func_0x00010c0f2160(*(undefined8 *)(param_1 + _DAT_11274e864));
  return;
}



/* Entry: 1066fea10; end: 1066feb1f; -[SCLensExplorerCategoryPage lensExplorer_sectionViewModelWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fea10(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11274e86c);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccac8;
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066feb20; end: 1066feb67;  */

undefined8 FUN_1066feb20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf7ecc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1066feb68; end: 1066febd7; -[SCLensExplorerCategoryPage viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066feb68(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beabc00(param_1);
  func_0x00010bead480(param_1);
  func_0x00010beaea20(param_1);
  func_0x00010beab980(param_1);
  func_0x00010c0f2140(*(undefined8 *)(param_1 + _DAT_11274e864));
  return;
}



/* Entry: 1066febd8; end: 1066fec47; -[SCLensExplorerCategoryPage viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066febd8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11274e874));
  _objc_release(lVar1);
  return;
}



/* Entry: 1066fec48; end: 1066fec97; -[SCLensExplorerCategoryPage viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fec48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c0f20e0(*(undefined8 *)(param_1 + _DAT_11274e864));
  return;
}



/* Entry: 1066fec98; end: 1066fee77; -[SCLensExplorerCategoryPage _setupContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fec98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar5 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar1 = param_5;
  uVar3 = param_3;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar7 = param_4;
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_initWeak(auStack_78,param_5);
  lVar5 = (long)_DAT_11274e858;
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  uVar6 = 0xc2000000;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf56d00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd388;
  _objc_alloc();
  func_0x00010bf40780(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf08040(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c014060(0,0,param_3,param_4,uVar6,param_2,uVar3,uVar7);
  uVar3 = *(undefined8 *)(param_5 + _DAT_11274e874);
  *(undefined **)(param_5 + _DAT_11274e874) = puVar2;
  _objc_release(uVar3);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1066fee78; end: 1066feea3;  */

void FUN_1066fee78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066feea4; end: 1066fef9b; -[SCLensExplorerCategoryPage _setupCollectionViewColleagueIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066feea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11274e878;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126cd390;
  _objc_alloc(PTR_PTR_1126cd390);
  lVar6 = (long)_DAT_11274e864;
  func_0x00010c02a1e0();
  puVar2 = PTR_PTR_1126cd398;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e874);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a200(puVar2,param_2,uVar4,uVar3,*(undefined8 *)(param_1 + _DAT_11274e858),puVar1,
                      *(undefined1 *)(param_1 + _DAT_11274e870));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1260e0(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066fef9c; end: 1066ff02f; -[SCLensExplorerCategoryPage _setupPageColleague] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066fef9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cd3a0;
  _objc_alloc(PTR_PTR_1126cd3a0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e874);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274e854);
  func_0x00010c0dc660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000d60(puVar1,param_2,uVar3,uVar2);
  _objc_release(uVar2);
  func_0x00010c1263e0(*(undefined8 *)(param_1 + _DAT_11274e864),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066ff030; end: 1066ff0b3; -[SCLensExplorerCategoryPage _handleOrthogonalSectionScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ff030(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274e874;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152b20(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066ff0b4; end: 1066ff0c3; -[SCLensExplorerCategoryPage scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ff0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e874),PTR_s_collectionView_1125ad9f0);
  return;
}



/* Entry: 1066ff0c4; end: 1066ff0d3; -[SCLensExplorerCategoryPage didScrollObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ff0c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e878),PTR_s_didScrollObservable_1125bc2e0);
  return;
}



/* Entry: 1066ff0d4; end: 1066ff0ff; -[SCLensExplorerCategoryPage pageViewWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ff0d4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11274e85c) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11274e85c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0f22f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e864),PTR_s_pageViewWillAppear_11261a2d0);
  return;
}



/* Entry: 1066ff100; end: 1066ff12b; -[SCLensExplorerCategoryPage pageViewWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ff100(long param_1)

{
  if (*(char *)(param_1 + _DAT_11274e85c) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11274e85c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0f2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274e864),PTR_s_pageViewWillDisappear_11261a2d8);
    return;
  }
  return;
}



/* Entry: 1066ff12c; end: 1066ff12f; -[SCLensExplorerCategoryPage pageViewWasSelected] */

void FUN_1066ff12c(void)

{
  return;
}



/* Entry: 1066ff130; end: 1066ff15f; -[SCLensExplorerCategoryPage defaultProjectNameV2] */

void FUN_1066ff130(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dcb5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dcb5d8);
  return;
}



/* Entry: 1066ff160; end: 1066ff18f; -[SCLensExplorerCategoryPage defaultSubProjectName] */

void FUN_1066ff160(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f82898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f82898);
  return;
}



/* Entry: 1066ff190; end: 1066ff193; -[SCLensExplorerCategoryPage _setupKarma] */

void FUN_1066ff190(void)

{
  return;
}



/* Entry: 1066ff194; end: 1066ff1a3; -[SCLensExplorerCategoryPage categoryIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066ff194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e850);
}



/* Entry: 1066ff1a4; end: 1066ff253; -[SCLensExplorerCategoryPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ff1a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e850,0);
  _objc_storeStrong(param_1 + _DAT_11274e860,0);
  _objc_storeStrong(param_1 + _DAT_11274e878,0);
  _objc_storeStrong(param_1 + _DAT_11274e86c,0);
  _objc_storeStrong(param_1 + _DAT_11274e868,0);
  _objc_storeStrong(param_1 + _DAT_11274e864,0);
  _objc_storeStrong(param_1 + _DAT_11274e858,0);
  _objc_storeStrong(param_1 + _DAT_11274e854,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e874,0);
  return;
}



/* Entry: 1066ff254; end: 1066ff2ff; -[SCLensExplorerCategoryPageLayoutProvider initWithStudyProvider:forceLegacyOrthogonalLayout:uiConfiguration:] */

undefined1 *
FUN_1066ff254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f2a08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066ff300; end: 1066ff303; -[SCLensExplorerCategoryPageLayoutProvider createLayoutWithSectionProvider:orthogonalScrollHandler:] */

void FUN_1066ff300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf0e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createOrthogonalLayoutWithSecti_112559d30);
  return;
}



/* Entry: 1066ff304; end: 1066ff36b; -[SCLensExplorerCategoryPageLayoutProvider collectionViewContentInsets] */

undefined8 FUN_1066ff304(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010bf408c0(PTR_PTR_1126cc910);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
  func_0x00010c274500();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Entry: 1066ff36c; end: 1066ff373; -[SCLensExplorerCategoryPageLayoutProvider appliesBottomSafeAreaInset] */

void FUN_1066ff36c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_bottomSafeAreaInsetEnabled_1125a5ac8);
  return;
}



/* Entry: 1066ff374; end: 1066ff37b; -[SCLensExplorerCategoryPageLayoutProvider requiresManualItemsTracking] */

undefined1 FUN_1066ff374(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1066ff37c; end: 1066ff553; -[SCLensExplorerCategoryPageLayoutProvider visibleItemsInCollectionView:] */

void FUN_1066ff37c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cd3a8;
  _objc_opt_class(PTR_PTR_1126cd3a8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar5 = param_3;
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = param_3;
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        if (uVar6 != 0) {
          func_0x00010c1d0640(puVar4);
        }
        _objc_release(uVar6);
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      uVar3 = uVar5;
      func_0x00010bf52a60();
    }
    _objc_release(uVar5);
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c29fe40(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    if (*(char *)(param_3 + 0x10) == '\x01') {
      func_0x00010bf56d80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf55420();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ff554; end: 1066ff58b; -[SCLensExplorerCategoryPageLayoutProvider _createOrthogonalLayoutWithSectionProvider:orthogonalScrollHandler:] */

void FUN_1066ff554(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010bf56d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf55420();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ff58c; end: 1066ff5db; -[SCLensExplorerCategoryPageLayoutProvider headerModelForSection:] */

void FUN_1066ff58c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c262dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066ff5dc; end: 1066ff727;  */

ulong FUN_1066ff5dc(double param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  func_0x00010bfe0980(param_3);
  if (param_1 <= 0.0) {
    uVar7 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c29d2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ccf00;
    func_0x00010beef360(PTR_PTR_1126ccf00);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0720c0();
    if ((uVar7 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c29d2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ccf00;
      func_0x00010bfa14a0(PTR_PTR_1126ccf00);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c0720c0();
      if ((uVar7 & 1) == 0) {
        uVar5 = param_3;
        func_0x00010c29d2e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126ccf00;
        func_0x00010c155e20(PTR_PTR_1126ccf00);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0720c0(uVar5);
        _objc_release(puVar6);
        _objc_release(uVar5);
      }
      else {
        uVar7 = 1;
      }
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
    else {
      uVar7 = 1;
    }
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1066ff728; end: 1066ff887; -[SCLensExplorerCategoryPageLayoutProvider createCompositionalLayoutWithSectionProvider:orthogonalScrollHandler:] */

void FUN_1066ff728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1066ff888;
  puStack_78 = &UNK_1109363f0;
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retainBlock(&puStack_90);
  puVar2 = PTR__OBJC_CLASS___UICollectionViewCompositionalLayout_1126cd3b0;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionViewCompositionalLayout_1126cd3b0);
  func_0x00010c043540();
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066ff888; end: 1066ff9bb;  */

void FUN_1066ff888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar1;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c14da60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      else {
        uVar4 = *(ulong *)(lVar2 + 0x18);
        func_0x00010c155ee0();
        if ((uVar4 & 1) == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c156b00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(uVar5);
        }
        lVar6 = lVar2;
        func_0x00010bde4180(lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}


