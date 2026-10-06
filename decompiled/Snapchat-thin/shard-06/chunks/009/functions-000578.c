/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f136fc; end: 104f1376b;  */

void FUN_104f136fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f1376c; end: 104f1383b;  */

void FUN_104f1376c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7daa0(lVar1);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f1383c; end: 104f1389f;  */

void FUN_104f1383c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 104f138a0; end: 104f13a83; -[SCMemoriesQuickPostRouteActionsImpl _presentPreviewWithSnapDoc:isCameraRollPick:fromViewController:previewControllerDelegate:previewWorkflowDelegate:uiViewControllerTransitioningDelegate:] */

void FUN_104f138a0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010bf22420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar10);
  lVar3 = *(long *)(param_1 + 0x80);
  func_0x00010c2917c0();
  lVar4 = *(long *)(param_1 + 0x80);
  func_0x00010c2917c0();
  if (lVar3 == 0xf) {
    uVar2 = 0;
    uVar10 = 0;
    uVar1 = 0x76;
    if (param_4 != 0) {
      uVar1 = 0x77;
    }
  }
  else {
    if (lVar4 == 0xe) {
      uVar1 = 0x45;
      if (param_4 != 0) {
        uVar1 = 0x46;
      }
    }
    else {
      uVar1 = 0xb;
      if (param_4 == 0) {
        uVar1 = 0xc;
      }
    }
    uVar2 = 3;
    uVar10 = param_8;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar10);
  func_0x00010c131bc0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c0d36c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c2917c0();
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c27c4a0();
  func_0x00010c10dc80(uVar8,param_2,param_3,0,param_5,0,uVar9,uVar5,uVar10,uVar2,uVar6,0,uVar1,uVar7
                     );
  _objc_release(uVar10);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 104f13a84; end: 104f13b23; -[SCMemoriesQuickPostRouteActionsImpl dismissMemoriesPicker] */

void FUN_104f13a84(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf82f40();
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    _objc_release(uVar1);
    lVar3 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104f13b24; end: 104f13c27; -[SCMemoriesQuickPostRouteActionsImpl .cxx_destruct] */

void FUN_104f13b24(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f13c28; end: 104f13cfb; -[SCMemoriesQuickPostWorkflow initWithRouter:memoriesQuickPostScopeDelegate:networkConnectivityMonitor:userContext:] */

undefined1 *
FUN_104f13c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5008;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f13cfc; end: 104f13d53; -[SCMemoriesQuickPostWorkflow beginWorkflow] */

void FUN_104f13cfc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f13d54;
  puStack_20 = &UNK_11085af18;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104f13d54; end: 104f13d6b;  */

void FUN_104f13d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c10d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentMemoriesPickerWithDelegat_112620e40,uVar1,uVar1,uVar1,uVar1);
  return;
}



/* Entry: 104f13d6c; end: 104f13d73; -[SCMemoriesQuickPostWorkflow requestToDismissPage] */

void FUN_104f13d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestToDismissPageWithDidSend_112582058,0)
  ;
  return;
}



/* Entry: 104f13d74; end: 104f13dcb; -[SCMemoriesQuickPostWorkflow didPressCameraButton] */

void FUN_104f13d74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f13dcc;
  puStack_20 = &UNK_11085af18;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104f13dcc; end: 104f13e3b;  */

void FUN_104f13dcc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ulong *)(lVar1 + 0x20) < 0x12) || (*(ulong *)(lVar1 + 0x20) - 0x13 < 3)) {
    func_0x00010bf83d60(param_2);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  lVar1 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c24e3c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f13e3c; end: 104f13eab; -[SCMemoriesQuickPostWorkflow didPresentPage] */

void FUN_104f13e3c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0c9580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f13eac; end: 104f13eaf; -[SCMemoriesQuickPostWorkflow galleryPreviewControllerWillDismiss:] */

void FUN_104f13eac(void)

{
  return;
}



/* Entry: 104f13eb0; end: 104f13eb3; -[SCMemoriesQuickPostWorkflow galleryPreviewControllerDidDismiss:] */

void FUN_104f13eb0(void)

{
  return;
}



/* Entry: 104f13eb4; end: 104f13eb7; -[SCMemoriesQuickPostWorkflow galleryPreviewControllerDidCancel:] */

void FUN_104f13eb4(void)

{
  return;
}



/* Entry: 104f13eb8; end: 104f13f23; -[SCMemoriesQuickPostWorkflow galleryPreviewController:presentingViewController:didFailToLoadContent:] */

void FUN_104f13eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf48f60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    func_0x000108df89f0(param_4);
  }
  else {
    func_0x000108df7438();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f13f24; end: 104f13f2b; -[SCMemoriesQuickPostWorkflow galleryPreviewControllerDidSendOrPostContent] */

void FUN_104f13f24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestToDismissPageWithDidSend_112582058,1)
  ;
  return;
}



/* Entry: 104f13f2c; end: 104f13f33; -[SCMemoriesQuickPostWorkflow animationControllerForPresentedController:presentingController:sourceController:] */

undefined8 FUN_104f13f2c(void)

{
  return 0;
}



/* Entry: 104f13f34; end: 104f13f3b; -[SCMemoriesQuickPostWorkflow animationControllerForDismissedController:] */

undefined8 FUN_104f13f34(void)

{
  return 0;
}



/* Entry: 104f13f3c; end: 104f13f3f; -[SCMemoriesQuickPostWorkflow didCancelFromPreview:] */

void FUN_104f13f3c(void)

{
  return;
}



/* Entry: 104f13f40; end: 104f13f47; -[SCMemoriesQuickPostWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_104f13f40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestToDismissPageWithDidSend_112582058,1)
  ;
  return;
}



/* Entry: 104f13f48; end: 104f13f4f; -[SCMemoriesQuickPostWorkflow didPostStoryWithStoryTypes:] */

void FUN_104f13f48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestToDismissPageWithDidSend_112582058,1)
  ;
  return;
}



/* Entry: 104f13f50; end: 104f13f97; -[SCMemoriesQuickPostWorkflow _requestToDismissPageWithDidSend:] */

void FUN_104f13f50(long param_1,undefined8 param_2)

{
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_11085af68);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c9560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f13f98; end: 104f13f9f;  */

void FUN_104f13f98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissMemoriesPicker_1125be900);
  return;
}



/* Entry: 104f13fa0; end: 104f13fd7; -[SCMemoriesQuickPostWorkflow .cxx_destruct] */

void FUN_104f13fa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f13fd8; end: 104f1400b; -[SCMemoriesBannerPluginViewModel type] */

undefined4 FUN_104f13fd8(long param_1)

{
  undefined4 uVar1;
  
  func_0x00010c113c80();
  if (param_1 - 1U < 10) {
    uVar1 = *(undefined4 *)(&UNK_10dd8d6b8 + (param_1 - 1U) * 4);
  }
  else {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 104f1400c; end: 104f1415f;  */

void FUN_104f1400c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126b2538;
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d5080();
  _objc_release(in_x4);
  puVar2 = PTR_PTR_1126b2540;
  _objc_alloc(PTR_PTR_1126b2540);
  func_0x00010c00d640();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227d80(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227da0(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2247c0(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2548;
  _objc_alloc(PTR_PTR_1126b2548);
  func_0x00010c061d40();
  _objc_release(in_x3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f14160; end: 104f14207; -[SCMemoriesSnapsTabBannerTrayEntryPoint begin] */

void FUN_104f14160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_104f14208();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8f40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar4 != 0) && (uVar1 = param_1, func_0x00010be44360(), (int)uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be8e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__renderBannerAsSimpleView_1125811b0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd01b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attachBannerTray_112551a08);
  return;
}



/* Entry: 104f14208; end: 104f1422b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f14208(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716f1c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1422c; end: 104f144a7; -[SCMemoriesSnapsTabBannerTrayEntryPoint _attachBannerTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1422c(long param_1,undefined8 param_2)

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
  long lVar15;
  long lVar16;
  undefined8 uStack_a8;
  
  puVar1 = PTR_PTR_1126b2550;
  _objc_alloc();
  lVar2 = param_1;
  FUN_104f144a8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_104f144a8();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_104f144a8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf8a980();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112716f08;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar13;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_a8 = 0;
    lVar14 = 0;
  }
  else {
    uStack_a8 = param_1 + _DAT_112716f14;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_112716f18;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar14;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_104f14208();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
    lVar16 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112716f00;
    _objc_loadWeakRetained();
    lVar16 = param_1 + _DAT_112716f04;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar16;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056aa0(puVar1,param_2,lVar3,param_1,lVar5,lVar7,lVar8,uStack_a8,lVar9,lVar11,lVar15,
                      lVar12);
  _objc_release(lVar12);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(uStack_a8);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c189400(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f144a8; end: 104f144cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f144a8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716f10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f144cc; end: 104f14567; -[SCMemoriesSnapsTabBannerTrayEntryPoint _isStorageBannerViewModel] */

bool FUN_104f144cc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  FUN_104f144a8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c113c80();
    if (((lVar3 == 0) || (lVar3 = lVar2, func_0x00010c113c80(), lVar3 == 2)) ||
       (lVar3 = lVar2, func_0x00010c113c80(), lVar3 == 5)) {
      bVar1 = true;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c113c80(lVar2);
      bVar1 = lVar3 == 1;
    }
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 104f14568; end: 104f145cf; -[SCMemoriesSnapsTabBannerTrayEntryPoint _isLockedSnapUpsellViewModel] */

bool FUN_104f14568(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  FUN_104f144a8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c113c80(lVar2);
    bVar1 = lVar3 == 5;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 104f145d0; end: 104f14607; -[SCMemoriesSnapsTabBannerTrayEntryPoint _renderBannerAsSimpleView] */

void FUN_104f145d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be41a60();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd08f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attachUnifiedLockedSnapUpsellSi_112551bd8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attachStorageFullSimpleView_112551b50);
  return;
}



/* Entry: 104f14608; end: 104f14a23; -[SCMemoriesSnapsTabBannerTrayEntryPoint _attachStorageFullSimpleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f14608(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR_PTR_1126b2558;
  _objc_alloc(PTR_PTR_1126b2558);
  func_0x00010bff0120();
  lVar2 = param_1 + _DAT_112716f00;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2954a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c120(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112716f04;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c9800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104f14a24;
  puStack_80 = &UNK_11085af88;
  lStack_78 = lVar5;
  func_0x00010c1d08a0(puVar1);
  _objc_initWeak(auStack_a0,param_1);
  puStack_c8 = puVar7;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104f14a2c;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010c1d5080(puVar1);
  _objc_copyWeak(auStack_d0,auStack_a0);
  func_0x00010c1d5120(puVar1);
  lVar2 = param_1;
  FUN_104f144a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b2560;
  _objc_alloc(PTR_PTR_1126b2560);
  func_0x00010c27dd80(lVar3);
  func_0x00010c055880(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25dfa0(lVar3);
  func_0x00010c0df840(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = lVar3;
  func_0x00010c27ec40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fe80();
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201500(puVar6);
  _objc_release(puVar7);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b2568;
  _objc_alloc(PTR_PTR_1126b2568);
  lVar2 = param_1 + _DAT_112716f08;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar7);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar10 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010c222380();
  FUN_104f144a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(lVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f14a24; end: 104f14a2b;  */

void FUN_104f14a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 104f14a2c; end: 104f14a93;  */

void FUN_104f14a2c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e7000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f14a94; end: 104f14ceb; -[SCMemoriesSnapsTabBannerTrayEntryPoint _attachUnifiedLockedSnapUpsellSimpleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f14a94(long param_1)

{
  long lVar1;
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
  undefined *puVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  FUN_104f144a8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  lVar3 = lVar2;
  func_0x00010c0d9700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  lVar5 = lVar2;
  func_0x00010c0d9760(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c067fc0();
  lVar7 = lVar2;
  func_0x00010c2a22a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c067fc0();
  lVar1 = param_1 + _DAT_112716f08;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f14cec;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  FUN_104f1400c(lVar4,lVar6,lVar8,lVar11,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar12 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010c222380();
  FUN_104f144a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  return;
}



/* Entry: 104f14cec; end: 104f14d1f;  */

void FUN_104f14cec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e7000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f14d20; end: 104f14d6f; -[SCMemoriesSnapsTabBannerTrayEntryPoint end] */

void FUN_104f14d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bde32e0(param_1,param_2,0);
  puStack_28 = PTR_PTR_1126e5010;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f14d70; end: 104f14d77; -[SCMemoriesSnapsTabBannerTrayEntryPoint snapsTabBannerTrayHostViewControllerDidDismiss] */

void FUN_104f14d70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde32f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeScopeWithIsExplicitDism_112556658,1)
  ;
  return;
}



/* Entry: 104f14d78; end: 104f14def; -[SCMemoriesSnapsTabBannerTrayEntryPoint snapsTabBannerDidPressCTA] */

void FUN_104f14d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_104f144a8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f144a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2459c0(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f14df0; end: 104f14ec7; -[SCMemoriesSnapsTabBannerTrayEntryPoint _completeScopeWithIsExplicitDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f14df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_112716f0c) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112716f0c) = 1;
  lVar1 = param_1 + _DAT_112716f10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112716f10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112716f10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c245980(lVar2,param_2,param_1,param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f14ec8; end: 104f14f1f; -[SCMemoriesSnapsTabBannerTrayEntryPoint onTapCTA] */

void FUN_104f14ec8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f14f20;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f14f20; end: 104f14f27;  */

void FUN_104f14f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2459b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_snapsTabBannerDidPressCTA_11266f090);
  return;
}



/* Entry: 104f14f28; end: 104f14f7f; -[SCMemoriesSnapsTabBannerTrayEntryPoint onTapDismiss] */

void FUN_104f14f28(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f14f80;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f14f80; end: 104f14f87;  */

void FUN_104f14f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2459f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_snapsTabBannerTrayHostViewContro_11266f0a0);
  return;
}



/* Entry: 104f14f88; end: 104f14f93; -[SCMemoriesSnapsTabBannerTrayEntryPoint pushToValdiMarshaller:] */

void FUN_104f14f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 104f14f94; end: 104f15007; -[SCMemoriesSnapsTabBannerTrayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f14f94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112716f04);
  _objc_destroyWeak(param_1 + _DAT_112716f1c);
  _objc_destroyWeak(param_1 + _DAT_112716f00);
  _objc_destroyWeak(param_1 + _DAT_112716f18);
  _objc_destroyWeak(param_1 + _DAT_112716f14);
  _objc_destroyWeak(param_1 + _DAT_112716f08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716f10);
  return;
}



/* Entry: 104f15008; end: 104f15297; -[SCGallerySnapsTabBannerHostViewController initWithUIContainer:delegate:viewModel:dreamsViewModel:valdiRuntimeProvider:composerGrpcServices:blizzardLogger:memoriesExperimentService:memoriesMonetizationServices:memoriesLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104f15008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126e5018;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112716f20,param_4);
    lVar4 = (long)_DAT_112716f24;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f28;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f2c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f30;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f34;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f38;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f3c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f40;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716f44;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112716f48);
    *(undefined **)((long)puVar1 + (long)_DAT_112716f48) = puVar3;
    _objc_release(uVar2);
    func_0x00010bea9ce0(puVar1);
  }
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



/* Entry: 104f15298; end: 104f152d3; -[SCGallerySnapsTabBannerHostViewController _setUpViews] */

void FUN_104f15298(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be41a40();
  if ((uVar1 & 1) == 0) {
    func_0x00010bea8ee0(param_1);
  }
  else {
    func_0x00010bea9c60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd01d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attachBannerTrayAndPresent_112551a10);
  return;
}



/* Entry: 104f152d4; end: 104f1540f; -[SCGallerySnapsTabBannerHostViewController _attachBannerTrayAndPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f152d4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126b2570;
  _objc_alloc();
  lVar4 = (long)_DAT_112716f4c;
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112716f2c);
  func_0x00010c27dd80();
  if (iVar1 != 4) {
    func_0x00010be44360(param_1);
  }
  func_0x00010c061480();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112716f50);
  *(undefined **)(param_1 + _DAT_112716f50) = puVar2;
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c295200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2a15a0(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f15410; end: 104f1549f;  */

void FUN_104f15410(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f154a0;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f154a0; end: 104f15533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f154a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7f0e0(param_1);
    lVar4 = (long)_DAT_112716f2c;
    uVar1 = *(ulong *)(param_1 + lVar4);
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010beee460(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7b7e0();
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f15534; end: 104f1593b; -[SCGallerySnapsTabBannerHostViewController _setUpBannerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f15534(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b2558;
  _objc_alloc(PTR_PTR_1126b2558);
  func_0x00010bff0120();
  lVar7 = param_1;
  func_0x00010be44360();
  if ((int)lVar7 != 0) {
    lVar7 = (long)_DAT_112716f40;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c2572e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c077f00();
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c2954a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c120(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112716f44);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0c9800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_104f1593c;
      puStack_70 = &UNK_11085af88;
      uStack_68 = uVar4;
      func_0x00010c1d08a0(puVar1);
      _objc_initWeak(auStack_90,param_1);
      puStack_b8 = puVar5;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_104f15944;
      puStack_a0 = &UNK_1108434b0;
      _objc_copyWeak(auStack_98,auStack_90);
      func_0x00010c1d5080(puVar1);
      _objc_copyWeak(auStack_c0,auStack_90);
      func_0x00010c1d5120(puVar1);
      _objc_destroyWeak(auStack_c0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_release(uVar4);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112716f34);
  func_0x00010bfcfa80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112716f38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112716f48);
  func_0x00010c272120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d3940(puVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b2560;
  _objc_alloc();
  lVar7 = (long)_DAT_112716f2c;
  func_0x00010c27dd80(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c055880();
  lVar6 = (long)_DAT_112716f54;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar5;
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25dfa0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c0df840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c27ec40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fe80();
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201500(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b2568;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112716f28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112716f4c);
  *(undefined **)(param_1 + _DAT_112716f4c) = puVar5;
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f1593c; end: 104f15943;  */

void FUN_104f1593c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 104f15944; end: 104f159ab;  */

void FUN_104f15944(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e7000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f159ac; end: 104f15b53; -[SCGallerySnapsTabBannerHostViewController _setUpUnifiedLockedSnapUpsellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f159ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar9 = (long)_DAT_112716f2c;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0d9700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0d9760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c067fc0();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c2a22a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067fc0();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112716f28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f15b54;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  FUN_104f1400c(uVar2,uVar8,uVar5,uVar7,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112716f4c);
  *(undefined8 *)(param_1 + _DAT_112716f4c) = uVar2;
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104f15b54; end: 104f15b87;  */

void FUN_104f15b54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e7000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f15b88; end: 104f15baf; -[SCGallerySnapsTabBannerHostViewController _isLockedSnapUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104f15b88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112716f2c);
  func_0x00010c113c80(lVar1);
  return lVar1 == 5;
}



/* Entry: 104f15bb0; end: 104f15c5f; -[SCGallerySnapsTabBannerHostViewController _presentTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f15bb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c181140(0,*(undefined8 *)(param_1 + _DAT_112716f58));
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar3 = (long)_DAT_112716f5c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219c20(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c167420(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16d3e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c10c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3),
             PTR_s_presentInUIContainer_withPullBar_112620be8,
             *(undefined8 *)(param_1 + _DAT_112716f24),0,8);
  return;
}



/* Entry: 104f15c60; end: 104f15cc7; -[SCGallerySnapsTabBannerHostViewController _isStorageBannerViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104f15c60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112716f2c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c113c80();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c113c80();
    if (lVar1 != 2) {
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010c113c80();
      if (lVar1 != 5) {
        lVar1 = *(long *)(param_1 + lVar2);
        func_0x00010c113c80(lVar1);
        return lVar1 == 1;
      }
    }
  }
  return true;
}



/* Entry: 104f15cc8; end: 104f15ccb; -[SCGallerySnapsTabBannerHostViewController tray:positionDidChange:] */

void FUN_104f15cc8(void)

{
  return;
}



/* Entry: 104f15ccc; end: 104f15d7f; -[SCGallerySnapsTabBannerHostViewController trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f15ccc(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112716f5c);
  *(undefined8 *)(param_1 + _DAT_112716f5c) = 0;
  _objc_release(uVar2);
  cVar1 = *(char *)(param_1 + _DAT_112716f60);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112716f2c);
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010bf7c6c0();
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf74ac0();
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112716f48),param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
  }
  param_1 = param_1 + _DAT_112716f20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2459e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f15d80; end: 104f15f1b; -[SCGallerySnapsTabBannerHostViewController tray:heightForPosition:] */

/* WARNING: Possible PIC construction at 0x000104f15db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104f15db4) */
/* WARNING: Removing unreachable block (ram,0x000104f15dd8) */
/* WARNING: Removing unreachable block (ram,0x000104f15ddc) */
/* WARNING: Removing unreachable block (ram,0x000104f15de0) */
/* WARNING: Removing unreachable block (ram,0x000104f15e38) */
/* WARNING: Removing unreachable block (ram,0x000104f15de4) */
/* WARNING: Removing unreachable block (ram,0x000104f15e10) */
/* WARNING: Removing unreachable block (ram,0x000104f15e14) */
/* WARNING: Removing unreachable block (ram,0x000104f15e50) */
/* WARNING: Removing unreachable block (ram,0x000104f15e18) */
/* WARNING: Removing unreachable block (ram,0x000104f15e98) */
/* WARNING: Removing unreachable block (ram,0x000104f15ea8) */
/* WARNING: Removing unreachable block (ram,0x000104f15efc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104f15d80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bf49230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + _DAT_112716f58),PTR_s_constant_1125afe30);
    return param_1;
  }
  return 0;
}



/* Entry: 104f15f1c; end: 104f15f73; -[SCGallerySnapsTabBannerHostViewController onTapCTA] */

void FUN_104f15f1c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f15f74;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f15f74; end: 104f1605b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f15f74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112716f2c;
  if (*(long *)(*(long *)(param_1 + 0x20) + lVar4) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112716f20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2459a0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c27ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2314c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    func_0x00010beee460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112716f60) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112716f5c),
             PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 104f1605c; end: 104f160b3; -[SCGallerySnapsTabBannerHostViewController onTapDismiss] */

void FUN_104f1605c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f160b4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f160b4; end: 104f160df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f160b4(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112716f2c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112716f5c),
               PTR_s_dismissAnimated__1125be608,1);
    return;
  }
  return;
}



/* Entry: 104f160e0; end: 104f160eb; -[SCGallerySnapsTabBannerHostViewController pushToValdiMarshaller:] */

void FUN_104f160e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 104f160ec; end: 104f16207; -[SCGallerySnapsTabBannerHostViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f160ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716f58,0);
  _objc_storeStrong(param_1 + _DAT_112716f50,0);
  _objc_storeStrong(param_1 + _DAT_112716f44,0);
  _objc_storeStrong(param_1 + _DAT_112716f40,0);
  _objc_storeStrong(param_1 + _DAT_112716f3c,0);
  _objc_storeStrong(param_1 + _DAT_112716f48,0);
  _objc_storeStrong(param_1 + _DAT_112716f38,0);
  _objc_storeStrong(param_1 + _DAT_112716f34,0);
  _objc_storeStrong(param_1 + _DAT_112716f54,0);
  _objc_storeStrong(param_1 + _DAT_112716f28,0);
  _objc_storeStrong(param_1 + _DAT_112716f2c,0);
  _objc_storeStrong(param_1 + _DAT_112716f24,0);
  _objc_storeStrong(param_1 + _DAT_112716f5c,0);
  _objc_storeStrong(param_1 + _DAT_112716f30,0);
  _objc_storeStrong(param_1 + _DAT_112716f4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716f20);
  return;
}



/* Entry: 104f16208; end: 104f1654f; -[SCGallerySnapsTabBannerTrayViewController initWithView:disableGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104f16208(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = param_5;
  uVar22 = param_6;
  _objc_retain(param_5);
  puStack_90 = PTR_PTR_1126e5020;
  puVar23 = &uStack_98;
  uStack_98 = param_3;
  _objc_msgSendSuper2(puVar23,PTR_s_init_1125d9248);
  if (puVar23 != (undefined8 *)0x0) {
    lVar24 = (long)_DAT_112716f64;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar23 + lVar24);
    *(undefined **)((long)puVar23 + lVar24) = param_5;
    _objc_release(uVar2);
    *(char *)((long)puVar23 + (long)_DAT_112716f68) = (char)param_6;
    puVar3 = puVar23;
    func_0x00010c29bf00(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    func_0x00010c219b60(param_5);
    puVar3 = puVar23;
    func_0x00010c29bf00(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = param_5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar23;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_5;
    puStack_88 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar23;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_5;
    puStack_80 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar23;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_5;
    puStack_78 = puVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar23;
    func_0x00010c29bf00(puVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = 4;
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar23;
  }
  ___stack_chk_fail();
  _objc_retain(puVar21);
  _objc_retain(uVar22);
  if ((param_5[_DAT_112716f68] & 1) == 0) {
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar22);
    _objc_release(param_5);
    uVar20 = uVar22;
    func_0x00010c252440();
    puVar23 = (undefined8 *)0x1;
    if ((5 < uVar20) || (0.0 <= param_2)) goto LAB_104f165e8;
    func_0x00010c1dee80(puVar21);
  }
  puVar23 = (undefined8 *)0x0;
LAB_104f165e8:
  _objc_release(uVar22);
  _objc_release(puVar21);
  return puVar23;
}



/* Entry: 104f16550; end: 104f1660f; -[SCGallerySnapsTabBannerTrayViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104f16550(undefined8 param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_3 + _DAT_112716f68) & 1) == 0) {
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_6,param_4,param_3);
    _objc_release(param_3);
    uVar1 = param_6;
    func_0x00010c252440();
    uVar2 = 1;
    if ((5 < uVar1) || (0.0 <= param_2)) goto LAB_104f165e8;
    func_0x00010c1dee80(param_5,param_4,8);
  }
  uVar2 = 0;
LAB_104f165e8:
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 104f16610; end: 104f16623; -[SCGallerySnapsTabBannerTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f16610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716f64,0);
  return;
}



/* Entry: 104f16624; end: 104f1668f; -[SCMemoriesSnapshotSnapPickerActionHandler initWithDelegate:] */

undefined1 * FUN_104f16624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5028;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f16690; end: 104f167df; -[SCMemoriesSnapshotSnapPickerActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined **
FUN_104f16690(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e83af8;
  uVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)ppuVar5 != 0) {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2510;
    _objc_opt_class(PTR_PTR_1126b2510);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar4 = uVar2;
      func_0x00010c23f220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97060(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beee4e0(param_1);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return ppuVar5;
}



/* Entry: 104f167e0; end: 104f167f7; -[SCMemoriesSnapshotSnapPickerActionHandler containerViewController] */

void FUN_104f167e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f167f8; end: 104f16803; -[SCMemoriesSnapshotSnapPickerActionHandler setContainerViewController:] */

void FUN_104f167f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104f16804; end: 104f1681b; -[SCMemoriesSnapshotSnapPickerActionHandler workFlowDelegate] */

void FUN_104f16804(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1681c; end: 104f16827; -[SCMemoriesSnapshotSnapPickerActionHandler setWorkFlowDelegate:] */

void FUN_104f1681c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104f16828; end: 104f16857; -[SCMemoriesSnapshotSnapPickerActionHandler .cxx_destruct] */

void FUN_104f16828(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f16858; end: 104f16a07; -[SCMemoriesSnapshotSnapPickerCustomOperaLayersProvider initWithUserSession:valdiRuntimeProvider:myUsernameProvider:myDisplayNameProvider:myBitmojiAvatarIdProvider:myBitmojiSelfieIdProvider:onConfirm:onCancel:] */

undefined1 *
FUN_104f16858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e5030;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f16a08; end: 104f16a77; -[SCMemoriesSnapshotSnapPickerCustomOperaLayersProvider cutomLayers] */

undefined * FUN_104f16a08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2578;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_20 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104f16a78; end: 104f16a83; -[SCMemoriesSnapshotSnapPickerCustomOperaLayersProvider customLayerViewControllerFactories] */

undefined * FUN_104f16a78(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104f16a84; end: 104f16ec3; -[SCMemoriesSnapshotSnapPickerCustomOperaLayersProvider operaPageProperties] */

void FUN_104f16a84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  if (lVar12 != 0) {
    lVar3 = lVar12;
  }
  _objc_retain(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar9 = PTR_PTR_1126b2580;
  _objc_alloc(PTR_PTR_1126b2580);
  puVar10 = PTR_PTR_1126b2588;
  _objc_alloc(PTR_PTR_1126b2588);
  func_0x00010c05ac00();
  func_0x00010c049380(puVar9,param_2,lVar3,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c244360(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00();
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c244360(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60();
  _objc_release(puVar10);
  func_0x00010c205ec0(puVar9,param_2,lVar4);
  _objc_release(lVar3);
  func_0x000104f19abc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7a40(puVar9,param_2,lVar3);
  _objc_release(lVar3);
  puVar10 = PTR_PTR_1126b2590;
  _objc_opt_new(PTR_PTR_1126b2590);
  func_0x00010c1e2980(puVar9,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c112c40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9680();
  _objc_release(puVar10);
  func_0x000104f19a8c();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c112c40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c112c40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1920();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b2590;
  _objc_opt_new(PTR_PTR_1126b2590);
  func_0x00010c1f8f00(puVar9,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c154e00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9680();
  _objc_release(puVar10);
  func_0x000104f19aa4();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c154e00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c154e00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1920();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar10,&PTR____CFConstantStringClassReference_110dbabb8);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b2598;
  _objc_alloc_init(PTR_PTR_1126b2598);
  func_0x00010c1d2040();
  func_0x00010c1d0640(puVar1,param_2,puVar10,&PTR____CFConstantStringClassReference_110dbabf8);
  lVar12 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110dbabd8);
  }
  puVar11 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104f16ec4; end: 104f16f3b; -[SCMemoriesSnapshotSnapPickerCustomOperaLayersProvider .cxx_destruct] */

void FUN_104f16ec4(long param_1)

{
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



/* Entry: 104f16f3c; end: 104f1739f; -[SCMemoriesSnapshotSnapPickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f16f3c(long param_1)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b25a0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112716f9c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar17;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_b0 = 0;
    uStack_a8 = 0;
    lVar18 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)(param_1 + _DAT_112716fc8);
    _objc_retain();
    lStack_b0 = param_1 + _DAT_112716fc4;
    _objc_loadWeakRetained();
    lVar18 = param_1 + _DAT_112716fb0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar18;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  FUN_104f173e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar22;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_104f173e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_104f173e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_104f173e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112716fa8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar23;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112716fbc;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar21;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112716fc0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056f80(puVar2);
  _objc_release(lVar14);
  _objc_release(lVar20);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar12);
  _objc_release(lVar23);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar22);
  _objc_release(lVar4);
  _objc_release(lVar18);
  _objc_release(lStack_b0);
  _objc_release(uStack_a8);
  _objc_release(lVar3);
  _objc_release(lVar17);
  puVar15 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar16 = PTR_PTR_1126b25a8;
  _objc_alloc();
  lVar17 = param_1 + _DAT_112716f98;
  _objc_loadWeakRetained(lVar17);
  lVar18 = lVar17;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112716f9c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040920();
  lVar22 = (long)_DAT_112716fa0;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar16;
  _objc_release(uVar19);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(lVar17);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar22));
  _objc_release(puVar15);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 104f173a0; end: 104f173df;  */

void FUN_104f173a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f173e0; end: 104f17403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f173e0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716fb4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f17404; end: 104f174d7; -[SCMemoriesSnapshotSnapPickerEntryPoint _createSnapTranscoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f17404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b25b0;
  _objc_alloc(PTR_PTR_1126b25b0);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112716fac;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c2402c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112716fa4;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010c0c9c00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047820(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f174d8; end: 104f1759b; -[SCMemoriesSnapshotSnapPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f174d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716fc8,0);
  _objc_destroyWeak(param_1 + _DAT_112716fc4);
  _objc_destroyWeak(param_1 + _DAT_112716fc0);
  _objc_destroyWeak(param_1 + _DAT_112716fbc);
  _objc_destroyWeak(param_1 + _DAT_112716fb8);
  _objc_destroyWeak(param_1 + _DAT_112716f98);
  _objc_destroyWeak(param_1 + _DAT_112716fb4);
  _objc_destroyWeak(param_1 + _DAT_112716fb0);
  _objc_destroyWeak(param_1 + _DAT_112716fac);
  _objc_destroyWeak(param_1 + _DAT_112716fa8);
  _objc_destroyWeak(param_1 + _DAT_112716fa4);
  _objc_destroyWeak(param_1 + _DAT_112716f9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716fa0,0);
  return;
}



/* Entry: 104f1759c; end: 104f1763f; -[SCMemoriesSnapshotSnapPickerSnapTranscoder initWithSnapDocManager:memoriesSnapTranscoder:] */

undefined1 *
FUN_104f1759c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f17640; end: 104f17817; -[SCMemoriesSnapshotSnapPickerSnapTranscoder transcodeGallerySnap:completion:] */

void FUN_104f17640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f17818;
  puStack_78 = &UNK_110853850;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  func_0x00010c279b60(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f17818; end: 104f178d7;  */

void FUN_104f17818(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd6ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f178d8; end: 104f178ef;  */

void FUN_104f178d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104f178ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_2);
  return;
}



/* Entry: 104f178f0; end: 104f179df; -[SCMemoriesSnapshotSnapPickerSnapTranscoder _buildSnapDocFromGallerySnap:image:completion:] */

void FUN_104f178f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf36e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_retain(0);
  (**(code **)(param_5 + 0x10))(param_5,param_1,uVar1,0);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(0);
  return;
}



/* Entry: 104f179e0; end: 104f17ae3; -[SCMemoriesSnapshotSnapPickerSnapTranscoder _buildSnapDocFromGallerySnap:videoURL:musicSelection:completion:] */

void FUN_104f179e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf36e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_retain(0);
  (**(code **)(param_6 + 0x10))(param_6,param_1,uVar1,0);
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(0);
  return;
}



/* Entry: 104f17ae4; end: 104f17b3b; -[SCMemoriesSnapshotSnapPickerSnapTranscoder _createSnapDocKey] */

void FUN_104f17ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b25b8;
  _objc_alloc(PTR_PTR_1126b25b8);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011280(puVar1,param_2,puVar2,0x1e);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f17b3c; end: 104f1839b; -[SCMemoriesSnapshotSnapPickerSnapTranscoder _createSnapDocFromSnap:snapDocKey:image:videoURL:musicSelection:error:] */

void FUN_104f17b3c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  long param_6,long param_7,long *param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b25c0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (*param_8 != 0) {
    puVar17 = (undefined *)0x0;
    goto LAB_104f18304;
  }
  if (param_5 == 0) {
    if (param_6 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar17 = (undefined *)0x0;
      *param_8 = (long)puVar16;
      goto LAB_104f18304;
    }
    puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_6;
    func_0x00010c0f5800(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfc5880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099740(puVar17);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(puVar17);
    if (*param_8 != 0) goto LAB_104f17d64;
  }
  else {
    uVar4 = param_5;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfc5880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c14e020();
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_8 = (long)puVar17;
      _objc_release(uVar4);
LAB_104f17d64:
      puVar17 = (undefined *)0x0;
      goto LAB_104f18304;
    }
    _objc_release(uVar4);
  }
  puVar16 = PTR_PTR_1126b25c8;
  _objc_opt_new();
  func_0x00010c16a960();
  func_0x00010b5fa088();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bef9ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar16);
  _objc_release(uVar2);
  _objc_release(uVar7);
  func_0x00010bf8b160(param_3);
  func_0x00010c1c45e0(puVar16);
  if (*param_8 == 0) {
    puVar17 = PTR_PTR_1126b25d0;
    _objc_opt_new();
    func_0x00010c1c4020();
    puVar8 = puVar17;
    func_0x00010c0c3fe0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6440();
    _objc_release(puVar8);
    func_0x00010bfe0640(param_3);
    puVar8 = puVar17;
    func_0x00010c0c3fe0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c2a5040(param_3);
    puVar8 = puVar17;
    func_0x00010c0c3fe0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar1;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if (puVar9 == (undefined *)0x0) {
      puVar9 = PTR_PTR_1126b25d8;
      _objc_alloc_init();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c0d3c80();
      func_0x00010c1c5120(puVar1);
      _objc_release(puVar10);
      _objc_release(puVar8);
    }
    puVar8 = PTR_PTR_1126b25e0;
    _objc_opt_new();
    uVar4 = param_3;
    func_0x00010b5fa088();
    if ((uVar4 < 0xd) && ((1L << (uVar4 & 0x3f) & 0x1566U) != 0)) {
      puVar10 = puVar17;
      func_0x00010c0c3fe0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar10);
      func_0x00010bf8b160(param_3);
      puVar10 = puVar8;
      func_0x00010c0fef80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192ee0();
    }
    else {
      puVar10 = puVar17;
      func_0x00010c0c3fe0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
    }
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126b25e8;
    _objc_alloc_init(PTR_PTR_1126b25e8);
    puVar11 = puVar8;
    func_0x00010c0fef80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac2a0();
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0d3c80();
    func_0x00010c1dd6c0(puVar8);
    _objc_release(puVar11);
    _objc_release(puVar10);
    func_0x00010c1dd3e0(puVar1);
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    puVar11 = puVar1;
    func_0x00010c270d80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203d40();
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar1;
    func_0x00010c1197a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1690c0();
    _objc_release(puVar10);
    if (param_7 != 0) {
      puVar11 = PTR_PTR_1126b25f0;
      _objc_opt_new();
      puVar10 = puVar11;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf4e420();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar10);
      func_0x00010c277e80(param_7);
      func_0x00010c218f80(puVar13);
      func_0x00010bf0ffa0(auStack_98,param_7);
      _CMTimeGetSeconds(auStack_98);
      func_0x00010c209700(puVar13);
      lVar6 = param_7;
      func_0x00010bf93480();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      puVar10 = PTR_PTR_1126b25f8;
      if (lVar14 != 0) {
        lVar6 = param_7;
        func_0x00010bf93480(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f40e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        func_0x00010c182620(puVar13);
        _objc_release(puVar10);
      }
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010c0d3c80();
      puVar15 = puVar1;
      func_0x00010bf0d7e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b440();
      _objc_release(puVar15);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar11);
    }
    _objc_retain(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar17);
    puVar17 = puVar1;
  }
  else {
    puVar17 = (undefined *)0x0;
  }
  _objc_release(puVar16);
LAB_104f18304:
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}


