/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a89448; end: 107a8958f; -[SCLensModularReplyCameraPresenter _showAlertAndRemoveScopeForError:] */

void FUN_107a89448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aed78;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010beff580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c10f940(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a89590; end: 107a895bb;  */

void FUN_107a89590(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a895bc; end: 107a895f3; -[SCLensModularReplyCameraPresenter .cxx_destruct] */

void FUN_107a895bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a895f4; end: 107a89697; -[SCLensesCollectionModularCameraPresenter initWithLensesModularCameraScopeExposer:scopeServices:] */

undefined1 *
FUN_107a895f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9960;
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



/* Entry: 107a89698; end: 107a89767; -[SCLensesCollectionModularCameraPresenter presentCollectionCameraWithPresentingViewController:collectionId:preselectedLensId:replyParameters:dismissBlock:] */

void FUN_107a89698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_7;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf236e0(uVar1,param_2,param_3,param_1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a89768; end: 107a8986f; -[SCLensesCollectionModularCameraPresenter presentCollectionCameraFromViewController:collectionId:basicReplyParameters:dismissBlock:] */

void FUN_107a89768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6d8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0460c0();
  puVar2 = PTR_PTR_1126b0100;
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
  _objc_release(param_5);
  func_0x00010c10baa0(param_1,param_2,param_3,param_4,0,puVar2,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a89870; end: 107a89873; -[SCLensesCollectionModularCameraPresenter dismissCameraViewControllerAnimated:] */

void FUN_107a89870(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willEndWorkflow_1125985b0);
  return;
}



/* Entry: 107a89874; end: 107a898ef; -[SCLensesCollectionModularCameraPresenter willFinishWorkflowWithScope:] */

void FUN_107a89874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071ae0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beeb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willEndWorkflow_1125985b0);
    return;
  }
  return;
}



/* Entry: 107a898f0; end: 107a8997b; -[SCLensesCollectionModularCameraPresenter willFinishWorkflowWithScope:error:] */

void FUN_107a898f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071ae0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010beb78a0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a8997c; end: 107a899bb; -[SCLensesCollectionModularCameraPresenter didFinishWorkflowWithScope:] */

void FUN_107a8997c(long param_1)

{
  undefined8 uVar1;
  
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



/* Entry: 107a899bc; end: 107a89a03; -[SCLensesCollectionModularCameraPresenter _willEndWorkflow] */

void FUN_107a899bc(long param_1)

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



/* Entry: 107a89a04; end: 107a89b4b; -[SCLensesCollectionModularCameraPresenter _showAlertAndRemoveScopeForError:] */

void FUN_107a89a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aed78;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010beff580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c10f940(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a89b4c; end: 107a89b77;  */

void FUN_107a89b4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a89b78; end: 107a89bb3; -[SCLensesCollectionModularCameraPresenter .cxx_destruct] */

void FUN_107a89b78(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a89bb4; end: 107a89c57; -[SCLensesModularCameraPresenter initWithLensesModularCameraMultiScopeExposer:scopeServices:] */

undefined1 *
FUN_107a89bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9968;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a89c58; end: 107a89cfb; -[SCLensesModularCameraPresenter initWithLensesModularCameraScopeExposer:scopeServices:] */

undefined1 *
FUN_107a89c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9968;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a89cfc; end: 107a89d6f; -[SCLensesModularCameraPresenter dealloc] */

void FUN_107a89cfc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_1126f9968;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107a89d70; end: 107a89d77; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:] */

void FUN_107a89d70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_1126207a8);
  return;
}



/* Entry: 107a89d78; end: 107a89d87; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:enableARBar:] */

void FUN_107a89d78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620788);
  return;
}



/* Entry: 107a89d88; end: 107a89dab; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:preselectedLensId:onCarouselEndBlock:] */

void FUN_107a89d88(void)

{
  func_0x00010c10b680();
  return;
}



/* Entry: 107a89dac; end: 107a89eeb; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:preselectedLensId:onCarouselEndBlock:enableARBar:] */

void FUN_107a89dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126d0ef0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010bff8d60();
  _objc_release(param_7);
  lVar3 = param_5;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c243400();
  _objc_release(lVar3);
  uVar1 = 0xb;
  if (lVar4 != 0x2e) {
    uVar1 = 0;
  }
  func_0x00010be7a6c0(param_1,param_2,param_3,param_4,param_5,uVar1,param_6,puVar2,param_8);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a89eec; end: 107a89f17; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:lensModularCameraScopeConfiguration:] */

void FUN_107a89eec(void)

{
  func_0x00010be7a6c0();
  return;
}



/* Entry: 107a89f18; end: 107a89f1f; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:dismissBlock:] */

void FUN_107a89f18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620788);
  return;
}



/* Entry: 107a89f20; end: 107a89f4b; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:dismissBlock:enableARBar:] */

void FUN_107a89f20(void)

{
  func_0x00010c10b5e0();
  return;
}



/* Entry: 107a89f4c; end: 107a89f6f; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:singleLensModeEnabled:dismissBlock:] */

void FUN_107a89f4c(void)

{
  func_0x00010c10b5e0();
  return;
}



/* Entry: 107a89f70; end: 107a8a087; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:singleLensModeEnabled:dismissBlock:enableARBar:] */

void FUN_107a89f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010bf16600(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6ca0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0ef0;
  _objc_alloc(PTR_PTR_1126d0ef0);
  func_0x00010bff8d60();
  func_0x00010be7a6c0(param_1,param_2,param_3,param_4,param_5,param_6,param_8,puVar2,0);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a8a088; end: 107a8a08f; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:eventsHandler:] */

void FUN_107a8a088(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_1126207d0);
  return;
}



/* Entry: 107a8a090; end: 107a8a123; -[SCLensesModularCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:eventsHandler:enableARBar:] */

void FUN_107a8a090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x30,param_6);
  func_0x00010c10b620(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a8a124; end: 107a8a127; -[SCLensesModularCameraPresenter dismissCameraAnimated:] */

void FUN_107a8a124(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willEndWorkflow_1125985b0);
  return;
}



/* Entry: 107a8a128; end: 107a8a12b; -[SCLensesModularCameraPresenter dismissCameraWithError:] */

void FUN_107a8a128(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showAlertAndRemoveScopeForError_11258b7d0);
  return;
}



/* Entry: 107a8a12c; end: 107a8a16b; -[SCLensesModularCameraPresenter willFinishWorkflowWithScope:didSendSnap:] */

void FUN_107a8a12c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071ae0();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x38) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010beeb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willEndWorkflow_1125985b0);
    return;
  }
  return;
}



/* Entry: 107a8a16c; end: 107a8a173; -[SCLensesModularCameraPresenter willFinishWorkflowWithScope:error:] */

void FUN_107a8a16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showAlertAndRemoveScopeForError_11258b7d0,param_4);
  return;
}



/* Entry: 107a8a174; end: 107a8a1b7; -[SCLensesModularCameraPresenter didFinishWorkflowWithScope:] */

void FUN_107a8a174(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined1 *)(param_1 + 0x38));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107a8a1b8; end: 107a8a1ff; -[SCLensesModularCameraPresenter workflowWithScope:didSendEvent:] */

void FUN_107a8a1b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d09a0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a8a200; end: 107a8a30b; -[SCLensesModularCameraPresenter _presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:dismissBlock:lensModularCameraScopeConfiguration:onCarouselEndBlock:] */

void FUN_107a8a200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf23700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s_exposeScope__1125c4f30,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107a8a30c; end: 107a8a363; -[SCLensesModularCameraPresenter _willEndWorkflow] */

void FUN_107a8a30c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      func_0x00010c12e1e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107a8a364; end: 107a8a48f; -[SCLensesModularCameraPresenter _showAlertAndRemoveScopeForError:] */

void FUN_107a8a364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aed78;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010beff580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10fd00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8a490; end: 107a8a4bb;  */

void FUN_107a8a490(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a8a4bc; end: 107a8a517; -[SCLensesModularCameraPresenter .cxx_destruct] */

void FUN_107a8a4bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a8a518; end: 107a8a6e3; +[SIGAlertDialog alertForModulerCameraErrorWithCompletion:] */

void FUN_107a8a518(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107a8a6e4;
  puStack_70 = &UNK_11084e500;
  lStack_68 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc46f8;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc46f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar2);
  puVar5 = puVar4;
  func_0x00010c29bf00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(lStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 107a8a6e4; end: 107a8a6f3;  */

void FUN_107a8a6e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107a8a6f4; end: 107a8a80f; -[SCLensesCollectionModularCameraScope initWithPresentingViewController:workflowDelegate:collectionId:preselectedLensId:replyParameters:] */

undefined1 *
FUN_107a8a6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9970;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8a810; end: 107a8a827; -[SCLensesCollectionModularCameraScope presentingViewController] */

void FUN_107a8a810(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8a828; end: 107a8a83f; -[SCLensesCollectionModularCameraScope workflowDelegate] */

void FUN_107a8a828(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8a840; end: 107a8a847; -[SCLensesCollectionModularCameraScope collectionId] */

undefined8 FUN_107a8a840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a8a848; end: 107a8a84f; -[SCLensesCollectionModularCameraScope preselectedLensId] */

undefined8 FUN_107a8a848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a8a850; end: 107a8a857; -[SCLensesCollectionModularCameraScope replyParameters] */

undefined8 FUN_107a8a850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a8a858; end: 107a8a8a3; -[SCLensesCollectionModularCameraScope .cxx_destruct] */

void FUN_107a8a858(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a8a8a4; end: 107a8a99f; -[SCMusicFeatureLaunchServices initWithTopicViewerPresenter:musicCameraPresenter:musicSyncActionHandlerPresenter:topicViewerMusicScopeBuilderServices:] */

undefined1 *
FUN_107a8a8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9978;
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



/* Entry: 107a8a9a0; end: 107a8a9a7; -[SCMusicFeatureLaunchServices topicViewerPresenter] */

undefined8 FUN_107a8a9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a8a9a8; end: 107a8a9af; -[SCMusicFeatureLaunchServices musicCameraPresenter] */

undefined8 FUN_107a8a9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a8a9b0; end: 107a8a9b7; -[SCMusicFeatureLaunchServices musicSyncActionHandlerPresenter] */

undefined8 FUN_107a8a9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a8a9b8; end: 107a8a9bf; -[SCMusicFeatureLaunchServices topicViewerMusicScopeBuilderServices] */

undefined8 FUN_107a8a9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a8a9c0; end: 107a8aa07; -[SCMusicFeatureLaunchServices .cxx_destruct] */

void FUN_107a8a9c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a8aa08; end: 107a8ab17; -[SCMusicCameraScope initWithPresentingViewController:replyConfiguration:cameraScopeDismissalDelegate:trackId:sourcePageType:pickerSessionId:startOffsetMs:isMemoriesButtonEnabled:] */

undefined1 *
FUN_107a8aa08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f9980;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_8);
    *(undefined4 *)((long)puVar1 + 0xc) = param_9;
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8ab18; end: 107a8ab2f; -[SCMusicCameraScope presentingViewController] */

void FUN_107a8ab18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8ab30; end: 107a8ab37; -[SCMusicCameraScope replyConfiguration] */

undefined8 FUN_107a8ab30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a8ab38; end: 107a8ab4f; -[SCMusicCameraScope cameraScopeDismissalDelegate] */

void FUN_107a8ab38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8ab50; end: 107a8ab57; -[SCMusicCameraScope trackId] */

undefined8 FUN_107a8ab50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a8ab58; end: 107a8ab5f; -[SCMusicCameraScope sourcePageType] */

undefined8 FUN_107a8ab58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a8ab60; end: 107a8ab77; -[SCMusicCameraScope pickerSessionId] */

void FUN_107a8ab60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8ab78; end: 107a8ab7f; -[SCMusicCameraScope startOffsetMs] */

undefined4 FUN_107a8ab78(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107a8ab80; end: 107a8ab87; -[SCMusicCameraScope isMemoriesButtonEnabled] */

undefined1 FUN_107a8ab80(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a8ab88; end: 107a8abc3; -[SCMusicCameraScope .cxx_destruct] */

void FUN_107a8ab88(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107a8abc4; end: 107a8ac8f; -[SCMusicSyncActionHandlerScope initWithPresentingViewController:delegate:preselectedCameraRollAssets:viewSourceType:] */

undefined1 *
FUN_107a8abc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f9988;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8ac90; end: 107a8aca7; -[SCMusicSyncActionHandlerScope presentingViewController] */

void FUN_107a8ac90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8aca8; end: 107a8acbf; -[SCMusicSyncActionHandlerScope delegate] */

void FUN_107a8aca8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8acc0; end: 107a8acc7; -[SCMusicSyncActionHandlerScope preselectedCameraRollAssets] */

undefined8 FUN_107a8acc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a8acc8; end: 107a8accf; -[SCMusicSyncActionHandlerScope viewSourceType] */

undefined4 FUN_107a8acc8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107a8acd0; end: 107a8ad03; -[SCMusicSyncActionHandlerScope .cxx_destruct] */

void FUN_107a8acd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107a8ad04; end: 107a8adab; -[SCMusicAVPlayerPeriodicTimeObservable init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107a8ad04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112769230);
    *(undefined **)((long)puVar1 + (long)_DAT_112769230) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112769234);
    *(undefined **)((long)puVar1 + (long)_DAT_112769234) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a8adac; end: 107a8ae43; -[SCMusicAVPlayerPeriodicTimeObservable setPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8adac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112769234);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a8ae44;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8ae44; end: 107a8ae7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8ae44(long param_1)

{
  func_0x00010be8da80(*(undefined8 *)(param_1 + 0x20));
  _objc_storeWeak(*(long *)(param_1 + 0x20) + (long)_DAT_112769238,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addTimeObserverIfNeeded_11254fc08);
  return;
}



/* Entry: 107a8ae80; end: 107a8aeef; -[SCMusicAVPlayerPeriodicTimeObservable _removeTimeObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8ae80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276923c;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1 + _DAT_112769238;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12eb40();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107a8aef0; end: 107a8af0b; -[SCMusicAVPlayerPeriodicTimeObservable _removeTimeObserverIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8aef0(long param_1)

{
  if (0 < *(long *)(param_1 + _DAT_112769240)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTimeObserver_112581040);
  return;
}



/* Entry: 107a8af0c; end: 107a8b05b; -[SCMusicAVPlayerPeriodicTimeObservable _addTimeObserverIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8af0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11276923c;
  if ((*(long *)(param_1 + lVar5) == 0) && (0 < *(long *)(param_1 + _DAT_112769240))) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1 + _DAT_112769238;
    _objc_loadWeakRetained();
    _CMTimeMake(auStack_60,0x14,600);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112769234);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_48);
    lVar3 = lVar1;
    func_0x00010befa7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107a8b05c; end: 107a8b0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8b05c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112769230);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107a8b0ec; end: 107a8b1bf; -[SCMusicAVPlayerPeriodicTimeObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8b0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112769230);
  _objc_retain(param_3);
  func_0x00010c25fd20(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107a8b1c0;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_112769234));
  puStack_60 = PTR_PTR_1126f9990;
  plVar1 = &lStack_68;
  lStack_68 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_subscribe__112675970,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 107a8b1c0; end: 107a8b1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8b1c0(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769240) =
       *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769240) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addTimeObserverIfNeeded_11254fc08);
  return;
}



/* Entry: 107a8b1e0; end: 107a8b29b; -[SCMusicAVPlayerPeriodicTimeObservable unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8b1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_unsubscribe__11267e4a8;
  puStack_38 = PTR_PTR_1126f9990;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c282a00(*(undefined8 *)(param_1 + _DAT_112769230));
  _objc_release(param_3);
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_112769234));
  return;
}



/* Entry: 107a8b29c; end: 107a8b2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8b29c(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769240) =
       *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769240) + -1;
                    /* WARNING: Could not recover jumptable at 0x00010be8dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeTimeObserverIfNeeded_112581048);
  return;
}



/* Entry: 107a8b2bc; end: 107a8b2db; -[SCMusicAVPlayerPeriodicTimeObservable player] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8b2bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112769238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8b2dc; end: 107a8b337; -[SCMusicAVPlayerPeriodicTimeObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8b2dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112769238);
  _objc_storeStrong(param_1 + _DAT_11276923c,0);
  _objc_storeStrong(param_1 + _DAT_112769234,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769230,0);
  return;
}



/* Entry: 107a8b338; end: 107a8b5f7; -[SCMusicAudioPlayer initWithAudioSession:assetProvider:shouldLoop:shouldDisableScreenLockWhilePlaying:muteSwitchChecker:] */

undefined1 *
FUN_107a8b338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,int param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9998;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x92) = param_5;
    *(undefined8 *)((long)puVar1 + 0x70) = 0x3ff0000000000000;
    puVar3 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d6278;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__kCMTimeInvalid_110348648;
    uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    *(undefined8 *)((long)puVar1 + 0x50) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x58) = *(undefined8 *)(puVar3 + 0x10);
    *(undefined4 *)((long)puVar1 + 0x94) = 0x3f800000;
    if (param_6 != 0) {
      puVar3 = PTR_PTR_1126c1838;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
      *(undefined **)((long)puVar1 + 0x78) = puVar3;
      _objc_release(uVar2);
    }
    if (*(long *)((long)puVar1 + 8) != 0) {
      func_0x00010bef9980();
      puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8b5f8; end: 107a8b64f; -[SCMusicAudioPlayer prepare] */

void FUN_107a8b5f8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8b650;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8b650; end: 107a8b6b7;  */

void FUN_107a8b650(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be3b8c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bea9d20(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c252d60();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c10a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((float)*(double *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x38),
               PTR_s_prerollAtRate_completionHandler__112620418,0);
    return;
  }
  *(undefined1 *)(lVar2 + 100) = 1;
  return;
}



/* Entry: 107a8b6b8; end: 107a8b6bf; -[SCMusicAudioPlayer play] */

void FUN_107a8b6b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x3ff0000000000000,param_1,PTR_s_playAtRate__11261d300);
  return;
}



/* Entry: 107a8b6c0; end: 107a8b6f7; -[SCMusicAudioPlayer playAtRate:] */

void FUN_107a8b6c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uStack_30 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  uStack_20 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  func_0x00010c0fea60(param_1,param_2,&uStack_30);
  return;
}



/* Entry: 107a8b6f8; end: 107a8b72b; -[SCMusicAudioPlayer playWithHostTime:] */

void FUN_107a8b6f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c0fea60(0x3ff0000000000000,param_1,param_2,&uStack_30);
  return;
}



/* Entry: 107a8b72c; end: 107a8b7c7; -[SCMusicAudioPlayer playWithHostTime:rate:] */

void FUN_107a8b72c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_2 + 0x70) = param_1;
  *(undefined1 *)(param_2 + 0x91) = 1;
  func_0x00010c1a9bc0(*(undefined8 *)(param_2 + 0x78),param_3,1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a8b7c8;
  puStack_60 = &UNK_110870f70;
  uStack_40 = param_4[1];
  uStack_48 = *param_4;
  uStack_38 = param_4[2];
  lStack_58 = param_2;
  uStack_50 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_78);
  return;
}



/* Entry: 107a8b7c8; end: 107a8b7ef;  */

void FUN_107a8b7c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 99) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8b7f0; end: 107a8b85f; -[SCMusicAudioPlayer pause] */

void FUN_107a8b7f0(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + 0x91) = 0;
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0x78),param_2,0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107a8b860;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  return;
}



/* Entry: 107a8b860; end: 107a8b88b;  */

void FUN_107a8b860(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(puVar1 + 0x10);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 99) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8b88c; end: 107a8b8f3; -[SCMusicAudioPlayer seekToTime:] */

void FUN_107a8b88c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107a8b8f4;
  puStack_38 = &UNK_11084e430;
  uStack_20 = param_3[1];
  uStack_28 = *param_3;
  uStack_18 = param_3[2];
  lStack_30 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_50);
  return;
}



/* Entry: 107a8b8f4; end: 107a8ba0b;  */

void FUN_107a8b8f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(puVar1 + 0x10);
  *(long *)(*(long *)(param_1 + 0x20) + 0x68) = *(long *)(*(long *)(param_1 + 0x20) + 0x68) + 1;
  func_0x00010be3b8c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bedd380(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_58,auStack_38);
  func_0x00010c157280(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a8ba0c; end: 107a8ba37;  */

void FUN_107a8ba0c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be74fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a8ba38; end: 107a8ba5f; -[SCMusicAudioPlayer periodicTimeObservable] */

void FUN_107a8ba38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a8ba60; end: 107a8bb33; -[SCMusicAudioPlayer duration] */

void FUN_107a8ba60(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_58;
  uStack_58 = 0;
  uStack_48 = 0x3810000000;
  pcStack_40 = "";
  uStack_30 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uStack_38 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  uStack_28 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107a8bb34;
  puStack_70 = &UNK_11084b9d0;
  lStack_68 = param_2;
  puStack_50 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_88);
  uVar1 = puStack_50[4];
  param_1[1] = puStack_50[5];
  *param_1 = uVar1;
  param_1[2] = puStack_50[6];
  __Block_object_dispose(&uStack_58,8);
  return;
}



/* Entry: 107a8bb34; end: 107a8bb8b;  */

void FUN_107a8bb34(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010be3b8c0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x40) != 0) {
    func_0x00010bf8b160(&uStack_38);
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(undefined8 *)(lVar1 + 0x28) = uStack_30;
    *(undefined8 *)(lVar1 + 0x20) = uStack_38;
    *(undefined8 *)(lVar1 + 0x30) = uStack_28;
  }
  return;
}



/* Entry: 107a8bb8c; end: 107a8bc43; -[SCMusicAudioPlayer setVolume:] */

void FUN_107a8bb8c(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}


