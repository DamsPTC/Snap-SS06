/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108489894; end: 1084898e3; -[SCAdPersistedDataProvider setAdServerHeaderValuesArray:] */

void FUN_108489894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164540();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084898e4; end: 108489917; -[SCAdPersistedDataProvider cleanUserAdInfo] */

void FUN_1084898e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108489918; end: 10848995f; -[SCAdPersistedDataProvider getAdServerMapURL] */

void FUN_108489918(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108489960; end: 1084899af; -[SCAdPersistedDataProvider setAdServerMapURL:] */

void FUN_108489960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084899b0; end: 1084899c7; -[SCAdRequestInfoProvider userInfoAdapter] */

void FUN_1084899b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084899c8; end: 1084899df; -[SCAdRequestInfoProvider userAgentAdapter] */

void FUN_1084899c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084899e0; end: 1084899e7; -[SCAdRequestInfoProvider applicationInfo] */

undefined8 FUN_1084899e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1084899e8; end: 1084899ff; -[SCAdRequestInfoProvider deviceAdapter] */

void FUN_1084899e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108489a00; end: 108489a07; -[SCAdRequestInfoProvider birthdayProvider] */

undefined8 FUN_108489a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108489a08; end: 108489a4f; -[SCAdRequestInfoProvider .cxx_destruct] */

void FUN_108489a08(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108489a50; end: 108489a57; -[PendingNetworkRequest request] */

undefined8 FUN_108489a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108489a58; end: 108489a87; -[PendingNetworkRequest setRequest:] */

void FUN_108489a58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108489a88; end: 108489a8f; -[PendingNetworkRequest successBlock] */

undefined8 FUN_108489a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108489a90; end: 108489a97; -[PendingNetworkRequest setSuccessBlock:] */

void FUN_108489a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108489a98; end: 108489a9f; -[PendingNetworkRequest failureBlock] */

undefined8 FUN_108489a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108489aa0; end: 108489aa7; -[PendingNetworkRequest setFailureBlock:] */

void FUN_108489aa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108489aa8; end: 108489aaf; -[PendingNetworkRequest useMainThread] */

undefined1 FUN_108489aa8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108489ab0; end: 108489ab7; -[PendingNetworkRequest setUseMainThread:] */

void FUN_108489ab0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108489ab8; end: 108489abf; -[PendingNetworkRequest requestStartTs] */

undefined8 FUN_108489ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108489ac0; end: 108489ac7; -[PendingNetworkRequest setRequestStartTs:] */

void FUN_108489ac0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108489ac8; end: 108489acf; -[PendingNetworkRequest queueWaitTraceCookie] */

undefined8 FUN_108489ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108489ad0; end: 108489ad7; -[PendingNetworkRequest setQueueWaitTraceCookie:] */

void FUN_108489ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108489ad8; end: 108489b13; -[PendingNetworkRequest .cxx_destruct] */

void FUN_108489ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108489b14; end: 108489b23; -[SCAdSerializingNetworkManager submit:successBlock:failureBlock:] */

void FUN_108489b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_submit_useMainThread_successBloc_1126755a8,param_3,1,param_4,param_5);
  return;
}



/* Entry: 108489b24; end: 108489d57; -[SCAdSerializingNetworkManager submit:useMainThread:successBlock:failureBlock:] */

void FUN_108489b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_3;
  func_0x00010c233100();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar5 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108489d58;
    puStack_70 = &UNK_110a4ac00;
    _objc_retain(param_5);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x108489d6c;
    puStack_98 = &UNK_1108ab6d0;
    puStack_68 = param_5;
    _objc_retain(param_6);
    uStack_90 = param_6;
    func_0x00010c25ee00(uVar5,param_2,param_3,param_4,&puStack_88,&puStack_b0);
    _objc_release(uStack_90);
    puVar1 = puStack_68;
  }
  else {
    puVar1 = PTR_PTR_1126d9840;
    _objc_alloc_init(PTR_PTR_1126d9840);
    func_0x00010c1ebac0();
    func_0x00010c20f8c0(puVar1,param_2,param_5);
    func_0x00010c199fa0(puVar1,param_2,param_6);
    func_0x00010c21d800(puVar1,param_2,param_4);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bef4240();
    func_0x00010c136d60();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110edda38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf17b60(puVar2,param_2,puVar3);
    func_0x00010c1e6800(puVar1,param_2,puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
    _os_unfair_lock_unlock(param_1 + 0x10);
    _CACurrentMediaTime();
    func_0x00010c1ec120(puVar1);
    func_0x00010be57ba0(param_1,param_2,puVar1,1,0);
    func_0x00010bf8df40(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108489d58; end: 108489d7f;  */

void FUN_108489d58(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108489d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108489d80; end: 108489d87; -[SCAdSerializingNetworkManager onUserLogout] */

void FUN_108489d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_cleanup_1125ac228);
  return;
}



/* Entry: 108489d88; end: 108489f9b; -[SCAdSerializingNetworkManager emitNextRequest] */

void FUN_108489d88(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _os_unfair_lock_lock(param_1 + 0x10);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      _objc_release(uVar4);
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20));
      lVar5 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar5);
      _os_unfair_lock_unlock(param_1 + 0x10);
      if (lVar5 != 0) {
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11e0a0(lVar5);
        func_0x00010bf941e0(puVar2);
        _objc_release(puVar2);
        _objc_initWeak(auStack_68,param_1);
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        lVar3 = lVar5;
        func_0x00010c134680(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2903e0(lVar5);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_108489f9c;
        puStack_78 = &UNK_110a4ac30;
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_copyWeak(auStack_98,auStack_68);
        func_0x00010c25ee00(uVar1);
        _objc_release(lVar3);
        func_0x00010be57ba0(param_1);
        _objc_destroyWeak(auStack_98);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      goto LAB_108489dc8;
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  lVar5 = 0;
LAB_108489dc8:
  _objc_release(lVar5);
  return;
}



/* Entry: 108489f9c; end: 10848a06b;  */

void FUN_108489f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67580();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848a06c; end: 10848a11f; -[SCAdSerializingNetworkManager _onActiveRequestSuccess:data:] */

void FUN_10848a06c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c261760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
  }
  func_0x00010bf8df40(param_1);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10848a120; end: 10848a1d3; -[SCAdSerializingNetworkManager _onActiveRequestFailure:error:] */

void FUN_10848a120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf9ffe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
  }
  func_0x00010bf8df40(param_1);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10848a1d4; end: 10848a58f; -[SCAdSerializingNetworkManager _logRequest:isScheduled:isEmitted:] */

void FUN_10848a1d4(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  int param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  
  _objc_retain(param_4);
  if ((param_4 != 0) && (*(long *)(param_2 + 8) != 0)) {
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c15eec0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_4;
    func_0x00010c134680(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef4240();
    func_0x00010c0df840(puVar5,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dfb298,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_4;
    func_0x00010c134680(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c136d60();
    func_0x00010c0df840(puVar5,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110dd5c38,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(lVar3);
    if (((param_5 & 1) != 0) || (param_6 != 0)) {
      ppuVar1 = &PTR_PTR_110ade390;
      if (param_6 == 0) {
        ppuVar1 = &PTR_PTR_110ade398;
      }
      puVar5 = puVar6;
      func_0x00010c2ac460(puVar6,param_3,&PTR____CFConstantStringClassReference_110daf4d8,*ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar8 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bef2aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar9);
      _objc_release(uVar8);
      puVar6 = puVar5;
      if (param_6 != 0) {
        puVar2 = PTR_PTR_1126b8d98;
        func_0x00010c15eea0(PTR_PTR_1126b8d98);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar3 = param_4;
        func_0x00010c134680(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bef4240();
        func_0x00010c0df840(puVar5,param_3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dfb298,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(lVar3);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar3 = param_4;
        func_0x00010c134680(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c136d60();
        func_0x00010c0df840(puVar5,param_3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar10;
        func_0x00010c2ac460(puVar10,param_3,&PTR____CFConstantStringClassReference_110dd5c38,puVar2)
        ;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar2);
        _objc_release(puVar5);
        _objc_release(lVar3);
        _CACurrentMediaTime();
        dVar11 = param_1;
        func_0x00010c1367c0(param_4);
        uVar8 = *(undefined8 *)(param_2 + 8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bef2aa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc000(param_1 - dVar11);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar7);
      }
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10848a590; end: 10848a597; -[SCAdSerializingNetworkManager networkAdapter] */

undefined8 FUN_10848a590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10848a598; end: 10848a5c7; -[SCAdSerializingNetworkManager setNetworkAdapter:] */

void FUN_10848a598(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10848a5c8; end: 10848a5cf; -[SCAdSerializingNetworkManager pendingRequests] */

undefined8 FUN_10848a5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10848a5d0; end: 10848a5ff; -[SCAdSerializingNetworkManager setPendingRequests:] */

void FUN_10848a5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10848a600; end: 10848a607; -[SCAdSerializingNetworkManager activeRequest] */

undefined8 FUN_10848a600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10848a608; end: 10848a637; -[SCAdSerializingNetworkManager setActiveRequest:] */

void FUN_10848a608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10848a638; end: 10848a67f; -[SCAdSerializingNetworkManager .cxx_destruct] */

void FUN_10848a638(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10848a680; end: 10848a7f7; -[SCAdPixelTrackingCookieManager initWithNetworkManager:userAgentAdapter:configAdapter:commonMetricsManager:settingsMetricsManager:] */

undefined1 *
FUN_10848a680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fca10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_7);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10848a7f8; end: 10848a8e3; -[SCAdPixelTrackingCookieManager updatePixelCookieIfNecessaryWithPixelToken:] */

void FUN_10848a7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c230520();
  if (iVar1 != 0) {
    func_0x00010c0fce20(*(undefined8 *)(param_1 + 0x10));
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10848a8e4; end: 10848a917;  */

void FUN_10848a8e4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848a918; end: 10848abcb; -[SCAdPixelTrackingCookieManager _requestPixelCookieWithPixelToken:] */

void FUN_10848a918(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  uVar2 = param_2;
  func_0x00010c076c80();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    _objc_opt_class();
    iVar1 = (int)uVar2;
    func_0x00010be3f3e0();
    if (iVar1 != 0) {
      uVar2 = param_2;
      _objc_opt_class();
      func_0x00010be3f3e0();
      if ((uVar2 & 1) != 0) goto LAB_10848ab84;
    }
    lVar3 = param_4;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar6 = (undefined *)(param_2 + 0x30);
      _objc_loadWeakRetained(puVar6);
      func_0x00010c0ae200();
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b24a0(param_2);
      puVar4 = PTR_PTR_1126b8df0;
      _objc_alloc(PTR_PTR_1126b8df0);
      lVar3 = param_2 + 0x28;
      _objc_loadWeakRetained(lVar3);
      lVar5 = lVar3;
      func_0x00010c291200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05a340(puVar4);
      _objc_release(lVar5);
      _objc_release(lVar3);
      lVar3 = param_2 + 0x30;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c1368e0();
      _objc_release(lVar3);
      func_0x00010bf604e0(PTR_PTR_1126afec0);
      _objc_initWeak(auStack_58,param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10848abcc;
      puStack_78 = &UNK_11088b248;
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(puVar6);
      puStack_70 = puVar6;
      uStack_60 = param_1;
      _objc_copyWeak(auStack_a0,auStack_58);
      _objc_retain(puVar6);
      uStack_98 = param_1;
      func_0x00010c25ede0(uVar7);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_a0);
      _objc_release(puStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar4);
    }
    _objc_release(puVar6);
  }
LAB_10848ab84:
  _objc_release(param_4);
  return;
}



/* Entry: 10848abcc; end: 10848ac83;  */

void FUN_10848abcc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2cc40(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10848ac84; end: 10848ad77; -[SCAdPixelTrackingCookieManager _handleNetworkResponse:error:requestEndpoint:requestStartTimestamp:] */

void FUN_10848ac84(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afec0;
  _objc_retain(param_6);
  func_0x00010bf604e0(puVar1);
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar3 = param_4;
  func_0x00010c252ee0(param_4);
  func_0x00010c1364c0(dVar4 - param_1,lVar2,param_3,0,5,uVar3,param_6,10,1);
  _objc_release(param_6);
  _objc_release(lVar2);
  lVar2 = param_2 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = param_4;
  func_0x00010c252ee0(param_4);
  func_0x00010c0ac400(dVar4 - param_1,lVar2,param_3,uVar3);
  _objc_release(lVar2);
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (param_5 == 0) {
    func_0x00010be2e060(param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10848ad78; end: 10848afb3; +[SCAdPixelTrackingCookieManager _isCookieSetWithCookieName:cookieDomain:] */

undefined8 * FUN_10848ad78(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf51960();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf519a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar7 = &uStack_140;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar8);
        }
        puVar11 = *(undefined8 **)(lStack_138 + lVar9 * 8);
        puVar10 = puVar11;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          _objc_release(puVar10);
        }
        else {
          puVar3 = puVar11;
          func_0x00010bf87dc0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_4;
          puVar7 = puVar3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          _objc_release(puVar10);
          if ((uVar2 & 1) != 0) {
            _objc_retain(puVar11);
            _objc_release(lVar8);
            if (puVar11 == (undefined8 *)0x0) goto LAB_10848af4c;
            puVar10 = puVar11;
            func_0x00010bf9cb40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f3a0();
            _objc_release(puVar10);
            if ((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                                )) < 0.0) {
              func_0x00010bf51960();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar11;
              func_0x00010bf6b980();
              goto LAB_10848af44;
            }
            puVar10 = (undefined8 *)0x1;
            goto LAB_10848af50;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar7 = &uStack_140;
      lVar1 = lVar8;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar11 = (undefined8 *)0x0;
  param_1 = lVar8;
LAB_10848af44:
  _objc_release(param_1);
LAB_10848af4c:
  puVar10 = (undefined8 *)0x0;
LAB_10848af50:
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar10;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  puVar4 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  puVar10 = puVar7;
  func_0x00010bf001c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bdc2b80(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar12 = *(undefined8 *)((long)puVar14 * 8);
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar12;
      func_0x00010c0720c0();
      _objc_release(uVar12);
      if ((int)uVar6 != 0) {
        uVar2 = param_3;
        _objc_opt_class(param_3);
        func_0x00010bf51960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c183f60();
        _objc_release(uVar2);
        func_0x00010c17d1a0(param_3);
      }
      puVar14 = puVar14 + 1;
    } while (puVar5 != puVar14);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSHTTPCookieStorage_1126d9848;
                    /* WARNING: Could not recover jumptable at 0x00010c22ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSHTTPCookieStorage_1126d9848,PTR_s_sharedHTTPCookieStorage_1126688b0
            );
  return puVar7;
}



/* Entry: 10848afb4; end: 10848b18b; -[SCAdPixelTrackingCookieManager _handlePixelCookieResponse:] */

void FUN_10848afb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  uVar2 = param_3;
  func_0x00010bf001c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      if ((int)uVar2 != 0) {
        uVar2 = param_1;
        _objc_opt_class(param_1);
        func_0x00010bf51960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c183f60();
        _objc_release(uVar2);
        func_0x00010c17d1a0(param_1);
      }
      puVar7 = puVar7 + 1;
    } while (puVar4 != puVar7);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c22ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSHTTPCookieStorage_1126d9848,PTR_s_sharedHTTPCookieStorage_1126688b0
            );
  return;
}



/* Entry: 10848b18c; end: 10848b197; +[SCAdPixelTrackingCookieManager cookieStorage] */

void FUN_10848b18c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSHTTPCookieStorage_1126d9848,PTR_s_sharedHTTPCookieStorage_1126688b0
            );
  return;
}



/* Entry: 10848b198; end: 10848b327; -[SCAdPixelTrackingCookieManager setClientTTLCookie] */

void FUN_10848b198(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf51960();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                      *(undefined8 *)PTR__NSHTTPCookieValue_1103454d0);
  func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110edda58,
                      *(undefined8 *)PTR__NSHTTPCookieDomain_110345498);
  func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110edda78,
                      *(undefined8 *)PTR__NSHTTPCookieOriginURL_1103454b0);
  func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110dacf38,
                      *(undefined8 *)PTR__NSHTTPCookiePath_1103454b8);
  func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110db1158,
                      *(undefined8 *)PTR__NSHTTPCookieVersion_1103454d8);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c0fce20(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf64e40((double)lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar2,param_2,puVar5,*(undefined8 *)PTR__NSHTTPCookieExpires_1103454a0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  func_0x00010bf51980(PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183f60(lVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10848b328; end: 10848b33b; +[SCAdPixelTrackingCookieManager isPixelCookieAvailable] */

void FUN_10848b328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__isCookieSetWithCookieName_cooki_11256d698,
             &PTR____CFConstantStringClassReference_110edda98,
             &PTR____CFConstantStringClassReference_110edda58);
  return;
}



/* Entry: 10848b33c; end: 10848b343; -[SCAdPixelTrackingCookieManager networkManager] */

undefined8 FUN_10848b33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10848b344; end: 10848b35b; -[SCAdPixelTrackingCookieManager userAgentAdapter] */

void FUN_10848b344(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10848b35c; end: 10848b363; -[SCAdPixelTrackingCookieManager isLoadingCookie] */

undefined1 FUN_10848b35c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10848b364; end: 10848b36b; -[SCAdPixelTrackingCookieManager setIsLoadingCookie:] */

void FUN_10848b364(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10848b36c; end: 10848b383; -[SCAdPixelTrackingCookieManager commonMetricsManager] */

void FUN_10848b36c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10848b384; end: 10848b39b; -[SCAdPixelTrackingCookieManager settingsMetricsManager] */

void FUN_10848b384(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10848b39c; end: 10848b3ef; -[SCAdPixelTrackingCookieManager .cxx_destruct] */

void FUN_10848b39c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10848b3f0; end: 10848b673;  */

void FUN_10848b3f0(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined *puVar15;
  
  func_0x00010c25cfc0(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110dae918);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c08fa60();
  uVar12 = (long)((double)uVar12 / 4.0) * 3;
  uVar5 = uVar12;
  _calloc(uVar12,1);
  uVar6 = uVar4;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar7 = uVar4;
  func_0x00010c08fa60();
  _memset(uVar5,0x2e,uVar12);
  if (uVar12 < (ulong)((long)((double)uVar7 / 4.0) * 3)) {
    _free(uVar5);
    puVar15 = (undefined *)0x0;
  }
  else {
    if (uVar7 != 0) {
      uVar11 = 0;
      lVar8 = 0;
      uVar12 = 0;
      uVar9 = 0;
      do {
        lVar14 = (long)*(char *)(uVar6 + uVar12);
        if (lVar14 == 0x3d) break;
        while (bVar2 = (&UNK_10df30280)[lVar14], bVar2 == 0xfe) {
          pcVar1 = (char *)(uVar6 + 1 + uVar12);
          uVar12 = uVar12 + 1;
          lVar14 = (long)*pcVar1;
        }
        while (uVar13 = (uint)bVar2, uVar13 == 0xfd) {
          pcVar1 = (char *)(uVar6 + 1 + uVar12);
          uVar12 = uVar12 + 1;
          bVar2 = (&UNK_10df30280)[*pcVar1];
        }
        if ((long)uVar9 < 3) {
          if (uVar9 == 0) {
            uVar11 = ((int)(char)bVar2 & ((int)(char)bVar2 >> 0x1f ^ 0xffffffffU)) << 2;
LAB_10848b604:
            uVar10 = uVar9 - 5;
            if (uVar9 < 5) {
              uVar10 = uVar9 + 1;
            }
          }
          else {
            if (uVar9 == 1) {
              uVar13 = (uVar13 & ((int)(uVar13 << 0x18) >> 0x1f ^ 0xffffffffU)) >> 4 & 3;
              goto LAB_10848b5e4;
            }
            if (uVar9 == 2) {
              uVar11 = ((int)(char)bVar2 & ((int)(char)bVar2 >> 0x1f ^ 0xffffffffU)) << 4;
              goto LAB_10848b604;
            }
LAB_10848b5b8:
            uVar10 = (uVar9 + 1) % 6;
            if (uVar10 == 2 || uVar10 == 4) goto LAB_10848b610;
          }
          uVar12 = uVar12 + 1;
        }
        else {
          if (uVar9 != 3) {
            if (uVar9 == 4) {
              uVar11 = ((int)(char)bVar2 & ((int)(char)bVar2 >> 0x1f ^ 0xffffffffU)) << 6;
            }
            else {
              if (uVar9 != 5) goto LAB_10848b5b8;
              uVar11 = uVar13 & ((int)(uVar13 << 0x18) >> 0x1f ^ 0xffffffffU) & 0x3f | uVar11;
              *(char *)(uVar5 + lVar8) = (char)uVar11;
              lVar8 = lVar8 + 1;
            }
            goto LAB_10848b604;
          }
          uVar13 = 0;
          if (-1 < (char)bVar2) {
            uVar13 = bVar2 >> 2 & 0xf;
          }
LAB_10848b5e4:
          uVar11 = uVar13 | uVar11;
          *(char *)(uVar5 + lVar8) = (char)uVar11;
          lVar8 = lVar8 + 1;
          uVar10 = uVar9 + 1;
        }
LAB_10848b610:
        uVar9 = uVar10;
      } while (uVar12 < uVar7);
    }
    puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10848b674; end: 10848b6bb;  */

undefined4 FUN_10848b674(long param_1)

{
  if (param_1 - 1U < 0xf) {
    return *(undefined4 *)(&UNK_10df30310 + (param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10848b6bc; end: 10848b777;  */

ulong FUN_10848b6bc(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c0dfd20(param_1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b4ca0();
      uVar4 = uVar3 << (*(ulong *)(&UNK_10df303e0 + uVar5 * 8) & 0x3f) | uVar4;
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010bf529e0();
      if (uVar2 <= uVar5 + 1) break;
      bVar1 = uVar5 < 3;
      uVar5 = uVar5 + 1;
    } while (bVar1);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10848b778; end: 10848b7c7;  */

void FUN_10848b778(long param_1)

{
  long lVar1;
  
  func_0x00010bfc5160();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    _objc_retain(param_1);
    lVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10848b7c8; end: 10848b89b;  */

void FUN_10848b7c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  puVar3 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    func_0x00010bffabc0();
    puVar2 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = PTR_PTR_1126b7be8;
    _objc_opt_new(PTR_PTR_1126b7be8);
    puVar4 = puVar2;
    func_0x00010c2bedc0(puVar2);
    func_0x00010c2278a0(puVar3,param_2,puVar4);
    puVar4 = puVar2;
    func_0x00010c0d0e40(puVar2);
    func_0x00010c1c8fc0(puVar3,param_2,puVar4);
    puVar4 = puVar2;
    func_0x00010bf65700(puVar2);
    func_0x00010c189d40(puVar3,param_2,puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10848b89c; end: 10848b97f;  */

void FUN_10848b89c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10848b980; end: 10848bafb;  */

void FUN_10848b980(ulong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126d9850;
  _objc_opt_new(PTR_PTR_1126d9850);
  uVar3 = param_1;
  func_0x00010bfc2620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168e60(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfc2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_10848b6bc();
  func_0x00010c169480(puVar2,param_2,uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfc2640();
  uVar1 = (undefined4)uVar3;
  if (5 < uVar3) {
    uVar1 = 1;
  }
  func_0x00010c169400(puVar2,param_2,uVar1);
  uVar3 = param_1;
  func_0x00010bfca880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ca0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  uVar3 = param_1;
  func_0x00010bfc2560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  if (uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_1;
    func_0x00010bfc2560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar5,param_2,uVar6);
  func_0x00010c169060(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  if (uVar4 != 0) {
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfc2600(param_1);
  func_0x00010c168900(puVar2,param_2,uVar3 != 0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10848bafc; end: 10848bb27;  */

undefined4 FUN_10848bafc(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
  func_0x00010c278ce0();
  uVar1 = (int)puVar2;
  if ((undefined *)0x3 < puVar2) {
    uVar1 = 0xfbadbeef;
  }
  return uVar1;
}



/* Entry: 10848bb28; end: 10848c893;  */

void FUN_10848bb28(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  byte param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d9858;
  _objc_opt_new(PTR_PTR_1126d9858);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  func_0x00010c070800(param_2);
  func_0x00010c206a80(puVar1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010b704680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a9b80(puVar1);
  _objc_release(uVar3);
  func_0x00010c1dcfe0(puVar1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bfc4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cba0(puVar1);
  _objc_release(puVar4);
  FUN_10848b89c();
  _objc_retainAutoreleasedReturnValue();
  FUN_10848b6bc();
  func_0x00010c1d6a40(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010bfc4c00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cac0(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar4);
  func_0x00010c20c3a0(puVar1);
  _objc_release(param_6);
  lVar5 = param_7;
  func_0x00010bfa23e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar5 == 0) || (lVar6 = lVar5, func_0x00010c0ec0a0(), (int)lVar6 != 0)) {
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar4);
    puVar4 = param_2;
    func_0x00010bfc4a40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar7);
    puVar7 = puVar4;
    func_0x00010c08fa60();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      func_0x00010c04e820();
      func_0x00010c173f00(puVar1);
      _objc_release(puVar7);
    }
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar4);
  func_0x00010bfc4d40(param_2);
  puVar4 = PTR_PTR_1126ae4e8;
  dVar11 = param_1;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar4);
  if (0.0 < param_1) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c01e4e0();
    func_0x00010c211260(puVar1);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010bfe5f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  if (puVar4 != (undefined *)0x0) {
    puVar7 = puVar4;
    func_0x00010bdc3580(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010b704680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9ba0(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  if (param_5 == 0) goto LAB_10848c4dc;
  if (param_9 == 0) {
    if ((param_10 & 1) == 0) {
      puVar7 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar7);
      _objc_retain(puVar1);
      puVar7 = PTR_PTR_1126afec0;
      _objc_retain(param_2);
      _objc_retain(param_4);
      func_0x00010bf604e0(puVar7);
      puVar7 = param_2;
      dVar10 = dVar11;
      func_0x00010bfc4ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      func_0x00010bf604e0(PTR_PTR_1126afec0);
      dVar11 = dVar10 - dVar11;
      func_0x00010c0a7700(dVar11,param_4);
      _objc_release(param_4);
      if (puVar7 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        puVar9 = puVar7;
        func_0x00010bf711c0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282800();
        func_0x00010c01e4e0(puVar8);
        func_0x00010c18f340(puVar1);
        _objc_release(puVar8);
        _objc_release(puVar9);
        puVar8 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        puVar9 = puVar7;
        func_0x00010bf70520(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282800();
        func_0x00010c01e4e0(puVar8);
        func_0x00010c18f2e0(puVar1);
        _objc_release(puVar8);
        _objc_release(puVar9);
      }
      _objc_release(puVar7);
      _objc_release(puVar1);
      puVar7 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar7);
      if (param_8 == 0) goto LAB_10848c39c;
    }
    else if (param_8 == 0) goto LAB_10848c4dc;
LAB_10848c2d4:
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c0308;
    _objc_retain(puVar1);
    _objc_retain(param_8);
    _objc_alloc(puVar7);
    func_0x00010c06d120(param_8);
    func_0x00010bff91e0(puVar7);
    func_0x00010c1af7a0(puVar1);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010bf17500(param_8);
    _objc_release(param_8);
    func_0x00010c01e4a0(puVar7);
    func_0x00010c16fac0(puVar1);
    puVar8 = puVar1;
  }
  else {
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c0350;
    _objc_retain(puVar1);
    _objc_retain(param_9);
    _objc_alloc(puVar7);
    lVar6 = param_9;
    func_0x00010bf711c0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800();
    func_0x00010c01e4e0(puVar7);
    func_0x00010c18f340(puVar1);
    _objc_release(puVar7);
    _objc_release(lVar6);
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar6 = param_9;
    func_0x00010bf70520(param_9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_9);
    func_0x00010c282800(lVar6);
    func_0x00010c01e4e0(puVar7);
    func_0x00010c18f2e0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(lVar6);
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar7);
    if (param_8 != 0) goto LAB_10848c2d4;
    if ((param_10 & 1) != 0) goto LAB_10848c4dc;
LAB_10848c39c:
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126afec0;
    _objc_retain(param_2);
    _objc_retain(param_4);
    _objc_retain(puVar1);
    func_0x00010bf604e0(puVar7);
    puVar7 = param_2;
    dVar10 = dVar11;
    func_0x00010bfc2ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    dVar11 = dVar10 - dVar11;
    func_0x00010c0a76e0(dVar11,param_4);
    _objc_release(param_4);
    puVar8 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010c06d120(puVar7);
    func_0x00010bff91e0(puVar8);
    func_0x00010c1af7a0(puVar1);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010bf17500(puVar7);
    func_0x00010c01e4a0(puVar8);
    func_0x00010c16fac0(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
LAB_10848c4dc:
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
  func_0x00010c278ce0();
  if (puVar7 < (undefined *)0x4) {
    func_0x00010c16aee0(puVar1);
  }
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bfc4d60(param_2);
  func_0x00010c0138c0((float)dVar11,puVar7);
  func_0x00010c16c060(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  func_0x00010bfc9e60(param_2);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  func_0x00010bfc9de0(param_2);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c01e4e0();
  func_0x00010c1f75c0(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c01e4e0();
  func_0x00010c1f7160(puVar1);
  _objc_release(puVar7);
  lVar6 = param_7;
  func_0x00010bf8f8c0();
  if ((int)lVar6 != 0) {
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar7);
    func_0x00010bfc9e80(param_2);
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar7);
    func_0x00010bfc9e00(param_2);
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c01e4e0();
    func_0x00010c1f75e0(puVar1);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c01e4e0();
    func_0x00010c1f7180(puVar1);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10848c894; end: 10848cb1f;  */

undefined4 FUN_10848c894(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110db3b58,param_2,param_1);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e4c958,param_2,param_1);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eddd98,param_2,param_1);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110edddb8,param_2,param_1);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110edddd8,param_2,param_1);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e77d58,param_2,param_1);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ddf8d8,param_2,param_1
                                   );
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ddebf8,param_2,
                                      param_1);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eddb18,param_2,
                                        param_1);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = 0;
                      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110edddf8,param_2,
                                          param_1);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = 0;
                        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110edde18,param_2
                                            ,param_1);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0;
                          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110edde38,
                                              param_2,param_1);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = 0;
                            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dfbff8,
                                                param_2,param_1);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0;
                              func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e61f18,
                                                  param_2,param_1);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = 0;
                                func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eddad8
                                                    ,param_2,param_1);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = 0;
                                  func_0x00010c0720c0(&
                                                  PTR____CFConstantStringClassReference_110eddaf8,
                                                  param_2,param_1);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = 0;
                                    func_0x00010c0720c0(&
                                                  PTR____CFConstantStringClassReference_110dfc018,
                                                  param_2,param_1);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0;
                                      func_0x00010c0720c0(&
                                                  PTR____CFConstantStringClassReference_110eddb38,
                                                  param_2,param_1);
                                      if ((uVar2 & 1) == 0) {
                                        uVar2 = 0;
                                        func_0x00010c0720c0(&
                                                  PTR____CFConstantStringClassReference_110e4dd98,
                                                  param_2,param_1);
                                        if ((uVar2 & 1) == 0) {
                                          uVar2 = 0;
                                          func_0x00010c0720c0(&
                                                  PTR____CFConstantStringClassReference_110e4ddb8,
                                                  param_2,param_1);
                                          if ((uVar2 & 1) == 0) {
                                            iVar1 = 0x10e4ddd8;
                                            func_0x00010c0720c0(&
                                                  PTR____CFConstantStringClassReference_110e4ddd8,
                                                  param_2,param_1);
                                            uVar3 = 0x1d;
                                            if (iVar1 == 0) {
                                              uVar3 = 0;
                                            }
                                          }
                                          else {
                                            uVar3 = 0x1c;
                                          }
                                        }
                                        else {
                                          uVar3 = 0x18;
                                        }
                                      }
                                      else {
                                        uVar3 = 0x16;
                                      }
                                    }
                                    else {
                                      uVar3 = 0x17;
                                    }
                                  }
                                  else {
                                    uVar3 = 0x19;
                                  }
                                }
                                else {
                                  uVar3 = 0x14;
                                }
                              }
                              else {
                                uVar3 = 0x12;
                              }
                            }
                            else {
                              uVar3 = 0x11;
                            }
                          }
                          else {
                            uVar3 = 0x10;
                          }
                        }
                        else {
                          uVar3 = 0xf;
                        }
                      }
                      else {
                        uVar3 = 0xe;
                      }
                    }
                    else {
                      uVar3 = 0xd;
                    }
                  }
                  else {
                    uVar3 = 9;
                  }
                }
                else {
                  uVar3 = 7;
                }
              }
              else {
                uVar3 = 6;
              }
            }
            else {
              uVar3 = 5;
            }
          }
          else {
            uVar3 = 4;
          }
        }
        else {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
    _objc_release(param_1);
  }
  return uVar3;
}



/* Entry: 10848cb20; end: 10848cb43;  */

undefined4 FUN_10848cb20(long param_1)

{
  if (param_1 - 1U < 0x17) {
    return *(undefined4 *)(&UNK_10df30400 + (param_1 - 1U) * 4);
  }
  return 1;
}



/* Entry: 10848cb44; end: 10848cc6f;  */

void FUN_10848cb44(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126d9860;
  _objc_opt_new(PTR_PTR_1126d9860);
  uVar3 = param_1;
  func_0x00010bfc37c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3d80(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfc37e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179d40(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfc4060();
  if (uVar3 < 4) {
    uVar5 = *(undefined4 *)(&UNK_10dee78a0 + uVar3 * 4);
  }
  else {
    uVar5 = 2;
  }
  func_0x00010c180f60(puVar2,param_2,uVar5);
  uVar3 = param_1;
  func_0x00010bfc38a0();
  iVar1 = (int)(uVar3 - 1) + 2;
  if (3 < uVar3 - 1) {
    iVar1 = 1;
  }
  func_0x00010c17a600(puVar2,param_2,iVar1);
  uVar3 = param_1;
  func_0x00010bfc4f20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    func_0x00010c1b6fe0(puVar2,param_2,(long)uVar4 / 8000);
  }
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10848cc70; end: 10848cc9f;  */

undefined4 FUN_10848cc70(long param_1)

{
  if (param_1 - 1U < 0xe) {
    return *(undefined4 *)(&UNK_10df3045c + (param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10848cca0; end: 10848cfd7;  */

undefined ** FUN_10848cca0(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111174ef0;
  func_0x00010c0d3c80();
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1d0640(ppuVar1);
  }
  puVar3 = PTR_PTR_1126b8c98;
  func_0x00010bf90640();
  if ((int)puVar3 == 0) {
    if (param_1 == 0) {
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010bf90680();
      if ((int)puVar3 == 0) goto LAB_10848cf3c;
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010bf66400();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 1) {
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010bf906a0();
      if ((int)puVar3 == 0) goto LAB_10848cf3c;
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010bf664a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((param_1 != 4) || (puVar3 = PTR_PTR_1126b8c98, func_0x00010bf90660(), (int)puVar3 == 0))
      goto LAB_10848cf3c;
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010bf66260();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar3 = PTR_PTR_1126b8c98;
    func_0x00010bf65fe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = puVar4;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    puVar5 = puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        lVar8 = *(long *)((long)puVar13 * 8);
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf529e0();
        if (lVar9 == 2) {
          lVar9 = lVar8;
          func_0x00010c0dfd40(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar8;
          func_0x00010c0dfd40(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar7);
          _objc_release(lVar10);
          _objc_release(lVar9);
        }
        _objc_release(lVar8);
        puVar13 = puVar13 + 1;
      } while (puVar5 != puVar13);
      puVar5 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar5 = puVar7;
    func_0x00010bf51e00(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  func_0x00010bef7f60(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_10848cf3c:
  ppuVar11 = ppuVar1;
  func_0x00010bf51e00(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return ppuVar11;
  }
  ___stack_chk_fail();
  if (param_2 - 1U < 0x22) {
    return (undefined **)(ulong)*(uint *)(&UNK_10df30494 + (param_2 - 1U) * 4);
  }
  return (undefined **)0x0;
}



/* Entry: 10848cfd8; end: 10848cffb;  */

undefined4 FUN_10848cfd8(long param_1)

{
  if (param_1 - 1U < 0x22) {
    return *(undefined4 *)(&UNK_10df30494 + (param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10848cffc; end: 10848d1c3;  */

void FUN_10848cffc(undefined *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c08fa60();
    puVar3 = puVar1;
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c0b5ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2d80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_4;
    func_0x00010c08fa60();
    puVar1 = puVar3;
    if (lVar2 != 0) {
      lVar2 = param_4;
      func_0x00010c0b5ac0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2d80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    func_0x0001084b94dc(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bdc2d80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(param_3);
    puVar1 = puVar3;
    func_0x00010beec820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10848d1c4; end: 10848d1cf;  */

undefined4 FUN_10848d1c4(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_1;
  if (0xf < param_1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10848d1d0; end: 10848d2e3;  */

void FUN_10848d1d0(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126b8c98;
  func_0x00010bf3d400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010befa120(puVar1);
  }
  lVar4 = param_2;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar4);
  }
  else {
    func_0x00010befa120(puVar1);
  }
  puVar3 = puVar1;
  func_0x00010bf446e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10848d2e4; end: 10848d587;  */

void FUN_10848d2e4(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar12 = param_2;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf529e0();
  _objc_release(uVar12);
  uVar12 = param_1;
  func_0x00010c06a420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf529e0();
  _objc_release(uVar12);
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if (0 < (long)uVar2) {
    uVar12 = 0;
    do {
      uVar3 = param_1;
      func_0x00010c06a420();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_2;
      func_0x00010c06a360();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar6 = uVar5;
      func_0x00010bef2c80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010bf529e0();
      _objc_release(uVar13);
      uVar13 = uVar6;
      func_0x00010bf529e0();
      if (uVar13 <= uVar3) {
        uVar3 = uVar13;
      }
      if (0 < (long)uVar3) {
        uVar13 = 0;
        do {
          uVar7 = uVar4;
          func_0x00010c084fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar8;
          func_0x00010bef2c20();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c08fa60();
          if (uVar9 != 0) {
            puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            _objc_alloc();
            _objc_retainAutorelease(uVar7);
            func_0x00010bf25f00();
            func_0x00010c057e80();
            puVar11 = puVar10;
            func_0x00010bdc3580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            puVar10 = puVar11;
            func_0x00010c08fa60();
            if (puVar10 != (undefined *)0x0) {
              func_0x00010befa120(puVar1);
            }
            _objc_release(puVar11);
          }
          _objc_release(uVar7);
          _objc_release(uVar8);
          uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
  }
  puVar10 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10848d588; end: 10848d61b;  */

undefined8 FUN_10848d588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain();
  uVar1 = 4;
  FUN_10848cca0(4,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(uVar2);
  }
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10848d61c; end: 10848dabf;  */

undefined *
FUN_10848d61c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             int param_6,undefined8 param_7,long param_8,long param_9,undefined8 param_10,
             undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126d9868;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010b704680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9b80(puVar1);
  _objc_release(uVar2);
  lVar3 = param_5;
  func_0x00010c08fa60();
  if ((param_6 == 0) || (lVar3 == 0)) {
    lVar3 = param_4;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = param_1;
      func_0x00010c292860(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_10848b778();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    else {
      lVar4 = param_4;
      FUN_10848b3f0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c195bc0(puVar1);
  }
  else {
    lVar4 = param_5;
    func_0x00010b704680(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5260(puVar1);
  }
  _objc_release(lVar4);
  uVar2 = param_2;
  func_0x00010848b8e8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfdc0(puVar1);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf07960(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_10848b980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf6fee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_10848bb28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c700(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf6fee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_10848cb44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbfe0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_8;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_8;
    func_0x00010bf64920(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e000(puVar1);
    _objc_release(lVar3);
  }
  puVar5 = PTR_PTR_1126d9870;
  _objc_opt_new();
  lVar3 = param_9;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar6 = PTR_PTR_1126baf88;
    _objc_opt_new(PTR_PTR_1126baf88);
    _objc_retain(param_9);
    lVar3 = param_9;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_9);
        }
        func_0x00010c282800(*(undefined8 *)(lVar8 * 8));
        func_0x00010befc800(puVar6);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_9;
      func_0x00010bf52a60();
    }
    _objc_release(param_9);
    func_0x00010c1adaa0(puVar5);
    _objc_release(puVar6);
  }
  func_0x00010c17d240(puVar1);
  func_0x00010c07ed80(param_11);
  func_0x00010c1b47e0(puVar1);
  func_0x00010bef2e60(param_11);
  func_0x00010c1b1fa0(puVar1);
  _objc_release(puVar5);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b8cd0;
  _objc_retain();
  _objc_alloc(puVar1);
  lVar3 = param_1;
  func_0x00010bfeed80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c15ed00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfeec60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22f000(param_1);
  _objc_release(param_1);
  func_0x00010c03b8e0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  return puVar1;
}



/* Entry: 10848dac0; end: 10848db8b;  */

undefined * FUN_10848dac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8cd0;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bfeed80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c15ed00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfeec60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c22f000(param_1);
  _objc_release(param_1);
  func_0x00010c03b8e0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 10848db8c; end: 10848dc2b;  */

undefined * FUN_10848db8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  if ((lVar1 == 0) || (lVar1 = param_1, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    lVar1 = param_1;
    _objc_retainAutorelease(param_1);
    func_0x00010bf25f00();
    func_0x00010c057e80(puVar2,param_2,lVar1);
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 10848dc2c; end: 10848df2f;  */

void FUN_10848dc2c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___SKAdImpression_1126d9878;
  _objc_retain(param_2);
  _objc_opt_new(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_1;
  func_0x00010c2475c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ce0(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010c1662e0(puVar2);
  _objc_release(param_2);
  uVar3 = param_1;
  func_0x00010bef38a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163be0(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf2bfa0(param_1);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1632a0(puVar2);
  _objc_release(puVar4);
  uVar3 = param_1;
  func_0x00010c29e3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1637c0(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c270a60(param_1);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215dc0(puVar2);
  _objc_release(puVar4);
  uVar3 = param_1;
  func_0x00010c29e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2029a0(puVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c29e460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220e20(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163480(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  iVar1 = 2;
  func_0x000107c31924(2,0x10,1,0);
  if (iVar1 != 0) {
    uVar3 = param_1;
    func_0x00010c29e460();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar5 != 0) {
      func_0x00010c247820(param_1);
      func_0x00010c0df780(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206ec0(puVar2);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10848df30; end: 10848e1b7; -[SCSKViewThroughImpression initWithAdResponse:metricsManager:queuePerformer:source:adNetwork:] */

undefined8 ****
FUN_10848df30(float param_1,undefined8 ****param_2,undefined8 param_3,undefined8 ***param_4,
             undefined8 ***param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 ***pppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  pppuVar3 = param_4;
  func_0x00010c23d7c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = pppuVar3;
  func_0x00010c29e460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(pppuVar1);
  _objc_release(pppuVar3);
  if (2.2 <= param_1) {
    puStack_78 = PTR_PTR_1126fca18;
    ppppuVar2 = &pppuStack_80;
    pppuStack_80 = param_2;
    _objc_msgSendSuper2(ppppuVar2,PTR_s_init_1125d9248);
    if (ppppuVar2 != (undefined8 ****)0x0) {
      _objc_retain(param_4);
      pppuVar3 = ppppuVar2[4];
      ppppuVar2[4] = param_4;
      _objc_release(pppuVar3);
      _objc_retain(param_5);
      pppuVar3 = ppppuVar2[6];
      ppppuVar2[6] = param_5;
      _objc_release(pppuVar3);
      pppuVar3 = param_4;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = param_4;
      FUN_1084c1998(param_4);
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = param_4;
      func_0x00010bef4240(param_4);
      pppuVar4 = pppuVar3;
      FUN_10848dc2c(pppuVar3,pppuVar1,pppuVar6,param_7);
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = ppppuVar2[3];
      ppppuVar2[3] = pppuVar4;
      _objc_release(pppuVar6);
      _objc_release(pppuVar1);
      _objc_release(pppuVar3);
      pppuVar3 = (undefined8 ***)PTR_PTR_1126d9880;
      _objc_alloc();
      pppuVar1 = param_4;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = param_4;
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_4);
      pppuVar4 = param_4;
      func_0x00010c23d7c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = param_4;
      func_0x00010c15ed20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02be60();
      pppuVar7 = ppppuVar2[5];
      ppppuVar2[5] = pppuVar3;
      _objc_release(pppuVar7);
      _objc_release(pppuVar5);
      _objc_release(pppuVar4);
      _objc_release(pppuVar6);
      _objc_release(pppuVar1);
    }
    _objc_retain(ppppuVar2);
    ppppuVar8 = ppppuVar2;
  }
  else {
    ppppuVar2 = param_2;
    ppppuVar8 = (undefined8 ****)0x0;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppppuVar2);
  return ppppuVar8;
}



/* Entry: 10848e1b8; end: 10848e347; -[SCSKViewThroughImpression initWithAdNetworkAttribution:adId:serveItemId:metricsManager:advertisedAppStoreItemIdentifier:queuePerformer:adNetwork:source:] */

undefined8 *
FUN_10848e1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fca18;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    FUN_10848dc2c(param_3,param_7,9,param_10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d9880;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02be60();
    uVar5 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10848e348; end: 10848e41f; -[SCSKViewThroughImpression startImpression:] */

void FUN_10848e348(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  if (lVar1 != 0) {
    if (lVar2 != 0) {
      func_0x00010bf885a0(lVar1);
      dVar5 = param_1;
      func_0x00010bf885a0(lVar2);
      if (param_1 < dVar5) goto LAB_10848e39c;
    }
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
LAB_10848e39c:
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined **)(param_2 + 8) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c24efb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x28),PTR_s_startImpression_viewLocation__112671610,
             *(undefined8 *)(param_2 + 0x18),param_4);
  return;
}



/* Entry: 10848e420; end: 10848e4a7; -[SCSKViewThroughImpression endImpression:] */

void FUN_10848e420(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x10));
  dVar3 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf94ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 - dVar3,*(undefined8 *)(param_2 + 0x28),
             PTR_s_endImpression_viewLocation_viewT_1125c2c50,*(undefined8 *)(param_2 + 0x18),
             param_4);
  return;
}



/* Entry: 10848e4a8; end: 10848e507; -[SCSKViewThroughImpression .cxx_destruct] */

void FUN_10848e4a8(long param_1)

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



/* Entry: 10848e508; end: 10848e6a3; -[SCSKViewThroughImpressionCaller initWithMetricsManager:adId:adRequestClientId:adProductType:adNetworkAttribution:serveItemId:queuePerformer:adNetwork:source:] */

undefined1 *
FUN_10848e508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fca20;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10848e6a4; end: 10848e73b; -[SCSKViewThroughImpressionCaller startImpression:viewLocation:] */

void FUN_10848e6a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10848e73c;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10848e73c; end: 10848e83f;  */

void FUN_10848e73c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c24ef80(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10848e840; end: 10848e89f;  */

void FUN_10848e840(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54a60(0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848e8a0; end: 10848e947; -[SCSKViewThroughImpressionCaller endImpression:viewLocation:viewTimeInSec:] */

void FUN_10848e8a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10848e948;
  puStack_68 = &UNK_110844fe0;
  lStack_60 = param_2;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 10848e948; end: 10848ea53;  */

void FUN_10848e948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf94a80(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10848ea54; end: 10848eab3;  */

void FUN_10848ea54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be54a60(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10848eab4; end: 10848ed7b; -[SCSKViewThroughImpressionCaller _logImpressionCallWithCallType:impression:error:viewLocation:viewTimeInSec:] */

void FUN_10848eab4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 2) goto LAB_10848ed2c;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 1) {
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(param_6);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
LAB_10848ec3c:
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else if (param_4 == 0) {
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(param_6);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10848ec3c;
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8180();
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c29e460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2bfa0();
  func_0x00010c247820();
  func_0x00010c0aea80(param_1,0xbff0000000000000,uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_10848ed2c:
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_5 + 0x40,0);
  _objc_storeStrong(param_5 + 0x38,0);
  _objc_storeStrong(param_5 + 0x30,0);
  _objc_storeStrong(param_5 + 0x28,0);
  _objc_storeStrong(param_5 + 0x18,0);
  _objc_storeStrong(param_5 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_5 + 8,0);
  return;
}



/* Entry: 10848ed7c; end: 10848ede7; -[SCSKViewThroughImpressionCaller .cxx_destruct] */

void FUN_10848ed7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10848ede8; end: 10848ee37;  */

double FUN_10848ede8(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfe0640(param_1);
  lVar2 = param_1;
  func_0x00010c2a5040(param_1);
  _objc_release(param_1);
  return (double)lVar1 / (double)lVar2;
}



/* Entry: 10848ee38; end: 10848ee8f; -[SCAdMediaRenditionSelector init] */

undefined8
FUN_10848ee38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c042660(param_3,param_4,param_5);
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 10848ee90; end: 10848eedf; -[SCAdMediaRenditionSelector initWithScreenSize:] */

void FUN_10848ee90(double param_1,double param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fca28;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(double *)((long)puVar1 + 8) = param_2 / param_1;
  }
  return;
}



/* Entry: 10848eee0; end: 10848f213; -[SCAdMediaRenditionSelector getOptimalAdMediaRendition:adId:isPrimaryAdResponse:] */

void FUN_10848eee0(double param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double dVar14;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_4;
  puVar13 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar12 = param_4;
  func_0x00010bf529e0();
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    param_1 = 0.0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_4);
    puVar10 = &uStack_140;
    puVar13 = auStack_100;
    puVar2 = param_4;
    func_0x00010bf52a60(param_4,param_3,puVar10,puVar13,0x10);
    if (puVar2 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)0x0;
      lVar11 = *plStack_130;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          dVar14 = param_1;
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(param_4);
            dVar14 = param_1;
          }
          puVar13 = *(undefined8 **)(lStack_138 + (long)puVar10 * 8);
          param_1 = dVar14;
          if (puVar13 != (undefined8 *)0x0) {
            FUN_10848ede8(puVar13);
            param_1 = (double)(int)(dVar14 * 10000.0) / 10000.0;
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar1;
            func_0x00010c0dff20(puVar1,param_3,puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar4 == (undefined *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_3,puVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar1,param_3,puVar4,puVar3);
            }
            else {
              puVar4 = puVar1;
              func_0x00010c0e00e0(puVar1,param_3,puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
            }
            _objc_release(puVar4);
            if (puVar12 == (undefined8 *)0x0) {
              _objc_retain(puVar13);
              puVar12 = puVar13;
            }
            else {
              FUN_10848ede8(puVar12);
              param_1 = ABS(dVar14 - param_1);
              if (param_1 <= 1.1920928955078125e-07) {
                _objc_retain(puVar13);
                puVar5 = puVar13;
                func_0x00010bfe0640();
                puVar6 = puVar13;
                func_0x00010c2a5040();
                _objc_release(puVar13);
                _objc_retain(puVar12);
                puVar7 = puVar12;
                func_0x00010bfe0640();
                puVar8 = puVar12;
                func_0x00010c2a5040();
                _objc_release(puVar12);
                puVar9 = param_2;
                if ((long)puVar6 * (long)puVar5 - (long)puVar8 * (long)puVar7 == 0) {
                  func_0x00010bfca5a0();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  func_0x00010bfc62e0(param_2,param_3,puVar13,puVar12);
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(puVar12);
                puVar12 = puVar9;
              }
              else {
                puVar5 = param_2;
                func_0x00010bfc98e0(param_2,param_3,puVar12,puVar13);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar12);
                puVar12 = puVar5;
              }
            }
            _objc_release(puVar3);
          }
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar2 != puVar10);
        puVar10 = &uStack_140;
        puVar13 = auStack_100;
        puVar2 = param_4;
        func_0x00010bf52a60(param_4,param_3,puVar10,puVar13,0x10);
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    _objc_retain(puVar13);
    FUN_10848ede8(puVar10);
    if (((param_1 < (double)param_4[1]) ||
        (FUN_10848ede8(puVar13), puVar12 = puVar10, (double)param_4[1] <= param_1)) &&
       ((FUN_10848ede8(puVar13), param_1 < (double)param_4[1] ||
        (FUN_10848ede8(puVar10), puVar12 = puVar13, (double)param_4[1] <= param_1)))) {
      FUN_10848ede8(puVar10);
      dVar14 = param_1 - (double)param_4[1];
      FUN_10848ede8(puVar13);
      puVar12 = puVar10;
      if (ABS(param_1 - (double)param_4[1]) <= ABS(dVar14)) {
        puVar12 = puVar13;
      }
    }
    _objc_retain(puVar12);
    _objc_release(puVar13);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10848f214; end: 10848f2f3; -[SCAdMediaRenditionSelector getRenditionWithClosestHigherAspectRatio:and:] */

void FUN_10848f214(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_10848ede8(param_4);
  if (((param_1 < *(double *)(param_2 + 8)) ||
      (FUN_10848ede8(param_5), uVar2 = param_4, *(double *)(param_2 + 8) <= param_1)) &&
     ((FUN_10848ede8(param_5), param_1 < *(double *)(param_2 + 8) ||
      (FUN_10848ede8(param_4), uVar2 = param_5, *(double *)(param_2 + 8) <= param_1)))) {
    FUN_10848ede8(param_4);
    dVar1 = param_1 - *(double *)(param_2 + 8);
    FUN_10848ede8(param_5);
    uVar2 = param_4;
    if (ABS(param_1 - *(double *)(param_2 + 8)) <= ABS(dVar1)) {
      uVar2 = param_5;
    }
  }
  _objc_retain(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


