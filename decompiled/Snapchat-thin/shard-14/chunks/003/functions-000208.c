/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0d88ec; end: 10b0d88ef; -[SCLensDataFetcherUIState didSelectLens:withContext:] */

void FUN_10b0d88ec(void)

{
  return;
}



/* Entry: 10b0d88f0; end: 10b0d89a7; -[SCLensDataFetcherUIState didHideLensesWithContext:] */

void FUN_10b0d88f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b0d89a8; end: 10b0d8a27;  */

void FUN_10b0d89a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77380();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d8a28; end: 10b0d8a2b; -[SCLensDataFetcherUIState willShowLensesWithContext:] */

void FUN_10b0d8a28(void)

{
  return;
}



/* Entry: 10b0d8a2c; end: 10b0d8a83; -[SCLensDataFetcherUIState _performImmediatlyIfCurrentPerformerBlock:] */

void FUN_10b0d8a2c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06fc80();
    if (iVar1 == 0) {
      func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d8a84; end: 10b0d8a9b; -[SCLensDataFetcherUIState delegate] */

void FUN_10b0d8a84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0d8a9c; end: 10b0d8af7; -[SCLensDataFetcherUIState .cxx_destruct] */

void FUN_10b0d8a9c(long param_1)

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



/* Entry: 10b0d8af8; end: 10b0d8b3b; -[SCLensDataFetchingMediator dealloc] */

void FUN_10b0d8af8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c560();
  puStack_28 = PTR_PTR_112705a48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b0d8b3c; end: 10b0d8d5b; -[SCLensDataFetchingMediator fetchCachedDownloadableLensesWithFetchSourceType:performImmediately:] */

void FUN_10b0d8b3c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x71) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa56e0();
LAB_10b0d8c00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  lVar1 = param_1;
  func_0x00010be215e0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    if (param_4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be215e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa56e0(uVar3);
      _objc_release(param_1);
      goto LAB_10b0d8c00;
    }
    _objc_initWeak(auStack_48,param_1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puVar5 = PTR_PTR_1126ae960;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR_PTR_1126cd588;
    func_0x00010bf63860(PTR_PTR_1126cd588);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fb60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010bfe2ec0(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    func_0x00010c2a14e0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_58);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10b0d8d5c; end: 10b0d8ddf;  */

void FUN_10b0d8d5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be215e0(lVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa56e0(uVar2,param_2,lVar3,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d8de0; end: 10b0d8efb; -[SCLensDataFetchingMediator fetchDownloadableLensesWithFetchSourceType:] */

void FUN_10b0d8de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar5);
  lVar4 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  lVar1 = lVar5;
  if (*(char *)(param_1 + 0x71) == '\x01') {
    lVar1 = param_1;
    func_0x00010be1eb80(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar2 = param_1;
    func_0x00010be215e0(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7f80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa77c0();
  _objc_release(uVar3);
  func_0x00010bfa56a0(param_1,param_2,param_3,0);
  *(undefined1 *)(param_1 + 0x70) = 1;
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d8efc; end: 10b0d8f03; -[SCLensDataFetchingMediator updateDownloadableLenses:] */

void FUN_10b0d8efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c285410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateDownloadableLenses_partial_11267ef28,param_3,0);
  return;
}



/* Entry: 10b0d8f04; end: 10b0d8f6f; -[SCLensDataFetchingMediator updateDownloadableLenses:partialDownloadableLenses:] */

void FUN_10b0d8f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 10b0d8f70; end: 10b0d8f77; -[SCLensDataFetchingMediator addToken:] */

void FUN_10b0d8f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 10b0d8f78; end: 10b0d8f7f; -[SCLensDataFetchingMediator removeToken:] */

void FUN_10b0d8f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 10b0d8f80; end: 10b0d901f; -[SCLensDataFetchingMediator startUpdatingLensData] */

void FUN_10b0d8f80(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c28d800();
  uVar2 = uVar1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc480(param_1,param_2,uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x00010bef8400(param_1);
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c092420();
    _objc_release(uVar1);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c092460();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0d9020; end: 10b0d907f; -[SCLensDataFetchingMediator stopUpdatingLensDataWithToken:] */

void FUN_10b0d9020(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c12eb80();
  uVar1 = param_1;
  func_0x00010c28d800();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c12c560(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c092440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d9080; end: 10b0d90bb; -[SCLensDataFetchingMediator fetchLensesIfNeededWithFetchSourceType:] */

void FUN_10b0d9080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c28d800();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_fetchDownloadableLensesWithFetch_1125c7340,param_3);
    return;
  }
  return;
}



/* Entry: 10b0d90bc; end: 10b0d90ff; -[SCLensDataFetchingMediator prefetchLensesIfNeededWithFetchSourceType:] */

void FUN_10b0d90bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c28d800();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_fetchDownloadableLensesWithFetch_1125c7340,param_3);
    return;
  }
  return;
}



/* Entry: 10b0d9100; end: 10b0d920f; -[SCLensDataFetchingMediator fetchLens:fetchSourceType:] */

undefined * FUN_10b0d9100(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if ((puVar2 != (undefined *)0x0) &&
     (uVar6 = param_1, puVar5 = param_3, func_0x00010c076980(param_1,param_2,param_3),
     (uVar6 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bfa7f80(uVar3,param_2,puVar1,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar6 = *(ulong *)(param_3 + 0x40);
  puVar1 = puVar5;
  func_0x00010c094540(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar6,param_2,puVar1);
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(param_3 + 0x38);
    puVar2 = puVar5;
    func_0x00010c094540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar6,param_2,puVar2);
    if ((uVar6 & 1) == 0) {
      puVar7 = *(undefined **)(param_3 + 0x48);
      puVar4 = puVar5;
      func_0x00010c094540(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(puVar7,param_2,puVar4);
      _objc_release(puVar4);
    }
    else {
      puVar7 = (undefined *)0x1;
    }
    _objc_release(puVar2);
  }
  else {
    puVar7 = (undefined *)0x1;
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
  return puVar7;
}



/* Entry: 10b0d9210; end: 10b0d92f3; -[SCLensDataFetchingMediator isFetchingLens:] */

undefined8 FUN_10b0d9210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x40);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4,param_2,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x38);
    uVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4,param_2,uVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar3 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar5,param_2,uVar3);
      _objc_release(uVar3);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar2);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10b0d92f4; end: 10b0d933b; -[SCLensDataFetchingMediator lensUIStateListener] */

void FUN_10b0d92f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0d933c; end: 10b0d936f; -[SCLensDataFetchingMediator cancelDownloads] */

void FUN_10b0d933c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d9370; end: 10b0d93a3; -[SCLensDataFetchingMediator pauseDownloads] */

void FUN_10b0d9370(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d93a4; end: 10b0d93d7; -[SCLensDataFetchingMediator resumeDownloads] */

void FUN_10b0d93a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d93d8; end: 10b0d9427; -[SCLensDataFetchingMediator clearCacheWithCompletionBlock:] */

void FUN_10b0d93d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ac80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d9428; end: 10b0d94d7; -[SCLensDataFetchingMediator fetchAsset:lens:fetchSourceType:completionPerformer:completion:] */

void FUN_10b0d9428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4f00();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d94d8; end: 10b0d94e3; -[SCLensDataFetchingMediator fetchLenses:fetchSourceType:] */

void FUN_10b0d94d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchLenses_requestTiming_fetchS_1125c7990,param_3,5,param_4);
  return;
}



/* Entry: 10b0d94e4; end: 10b0d961f; -[SCLensDataFetchingMediator fetchLenses:requestTiming:fetchSourceType:] */

void FUN_10b0d94e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b0d95a8;
  puStack_40 = &UNK_110857a38;
  lStack_38 = param_1;
  func_0x00010bfaea20(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa7fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0d9620; end: 10b0d967f; -[SCLensDataFetchingMediator fetchCachedLenses:fetchSourceType:] */

void FUN_10b0d9620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa56e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d9680; end: 10b0d96e7; -[SCLensDataFetchingMediator fetchIconsForLenses:requestTiming:fetchSourceType:] */

void FUN_10b0d9680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa77c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d96e8; end: 10b0d9737; -[SCLensDataFetchingMediator addListener:] */

void FUN_10b0d96e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d9738; end: 10b0d9787; -[SCLensDataFetchingMediator removeListener:] */

void FUN_10b0d9738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d9788; end: 10b0d97d7; -[SCLensDataFetchingMediator addProgressListener:] */

void FUN_10b0d9788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befac00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d97d8; end: 10b0d9827; -[SCLensDataFetchingMediator removeProgressListener:] */

void FUN_10b0d97d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d9828; end: 10b0d988b; -[SCLensDataFetchingMediator addEventsListener:] */

undefined8 FUN_10b0d9828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bef8100();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 10b0d988c; end: 10b0d98db; -[SCLensDataFetchingMediator removeEventsListener:] */

void FUN_10b0d988c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d98dc; end: 10b0d9997; -[SCLensDataFetchingMediator reachabilityStatusChangedNotification:] */

void FUN_10b0d98dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _objc_release(param_3);
  if ((int)uVar2 == 2) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b0d9998;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x000107c312d0("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 10b0d9998; end: 10b0d99d3;  */

void FUN_10b0d9998(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c28d800();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchDownloadableLensesWithFetch_1125c7340,2);
    return;
  }
  return;
}



/* Entry: 10b0d99d4; end: 10b0d9a37; -[SCLensDataFetchingMediator _getDownloadableLensesToFetch:] */

void FUN_10b0d99d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b0d9a38;
  puStack_28 = &UNK_110cb9308;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bfaea20(*(undefined8 *)(param_1 + 0x60),param_2,&puStack_40);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0d9a38; end: 10b0d9ae7;  */

uint FUN_10b0d9a38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
  uVar1 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if (((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    uVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10b0d9ae8; end: 10b0d9b4b; -[SCLensDataFetchingMediator _getPartialDownloadableLensesToFetch:] */

void FUN_10b0d9ae8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b0d9b4c;
  puStack_28 = &UNK_110cb9308;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bfaea20(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_40);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0d9b4c; end: 10b0d9bfb;  */

uint FUN_10b0d9b4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x58);
  uVar1 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if (((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
    uVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10b0d9bfc; end: 10b0d9c53; -[SCLensDataFetchingMediator isLensWithInvalidContent:] */

undefined8 FUN_10b0d9bfc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar1,param_2,param_3);
    _objc_release(param_3);
    return uVar1;
  }
  return 0;
}



/* Entry: 10b0d9c54; end: 10b0d9c5b; -[SCLensDataFetchingMediator didUpdateContentForLens:] */

void FUN_10b0d9c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didUpdateContentForLens_contentU_1125bd1f0,param_3,0);
  return;
}



/* Entry: 10b0d9c5c; end: 10b0d9ccb; -[SCLensDataFetchingMediator didUpdateContentForLens:contentUpdateType:] */

void FUN_10b0d9c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c28d800();
  if ((int)uVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c092400();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d9ccc; end: 10b0d9d3f; -[SCLensDataFetchingMediator addFetcherListeners] */

void FUN_10b0d9ccc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b0d9d40; end: 10b0d9db3; -[SCLensDataFetchingMediator removeFetcherListeners] */

void FUN_10b0d9d40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b0d9db4; end: 10b0d9db7; -[SCLensDataFetchingMediator willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_10b0d9db4(void)

{
  return;
}



/* Entry: 10b0d9db8; end: 10b0d9e7f; -[SCLensDataFetchingMediator willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0d9db8(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_5 & 1) == 0) && (lVar1 != 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b0d9e80;
    puStack_60 = &UNK_11084d5f8;
    uStack_58 = param_1;
    uStack_48 = param_4;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_78);
    _objc_release(lStack_50);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d9e80; end: 10b0d9edb;  */

void FUN_10b0d9e80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didUpdateContentForLens__1125bd1e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0d9edc; end: 10b0d9fa3; -[SCLensDataFetchingMediator willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0d9edc(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_5 & 1) == 0) && (lVar1 != 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b0d9fa4;
    puStack_60 = &UNK_11084d5f8;
    uStack_58 = param_1;
    uStack_48 = param_4;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_78);
    _objc_release(lStack_50);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d9fa4; end: 10b0d9fff;  */

void FUN_10b0d9fa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didUpdateContentForLens__1125bd1e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0da000; end: 10b0da003; -[SCLensDataFetchingMediator willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_10b0da000(void)

{
  return;
}



/* Entry: 10b0da004; end: 10b0da10f; -[SCLensDataFetchingMediator willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_10b0da004(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_4 & 1) == 0) && (lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10b0da0bc;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0da110; end: 10b0da1fb; -[SCLensDataFetchingMediator didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0da110(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,ulong param_7)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_7 & 1) == 0) && (lVar1 != 0)) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b0da1fc;
    puStack_68 = &UNK_110858b70;
    _objc_retain(param_4);
    uStack_60 = param_4;
    uStack_58 = param_1;
    uStack_48 = param_6;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_80);
    _objc_release(lStack_50);
    _objc_release(uStack_60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0da1fc; end: 10b0da263;  */

void FUN_10b0da1fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x20) != 0) || ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_didUpdateContentForLens_contentU_1125bd1f0,
             *(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 10b0da264; end: 10b0da37f; -[SCLensDataFetchingMediator didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0da264(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,ulong param_7)

{
  long lVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_7 & 1) == 0) && (lVar1 != 0)) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10b0da380;
    puStack_80 = &UNK_110878f70;
    _objc_retain(param_4);
    uStack_78 = param_4;
    uStack_70 = param_1;
    uStack_58 = param_6;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_5);
    uStack_60 = param_5;
    func_0x000107c312d0("APPSTORE",&puStack_98);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
    _objc_release(uStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0da380; end: 10b0da49f;  */

void FUN_10b0da380(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x20) == 0) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
LAB_10b0da42c:
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) goto LAB_10b0da488;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2);
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_10b0da42c;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107340();
  }
  _objc_release(uVar1);
LAB_10b0da488:
                    /* WARNING: Could not recover jumptable at 0x00010bf7e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_didUpdateContentForLens_contentU_1125bd1f0,
             *(undefined8 *)(param_1 + 0x30),2);
  return;
}



/* Entry: 10b0da4a0; end: 10b0da603; -[SCLensDataFetchingMediator didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_10b0da4a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = param_3, func_0x00010c136b80(), lVar2 != 6)) {
    _objc_release(lVar1);
  }
  else {
    _objc_release(lVar1);
    if ((param_4 != 0) && ((param_7 & 1) == 0)) {
      _objc_initWeak(auStack_58,param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10b0da604;
      puStack_70 = &UNK_110841fb0;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_4);
      lStack_68 = param_4;
      func_0x000107c312d0("APPSTORE",&puStack_88);
      _objc_release(lStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0da604; end: 10b0da63b;  */

void FUN_10b0da604(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0da63c; end: 10b0da74b; -[SCLensDataFetchingMediator didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_10b0da63c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_5 & 1) == 0) && (lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10b0da6f4;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0da74c; end: 10b0da74f; -[SCLensDataFetchingMediator lensDataFetcher:didFinishLoadingContentForLens:successfully:] */

void FUN_10b0da74c(void)

{
  return;
}



/* Entry: 10b0da750; end: 10b0da7a7; -[SCLensDataFetchingMediator didClearCacheForLensDataFetcher:] */

void FUN_10b0da750(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b0da7a8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10b0da7a8; end: 10b0da7af;  */

void FUN_10b0da7a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearCache_112555978);
  return;
}



/* Entry: 10b0da7b0; end: 10b0da807; -[SCLensDataFetchingMediator didClearIconsForLensDataFetcher:] */

void FUN_10b0da7b0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b0da808;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10b0da808; end: 10b0da80f;  */

void FUN_10b0da808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearCache_112555978);
  return;
}



/* Entry: 10b0da810; end: 10b0da813; -[SCLensDataFetchingMediator didClearCacheFromTweaksForLensDataFetcher:] */

void FUN_10b0da810(void)

{
  return;
}



/* Entry: 10b0da814; end: 10b0da817; -[SCLensDataFetchingMediator didCancelDownloadsAndClearInMemoryCacheForLensDataFetcher:] */

void FUN_10b0da814(void)

{
  return;
}



/* Entry: 10b0da818; end: 10b0da8bf;  */

void FUN_10b0da818(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c19a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0da8c0; end: 10b0da9a7;  */

void FUN_10b0da8c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ddd10;
  func_0x00010be411e0();
  if (((ulong)puVar1 & 1) == 0) {
    if (param_3 == 0) {
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained();
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        uVar3 = param_2;
        func_0x00010c094540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(uVar4);
        _objc_release(uVar3);
        uVar4 = *(undefined8 *)(lVar2 + 0x48);
        uVar3 = param_2;
        func_0x00010c094540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(lVar2);
    }
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7e120();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0da9a8; end: 10b0daa4f;  */

void FUN_10b0da9a8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1980(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0daa50; end: 10b0dac1f;  */

void FUN_10b0daa50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0800(param_3);
  if (*(char *)(puStack_88 + 3) == '\x01') {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      uVar2 = param_2;
      func_0x00010c094540(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
  if ((*(byte *)(puStack_68 + 3) & 1) == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7e120();
    _objc_release(param_1);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0dac20; end: 10b0dac33;  */

void FUN_10b0dac20(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10b0dac34; end: 10b0dac6b;  */

void FUN_10b0dac34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ddd10;
  func_0x00010be411e0(PTR_PTR_1126ddd10,param_2,param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)puVar1;
  return;
}



/* Entry: 10b0dac6c; end: 10b0daceb; +[SCLensDataFetchingMediator _isIncompleteFutureError:] */

bool FUN_10b0dac6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf3ec40(param_3);
    bVar1 = lVar3 == -1;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0dacec; end: 10b0dad13; -[SCLensDataFetchingMediator _clearCache] */

/* WARNING: Possible PIC construction at 0x00010b0dad00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b0dad04) */

void FUN_10b0dacec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b0dad14; end: 10b0dad2b; -[SCLensDataFetchingMediator delegate] */

void FUN_10b0dad14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0dad2c; end: 10b0dad37; -[SCLensDataFetchingMediator setDelegate:] */

void FUN_10b0dad2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 10b0dad38; end: 10b0dadff; -[SCLensDataFetchingMediator .cxx_destruct] */

void FUN_10b0dad38(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 10b0dae00; end: 10b0dae67; -[SCLensFetchStatusProvider initWithLens:] */

long FUN_10b0dae00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b0dae68; end: 10b0daef7; -[SCLensFetchStatusProvider setComponentIds:] */

void FUN_10b0dae68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 != 0) &&
     ((uVar2 = *(ulong *)(param_1 + 0x10), uVar2 == 0 ||
      (func_0x00010c072060(uVar2,param_2,param_3), (uVar2 & 1) == 0)))) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126dfab0;
    func_0x00010be3afe0(PTR_PTR_1126dfab0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    _objc_release(uVar3);
    func_0x00010c0dd320(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0daef8; end: 10b0dafb7; -[SCLensFetchStatusProvider updateComponentId:fetchStatus:progress:error:] */

void FUN_10b0daef8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126dfab8;
    _objc_alloc(PTR_PTR_1126dfab8);
    func_0x00010c04c520(param_1);
    func_0x00010bea5d40(param_2,param_3,puVar2,param_4);
    func_0x00010c0dd320(param_2);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0dafb8; end: 10b0daff3; -[SCLensFetchStatusProvider notifyLensStatusUpdated] */

void FUN_10b0dafb8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be4ad60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0daff4; end: 10b0daffb; -[SCLensFetchStatusProvider _setNewFetchStatus:forComponentId:] */

void FUN_10b0daff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 10b0daffc; end: 10b0db003; -[SCLensFetchStatusProvider _componentFetchStatuses] */

void FUN_10b0daffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 10b0db004; end: 10b0db24b; -[SCLensFetchStatusProvider _lensFetchStatus] */

undefined * FUN_10b0db004(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c072d20();
  if (iVar1 != 0) {
    puVar4 = PTR_PTR_1126dfac0;
    func_0x00010bfab7c0();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10b0db1fc;
  }
  func_0x00010bde3a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    puVar4 = PTR_PTR_1126dfac0;
    func_0x00010bfab7c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    dVar11 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010bf52a60();
    if (uVar2 == 0) {
      _objc_release(param_1);
      dVar12 = 0.0;
LAB_10b0db1cc:
      uVar2 = param_1;
      func_0x00010bf529e0(param_1);
      dVar12 = dVar12 / (double)uVar2;
    }
    else {
      uVar7 = 0;
      lVar8 = *plStack_120;
      dVar12 = 0.0;
      do {
        uVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_1);
          }
          puVar10 = *(undefined1 **)(lStack_128 + uVar9 * 8);
          puVar3 = puVar10;
          func_0x00010c253560();
          puVar4 = PTR_PTR_1126dfac0;
          if (puVar3 == (undefined1 *)0x8) {
            func_0x00010bfa6840();
            _objc_retainAutoreleasedReturnValue();
            param_3 = puVar10;
            func_0x00010bf992c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            _objc_release(param_1);
            goto LAB_10b0db1f4;
          }
          puVar3 = puVar10;
          func_0x00010c253560();
          uVar7 = (ulong)puVar3 | uVar7;
          func_0x00010bf5fbe0(puVar10);
          dVar12 = dVar12 + dVar11;
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
        uVar2 = param_1;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
      _objc_release(param_1);
      if (uVar7 != 4) {
        if (uVar7 == 1) {
          puVar4 = PTR_PTR_1126dfac0;
          func_0x00010c0db9e0();
          _objc_retainAutoreleasedReturnValue();
          param_3 = (undefined1 *)puVar6;
          goto LAB_10b0db1f4;
        }
        goto LAB_10b0db1cc;
      }
      dVar12 = 1.0;
    }
    puVar4 = PTR_PTR_1126dfac0;
    func_0x00010bfabd60(dVar12);
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)puVar6;
  }
LAB_10b0db1f4:
  _objc_release(param_1);
LAB_10b0db1fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_3);
    puVar5 = PTR_PTR_1126dfab8;
    _objc_alloc(PTR_PTR_1126dfab8);
    func_0x00010c04c520(0);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar3 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_250,auStack_208,0x10);
    if (puVar3 != (undefined1 *)0x0) {
      lVar8 = *plStack_240;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010c1d0640(puVar4,param_2,puVar5,*(undefined8 *)(lStack_248 + (long)puVar10 * 8))
          ;
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_250,auStack_208,0x10);
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      return *(undefined **)(param_3 + 0x20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10b0db24c; end: 10b0db3af; +[SCLensFetchStatusProvider _initialFetchStatusesWithComponentIds:] */

undefined * FUN_10b0db24c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dfab8;
  _objc_alloc(PTR_PTR_1126dfab8);
  func_0x00010c04c520(0);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c1d0640(puVar3,param_2,puVar1,*(undefined8 *)(lStack_118 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 0x20);
}



/* Entry: 10b0db3b0; end: 10b0db3b7; -[SCLensFetchStatusProvider fetchStatusObservable] */

undefined8 FUN_10b0db3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0db3b8; end: 10b0db3ff; -[SCLensFetchStatusProvider .cxx_destruct] */

void FUN_10b0db3b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0db400; end: 10b0db4d3; -[SCLensMockDataCache init] */

undefined1 * FUN_10b0db400(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705a50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0db4d4; end: 10b0db55b; +[SCLensMockDataCache sharedInstance] */

void FUN_10b0db4d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10b0db55c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f4010 != -1) {
    func_0x000107c27d9c(0x1137f4010,&puStack_48);
  }
  uVar1 = uRam00000001137f4008;
  _objc_retain(uRam00000001137f4008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0db55c; end: 10b0db583;  */

void FUN_10b0db55c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137f4008;
  uRam00000001137f4008 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0db584; end: 10b0db63b; -[SCLensMockDataCache setData:forURLString:] */

void FUN_10b0db584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b0db63c;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0db63c; end: 10b0db683;  */

void FUN_10b0db63c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be60c60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be98e00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),uVar1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0db684; end: 10b0db73b; -[SCLensMockDataCache dataForURLString:completion:] */

void FUN_10b0db684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b0db73c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0db73c; end: 10b0db87b;  */

void FUN_10b0db73c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be60c60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf7c40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae790;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(uVar3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar4,param_2,0x15,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b0db87c;
    puStack_60 = &UNK_11084a9e8;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    func_0x00010c0f7fc0(puVar4,param_2,&puStack_78);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_48);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0db87c; end: 10b0db89f;  */

void FUN_10b0db87c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b0db89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x20),uVar1);
  return;
}



/* Entry: 10b0db8a0; end: 10b0db92b; -[SCLensMockDataCache _saveDataToDisk:toPath:] */

void FUN_10b0db8a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfacc00(uVar1,param_2,param_4,0);
  if ((int)uVar1 != 0) {
    uStack_38 = 0;
    func_0x00010c12cc40(*(undefined8 *)(param_1 + 8),param_2,param_4,&uStack_38);
  }
  func_0x00010c14e020(param_3,param_2,param_4,1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0db92c; end: 10b0db9a7; -[SCLensMockDataCache _dataForPath:] */

void FUN_10b0db92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  byte bStack_21;
  
  _objc_retain(param_3);
  bStack_21 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfacc00(uVar1,param_2,param_3,&bStack_21);
  puVar2 = (undefined *)0x0;
  if (((int)uVar1 != 0) && ((bStack_21 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


