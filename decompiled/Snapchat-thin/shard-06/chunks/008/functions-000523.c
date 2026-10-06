/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e0215c; end: 104e0216b; -[SCReviewOrderViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e0215c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713774);
}



/* Entry: 104e0216c; end: 104e02247; -[SCReviewOrderViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0216c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713768,0);
  _objc_storeStrong(param_1 + _DAT_112713790,0);
  _objc_storeStrong(param_1 + _DAT_11271378c,0);
  _objc_storeStrong(param_1 + _DAT_112713788,0);
  _objc_storeStrong(param_1 + _DAT_11271377c,0);
  _objc_storeStrong(param_1 + _DAT_112713794,0);
  _objc_storeStrong(param_1 + _DAT_112713784,0);
  _objc_storeStrong(param_1 + _DAT_112713778,0);
  _objc_storeStrong(param_1 + _DAT_112713780,0);
  _objc_storeStrong(param_1 + _DAT_112713774,0);
  _objc_destroyWeak(param_1 + _DAT_112713770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271376c,0);
  return;
}



/* Entry: 104e02248; end: 104e025ff; -[SCCommerceReviewOrderRouter initWithCart:presentationStyle:presentationSource:UIContainer:parentDeckContainer:cartCoordinator:compositeImageFetcher:navigationDelegate:eventLogger:grapheneRegistry:checkoutScopeExposer:commerceShoppingScopeExposer:browserScopeExposer:configProvider:accountInfoProvider:paymentInfoProvider:] */

undefined8 *
FUN_104e02248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126e44a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_104e0256c;
  _objc_retain(param_3);
  uVar2 = puVar1[2];
  puVar1[2] = param_3;
  _objc_release(uVar2);
  _objc_retain(param_6);
  uVar2 = puVar1[1];
  puVar1[1] = param_6;
  _objc_release(uVar2);
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  _objc_storeWeak(puVar1 + 6,param_11);
  _objc_storeWeak(puVar1 + 7,param_8);
  puVar3 = PTR_PTR_1126b0318;
  _objc_alloc();
  func_0x00010c008220();
  uVar2 = puVar1[0xc];
  puVar1[0xc] = puVar3;
  _objc_release(uVar2);
  _objc_storeWeak(puVar1 + 8,param_9);
  _objc_storeWeak(puVar1 + 5,param_10);
  puVar3 = PTR_PTR_1126b0490;
  _objc_alloc();
  func_0x00010c0184a0();
  uVar2 = puVar1[0xd];
  puVar1[0xd] = puVar3;
  _objc_release(uVar2);
  _objc_retain(param_13);
  uVar2 = puVar1[0xe];
  puVar1[0xe] = param_13;
  _objc_release(uVar2);
  _objc_retain(param_14);
  uVar2 = puVar1[0xf];
  puVar1[0xf] = param_14;
  _objc_release(uVar2);
  _objc_retain(param_15);
  uVar2 = puVar1[0x10];
  puVar1[0x10] = param_15;
  _objc_release(uVar2);
  _objc_retain(param_16);
  uVar2 = puVar1[0x13];
  puVar1[0x13] = param_16;
  _objc_release(uVar2);
  puVar1[0x1c] = 6;
  puVar1[0x1b] = 0xffffffffffffffff;
  puVar4 = (undefined *)puVar1[0x13];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c22cde0();
  if ((int)puVar3 == 0) {
LAB_104e0253c:
    _objc_release(puVar4);
  }
  else {
    lVar6 = puVar1[3];
    _objc_release(puVar4);
    if (lVar6 != 2) {
      *(bool *)(puVar1 + 0x19) = param_7 == 0;
      lVar6 = param_7;
      if (param_7 == 0) {
        uVar2 = puVar1[1];
        func_0x00010b09483c();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[0x18];
        puVar1[0x18] = uVar2;
        _objc_release(uVar5);
        uVar2 = puVar1[0x18];
        func_0x00010b0947a4(uVar2,puVar1[0xc]);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[0x17];
        puVar1[0x17] = uVar2;
        _objc_release(uVar5);
        lVar6 = puVar1[0x17];
      }
      puVar4 = PTR_PTR_1126b0320;
      func_0x00010c0cf9c0(PTR_PTR_1126b0320);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cfa00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0x1a];
      puVar1[0x1a] = lVar6;
      _objc_release(uVar2);
      goto LAB_104e0253c;
    }
  }
  func_0x00010c1a4840(puVar1[0x1a]);
  func_0x00010be77960(puVar1);
LAB_104e0256c:
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e02600; end: 104e02627; -[SCCommerceReviewOrderRouter displayId] */

void FUN_104e02600(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e02628; end: 104e02703; -[SCCommerceReviewOrderRouter begin] */

void FUN_104e02628(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e3aa0(uVar2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1404a0();
  _objc_release(lVar1);
  func_0x00010bdf29e0(param_1);
  func_0x00010be56d00(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e02704; end: 104e0272f;  */

void FUN_104e02704(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e02730; end: 104e027ff; -[SCCommerceReviewOrderRouter dismiss] */

void FUN_104e02730(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22cde0();
  if ((int)uVar3 == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    _objc_release(uVar2);
    if (lVar4 != 2) {
      if (*(char *)(param_1 + 200) == '\x01') {
        iVar1 = (int)*(undefined8 *)(param_1 + 0xc0);
        func_0x00010c06c7c0();
        if (iVar1 == 0) {
          return;
        }
        func_0x00010bf6f280(*(undefined8 *)(param_1 + 0xc0));
      }
      else {
        func_0x00010bf84ae0(*(undefined8 *)(param_1 + 0xd0),param_2,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      goto LAB_104e027ac;
    }
  }
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
LAB_104e027ac:
  func_0x00010be56bc0(param_1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c140480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e02800; end: 104e0280b; -[SCCommerceReviewOrderRouter reviewOrderNavigateBack] */

void FUN_104e02800(long param_1)

{
  *(undefined8 *)(param_1 + 0xe0) = 0x12;
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 104e0280c; end: 104e0296f; -[SCCommerceReviewOrderRouter reviewOrderNavigateStore:] */

void FUN_104e0280c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c10a740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be7db20(param_1,param_2,param_3);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x78);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126b0508;
    _objc_alloc(PTR_PTR_1126b0508);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    lVar3 = param_3;
    func_0x00010c2579e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b0500;
    func_0x00010c140400(PTR_PTR_1126b0500);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c039420(puVar2,param_2,uVar6,lVar4,0,puVar5,1,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x78),param_2,puVar2);
    *(undefined8 *)(param_1 + 0xe0) = 0xf;
    *(undefined8 *)(param_1 + 0xd8) = 0x2c;
    func_0x00010be56bc0(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e02970; end: 104e02b2b; -[SCCommerceReviewOrderRouter _presentProductCatalog:] */

void FUN_104e02970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126b0518;
  uVar2 = param_3;
  func_0x00010c2579e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c257800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257ea0(puVar4,param_2,uVar3,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b0520;
  _objc_alloc(PTR_PTR_1126b0520);
  puVar6 = PTR_PTR_1126b0528;
  func_0x00010c22cdc0(PTR_PTR_1126b0528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021b80(puVar5,param_2,puVar4,puVar6,0,1,0);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b0530;
  _objc_alloc(PTR_PTR_1126b0530);
  lVar7 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c001f40(puVar6,param_2,puVar5,puVar1,param_1,lVar7);
  _objc_release(lVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x80),param_2,puVar6);
  *(undefined8 *)(param_1 + 0xe0) = 0xf;
  *(undefined8 *)(param_1 + 0xd8) = 0x2c;
  func_0x00010be56bc0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e02b2c; end: 104e02c87; -[SCCommerceReviewOrderRouter reviewOrderNavigateCheckout:] */

void FUN_104e02b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x18) == 2) {
      func_0x00010c0ae840(*(undefined8 *)(param_1 + 0x68));
    }
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b0ab0;
    _objc_alloc(PTR_PTR_1126b0ab0);
    uVar7 = *(undefined8 *)(param_1 + 0xd0);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_1 + 0xa0;
    _objc_loadWeakRetained(lVar4);
    lVar5 = param_1 + 0xa8;
    _objc_loadWeakRetained();
    lVar6 = param_1 + 0xb0;
    _objc_loadWeakRetained();
    func_0x00010bffce40(puVar3,param_2,param_3,puVar2,uVar7,lVar1,param_1,lVar4,lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70),param_2,puVar3);
    *(undefined8 *)(param_1 + 0xe0) = 0x18;
    *(undefined8 *)(param_1 + 0xd8) = 2;
    func_0x00010be56bc0(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e02c88; end: 104e02c8b; -[SCCommerceReviewOrderRouter didPresentShoppingScope] */

void FUN_104e02c88(void)

{
  return;
}



/* Entry: 104e02c8c; end: 104e02ce7; -[SCCommerceReviewOrderRouter didDismissShoppingScope] */

void FUN_104e02c8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010be56d00(param_1);
  *(undefined8 *)(param_1 + 0xe0) = 6;
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffffffffffff;
  return;
}



/* Entry: 104e02ce8; end: 104e02e87; -[SCCommerceReviewOrderRouter _createReviewOrderScreen] */

void FUN_104e02ce8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2579e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c20c240();
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0ab8;
  _objc_alloc();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bffce00();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar3;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b0ac0;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c150e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c042360();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar3;
  _objc_release(uVar1);
  _objc_release(lVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0deea0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0ae820(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010be7e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentReviewOrderScreen_11257d260);
  return;
}



/* Entry: 104e02e88; end: 104e02fd3; -[SCCommerceReviewOrderRouter _presentReviewOrderScreen] */

void FUN_104e02e88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0c980(uVar1,param_2,*(undefined8 *)(param_1 + 0x60));
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010b0a5340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar3 != 1) {
      if (lVar3 == 2) {
        uVar1 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf0c980(uVar1,param_2,*(undefined8 *)(param_1 + 0x60));
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        func_0x0001005937d8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10ae60(uVar4);
        _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0ae870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x68),PTR_s_logReviewOrderV2Launched_112609428);
        return;
      }
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c22cde0();
    _objc_release(uVar4);
    if ((int)uVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 0xc0);
      func_0x00010c06c7c0();
      if ((uVar2 & 1) == 0) {
        func_0x00010bf0c8e0(*(undefined8 *)(param_1 + 0xc0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010c10ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0xd0),PTR_s_presentViewController__112621578,
                 *(undefined8 *)(param_1 + 0x50));
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0c980(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x0001005937d8();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c10ae60(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e02fd4; end: 104e02fdb; -[SCCommerceReviewOrderRouter checkoutWillStartPreloading] */

void FUN_104e02fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_showLoadingSpinner_11266baa8);
  return;
}



/* Entry: 104e02fdc; end: 104e03003; -[SCCommerceReviewOrderRouter checkoutFailedToLoadWithError:] */

void FUN_104e02fdc(long param_1)

{
  func_0x00010c237380(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bfe22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_hideLoadingSpinner_1125d6268);
  return;
}



/* Entry: 104e03004; end: 104e0300b; -[SCCommerceReviewOrderRouter checkoutWillPresent] */

void FUN_104e03004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_hideLoadingSpinner_1125d6268);
  return;
}



/* Entry: 104e0300c; end: 104e0309b; -[SCCommerceReviewOrderRouter checkoutDidDismiss:] */

void FUN_104e0300c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(undefined8 *)(param_1 + 0xe0) = 6;
    func_0x00010c0aaa40(*(undefined8 *)(param_1 + 0x68));
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
      return;
    }
    func_0x00010be56d00(param_1);
    *(undefined8 *)(param_1 + 0xd8) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 104e0309c; end: 104e03203; -[SCCommerceReviewOrderRouter _preloadCheckoutMetadataWithAccountInfoProvider:paymentInfoProvider:] */

void FUN_104e0309c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104e03204;
  puStack_68 = &UNK_11084fdb8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfa49a0(param_3);
  _objc_release(puVar1);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bfa92a0(param_4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e03204; end: 104e032eb;  */

void FUN_104e03204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28540();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e032ec; end: 104e033a3; -[SCCommerceReviewOrderRouter _handleDidFetchContactDetails:shippingAddresses:error:] */

void FUN_104e032ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_5 == 0) {
    _objc_retain(param_3);
    lVar1 = param_4;
    func_0x00010bfece40();
    lVar2 = param_4;
    if (lVar1 == 0x7fffffffffffffff) {
      func_0x00010bfb1920(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_storeWeak(param_1 + 0xa8,lVar2);
    _objc_release(lVar2);
    _objc_storeWeak(param_1 + 0xb0,param_3);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e033a4; end: 104e033ab;  */

void FUN_104e033a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isDefault_1125f9b30);
  return;
}



/* Entry: 104e033ac; end: 104e033f3; -[SCCommerceReviewOrderRouter _handleDidFetchPaymentMethods:error:] */

void FUN_104e033ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0xa0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e033f4; end: 104e0346f; -[SCCommerceReviewOrderRouter _logPageOpen] */

void FUN_104e033f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bebe660(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf32ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abc40(lVar1,param_2,0x27,lVar2,0,0,0,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e03470; end: 104e034ff; -[SCCommerceReviewOrderRouter _logPageClose] */

void FUN_104e03470(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bebe660(param_1);
  uVar3 = *(ulong *)(param_1 + 0x48);
  func_0x00010c076be0();
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
  }
  else {
    uVar5 = 0xe;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf32ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abb40(lVar1,param_2,0x27,lVar2,0,uVar5,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e03500; end: 104e0353b; -[SCCommerceReviewOrderRouter _sourcePage] */

long FUN_104e03500(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0xd8) != -1) {
    return *(long *)(param_1 + 0xd8);
  }
  uVar1 = *(long *)(param_1 + 0x20) - 1;
  if (uVar1 < 4) {
    return *(long *)(&UNK_10dd8d1c0 + uVar1 * 8);
  }
  return 0x1e;
}



/* Entry: 104e0353c; end: 104e0353f; -[SCCommerceReviewOrderRouter commerceBrowserWillPresent] */

void FUN_104e0353c(void)

{
  return;
}



/* Entry: 104e03540; end: 104e0359b; -[SCCommerceReviewOrderRouter commerceBrowserWillDismiss] */

void FUN_104e03540(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be56d00(param_1);
    *(undefined8 *)(param_1 + 0xe0) = 6;
    *(undefined8 *)(param_1 + 0xd8) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 104e0359c; end: 104e0369f; -[SCCommerceReviewOrderRouter .cxx_destruct] */

void FUN_104e0359c(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e036a0; end: 104e03d97; -[SCCommerceReviewOrderEmptyView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104e036a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126e44b0;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar9 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    lVar15 = (long)_DAT_112713808;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar13);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x403e800000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493c0(0x4043800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(puVar9);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    lVar14 = (long)_DAT_11271380c;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar13);
    ppuVar8 = &PTR____CFConstantStringClassReference_110db5b58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db5b58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(ppuVar8);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar13;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf1ff80(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(puVar9);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112713810;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar13);
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar15));
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    ppuVar8 = &PTR____CFConstantStringClassReference_110db5b78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db5b78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar13);
    _objc_release(ppuVar8);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = *(undefined8 **)((long)puVar1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar11;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar4;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar17;
    func_0x00010bf494e0(0x4066400000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar3;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar18;
    func_0x00010bf49520(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar13;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar19;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(uVar13);
    _objc_release(puVar5);
    _objc_release(uVar18);
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(uVar4);
    _objc_release(uVar16);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc22e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return puVar9;
}



/* Entry: 104e03d98; end: 104e03dcf; -[SCCommerceReviewOrderEmptyView didTapKeepShoppingButton] */

void FUN_104e03d98(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc22e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e03dd0; end: 104e03def; -[SCCommerceReviewOrderEmptyView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e03dd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713814);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e03df0; end: 104e03e03; -[SCCommerceReviewOrderEmptyView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e03df0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713814,param_3);
  return;
}



/* Entry: 104e03e04; end: 104e03e6f; -[SCCommerceReviewOrderEmptyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e03e04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713814);
  _objc_storeStrong(param_1 + _DAT_112713810,0);
  _objc_storeStrong(param_1 + _DAT_11271380c,0);
  _objc_storeStrong(param_1 + _DAT_112713808,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713818,0);
  return;
}



/* Entry: 104e03e70; end: 104e03f7b; +[SCCommerceReviewOrderFooter sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_104e03e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b0a80;
  _objc_opt_class(PTR_PTR_1126b0a80);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    dVar5 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar3 = param_7;
    func_0x00010c261320(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c23b9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bf20bc0(param_1,param_2,uVar4);
    dVar5 = param_4 * 2.0 + 24.0 + 40.0 + 50.0 + 20.0;
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 104e03f7c; end: 104e040e7; -[SCCommerceReviewOrderFooter initWithFrame:] */

undefined1 * FUN_104e03f7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e44b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(uVar4,uVar5);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4036000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3dcccccd);
    _objc_release(puVar3);
    func_0x00010c219b60(puVar1);
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e040e8; end: 104e0447b; -[SCCommerceReviewOrderFooter _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e040e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar7 = (long)_DAT_11271381c;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar7 = (long)_DAT_112713820;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar7 = (long)_DAT_112713824;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar7 = (long)_DAT_112713828;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1fada0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c193a00(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bde80(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271382c;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar7 = (long)_DAT_112713830;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar6);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar6);
  func_0x00010c1677c0(0x3fd999999999999a,*(undefined8 *)(param_1 + lVar7));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(ulong *)(param_1 + lVar7);
  func_0x00010befbb60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  lVar5 = (long)_DAT_112713834;
  uVar3 = uVar4;
  func_0x00010c071ae0();
  puVar1 = PTR_PTR_1126b0a80;
  if ((uVar3 & 1) == 0) {
    _objc_retain(uVar4);
    _objc_opt_class(puVar1);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    _objc_release(uVar4);
    if ((uVar4 != 0) && ((uVar3 & 1) != 0)) {
      _objc_retain(uVar4);
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = uVar4;
      _objc_release(uVar6);
      func_0x00010beaf760(param_1);
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c261320(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_11271381c;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7));
      _objc_release(uVar6);
      func_0x00010c2613a0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar7));
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c261340(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_112713820;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7));
      _objc_release(uVar6);
      func_0x00010c261360(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar7));
      lVar7 = (long)_DAT_11271382c;
      uVar8 = *(undefined8 *)(param_1 + lVar7);
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf389a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar8);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf38940(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c195460(uVar6);
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf38960(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c1beb60(uVar6);
      if ((*(byte *)(param_1 + _DAT_112713838) & 1) == 0) {
        func_0x00010bed5ac0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104e0447c; end: 104e0462f; -[SCCommerceReviewOrderFooter setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0447c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112713834;
  uVar1 = param_3;
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126b0a80;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    _objc_release(param_3);
    if ((param_3 != 0) && ((uVar1 & 1) != 0)) {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = param_3;
      _objc_release(uVar3);
      func_0x00010beaf760(param_1);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c261320(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11271381c;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
      _objc_release(uVar3);
      func_0x00010c2613a0(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c261340(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_112713820;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
      _objc_release(uVar3);
      func_0x00010c261360(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
      lVar5 = (long)_DAT_11271382c;
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf389a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar4);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf38940(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c195460(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf38960(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c1beb60(uVar3);
      if ((*(byte *)(param_1 + _DAT_112713838) & 1) == 0) {
        func_0x00010bed5ac0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e04630; end: 104e04853; -[SCCommerceReviewOrderFooter _setupReturns] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104e04630(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_112713834;
  puVar1 = *(undefined **)(param_3 + lVar20);
  func_0x00010c13fd00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = *(long *)(param_3 + lVar20);
    func_0x00010c13fca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_3 + lVar20);
      func_0x00010c13fd00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = (long)_DAT_112713824;
      func_0x00010c212f20(*(undefined8 *)(param_3 + lVar2),param_4,uVar3);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_3 + lVar20);
      func_0x00010c13fd40(uVar3);
      func_0x00010c21ad00(*(undefined8 *)(param_3 + lVar2),param_4,uVar3);
      uVar3 = *(undefined8 *)(param_3 + lVar20);
      func_0x00010c13fd20(uVar3);
      lVar2 = (long)_DAT_112713828;
      func_0x00010c21ad00(*(undefined8 *)(param_3 + lVar2),param_4,uVar3);
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc();
      uVar3 = *(undefined8 *)(param_3 + lVar20);
      func_0x00010c13fca0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar1,param_4,uVar3);
      _objc_release(uVar3);
      if (puVar1 == (undefined *)0x0) {
        uVar3 = *(undefined8 *)(param_3 + lVar20);
        func_0x00010c13fbe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_3 + lVar2),param_4,uVar3);
      }
      else {
        uVar18 = *(undefined8 *)(param_3 + lVar2);
        uVar3 = *(undefined8 *)(param_3 + lVar20);
        func_0x00010c13fbe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_60 = uVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_60,1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_3 + lVar20);
        func_0x00010c13fca0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_68 = uVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_68,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212fe0(uVar18,param_4,&PTR____CFConstantStringClassReference_110db5b98,puVar4,
                            puVar6);
        _objc_release(puVar6);
        _objc_release(uVar5);
        _objc_release(puVar4);
      }
      _objc_release(uVar3);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1[_DAT_112713838] = 1;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11271381c;
  uVar18 = *(undefined8 *)(puVar1 + lVar2);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c274200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010bf493c0(0x4038000000000000,uVar18,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + lVar2);
  uStack_100 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493c0(0x4034000000000000,uVar7,param_4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_100,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar5);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(uVar18);
  lVar20 = (long)_DAT_112713820;
  uVar18 = *(undefined8 *)(puVar1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + lVar2);
  func_0x00010c274200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010bf493a0(uVar18,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + lVar20);
  uStack_110 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf493c0(0xc034000000000000,uVar10,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_110,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4,param_4,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar18);
  lVar20 = (long)_DAT_112713830;
  uVar10 = *(undefined8 *)(puVar1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + lVar2);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010bf493c0(0x4034000000000000,uVar10,param_4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar1 + lVar20);
  uStack_130 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar1 + lVar20);
  uStack_128 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar13;
  func_0x00010bf493c0(0x4034000000000000,uVar13,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar1 + lVar20);
  uStack_120 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar14;
  func_0x00010bf493c0(0xc034000000000000,uVar14,param_4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_118 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_130,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(puVar8);
  _objc_release(uVar14);
  _objc_release(uVar18);
  _objc_release(puVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  lVar19 = (long)_DAT_112713824;
  uVar18 = *(undefined8 *)(puVar1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + lVar20);
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010bf493c0(0x4034000000000000,uVar18,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + lVar19);
  uStack_140 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf493c0(0x4034000000000000,uVar10,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_138 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_140,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4,param_4,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar18);
  lVar2 = (long)_DAT_112713828;
  uVar7 = *(undefined8 *)(puVar1 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493a0(uVar7,param_4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + lVar2);
  uStack_158 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar10;
  func_0x00010bf493c0(0x4014000000000000,uVar10,param_4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar1 + lVar2);
  uStack_150 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11271382c;
  uVar13 = *(undefined8 *)(puVar1 + lVar20);
  func_0x00010c274200(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf49500(uVar12,param_4,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_148 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_158,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar18);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(puVar8);
  _objc_release(uVar7);
  func_0x00010c0699c0(*(undefined8 *)(puVar1 + lVar20));
  uVar11 = *(undefined8 *)(puVar1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf493c0(0x403e000000000000,uVar11,param_4,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar1 + lVar20);
  uStack_180 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf493c0(0xc034000000000000,uVar13,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar1 + lVar20);
  uStack_178 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf34860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar14;
  func_0x00010bf493a0(uVar14,param_4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar1 + lVar20);
  uStack_170 = uVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar15;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar1 + lVar20);
  uStack_168 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  func_0x00010bf49520(0xc034000000000000,uVar16,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 5;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_160 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_180,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar18);
  _objc_release(puVar8);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar11);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_4,puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return puVar4;
  }
  ___stack_chk_fail();
  lVar20 = (long)_DAT_11271383c;
  _objc_retain(uVar17);
  puVar4 = puVar4 + lVar20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bfb44a0();
  _objc_release(uVar17);
  _objc_release(puVar4);
  return (undefined *)0x0;
}



/* Entry: 104e04854; end: 104e05117; -[SCCommerceReviewOrderFooter _updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104e04854(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_3 + _DAT_112713838) = 1;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11271381c;
  uVar2 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010c274200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493c0(0x4038000000000000,uVar2,param_4,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar18);
  uStack_90 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493c0(0x4034000000000000,uVar4,param_4,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(lVar16);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar17);
  _objc_release(uVar2);
  lVar17 = (long)_DAT_112713820;
  uVar2 = *(undefined8 *)(param_3 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010c274200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + lVar17);
  uStack_a0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493c0(0xc034000000000000,uVar7,param_4,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_a0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(lVar17);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar15 = (long)_DAT_112713830;
  uVar7 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493c0(0x4034000000000000,uVar7,param_4,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar15);
  uStack_c0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + lVar15);
  uStack_b8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf493c0(0x4034000000000000,uVar10,param_4,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + lVar15);
  uStack_b0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf493c0(0xc034000000000000,uVar11,param_4,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(lVar16);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(lVar17);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  lVar18 = (long)_DAT_112713824;
  uVar2 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493c0(0x4034000000000000,uVar2,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + lVar18);
  uStack_d0 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493c0(0x4034000000000000,uVar7,param_4,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_d0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(lVar17);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar16 = (long)_DAT_112713828;
  uVar4 = *(undefined8 *)(param_3 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0(uVar4,param_4,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + lVar16);
  uStack_e8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493c0(0x4014000000000000,uVar7,param_4,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar16);
  uStack_e0 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11271382c;
  uVar10 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf49500(uVar9,param_4,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_e8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar17);
  _objc_release(uVar4);
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar15));
  uVar8 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493c0(0x403e000000000000,uVar8,param_4,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + lVar15);
  uStack_110 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf493c0(0xc034000000000000,uVar10,param_4,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + lVar15);
  uStack_108 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493a0(uVar11,param_4,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + lVar15);
  uStack_100 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + lVar15);
  uStack_f8 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010bf49520(0xc034000000000000,uVar13,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 5;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_110,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(lVar17);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(lVar16);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_4,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_11271383c;
  _objc_retain(uVar14);
  puVar1 = puVar1 + lVar17;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bfb44a0();
  _objc_release(uVar14);
  _objc_release(puVar1);
  return (undefined *)0x0;
}



/* Entry: 104e05118; end: 104e05177; -[SCCommerceReviewOrderFooter textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e05118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271383c;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb44a0();
  _objc_release(param_4);
  _objc_release(param_1);
  return 0;
}



/* Entry: 104e05178; end: 104e051ab; -[SCCommerceReviewOrderFooter _checkoutButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e05178(long param_1)

{
  param_1 = param_1 + _DAT_11271383c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf38980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e051ac; end: 104e051bb; -[SCCommerceReviewOrderFooter viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e051ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713834);
}



/* Entry: 104e051bc; end: 104e051db; -[SCCommerceReviewOrderFooter delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e051bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271383c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e051dc; end: 104e051ef; -[SCCommerceReviewOrderFooter setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e051dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271383c,param_3);
  return;
}



/* Entry: 104e051f0; end: 104e0528b; -[SCCommerceReviewOrderFooter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e051f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271383c);
  _objc_storeStrong(param_1 + _DAT_11271382c,0);
  _objc_storeStrong(param_1 + _DAT_112713830,0);
  _objc_storeStrong(param_1 + _DAT_112713834,0);
  _objc_storeStrong(param_1 + _DAT_112713828,0);
  _objc_storeStrong(param_1 + _DAT_112713824,0);
  _objc_storeStrong(param_1 + _DAT_112713820,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271381c,0);
  return;
}



/* Entry: 104e0528c; end: 104e053c3;  */

void FUN_104e0528c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db5bb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db5bb8,
                      &PTR____CFConstantStringClassReference_110db5bd8,0);
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



/* Entry: 104e053c4; end: 104e0555f; -[SCCommerceReviewOrderFooterViewModel initWithSubtotal:subtotalStyle:subtotalAmount:subtotalAmountStyle:returns:returnsStyle:returnPolicy:returnsPolicyStyle:returnURL:checkoutButtonText:checkoutButtonActive:checkoutButtonLoading:] */

undefined8 *
FUN_104e053c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e44c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar1[5] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    puVar1[7] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    puVar1[9] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 9) = param_13._1_1_;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e05560; end: 104e05583; -[SCCommerceReviewOrderFooterViewModel copyWithZone:] */

undefined8 FUN_104e05560(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e05584; end: 104e0558b; -[SCCommerceReviewOrderFooterViewModel subtotal] */

undefined8 FUN_104e05584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e0558c; end: 104e05593; -[SCCommerceReviewOrderFooterViewModel subtotalStyle] */

undefined8 FUN_104e0558c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e05594; end: 104e0559b; -[SCCommerceReviewOrderFooterViewModel subtotalAmount] */

undefined8 FUN_104e05594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e0559c; end: 104e055a3; -[SCCommerceReviewOrderFooterViewModel subtotalAmountStyle] */

undefined8 FUN_104e0559c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104e055a4; end: 104e055ab; -[SCCommerceReviewOrderFooterViewModel returns] */

undefined8 FUN_104e055a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104e055ac; end: 104e055b3; -[SCCommerceReviewOrderFooterViewModel returnsStyle] */

undefined8 FUN_104e055ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104e055b4; end: 104e055bb; -[SCCommerceReviewOrderFooterViewModel returnPolicy] */

undefined8 FUN_104e055b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104e055bc; end: 104e055c3; -[SCCommerceReviewOrderFooterViewModel returnsPolicyStyle] */

undefined8 FUN_104e055bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104e055c4; end: 104e055cb; -[SCCommerceReviewOrderFooterViewModel returnURL] */

undefined8 FUN_104e055c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104e055cc; end: 104e055d3; -[SCCommerceReviewOrderFooterViewModel checkoutButtonText] */

undefined8 FUN_104e055cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104e055d4; end: 104e055db; -[SCCommerceReviewOrderFooterViewModel checkoutButtonActive] */

undefined1 FUN_104e055d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e055dc; end: 104e055e3; -[SCCommerceReviewOrderFooterViewModel checkoutButtonLoading] */

undefined1 FUN_104e055dc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104e055e4; end: 104e05643; -[SCCommerceReviewOrderFooterViewModel .cxx_destruct] */

void FUN_104e055e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e05644; end: 104e0568b; +[SCCommerceReviewOrderAction back] */

void FUN_104e05644(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0aa8;
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



/* Entry: 104e0568c; end: 104e056d7; +[SCCommerceReviewOrderAction checkout] */

void FUN_104e0568c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0aa8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e056d8; end: 104e05737; +[SCCommerceReviewOrderAction quantitySelectorWithIndex:quantity:] */

void FUN_104e056d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0aa8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e05738; end: 104e05793; +[SCCommerceReviewOrderAction removeLineItemWithIndex:] */

void FUN_104e05738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0aa8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e05794; end: 104e057df; +[SCCommerceReviewOrderAction storeSelect] */

void FUN_104e05794(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0aa8;
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



/* Entry: 104e057e0; end: 104e05803; -[SCCommerceReviewOrderAction copyWithZone:] */

undefined8 FUN_104e057e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e05804; end: 104e05847; -[SCCommerceReviewOrderAction internalInit] */

void FUN_104e05804(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e44c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e05848; end: 104e05963; -[SCCommerceReviewOrderAction matchBack:storeSelect:quantitySelector:removeLineItem:checkout:] */

void FUN_104e05848(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_104e0592c;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_104e0592c;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else {
    if (lVar1 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_104e0592c;
    }
    if (lVar1 == 3) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_104e0592c;
    }
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_104e0592c;
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
  }
  (*pcVar2)(lVar1);
LAB_104e0592c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e05964; end: 104e05a9f; -[SCCommerceReviewOrderViewModel initWithHeaderTitle:dismissalAction:storeViewModel:lineItemsViewModels:footerViewModel:blockInteraction:errorMessage:] */

undefined1 *
FUN_104e05964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e44d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e05aa0; end: 104e05ac3; -[SCCommerceReviewOrderViewModel copyWithZone:] */

undefined8 FUN_104e05aa0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e05ac4; end: 104e05acb; -[SCCommerceReviewOrderViewModel headerTitle] */

undefined8 FUN_104e05ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e05acc; end: 104e05ad3; -[SCCommerceReviewOrderViewModel dismissalAction] */

undefined8 FUN_104e05acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e05ad4; end: 104e05adb; -[SCCommerceReviewOrderViewModel storeViewModel] */

undefined8 FUN_104e05ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e05adc; end: 104e05ae3; -[SCCommerceReviewOrderViewModel lineItemsViewModels] */

undefined8 FUN_104e05adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104e05ae4; end: 104e05aeb; -[SCCommerceReviewOrderViewModel footerViewModel] */

undefined8 FUN_104e05ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104e05aec; end: 104e05af3; -[SCCommerceReviewOrderViewModel blockInteraction] */

undefined1 FUN_104e05aec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e05af4; end: 104e05afb; -[SCCommerceReviewOrderViewModel errorMessage] */

undefined8 FUN_104e05af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104e05afc; end: 104e05b4f; -[SCCommerceReviewOrderViewModel .cxx_destruct] */

void FUN_104e05afc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e05b50; end: 104e05dab; -[SCCommerceSIGRootNavigationDeck initWithUIContainer:delegate:] */

undefined8 *
FUN_104e05b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126e44d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0ad0;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010b09483c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    uVar2 = puVar1[4];
    puVar3 = PTR_PTR_1126b0318;
    _objc_alloc(PTR_PTR_1126b0318);
    func_0x00010c008220();
    func_0x00010b0947a4(uVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar2 = puVar1[3];
    puVar3 = PTR_PTR_1126b0ad8;
    func_0x00010c0d6620(PTR_PTR_1126b0ad8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c18b5e0(puVar1[5]);
    _objc_storeWeak(puVar1 + 7,param_4);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = puVar1[5];
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104e05dac;
    puStack_88 = &UNK_11084f130;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c0e7c20(uVar2);
    uVar2 = puVar1[5];
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c0e7ba0(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e05dac; end: 104e05e03;  */

void FUN_104e05dac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e05e04; end: 104e05e0b; -[SCCommerceSIGRootNavigationDeck attachToPresentingContainer] */

void FUN_104e05e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachToPresentingContext_1125a0be0);
  return;
}



/* Entry: 104e05e0c; end: 104e05e13; -[SCCommerceSIGRootNavigationDeck dismissFromPresentingContainer] */

void FUN_104e05e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachFromPresentingContext_1125b9648);
  return;
}



/* Entry: 104e05e14; end: 104e05ef7; -[SCCommerceSIGRootNavigationDeck pushViewController:animated:] */

void FUN_104e05e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c11c540(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e05ef8; end: 104e05f33;  */

void FUN_104e05ef8(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be84f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e05f34; end: 104e05fa3; -[SCCommerceSIGRootNavigationDeck popViewControllerAnimated:] */

bool FUN_104e05f34(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (1 < uVar2) {
    func_0x00010c103a20(*(undefined8 *)(param_1 + 0x28),param_2,param_3,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return 1 < uVar2;
}



/* Entry: 104e05fa4; end: 104e06007; -[SCCommerceSIGRootNavigationDeck presentModalViewController:animated:] */

void FUN_104e05fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bef1360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e06008; end: 104e0600f; -[SCCommerceSIGRootNavigationDeck activeViewController] */

void FUN_104e06008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_currentViewController_1125b5c90);
  return;
}



/* Entry: 104e06010; end: 104e0606f; -[SCCommerceSIGRootNavigationDeck activeUIContainer] */

void FUN_104e06010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010bef1360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e06070; end: 104e06077; -[SCCommerceSIGRootNavigationDeck isRootOfNavigation] */

undefined8 FUN_104e06070(void)

{
  return 1;
}



/* Entry: 104e06078; end: 104e060f7; -[SCCommerceSIGRootNavigationDeck didDismissViewController] */

void FUN_104e06078(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 1) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2a6980();
    _objc_release(lVar1);
    func_0x00010c1037e0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf79a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 104e060f8; end: 104e06173; -[SCCommerceSIGRootNavigationDeck _pushViewController:] */

void FUN_104e060f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2a5780();
    _objc_release(lVar1);
  }
  func_0x00010c11bfa0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72360();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e06174; end: 104e061c3; -[SCCommerceSIGRootNavigationDeck _handleNavigationContainerWillDisappear] */

void FUN_104e06174(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c078800();
  if ((int)lVar1 != 0) {
    func_0x00010c1b2c40(param_1,param_2,0);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e061c4; end: 104e061cb; -[SCCommerceSIGRootNavigationDeck _handleNavigationContainerWillAppear] */

void FUN_104e061c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b2c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsNavigationContainerVisible__11264a538,1)
  ;
  return;
}



/* Entry: 104e061cc; end: 104e061d3; -[SCCommerceSIGRootNavigationDeck stack] */

undefined8 FUN_104e061cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e061d4; end: 104e06203; -[SCCommerceSIGRootNavigationDeck setStack:] */

void FUN_104e061d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e06204; end: 104e0620b; -[SCCommerceSIGRootNavigationDeck rootContainer] */

undefined8 FUN_104e06204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e0620c; end: 104e0623b; -[SCCommerceSIGRootNavigationDeck setRootContainer:] */

void FUN_104e0620c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


