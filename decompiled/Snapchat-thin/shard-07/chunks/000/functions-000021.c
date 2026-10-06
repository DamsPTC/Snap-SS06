/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10505f474; end: 10505f48b;  */

void FUN_10505f474(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10505f48c; end: 10505f563;  */

void FUN_10505f48c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b4450;
  func_0x00010c0fa6c0(PTR_PTR_1126b4450,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10505f564; end: 10505f877; -[SCAuraSharingViewControllerPresenter initWithUserSession:circumstanceEngine:ephemeralMediaFactory:legacySendToLauncher:previewScopeExposer:previewScopeBuilderServices:snapDocEditorServices:previewSnapSenderFactory:galleryStorySaver:ucoDataStore:ucoServices:userLocationPermissionManager:locationProvider:previewABProvider:] */

undefined8 *
FUN_10505f564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126e5c88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_16;
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



/* Entry: 10505f878; end: 10505fa9b; -[SCAuraSharingViewControllerPresenter presentSendToPageWithPresentingViewController:image:auraProfile:delegate:] */

void FUN_10505f878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  FUN_10505f304(param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x30,param_6);
  _objc_release(param_6);
  FUN_10505f1dc(param_5);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b4458;
  _objc_alloc(PTR_PTR_1126b4458);
  func_0x00010c01c300();
  puVar3 = PTR_PTR_1126b1a18;
  _objc_alloc(PTR_PTR_1126b1a18);
  func_0x00010c0f2220(param_3);
  func_0x00010c048760(puVar3);
  puVar4 = PTR_PTR_1126b1a20;
  _objc_alloc(PTR_PTR_1126b1a20);
  func_0x00010c01d640();
  puVar5 = PTR_PTR_1126b1a28;
  _objc_alloc();
  func_0x00010c038ea0();
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar5;
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126b1a30;
  _objc_alloc(PTR_PTR_1126b1a30);
  func_0x00010bff5040();
  puVar6 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar6;
  _objc_release(uVar8);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10505fa9c; end: 10505ff33; -[SCAuraSharingViewControllerPresenter presentPreviewPageWithPresentingViewController:image:auraProfile:delegate:] */

void FUN_10505fa9c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_storeWeak(param_3 + 0x10,param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = param_6;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_3 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  FUN_10505f304(param_7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_storeWeak(param_3 + 0x30,param_8);
  _objc_release(param_8);
  puVar3 = PTR_PTR_1126afee0;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180();
  _objc_release(puVar4);
  func_0x00010c16c640(puVar3);
  func_0x00010c1c5440(puVar3);
  func_0x00010c23d0a0(param_6);
  dVar14 = param_1;
  func_0x00010c14e120(param_6);
  param_1 = param_1 * dVar14;
  param_2 = param_2 * dVar14;
  func_0x00010c1c5240(puVar3);
  func_0x00010c0c6700(puVar3);
  dVar14 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar14 = INFINITY;
    }
    else {
      dVar14 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar14,puVar3);
  func_0x00010c1a1640(puVar3);
  _objc_retain(param_6);
  func_0x00010c205400(puVar3);
  func_0x00010c1f5e00(puVar3);
  FUN_10505f1dc(param_7);
  _objc_release(param_7);
  func_0x00010c2056c0(puVar3);
  func_0x00010c204fa0(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(puVar3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bfbbbe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0c5ae0(puVar3);
  uVar11 = *(undefined8 *)(param_3 + 8);
  uVar1 = *(undefined8 *)(param_3 + 0x98);
  uVar2 = *(undefined8 *)(param_3 + 0xa0);
  uVar12 = *(undefined8 *)(param_3 + 0x80);
  uVar13 = *(undefined8 *)(param_3 + 0x90);
  puVar6 = puVar3;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x000107f7047c(puVar4,puVar5,uVar11,0,uVar2,uVar12,uVar13,uVar1,puVar8,
                      *(undefined8 *)(param_3 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  func_0x00010bf42760(puVar3);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  func_0x00010bf9f4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126affc0;
  func_0x00010c27eee0(PTR_PTR_1126affc0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8cb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  func_0x00010bf22c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_3 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x58));
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(param_6);
  return;
}



/* Entry: 10505ff34; end: 10505ff5b;  */

void FUN_10505ff34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10505ff5c; end: 10505ff83; -[SCAuraSharingViewControllerPresenter legacySendToScopeDidDismiss:selectedItems:] */

void FUN_10505ff5c(long param_1)

{
  func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bddefd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUp_112555590);
  return;
}



/* Entry: 10505ff84; end: 10506006f; -[SCAuraSharingViewControllerPresenter legacySendToScopeWillSend:sendToSelection:] */

void FUN_10505ff84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105060070; end: 1050600a3;  */

void FUN_105060070(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050600a4; end: 10506017b; -[SCAuraSharingViewControllerPresenter _didDetachUIWithSendToSelection:] */

void FUN_1050600a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf94c40(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10506017c; end: 1050601af;  */

void FUN_10506017c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050601b0; end: 1050602bb; -[SCAuraSharingViewControllerPresenter _didEndFeatureWithSendToSelection:] */

void FUN_1050601b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2584a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf24f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea0160(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c0e66c0();
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010be02ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEverything_11255e450);
  return;
}



/* Entry: 1050602bc; end: 10506063b; -[SCAuraSharingViewControllerPresenter _sendScreenshotToRecipients:storiesConfig:businessIds:groups:additionalText:] */

void FUN_1050602bc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b4460;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad60(puVar1);
  _objc_release(puVar2);
  func_0x00010c1a9f00(puVar1);
  puVar2 = PTR_PTR_1126b4468;
  _objc_alloc();
  func_0x00010c05ce40();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c243220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110864338);
  uVar5 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110864358);
  _objc_release();
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b840(uVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar11);
  _objc_release(param_3);
  uVar6 = param_4;
  func_0x00010846b590();
  if (((uVar6 & 1) != 0) || (lVar7 = param_5, func_0x00010bf529e0(), lVar7 != 0)) {
    uVar6 = param_1 + 0x40;
    _objc_loadWeakRetained();
    uVar8 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf56080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar6);
    puVar10 = PTR_PTR_1126b4470;
    _objc_retain(uVar9);
    _objc_opt_class(puVar10);
    uVar8 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar10);
    uVar6 = uVar9;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar9);
    uVar8 = uVar6;
    func_0x00010bf982c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c16c640(uVar8);
    func_0x00010c196d20(uVar8);
    func_0x00010c21acc0(uVar8);
    func_0x00010c1ac2c0(uVar8);
    func_0x00010c1d6440(uVar8);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    _UIImageJPEGRepresentation(0x3feccccccccccccd,uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c0c3fe0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4480();
    _objc_release(uVar6);
    uVar6 = uVar8;
    func_0x00010c0c3fe0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe86c0();
    _objc_release(uVar6);
    func_0x00010c105300(uVar4);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar9);
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10506063c; end: 10506064b;  */

void FUN_10506063c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 10506064c; end: 1050606a3; -[SCAuraSharingViewControllerPresenter didCancelFromPreview:] */

void FUN_10506064c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bf84b00(param_3,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050606a4; end: 1050606db; -[SCAuraSharingViewControllerPresenter didSendSnapsAndPostToStory:storyTypes:] */

void FUN_1050606a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e66c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be02ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEverything_11255e450);
  return;
}



/* Entry: 1050606dc; end: 105060713; -[SCAuraSharingViewControllerPresenter didSendChatMessage] */

void FUN_1050606dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e66c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be02ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEverything_11255e450);
  return;
}



/* Entry: 105060714; end: 10506074b; -[SCAuraSharingViewControllerPresenter didPostStoryWithStoryTypes:] */

void FUN_105060714(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e66c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be02ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEverything_11255e450);
  return;
}



/* Entry: 10506074c; end: 10506078b; -[SCAuraSharingViewControllerPresenter _dismissEverything] */

void FUN_10506074c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddefd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUp_112555590);
  return;
}



/* Entry: 10506078c; end: 10506080f; -[SCAuraSharingViewControllerPresenter _cleanUp] */

void FUN_10506078c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_storeWeak(param_1 + 0x10,0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105060810; end: 10506090b; -[SCAuraSharingViewControllerPresenter .cxx_destruct] */

void FUN_105060810(long param_1)

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
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10506090c; end: 1050609b7; -[SCProfileSyncConversationCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_10506090c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5c90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050609b8; end: 1050609c7; -[SCProfileSyncConversationCallback onComplete:] */

void FUN_1050609b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001050609c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1050609c8; end: 1050609d7; -[SCProfileSyncConversationCallback onError:] */

void FUN_1050609c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001050609d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 1050609d8; end: 105060a07; -[SCProfileSyncConversationCallback .cxx_destruct] */

void FUN_1050609d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105060a08; end: 105060aab; -[SCUnifiedProfileChatAttachmentActionHandler initWithChatAttachmentHandlerScopeExposer:conversationActionHandler:] */

undefined1 *
FUN_105060a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5c98;
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



/* Entry: 105060aac; end: 105060be7; -[SCUnifiedProfileChatAttachmentActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105060aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((int)uVar3 != 0) {
      _objc_release(uVar2);
      goto LAB_105060b20;
    }
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      goto LAB_105060b84;
    }
  }
  else {
LAB_105060b20:
    _objc_release(uVar1);
  }
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b4478;
  _objc_opt_class(PTR_PTR_1126b4478);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010be25e60(param_1);
  _objc_release(uVar1);
  uVar6 = 1;
LAB_105060b84:
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 105060be8; end: 105060cfb; -[SCUnifiedProfileChatAttachmentActionHandler _handleAttachment:] */

void FUN_105060be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105060cfc;
    uStack_40 = 0x105060d0c;
    uStack_38 = 0;
    uVar2 = param_3;
    func_0x00010bf4bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c00c0();
    _objc_release(uVar2);
    if (puStack_58[5] != 0) {
      func_0x00010be109a0(param_1);
    }
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105060cfc; end: 105060d13;  */

void FUN_105060cfc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105060d14; end: 105060eaf;  */

void FUN_105060d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0becc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105060eb0; end: 105060ef7;  */

void FUN_105060eb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b4480;
  func_0x00010c28fb40(PTR_PTR_1126b4480,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105060ef8; end: 105061027; -[SCUnifiedProfileChatAttachmentActionHandler _fetchConversation:chatAttachment:] */

void FUN_105060ef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfa5fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105061028; end: 10506107b;  */

void FUN_105061028(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0cb20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506107c; end: 1050611bb; -[SCUnifiedProfileChatAttachmentActionHandler _exposeAttachmentScopeWithAttachment:conversationSubtypeMetadata:dataModel:] */

void FUN_10506107c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar4 = param_5;
  func_0x00010bf509a0();
  if (lVar4 == 0) {
    lVar4 = param_5;
    func_0x00010c0f0700(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = 0;
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b4488;
  _objc_alloc(PTR_PTR_1126b4488);
  lVar2 = param_5;
  func_0x00010c15df40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4980(puVar3,param_2,param_3,lVar2,lVar4,param_4,puVar1,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1050611bc; end: 105061203; -[SCUnifiedProfileChatAttachmentActionHandler didDismissChatAttachment] */

void FUN_1050611bc(long param_1)

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



/* Entry: 105061204; end: 10506121b; -[SCUnifiedProfileChatAttachmentActionHandler unifiedProfileViewController] */

void FUN_105061204(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506121c; end: 105061227; -[SCUnifiedProfileChatAttachmentActionHandler setUnifiedProfileViewController:] */

void FUN_10506121c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105061228; end: 10506125f; -[SCUnifiedProfileChatAttachmentActionHandler .cxx_destruct] */

void FUN_105061228(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105061260; end: 105061757; -[SCProfileChatMediaActionHandler initWithProfileChatMediaDataSource:userSession:snapchattersDataProvider:sessionId:openSource:operaSessionScopeExposer:operaSessionScopeServices:circumstanceEngine:chatLogger:grapheneServices:userBlizzardServices:attributionServices:conversationServices:storiesCachedSummaryInfoProvider:contextOperaPluginProvider:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:eraseMessageScopeExposer:eraseMessageScopeServices:contextOperaChromeLayerPluginProvider:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:snapSaver:notificationPool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105061260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000a0);
  _objc_retain(in_stack_000000a8);
  lVar3 = (long)_DAT_11271adb4;
  puStack_70 = PTR_PTR_1126e5ca0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithProfileChatMediaDataSour_1125ec570,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271adb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271adbc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271adc0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271adc4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271adc8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271adcc;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271add0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271add4;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271add8;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271addc;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271ade0;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271ade4;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271ade8;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271adec;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000058);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = in_stack_00000058;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271adf0;
    _objc_retain(in_stack_00000088);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = in_stack_00000088;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271adf4;
    _objc_retain(in_stack_00000090);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = in_stack_00000090;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271adf8;
    _objc_retain(in_stack_00000098);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = in_stack_00000098;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271adfc;
    _objc_retain(in_stack_000000a0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = in_stack_000000a0;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271ae00;
    _objc_retain(in_stack_000000a8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = in_stack_000000a8;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_000000a8);
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000058);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105061758; end: 105061ab3; -[SCProfileChatMediaActionHandler handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105061758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puStack_70 = PTR_PTR_1126e5ca0;
    puVar9 = &uStack_78;
    uStack_78 = param_1;
    _objc_msgSendSuper2(puVar9,PTR_s_handleActionWithSender_actionMod_1125d19f8,param_3,param_4,
                        param_5);
  }
  else {
    puVar3 = PTR_PTR_1126b4490;
    _objc_alloc();
    uVar1 = param_1;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf36be0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bfadc80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf98720();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf98760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c063300(puVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c07e0(puVar3);
    _objc_release(uVar1);
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined8 *)0x1;
    func_0x00010c11c520();
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 105061ab4; end: 105061c13; -[SCProfileChatMediaActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105061ab4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ae00,0);
  _objc_storeStrong(param_1 + _DAT_11271adfc,0);
  _objc_storeStrong(param_1 + _DAT_11271adf8,0);
  _objc_storeStrong(param_1 + _DAT_11271adf4,0);
  _objc_storeStrong(param_1 + _DAT_11271adf0,0);
  _objc_storeStrong(param_1 + _DAT_11271adb4,0);
  _objc_storeStrong(param_1 + _DAT_11271adec,0);
  _objc_storeStrong(param_1 + _DAT_11271ade8,0);
  _objc_storeStrong(param_1 + _DAT_11271ade4,0);
  _objc_storeStrong(param_1 + _DAT_11271ade0,0);
  _objc_storeStrong(param_1 + _DAT_11271addc,0);
  _objc_storeStrong(param_1 + _DAT_11271add8,0);
  _objc_storeStrong(param_1 + _DAT_11271add4,0);
  _objc_storeStrong(param_1 + _DAT_11271add0,0);
  _objc_storeStrong(param_1 + _DAT_11271adcc,0);
  _objc_storeStrong(param_1 + _DAT_11271adc8,0);
  _objc_storeStrong(param_1 + _DAT_11271adc4,0);
  _objc_storeStrong(param_1 + _DAT_11271adc0,0);
  _objc_storeStrong(param_1 + _DAT_11271adbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271adb8,0);
  return;
}



/* Entry: 105061c14; end: 105062013; -[SCProfileChatMediaActionMenuPageActionHandler initWithProfileChatMediaDataSource:userSession:presentingViewController:loggingService:openSource:chatLogger:conversationServices:circumstanceEngine:contentDelivery:chatMediaFetcher:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:eraseMessageScopeExposer:eraseMessageScopeServices:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:snapSaver:notificationPool:] */

undefined8 *
FUN_105061c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126e5ca8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9980(puVar1[1]);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_storeWeak(puVar1 + 5,param_6);
    puVar1[6] = param_7;
    _objc_retain(param_8);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[7];
    puVar1[7] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[8];
    puVar1[8] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar1[9];
    puVar1[9] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar1[10];
    puVar1[10] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar3);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105062014; end: 10506210f; -[SCProfileChatMediaActionMenuPageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_105062014(long param_1,undefined8 param_2,undefined **param_3,ulong param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar8 = param_1;
  uVar5 = param_4;
  func_0x00010be25340();
  if ((int)lVar8 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    param_3 = &PTR____CFConstantStringClassReference_110eb73f8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    param_5 = puVar1;
    func_0x00010bf7dbc0(uVar7);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return lVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  uVar2 = uVar5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar2 = uVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar2 = uVar5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        uVar2 = uVar5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 == 0) {
          uVar2 = uVar5;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((int)uVar3 == 0) {
            uVar2 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            if ((int)uVar3 != 0) goto LAB_1050623ac;
            uVar2 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            if ((int)uVar3 != 0) {
              lVar8 = param_4 + 0xa8;
              _objc_loadWeakRetained(lVar8);
              func_0x00010bf83dc0();
              _objc_release(lVar8);
LAB_105062474:
              lVar8 = 1;
              func_0x00010be04460(param_4);
              goto LAB_105062238;
            }
            uVar2 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            if ((int)uVar3 != 0) {
              lVar8 = param_4 + 0xa8;
              _objc_loadWeakRetained(lVar8);
              func_0x00010bf83dc0();
              _objc_release(lVar8);
              goto LAB_105062474;
            }
            uVar2 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            if ((int)uVar3 != 0) {
              _objc_release(uVar2);
LAB_1050624e4:
              lVar6 = param_4 + 0xa8;
              _objc_loadWeakRetained(lVar6);
              lVar8 = 1;
              func_0x00010bf83dc0();
              _objc_release(lVar6);
              func_0x00010be9a1a0(param_4);
              goto LAB_105062238;
            }
            uVar3 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((int)uVar4 != 0) goto LAB_1050624e4;
            uVar2 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            if ((int)uVar3 != 0) {
              lVar6 = param_4 + 0xa8;
              _objc_loadWeakRetained(lVar6);
              lVar8 = 1;
              func_0x00010bf83dc0();
              _objc_release(lVar6);
              goto LAB_105062238;
            }
            uVar2 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            if ((uVar3 & 1) == 0) {
              uVar2 = uVar5;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c0720c0();
              _objc_release(uVar2);
              if ((int)uVar3 == 0) {
                lVar8 = 0;
                goto LAB_105062238;
              }
              lVar8 = param_4 + 0xa8;
              _objc_loadWeakRetained();
              _objc_release();
              if (lVar8 == 0) {
                func_0x00010beaa300(param_4);
              }
              else {
                _objc_initWeak(auStack_b8,param_4);
                lVar8 = param_4 + 0xa8;
                _objc_loadWeakRetained(lVar8);
                _objc_copyWeak(auStack_c0,auStack_b8);
                _objc_retain(uVar5);
                func_0x00010bf83dc0(lVar8);
                _objc_release(lVar8);
                _objc_release(uVar5);
                _objc_destroyWeak(auStack_c0);
                _objc_destroyWeak(auStack_b8);
              }
            }
          }
          else {
LAB_1050623ac:
            func_0x00010bed1ee0(param_4);
          }
          lVar8 = 1;
          goto LAB_105062238;
        }
        lVar8 = param_4 + 0xa8;
        _objc_loadWeakRetained(lVar8);
        func_0x00010bf83dc0();
        _objc_release(lVar8);
      }
      else {
        lVar8 = param_4 + 0xa8;
        _objc_loadWeakRetained(lVar8);
        func_0x00010bf83dc0();
        _objc_release(lVar8);
      }
      lVar8 = 1;
      func_0x00010be05060(param_4);
      goto LAB_105062238;
    }
    lVar8 = param_4 + 0xa8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010bf83dc0();
    _objc_release(lVar8);
  }
  else {
    lVar8 = param_4 + 0xa8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010bf83dc0();
    _objc_release(lVar8);
  }
  lVar8 = 1;
  func_0x00010be995a0(param_4);
LAB_105062238:
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(param_3);
  return lVar8;
}



/* Entry: 105062110; end: 10506269f; -[SCProfileChatMediaActionMenuPageActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105062110(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar1);
          if ((int)uVar2 == 0) {
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar2 != 0) goto LAB_1050623ac;
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar2 != 0) {
              lVar4 = param_1 + 0xa8;
              _objc_loadWeakRetained(lVar4);
              func_0x00010bf83dc0();
              _objc_release(lVar4);
LAB_105062474:
              uVar5 = 1;
              func_0x00010be04460(param_1);
              goto LAB_105062238;
            }
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar2 != 0) {
              lVar4 = param_1 + 0xa8;
              _objc_loadWeakRetained(lVar4);
              func_0x00010bf83dc0();
              _objc_release(lVar4);
              goto LAB_105062474;
            }
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            if ((int)uVar2 != 0) {
              _objc_release(uVar1);
LAB_1050624e4:
              lVar4 = param_1 + 0xa8;
              _objc_loadWeakRetained(lVar4);
              uVar5 = 1;
              func_0x00010bf83dc0();
              _objc_release(lVar4);
              func_0x00010be9a1a0(param_1);
              goto LAB_105062238;
            }
            uVar2 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            _objc_release(uVar1);
            if ((int)uVar3 != 0) goto LAB_1050624e4;
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar2 != 0) {
              param_1 = param_1 + 0xa8;
              _objc_loadWeakRetained(param_1);
              uVar5 = 1;
              func_0x00010bf83dc0();
              _objc_release(param_1);
              goto LAB_105062238;
            }
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((uVar2 & 1) == 0) {
              uVar1 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010c0720c0();
              _objc_release(uVar1);
              if ((int)uVar2 == 0) {
                uVar5 = 0;
                goto LAB_105062238;
              }
              lVar4 = param_1 + 0xa8;
              _objc_loadWeakRetained();
              _objc_release();
              if (lVar4 == 0) {
                func_0x00010beaa300(param_1);
              }
              else {
                _objc_initWeak(auStack_58,param_1);
                param_1 = param_1 + 0xa8;
                _objc_loadWeakRetained(param_1);
                _objc_copyWeak(auStack_60,auStack_58);
                _objc_retain(param_4);
                func_0x00010bf83dc0(param_1);
                _objc_release(param_1);
                _objc_release(param_4);
                _objc_destroyWeak(auStack_60);
                _objc_destroyWeak(auStack_58);
              }
            }
          }
          else {
LAB_1050623ac:
            func_0x00010bed1ee0(param_1);
          }
          uVar5 = 1;
          goto LAB_105062238;
        }
        lVar4 = param_1 + 0xa8;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bf83dc0();
        _objc_release(lVar4);
      }
      else {
        lVar4 = param_1 + 0xa8;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bf83dc0();
        _objc_release(lVar4);
      }
      uVar5 = 1;
      func_0x00010be05060(param_1);
      goto LAB_105062238;
    }
    lVar4 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf83dc0();
    _objc_release(lVar4);
  }
  else {
    lVar4 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf83dc0();
    _objc_release(lVar4);
  }
  uVar5 = 1;
  func_0x00010be995a0(param_1);
LAB_105062238:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1050626a0; end: 1050626d3;  */

void FUN_1050626a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050626d4; end: 1050628b3; -[SCProfileChatMediaActionMenuPageActionHandler _setWallpaper:] */

void FUN_1050626d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010c0c4680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0c5240(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (uVar6 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar8 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar8);
      func_0x00010c038f40(puVar2);
      _objc_release(lVar8);
      puVar7 = PTR_PTR_1126b2d38;
      func_0x00010bf36e40(PTR_PTR_1126b2d38);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_1 + 0x48);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22d80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48));
      _objc_release(uVar9);
      _objc_release(puVar7);
      _objc_release(puVar2);
    }
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050628b4; end: 105062b47; -[SCProfileChatMediaActionMenuPageActionHandler _saveMedia:source:] */

void FUN_1050628b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0cb2a0();
  if (uVar3 == 10) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc3a58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3a58,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc3a78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3a78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105062a04(ppuVar4,ppuVar5);
  }
  else {
    ppuVar4 = *(undefined ***)(param_1 + 0x60);
    func_0x00010bf50600(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0cb5a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a9c0(ppuVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105062b48; end: 105062ea3; -[SCProfileChatMediaActionMenuPageActionHandler _displayUnsaveMediaDialog:withConfirmActionIdentifier:] */

void FUN_105062b48(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined **unaff_x28;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0cb2a0();
  if (uVar2 == 10) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc3a98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3a98,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc3ab8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3ab8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105062a04(ppuVar5,ppuVar8);
    _objc_release(ppuVar8);
    _objc_release(ppuVar5);
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puVar3 = PTR_PTR_1126af180;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc3ad8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3ad8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105062ea4;
    puStack_a0 = &UNK_110864438;
    unaff_x28 = &puStack_b8;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(uVar1);
    uStack_90 = uVar1;
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar6 = PTR_PTR_1126af180;
    ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar7 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc3af8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3af8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc3b18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3b18,0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar7);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 6);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar10 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar10);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar3);
  func_0x00010c01b460();
  func_0x00010bfd0140(lVar10);
  _objc_release(lVar10);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 105062ea4; end: 105062f1b;  */

void FUN_105062ea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  func_0x00010bfd0140(param_1,param_2,param_1,puVar1,0);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105062f1c; end: 105063023; -[SCProfileChatMediaActionMenuPageActionHandler _unsaveMedia:source:] */

void FUN_105062f1c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0cb2a0();
  if (uVar3 != 10) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf50600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0cb5a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2824a0(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105063024; end: 1050631cb; -[SCProfileChatMediaActionMenuPageActionHandler _displayDeleteMediaDialog:withConfirmActionIdentifier:] */

void FUN_105063024(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0cb2a0();
  if (uVar3 == 10) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc3b38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3b38,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc3b58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3b58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105062a04(ppuVar4,ppuVar7);
  }
  else {
    ppuVar4 = (undefined **)PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c038f40(ppuVar4);
    _objc_release(lVar5);
    ppuVar7 = *(undefined ***)(param_1 + 0x40);
    uVar3 = uVar1;
    func_0x00010c0cb5a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c073ba0(uVar1);
    func_0x00010c0cb2a0(uVar1);
    func_0x00010bf233e0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050631cc; end: 105063353; -[SCProfileChatMediaActionMenuPageActionHandler _saveToCameraRoll:] */

void FUN_1050631cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0c5240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  uVar5 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0c4680();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar1 != 0 && uVar4 != 0) {
    uVar6 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105063354;
    puStack_60 = &UNK_110848ba8;
    _objc_retain(uVar4);
    uStack_58 = uVar4;
    _objc_retain(param_3);
    uStack_50 = uVar1;
    uStack_48 = param_1;
    func_0x00010007380c(uVar6,&puStack_78);
    _objc_release(uVar6);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  return;
}



/* Entry: 105063354; end: 105063667;  */

void FUN_105063354(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  puVar3 = PTR_PTR_1126b44a0;
  _objc_alloc();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c073ba0(uVar4);
  func_0x00010c028f00(puVar3,param_2,uVar13,uVar4,0,0,0,0,0,
                      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78),
                      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70));
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb2a0();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c06b1c0();
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x60);
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf374e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = uVar14;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105063668;
  puStack_d0 = &UNK_110864468;
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  puStack_c8 = puVar3;
  uStack_c0 = uVar9;
  uStack_b8 = uVar5;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar11;
  uStack_88 = uVar8;
  _objc_retain(uVar16);
  uStack_f0 = *(undefined8 *)(param_1 + 0x30);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1050637d4;
  puStack_f8 = &UNK_110855e40;
  uStack_98 = uVar16;
  uStack_90 = uStack_f0;
  uStack_80 = uVar2;
  _objc_retain(uVar11);
  _objc_retain(uVar10);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar9);
  _objc_retain(puVar3);
  func_0x00010c15c160(uVar13,param_2,uVar5,uVar6,uVar8,uVar14,uVar4,uVar7,uVar15,1,0x11,&puStack_e8,
                      &puStack_110);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(puStack_c8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(uVar7);
  return;
}



/* Entry: 105063668; end: 1050637d3;  */

void FUN_105063668(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0c6c20();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x58);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x60);
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(param_1 + 0x58);
  FUN_10506f47c(puVar5,0,uVar11,uVar3,uVar9,uVar4,uVar1,uVar13,puVar6,uVar7,0,3,uVar2,uVar8,
                *(undefined8 *)(lVar12 + 0x80),*(undefined8 *)(lVar12 + 0x88),
                *(undefined8 *)(lVar12 + 0x90),*(undefined8 *)(lVar12 + 0x98),
                *(undefined8 *)(lVar12 + 0xa0),*(undefined1 *)(param_1 + 0x68));
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126afde0;
  uVar9 = *(undefined8 *)(*(long *)(puVar5 + 0x20) + 0xa0);
  _objc_retain();
  ppuVar10 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  uVar11 = uVar9;
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010c25f340(uVar11);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1050637d4; end: 1050637df;  */

void FUN_1050637d4(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126afde0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  _objc_retain();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  uVar4 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c25f340(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1050637e0; end: 1050637ff; -[SCProfileChatMediaActionMenuPageActionHandler eraseMessageScopeDidDismissAlertView:] */

void FUN_1050637e0(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105063800; end: 105063803; -[SCProfileChatMediaActionMenuPageActionHandler eraseMessageScopeWillDisplayAlertView:] */

void FUN_105063800(void)

{
  return;
}



/* Entry: 105063804; end: 1050638bf; -[SCProfileChatMediaActionMenuPageActionHandler eraseMessageScopeDidEraseMessage:] */

void FUN_105063804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1050638c0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1050638c0; end: 1050638eb;  */

void FUN_1050638c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050638ec; end: 10506391f; -[SCProfileChatMediaActionMenuPageActionHandler _handleMediaDeletion] */

void FUN_1050638ec(long param_1)

{
  param_1 = param_1 + 0xb0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c116680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105063920; end: 105063923; -[SCProfileChatMediaActionMenuPageActionHandler willDisplayChatCustomizationHubScope:] */

void FUN_105063920(void)

{
  return;
}



/* Entry: 105063924; end: 10506396b; -[SCProfileChatMediaActionMenuPageActionHandler didDismissChatCustomizationHubScope:] */

void FUN_105063924(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10506396c; end: 105063a27; -[SCProfileChatMediaActionMenuPageActionHandler didRequestDismissal:] */

void FUN_10506396c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1050639f0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105063a28; end: 105063a3f; -[SCProfileChatMediaActionMenuPageActionHandler actionMenuPresenter] */

void FUN_105063a28(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105063a40; end: 105063a4b; -[SCProfileChatMediaActionMenuPageActionHandler setActionMenuPresenter:] */

void FUN_105063a40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 105063a4c; end: 105063a63; -[SCProfileChatMediaActionMenuPageActionHandler delegate] */

void FUN_105063a4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105063a64; end: 105063a6f; -[SCProfileChatMediaActionMenuPageActionHandler setDelegate:] */

void FUN_105063a64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 105063a70; end: 105063b73; -[SCProfileChatMediaActionMenuPageActionHandler .cxx_destruct] */

void FUN_105063a70(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105063b74; end: 105063f1f; -[SCProfileChatMediaOperaPresenter initWithUserSession:dataSource:sessionId:openSource:chatMediaActionMenuActionHandler:snapchattersDataProvider:operaSessionScopeExposer:operaSessionScopeServices:circumstanceEngine:grapheneServices:userBlizzardServices:conversationServices:storiesCachedSummaryInfoProvider:contextOperaPluginProvider:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:contextOperaChromeLayerPluginProvider:] */

undefined8 *
FUN_105063b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e5cb0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar1[3] = param_6;
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
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
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105063f20; end: 105064097; -[SCProfileChatMediaOperaPresenter presentWithBaseView:media:operaBaseViewProvider:presentingViewController:] */

void FUN_105063f20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_storeWeak(param_1 + 0x38,param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf36b60(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105064098; end: 1050640ef;  */

void FUN_105064098(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050640f0; end: 105064127; -[SCProfileChatMediaOperaPresenter _didTearDownOpera] */

void FUN_1050640f0(long param_1)

{
  func_0x00010be8d260();
  param_1 = param_1 + 0xa0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14b9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105064128; end: 1050643c7; -[SCProfileChatMediaOperaPresenter _presentChatMedia:media:baseView:presentingViewController:] */

void FUN_105064128(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b44a8;
  _objc_alloc();
  func_0x00010c05db60();
  puVar2 = PTR_PTR_1126b44b0;
  _objc_alloc();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = param_4;
  func_0x00010c073ba0(param_4);
  func_0x00010c0450c0(puVar2,param_2,uVar11,uVar12,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  puVar3 = PTR_PTR_1126b44b8;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c03ad00(puVar3,param_2,uVar12,lVar4,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 8));
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126b44c0;
  _objc_alloc();
  func_0x00010bffda00();
  lVar6 = *(long *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  puStack_78 = puVar3;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  if (lVar4 != 0) {
    func_0x00010befa120(puVar8,param_2,lVar4);
  }
  lVar9 = *(long *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010bf55660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (lVar6 != 0) {
    func_0x00010befa120(puVar8,param_2,lVar6);
  }
  lVar9 = param_3;
  uVar12 = param_4;
  uVar11 = param_5;
  puVar7 = puVar8;
  uVar10 = param_6;
  func_0x00010be7a940(param_1,param_2,param_3,param_4,param_5,puVar8,param_6);
  _objc_release(lVar6);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b2400;
  _objc_retain(uVar10);
  _objc_retain(puVar7);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _objc_retain(lVar9);
  _objc_alloc(puVar1);
  func_0x00010c018aa0(0);
  puVar2 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  func_0x00010c0087a0();
  _objc_release(uVar12);
  _objc_release(lVar9);
  uVar12 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010bf23920(uVar12,param_2,0,uVar10,uVar11,puVar2,puVar1,param_3,puVar7,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(uVar11);
  func_0x00010be8d260(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x40),param_2,uVar12);
  _objc_release(uVar12);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050643c8; end: 10506451f; -[SCProfileChatMediaOperaPresenter _presentChatMedia:media:baseView:plugins:presentingViewController:] */

void FUN_1050643c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2400;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c018aa0(0);
  puVar2 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  func_0x00010c0087a0();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf23920(uVar3,param_2,0,param_7,param_5,puVar2,puVar1,param_1,param_6,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010be8d260(param_1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105064520; end: 105064523; -[SCProfileChatMediaOperaPresenter operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_105064520(void)

{
  return;
}



/* Entry: 105064524; end: 105064557; -[SCProfileChatMediaOperaPresenter operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_105064524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27a6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10507fb10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105064558; end: 1050646c7; -[SCProfileChatMediaOperaPresenter operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_105064558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  param_5 = param_5 + 0x38;
  _objc_loadWeakRetained();
  lVar4 = param_5;
  func_0x00010bf163a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_5);
  if (lVar4 == 0) {
    uVar5 = param_7;
    func_0x00010c27a6a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f460();
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar5 = param_7;
    func_0x00010c27a6a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f4e0(0,param_4,param_3,0x3ff0000000000000);
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c283ba0();
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1050646c8; end: 1050646cb; -[SCProfileChatMediaOperaPresenter operaPresenterDidCancelDismissing:] */

void FUN_1050646c8(void)

{
  return;
}



/* Entry: 1050646cc; end: 1050646cf; -[SCProfileChatMediaOperaPresenter operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1050646cc(void)

{
  return;
}



/* Entry: 1050646d0; end: 1050646d3; -[SCProfileChatMediaOperaPresenter operaPresenterDidFailToPresent:] */

void FUN_1050646d0(void)

{
  return;
}



/* Entry: 1050646d4; end: 1050646d7; -[SCProfileChatMediaOperaPresenter operaPresenterDidFinishDismissing:] */

void FUN_1050646d4(void)

{
  return;
}



/* Entry: 1050646d8; end: 1050646db; -[SCProfileChatMediaOperaPresenter operaPresenterDidTearDown:] */

void FUN_1050646d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTearDownOpera_11255de78);
  return;
}



/* Entry: 1050646dc; end: 10506472f; -[SCProfileChatMediaOperaPresenter operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1050646dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0xa0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14b980();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105064730; end: 105064733; -[SCProfileChatMediaOperaPresenter operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_105064730(void)

{
  return;
}



/* Entry: 105064734; end: 10506477b; -[SCProfileChatMediaOperaPresenter _removeScopeIfNeccesary] */

void FUN_105064734(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10506477c; end: 105064793; -[SCProfileChatMediaOperaPresenter delegate] */

void FUN_10506477c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105064794; end: 10506479f; -[SCProfileChatMediaOperaPresenter setDelegate:] */

void FUN_105064794(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 1050647a0; end: 10506488f; -[SCProfileChatMediaOperaPresenter .cxx_destruct] */

void FUN_1050647a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa0);
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
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105064890; end: 10506489b; +[SCChatMediaFolderViewController announcerIdentifier] */

undefined ** FUN_105064890(void)

{
  return &PTR____CFConstantStringClassReference_110dc3bb8;
}



/* Entry: 10506489c; end: 1050648ab; -[SCChatMediaFolderViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10506489c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271aeac),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050648ac; end: 1050648bb; -[SCChatMediaFolderViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050648ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271aeac),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050648bc; end: 105064de7; -[SCChatMediaFolderViewController initWithWithDataSource:userSession:snapchattersDataProvider:sessionId:operaSessionScopeExposer:operaSessionScopeServices:circumstanceEngine:chatLogger:grapheneServices:userBlizzardServices:attributionServices:conversationServices:storiesCachedSummaryInfoProvider:contextOperaPluginProvider:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:eraseMessageScopeExposer:eraseMessageScopeServices:contextOperaChromeLayerPluginProvider:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:snapSaver:notificationPool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1050648bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1126e5cb8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar6 = (long)_DAT_11271aeb0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271aeac);
    *(undefined **)((long)puVar1 + (long)_DAT_11271aeac) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271aeb4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271aeb4) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271aeb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + lVar7));
    uVar2 = param_3;
    func_0x00010bf36b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    FUN_10507fc10(param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271aebc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271aebc) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfddca0();
    *(char *)((long)puVar1 + (long)_DAT_11271aec0) = (char)uVar2;
    puVar3 = PTR_PTR_1126b44d0;
    _objc_alloc();
    func_0x00010c03adc0();
    lVar6 = (long)_DAT_11271aec4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1e1580(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c16f500(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1dda60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR_PTR_1126b4050;
    _objc_alloc();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010bf50280(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004d40();
    lVar6 = (long)_DAT_11271aec8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 105064de8; end: 105064e53; -[SCChatMediaFolderViewController setLoggingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105064de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271aecc;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + _DAT_11271aec4));
  func_0x00010bef9980(*(undefined8 *)(param_1 + _DAT_11271aeac));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105064e54; end: 1050654e3; -[SCChatMediaFolderViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105064e54(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126e5cb8;
  lStack_b8 = param_5;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar17);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b44d8;
  _objc_alloc_init();
  lVar17 = (long)_DAT_11271aed0;
  uVar16 = *(undefined8 *)(param_5 + lVar17);
  *(undefined **)(param_5 + lVar17) = puVar2;
  _objc_release(uVar16);
  func_0x00010c1c8300(0x4000000000000000,*(undefined8 *)(param_5 + lVar17));
  func_0x00010c1c82c0(0x4000000000000000,*(undefined8 *)(param_5 + lVar17));
  func_0x00010c1f93e0(*(double *)PTR__UIEdgeInsetsZero_110345bb0 + 2.0,0x4010000000000000,
                      *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10) + 2.0,0x4010000000000000,
                      *(undefined8 *)(param_5 + lVar17));
  func_0x00010c1c8200(param_4,*(undefined8 *)(param_5 + lVar17));
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  dVar19 = param_3;
  func_0x000100841590(param_3,param_4);
  func_0x00010c014040();
  lVar17 = (long)_DAT_11271aed4;
  uVar16 = *(undefined8 *)(param_5 + lVar17);
  *(undefined **)(param_5 + lVar17) = puVar2;
  _objc_release(uVar16);
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar17));
  func_0x00010c1f7e20(*(undefined8 *)(param_5 + lVar17));
  func_0x00010c2025c0(*(undefined8 *)(param_5 + lVar17));
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar20 = dVar19;
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c181f80(dVar19,0,dVar20,0,*(undefined8 *)(param_5 + lVar17));
  func_0x00010c189840(*(undefined8 *)(param_5 + lVar17));
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar17));
  func_0x00010c160fc0(*(undefined8 *)(param_5 + lVar17));
  func_0x00010c181fc0(*(undefined8 *)(param_5 + lVar17));
  uVar16 = *(undefined8 *)(param_5 + lVar17);
  _objc_opt_class(PTR_PTR_1126b44e0);
  func_0x00010c126000(uVar16);
  uVar16 = *(undefined8 *)(param_5 + lVar17);
  _objc_opt_class(PTR_PTR_1126b44e8);
  func_0x00010c126000(uVar16);
  lVar17 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c0e0760(*(undefined8 *)(param_5 + _DAT_11271aeb4));
  puVar2 = PTR_PTR_1126b44f0;
  _objc_alloc_init();
  lVar17 = (long)_DAT_11271aed8;
  uVar16 = *(undefined8 *)(param_5 + lVar17);
  *(undefined **)(param_5 + lVar17) = puVar2;
  _objc_release(uVar16);
  func_0x00010c17e7e0(param_3 + -8.0,*(undefined8 *)(param_5 + lVar17));
  func_0x00010bf529e0(*(undefined8 *)(param_5 + _DAT_11271aebc));
  func_0x00010c196720(*(undefined8 *)(param_5 + lVar17));
  puVar2 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_11271aedc;
  uVar16 = *(undefined8 *)(param_5 + lVar18);
  *(undefined **)(param_5 + lVar18) = puVar2;
  _objc_release(uVar16);
  puVar3 = PTR_PTR_1126af080;
  _objc_alloc_init();
  func_0x00010c20eaa0();
  func_0x00010c199da0(puVar3);
  func_0x00010c18f820(puVar3);
  func_0x00010c216340(puVar3);
  func_0x00010c1f7d00(puVar3);
  func_0x00010c18b5e0(puVar3);
  func_0x00010c187440(*(undefined8 *)(param_5 + lVar18));
  _objc_initWeak(auStack_c0,param_5);
  uVar16 = *(undefined8 *)(param_5 + _DAT_11271aeb8);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_c8;
  puVar15 = auStack_c0;
  _objc_copyWeak(puVar4,puVar15);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar16);
  _objc_release(puVar4);
  _objc_release(uVar16);
  lVar17 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar18));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_5 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar18);
  uStack_a8 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_5 + lVar18);
  uStack_a0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar16;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(uVar16);
  _objc_release(lVar17);
  _objc_release(param_5);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar15);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bed7040();
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050654e4; end: 10506552b;  */

void FUN_1050654e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506552c; end: 1050655d7; -[SCChatMediaFolderViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10506552c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e5cb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c077fe0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + (long)_DAT_11271aeac));
  return;
}



/* Entry: 1050655d8; end: 10506564f; -[SCChatMediaFolderViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050655d8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5cb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aeb0);
  func_0x00010bf5f860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 105065650; end: 10506575b; -[SCChatMediaFolderViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105065650(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1126e5cb8;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_11271aebc));
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb7498;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11271aeac));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10506575c;
  puStack_78 = PTR_PTR_1126e5cb8;
  puStack_80 = puVar2;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_80,PTR_s_viewDidDisappear__112684c48);
  return;
}



/* Entry: 10506575c; end: 10506578f; -[SCChatMediaFolderViewController viewDidDisappear:] */

void FUN_10506575c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5cb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidDisappear__112684c48);
  return;
}



/* Entry: 105065790; end: 1050657df; -[SCChatMediaFolderViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105065790(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11271aeb4));
  puStack_28 = PTR_PTR_1126e5cb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}


