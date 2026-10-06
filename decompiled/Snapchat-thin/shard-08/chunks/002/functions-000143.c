/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e7a5bc; end: 105e7a5f7; -[SCRetriableRequestCallbackInvoker .cxx_destruct] */

void FUN_105e7a5bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e7a5f8; end: 105e7a6fb; -[SCRetriableRequestSuccessErrorInvoker initWithSuccessCallbackQueue:failureCallbackQueue:successBlock:failureBlock:] */

undefined1 *
FUN_105e7a5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126ed830;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e7a6fc; end: 105e7a753; -[SCRetriableRequestSuccessErrorInvoker invokeSuccess] */

void FUN_105e7a6fc(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e7a754;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x20),&puStack_38);
  return;
}



/* Entry: 105e7a754; end: 105e7a7c3;  */

void FUN_105e7a754(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar1 + 0x30);
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7a7c4; end: 105e7a81b; -[SCRetriableRequestSuccessErrorInvoker invokeFailure] */

void FUN_105e7a7c4(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e7a81c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x28),&puStack_38);
  return;
}



/* Entry: 105e7a81c; end: 105e7a88b;  */

void FUN_105e7a81c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar1 + 0x38);
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf987e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7a88c; end: 105e7a8d3; -[SCRetriableRequestSuccessErrorInvoker .cxx_destruct] */

void FUN_105e7a88c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105e7a8d4; end: 105e7a97b; -[SCRetriableRequestCompletedInvoker initWithCompletionQueue:completionBlock:] */

undefined1 *
FUN_105e7a8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed838;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e7a97c; end: 105e7a9d3; -[SCRetriableRequestCompletedInvoker invokeSuccess] */

void FUN_105e7a97c(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e7a9d4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x20),&puStack_38);
  return;
}



/* Entry: 105e7a9d4; end: 105e7aa47;  */

void FUN_105e7a9d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar1 + 0x28);
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar1,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7aa48; end: 105e7aa9f; -[SCRetriableRequestCompletedInvoker invokeFailure] */

void FUN_105e7aa48(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e7aaa0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x20),&puStack_38);
  return;
}



/* Entry: 105e7aaa0; end: 105e7ab13;  */

void FUN_105e7aaa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar1 + 0x28);
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf987e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar1,0,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7ab14; end: 105e7ab43; -[SCRetriableRequestCompletedInvoker .cxx_destruct] */

void FUN_105e7ab14(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105e7ab44; end: 105e7abef; -[SCDurableJobRequestSuccessErrorInvoker initWithSuccessBlock:failureBlock:] */

undefined1 *
FUN_105e7ab44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed840;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e7abf0; end: 105e7ac6f; -[SCDurableJobRequestSuccessErrorInvoker invokeSuccess] */

void FUN_105e7abf0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c13b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63640(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105e7ac70; end: 105e7acef; -[SCDurableJobRequestSuccessErrorInvoker invokeFailure] */

void FUN_105e7ac70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c13b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf987e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105e7acf0; end: 105e7acf7; -[SCDurableJobRequestSuccessErrorInvoker successBlock] */

undefined8 FUN_105e7acf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e7acf8; end: 105e7acff; -[SCDurableJobRequestSuccessErrorInvoker failureBlock] */

undefined8 FUN_105e7acf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e7ad00; end: 105e7ad07; -[SCDurableJobRequestSuccessErrorInvoker state] */

undefined4 FUN_105e7ad00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 105e7ad08; end: 105e7ad0f; -[SCDurableJobRequestSuccessErrorInvoker setState:] */

void FUN_105e7ad08(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105e7ad10; end: 105e7ad3f; -[SCDurableJobRequestSuccessErrorInvoker .cxx_destruct] */

void FUN_105e7ad10(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 105e7ad40; end: 105e7aebb; -[SCRetriableSnapAdsNetworkRequest initWithSnapAdsNetworkRequest:requestKey:cookies:useGzipRequestCompression:adConfigProvider:adConfigProviderV2:] */

undefined1 *
FUN_105e7ad40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed848;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    func_0x00010c13f260(param_3);
    func_0x00010be227c0(puVar1);
    func_0x00010c1ed9a0(puVar1);
    func_0x00010c13f260(param_3);
    func_0x00010be736e0(puVar1);
    func_0x00010c200b40(puVar1);
    uVar2 = param_3;
    func_0x00010c13f260();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x18) = param_6;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be654c0();
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e7aebc; end: 105e7afc3; -[SCRetriableSnapAdsNetworkRequest _numberOfAttemptsFromRequest:] */

long FUN_105e7aebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bfb5800();
  puVar1 = PTR_PTR_1126b9438;
  if (lVar4 == 0) {
    lVar4 = param_3;
    func_0x00010bfc3140(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = (undefined *)0x0;
    func_0x00010c0f40e0(puVar1,param_2,lVar4,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_48;
    _objc_retain(puStack_48);
    _objc_release(lVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = puVar1;
      func_0x00010bfd9980();
      if ((int)puVar3 == 0) {
        lVar4 = 0;
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar2 = puVar1;
        func_0x00010c0deaa0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c296d80();
        lVar4 = (long)(int)puVar3;
        puVar3 = puVar1;
        puVar1 = puVar2;
      }
    }
    else {
      lVar4 = 0;
    }
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  else {
    lVar4 = 0;
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105e7afc4; end: 105e7b0a7; -[SCRetriableSnapAdsNetworkRequest _logIncorrectConfigSettings:] */

undefined *
FUN_105e7afc4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c08fa60();
  puVar9 = PTR_PTR_1126c02c8;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c02b8;
    func_0x00010bdc21c0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 1;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    param_4 = puVar3;
    func_0x00010bfec580(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (puVar7 + -3 < (undefined *)0x2) {
    _objc_opt_class(PTR_PTR_1126b8cf8);
    puVar9 = PTR_PTR_1126b8cf8;
    _objc_opt_new(PTR_PTR_1126b8cf8);
    uVar4 = param_5;
    func_0x00010c119620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b8cf8;
    _objc_opt_class(PTR_PTR_1126b8cf8);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar9);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c0fa3a0();
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
LAB_105e7b1c0:
      puVar9 = (undefined *)0x1;
      goto LAB_105e7b210;
    }
    func_0x00010be54ca0(param_3);
  }
  else if (puVar7 == (undefined *)0x1) {
    puVar9 = param_4;
    func_0x00010c23f360();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c0fa3a0();
    _objc_release(puVar9);
    lVar8 = *(long *)(param_3 + 0x38);
    func_0x00010c136d60();
    if (((ulong)puVar2 & 1) != 0) goto LAB_105e7b1c0;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e2d998;
    if (lVar8 != 1) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110ddee18;
    }
    func_0x00010c25ce40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be54ca0(param_3);
    _objc_release(ppuVar6);
  }
  puVar9 = (undefined *)0x0;
LAB_105e7b210:
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar9;
}



/* Entry: 105e7b0a8; end: 105e7b237; -[SCRetriableSnapAdsNetworkRequest _persistenceSetting:adConfigProvider:adConfigProviderV2:] */

undefined8 FUN_105e7b0a8(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 - 3U < 2) {
    _objc_opt_class(PTR_PTR_1126b8cf8);
    puVar1 = PTR_PTR_1126b8cf8;
    _objc_opt_new(PTR_PTR_1126b8cf8);
    uVar4 = param_5;
    func_0x00010c119620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b8cf8;
    _objc_opt_class(PTR_PTR_1126b8cf8);
    uVar2 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c0fa3a0();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
LAB_105e7b1c0:
      uVar7 = 1;
      goto LAB_105e7b210;
    }
    func_0x00010be54ca0(param_1);
  }
  else if (param_3 == 1) {
    uVar3 = param_4;
    func_0x00010c23f360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0fa3a0();
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x00010c136d60();
    if ((uVar4 & 1) != 0) goto LAB_105e7b1c0;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e2d998;
    if (lVar5 != 1) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110ddee18;
    }
    func_0x00010c25ce40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be54ca0(param_1);
    _objc_release(ppuVar6);
  }
  uVar7 = 0;
LAB_105e7b210:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 105e7b238; end: 105e7b307; -[SCRetriableSnapAdsNetworkRequest _getServerConfigRetryCount:adConfigProvider:adConfigProviderV2:] */

undefined8
FUN_105e7b238(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = 0;
  if (param_3 < 3) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        uVar3 = param_4;
        func_0x00010c23f380(param_4);
      }
      goto LAB_105e7b2e4;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2da18;
    uVar2 = 2;
  }
  else {
    if (param_3 == 3) {
      uVar3 = param_4;
      func_0x00010c2816c0(param_4);
      goto LAB_105e7b2e4;
    }
    if (param_3 == 4) {
      uVar3 = param_4;
      func_0x00010c281580(param_4);
      goto LAB_105e7b2e4;
    }
    if (param_3 != 5) goto LAB_105e7b2e4;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2da38;
    uVar2 = 0;
  }
  uVar3 = param_5;
  func_0x00010c067f60(param_5,param_2,ppuVar1,uVar2);
LAB_105e7b2e4:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 105e7b308; end: 105e7b4db; -[SCRetriableSnapAdsNetworkRequest toSCRequest] */

void FUN_105e7b308(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bfcb800();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfcbc40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010c136d60();
  puVar5 = puVar3;
  if ((lVar4 == 1) && (1 < *(long *)(param_1 + 0x30))) {
    func_0x00010bdc2d80(puVar3,param_2,&PTR____CFConstantStringClassReference_110e2da58,
                        &PTR____CFConstantStringClassReference_110dad378);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010bef7f60();
  puVar7 = *(undefined **)(param_1 + 0x38);
  func_0x00010bfc8680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar7;
  }
  func_0x00010bef7f60(puVar6,param_2,puVar3);
  _objc_release(puVar7);
  puVar3 = PTR_PTR_1126b4960;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfc3140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf587c0(puVar3,param_2,puVar5,0,uVar2,puVar6,*(undefined8 *)(param_1 + 0x28),
                      PTR____NSArray0__struct_11034ab48,4,1,3,lVar1 == 1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if ((*(ulong *)(param_1 + 0x10) < 6) && ((1L << (*(ulong *)(param_1 + 0x10) & 0x3f) & 0x3aU) != 0)
     ) {
    func_0x00010c13f540(param_1);
    func_0x00010c1c3460(puVar3,param_2,param_1 + 1);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e7b4dc; end: 105e7b6f3; -[SCRetriableSnapAdsNetworkRequest toPersistenceObject:] */

void FUN_105e7b4dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
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
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfc3140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfcbc40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 1) {
    func_0x00010c283e00(*(undefined8 *)(param_2 + 0x38),param_3,uVar1);
    func_0x00010c28b860(*(undefined8 *)(param_2 + 0x38),param_3,uVar2);
    func_0x00010c2895a0(*(undefined8 *)(param_2 + 0x38),param_3,6);
    func_0x00010c1ed9a0(param_2,param_3,0);
    func_0x00010c200b40(param_2,param_3,0);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c13f260();
  puVar4 = PTR_PTR_1126c5470;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfcbce0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfcb800();
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfc8680();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  uVar16 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c23f300();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bef60a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c136d60();
  uVar11 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bef4240();
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfb5800();
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4dc0(*(undefined8 *)(param_2 + 0x38));
  uVar14 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a3a0(param_1,puVar4,param_3,uVar2,uVar5,uVar6,uVar7,uVar1,uVar15,uVar16,uVar8,uVar9
                      ,uVar10,uVar11,uVar12,uVar3,uVar13,uVar14);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e7b6f4; end: 105e7b6ff; -[SCRetriableSnapAdsNetworkRequest setNumberOfAttempts:] */

void FUN_105e7b6f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed4270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateBodyWithNumberOfAttempts__112592a40,param_3,0);
  return;
}



/* Entry: 105e7b700; end: 105e7b817; -[SCRetriableSnapAdsNetworkRequest _updateBodyWithNumberOfAttempts:error:] */

void FUN_105e7b700(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_48;
  
  puVar1 = *(undefined **)(param_1 + 0x38);
  func_0x00010bfc3140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bfb5800();
  puVar4 = puVar1;
  if (lVar2 == 0) {
    lStack_48 = 0;
    puVar3 = PTR_PTR_1126b9438;
    func_0x00010c0f40e0(PTR_PTR_1126b9438,param_2,puVar1,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_48;
    _objc_retain(lStack_48);
    if (lVar2 == 0) {
      puVar4 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      func_0x00010c01e4a0();
      func_0x00010c1cf8e0(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf63640(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
  else {
    lVar2 = 0;
  }
  func_0x00010c283e00(*(undefined8 *)(param_1 + 0x38),param_2,puVar4);
  if (param_4 != (long *)0x0) {
    _objc_retainAutorelease(lVar2);
    *param_4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 105e7b818; end: 105e7b81f; -[SCRetriableSnapAdsNetworkRequest shouldPersist] */

undefined1 FUN_105e7b818(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 105e7b820; end: 105e7b827; -[SCRetriableSnapAdsNetworkRequest setShouldPersist:] */

void FUN_105e7b820(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 105e7b828; end: 105e7b82f; -[SCRetriableSnapAdsNetworkRequest retryCount] */

undefined8 FUN_105e7b828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e7b830; end: 105e7b837; -[SCRetriableSnapAdsNetworkRequest setRetryCount:] */

void FUN_105e7b830(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105e7b838; end: 105e7b83f; -[SCRetriableSnapAdsNetworkRequest key] */

undefined8 FUN_105e7b838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e7b840; end: 105e7b847; -[SCRetriableSnapAdsNetworkRequest numberOfAttempts] */

undefined8 FUN_105e7b840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e7b848; end: 105e7b84f; -[SCRetriableSnapAdsNetworkRequest request] */

undefined8 FUN_105e7b848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e7b850; end: 105e7b88b; -[SCRetriableSnapAdsNetworkRequest .cxx_destruct] */

void FUN_105e7b850(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e7b88c; end: 105e7bad7; -[SCAdRetriableRequestManager initWithAdConfigProvider:adConfigProviderV2:docObjectContext:jobScheduler:performer:requestManager:lifecycleTracker:timProvider:trackFunnelEventTracker:userAdIdProvider:] */

undefined8 *
FUN_105e7b88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126ed850;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c5468;
    func_0x00010bf33660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xb) = 0;
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



/* Entry: 105e7bad8; end: 105e7bc07; -[SCAdRetriableRequestManager submitRequest:successBlock:failureBlock:] */

void FUN_105e7bad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e7bc08; end: 105e7bc3f;  */

void FUN_105e7bc08(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e7bc40; end: 105e7bca3; -[SCAdRetriableRequestManager cancelRequests] */

void FUN_105e7bc40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e5c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e7bca4; end: 105e7c05b; -[SCAdRetriableRequestManager processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_105e7bca4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_6 + 0x10))(param_6,2,puVar10);
    goto LAB_105e7bff8;
  }
  puVar4 = PTR_PTR_1126bdbc0;
  func_0x00010c0e0260();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c5478;
  _objc_opt_class(PTR_PTR_1126c5478);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar10);
  puVar10 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar10 = (undefined *)0x0;
  }
  _objc_retain(puVar10);
  _objc_release(puVar4);
  if (puVar10 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(puVar4 + 0x18);
  }
  _objc_retain(uVar12);
  lVar3 = param_1;
  func_0x00010be3dd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  lVar6 = lVar3;
  func_0x00010c252440();
  iVar2 = (int)lVar6;
  if (lVar3 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf90140();
    _objc_release(uVar7);
    if ((int)uVar12 != 0) {
      if (puVar10 == (undefined *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(puVar4 + 0x18);
      }
      _objc_retain(uVar12);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar12;
      FUN_105e80c18(uVar12,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar12);
      uVar12 = uVar7;
      func_0x00010c0d8160();
      iVar2 = (int)uVar12;
      _objc_release(uVar7);
    }
  }
  puVar5 = PTR_PTR_1126bdbc0;
  if (puVar10 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(puVar4 + 0x10);
  }
  _objc_retain(uVar12);
  func_0x00010c0e0260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar9 = puVar5;
  func_0x00010010fab4(puVar5,PTR_DAT_1126a5250);
  puVar1 = puVar5;
  if ((int)puVar9 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2720c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90120();
  func_0x00010bf0dc20(param_5);
  _objc_release(uVar12);
  func_0x00010c0b1d20(*(undefined8 *)(param_1 + 0x48));
  if (iVar2 < 2) {
    if (iVar2 == 0) {
LAB_105e7bf90:
      func_0x00010bec6240(param_1);
    }
    else if (iVar2 == 1) {
      pcVar11 = *(code **)(param_6 + 0x10);
      uVar12 = 1;
      goto LAB_105e7bfe0;
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 3) goto LAB_105e7bfe8;
      goto LAB_105e7bf90;
    }
    if (puVar10 == (undefined *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(puVar4 + 0x18);
    }
    _objc_retain(uVar12);
    func_0x00010bdfa260(param_1);
    _objc_release(uVar12);
    pcVar11 = *(code **)(param_6 + 0x10);
    uVar12 = 0;
LAB_105e7bfe0:
    (*pcVar11)(param_6,uVar12,0);
  }
LAB_105e7bfe8:
  _objc_release(puVar5);
  _objc_release(lVar3);
LAB_105e7bff8:
  _objc_release(puVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return 0;
}



/* Entry: 105e7c05c; end: 105e7c0eb; -[SCAdRetriableRequestManager deleteJobWithJobConfig:jobData:jobDeletionReason:] */

void FUN_105e7c05c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  func_0x00010c085840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3dd80(param_1,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) goto LAB_105e7c0d0;
  if (1 < param_5) {
    if (param_5 == 2) {
      func_0x00010c06ade0(param_1);
      goto LAB_105e7c0d0;
    }
    if (param_5 != 3) goto LAB_105e7c0d0;
  }
  func_0x00010c06ac80(param_1);
LAB_105e7c0d0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e7c0ec; end: 105e7c457; -[SCAdRetriableRequestManager _submitRequest:successBlock:failureBlock:] */

void FUN_105e7c0ec(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c272000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x40));
  puVar3 = PTR_PTR_1126c5478;
  _objc_alloc(PTR_PTR_1126c5478);
  puVar4 = PTR_PTR_1126bdbc0;
  func_0x00010bf64c20(PTR_PTR_1126bdbc0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bef5c60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c0c2be0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_105e81280(puVar3,puVar4,uVar1,uVar7,puVar6,1);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c5480;
  _objc_alloc(PTR_PTR_1126c5480);
  func_0x00010c04f480();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x68));
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf90120();
  _objc_release(uVar7);
  if ((int)uVar8 != 0) {
    func_0x00010c209fc0(puVar4);
    _objc_initWeak(auStack_80,param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar8);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105e7c458;
    puStack_b0 = &UNK_1108efce8;
    _objc_copyWeak(auStack_90,auStack_80);
    uStack_a8 = uVar1;
    _objc_retain(param_4);
    uStack_88 = 0;
    uStack_a0 = param_4;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(param_6);
    _objc_retain(param_4);
    uStack_d0 = 0;
    func_0x00010bec6220(param_2);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_d8);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_80);
  }
  func_0x00010bec6140(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7c458; end: 105e7c4cb;  */

void FUN_105e7c458(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be17c00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e7c4cc; end: 105e7c577;  */

void FUN_105e7c4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bed9e60();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252ee0(param_2);
  func_0x00010c0b1d60(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e7c578; end: 105e7c6a7; -[SCAdRetriableRequestManager _firstAttemptSucceededWithKey:request:attemptCount:response:data:successBlock:] */

void FUN_105e7c578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e5c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bed9e60(param_1);
  _objc_release(param_3);
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,param_6,param_7);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252ee0(param_6);
  func_0x00010c0b1d60(uVar3);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105e7c6a8; end: 105e7caaf; -[SCAdRetriableRequestManager _submitJob:request:attemptCount:successBlock:failureBlock:] */

void FUN_105e7c6a8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_6 == 0) {
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf90120();
    uVar11 = (uint)uVar9 ^ 1;
    _objc_release(uVar6);
  }
  else {
    uVar11 = 0;
  }
  puVar2 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c198180();
  func_0x00010c1b6840(puVar2,param_3,*(undefined8 *)(param_2 + 0x60));
  if (param_4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_4 + 0x18);
  }
  _objc_retain(uVar9);
  func_0x00010c1b67a0(puVar2,param_3,uVar9);
  _objc_release(uVar9);
  func_0x00010c1b6780(puVar2,param_3,0);
  func_0x00010c1b6740(puVar2,param_3,0);
  puVar3 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  uVar8 = 0;
  uVar1 = uVar11;
  if (param_4 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    uVar8 = *(undefined4 *)(param_4 + 0x20);
  }
  func_0x00010c1c35c0(puVar3,param_3,uVar8);
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef5c60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar10 = 8;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bef5c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13f800();
    lVar10 = (long)param_1;
    _objc_release(uVar9);
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c1edae0(puVar3,param_3,lVar10);
  func_0x00010c1ed860(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c168b40();
  puVar7 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar7);
  func_0x00010c1cc140(puVar3,param_3,uVar11 ^ 1);
  func_0x00010c1b66e0(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bdbc0;
  func_0x00010bf64c20(PTR_PTR_1126bdbc0,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar6);
  lVar5 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar5);
  lVar4 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105e7cab0;
  puStack_80 = &UNK_11088cdd0;
  uStack_78 = uVar6;
  uStack_70 = param_5;
  lStack_68 = param_6;
  _objc_retain(param_5);
  func_0x00010c25f200(lVar4,param_3,puVar3,puVar2,uVar9,&puStack_98);
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uStack_70);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7cab0; end: 105e7cac7;  */

void FUN_105e7cab0(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logTrackFunnelEventDurableJobSub_11260a160,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105e7cac8; end: 105e7ccd7; -[SCAdRetriableRequestManager _submitNetworkRequest:attemptCount:successBlock:failureBlock:] */

void FUN_105e7cac8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c2721c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3460();
  if (lVar1 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_6 + 0x10))(param_6,0,puVar6);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x48);
    func_0x00010c0b1d80();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef5c60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c23e280();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (((int)uVar5 != 0) && ((uVar2 & 1) != 0)) goto LAB_105e7cc94;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c25f660(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_6);
    puVar6 = param_5;
  }
  _objc_release(puVar6);
LAB_105e7cc94:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105e7ccd8; end: 105e7cd0f;  */

void FUN_105e7ccd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e7ccec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 105e7cd10; end: 105e7cf13; -[SCAdRetriableRequestManager _submitNetworkRequestWithRetroJob:retriableRequest:attemptCount:onComplete:] */

void FUN_105e7cd10(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined1 auStack_d0 [8];
  double dStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_5 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,2,0);
  }
  else {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x40));
    _objc_initWeak(auStack_68,param_2);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105e7cf14;
    puStack_a0 = &UNK_1108efd48;
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_5);
    lStack_90 = param_5;
    dStack_78 = param_1 * 1000.0;
    uStack_70 = param_6;
    _objc_retain(param_7);
    lStack_88 = param_7;
    _objc_copyWeak(auStack_d0,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    dStack_c8 = param_1 * 1000.0;
    uStack_c0 = param_6;
    _objc_retain(param_7);
    func_0x00010bec6220(param_2);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_d0);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7cf14; end: 105e7d003;  */

void FUN_105e7cf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be69bc0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7d004; end: 105e7d16f; -[SCAdRetriableRequestManager _onJobSuccess:request:response:data:requestStartTimestamp:attemptCount:completion:] */

void FUN_105e7d004(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x18);
  }
  _objc_retain(uVar4);
  lVar1 = param_1;
  func_0x00010be3dd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar2 = lVar1;
  func_0x00010c261760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar1;
    func_0x00010c252440();
    _objc_release(lVar2);
    if ((int)lVar3 != 2) {
      lVar2 = lVar1;
      func_0x00010c261760();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      _objc_release(lVar2);
    }
  }
  (**(code **)(param_8 + 0x10))(param_8,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252ee0(param_5);
  func_0x00010c0b1d60(uVar4);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e7d170; end: 105e7d3bf; -[SCAdRetriableRequestManager _onJobError:request:response:error:requestStartTimestamp:attemptCount:completion:] */

void FUN_105e7d170(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252ee0(param_5);
  uVar4 = uVar2;
  func_0x00010c07f900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x18);
  }
  _objc_retain(uVar7);
  lVar3 = param_1;
  func_0x00010be3dd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if ((uVar4 & 1) == 0) {
    lVar6 = lVar3;
    func_0x00010bf9ffe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      lVar6 = lVar3;
      func_0x00010bf9ffe0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))();
      _objc_release(lVar6);
    }
    uVar7 = 2;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf90120();
    _objc_release(uVar4);
    if ((param_7 == 0) && ((uVar2 & 1) == 0)) {
      lVar6 = lVar3;
      func_0x00010c261760(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf9ffe0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec6140(param_1);
      _objc_release(lVar5);
      _objc_release(lVar6);
    }
    func_0x00010c1ecf40(lVar3);
    uVar7 = 1;
  }
  (**(code **)(param_8 + 0x10))(param_8,uVar7,param_6);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252ee0(param_5);
  func_0x00010c0b1d60(uVar7);
  _objc_release(lVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e7d3c0; end: 105e7d463; -[SCAdRetriableRequestManager _invokerWithKey:deleteKey:] */

void FUN_105e7d3c0(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c296f60(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      _os_unfair_lock_unlock(param_1 + 0x58);
    }
    else {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
      _os_unfair_lock_unlock(param_1 + 0x58);
      func_0x00010bdf9ba0(param_1,param_2,param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e7d464; end: 105e7d50b; -[SCAdRetriableRequestManager _updateInvokerWithKey:state:] */

void FUN_105e7d464(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be3dd80(param_1,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _os_unfair_lock_lock(param_1 + 0x58);
      func_0x00010c209fc0(lVar1,param_2,param_4);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68),param_2,lVar1,param_3);
      _os_unfair_lock_unlock(param_1 + 0x58);
      func_0x00010bed2b60(param_1,param_2,param_3,param_4);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e7d50c; end: 105e7d56b; -[SCAdRetriableRequestManager _deleteInvokerWithKey:] */

void FUN_105e7d50c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x58);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x58);
    func_0x00010bdf9ba0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e7d56c; end: 105e7d64f; -[SCAdRetriableRequestManager _deleteAdTrackRetriableMetadataWithKey:] */

void FUN_105e7d56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90140();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105e7d650;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_40 = param_3;
    uStack_38 = uVar2;
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e7d650; end: 105e7d65b;  */

void FUN_105e7d650(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    _objc_retain(lVar1);
    func_0x00010c0f8500(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105e7d65c; end: 105e7d74f; -[SCAdRetriableRequestManager _updateAdTrackRetriableMetadataWithKey:state:] */

void FUN_105e7d65c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90140();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105e7d750;
    puStack_60 = &UNK_1108a7688;
    _objc_retain(param_3);
    uStack_58 = param_3;
    uStack_50 = uVar2;
    uStack_48 = param_4;
    _objc_retain(uVar2);
    func_0x00010c0f88c0(uVar1,param_2,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e7d750; end: 105e7d793;  */

void FUN_105e7d750(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5488;
  _objc_alloc(PTR_PTR_1126c5488);
  func_0x00010c020c40();
  FUN_105e80eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e7d794; end: 105e7d79b; -[SCAdRetriableRequestManager performer] */

undefined8 FUN_105e7d794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e7d79c; end: 105e7d7cb; -[SCAdRetriableRequestManager setPerformer:] */

void FUN_105e7d79c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e7d7cc; end: 105e7d7d3; -[SCAdRetriableRequestManager jobTypeIdentifier] */

undefined8 FUN_105e7d7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105e7d7d4; end: 105e7d7db; -[SCAdRetriableRequestManager setJobTypeIdentifier:] */

void FUN_105e7d7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e7d7dc; end: 105e7d7e3; -[SCAdRetriableRequestManager keyToCallbackInvokerMapping] */

undefined8 FUN_105e7d7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105e7d7e4; end: 105e7d7eb; -[SCAdRetriableRequestManager setKeyToCallbackInvokerMapping:] */

void FUN_105e7d7e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e7d7ec; end: 105e7d88f; -[SCAdRetriableRequestManager .cxx_destruct] */

void FUN_105e7d7ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e7d890; end: 105e7daff; -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventNetworkStartWithRequest:attemptCount:] */

undefined *
FUN_105e7d890(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010bdc59a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = param_4;
    FUN_105e7db00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4dc0();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126b92b8;
    if ((int)uVar4 == 0) {
      puVar8 = puVar1;
      func_0x00010bef4240(puVar1);
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_105e8318c(param_1,puVar8,0 < param_5,uVar4,uVar3,uVar5);
    }
    else {
      func_0x00010bef4240(puVar1);
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c234980(param_1,puVar8);
    }
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b8f38;
    func_0x00010c0d8340(param_1,PTR_PTR_1126b8f38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    func_0x00010c000140();
    func_0x00010c0d9fc0(uVar4);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  return puVar8;
}



/* Entry: 105e7db00; end: 105e7db6f;  */

void FUN_105e7db00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010010fab4(param_1,PTR_DAT_1126a5258);
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010c134680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e7db70; end: 105e7dc3b; -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventNetworkEndWithRequest:success:statusCode:attemptCount:] */

void FUN_105e7db70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bdc59a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b8f38;
    func_0x00010c0d8320(PTR_PTR_1126b8f38,param_2,param_6,param_4,param_5,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    func_0x00010c000140();
    func_0x00010c0d9fc0(uVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7dc3c; end: 105e7dcf7; -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventDurableJobStartWithRequest:state:attemptCount:] */

void FUN_105e7dc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bdc59a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b8f38;
    func_0x00010bf8b120(PTR_PTR_1126b8f38,param_2,param_5,param_4,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    func_0x00010c000140();
    func_0x00010c0d9fc0(uVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7dcf8; end: 105e7ddab; -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventDurableJobSubmittedWithRequest:attemptCount:] */

void FUN_105e7dcf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bdc59a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b8f38;
    func_0x00010bf8b140(PTR_PTR_1126b8f38,param_2,param_4,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    func_0x00010c000140();
    func_0x00010c0d9fc0(uVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7ddac; end: 105e7df2f; -[SCRetriableRequestTrackFunnelEventTracker _adTrackCommonWithRequest:] */

void FUN_105e7ddac(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  FUN_105e7db00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c23f300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  if (((param_4 == 0) || (lVar3 = lVar1, func_0x00010c08fa60(), lVar3 == 0)) ||
     (lVar3 = lVar2, func_0x00010c08fa60(), lVar3 == 0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    puVar8 = PTR_PTR_1126b8e38;
    _objc_alloc(PTR_PTR_1126b8e38);
    lVar3 = param_4;
    func_0x00010bef2c20(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c278820(param_4);
    puVar6 = PTR_PTR_1126b8ca0;
    lVar5 = param_4;
    func_0x00010bef60a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6100(puVar6,param_3,lVar5);
    lVar7 = param_4;
    func_0x00010bef4240();
    func_0x00010bff1840(param_1 * 1000.0,puVar8,param_3,lVar1,0,0,lVar2,lVar3,lVar4,0,puVar6,lVar7,0
                        ,0,0,&PTR____CFConstantStringClassReference_110e2da78);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e7df30; end: 105e7df8f; -[SCRetriableRequestTrackFunnelEventTracker .cxx_destruct] */

void FUN_105e7df30(long param_1)

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



/* Entry: 105e7df90; end: 105e7e23b; -[SCRetriableRequestManagerV2 initWithCategory:jobScheduler:requestManager:adConfigProvider:adConfigProviderV2:grapheneRegistry:requestPreparer:lifecycleTracker:trackFunnelEventTracker:userAdIdProvider:] */

undefined8 *
FUN_105e7df90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ed860;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c5468;
    func_0x00010bf33660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    _objc_release(uVar2);
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
  return puVar1;
}



/* Entry: 105e7e23c; end: 105e7e58f; -[SCRetriableRequestManagerV2 processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_105e7e23c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_6 + 0x10))(param_6,2,puVar9);
  }
  else {
    puVar2 = PTR_PTR_1126bdbc0;
    func_0x00010c0e0260();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c5478;
    _objc_opt_class(PTR_PTR_1126c5478);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar9);
    puVar9 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR_PTR_1126bdbc0;
      func_0x00010c0e0260(PTR_PTR_1126bdbc0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2720c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126c5478;
      _objc_alloc();
      puVar5 = PTR_PTR_1126bdbc0;
      func_0x00010bf64c20(PTR_PTR_1126bdbc0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c086560(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c13f540(puVar4);
      puVar8 = puVar4;
      func_0x00010c231c80(puVar4);
      FUN_105e81280(puVar9,puVar5,puVar6,puVar7,0,puVar8);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    puVar2 = PTR_PTR_1126bdbc0;
    if (puVar9 == (undefined *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(puVar9 + 0x10);
    }
    _objc_retain(uVar10);
    func_0x00010c0e0260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar3 = puVar2;
    func_0x00010c2720c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf0dc20(param_5);
    func_0x00010c0b1d20(uVar10);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(puVar9);
    _objc_retain(param_5);
    _objc_retain(puVar3);
    _objc_retain(param_6);
    func_0x00010c109e60(param_1);
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 105e7e590; end: 105e7e603;  */

void FUN_105e7e590(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf0dc20(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be0bbe0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105e7e600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,0);
  return;
}



/* Entry: 105e7e604; end: 105e7e623; -[SCRetriableRequestManagerV2 prepareRequest:callback:] */

void FUN_105e7e604(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c109e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x30),PTR_s_prepareRequest_callback__1126201b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105e7e620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4,param_3,1);
  return;
}



/* Entry: 105e7e624; end: 105e7e8fb; -[SCRetriableRequestManagerV2 _executeJob:attemptCount:request:onComplete:] */

void FUN_105e7e624(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_6;
  func_0x00010c2721c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3460();
  if (lVar2 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_7 + 0x10))(param_7,2,puVar5);
    _objc_release(puVar5);
  }
  else {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010be550a0(param_2);
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bf8f160();
    if (iVar1 != 0) {
      func_0x00010be8f2c0(param_1,param_2);
    }
    func_0x00010c0b1d80(*(undefined8 *)(param_2 + 0x40));
    _objc_initWeak(auStack_80,param_2);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105e7e8fc;
    puStack_b8 = &UNK_1108efdd8;
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(param_4);
    uStack_b0 = param_4;
    _objc_retain(param_6);
    lStack_a8 = param_6;
    uStack_90 = param_1;
    uStack_88 = param_5;
    _objc_retain(param_7);
    lStack_a0 = param_7;
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_retain(param_4);
    _objc_retain(param_6);
    uStack_e0 = param_1;
    uStack_d8 = param_5;
    _objc_retain(param_7);
    func_0x00010c25f660(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_e8);
    _objc_release(lStack_a0);
    _objc_release(lStack_a8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7e8fc; end: 105e7ea43;  */

void FUN_105e7e8fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be69ba0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7ea44; end: 105e7ebd3; -[SCRetriableRequestManagerV2 _onJobSuccess:request:networkRequest:response:data:requestStartTimestamp:attemptCount:completion:] */

void FUN_105e7ea44(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_2 + 0x50);
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0x18);
  }
  _objc_retain(uVar2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar1 == 0) {
    func_0x00010be561c0(param_2);
  }
  else {
    func_0x00010c1ecf40(lVar1);
  }
  func_0x00010be55080(param_2);
  func_0x00010be57bc0(param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c252ee0(param_7);
  func_0x00010c0b1d60(uVar2);
  func_0x00010c0deaa0(param_5);
  func_0x00010be8f2e0(param_1,param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  (**(code **)(param_10 + 0x10))(param_10,0,0);
  _objc_release(param_10);
  _objc_release(lVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105e7ebd4; end: 105e7ebff; -[SCRetriableRequestManagerV2 _jobProcessResultToString:] */

undefined ** FUN_105e7ebd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2daf8;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2db18;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 105e7ec00; end: 105e7ed83; -[SCRetriableRequestManagerV2 _logRequest:result:] */

void FUN_105e7ec00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be46400(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010c13f220(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_3;
  func_0x00010c0deaa0(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24c18,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  lVar7 = param_1;
  func_0x00010c085940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dcef38,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar7);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7ed84; end: 105e7f0b3; -[SCRetriableRequestManagerV2 _onJobError:request:networkRequest:response:error:requestStartTimestamp:attemptCount:completion:] */

void FUN_105e7ed84(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  lVar6 = *(long *)(param_2 + 0x50);
  if (param_4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_4 + 0x18);
  }
  _objc_retain(uVar8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar1 = param_2;
  func_0x00010c232c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  if (lVar6 == 0) {
    func_0x00010be561c0(param_2);
  }
  else {
    func_0x00010c1ecf40(lVar6);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c252ee0(param_7);
  func_0x00010c0b1d60(uVar8);
  func_0x00010c0deaa0(param_5);
  func_0x00010be8f2e0(param_1,param_2);
  if ((int)lVar2 == 0) {
    func_0x00010be57bc0(param_2);
    func_0x00010be53080(param_2);
    (**(code **)(param_10 + 0x10))(param_10,2,param_8);
  }
  else {
    func_0x00010be57bc0(param_2);
    func_0x00010c0deaa0(param_5);
    func_0x00010c1cf8e0(param_5);
    uVar8 = param_5;
    func_0x00010c272000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c5490;
    FUN_105e815d8(PTR_PTR_1126c5490,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bdbc0;
    func_0x00010bf64c20(PTR_PTR_1126bdbc0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x000105e817a0(puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105e81764();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(param_10);
    _objc_retain(param_8);
    _objc_retain(param_5);
    _objc_retain(uVar7);
    func_0x00010bec6120(param_2);
    _objc_release(param_5);
    _objc_release(param_8);
    _objc_release(param_10);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar8);
  }
  _objc_release(lVar6);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7f0b4; end: 105e7f0eb;  */

void FUN_105e7f0b4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0b1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logTrackFunnelEventDurableJobSub_11260a160,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 105e7f0ec; end: 105e7f2b3; -[SCRetriableRequestManagerV2 _logFatalFailure:response:] */

void FUN_105e7f0ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c13f0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c085940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcef38,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_4;
  func_0x00010c252ee0(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110db0dd8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_3;
  func_0x00010c0deaa0(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110f24c18,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105e7f2b4; end: 105e7f37f; -[SCRetriableRequestManagerV2 _logJobTiming:] */

void FUN_105e7f2b4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_4 + 0x28);
  }
  _objc_retain(lVar2);
  _objc_release(lVar2);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126b8d98;
    func_0x00010c13f180(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    if (param_4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_4 + 0x28);
    }
    dVar4 = param_1;
    _objc_retain(uVar3);
    func_0x00010bf885a0(uVar3);
    _objc_release(uVar3);
    func_0x00010befbfe0(*(undefined8 *)(param_2 + 0x18),param_3,puVar1,(long)(param_1 - dVar4));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e7f380; end: 105e7f70b; -[SCRetriableRequestManagerV2 _reportAdLifecycleTrackAttemptEventWithRetriableRequest:requestStartTimestamp:] */

void FUN_105e7f380(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  uVar17 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a5258);
  lVar1 = param_4;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b9438;
  if (lVar3 != 0) {
    lVar2 = lVar1;
    func_0x00010c134680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar4;
    func_0x00010c06a480();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar8;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar7 = puVar8;
    func_0x00010bfdd8a0();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar16 = (undefined *)0x0;
    if ((int)puVar7 != 0) {
      puVar7 = puVar8;
      func_0x00010c278820(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar16 = puVar5;
    }
    _objc_release(puVar8);
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4dc0();
    lVar11 = lVar1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1;
    func_0x00010c134680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bef60a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1;
    func_0x00010c134680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240();
    func_0x00010c0deaa0(param_4);
    func_0x00010c0a06c0(uVar17,param_1,uVar9);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(0);
    _objc_release(puVar16);
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7f70c; end: 105e7f967; -[SCRetriableRequestManagerV2 _reportAdLifecycleTrackEventWithRetriableRequest:withAttempt:success:requestStartTimestamp:retroJob:] */

void FUN_105e7f70c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar13 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar4 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a5258);
  lVar1 = param_4;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  lVar4 = lVar1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x20);
    func_0x00010c23e1c0();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if ((param_5 < 2) && ((uVar3 & 1) != 0)) goto LAB_105e7f928;
    lVar4 = *(long *)(param_2 + 0x38);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4dc0();
    lVar7 = lVar1;
    uVar14 = uVar13;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bef60a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c134680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240();
    if (param_7 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(param_7 + 0x28);
    }
    _objc_retain(uVar12);
    func_0x00010bf885a0(uVar12);
    func_0x00010c0a0700(uVar13,param_1,uVar14,lVar4);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
LAB_105e7f928:
  _objc_release(lVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e7f968; end: 105e7fa63; -[SCRetriableRequestManagerV2 deleteJobWithJobConfig:jobData:jobDeletionReason:] */

void FUN_105e7f968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e7fa64; end: 105e7fac3;  */

void FUN_105e7fa64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c085840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69b20(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7fac4; end: 105e7fb27; -[SCRetriableRequestManagerV2 _onJobDeleted:jobDeletionReason:] */

void FUN_105e7fac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  _objc_retain(param_3);
  func_0x00010be55020(param_1,param_2,param_4);
  if (param_4 < 3) {
    func_0x00010be69b00(param_1,param_2,param_3,4U >> (ulong)((uint)param_4 & 0x1f) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e7fb28; end: 105e7fbab; -[SCRetriableRequestManagerV2 _onJobCompleted:success:] */

void FUN_105e7fb28(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  }
  if (param_4 == 0) {
    func_0x00010c06ac80(uVar1);
  }
  else {
    func_0x00010c06ade0();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e7fbac; end: 105e7fc9b; -[SCRetriableRequestManagerV2 _logJobDeletedWithReason:] */

void FUN_105e7fbac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c13f120(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c085940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcef38,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  if (param_3 - 1U < 3) {
    ppuVar4 = (undefined **)(&PTR_PTR_1108efeb8)[param_3 - 1U];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e2db38;
  }
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf558,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e7fc9c; end: 105e7fe23; -[SCRetriableRequestManagerV2 submitRequest:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_105e7fc9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e7fe24; end: 105e7fe87;  */

void FUN_105e7fe24(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5498;
  _objc_alloc(PTR_PTR_1126c5498);
  func_0x00010c04f500();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6480();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e7fe88; end: 105e80097; -[SCRetriableRequestManagerV2 _submitRequest:callbackInvoker:] */

void FUN_105e7fe88(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c13f540(param_3);
  lVar3 = param_3;
  func_0x00010c231c80(param_3);
  lVar4 = param_3;
  func_0x00010c272000(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c5478;
  _objc_alloc();
  puVar6 = PTR_PTR_1126bdbc0;
  func_0x00010bf64c20(PTR_PTR_1126bdbc0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0df720(puVar7);
  _objc_retainAutoreleasedReturnValue();
  FUN_105e81280(puVar5,puVar6,lVar1,lVar2 + -1,puVar7,lVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  if (puVar5 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(puVar5 + 0x18);
  }
  _objc_retain(uVar9);
  func_0x00010c1d0640(uVar8);
  _objc_release(uVar9);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010be0bbe0(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


