/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054b026c; end: 1054b02c3; -[SCBloopsFeatureV2 _updateBloopsFeatureStatus] */

void FUN_1054b026c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  lVar2 = param_1;
  func_0x00010be3e760(param_1,param_2,&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  *(char *)(param_1 + 0xb) = (char)lVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar3);
  return;
}



/* Entry: 1054b02c4; end: 1054b0423; -[SCBloopsFeatureV2 _isBloopsFeatureEnabled:] */

void FUN_1054b02c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((*(byte *)(param_1 + 9) & 1) != 0) {
      lVar1 = 1;
      goto LAB_1054b03f4;
    }
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_3 = puVar3;
  _objc_release(puVar2);
  _objc_release(param_1);
  lVar1 = 0;
LAB_1054b03f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 0x10,0);
  return;
}



/* Entry: 1054b0424; end: 1054b042f; -[SCBloopsFeatureV2 .cxx_destruct] */

void FUN_1054b0424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1054b0430; end: 1054b04c7; -[SCBloopsOnboardingStatusSUPProvider initWithFeatureSettings:] */

undefined1 * FUN_1054b0430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e87e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec6900(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b04c8; end: 1054b050f; -[SCBloopsOnboardingStatusSUPProvider dealloc] */

void FUN_1054b04c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126e87e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1054b0510; end: 1054b054f; -[SCBloopsOnboardingStatusSUPProvider isBloopsUserOnboarded] */

undefined8 FUN_1054b0510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1dce0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054b0550; end: 1054b0577; -[SCBloopsOnboardingStatusSUPProvider bloopsUserOnboardingStatusObservable] */

void FUN_1054b0550(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054b0578; end: 1054b074f; -[SCBloopsOnboardingStatusSUPProvider _subscribe] */

void FUN_1054b0578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c63ea);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar6 = auStack_58;
  _objc_copyWeak(auStack_60);
  _objc_retain(puVar1);
  uVar8 = uVar2;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  _objc_release(uVar7);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar1 = puVar1 + 0x28;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined1 *)0x0) {
      puVar5 = puVar6;
      func_0x00010c0e00e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(puVar5);
      uVar8 = *(undefined8 *)(puVar1 + 0x10);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1054b0750; end: 1054b0817;  */

void FUN_1054b0750(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b0818; end: 1054b0853; -[SCBloopsOnboardingStatusSUPProvider .cxx_destruct] */

void FUN_1054b0818(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b0854; end: 1054b08eb; -[SCBloopsOnboardingStatusSUPProviderV2 initWithFeatureSettings:] */

undefined1 * FUN_1054b0854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e87e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec6900(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b08ec; end: 1054b0933; -[SCBloopsOnboardingStatusSUPProviderV2 dealloc] */

void FUN_1054b08ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126e87e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1054b0934; end: 1054b0973; -[SCBloopsOnboardingStatusSUPProviderV2 isBloopsUserOnboarded] */

undefined8 FUN_1054b0934(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1dce0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054b0974; end: 1054b097b; -[SCBloopsOnboardingStatusSUPProviderV2 bloopsUserOnboardingStatusObservable] */

void FUN_1054b0974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1054b097c; end: 1054b0b3f; -[SCBloopsOnboardingStatusSUPProviderV2 _subscribe] */

void FUN_1054b097c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c63ea);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar2;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  _objc_release(uVar5);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar1 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)(puVar1 + 0x10);
    func_0x00010c06d680(puVar1);
    func_0x00010c0df6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054b0b40; end: 1054b0bb3;  */

void FUN_1054b0b40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010c06d680(param_1);
    func_0x00010c0df6e0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054b0bb4; end: 1054b0bef; -[SCBloopsOnboardingStatusSUPProviderV2 .cxx_destruct] */

void FUN_1054b0bb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b0bf0; end: 1054b0d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b0bf0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar7 = (long)_DAT_11272411c;
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    lVar1 = lVar7;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f440();
    _objc_release(lVar1);
    _objc_release(lVar7);
    puVar6 = PTR_PTR_1126b98c8;
    _objc_alloc(PTR_PTR_1126b98c8);
    lVar1 = param_1 + _DAT_112724120;
    _objc_loadWeakRetained(lVar1);
    lVar7 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1dd00();
    func_0x00010bff8ea0(puVar6,param_2,lVar3,(uint)lVar5 ^ 1,lVar2);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054b0d54; end: 1054b0deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b0d54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b98d0;
    _objc_alloc(PTR_PTR_1126b98d0);
    lVar1 = param_1 + _DAT_112724120;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011c40(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054b0dec; end: 1054b0e2f; -[SCBloopsFeatureInfoServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b0dec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272411c);
  _objc_destroyWeak(param_1 + _DAT_112724120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724124);
  return;
}



/* Entry: 1054b0e30; end: 1054b0eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b0e30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b98e0;
    _objc_alloc(PTR_PTR_1126b98e0);
    lVar1 = param_1 + _DAT_11272415c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0188e0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054b0eb0; end: 1054b0eb7;  */

undefined8 FUN_1054b0eb0(void)

{
  return 0;
}



/* Entry: 1054b0eb8; end: 1054b0f5b;  */

void FUN_1054b0eb8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b98e8;
    _objc_alloc_init(PTR_PTR_1126b98e8);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b0f5c; end: 1054b0f63;  */

undefined8 FUN_1054b0f5c(void)

{
  return 0;
}



/* Entry: 1054b0f64; end: 1054b0f9f; -[SCBloopsServicesEntryPoint end] */

void FUN_1054b0f64(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e87f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054b0fa0; end: 1054b1037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b0fa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b9908;
    _objc_alloc(PTR_PTR_1126b9908);
    lVar1 = param_1 + _DAT_112724130;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011c80(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054b1038; end: 1054b118f; -[SCBloopsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b1038(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272412c,0);
  _objc_storeStrong(param_1 + _DAT_112724128,0);
  _objc_destroyWeak(param_1 + _DAT_112724184);
  _objc_destroyWeak(param_1 + _DAT_112724180);
  _objc_destroyWeak(param_1 + _DAT_11272417c);
  _objc_destroyWeak(param_1 + _DAT_112724178);
  _objc_destroyWeak(param_1 + _DAT_112724174);
  _objc_destroyWeak(param_1 + _DAT_112724170);
  _objc_destroyWeak(param_1 + _DAT_11272416c);
  _objc_destroyWeak(param_1 + _DAT_112724168);
  _objc_destroyWeak(param_1 + _DAT_112724164);
  _objc_destroyWeak(param_1 + _DAT_112724160);
  _objc_destroyWeak(param_1 + _DAT_11272415c);
  _objc_destroyWeak(param_1 + _DAT_112724158);
  _objc_destroyWeak(param_1 + _DAT_112724154);
  _objc_destroyWeak(param_1 + _DAT_112724130);
  _objc_destroyWeak(param_1 + _DAT_112724150);
  _objc_destroyWeak(param_1 + _DAT_11272414c);
  _objc_destroyWeak(param_1 + _DAT_112724148);
  _objc_destroyWeak(param_1 + _DAT_112724144);
  _objc_destroyWeak(param_1 + _DAT_112724140);
  _objc_destroyWeak(param_1 + _DAT_11272413c);
  _objc_destroyWeak(param_1 + _DAT_112724138);
  _objc_destroyWeak(param_1 + _DAT_112724134);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112724188,0);
  return;
}



/* Entry: 1054b1190; end: 1054b1257; -[SCBloopsPresentationModelProvider initWithBloopsFeature:bloopsUserOnboardingStatusProvider:needsCheckPersonsSource:] */

undefined1 *
FUN_1054b1190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e87f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b1258; end: 1054b1333; -[SCBloopsPresentationModelProvider setSearchQueryObservable:] */

void FUN_1054b1258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b1334; end: 1054b139f;  */

void FUN_1054b1334(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf51e00(param_2);
    func_0x00010c1f86a0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b13a0; end: 1054b147b; -[SCBloopsPresentationModelProvider setPersonSourceObservable:] */

void FUN_1054b13a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b147c; end: 1054b14cb;  */

void FUN_1054b147c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1dade0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b14cc; end: 1054b1587; -[SCBloopsPresentationModelProvider presentationModel] */

void FUN_1054b14cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b9910;
  _objc_alloc_init(PTR_PTR_1126b9910);
  lVar2 = param_1;
  func_0x00010c153ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f86a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0fa640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dade0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1cbce0(puVar1,param_2,*(undefined1 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  func_0x00010c0d9840();
  func_0x00010bf436e0(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054b1588; end: 1054b158b; -[SCBloopsPresentationModelProvider updateCTPItemImageSize:] */

void FUN_1054b1588(void)

{
  return;
}



/* Entry: 1054b158c; end: 1054b1597; -[SCBloopsPresentationModelProvider searchQuery] */

void FUN_1054b158c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1054b1598; end: 1054b159f; -[SCBloopsPresentationModelProvider setSearchQuery:] */

void FUN_1054b1598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b15a0; end: 1054b15ab; -[SCBloopsPresentationModelProvider personSource] */

void FUN_1054b15a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1054b15ac; end: 1054b15b3; -[SCBloopsPresentationModelProvider setPersonSource:] */

void FUN_1054b15ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b15b4; end: 1054b1607; -[SCBloopsPresentationModelProvider .cxx_destruct] */

void FUN_1054b15b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b1608; end: 1054b16eb; -[SCBloopsStickersPresentationServiceProvider provide] */

void FUN_1054b1608(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9920;
  _objc_alloc(PTR_PTR_1126b9920);
  func_0x00010c038980();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054b16ec; end: 1054b17c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b16ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b9918;
    _objc_alloc(PTR_PTR_1126b9918);
    lVar1 = param_1 + _DAT_1127241a8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf1dcc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127241a8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf1e4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8ec0(puVar5,param_2,lVar2,lVar4,1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054b17c4; end: 1054b18b3; -[SCBloopsStickersPresentationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b17c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127241a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127241a4);
  return;
}



/* Entry: 1054b18b4; end: 1054b18cf;  */

void FUN_1054b18b4(void)

{
  _objc_alloc_init(PTR_PTR_1126b9930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054b18d0; end: 1054b1923;  */

void FUN_1054b18d0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9938;
  _objc_alloc(PTR_PTR_1126b9938);
  func_0x00010bff8f00();
  _objc_release(0);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b1924; end: 1054b19ff;  */

void FUN_1054b1924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9940;
  _objc_alloc(PTR_PTR_1126b9940);
  func_0x00010c02d5c0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf26300(uVar2,param_2,&PTR____CFConstantStringClassReference_110de3378,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054b1a00; end: 1054b1b2f;  */

void FUN_1054b1a00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ae720;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1054b1b30;
  puStack_60 = &UNK_11088f8f8;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uStack_58 = uVar7;
  func_0x00010bf11fe0(puVar1,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9950;
  _objc_alloc(PTR_PTR_1126b9950);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001054c12d0(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001054c10c8(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001054c1230(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  FUN_1054c1370(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b5020(uVar6,param_2,&PTR____CFConstantStringClassReference_110eef218,0x93a80,0);
  func_0x00010c050160(puVar2,param_2,uVar7,uVar3,uVar4,puVar1,uVar5,uVar6);
  _objc_release(puVar1);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054b1b30; end: 1054b1ccf;  */

void FUN_1054b1b30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9940;
  _objc_alloc(PTR_PTR_1126b9940);
  func_0x00010c02d5c0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf26300(uVar2,param_2,&PTR____CFConstantStringClassReference_110de3398,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054b1cd0; end: 1054b1d0b;  */

void FUN_1054b1cd0(void)

{
  _objc_alloc(PTR_PTR_1126b9960);
  func_0x00010c016c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054b1d0c; end: 1054b1d5b; -[SCBloopsUserServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b1d0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127241b8);
  _objc_destroyWeak(param_1 + _DAT_1127241b4);
  _objc_destroyWeak(param_1 + _DAT_1127241ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127241b0);
  return;
}



/* Entry: 1054b1d5c; end: 1054b1eb3;  */

void FUN_1054b1d5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1eeba0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c196320(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c067f00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c214be0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf56360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1054b1eb4; end: 1054b1f57; -[SCBloopsGrpcServiceImpl initWithGrpcService:servicePath:] */

undefined1 *
FUN_1054b1eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8800;
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



/* Entry: 1054b1f58; end: 1054b2027; -[SCBloopsGrpcServiceImpl updateUserBloopsData:callOptionsBuilder:handler:] */

void FUN_1054b1f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9970;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de3458,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b2028; end: 1054b20f7; -[SCBloopsGrpcServiceImpl getUserBloopsData:callOptionsBuilder:handler:] */

void FUN_1054b2028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9978;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de3478,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b20f8; end: 1054b21c7; -[SCBloopsGrpcServiceImpl deleteUserBloopsData:callOptionsBuilder:handler:] */

void FUN_1054b20f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9980;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de3498,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b21c8; end: 1054b2297; -[SCBloopsGrpcServiceImpl updateUserBloopsPolicy:callOptionsBuilder:handler:] */

void FUN_1054b21c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9988;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de34b8,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b2298; end: 1054b2367; -[SCBloopsGrpcServiceImpl updateUserBloopsHairStyle:callOptionsBuilder:handler:] */

void FUN_1054b2298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9990;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de34d8,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b2368; end: 1054b2437; -[SCBloopsGrpcServiceImpl updateUserBloopsGender:callOptionsBuilder:handler:] */

void FUN_1054b2368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9998;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de34f8,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b2438; end: 1054b2507; -[SCBloopsGrpcServiceImpl updateUserBloopsAdsPolicy:callOptionsBuilder:handler:] */

void FUN_1054b2438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b99a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de3518,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b2508; end: 1054b25d7; -[SCBloopsGrpcServiceImpl getUsersBloopsData:callOptionsBuilder:handler:] */

void FUN_1054b2508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b99a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010be0b560(param_1,param_2,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed0ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110de3538,uVar3,param_4
                      ,uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b25d8; end: 1054b26d3; -[SCBloopsGrpcServiceImpl _unaryCall:request:callOptionsBuilder:handler:] */

void FUN_1054b25d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dacf38;
  func_0x00010c25ce00(&PTR____CFConstantStringClassReference_110dacf38,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054b26d4; end: 1054b2787; -[SCBloopsGrpcServiceImpl _eventHandlerWithHandler:responseClass:] */

void FUN_1054b26d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1054b2788;
    puStack_40 = &UNK_110843510;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0199c0(puVar1,param_2,&puStack_58,param_4);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b2788; end: 1054b2a07;  */

void FUN_1054b2788(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
    goto LAB_1054b29c8;
  }
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_status_112672580);
  if ((uVar1 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c0f8ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b99b0;
    _objc_opt_class(PTR_PTR_1126b99b0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar7);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar3 = uVar2;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c252d60();
      _objc_release(uVar3);
      puVar7 = (undefined *)0x0;
      iVar8 = (int)uVar4;
      if (iVar8 < 0xcc) {
        if ((iVar8 != -0x4524111) && (iVar8 != 0)) {
LAB_1054b28b0:
          uVar3 = uVar2;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0cb140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar3);
          puVar5 = (undefined *)0x0;
          if (uVar4 != 0) {
            uVar3 = uVar2;
            func_0x00010bf987e0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0cb140();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar3);
          }
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf987e0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c252d60();
          func_0x00010bf99240(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(puVar5);
        }
      }
      else if ((iVar8 != 0xcc) && (iVar8 != 0x196)) goto LAB_1054b28b0;
    }
    _objc_release(uVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,puVar7);
  _objc_release(puVar7);
LAB_1054b29c8:
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
    return;
  }
  return;
}



/* Entry: 1054b2a08; end: 1054b2a37; -[SCBloopsGrpcServiceImpl .cxx_destruct] */

void FUN_1054b2a08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b2a38; end: 1054b2d1f; -[SCBloopsGrpcUserService initWithBloopsGrpcService:modelsConverter:userId:routeTag:overridedRegion:] */

undefined8 *
FUN_1054b2a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e8808;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[4];
    puVar2[4] = param_5;
    _objc_release(uVar3);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf53280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf278;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    puVar7 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c106d20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar6);
    puVar7 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar6);
    func_0x00010c1d0640(puVar6);
    _objc_release(ppuVar1);
    if (param_6 != 0) {
      func_0x00010c1d0640(puVar6);
    }
    puVar7 = PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = puVar2[3];
    puVar2[3] = puVar7;
    _objc_release(uVar3);
    _objc_release(puVar6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1054b2d20; end: 1054b2eef; -[SCBloopsGrpcUserService registerUserBloopsTarget:preprocessedDataDescriptor:genderType:formatVersion:sdkVersion:locale:completion:] */

void FUN_1054b2d20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf28e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_9);
  func_0x00010c28b980(uVar1);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b2ef0; end: 1054b3023;  */

void FUN_1054b2ef0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c252d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c252f40(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x20);
    if (param_3 == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1e040();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,uVar3,uVar4,0);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      (**(code **)(lVar5 + 0x10))(lVar5,0,uVar4,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b3024; end: 1054b319f; -[SCBloopsGrpcUserService getUserBloopsTargetWithSDKVersion:locale:useCase:completion:] */

void FUN_1054b3024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf28d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x00010bfcbd00(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b31a0; end: 1054b32d3;  */

void FUN_1054b31a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c252d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c252f40(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x20);
    if (param_3 == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1e020();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,uVar3,uVar4,0);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      (**(code **)(lVar5 + 0x10))(lVar5,0,uVar4,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b32d4; end: 1054b340f; -[SCBloopsGrpcUserService deleteUserBloopsTarget:] */

void FUN_1054b32d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b99b8;
  _objc_alloc_init(PTR_PTR_1126b99b8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1054b33a0;
  puStack_40 = &UNK_11088fa78;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6cd80(uVar2,param_2,puVar1,uVar3,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1054b3410; end: 1054b351b; -[SCBloopsGrpcUserService updateUserBloopsTargetPolicy:completion:] */

void FUN_1054b3410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf28ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054b351c;
  puStack_50 = &UNK_11088faa8;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c28ba00(uVar3,param_2,uVar1,uVar2,&puStack_68);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 1054b351c; end: 1054b358b;  */

void FUN_1054b351c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = param_3;
    if (param_3 == 0) {
      lVar2 = 0;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,param_3 == 0,lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b358c; end: 1054b36e7; -[SCBloopsGrpcUserService updateUserHairStyle:completion:] */

void FUN_1054b358c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b99c0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1a5080();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1054b3678;
  puStack_40 = &UNK_11088fad8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c28b9e0(uVar2,param_2,puVar1,uVar3,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1054b36e8; end: 1054b3847; -[SCBloopsGrpcUserService updateUserBloopsGender:completion:] */

void FUN_1054b36e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf28e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1054b37d8;
  puStack_40 = &UNK_11088fb08;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c28b9a0(uVar1,param_2,uVar2,uVar3,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 1054b3848; end: 1054b39a7; -[SCBloopsGrpcUserService updateUserBloopsAdsPolicy:completion:] */

void FUN_1054b3848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf28c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1054b3938;
  puStack_40 = &UNK_11088fb38;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c28b940(uVar1,param_2,uVar2,uVar3,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 1054b39a8; end: 1054b3b4b; -[SCBloopsGrpcUserService getUsersBloopsTargetsForUserIds:firstMatchReturnOnly:source:completion:] */

void FUN_1054b39a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b99c8;
  _objc_alloc_init(PTR_PTR_1126b99c8);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  func_0x00010c21e700(puVar1);
  _objc_release(uVar2);
  func_0x00010c19d2a0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28cc0();
  func_0x00010c19faa0(puVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfcbf60(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b3b4c; end: 1054b3c27;  */

void FUN_1054b3b4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      if (param_3 == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x10);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1dde0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))(lVar4,uVar3,0);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      else {
        (**(code **)(lVar4 + 0x10))(lVar4,0,param_3);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b3c28; end: 1054b3c6f; -[SCBloopsGrpcUserService .cxx_destruct] */

void FUN_1054b3c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b3c70; end: 1054b3da3; -[SCBloopsUserServiceImpl initWithGRPCService:getMyDataCache:withCurrentUserCacheService:withFriendsCacheService:featureSettingsService:writeToSUPEnabled:] */

undefined1 *
FUN_1054b3c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

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
  puStack_58 = PTR_PTR_1126e8810;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b3da4; end: 1054b3f3b; -[SCBloopsUserServiceImpl registerUserBloopsTarget:preprocessedDataDescriptor:genderType:formatVersion:sdkVersion:locale:completion:] */

void FUN_1054b3da4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1054b3f3c;
  puStack_80 = &UNK_11088fb98;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_9);
  uStack_78 = param_9;
  ppuVar1 = &puStack_98;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c127460();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b3f3c; end: 1054b4033;  */

void FUN_1054b3f3c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39f20();
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126b99d0;
      _objc_alloc(PTR_PTR_1126b99d0);
      func_0x00010c05aac0();
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c287f20();
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,param_2,param_3,param_4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b4034; end: 1054b418f; -[SCBloopsUserServiceImpl getUserBloopsTargetWithSDKVersion:locale:useCase:completion:] */

void FUN_1054b4034(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_50 = param_5;
    func_0x00010bfc7d80(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b4190; end: 1054b42df;  */

void FUN_1054b4190(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar3 = &puStack_70;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1054b42e0;
      puStack_58 = &UNK_11088fb98;
      _objc_copyWeak(auStack_48,param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      uStack_50 = uVar5;
      _objc_retainBlock(&puStack_70);
      uVar5 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcbd20();
      _objc_release(uVar5);
      _objc_release(ppuVar3);
      _objc_release(uStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x30);
      lVar2 = param_2;
      func_0x00010c291840(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,lVar2,0,0);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054b42e0; end: 1054b43b7;  */

void FUN_1054b42e0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 != 0) && (param_4 == 0)) {
      puVar2 = PTR_PTR_1126b99d0;
      _objc_alloc(PTR_PTR_1126b99d0);
      func_0x00010c05aac0();
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c287f20();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),param_2,param_3,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b43b8; end: 1054b44b7; -[SCBloopsUserServiceImpl deleteUserBloopsTarget:] */

void FUN_1054b43b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054b44b8;
  puStack_50 = &UNK_11088fbf8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  uStack_48 = param_3;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6cda0();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b44b8; end: 1054b454b;  */

void FUN_1054b44b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39f20();
      _objc_release(uVar2);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054b454c; end: 1054b467f; -[SCBloopsUserServiceImpl updateUserBloopsTargetPolicy:completion:] */

void FUN_1054b454c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054b4680;
  puStack_68 = &UNK_11088fc28;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ba20();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b4680; end: 1054b4763;  */

void FUN_1054b4680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c067fc0();
    FUN_1054b954c();
    _objc_retainAutoreleasedReturnValue();
    if (((int)param_2 != 0) && (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 != 0)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39e20();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28bb80();
      _objc_release(uVar3);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,param_2,param_3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054b4764; end: 1054b4897; -[SCBloopsUserServiceImpl updateUserHairStyle:completion:] */

void FUN_1054b4764(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054b4898;
  puStack_68 = &UNK_11088fc28;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28baa0();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b4898; end: 1054b492b;  */

void FUN_1054b4898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ba80();
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054b492c; end: 1054b4a3f; -[SCBloopsUserServiceImpl updateUserBloopsGender:completion:] */

void FUN_1054b492c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054b4a40;
  puStack_68 = &UNK_110884c78;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b9c0();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1054b4a40; end: 1054b4ad3;  */

void FUN_1054b4a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ba60();
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054b4ad4; end: 1054b4be7; -[SCBloopsUserServiceImpl updateUserBloopsAdsPolicy:completion:] */

void FUN_1054b4ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054b4be8;
  puStack_68 = &UNK_110884c78;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b960();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1054b4be8; end: 1054b4cdf;  */

void FUN_1054b4be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39e20();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b900();
      _objc_release(uVar2);
      if (*(char *)(lVar1 + 0x30) == '\x01') {
        uVar2 = *(undefined8 *)(lVar1 + 0x28);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1729c0();
        _objc_release(uVar2);
      }
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054b4ce0; end: 1054b4e1f; -[SCBloopsUserServiceImpl getUsersBloopsTargetsForUserIds:firstMatchReturnOnly:source:completion:] */

void FUN_1054b4ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_copyWeak(auStack_60,auStack_48);
    uStack_58 = param_5;
    uStack_50 = param_4;
    func_0x00010bfc3420(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b4e20; end: 1054b5003;  */

void FUN_1054b4e20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar4 = &puStack_80;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar5 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = puVar1;
  func_0x00010c072060();
  if ((int)puVar3 == 0) {
    puVar3 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained();
    if (puVar3 == (undefined *)0x0) goto LAB_1054b4fbc;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1054b5004;
    puStack_68 = &UNK_11088fc58;
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    _objc_retainBlock(&puStack_80);
    uVar5 = *(undefined8 *)(puVar3 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcbf80();
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar3 = PTR_PTR_1126b99d8;
    _objc_alloc(PTR_PTR_1126b99d8);
    uVar5 = param_2;
    func_0x00010bf00d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8f60(puVar3);
    _objc_release(uVar5);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3,0);
  }
  _objc_release(puVar3);
LAB_1054b4fbc:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054b5004; end: 1054b50eb;  */

void FUN_1054b5004(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf1e480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bf1e480(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef8b40(uVar4);
      _objc_release(lVar2);
      _objc_release(uVar4);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b50ec; end: 1054b513f; -[SCBloopsUserServiceImpl .cxx_destruct] */

void FUN_1054b50ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b5140; end: 1054b51e3; -[SCBloopsOnboardingControllerImpl initWithFeatureSettingsService:selfieOnboardingPresenter:] */

undefined1 *
FUN_1054b5140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8818;
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



/* Entry: 1054b51e4; end: 1054b52c3; -[SCBloopsOnboardingControllerImpl startOnViewController:sourceType:selfieApprovedCallback:completion:] */

void FUN_1054b51e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x00010c106960(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ed80(param_1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054b52c4; end: 1054b537b; -[SCBloopsOnboardingControllerImpl startOnUIContainer:sourceType:selfieApprovedCallback:completion:] */

void FUN_1054b52c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  else {
    func_0x00010c24ed80(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


