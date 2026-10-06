/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bd3f78; end: 106bd3f8f; -[SCLensCallToActionOffCameraAdapter lensesPresentingViewController] */

void FUN_106bd3f78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bd3f90; end: 106bd4037; -[SCLensCallToActionOffCameraAdapter lensUrlBrowsingManager] */

void FUN_106bd3f90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126d1298;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0252a0(puVar2,param_2,uVar1,uVar3,lVar4,*(undefined8 *)(param_1 + 0x20),param_1,
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106bd4038; end: 106bd40a7; -[SCLensCallToActionOffCameraAdapter .cxx_destruct] */

void FUN_106bd4038(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd40a8; end: 106bd411b; -[SCLensCallToActionOnCameraAdapter initWithLensUrlBrowsing:] */

undefined1 * FUN_106bd40a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5870;
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



/* Entry: 106bd411c; end: 106bd416b; -[SCLensCallToActionOnCameraAdapter launchCallToActionViewForLens:presentingViewController:] */

void FUN_106bd411c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2364c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd416c; end: 106bd4177; -[SCLensCallToActionOnCameraAdapter .cxx_destruct] */

void FUN_106bd416c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd4178; end: 106bd42e3; -[SCLensURLBrowsingManager initWithLensOperaControllerProvider:lensLogger:navigationDelegate:lensesUIControllerStudySettingsProvider:presentingViewControllerProvider:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_106bd4178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f5878;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
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



/* Entry: 106bd42e4; end: 106bd43b7; -[SCLensURLBrowsingManager lensOperaController] */

void FUN_106bd42e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    lVar1 = lVar6;
    func_0x00010c098700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar2 = param_1;
    func_0x00010bee63a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0ea240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    lVar6 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106bd43b8; end: 106bd43bf; -[SCLensURLBrowsingManager isOperaPresenting] */

void FUN_106bd43b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isPresenting_1125fc4e0);
  return;
}



/* Entry: 106bd43c0; end: 106bd44ff; -[SCLensURLBrowsingManager launchExternalBrowserUsing:lens:] */

void FUN_106bd43c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3ce0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0e9b80(puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd4500; end: 106bd455b;  */

void FUN_106bd4500(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c095900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2364a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bd455c; end: 106bd483b; -[SCLensURLBrowsingManager showCallToActionViewForLens:] */

void FUN_106bd455c(ulong param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106bd483c;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  ppuVar1 = &puStack_a8;
  lStack_88 = param_3;
  _objc_retainBlock();
  uVar2 = param_1;
  func_0x00010bed0500();
  if ((uVar2 & 1) != 0) goto LAB_106bd47b8;
  lVar3 = param_3;
  func_0x00010c281520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf0d600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010b79a834();
  if (lVar7 == 0x31ce9f6d) {
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)puVar8 == 0) goto LAB_106bd477c;
    uVar2 = param_1;
    func_0x00010bee63a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar1);
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(param_3);
    func_0x00010c068f20(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_release(ppuVar1);
    _objc_release(uVar2);
  }
  else {
    _objc_release(lVar4);
    _objc_release(lVar3);
LAB_106bd477c:
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8fa0();
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(lVar5);
LAB_106bd47b8:
  _objc_release(ppuVar1);
  _objc_release(lStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd483c; end: 106bd4b3f;  */

void FUN_106bd483c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf67dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010b78f764();
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar4 == -0x4a45496c) {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c281520(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf68380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar6,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b780(lVar1,param_2,puVar6,*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c281520();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010bf67dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010b78f764();
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar2);
      uVar7 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0x595a172) {
        func_0x00010c1b3ce0();
      }
      else {
        func_0x00010c1b3cc0();
      }
      _objc_release(uVar7);
      lVar5 = lVar1;
      func_0x00010c095900(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2364a0();
    }
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bd4b40; end: 106bd4b47; -[SCLensURLBrowsingManager dismissLensOperaPresenterWithDidBackground:] */

void FUN_106bd4b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_dismissLensOperaPresenterWithDid_1125be8e0);
  return;
}



/* Entry: 106bd4b48; end: 106bd4c0f; -[SCLensURLBrowsingManager showURLAsRuntimeAttachment:forLens:] */

void FUN_106bd4b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be4a420(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010c2bbf80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c2364c0(param_1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd4c10; end: 106bd4c13; -[SCLensURLBrowsingManager lensOperaController:didOpenPresenter:] */

void FUN_106bd4c10(void)

{
  return;
}



/* Entry: 106bd4c14; end: 106bd4c4b; -[SCLensURLBrowsingManager lensOperaController:didClosePresenter:] */

void FUN_106bd4c14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd4c4c; end: 106bd4d93; -[SCLensURLBrowsingManager _logGeofilterAttachmentView:] */

void FUN_106bd4c4c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c7cc8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    lVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c100(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(puVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c206c40(puVar1,param_2,0x3a);
    lVar2 = param_3;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar4 = lVar2;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      func_0x00010c16b360(puVar1,param_2,0xd);
      func_0x00010c18a740(puVar1,param_2,1);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106bd4d94; end: 106bd4dc3; -[SCLensURLBrowsingManager _urlInterceptor] */

void FUN_106bd4d94(void)

{
  _objc_alloc(PTR_PTR_1126c5b30);
  func_0x00010bffe1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bd4dc4; end: 106bd4fd7; -[SCLensURLBrowsingManager _tryToInterceptWebUrlFromLens:fallbackBlock:] */

long FUN_106bd4dc4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c068e40();
  _objc_release(uVar1);
  if ((int)uVar6 != 0) {
    lVar7 = param_3;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a4480();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar7);
    if (lVar4 != 0) {
      lVar2 = param_1;
      func_0x00010bee63a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar7 = param_3;
      func_0x00010c281520(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c2a3bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2a4480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar5,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar7);
      _objc_retain(param_4);
      lVar7 = lVar2;
      func_0x00010c068f20(lVar2,param_2,puVar5,1,1,0,0,1,1);
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e8fa0();
      _objc_release(uVar6);
      _objc_release(param_4);
      _objc_release(puVar5);
      _objc_release(lVar2);
      goto LAB_106bd4fa8;
    }
  }
  lVar7 = 0;
LAB_106bd4fa8:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar7;
}



/* Entry: 106bd4fd8; end: 106bd4fef;  */

void FUN_106bd4fd8(long param_1,ulong param_2)

{
  if (((param_2 & 1) == 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106bd4fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106bd4ff0; end: 106bd50e3; -[SCLensURLBrowsingManager _lensAttachmentWithUri:] */

void FUN_106bd4ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb7f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c062fa0();
  puVar2 = PTR_PTR_1126bb800;
  _objc_alloc(PTR_PTR_1126bb800);
  func_0x00010c059e40();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126bb7e0;
  _objc_alloc(PTR_PTR_1126bb7e0);
  func_0x00010bff4cc0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bd50e4; end: 106bd5153; -[SCLensURLBrowsingManager .cxx_destruct] */

void FUN_106bd50e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 106bd5154; end: 106bd52b7; -[SCLensURLCameraBrowsingManager initWithLensOperaControllerProvider:lensLogger:navigationDelegate:lensesUIControllerStudySettingsProvider:presentingViewControllerProvider:volumeButtonsEventsHandler:lensCarouselActivator:lensStateWorkflowProvider:userTrackedLogger:lensCTAHandler:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106bd5154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f5880;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithLensOperaControllerProvi_1125e6e90,param_3,param_4,
                      param_5,param_6,param_7,param_11,param_13);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275a2a4,param_8);
    lVar4 = (long)_DAT_11275a2a8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275a2ac,param_10);
    lVar4 = (long)_DAT_11275a2b0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275a2b4);
    *(undefined **)((long)puVar1 + (long)_DAT_11275a2b4) = puVar3;
    _objc_release(uVar2);
    func_0x00010bde4ac0(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 106bd52b8; end: 106bd544f; -[SCLensURLCameraBrowsingManager showCallToActionViewForLens:] */

void FUN_106bd52b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f5880;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_showCallToActionViewForLens__11266b358,param_3);
  lVar1 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b1068;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    lVar1 = param_3;
    func_0x00010c281520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar5);
    func_0x00010c057c40();
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = puVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (((ulong)puVar6 & 1) != 0) goto LAB_106bd542c;
  }
  func_0x00010bdf83c0(param_1);
LAB_106bd542c:
  _objc_release(param_3);
  return;
}



/* Entry: 106bd5450; end: 106bd54cb; -[SCLensURLCameraBrowsingManager lensOperaController:didOpenPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd5450(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5880;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_lensOperaController_didOpenPrese_112603060);
  param_1 = param_1 + _DAT_11275a2ac;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c096e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138f40();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 106bd54cc; end: 106bd5593; -[SCLensURLCameraBrowsingManager lensOperaController:didClosePresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd54cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_lensOperaController_didClosePres_112603058;
  puStack_38 = PTR_PTR_1126f5880;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3,param_4);
  param_1 = param_1 + _DAT_11275a2ac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c096e60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bef0a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c13c5c0(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 106bd5594; end: 106bd55fb; -[SCLensURLCameraBrowsingManager _deactivateLensCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd5594(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a2a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_11275a2a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2560c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bd55fc; end: 106bd5753; -[SCLensURLCameraBrowsingManager _configureAttachmentPresenterObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd55fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_11275a2b0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = auStack_48;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e0ea0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar1;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106bd5754; end: 106bd5827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd5754(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c10f460();
    if (lVar1 == 2) {
      lVar1 = param_1 + _DAT_11275a2ac;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c096e60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c094fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13c5c0(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else if (lVar1 == 1) {
      func_0x00010bdf83c0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bd5828; end: 106bd588f; -[SCLensURLCameraBrowsingManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bd5828(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275a2a8,0);
  _objc_storeStrong(param_1 + _DAT_11275a2b4,0);
  _objc_storeStrong(param_1 + _DAT_11275a2b0,0);
  _objc_destroyWeak(param_1 + _DAT_11275a2ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a2a4);
  return;
}



/* Entry: 106bd5890; end: 106bd5907; -[SCCameraLensesCarouselActivator isLensDisplayableRequiringCameraViewFullyVisible:] */

long FUN_106bd5890(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be416e0();
  if ((param_3 != 0) && ((int)lVar2 != 0)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      lVar2 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c06dfe0();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 106bd5908; end: 106bd59cf; -[SCCameraLensesCarouselActivator _isLensDisplayable] */

uint FUN_106bd5908(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf29980();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c083180();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return (uint)(puVar2 == (undefined *)0x0) & (uint)uVar7;
}



/* Entry: 106bd59d0; end: 106bd5a43; -[SCCameraLensesCarouselActivator isAnyLensActivationAllowed] */

long FUN_106bd59d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be3e140();
  if ((int)lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      lVar2 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c06dfe0();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 106bd5a44; end: 106bd5b17; -[SCCameraLensesCarouselActivator isAnyLensActivationAllowedAsync:] */

void FUN_106bd5a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be3e160(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106bd5b18; end: 106bd5bb3;  */

void FUN_106bd5b18(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained();
      if (lVar2 == 0) {
        lVar4 = 1;
      }
      else {
        lVar3 = lVar1 + 0x20;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010c06dfe0();
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bd5bb4; end: 106bd5cdf; -[SCCameraLensesCarouselActivator _isAnyLensActivationAllowed] */

uint FUN_106bd5bb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083500();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be3e180();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf29980();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c083180();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c110140();
  uVar8 = 0;
  if (((((int)uVar1 == 0) && ((int)uVar2 != 0)) && ((int)lVar3 != 0)) && ((int)uVar6 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0806e0();
    uVar8 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  _objc_release(uVar7);
  return uVar8;
}



/* Entry: 106bd5ce0; end: 106bd5e7b; -[SCCameraLensesCarouselActivator _isAnyLensActivationAllowedAsync:] */

void FUN_106bd5ce0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083500();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be3e180();
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c110140();
  _objc_release(uVar4);
  uVar6 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0806e0();
  _objc_release(uVar6);
  if (((((uVar5 & 1) == 0) && ((int)uVar2 != 0)) && ((int)lVar3 != 0)) && ((uVar4 & 1) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf29980();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf10e60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf11120(uVar8);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(param_3);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106bd5e7c; end: 106bd5ef7;  */

void FUN_106bd5e7c(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106bd5ef8;
  puStack_38 = &UNK_11084a9b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  return;
}



/* Entry: 106bd5ef8; end: 106bd5f0b;  */

void FUN_106bd5ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106bd5f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106bd5f0c; end: 106bd5f83; -[SCCameraLensesCarouselActivator _isAnyLensDetectionAllowed] */

uint FUN_106bd5f0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06e360();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar4 ^ 1;
}



/* Entry: 106bd5f84; end: 106bd5fc7; -[SCCameraLensesCarouselActivator .cxx_destruct] */

void FUN_106bd5f84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd5fc8; end: 106bd600f; -[SCCameraViewControllerLensDelegateHandler cameraLensesInfoProvider] */

void FUN_106bd5fc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bd6010; end: 106bd6057; -[SCCameraViewControllerLensDelegateHandler lensSessionId] */

void FUN_106bd6010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bd6058; end: 106bd6097; -[SCCameraViewControllerLensDelegateHandler frontCameraActiveForLogging] */

undefined8 FUN_106bd6058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbb180();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106bd6098; end: 106bd60df; -[SCCameraViewControllerLensDelegateHandler lensStateDelegate] */

void FUN_106bd6098(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c096e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bd60e0; end: 106bd612b; -[SCCameraViewControllerLensDelegateHandler restartTrackingWithNormalizedPoint:] */

void FUN_106bd60e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c080(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd612c; end: 106bd6173; -[SCCameraViewControllerLensDelegateHandler currentLensDataProvider] */

void FUN_106bd612c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bd6174; end: 106bd61af; -[SCCameraViewControllerLensDelegateHandler updateLensDataProviderWithCameraType:] */

void FUN_106bd6174(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2871c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd61b0; end: 106bd61e7; -[SCCameraViewControllerLensDelegateHandler resetLensSubPickerActiveOptionIds] */

void FUN_106bd61b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd61e8; end: 106bd6213; -[SCCameraViewControllerLensDelegateHandler updateLensDataStore] */

void FUN_106bd61e8(long param_1)

{
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c287280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bd6214; end: 106bd62b7; -[SCCameraViewControllerLensDelegateHandler updateLensDataProvider:updatingStrategy:lensIdToRestore:] */

void FUN_106bd6214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c287180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd62b8; end: 106bd62eb; -[SCCameraViewControllerLensDelegateHandler clearAllEffects] */

void FUN_106bd62b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd62ec; end: 106bd631f; -[SCCameraViewControllerLensDelegateHandler pauseDataFetcherDownloads] */

void FUN_106bd62ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd6320; end: 106bd6353; -[SCCameraViewControllerLensDelegateHandler resumeDataFetcherDownloads] */

void FUN_106bd6320(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd6354; end: 106bd6393; -[SCCameraViewControllerLensDelegateHandler isAnyLensActivationAllowed] */

undefined8 FUN_106bd6354(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06c240();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106bd6394; end: 106bd63e3; -[SCCameraViewControllerLensDelegateHandler isAnyLensActivationAllowedAsync:] */

void FUN_106bd6394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd63e4; end: 106bd6423; -[SCCameraViewControllerLensDelegateHandler isCurrentLensUtility] */

bool FUN_106bd63e4(long param_1)

{
  long lVar1;
  
  func_0x00010bdf6be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  return lVar1 == 0xb;
}



/* Entry: 106bd6424; end: 106bd645f; -[SCCameraViewControllerLensDelegateHandler isCurrentLensFeedEntryPoint] */

undefined8 FUN_106bd6424(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf6be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c072c60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bd6460; end: 106bd649b; -[SCCameraViewControllerLensDelegateHandler isCurrentLensFavoritesPlaceholder] */

undefined8 FUN_106bd6460(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf6be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c072b00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bd649c; end: 106bd65ef; -[SCCameraViewControllerLensDelegateHandler clearCarouselEffectAfterCapture] */

void FUN_106bd649c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010bf3b280(lVar1,param_2,&PTR____CFConstantStringClassReference_110f771b8,0);
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar2 = lVar1;
    func_0x00010bf07da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010c2005c0(*(undefined8 *)(lStack_108 + lVar5 * 8),param_2,1);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + 200;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bd65f0; end: 106bd6633; -[SCCameraViewControllerLensDelegateHandler turnLensesOff] */

void FUN_106bd65f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bd6634; end: 106bd6697; -[SCCameraViewControllerLensDelegateHandler turnLensesOffOnDisappear:] */

void FUN_106bd6634(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((param_3 & 1) == 0) {
    param_1 = param_1 + 200;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65b20();
    _objc_release(lVar1);
  }
  else {
    param_1 = *(long *)(param_1 + 0x70);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d4e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bd6698; end: 106bd66e7; -[SCCameraViewControllerLensDelegateHandler showCallToActionViewForLens:] */

void FUN_106bd6698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2364c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd66e8; end: 106bd6723; -[SCCameraViewControllerLensDelegateHandler dismissLensOperaPresenterWithDidBackground:] */

void FUN_106bd66e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd6724; end: 106bd6773; -[SCCameraViewControllerLensDelegateHandler defaultErrorHandlerWithSelector:] */

void FUN_106bd6724(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf694a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bd6774; end: 106bd67bf; -[SCCameraViewControllerLensDelegateHandler logCameraToggledWithAction:recording:] */

void FUN_106bd6774(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd67c0; end: 106bd67f3; -[SCCameraViewControllerLensDelegateHandler logRecordingStarted] */

void FUN_106bd67c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd67f4; end: 106bd6827; -[SCCameraViewControllerLensDelegateHandler logRecordingStopped] */

void FUN_106bd67f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd6828; end: 106bd6887; -[SCCameraViewControllerLensDelegateHandler lensesUIController] */

void FUN_106bd6828(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0xb0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c098880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106bd6888; end: 106bd68af; -[SCCameraViewControllerLensDelegateHandler lensesUIUpdateAnnouncer] */

void FUN_106bd6888(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bd68b0; end: 106bd6943; -[SCCameraViewControllerLensDelegateHandler pointInsideAnyLensView:pointInWindow:] */

uint FUN_106bd68b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_5 + 0x80);
  func_0x00010c07a680(param_3,param_4,uVar1);
  func_0x00010c08d6c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c102bc0(param_1,param_2);
  _objc_release(lVar2);
  _objc_release(param_5);
  return ((uint)uVar1 | (uint)lVar3) & 1;
}



/* Entry: 106bd6944; end: 106bd69d3; -[SCCameraViewControllerLensDelegateHandler pointInsideAnyLensViewButton:] */

long FUN_106bd6944(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_3 + 0x80);
  func_0x00010c07a680();
  if ((uVar1 & 1) == 0) {
    func_0x00010c08d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c102bc0(param_1,param_2);
    _objc_release(lVar3);
    _objc_release(param_3);
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 106bd69d4; end: 106bd6a4b; -[SCCameraViewControllerLensDelegateHandler pointInsideLensCarouselCollectionView:] */

undefined8 FUN_106bd69d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c091020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c102ca0(param_1,param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106bd6a4c; end: 106bd6aaf; -[SCCameraViewControllerLensDelegateHandler lensCarouselContainerView] */

void FUN_106bd6a4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c08d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c090840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bd6ab0; end: 106bd6b5f; -[SCCameraViewControllerLensDelegateHandler pointInsideLensInfoButton:] */

undefined8 FUN_106bd6ab0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c094840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c102d20(param_1,param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 106bd6b60; end: 106bd6b9f; -[SCCameraViewControllerLensDelegateHandler isPresentingCTAView] */

undefined8 FUN_106bd6b60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079380();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106bd6ba0; end: 106bd6ba7; -[SCCameraViewControllerLensDelegateHandler lensesDisallowSnapRecording] */

void FUN_106bd6ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_isCameraRecordingDisabled_1125f91e0);
  return;
}



/* Entry: 106bd6ba8; end: 106bd6cc3; -[SCCameraViewControllerLensDelegateHandler selectedLensId] */

void FUN_106bd6ba8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106bd6cc4;
  uStack_40 = 0x106bd6cd4;
  uStack_38 = 0;
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c159aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106bd6cc4; end: 106bd6cdb;  */

void FUN_106bd6cc4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106bd6cdc; end: 106bd6d37;  */

void FUN_106bd6cdc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106bd6d38;
  puStack_20 = &UNK_110842b58;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf0a0(param_2,param_2,0,&puStack_38);
  return;
}



/* Entry: 106bd6d38; end: 106bd6d6f;  */

void FUN_106bd6d38(long param_1,undefined8 param_2)

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



/* Entry: 106bd6d70; end: 106bd6da7; -[SCCameraViewControllerLensDelegateHandler exitLensFullScreenModeIfNeeded] */

void FUN_106bd6d70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd6da8; end: 106bd6ec7; -[SCCameraViewControllerLensDelegateHandler applyCurrentLensIconToCameraButton] */

void FUN_106bd6da8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(ulong *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094140();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = param_1;
  func_0x00010c08d6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef0a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbe00();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106bd6ec8; end: 106bd6f07; -[SCCameraViewControllerLensDelegateHandler areLensesAllInterfaceElementsHidden] */

undefined8 FUN_106bd6ec8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094140();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106bd6f08; end: 106bd6faf; -[SCCameraViewControllerLensDelegateHandler isInIdleState] */

uint FUN_106bd6f08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar1 = param_1 + 200;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf02120();
    if (((int)uVar4 == 0) || (lVar1 = lVar2, func_0x00010c10f660(), lVar1 == 2)) {
      lVar1 = lVar2;
      func_0x00010bef03e0(lVar2);
      uVar5 = (uint)lVar1 ^ 1;
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  return uVar5;
}



/* Entry: 106bd6fb0; end: 106bd6fe3; -[SCCameraViewControllerLensDelegateHandler hasActiveLens] */

bool FUN_106bd6fb0(long param_1)

{
  func_0x00010bdf6be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106bd6fe4; end: 106bd7017; -[SCCameraViewControllerLensDelegateHandler clearExpiredLensPersistentStoragesInBackground] */

void FUN_106bd6fe4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bd7018; end: 106bd707f; -[SCCameraViewControllerLensDelegateHandler featureContainerView] */

void FUN_106bd7018(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106bd7080; end: 106bd70e3; -[SCCameraViewControllerLensDelegateHandler _currentLens] */

void FUN_106bd7080(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf29b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bd70e4; end: 106bd7123; -[SCCameraViewControllerLensDelegateHandler lazyLensesUIController] */

void FUN_106bd70e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xb0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c098880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bd7124; end: 106bd713b; -[SCCameraViewControllerLensDelegateHandler lensCarouselManager] */

void FUN_106bd7124(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bd713c; end: 106bd7273; -[SCCameraViewControllerLensDelegateHandler .cxx_destruct] */

void FUN_106bd713c(long param_1)

{
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_storeStrong(param_1 + 0xa8,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd7274; end: 106bd737f; -[SCLensCameraPositionSwitcher initWithCameraHardwareResource:cameraFeatureScopeInfo:] */

undefined8 *
FUN_106bd7274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5898;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106bd7380; end: 106bd741b;  */

void FUN_106bd7380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2726a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bd741c; end: 106bd752f; -[SCLensCameraPositionSwitcher setCameraPositionForLensCameraPosition:completion:] */

void FUN_106bd741c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x00010bf70d80(lVar3);
    lVar2 = param_1;
    func_0x00010beb6bc0(param_1,param_2,lVar1,param_3);
    if ((int)lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106bd7530;
      puStack_50 = &UNK_110842508;
      _objc_retain(param_4);
      lStack_48 = param_4;
      func_0x00010c272720(uVar4,param_2,&puStack_68);
      _objc_release(lStack_48);
      goto LAB_106bd7508;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
LAB_106bd7508:
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 106bd7530; end: 106bd7543;  */

void FUN_106bd7530(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106bd753c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106bd7544; end: 106bd757b; -[SCLensCameraPositionSwitcher _shouldSwitchCameraPositionForDevicePosition:lensCameraPosition:] */

bool FUN_106bd7544(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_4 != 2;
  if (param_3 == 0) {
    bVar1 = param_4 != 1;
  }
  bVar2 = param_4 != 2;
  if (param_3 != 1) {
    bVar2 = bVar1;
  }
  bVar1 = false;
  if (param_4 != 0) {
    bVar1 = bVar2;
  }
  bVar2 = false;
  if (param_3 != -1) {
    bVar2 = bVar1;
  }
  return bVar2;
}



/* Entry: 106bd757c; end: 106bd75a7; -[SCLensCameraPositionSwitcher .cxx_destruct] */

void FUN_106bd757c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bd75a8; end: 106bd765f; -[SCLensCarouselActivationTracker initWithActiveStateObservable:lensStateWorkflowObservable:cameraNavigationType:] */

undefined1 *
FUN_106bd75a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f58a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x00010beb1600(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


