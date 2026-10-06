/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ab05b0; end: 106ab05b3; -[SCS2RSubScreenViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_106ab05b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewController_1125bec50);
  return;
}



/* Entry: 106ab05b4; end: 106ab05f3; -[SCS2RSubScreenViewController isUsingNavigationViewController] */

bool FUN_106ab05b4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c133c60();
  if (lVar2 == 2) {
    bVar1 = true;
  }
  else {
    func_0x00010c133c60(param_1);
    bVar1 = param_1 == 8;
  }
  return bVar1;
}



/* Entry: 106ab05f4; end: 106ab06ff; -[SCS2RSubScreenViewController dismissViewController] */

void FUN_106ab05f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  func_0x00010c082a00();
  if ((int)uVar1 != 0) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ab0700; end: 106ab07ab;  */

void FUN_106ab0700(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22a1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a5708);
  _objc_release(lVar2);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c22a1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a260();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ab07ac; end: 106ab0823; -[SCS2RSubScreenViewController presentViewController:] */

void FUN_106ab07ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c082a00();
  if ((int)uVar1 == 0) {
    func_0x00010c10eda0(param_1,param_2,param_3,1,0);
  }
  else {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ab0824; end: 106ab0863; -[SCS2RSubScreenViewController cardTransitionWillBeginWithView:] */

void FUN_106ab0824(undefined8 param_1)

{
  func_0x00010bf84aa0();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ab0864; end: 106ab0873; -[SCS2RSubScreenViewController reportSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab0864(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275740c);
}



/* Entry: 106ab0874; end: 106ab0883; -[SCS2RSubScreenViewController setReportSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0874(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11275740c) = param_3;
  return;
}



/* Entry: 106ab0884; end: 106ab08a3; -[SCS2RSubScreenViewController shakeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0884(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112757410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ab08a4; end: 106ab08b7; -[SCS2RSubScreenViewController setShakeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab08a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112757410,param_3);
  return;
}



/* Entry: 106ab08b8; end: 106ab08c7; -[SCS2RSubScreenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab08b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757410);
  return;
}



/* Entry: 106ab08c8; end: 106ab097f; -[SCS2RWebViewController initWithTitle:url:reportSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ab08c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f49f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithReportSource__112532ea0,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c216240(puVar1);
    func_0x00010c20eaa0(puVar1);
    lVar3 = (long)_DAT_112757414;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ab0980; end: 106ab0a47; -[SCS2RWebViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0980(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_alloc_init(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  puVar2 = PTR_PTR_1126b4f58;
  func_0x00010bdc3620(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),PTR_PTR_1126b4f58,param_2,
                      puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112757414));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c152980(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ab0a48; end: 106ab0a5b; -[SCS2RWebViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757414,0);
  return;
}



/* Entry: 106ab0a5c; end: 106ab0c93; -[SCSIGBaseShakeToReportViewController initWithCapturedData:featureNames:reportType:reportSouce:configuration:shakeTicketAdapter:s2rInfoProviderServices:preselectedFeatureIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106ab0a5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f4a00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithReportSource__112532ea0,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112757418;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(long *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275741c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757420) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757424) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112757428) = 0;
    if (param_3 == 0) {
      *(undefined1 *)((long)puVar1 + (long)_DAT_11275742c) = 0;
    }
    else {
      lVar4 = param_3;
      func_0x00010c151860();
      _objc_retainAutoreleasedReturnValue();
      *(bool *)((long)puVar1 + (long)_DAT_11275742c) = lVar4 != 0;
      _objc_release();
    }
    *(undefined1 *)((long)puVar1 + (long)_DAT_112757430) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112757434) = 0;
    lVar4 = (long)_DAT_112757438;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275743c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112757440;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112757444;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be235e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(puVar3);
    func_0x00010c20eaa0(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ab0c94; end: 106ab1167; -[SCSIGBaseShakeToReportViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab0c94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f4a00;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_loadView_112604be0);
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar9);
  puVar1 = PTR_PTR_1126d0250;
  _objc_alloc();
  lVar8 = (long)_DAT_112757438;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf61440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c014940(uVar10,uVar11,uVar12,uVar13);
  lVar9 = (long)_DAT_112757448;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112757418);
  func_0x00010c151860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6de0(uVar6);
  _objc_release(uVar2);
  lVar9 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  puVar1 = PTR_PTR_1126c2580;
  func_0x000106ac101c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11275744c;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar2);
  _objc_release(lVar9);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010bee1360(param_1);
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  lVar9 = (long)_DAT_112757450;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  lVar9 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  puVar1 = PTR_PTR_1126d0218;
  func_0x00010bfc6ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112757454;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar9));
  lVar9 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010be6e060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc63a0(param_1);
  _objc_release(lVar9);
  lVar9 = *(long *)(param_1 + lVar8);
  func_0x00010bf61520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar9 = (long)_DAT_112757458;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar9));
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf61520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar9));
    _objc_release(uVar2);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar9));
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar9));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
    lVar9 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar9);
  }
  lVar9 = param_1;
  func_0x00010beb5b60();
  if ((int)lVar9 != 0) {
    puVar1 = PTR_PTR_1126b09c0;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x000106ac0f8c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051640();
    lVar9 = (long)_DAT_11275745c;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
    lVar9 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar9);
    func_0x00010c1503c0(0x4008000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar4 = *(ulong *)(param_1 + _DAT_112757444);
  if ((uVar4 != 0) && (func_0x00010c067fc0(), -1 < (long)uVar4)) {
    uVar5 = *(ulong *)(param_1 + _DAT_11275741c);
    func_0x00010bf529e0();
    if (uVar4 < uVar5) {
      func_0x00010bf7a9c0(param_1);
    }
  }
  func_0x00010beabac0(param_1);
  return;
}



/* Entry: 106ab1168; end: 106ab11b3; -[SCSIGBaseShakeToReportViewController viewWillAppear:] */

void FUN_106ab1168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010befa2c0();
  puStack_28 = PTR_PTR_1126f4a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 106ab11b4; end: 106ab11ff; -[SCSIGBaseShakeToReportViewController viewWillDisappear:] */

void FUN_106ab11b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d5e0();
  puStack_28 = PTR_PTR_1126f4a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 106ab1200; end: 106ab12cb; -[SCSIGBaseShakeToReportViewController attachmentDidSingleTap:attachmentView:type:] */

void FUN_106ab1200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if ((param_5 == 3) || (param_5 == 0)) {
    puVar1 = PTR_PTR_1126d0258;
    _objc_alloc(PTR_PTR_1126d0258);
    uVar2 = param_4;
    func_0x00010bfe6ac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c16b1a0(puVar1,param_2,param_3);
    func_0x00010c193540(puVar1,param_2,param_1);
    func_0x00010c1c8b80(puVar1,param_2,5);
    func_0x00010c10eda0(param_1,param_2,puVar1,1,0);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ab12cc; end: 106ab135f; -[SCSIGBaseShakeToReportViewController descriptionTextDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab12cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112757448;
  if ((*(byte *)(param_1 + _DAT_112757428) & 1) == 0) {
    func_0x00010c139220(*(undefined8 *)(param_1 + lVar3));
  }
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  *(bool *)(param_1 + _DAT_112757434) = lVar2 != 0;
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubmitButton_112595e80);
  return;
}



/* Entry: 106ab1360; end: 106ab14c7; -[SCSIGBaseShakeToReportViewController imagePickerController:didFinishPickingMediaWithInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__UIImagePickerControllerMediaType_110345cb0
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,
                        *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_110345cc0);
    _objc_retainAutoreleasedReturnValue();
    *(undefined1 *)(param_1 + _DAT_11275742c) = 0;
    *(undefined1 *)(param_1 + _DAT_112757430) = 1;
    puVar2 = PTR_PTR_1126d0260;
    _objc_alloc();
    lVar6 = (long)_DAT_112757418;
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c29e280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c29c360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0620e0(puVar2,param_2,uVar3,uVar4,uVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bdc7100(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  func_0x00010bf84b00(param_3,param_2,1,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ab14c8; end: 106ab15a3; -[SCSIGBaseShakeToReportViewController drawOnAttachmentViewController:didChangeAttachmentImage:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab14c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d0260;
  _objc_retain(param_4);
  _objc_alloc();
  lVar5 = (long)_DAT_112757418;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29e280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29c360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0620e0(puVar1,param_2,uVar2,uVar3,param_4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c283760(*(undefined8 *)(param_1 + _DAT_112757448),param_2,param_5,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ab15a4; end: 106ab15cb; -[SCSIGBaseShakeToReportViewController drawOnAttachmentViewControllerDidDeleteImage:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab15a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + _DAT_11275742c) = 0;
  *(undefined1 *)(param_1 + _DAT_112757430) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf6b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757448),PTR_s_deleteAttatchmentAtIndex__1125b8760,
             param_4);
  return;
}



/* Entry: 106ab15cc; end: 106ab1643; -[SCSIGBaseShakeToReportViewController didSelectFeatureInIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab15cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + _DAT_112757424) = param_3;
  lVar1 = param_1;
  func_0x00010be1dc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112757460);
  func_0x00010c27f7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubmitButton_112595e80);
  return;
}



/* Entry: 106ab1644; end: 106ab16d7; -[SCSIGBaseShakeToReportViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_106ab1644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0268;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000106ac0fec();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c133c60(param_1);
  func_0x00010c0539c0(puVar1,param_2,puVar2,param_4,uVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010c10ed60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ab16d8; end: 106ab1773; -[SCSIGBaseShakeToReportViewController addObservers] */

void FUN_106ab16d8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ab1774; end: 106ab1787; -[SCSIGBaseShakeToReportViewController keyboardWillshow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757454),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106ab1788; end: 106ab179b; -[SCSIGBaseShakeToReportViewController keyboardWillBeHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757454),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 106ab179c; end: 106ab17db; -[SCSIGBaseShakeToReportViewController removeObservers] */

void FUN_106ab179c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ab17dc; end: 106ab1887; -[SCSIGBaseShakeToReportViewController _updateSubmitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab17dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + _DAT_112757434) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112757428) = 0;
    uVar3 = 0x6f;
  }
  else {
    lVar1 = param_1;
    func_0x00010be9de40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112757428;
    *(bool *)(param_1 + lVar4) = lVar1 != 0;
    _objc_release();
    uVar3 = 0x6a;
    if (*(char *)(param_1 + lVar4) == '\0') {
      uVar3 = 0x6f;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11275744c),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106ab1888; end: 106ab191b; -[SCSIGBaseShakeToReportViewController _getTitleByReportSource:reportType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1888(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112757438;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf61980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (param_4 == 2) {
      func_0x000106ac0fd4();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      func_0x000106ac0fbc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf61980(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ab191c; end: 106ab192f; -[SCSIGBaseShakeToReportViewController _addImageAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab191c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757448),PTR_s_addAttachment_type__11259b520,param_3,3
            );
  return;
}



/* Entry: 106ab1930; end: 106ab196f; -[SCSIGBaseShakeToReportViewController _selectedFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1930(long param_1)

{
  if (-1 < *(long *)(param_1 + _DAT_112757424)) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + _DAT_11275741c));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ab1970; end: 106ab1a0b; -[SCSIGBaseShakeToReportViewController _highlightRequiredFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1970(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112757434) & 1) == 0) {
    func_0x00010bfe3240(*(undefined8 *)(param_1 + _DAT_112757448));
  }
  lVar1 = param_1;
  func_0x00010be9de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1a8880(*(undefined8 *)(param_1 + _DAT_112757460),param_2,1,1);
    func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s__resetSelectedCell_112532ec0,0,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106ab1a0c; end: 106ab1a23; -[SCSIGBaseShakeToReportViewController _resetSelectedCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757460),PTR_s_setHighlighted_animated__112647c40,0,1)
  ;
  return;
}



/* Entry: 106ab1a24; end: 106ab1e77; -[SCSIGBaseShakeToReportViewController _submitButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1a24(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined **ppuStack_98;
  undefined **ppuStack_78;
  
  func_0x00010be358a0();
  if ((*(byte *)((long)param_1 + (long)_DAT_112757428) & 1) != 0) {
    ppuVar1 = param_1;
    func_0x00010c133c60();
    ppuVar18 = param_1;
    if ((((ppuVar1 == (undefined **)0x2) ||
         (ppuVar1 = param_1, func_0x00010c133c60(), ppuVar1 == (undefined **)0x7)) ||
        (ppuVar1 = param_1, func_0x00010c133c60(), ppuVar1 == (undefined **)0x6)) ||
       (((ppuVar1 = param_1, func_0x00010c133c60(), ppuVar1 == (undefined **)0x5 ||
         (ppuVar1 = param_1, func_0x00010c133c60(), ppuVar1 == (undefined **)0x9)) ||
        ((ppuVar1 = param_1, func_0x00010c133c60(), ppuVar1 == (undefined **)0x8 ||
         (ppuVar1 = param_1, func_0x00010c133c60(), ppuVar1 == (undefined **)0xa)))))) {
      ppuVar1 = param_1;
      func_0x00010c151320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9de40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_78 = ppuVar18;
      func_0x00010bf2f880();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be9de40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar18;
      func_0x00010bf2f880();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    _objc_release(ppuVar18);
    uVar19 = *(undefined8 *)((long)param_1 + (long)_DAT_11275743c);
    ppuVar18 = param_1;
    func_0x00010c22a200();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar18 == (undefined **)0x0) {
      ppuVar2 = ppuVar18;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar2 = param_1;
      func_0x00010c22a200();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c246780();
    func_0x00010c133c60();
    uVar3 = *(undefined8 *)((long)param_1 + (long)_DAT_112757448);
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)param_1 + (long)_DAT_112757418);
    func_0x00010c151860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    ppuVar7 = param_1;
    func_0x00010c29c2e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
      ppuStack_98 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuStack_98 = param_1;
      func_0x00010c29c2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = param_1;
    func_0x00010c29c1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d0148;
    func_0x00010bfc4960();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_1;
    func_0x00010be9de40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c0edea0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)param_1 + (long)_DAT_112757464;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf5e340();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bf32da0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_112757440);
    func_0x00010bfede00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaca20(uVar19);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    if (ppuVar7 != (undefined **)0x0) {
      _objc_release(ppuStack_98);
    }
    _objc_release(ppuVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar18);
    func_0x00010bf84aa0(param_1);
    func_0x00010bf85360(PTR_PTR_1126d0238);
    _objc_release(ppuStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be36170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__highlightRequiredFields_11256b1f8);
  return;
}



/* Entry: 106ab1e78; end: 106ab20d3; -[SCSIGBaseShakeToReportViewController _optionCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab1e78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = *(ulong *)(param_1 + _DAT_112757438);
  func_0x00010bfe1dc0();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b5a18;
    _objc_alloc_init();
    lVar9 = (long)_DAT_112757468;
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar3;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c20eaa0(uVar7,param_2,1,0xf);
    FUN_106ac0f14();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c27f7a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(uVar4);
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e6abd8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c19f0e0(0,0,0x4038000000000000,0x4038000000000000);
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c27f7a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(uVar7);
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar9),param_2,puVar6);
    func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126b5a18;
  _objc_alloc_init();
  lVar8 = (long)_DAT_112757460;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar3;
  _objc_release(uVar7);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar8),param_2,1,0xf);
  lVar9 = param_1;
  func_0x00010be1dc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c27f7a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar7);
  _objc_release(lVar9);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c27f7a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar8),param_2,puVar3);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ab20d4; end: 106ab236f; -[SCSIGBaseShakeToReportViewController _addAttachmentSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab20d4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar1 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ab2370;
  puStack_88 = &UNK_110848c78;
  lStack_80 = param_1;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126aed70;
  puVar2 = (undefined1 *)ppuVar1;
  func_0x000106ac0f74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000106ac1004();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (((*(byte *)(param_1 + _DAT_11275742c) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112757430) != '\x01')) {
    puVar5 = *(undefined **)(param_1 + _DAT_112757438);
    func_0x00010bf61220();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      func_0x000106ac0f2c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar5);
    }
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar7 = puVar5;
    func_0x000106ac0f14();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar6 = puVar5;
    func_0x000106ac0f44();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000106ac0f5c();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar3;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010be358a0(param_1);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  puVar3 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
  func_0x00010c07ef40();
  if ((int)puVar3 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
    _objc_alloc_init(PTR__OBJC_CLASS___UIImagePickerController_1126b4af0);
    func_0x00010c207200();
    func_0x00010c167560(puVar3);
    func_0x00010c18b5e0(puVar3);
    func_0x00010c10eda0(*(undefined8 *)((long)ppuVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106ab2370; end: 106ab23ff;  */

void FUN_106ab2370(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
  func_0x00010c07ef40();
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
    _objc_alloc_init(PTR__OBJC_CLASS___UIImagePickerController_1126b4af0);
    func_0x00010c207200();
    func_0x00010c167560(puVar1);
    func_0x00010c18b5e0(puVar1);
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106ab2400; end: 106ab240f;  */

void FUN_106ab2400(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106ab2410; end: 106ab24c7; -[SCSIGBaseShakeToReportViewController _chooseTopicSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab2410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d0270;
  _objc_alloc(PTR_PTR_1126d0270);
  lVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275741c);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112757424);
  lVar3 = param_1;
  func_0x00010c133c60(param_1);
  func_0x00010c052f80(puVar1,param_2,lVar2,uVar4,uVar5,lVar3);
  _objc_release(lVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010be358a0(param_1);
  func_0x00010c10ed60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ab24c8; end: 106ab2687; -[SCSIGBaseShakeToReportViewController _addCells:toView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab24c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
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
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined *puVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined *puVar46;
  long lVar47;
  long lVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined *puVar51;
  long lVar52;
  long lStack_310;
  undefined *puStack_1d8;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar46 = auStack_f0;
  lVar48 = param_3;
  func_0x00010bf52a60();
  lVar47 = lRam0000000000000000;
  if (lVar48 != 0) {
    uVar49 = 0;
    do {
      lVar52 = 0;
      uVar44 = uVar49;
      do {
        if (lRam0000000000000000 != lVar47) {
          _objc_enumerationMutation(param_3);
        }
        uVar49 = *(undefined8 *)(lVar52 * 8);
        func_0x00010c219b60(uVar49);
        func_0x00010befbb60(param_4);
        uVar45 = param_1;
        func_0x00010bde6720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(uVar45);
        _objc_retain(uVar49);
        _objc_release(uVar44);
        lVar52 = lVar52 + 1;
        uVar44 = uVar49;
      } while (lVar48 != lVar52);
      puVar46 = auStack_f0;
      lVar48 = param_3;
      func_0x00010bf52a60();
    } while (lVar48 != 0);
    _objc_release(uVar49);
  }
  _objc_release(param_3);
  puVar13 = puVar1;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar47 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar13);
    _objc_retain(puVar46);
    puVar1 = puVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    if (puVar46 == (undefined *)0x0) {
      puStack_1d8 = puVar13;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puStack_1d8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = puVar46;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d8 = puVar2;
    }
    puStack_1c8 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar13;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puStack_1c0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0(puVar3,puVar4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    if (puVar46 != (undefined *)0x0) {
      puVar10 = puVar46;
    }
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = puVar7;
    puVar39 = puVar5;
    puVar40 = puVar3;
    puVar42 = puVar6;
    puVar50 = puVar8;
    puVar51 = puVar9;
    if (puVar46 == (undefined *)0x0) {
      _objc_release(puVar10);
      puVar11 = puVar14;
      puVar39 = puVar4;
      puVar4 = puStack_1c0;
      puVar40 = puStack_1c8;
      puVar42 = puVar5;
      puVar14 = puVar6;
      puVar50 = puVar7;
      puVar51 = puVar8;
      puVar10 = puVar9;
      puStack_1c8 = puVar2;
      puStack_1c0 = puVar3;
    }
    _objc_release(puVar10);
    _objc_release(puVar51);
    _objc_release(puVar50);
    _objc_release(puVar11);
    _objc_release(puVar14);
    _objc_release(puVar42);
    _objc_release(puVar39);
    _objc_release(puVar4);
    _objc_release(puStack_1c0);
    _objc_release(puVar40);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1d8);
    _objc_release(puVar1);
    _objc_release(puVar46);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar47) {
      ___stack_chk_fail();
      lVar48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar46 = puVar13;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar46;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar46);
      lVar47 = *(long *)(puVar13 + _DAT_112757438);
      func_0x00010bf61520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar47 == 0) {
        lStack_310 = (long)_DAT_112757448;
      }
      else {
        lVar47 = (long)_DAT_112757458;
        puVar14 = *(undefined **)(puVar13 + lVar47);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        uVar15 = *(undefined8 *)(puVar13 + lVar47);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar46 = puVar13;
        func_0x00010c152980();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar46;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar49 = uVar15;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(puVar13 + lVar47);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar13;
        func_0x00010c152980();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar44 = uVar16;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(puVar13 + lVar47);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar13;
        func_0x00010c152980(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar45 = uVar17;
        func_0x00010bf493c0(0xc030000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = *(undefined8 *)(puVar13 + lVar47);
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        lStack_310 = (long)_DAT_112757448;
        uVar19 = *(undefined8 *)(puVar13 + lStack_310);
        func_0x00010c2a5060(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar18;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar12);
        _objc_release(puVar6);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(uVar45);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(uVar17);
        _objc_release(uVar44);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(uVar16);
        _objc_release(uVar49);
        _objc_release(puVar1);
        _objc_release(puVar46);
        _objc_release(uVar15);
        puVar1 = puVar14;
      }
      uVar21 = *(undefined8 *)(puVar13 + lStack_310);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar46 = puVar13;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar46;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar49 = uVar21;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(puVar13 + lStack_310);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar13;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar44 = uVar22;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(puVar13 + lStack_310);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar23;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(puVar13 + lStack_310);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar24;
      func_0x00010bf49420(0x4060000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar47 = (long)_DAT_112757450;
      uVar25 = *(undefined8 *)(puVar13 + lVar47);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar14;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(puVar13 + lVar47);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar13;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar26;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = *(undefined8 *)(puVar13 + lVar47);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)(puVar13 + lStack_310);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar27;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = *(undefined8 *)(puVar13 + lVar47);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar47 = (long)_DAT_112757460;
      uVar30 = *(undefined8 *)(puVar13 + lVar47);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar29;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar52 = (long)_DAT_112757454;
      uVar31 = *(undefined8 *)(puVar13 + lVar52);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = *(undefined8 *)(puVar13 + lVar47);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar31;
      func_0x00010bf49480(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar33 = *(undefined8 *)(puVar13 + lVar52);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = *(undefined8 *)(puVar13 + _DAT_11275744c);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar35 = uVar33;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar36 = *(undefined8 *)(puVar13 + lVar52);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar13;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = uVar36;
      func_0x00010bf493c0(0xc050000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar38 = *(undefined8 *)(puVar13 + lVar52);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar13;
      func_0x00010c29bf00(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar40 = puVar39;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar38;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar12);
      _objc_release(puVar42);
      _objc_release(uVar41);
      _objc_release(puVar40);
      _objc_release(puVar39);
      _objc_release(uVar38);
      _objc_release(uVar37);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(uVar34);
      _objc_release(uVar33);
      _objc_release(uVar19);
      _objc_release(uVar32);
      _objc_release(uVar31);
      _objc_release(uVar18);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar17);
      _objc_release(uVar28);
      _objc_release(uVar27);
      _objc_release(uVar16);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar26);
      _objc_release(uVar15);
      _objc_release(puVar7);
      _objc_release(puVar14);
      _objc_release(uVar25);
      _objc_release(uVar20);
      _objc_release(uVar24);
      _objc_release(uVar45);
      _objc_release(uVar23);
      _objc_release(uVar44);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar22);
      _objc_release(uVar49);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar46);
      _objc_release(uVar21);
      lVar52 = (long)_DAT_11275745c;
      lVar47 = *(long *)(puVar13 + lVar52);
      if (lVar47 != 0) {
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar46 = puVar13;
        func_0x00010c29bf00(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar46;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar43 = lVar47;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar44 = *(undefined8 *)(puVar13 + lVar52);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar45 = *(undefined8 *)(puVar13 + lStack_310);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar49 = uVar44;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar12);
        _objc_release(puVar13);
        _objc_release(uVar49);
        _objc_release(uVar45);
        _objc_release(uVar44);
        _objc_release(lVar43);
        _objc_release(puVar2);
        _objc_release(puVar46);
        _objc_release(lVar47);
      }
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar48) {
        return;
      }
      ___stack_chk_fail();
      if (*(long *)(puVar12 + _DAT_112757424) < 0) {
        func_0x000106ac1afc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar46 = *(undefined **)(puVar12 + _DAT_11275741c);
        func_0x00010c0dfd40(puVar46);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar46;
        func_0x00010c09e3e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar46);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  return;
}



/* Entry: 106ab2688; end: 106ab2973; -[SCSIGBaseShakeToReportViewController _constraintsForCell:below:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab2688(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined *puVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lStack_1e0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  
  lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    lStack_a8 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = lStack_a8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar42 = param_4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lStack_a8 = lVar42;
  }
  lStack_98 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_90;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar46;
  func_0x00010bf493a0(lVar46,lVar1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  if (param_4 != 0) {
    lVar6 = param_4;
  }
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar5;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar43);
  lVar43 = lVar45;
  lVar33 = lVar2;
  lVar44 = lVar46;
  lVar36 = lVar3;
  lVar47 = lVar4;
  lVar48 = lVar5;
  if (param_4 == 0) {
    _objc_release(lVar6);
    lVar43 = lVar9;
    lVar33 = lVar1;
    lVar1 = lStack_90;
    lVar44 = lStack_98;
    lVar36 = lVar2;
    lVar9 = lVar3;
    lVar47 = lVar45;
    lVar48 = lVar4;
    lVar6 = lVar5;
    lStack_98 = lVar42;
    lStack_90 = lVar46;
  }
  _objc_release(lVar6);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar43);
  _objc_release(lVar9);
  _objc_release(lVar36);
  _objc_release(lVar33);
  _objc_release(lVar1);
  _objc_release(lStack_90);
  _objc_release(lVar44);
  _objc_release(lStack_98);
  _objc_release(lStack_a8);
  _objc_release(lVar8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar41) {
    ___stack_chk_fail();
    lVar42 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar8 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = lVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = *(long *)(param_3 + _DAT_112757438);
    func_0x00010bf61520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 == 0) {
      lStack_1e0 = (long)_DAT_112757448;
    }
    else {
      lVar45 = (long)_DAT_112757458;
      lVar9 = *(long *)(param_3 + lVar45);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar41);
      uVar10 = *(undefined8 *)(param_3 + lVar45);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      lVar41 = lVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + lVar45);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar46 = param_3;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar46;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar38 = uVar12;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_3 + lVar45);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c152980(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar13;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_3 + lVar45);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lStack_1e0 = (long)_DAT_112757448;
      uVar15 = *(undefined8 *)(param_3 + lStack_1e0);
      func_0x00010c2a5060(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar14;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar7);
      _objc_release(puVar40);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar39);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar13);
      _objc_release(uVar38);
      _objc_release(lVar1);
      _objc_release(lVar46);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(lVar41);
      _objc_release(lVar8);
      _objc_release(uVar10);
      lVar41 = lVar9;
    }
    uVar17 = *(undefined8 *)(param_3 + lStack_1e0);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = lVar8;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar46;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar17;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_3 + lStack_1e0);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar18;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_3 + lStack_1e0);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar19;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_3 + lStack_1e0);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar20;
    func_0x00010bf49420(0x4060000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar43 = (long)_DAT_112757450;
    uVar21 = *(undefined8 *)(param_3 + lVar43);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar45;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_3 + lVar43);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_3 + lVar43);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_3 + lStack_1e0);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar23;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_3 + lVar43);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = (long)_DAT_112757460;
    uVar26 = *(undefined8 *)(param_3 + lVar43);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = (long)_DAT_112757454;
    uVar27 = *(undefined8 *)(param_3 + lVar44);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_3 + lVar43);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar27;
    func_0x00010bf49480(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(param_3 + lVar44);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_3 + _DAT_11275744c);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar29;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_3 + lVar44);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar43;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar32;
    func_0x00010bf493c0(0xc050000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_3 + lVar44);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar44;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar35;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar7);
    _objc_release(puVar40);
    _objc_release(uVar37);
    _objc_release(lVar36);
    _objc_release(lVar44);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(lVar33);
    _objc_release(lVar43);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar15);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar14);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar13);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar12);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar22);
    _objc_release(uVar10);
    _objc_release(lVar4);
    _objc_release(lVar45);
    _objc_release(uVar21);
    _objc_release(uVar16);
    _objc_release(uVar20);
    _objc_release(uVar39);
    _objc_release(uVar19);
    _objc_release(uVar38);
    _objc_release(lVar9);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar18);
    _objc_release(uVar11);
    _objc_release(lVar1);
    _objc_release(lVar46);
    _objc_release(lVar8);
    _objc_release(uVar17);
    lVar46 = (long)_DAT_11275745c;
    lVar8 = *(long *)(param_3 + lVar46);
    if (lVar8 != 0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar8;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar38 = *(undefined8 *)(param_3 + lVar46);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = *(undefined8 *)(param_3 + lStack_1e0);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar38;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar7);
      _objc_release(puVar40);
      _objc_release(uVar11);
      _objc_release(uVar39);
      _objc_release(uVar38);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar8);
    }
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(lVar41);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar42) {
      return;
    }
    ___stack_chk_fail();
    if (*(long *)(puVar7 + _DAT_112757424) < 0) {
      func_0x000106ac1afc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar40 = *(undefined **)(puVar7 + _DAT_11275741c);
      func_0x00010c0dfd40(puVar40);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar40;
      func_0x00010c09e3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar40);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106ab2974; end: 106ab3333; -[SCSIGBaseShakeToReportViewController _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab2974(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lStack_110;
  long lStack_100;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + _DAT_112757438);
  func_0x00010bf61520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lStack_110 = (long)_DAT_112757448;
  }
  else {
    lVar44 = (long)_DAT_112757458;
    lVar4 = *(long *)(param_1 + lVar44);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar44);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf493c0(0x4030000000000000,uVar5,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar44);
    uStack_90 = uVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = param_1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar45;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar7;
    func_0x00010bf493c0(0x4030000000000000,uVar7,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar44);
    uStack_88 = uVar39;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar9;
    func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar44);
    uStack_80 = uVar40;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lStack_110 = (long)_DAT_112757448;
    uVar13 = *(undefined8 *)(param_1 + lStack_110);
    func_0x00010c2a5060(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0(uVar12,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar41);
    _objc_release(puVar41);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar40);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar39);
    _objc_release(lVar8);
    _objc_release(lVar45);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(uVar5);
    lVar2 = lVar4;
  }
  uVar15 = *(undefined8 *)(param_1 + lStack_110);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar45;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar15;
  func_0x00010bf493c0(0x4030000000000000,uVar15,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lStack_110);
  uStack_f0 = uVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar16;
  func_0x00010bf493c0(0xc030000000000000,uVar16,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lStack_110);
  uStack_e8 = uVar39;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar17;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lStack_110);
  uStack_e0 = uVar40;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar18;
  func_0x00010bf49420(0x4060000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112757450;
  uVar19 = *(undefined8 *)(param_1 + lVar42);
  uStack_d8 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar44;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar42);
  uStack_d0 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar42);
  uStack_c8 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lStack_110);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar24;
  func_0x00010bf493c0(0x4030000000000000,uVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar42);
  uStack_c0 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112757460;
  uVar27 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar26;
  func_0x00010bf493a0(uVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112757454;
  uVar28 = *(undefined8 *)(param_1 + lVar43);
  uStack_b8 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar28;
  func_0x00010bf49480(0x4030000000000000,uVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar43);
  uStack_b0 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + _DAT_11275744c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493c0(0xc030000000000000,uVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar43);
  uStack_a8 = uVar32;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar42;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493c0(0xc050000000000000,uVar33,param_2,lVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar43);
  uStack_a0 = uVar35;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar43;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar36;
  func_0x00010bf493a0(uVar36,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar38;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0,0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar41);
  _objc_release(puVar41);
  _objc_release(uVar38);
  _objc_release(lVar37);
  _objc_release(lVar43);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(lVar34);
  _objc_release(lVar42);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar13);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar12);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar9);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar7);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(uVar21);
  _objc_release(uVar5);
  _objc_release(lVar20);
  _objc_release(lVar44);
  _objc_release(uVar19);
  _objc_release(uVar14);
  _objc_release(uVar18);
  _objc_release(uVar40);
  _objc_release(uVar17);
  _objc_release(uVar39);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(lVar45);
  _objc_release(lVar3);
  _objc_release(uVar15);
  lVar45 = (long)_DAT_11275745c;
  lVar3 = *(long *)(param_1 + lVar45);
  if (lVar3 != 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010bf493c0(0x4030000000000000,lVar3,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_1 + lVar45);
    lStack_100 = lVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = *(undefined8 *)(param_1 + lStack_110);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar39;
    func_0x00010bf493a0(uVar39,param_2,uVar40);
    _objc_retainAutoreleasedReturnValue();
    puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_100,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar41);
    _objc_release(puVar41);
    _objc_release(uVar6);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar3);
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + _DAT_112757424) < 0) {
    func_0x000106ac1afc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar41 = *(undefined **)(puVar1 + _DAT_11275741c);
    func_0x00010c0dfd40(puVar41);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar41;
    func_0x00010c09e3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar41);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ab3334; end: 106ab33a7; -[SCSIGBaseShakeToReportViewController _getChooseTopicCellText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab3334(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112757424) < 0) {
    func_0x000106ac1afc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_11275741c);
    func_0x00010c0dfd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c09e3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ab33a8; end: 106ab33bb; -[SCSIGBaseShakeToReportViewController _hideToolTip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab33a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275745c),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106ab33bc; end: 106ab33f7; -[SCSIGBaseShakeToReportViewController _hideKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab33bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112757448);
  func_0x00010c26ca80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab33f8; end: 106ab352f; -[SCSIGBaseShakeToReportViewController _shouldShowAttachmentToolTip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ab33f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112757438);
  func_0x00010bfe1dc0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar3;
    func_0x00010c067fc0();
    bVar6 = (long)puVar2 < 4;
    if ((long)puVar2 < 4) {
      puVar4 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110e6abb8);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c266b80();
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



/* Entry: 106ab3530; end: 106ab353f; -[SCSIGBaseShakeToReportViewController screenSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab3530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275746c);
}



/* Entry: 106ab3540; end: 106ab354b; -[SCSIGBaseShakeToReportViewController setScreenSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab3540(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ab354c; end: 106ab355b; -[SCSIGBaseShakeToReportViewController viewControllerName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab354c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757470);
}



/* Entry: 106ab355c; end: 106ab3567; -[SCSIGBaseShakeToReportViewController setViewControllerName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab355c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ab3568; end: 106ab3577; -[SCSIGBaseShakeToReportViewController viewControllerFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab3568(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757474);
}



/* Entry: 106ab3578; end: 106ab3583; -[SCSIGBaseShakeToReportViewController setViewControllerFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab3578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ab3584; end: 106ab3593; -[SCSIGBaseShakeToReportViewController shakeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab3584(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757478);
}



/* Entry: 106ab3594; end: 106ab359f; -[SCSIGBaseShakeToReportViewController setShakeId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab3594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ab35a0; end: 106ab35bf; -[SCSIGBaseShakeToReportViewController carrierNetworkInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab35a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112757464);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ab35c0; end: 106ab35d3; -[SCSIGBaseShakeToReportViewController setCarrierNetworkInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab35c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112757464,param_3);
  return;
}



/* Entry: 106ab35d4; end: 106ab371f; -[SCSIGBaseShakeToReportViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab35d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757464);
  _objc_storeStrong(param_1 + _DAT_112757478,0);
  _objc_storeStrong(param_1 + _DAT_112757474,0);
  _objc_storeStrong(param_1 + _DAT_112757470,0);
  _objc_storeStrong(param_1 + _DAT_11275746c,0);
  _objc_storeStrong(param_1 + _DAT_112757444,0);
  _objc_storeStrong(param_1 + _DAT_112757440,0);
  _objc_storeStrong(param_1 + _DAT_11275743c,0);
  _objc_storeStrong(param_1 + _DAT_112757438,0);
  _objc_storeStrong(param_1 + _DAT_11275745c,0);
  _objc_storeStrong(param_1 + _DAT_112757454,0);
  _objc_storeStrong(param_1 + _DAT_112757460,0);
  _objc_storeStrong(param_1 + _DAT_112757468,0);
  _objc_storeStrong(param_1 + _DAT_112757458,0);
  _objc_storeStrong(param_1 + _DAT_11275744c,0);
  _objc_storeStrong(param_1 + _DAT_112757450,0);
  _objc_storeStrong(param_1 + _DAT_112757448,0);
  _objc_storeStrong(param_1 + _DAT_11275741c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757418,0);
  return;
}



/* Entry: 106ab3720; end: 106ab3963; -[SCSIGInSettingReportScreenSelectionViewController initWithMode:userSession:circumstanceEngine:plusFeatureGating:delegate:networkConnectivityMonitor:blizzardSessionIDProvider:appInsightsMetadataStorage:s2rInfoProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106ab3720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f4a08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithReportSource__112532ea0,2);
  if (puVar1 == (undefined8 *)0x0) goto LAB_106ab3900;
  func_0x00010c1c8c60(puVar1);
  lVar4 = (long)_DAT_11275747c;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
  *(undefined8 *)((long)puVar1 + lVar4) = param_4;
  _objc_release(uVar2);
  func_0x00010c1fe8a0(puVar1);
  puVar3 = puVar1;
  func_0x00010c0cfd40();
  if (puVar3 == (undefined8 *)0x1) {
    func_0x000106ac0fbc();
    _objc_retainAutoreleasedReturnValue();
LAB_106ab3840:
    func_0x00010c216240(puVar1);
    _objc_release(puVar3);
  }
  else {
    puVar3 = puVar1;
    func_0x00010c0cfd40();
    if (puVar3 == (undefined8 *)0x2) {
      func_0x000106ac0fd4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106ab3840;
    }
  }
  func_0x00010c20eaa0(puVar1);
  lVar4 = (long)_DAT_112757480;
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
  *(undefined8 *)((long)puVar1 + lVar4) = param_5;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112757484;
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
  *(undefined8 *)((long)puVar1 + lVar4) = param_6;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112757488;
  _objc_retain(param_8);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
  *(undefined8 *)((long)puVar1 + lVar4) = param_8;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11275748c;
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
  *(undefined8 *)((long)puVar1 + lVar4) = param_9;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112757490;
  _objc_retain(param_10);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
  *(undefined8 *)((long)puVar1 + lVar4) = param_10;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112757494;
  _objc_retain(param_11);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
  *(undefined8 *)((long)puVar1 + lVar4) = param_11;
  _objc_release(uVar2);
LAB_106ab3900:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106ab3964; end: 106ab39ab; -[SCSIGInSettingReportScreenSelectionViewController viewDidAppear:] */

void FUN_106ab3964(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bebbb00(param_1);
  return;
}



/* Entry: 106ab39ac; end: 106ab4357; -[SCSIGInSettingReportScreenSelectionViewController loadView] */

void FUN_106ab39ac(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = PTR_PTR_1126f4a08;
  puStack_178 = param_1;
  _objc_msgSendSuper2(&puStack_178,PTR_s_loadView_112604be0);
  puVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_1f0 = param_1;
  func_0x00010beb3400();
  puStack_1f8 = puVar1;
  puStack_1e8 = puVar9;
  if ((int)param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126d0218;
    func_0x00010bfcbfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    func_0x00010befbb60(puVar9);
    puVar2 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    puStack_1d8 = puVar2;
    puStack_90 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_1e8;
    puStack_1e0 = puVar9;
    func_0x00010bf34860(puStack_1e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    puStack_88 = puVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf49420(0x4074000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    puStack_80 = puVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_1e8;
    func_0x00010c2a5060(puStack_1e8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493c0(0xc050000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar2);
    puVar9 = puStack_1e8;
    _objc_release(puStack_1e0);
    _objc_release(puStack_1d8);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1c8);
  }
  puVar2 = puStack_1f0;
  puVar1 = PTR_PTR_1126d0218;
  func_0x00010c0cfd40(puStack_1f0);
  func_0x00010bfc3980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar9);
  puVar3 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar4;
  puStack_1c8 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  puStack_1e0 = puVar3;
  puStack_d0 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_208 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_218 = puVar3;
  puStack_200 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  puStack_220 = puVar4;
  puStack_c8 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_238 = puVar4;
  puStack_228 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  puStack_240 = puVar3;
  puStack_c0 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = puVar2;
  puStack_250 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = puVar4;
  puStack_210 = puVar1;
  puStack_b8 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_248 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  puStack_270 = puVar10;
  func_0x00010bf493a0(puVar1,puVar10,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puStack_210;
  puVar3 = puStack_210;
  puStack_280 = puVar2;
  puStack_278 = puVar1;
  puStack_b0 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar9;
  func_0x00010bf34860(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  puStack_a8 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar10;
  puStack_a0 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5060(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493c0(0xc050000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_1f8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puStack_280);
  _objc_release(puStack_270);
  _objc_release(puStack_278);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(puStack_258);
  _objc_release(puStack_250);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_retain(puVar10);
  _objc_release(puStack_248);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  puVar9 = puStack_1f0;
  func_0x00010bdf2da0();
  _objc_retainAutoreleasedReturnValue();
  puStack_208 = puVar9;
  func_0x00010bf52a60();
  puStack_1e0 = puVar9;
  if (puVar9 != (undefined *)0x0) {
    puStack_200 = (undefined *)*puStack_1b0;
    puVar10 = puStack_210;
    do {
      puVar9 = (undefined *)0x0;
      puVar1 = puVar10;
      do {
        puVar2 = puStack_1e8;
        if ((undefined *)*puStack_1b0 != puStack_200) {
          _objc_enumerationMutation(puStack_208);
        }
        puVar10 = *(undefined **)(lStack_1b8 + (long)puVar9 * 8);
        func_0x00010c18b5e0(puVar10);
        func_0x00010befbb60(puVar2);
        puVar3 = puVar10;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        puStack_1c8 = puVar3;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puStack_1d0 = puVar4;
        func_0x00010bf493c0(0xc020000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar10;
        puStack_1d8 = puVar3;
        puStack_168 = puVar3;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c08de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar10;
        puStack_160 = puVar5;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2793a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_158 = puVar7;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puStack_1f8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar4);
        _objc_release(puStack_1d8);
        _objc_release(puStack_1d0);
        _objc_release(puStack_1c8);
        _objc_retain(puVar10);
        _objc_release(puVar1);
        puVar9 = puVar9 + 1;
        puVar1 = puVar10;
      } while (puStack_1e0 != puVar9);
      puVar9 = puStack_208;
      func_0x00010bf52a60();
      puStack_1e0 = puVar9;
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puStack_208);
  puVar1 = puStack_1e8;
  puVar2 = puStack_1e8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puStack_1f8;
  func_0x00010befa120(puStack_1f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puStack_210);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_106ab4358;
  puStack_2a8 = PTR_PTR_1126f4a08;
  puStack_2b0 = puVar1;
  puStack_2a0 = puVar3;
  puStack_298 = puVar2;
  puStack_290 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_2b0,PTR_s_dismissViewController_1125bec50);
  func_0x00010c22a1c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a260();
  _objc_release(puVar1);
  return;
}



/* Entry: 106ab4358; end: 106ab43b7; -[SCSIGInSettingReportScreenSelectionViewController dismissViewController] */

void FUN_106ab4358(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dismissViewController_1125bec50);
  func_0x00010c22a1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a260();
  _objc_release(param_1);
  return;
}



/* Entry: 106ab43b8; end: 106ab450f; -[SCSIGInSettingReportScreenSelectionViewController didSingleTapEntry:featureNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab43b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d0188;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112757498);
  puVar2 = PTR_PTR_1126d0198;
  _objc_alloc(PTR_PTR_1126d0198);
  func_0x00010bffea60();
  func_0x00010bffca80(puVar1,param_2,0,param_4,uVar4,2,0,puVar2,
                      *(undefined8 *)(param_1 + _DAT_112757494),0);
  _objc_release(param_4);
  lVar5 = (long)_DAT_11275749c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c22a1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe8a0(*(undefined8 *)(param_1 + lVar5),param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c1f7460(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ab4510; end: 106ab4af3; -[SCSIGInSettingReportScreenSelectionViewController _createScreenCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106ab4510(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106ac1484();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d0190;
  func_0x00010bfb9c60(PTR_PTR_1126d0190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e316f8,
                      &PTR____CFConstantStringClassReference_110e6abf8,0,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000106ac149c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d0190;
  func_0x00010c0c89a0(PTR_PTR_1126d0190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dba938,
                      &PTR____CFConstantStringClassReference_110e6ac18,0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106ac14b4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d0190;
  func_0x00010bf296a0(PTR_PTR_1126d0190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110dad4b8,
                      &PTR____CFConstantStringClassReference_110e6ac38,0,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac14cc();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112757480;
  puVar6 = PTR_PTR_1126d0190;
  func_0x00010c0b8fc0(PTR_PTR_1126d0190,param_2,*(undefined8 *)(param_1 + lVar15));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110e6ac58,
                      &PTR____CFConstantStringClassReference_110e6ac78,0,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000106ac14e4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d0190;
  func_0x00010c153960(PTR_PTR_1126d0190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110de3ab8,
                      &PTR____CFConstantStringClassReference_110e6ac98,0,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000106ac1514();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d0190;
  func_0x00010c116860(PTR_PTR_1126d0190,param_2,*(undefined8 *)(param_1 + lVar15));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar6,param_2,puVar7,&PTR____CFConstantStringClassReference_110db7358,
                      &PTR____CFConstantStringClassReference_110e6acb8,0,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000106ac152c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d0190;
  func_0x00010c228100(PTR_PTR_1126d0190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar7,param_2,puVar8,&PTR____CFConstantStringClassReference_110e6acd8,
                      &PTR____CFConstantStringClassReference_110e6acf8,0,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x000106ac17cc();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126d0190;
  func_0x00010bf81620(PTR_PTR_1126d0190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar8,param_2,puVar9,&PTR____CFConstantStringClassReference_110e6ad18,
                      &PTR____CFConstantStringClassReference_110e6ad38,0,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126d0278;
  _objc_alloc();
  puVar14 = puVar9;
  func_0x000106ac13c4();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d0190;
  func_0x00010c24b2c0(PTR_PTR_1126d0190,param_2,*(undefined8 *)(param_1 + lVar15));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f60(puVar9,param_2,puVar14,&PTR____CFConstantStringClassReference_110ddea98,
                      &PTR____CFConstantStringClassReference_110e6ad58,0,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar14);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112757484);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf9e580();
  puVar14 = (undefined *)0x0;
  if ((int)uVar12 != 0) {
    puVar14 = PTR_PTR_1126d0278;
    _objc_alloc();
    puVar10 = puVar14;
    func_0x000106ac14fc();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126d0190;
    func_0x00010c102200(PTR_PTR_1126d0190);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052f60(puVar14,param_2,puVar10,&PTR____CFConstantStringClassReference_110e6ad78,
                        &PTR____CFConstantStringClassReference_110e6ad98,0,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar10);
  }
  _objc_release(uVar11);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  puStack_78 = puVar1;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar10,param_2,puVar13);
  _objc_release(puVar13);
  if (puVar14 != (undefined *)0x0) {
    func_0x00010befa120(puVar10,param_2,puVar14);
  }
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar6;
  puStack_a8 = puVar5;
  puStack_a0 = puVar7;
  puStack_98 = puVar4;
  puStack_90 = puVar9;
  puStack_88 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar10,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x00010be213c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  return (undefined *)(ulong)((uint)puVar2 ^ 1);
}



/* Entry: 106ab4af4; end: 106ab4b37; -[SCSIGInSettingReportScreenSelectionViewController _shouldDisplayOutageBanner] */

uint FUN_106ab4af4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be213c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106ab4b38; end: 106ab4bef; -[SCSIGInSettingReportScreenSelectionViewController _showUpdatePromptIfNecessary] */

void FUN_106ab4b38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ab4bf0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ab4bf0; end: 106ab4e27;  */

void FUN_106ab4bf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6adb8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e6add8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067fc0();
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x1) {
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6ae18);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd29f8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar10 = lVar9;
      func_0x00010be626c0();
      _objc_release(lVar9);
      if ((int)lVar10 != 0) {
        param_1 = param_1 + 0x20;
        _objc_loadWeakRetained(param_1);
        func_0x00010bebbae0();
        _objc_release(param_1);
      }
      _objc_release(puVar6);
      _objc_release(puVar8);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106ab4e28; end: 106ab4eaf; -[SCSIGInSettingReportScreenSelectionViewController _showUpdatePrompt] */

void FUN_106ab4e28(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ab4eb0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ab4eb0; end: 106ab5053;  */

void FUN_106ab4eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000106ac1c34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000106ac1004();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac1c04();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000106ac1c1c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_2);
  func_0x00010c22b720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ab5054; end: 106ab50fb;  */

void FUN_106ab5054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_2);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ab50fc; end: 106ab510f;  */

void FUN_106ab50fc(void)

{
  return;
}



/* Entry: 106ab5110; end: 106ab52af; -[SCSIGInSettingReportScreenSelectionViewController _needUpdateForCurrentVersion:appStoreVersion:] */

bool FUN_106ab5110(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  _objc_retain(param_4);
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf44740(param_4,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c0dfd40(lVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  lVar4 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c067fc0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar5 < lVar3) {
    bVar6 = true;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    lVar4 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 == lVar5) {
      lVar2 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067fc0();
      lVar4 = param_3;
      func_0x00010c0dfd40(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c067fc0();
      bVar6 = lVar5 < lVar3;
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    else {
      bVar6 = false;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return bVar6;
}



/* Entry: 106ab52b0; end: 106ab5337; -[SCSIGInSettingReportScreenSelectionViewController _getOutageBannerKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab52b0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  ppuVar1 = *(undefined ***)(param_1 + _DAT_112757480);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010c25d7a0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e6ae58,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110db2d98,param_2,ppuVar1);
    if ((uVar2 & 1) == 0) {
      _objc_retain(ppuVar1);
      ppuVar3 = ppuVar1;
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106ab5338; end: 106ab5347; -[SCSIGInSettingReportScreenSelectionViewController mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab5338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757498);
}



/* Entry: 106ab5348; end: 106ab5357; -[SCSIGInSettingReportScreenSelectionViewController setMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab5348(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112757498) = param_3;
  return;
}



/* Entry: 106ab5358; end: 106ab53f7; -[SCSIGInSettingReportScreenSelectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab5358(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757494,0);
  _objc_storeStrong(param_1 + _DAT_112757490,0);
  _objc_storeStrong(param_1 + _DAT_11275748c,0);
  _objc_storeStrong(param_1 + _DAT_112757488,0);
  _objc_storeStrong(param_1 + _DAT_112757484,0);
  _objc_storeStrong(param_1 + _DAT_112757480,0);
  _objc_storeStrong(param_1 + _DAT_11275747c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275749c,0);
  return;
}



/* Entry: 106ab53f8; end: 106ab55b3; -[SCSIGScreenSelectionCell initWithTitle:entryId:imageId:description:featureNames:] */

undefined1 *
FUN_106ab53f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar4 = PTR_s_initWithReuseIdentifier__1125eda10;
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f4a10;
  uStack_50 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar4,0);
  func_0x00010c1968c0();
  func_0x00010c19aaa0(puVar1);
  _objc_release(param_7);
  func_0x00010c160fc0(puVar1);
  _objc_release(param_4);
  func_0x00010c219b60(puVar1);
  func_0x00010c20eaa0(puVar1);
  puVar2 = (undefined1 *)puVar1;
  func_0x00010bdebe20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = (undefined1 *)puVar1;
  func_0x00010c27f7a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = (undefined1 *)puVar1;
  func_0x00010c27f7a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = (undefined1 *)puVar1;
  func_0x00010c27f7a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(param_6);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1);
  _objc_release(puVar4);
  return (undefined1 *)puVar1;
}



/* Entry: 106ab55b4; end: 106ab5683; -[SCSIGScreenSelectionCell _createCellImageViewWithId:] */

void FUN_106ab55b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2bb380(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c19f0e0(0,0,0x4038000000000000,0x4038000000000000);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ab5684; end: 106ab5743; -[SCSIGScreenSelectionCell _entryDidSingleTap:] */

void FUN_106ab5684(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf97200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2900(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b9c0(uVar1);
    _objc_release(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ab5744; end: 106ab5753; -[SCSIGScreenSelectionCell entryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab5744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574a0);
}



/* Entry: 106ab5754; end: 106ab575f; -[SCSIGScreenSelectionCell setEntryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab5754(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ab5760; end: 106ab576f; -[SCSIGScreenSelectionCell featureNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab5760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574a4);
}



/* Entry: 106ab5770; end: 106ab577b; -[SCSIGScreenSelectionCell setFeatureNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab5770(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ab577c; end: 106ab579b; -[SCSIGScreenSelectionCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab577c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127574a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ab579c; end: 106ab57af; -[SCSIGScreenSelectionCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab579c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127574a8,param_3);
  return;
}



/* Entry: 106ab57b0; end: 106ab57fb; -[SCSIGScreenSelectionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab57b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127574a8);
  _objc_storeStrong(param_1 + _DAT_1127574a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127574a0,0);
  return;
}



/* Entry: 106ab57fc; end: 106ab5887; -[SCShakeDrawOnAttachmentViewController initWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106ab57fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4a18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127574ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ab5888; end: 106ab614f; -[SCShakeDrawOnAttachmentViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab5888(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126f4a18;
  lStack_c0 = param_5;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar8);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  lVar9 = (long)_DAT_1127574ac;
  func_0x00010c01bf60();
  lVar7 = (long)_DAT_1127574b0;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar1;
  _objc_release(uVar6);
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar10 = param_1;
  dVar12 = param_2;
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + lVar9));
  dVar11 = 0.0;
  if (dVar10 != 0.0) {
    if (dVar12 == 0.0) {
      dVar11 = INFINITY;
    }
    else {
      dVar11 = dVar10 / dVar12;
    }
  }
  func_0x00010b69097c(param_1,param_2,param_3,param_4,dVar11);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  _objc_release(lVar8);
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar1 = PTR_PTR_1126d0280;
  _objc_alloc();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c013de0();
  lVar8 = (long)_DAT_1127574b4;
  uVar6 = *(undefined8 *)(param_5 + lVar8);
  *(undefined **)(param_5 + lVar8) = puVar1;
  _objc_release(uVar6);
  func_0x00010c21e900(*(undefined8 *)(param_5 + lVar8));
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar1 = PTR_PTR_1126c4b80;
  _objc_alloc();
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar7 = (long)_DAT_1127574b8;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar8);
  func_0x00010c16d4a0(*(undefined8 *)(param_5 + lVar7));
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  lVar8 = param_5;
  func_0x00010bfe5d60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,param_1,0x4050400000000000);
  lVar7 = (long)_DAT_1127574bc;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar8);
  func_0x00010c21e900(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c16d4a0(*(undefined8 *)(param_5 + lVar7));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  dVar10 = 0.0;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_98 = puVar2;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010bfcd9c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010bfe5d60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar8);
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  lVar8 = param_5;
  func_0x00010bfe5d60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  dVar12 = dVar10 + -111.0;
  lVar7 = param_5;
  func_0x00010bfe5d60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c013de0(0,dVar12,dVar10,0x405bc00000000000);
  lVar9 = (long)_DAT_1127574c0;
  uVar6 = *(undefined8 *)(param_5 + lVar9);
  *(undefined **)(param_5 + lVar9) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(lVar8);
  func_0x00010c21e900(*(undefined8 *)(param_5 + lVar9));
  func_0x00010c16d4a0(*(undefined8 *)(param_5 + lVar9));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_b0 = puVar2;
  func_0x00010bf41680(0,0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a8 = puVar2;
  func_0x00010bf41680(0,0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(uVar6);
  lVar7 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar7);
  func_0x00010c228b40(param_5);
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc();
  func_0x00010c2be8c0(param_5);
  func_0x00010c013de0();
  func_0x00010c227520(param_5);
  _objc_release(puVar1);
  lVar8 = param_5;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa420(0x4030000000000000,0x4030000000000000);
  _objc_release(lVar8);
  lVar8 = param_5;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c80(0x3ff19999a0000000);
  _objc_release(lVar8);
  lVar8 = param_5;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(lVar8);
  lVar7 = param_5;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010c2be8a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar8);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc();
  func_0x00010c27af60(param_5);
  func_0x00010c013de0();
  lVar8 = (long)_DAT_1127574c4;
  uVar6 = *(undefined8 *)(param_5 + lVar8);
  *(undefined **)(param_5 + lVar8) = puVar1;
  _objc_release(uVar6);
  func_0x00010c1aa420(0x402a000000000000,0x402a000000000000,*(undefined8 *)(param_5 + lVar8));
  func_0x00010c1c3c80(0x3ff19999a0000000,*(undefined8 *)(param_5 + lVar8));
  func_0x00010befbd40(*(undefined8 *)(param_5 + lVar8));
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar8));
  _objc_release(puVar1);
  lVar8 = param_5;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc();
  func_0x00010bf37cc0(param_5);
  func_0x00010c013de0();
  lVar7 = (long)_DAT_1127574c8;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar1;
  _objc_release(uVar6);
  func_0x00010c1aa420(0x4018000000000000,0x4018000000000000,*(undefined8 *)(param_5 + lVar7));
  func_0x00010c1c3c80(0x3ff19999a0000000,*(undefined8 *)(param_5 + lVar7));
  func_0x00010befbd40(*(undefined8 *)(param_5 + lVar7));
  lVar8 = param_5;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar7));
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_106ab6150;
  puStack_e8 = PTR_PTR_1126f4a18;
  puStack_f0 = puVar1;
  puStack_e0 = puVar2;
  lStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 106ab6150; end: 106ab61b3; -[SCShakeDrawOnAttachmentViewController viewWillAppear:] */

void FUN_106ab6150(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4a18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 106ab61b4; end: 106ab61bb; -[SCShakeDrawOnAttachmentViewController shouldAutorotate] */

undefined8 FUN_106ab61b4(void)

{
  return 0;
}



/* Entry: 106ab61bc; end: 106ab61c7; -[SCShakeDrawOnAttachmentViewController supportedInterfaceOrientations] */

undefined8 FUN_106ab61bc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106ab61c8; end: 106ab61cf; -[SCShakeDrawOnAttachmentViewController preferredScreenEdgesDeferringSystemGestures] */

undefined8 FUN_106ab61c8(void)

{
  return 0xf;
}



/* Entry: 106ab61d0; end: 106ab61e3; -[SCShakeDrawOnAttachmentViewController setEditAttachmentDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab61d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127574cc,param_3);
  return;
}



/* Entry: 106ab61e4; end: 106ab62a7; -[SCShakeDrawOnAttachmentViewController dismissViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab61e4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_1127574cc;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar3 = param_1 + lVar3;
      _objc_loadWeakRetained(lVar3);
      lVar1 = param_1;
      func_0x00010c109320(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0cf20(param_1);
      func_0x00010bf89a20(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar3);
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106ab62a8; end: 106ab6387; -[SCShakeDrawOnAttachmentViewController prepareEditImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab62a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_1127574b0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar4 = param_4;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,param_1,0);
  _objc_release(puVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bf89920(*(undefined8 *)(param_5 + _DAT_1127574ac));
  uVar2 = *(undefined8 *)(param_5 + _DAT_1127574b4);
  func_0x00010bf89b80(param_3,param_4,param_1,uVar4,uVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ab6388; end: 106ab63db; -[SCShakeDrawOnAttachmentViewController xButtonFrame] */

undefined8 FUN_106ab6388(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(param_1);
  return 0;
}



/* Entry: 106ab63dc; end: 106ab644f; -[SCShakeDrawOnAttachmentViewController trashButtonFrame] */

undefined8 FUN_106ab63dc(undefined8 param_1)

{
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGRectGetHeight(0,0,0x404e000000000000,0x404e000000000000);
  _objc_release(param_1);
  return 0;
}



/* Entry: 106ab6450; end: 106ab651b; -[SCShakeDrawOnAttachmentViewController checkButtonFrame] */

double FUN_106ab6450(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_2;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = 0.0;
  _CGRectGetWidth(0,0,0x404e000000000000,0x404e000000000000);
  dVar2 = (param_1 - dVar2) + -10.0;
  _objc_release(uVar1);
  func_0x00010bfe5d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGRectGetHeight(dVar2,0,0x404e000000000000,0x404e000000000000);
  _objc_release(param_2);
  return dVar2;
}



/* Entry: 106ab651c; end: 106ab677b; -[SCShakeDrawOnAttachmentViewController discardButtonPressed] */

/* WARNING: Possible PIC construction at 0x000106ab67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106ab67b0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab651c(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **unaff_x25;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined1 **)(param_1 + _DAT_1127574b4);
  func_0x00010bfd6720();
  if ((int)puVar1 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto code_r0x00010bf84ac0;
  }
  else {
    puVar1 = auStack_70;
    _objc_initWeak(puVar1,param_1);
    puVar2 = PTR_PTR_1126aed70;
    func_0x000106ac11cc();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106ab677c;
    puStack_80 = &UNK_1108482a8;
    unaff_x25 = &puStack_98;
    param_2 = auStack_70;
    _objc_copyWeak(auStack_78,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000106ac10dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar5 = puVar4;
    func_0x000106ac11b4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar2;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c10eda0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_78);
    puVar1 = auStack_70;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(param_2);
  _objc_loadWeakRetained(puVar1 + 0x20);
code_r0x00010bf84ac0:
                    /* WARNING: Could not recover jumptable at 0x00010bf84ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


