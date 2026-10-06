/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060eb23c; end: 1060eb2bf; -[BTConfiguration collectFraudData] */

undefined8 FUN_1060eb23c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c081960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1060eb2c0; end: 1060eb353; -[BTThreeDSecureInfo initWithJSON:] */

undefined1 * FUN_1060eb2c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efa58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126c7fb8;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar3;
    }
    else {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = param_3;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060eb354; end: 1060eb3bf; -[BTThreeDSecureInfo acsTransactionId] */

void FUN_1060eb354(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb3c0; end: 1060eb44b; -[BTThreeDSecureInfo authenticationTransactionStatus] */

void FUN_1060eb3c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060eb44c; end: 1060eb4d7; -[BTThreeDSecureInfo authenticationTransactionStatusReason] */

void FUN_1060eb44c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060eb4d8; end: 1060eb543; -[BTThreeDSecureInfo cavv] */

void FUN_1060eb4d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb544; end: 1060eb5af; -[BTThreeDSecureInfo dsTransactionId] */

void FUN_1060eb544(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb5b0; end: 1060eb61b; -[BTThreeDSecureInfo eciFlag] */

void FUN_1060eb5b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb61c; end: 1060eb687; -[BTThreeDSecureInfo enrolled] */

void FUN_1060eb61c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb688; end: 1060eb6eb; -[BTThreeDSecureInfo liabilityShifted] */

undefined8 FUN_1060eb688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c081960();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1060eb6ec; end: 1060eb74f; -[BTThreeDSecureInfo liabilityShiftPossible] */

undefined8 FUN_1060eb6ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c081960();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1060eb750; end: 1060eb7db; -[BTThreeDSecureInfo lookupTransactionStatus] */

void FUN_1060eb750(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060eb7dc; end: 1060eb867; -[BTThreeDSecureInfo lookupTransactionStatusReason] */

void FUN_1060eb7dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060eb868; end: 1060eb8d3; -[BTThreeDSecureInfo paresStatus] */

void FUN_1060eb868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb8d4; end: 1060eb93f; -[BTThreeDSecureInfo status] */

void FUN_1060eb8d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb940; end: 1060eb9ab; -[BTThreeDSecureInfo threeDSecureServerTransactionId] */

void FUN_1060eb940(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eb9ac; end: 1060eba17; -[BTThreeDSecureInfo threeDSecureVersion] */

void FUN_1060eb9ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060eba18; end: 1060ebad3; -[BTThreeDSecureInfo wasVerified] */

uint FUN_1060eba18(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = param_1;
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c072200();
  if ((uVar3 & 1) == 0) {
    func_0x00010c26d500(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c072200();
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1060ebad4; end: 1060ebb3f; -[BTThreeDSecureInfo xid] */

void FUN_1060ebad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c26d500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060ebb40; end: 1060ebb47; -[BTThreeDSecureInfo errorMessage] */

undefined8 FUN_1060ebb40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060ebb48; end: 1060ebb4f; -[BTThreeDSecureInfo setErrorMessage:] */

void FUN_1060ebb48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060ebb50; end: 1060ebb57; -[BTThreeDSecureInfo threeDSecureJSON] */

undefined8 FUN_1060ebb50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060ebb58; end: 1060ebb87; -[BTThreeDSecureInfo setThreeDSecureJSON:] */

void FUN_1060ebb58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060ebb88; end: 1060ebbb7; -[BTThreeDSecureInfo .cxx_destruct] */

void FUN_1060ebb88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060ebbb8; end: 1060ebbbf; -[BTAPIClient initWithAuthorization:] */

void FUN_1060ebbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAuthorization_sendAnalyt_1125db050,param_3,1);
  return;
}



/* Entry: 1060ebbc0; end: 1060ebf17; -[BTAPIClient initWithAuthorization:sendAnalyticsEvent:] */

/* WARNING: Removing unreachable block (ram,0x0001060ebd0c) */

undefined8 *** FUN_1060ebbc0(undefined8 ***param_1,undefined8 param_2,undefined8 **param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  if (((ulong)ppuVar2 & 1) == 0) {
    puStack_58 = PTR_PTR_1126c7fc0;
    func_0x00010c22bbe0(PTR_PTR_1126c7fc0);
    _objc_retainAutoreleasedReturnValue();
LAB_1060ebcbc:
    func_0x00010bf98800();
    pppuVar1 = param_1;
LAB_1060ebcc0:
    _objc_release(puStack_58);
    pppuVar6 = (undefined8 ***)0x0;
    goto LAB_1060ebe80;
  }
  puStack_48 = PTR_PTR_1126efa60;
  pppuVar1 = &ppuStack_50;
  ppuStack_50 = param_1;
  _objc_msgSendSuper2(pppuVar1,PTR_s_init_1125d9248);
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar6 = pppuVar1;
    _objc_opt_class();
    func_0x00010bf11040();
    if (pppuVar6 == (undefined8 ***)0x1) {
      ppuVar2 = (undefined8 **)PTR_PTR_1126be448;
      _objc_alloc();
      puStack_58 = (undefined *)0x0;
      func_0x00010bfff220();
      puVar5 = (undefined *)0x0;
      _objc_retain(0);
      ppuVar4 = pppuVar1[3];
      pppuVar1[3] = ppuVar2;
      _objc_release(ppuVar4);
      if (pppuVar1[3] == (undefined8 **)0x0) {
        puVar5 = PTR_PTR_1126c7fc0;
        func_0x00010c22bbe0(PTR_PTR_1126c7fc0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf98800();
        _objc_release(puVar5);
        goto LAB_1060ebcc0;
      }
      ppuVar2 = (undefined8 **)PTR_PTR_1126c7fc8;
      _objc_alloc();
      pppuVar6 = pppuVar1;
      func_0x00010bf3d5c0(pppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfff200();
      ppuVar4 = pppuVar1[5];
      pppuVar1[5] = ppuVar2;
      _objc_release(ppuVar4);
LAB_1060ebd9c:
      _objc_release(pppuVar6);
      _objc_release(puVar5);
    }
    else if (pppuVar6 == (undefined8 ***)0x0) {
      puVar5 = PTR_PTR_1126be450;
      func_0x00010bf162a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        puStack_58 = PTR_PTR_1126c7fc0;
        func_0x00010c22bbe0(PTR_PTR_1126c7fc0);
        _objc_retainAutoreleasedReturnValue();
        param_1 = pppuVar1;
        goto LAB_1060ebcbc;
      }
      _objc_retain(param_3);
      ppuVar2 = pppuVar1[2];
      pppuVar1[2] = param_3;
      _objc_release(ppuVar2);
      ppuVar2 = (undefined8 **)PTR_PTR_1126c7fc8;
      _objc_alloc();
      func_0x00010bff7100();
      pppuVar6 = (undefined8 ***)pppuVar1[5];
      pppuVar1[5] = ppuVar2;
      goto LAB_1060ebd9c;
    }
    ppuVar2 = (undefined8 **)PTR_PTR_1126c7fd0;
    _objc_alloc_init();
    ppuVar4 = pppuVar1[8];
    pppuVar1[8] = ppuVar2;
    _objc_release(ppuVar4);
    ppuVar2 = (undefined8 **)&UNK_10f366fd2;
    _dispatch_queue_create(&UNK_10f366fd2,0);
    ppuVar4 = pppuVar1[1];
    pppuVar1[1] = ppuVar2;
    _objc_release(ppuVar4);
    puVar5 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
    func_0x00010bf6a380(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
    _objc_retainAutoreleasedReturnValue();
    if (lRam00000001136c2e90 != -1) {
      func_0x00010002a2fc(0x1136c2e90,&PTR___NSConcreteGlobalBlock_11090e510);
    }
    func_0x00010c21b040(puVar5);
    func_0x00010c1ebb00(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
    func_0x00010c1606a0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd860(pppuVar1[5]);
    _objc_release(puVar3);
    func_0x00010bfa9140(pppuVar1);
    _objc_release(puVar5);
  }
  _objc_retain(pppuVar1);
  pppuVar6 = pppuVar1;
LAB_1060ebe80:
  _objc_release(param_3);
  _objc_release(pppuVar1);
  return pppuVar6;
}



/* Entry: 1060ebf18; end: 1060ebf53;  */

void FUN_1060ebf18(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURLCache_1126c7fe0;
  _objc_alloc();
  func_0x00010c02b0a0();
  uVar1 = puRam00000001136c2e88;
  puRam00000001136c2e88 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060ebf54; end: 1060ebf57;  */

void FUN_1060ebf54(void)

{
  return;
}



/* Entry: 1060ebf58; end: 1060ebfff; +[BTAPIClient authorizationTypeForAuthorization:] */

bool FUN_1060ebf58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  _objc_retain(param_3);
  func_0x00010c127e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3efb8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08fa60(param_3);
  puVar3 = puVar1;
  func_0x00010bfb1800(puVar1,param_2,param_3,0,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar3 == (undefined *)0x0;
}



/* Entry: 1060ec000; end: 1060ec15b; -[BTAPIClient copyWithSource:integration:] */

long FUN_1060ec000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  lVar3 = param_1;
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c273360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      return 0;
    }
    _objc_opt_class();
    _objc_alloc();
    func_0x00010c273360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5a20(lVar2,param_2,lVar3,0);
  }
  else {
    _objc_opt_class();
    _objc_alloc();
    func_0x00010bf3d5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0edb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5a20(lVar2,param_2,lVar1,0);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  if (lVar2 != 0) {
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0d3c80();
    _objc_release(param_1);
    func_0x00010c206c40(lVar1,param_2,param_3);
    func_0x00010c1add60(lVar1,param_2,param_4);
    lVar3 = lVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    *(long *)(lVar2 + 0x40) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 1060ec15c; end: 1060ec48f; +[BTAPIClient baseURLFromTokenizationKey:] */

void FUN_1060ec15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_3);
  puVar2 = puVar1;
  func_0x00010c0c1b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x1) {
    puVar9 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c0df1c0();
    _objc_release(puVar9);
    if (puVar3 == (undefined *)0x3) {
      puVar9 = puVar2;
      func_0x00010c0dfd40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2c0();
      uVar4 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar2;
      func_0x00010c0dfd40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2c0();
      uVar5 = param_3;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      _objc_alloc_init();
      puVar9 = PTR_PTR_1126be450;
      func_0x00010c1504c0(PTR_PTR_1126be450);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f6900(puVar3);
      _objc_release(puVar9);
      puVar6 = PTR_PTR_1126be450;
      func_0x00010bfe4560();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9200(puVar3);
      _objc_release(puVar9);
      puVar9 = puVar7;
      func_0x00010bf529e0();
      if ((undefined *)0x1 < puVar9) {
        puVar8 = puVar7;
        func_0x00010c0dfd40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ded80(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      puVar9 = PTR_PTR_1126be450;
      func_0x00010bf3cae0(PTR_PTR_1126be450);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820(puVar3);
      _objc_release(puVar9);
      puVar8 = puVar3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)0x0;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar3;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar8);
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar9 = puVar3;
          func_0x00010bdc2b80(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_1060ec454;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_1060ec454:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1060ec490; end: 1060ec4eb; +[BTAPIClient schemeForEnvironmentString:] */

undefined ** FUN_1060ec490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8d58;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc8d78;
  }
  return ppuVar1;
}



/* Entry: 1060ec4ec; end: 1060ec5d7; +[BTAPIClient hostForEnvironmentString:] */

undefined ** FUN_1060ec4ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3f098;
      if ((int)uVar2 == 0) {
        ppuVar3 = (undefined **)0x0;
      }
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3f078;
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e3f038;
  }
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 1060ec5d8; end: 1060ec76f; +[BTAPIClient graphQLURLForEnvironment:] */

void FUN_1060ec5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126be450;
  func_0x00010c1504c0(PTR_PTR_1126be450,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6900(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126be450;
  func_0x00010bfcdd80(PTR_PTR_1126be450,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf44740(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar3;
    func_0x00010c0dfd40(puVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9200(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf529e0();
    if ((undefined *)0x1 < puVar6) {
      puVar4 = puVar3;
      func_0x00010c0dfd40(puVar3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar5 = puVar4;
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ded80(puVar1,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar4);
    }
    func_0x00010c1d9820(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3f0b8);
    puVar6 = puVar1;
    func_0x00010bdc2b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1060ec770; end: 1060ec827; +[BTAPIClient graphQLHostForEnvironmentString:] */

undefined ** FUN_1060ec770(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e3f0f8;
    if ((int)uVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3f118;
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e3f0d8;
  }
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 1060ec828; end: 1060ec897; +[BTAPIClient clientApiBasePathForMerchantID:] */

void FUN_1060ec828(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e3f138);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ec898; end: 1060ec8a3; -[BTAPIClient fetchPaymentMethodNonces:] */

void FUN_1060ec898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa9290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchPaymentMethodNonces_complet_1125c7e48,0,param_3);
  return;
}



/* Entry: 1060ec8a4; end: 1060ecad7; -[BTAPIClient fetchPaymentMethodNonces:completion:] */

void FUN_1060ec8a4(undefined *param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar1 == (undefined *)0x0) {
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uStack_60 = *(undefined8 *)PTR__NSLocalizedRecoverySuggestionErrorKey_110345580;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e3f158;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e3f178;
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x2;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar1 = (undefined *)0x0;
    if (param_4 != 0) {
      param_2 = 0;
      (**(code **)(param_4 + 0x10))(param_4,0,ppuVar4);
    }
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad378;
    if (param_3 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dad398;
    }
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e3f1b8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110ddfed8;
    ppuStack_78 = ppuVar4;
    _objc_retain(ppuVar4);
    puVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1060ecad8;
    puStack_98 = &UNK_11090e570;
    _objc_retain(param_4);
    puVar6 = puVar3;
    lStack_90 = param_4;
    func_0x00010bdc1540(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lStack_90);
  }
  _objc_release(ppuVar4);
  lVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1060ecad8;
  puStack_e0 = puVar1;
  puStack_d8 = param_1;
  ppuStack_d0 = ppuVar4;
  lStack_c8 = param_4;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(puVar6);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1060ecba4;
  puStack_100 = &UNK_11084a9e8;
  uVar7 = *(undefined8 *)(lVar5 + 0x20);
  _objc_retain(uVar7);
  puStack_f8 = puVar6;
  uStack_f0 = param_2;
  uStack_e8 = uVar7;
  _objc_retain(param_2);
  _objc_retain(puVar6);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_118);
  _objc_release(uStack_f0);
  _objc_release(puStack_f8);
  _objc_release(uStack_e8);
  _objc_release(param_2);
  _objc_release(puVar6);
  return;
}



/* Entry: 1060ecad8; end: 1060ecba3;  */

void FUN_1060ecad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1060ecba4;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = param_4;
  uStack_40 = param_2;
  uStack_38 = uVar1;
  _objc_retain(param_2);
  _objc_retain(param_4);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_4);
  return;
}



/* Entry: 1060ecba4; end: 1060ece13;  */

void FUN_1060ecba4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x30);
  if (puVar1 != (undefined *)0x0) {
    param_3 = *(long *)(param_1 + 0x20);
    if (param_3 != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x0001060ecc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(puVar1 + 0x10))(puVar1,0);
        return;
      }
      goto LAB_1060ece10;
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    unaff_x22 = *(undefined ***)(param_1 + 0x28);
    puStack_148 = param_1;
    puStack_138 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = unaff_x22;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    ppuStack_140 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_120;
      unaff_x21 = &PTR_PTR_1126c7000;
      unaff_x22 = &PTR____CFConstantStringClassReference_110dad058;
      do {
        unaff_x20 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(ppuStack_140);
          }
          puVar1 = PTR_PTR_1126c7fb8;
          _objc_alloc(PTR_PTR_1126c7fb8);
          func_0x00010c060400();
          puVar3 = PTR_PTR_1126c7f88;
          func_0x00010c22bd80();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c0e00e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf0a9e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c0f4180();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (puVar6 != (undefined *)0x0) {
            func_0x00010befa120(puStack_138);
          }
          _objc_release(puVar6);
          _objc_release(puVar1);
          unaff_x20 = (undefined **)((long)unaff_x20 + 1);
        } while (ppuVar2 != unaff_x20);
        ppuVar2 = ppuStack_140;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuStack_140);
    param_1 = puStack_138;
    param_3 = 0;
    (**(code **)(*(long *)(puStack_148 + 0x30) + 0x10))(*(long *)(puStack_148 + 0x30),puStack_138);
    puVar1 = param_1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_1060ece10:
  ___stack_chk_fail();
  pcStack_158 = FUN_1060ece14;
  ppuStack_180 = unaff_x22;
  ppuStack_178 = unaff_x21;
  ppuStack_170 = unaff_x20;
  puStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar3 = puVar1;
  func_0x00010bf468c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1060ecebc;
  puStack_198 = &UNK_11084aaa8;
  puStack_190 = puVar1;
  lStack_188 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(puVar3,&puStack_1b0);
  _objc_release(puVar3);
  _objc_release(lStack_188);
  _objc_release(param_3);
  return;
}



/* Entry: 1060ece14; end: 1060ecebb; -[BTAPIClient fetchOrReturnRemoteConfiguration:] */

void FUN_1060ece14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf468c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1060ecebc;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1060ecebc; end: 1060ed0ef;  */

void FUN_1060ecebc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1060ed0f0;
  uStack_70 = 0x1060ed100;
  uStack_68 = 0;
  uVar2 = 0;
  _dispatch_semaphore_create();
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1060ed0f0;
  uStack_a0 = 0x1060ed100;
  uStack_98 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e3f1f8;
  }
  else {
    ppuVar4 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bf3d5c0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf46360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46820(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1060ed108;
  puStack_e8 = &UNK_11090e5a0;
  uStack_e0 = *(undefined8 *)(param_1 + 0x20);
  puStack_d0 = &uStack_90;
  puStack_c8 = &uStack_c0;
  _objc_retain(uVar2);
  uStack_d8 = uVar2;
  func_0x00010bdc1540(uVar7);
  _objc_release(uVar7);
  _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1060ed6b8;
  puStack_120 = &UNK_110849cb0;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uStack_118 = uVar7;
  puStack_110 = &uStack_c0;
  puStack_108 = &uStack_90;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_138);
  _objc_release(uStack_118);
  _objc_release(uStack_d8);
  _objc_release(ppuVar6);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1060ed0f0; end: 1060ed107;  */

void FUN_1060ed0f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1060ed108; end: 1060ed6b7;  */

void FUN_1060ed108(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010c252ee0();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_3 == 200) {
      puVar6 = PTR_PTR_1126c7ff0;
      _objc_alloc();
      func_0x00010c020680();
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar10 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined **)(lVar11 + 0x28) = puVar6;
      _objc_release(uVar10);
      lVar11 = *(long *)(param_1 + 0x20);
      func_0x00010bf20e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 == 0) {
        uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        func_0x00010c085d00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf0aa60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar10);
        _objc_release(uVar2);
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        func_0x00010c085d00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bf0a9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar10);
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126c7ff8;
        _objc_alloc(PTR_PTR_1126c7ff8);
        func_0x00010bff7060();
        func_0x00010c173aa0(*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar6);
        _objc_release(uVar2);
        _objc_release(uVar5);
      }
      lVar11 = *(long *)(param_1 + 0x20);
      func_0x00010bfe4b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 == 0) {
        uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        func_0x00010c085d00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x00010bf0aa60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar5);
        lVar11 = *(long *)(param_1 + 0x20);
        func_0x00010bf3d5c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 == 0) {
          lVar11 = *(long *)(param_1 + 0x20);
          func_0x00010c273360();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar11 != 0) {
            puVar6 = PTR_PTR_1126c7fc8;
            _objc_alloc(PTR_PTR_1126c7fc8);
            puVar1 = *(undefined **)(param_1 + 0x20);
            func_0x00010c273360(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff7100(puVar6);
            func_0x00010c1a9500(*(undefined8 *)(param_1 + 0x20));
            goto LAB_1060ed4c4;
          }
        }
        else {
          puVar8 = PTR_PTR_1126c7fc8;
          _objc_alloc(PTR_PTR_1126c7fc8);
          puVar1 = *(undefined **)(param_1 + 0x20);
          func_0x00010bf3d5c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010bf10f00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff7080(puVar8);
          func_0x00010c1a9500(*(undefined8 *)(param_1 + 0x20));
          _objc_release(puVar8);
LAB_1060ed4c4:
          _objc_release(puVar6);
          _objc_release(puVar1);
        }
        _objc_release(uVar3);
      }
      lVar11 = *(long *)(param_1 + 0x20);
      func_0x00010bfcdd60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar1 = PTR_PTR_1126be450;
      if (lVar11 != 0) goto LAB_1060ed668;
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010c085d00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcdde0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(uVar5);
      lVar11 = *(long *)(param_1 + 0x20);
      func_0x00010bf3d5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 == 0) {
        lVar11 = *(long *)(param_1 + 0x20);
        func_0x00010c273360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 == 0) goto LAB_1060ed664;
        puVar6 = PTR_PTR_1126c8000;
        _objc_alloc(PTR_PTR_1126c8000);
        puVar8 = *(undefined **)(param_1 + 0x20);
        func_0x00010c273360(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff7100(puVar6);
        func_0x00010c1a42a0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        puVar7 = PTR_PTR_1126c8000;
        _objc_alloc(PTR_PTR_1126c8000);
        puVar8 = *(undefined **)(param_1 + 0x20);
        func_0x00010bf3d5c0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar8;
        func_0x00010bf10f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff7080(puVar7);
        func_0x00010c1a42a0(*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      _objc_release(puVar8);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      puVar1 = *(undefined **)(lVar11 + 0x28);
      *(undefined **)(lVar11 + 0x28) = puVar6;
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_4);
    puVar1 = *(undefined **)(lVar11 + 0x28);
    *(long *)(lVar11 + 0x28) = param_4;
  }
LAB_1060ed664:
  _objc_release(puVar1);
LAB_1060ed668:
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001060ed6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))
              (*(long *)(param_2 + 0x20),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28));
    return;
  }
  return;
}



/* Entry: 1060ed6b8; end: 1060ed6db;  */

void FUN_1060ed6b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001060ed6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 1060ed6dc; end: 1060ed763; -[BTAPIClient metaParameters] */

void FUN_1060ed6dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060ed764; end: 1060ed7a7; -[BTAPIClient graphQLMetadata] */

void FUN_1060ed764(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060ed7a8; end: 1060ed88b; -[BTAPIClient metaParametersWithParameters:forHTTPType:] */

void FUN_1060ed7a8(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    _objc_retain(param_3);
    puVar2 = param_3;
    goto LAB_1060ed870;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c0cc000(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e3e898;
LAB_1060ed848:
    func_0x00010c1d0640(puVar1,param_2,param_1,ppuVar3);
    _objc_release(param_1);
  }
  else if (param_4 == 2) {
    func_0x00010bfcdda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e3f2d8;
    goto LAB_1060ed848;
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
LAB_1060ed870:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ed88c; end: 1060ed897; -[BTAPIClient GET:parameters:completion:] */

void FUN_1060ed88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_GET_parameters_httpType_completi_11254def8,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1060ed898; end: 1060ed8a3; -[BTAPIClient POST:parameters:completion:] */

void FUN_1060ed898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_POST_parameters_httpType_complet_11254e130,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1060ed8a4; end: 1060ed98b; -[BTAPIClient GET:parameters:httpType:completion:] */

void FUN_1060ed8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1060ed98c;
  puStack_70 = &UNK_11090e5d0;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bfa9140(param_1,param_2,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 1060ed98c; end: 1060ed9f3;  */

void FUN_1060ed98c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001060ed9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,param_3);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4bc0(uVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060ed9f4; end: 1060edadb; -[BTAPIClient POST:parameters:httpType:completion:] */

void FUN_1060ed9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1060edadc;
  puStack_70 = &UNK_11090e5d0;
  uStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010bfa9140(param_1,param_2,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 1060edadc; end: 1060edb6f;  */

void FUN_1060edadc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001060edb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,param_3);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cc020(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1e20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060edb70; end: 1060edbbb; -[BTAPIClient httpForType:] */

void FUN_1060edb70(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
    func_0x00010bfcdd60();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010bf20e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe4b40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060edbbc; end: 1060edbd3; -[BTAPIClient init] */

undefined8 FUN_1060edbbc(void)

{
  _objc_release();
  return 0;
}



/* Entry: 1060edbd4; end: 1060eddbb; -[BTAPIClient dealloc] */

void FUN_1060edbd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010bfe4b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfe4b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010bfe4b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfafc60();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  lVar1 = param_1;
  func_0x00010bf20e20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf20e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010bf20e20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfafc60();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  lVar1 = param_1;
  func_0x00010bfcdd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfcdd60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010bfcdd60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfafc60();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  puStack_38 = PTR_PTR_1126efa60;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1060eddbc; end: 1060eddc3; -[BTAPIClient configurationQueue] */

undefined8 FUN_1060eddbc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060eddc4; end: 1060eddf3; -[BTAPIClient setConfigurationQueue:] */

void FUN_1060eddc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060eddf4; end: 1060eddfb; -[BTAPIClient tokenizationKey] */

undefined8 FUN_1060eddf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060eddfc; end: 1060ede03; -[BTAPIClient setTokenizationKey:] */

void FUN_1060eddfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060ede04; end: 1060ede0b; -[BTAPIClient clientToken] */

undefined8 FUN_1060ede04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060ede0c; end: 1060ede3b; -[BTAPIClient setClientToken:] */

void FUN_1060ede0c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060ede3c; end: 1060ede43; -[BTAPIClient http] */

undefined8 FUN_1060ede3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060ede44; end: 1060ede73; -[BTAPIClient setHttp:] */

void FUN_1060ede44(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060ede74; end: 1060ede7b; -[BTAPIClient configurationHTTP] */

undefined8 FUN_1060ede74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060ede7c; end: 1060edeab; -[BTAPIClient setConfigurationHTTP:] */

void FUN_1060ede7c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060edeac; end: 1060edeb3; -[BTAPIClient braintreeAPI] */

undefined8 FUN_1060edeac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060edeb4; end: 1060edee3; -[BTAPIClient setBraintreeAPI:] */

void FUN_1060edeb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060edee4; end: 1060edeeb; -[BTAPIClient graphQL] */

undefined8 FUN_1060edee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060edeec; end: 1060edf1b; -[BTAPIClient setGraphQL:] */

void FUN_1060edeec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060edf1c; end: 1060edf23; -[BTAPIClient metadata] */

undefined8 FUN_1060edf1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060edf24; end: 1060edf9b; -[BTAPIClient .cxx_destruct] */

void FUN_1060edf24(long param_1)

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



/* Entry: 1060edf9c; end: 1060ee0fb; -[BTAPIHTTP initWithBaseURL:accessToken:] */

undefined1 *
FUN_1060edf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126efa68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithBaseURL__1125db5d8,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160dc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
    func_0x00010bf98460(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf697c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4ee0(puVar2);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x00010c1cafa0();
    func_0x00010c1c3080(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
    func_0x00010c1606c0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd860(puVar1);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c8008;
    func_0x00010c27cc00(PTR_PTR_1126c8008);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dbc20(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1060ee0fc; end: 1060ee26f; -[BTAPIHTTP defaultHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1060ee0fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e2d8f8;
  lVar1 = param_1;
  func_0x00010c2912e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dbea58;
  lVar2 = param_1;
  lStack_70 = lVar1;
  func_0x00010beecb20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dbeff8;
  lVar3 = param_1;
  lStack_68 = lVar2;
  func_0x00010beeca40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e3f338;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e3f318;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e3f358;
  lStack_60 = lVar3;
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e3f378);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_70,&ppuStack_98,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(lVar1 + _DAT_11273f528);
}



/* Entry: 1060ee270; end: 1060ee27f; -[BTAPIHTTP accessToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060ee270(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f528);
}



/* Entry: 1060ee280; end: 1060ee2bf; -[BTAPIHTTP setAccessToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ee280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273f528;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060ee2c0; end: 1060ee2d3; -[BTAPIHTTP .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ee2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f528,0);
  return;
}



/* Entry: 1060ee2d4; end: 1060ee8c7; +[BTAPIPinnedCertificates trustedCertificates] */

undefined1 * FUN_1060ee2d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined1 auStack_5c7 [1407];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_5c7,&UNK_10ddd4094,0x36a);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd43fe,0x358);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd4756,0x570);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd4cc6,0x56c);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd5232,0x3c9);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd55fb,0x3bc);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd55fb,0x3bc);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd59b7,0x306);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd5cbd,0x41e);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd60db,0x388);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd6463,0x4d7);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd693a,0x240);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd6b7a,0x28c);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd6e06,0x424);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd722a,0x2eb);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd7515,0x57f);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd7a94,0x4ba);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd7f4e,0x3c9);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd8317,0x4bd);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _memcpy(auStack_5c7,&UNK_10ddd87d4,0x392);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar5 = puVar1;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_620;
  _objc_retain(puVar5);
  puStack_618 = PTR_PTR_1126efa70;
  puStack_620 = puVar1;
  _objc_msgSendSuper2(&puStack_620,PTR_s_init_1125d9248);
  if ((puVar5 != (undefined *)0x0) && (ppuVar3 != (undefined **)0x0)) {
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 8);
      *(undefined ***)((long)ppuVar3 + 8) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 8);
      *(undefined **)((long)ppuVar3 + 8) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x10);
      *(undefined ***)((long)ppuVar3 + 0x10) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x10);
      *(undefined **)((long)ppuVar3 + 0x10) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x18);
      *(undefined ***)((long)ppuVar3 + 0x18) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x18);
      *(undefined **)((long)ppuVar3 + 0x18) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x20);
      *(undefined ***)((long)ppuVar3 + 0x20) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x20);
      *(undefined **)((long)ppuVar3 + 0x20) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x28);
      *(undefined ***)((long)ppuVar3 + 0x28) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x28);
      *(undefined **)((long)ppuVar3 + 0x28) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x30);
      *(undefined ***)((long)ppuVar3 + 0x30) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x30);
      *(undefined **)((long)ppuVar3 + 0x30) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x38);
      *(undefined ***)((long)ppuVar3 + 0x38) = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x38);
      *(undefined **)((long)ppuVar3 + 0x38) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x40);
      *(undefined ***)((long)ppuVar3 + 0x40) = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x40);
      *(undefined **)((long)ppuVar3 + 0x40) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = *(undefined **)((long)ppuVar3 + 0x48);
      *(undefined ***)((long)ppuVar3 + 0x48) = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + 0x48);
      *(undefined **)((long)ppuVar3 + 0x48) = puVar4;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1060ee8c8; end: 1060eee6f; -[BTBinData initWithJSON:] */

undefined1 * FUN_1060ee8c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126efa70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if ((param_3 != 0) && (puVar1 != (undefined8 *)0x0)) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 8);
      *(undefined ***)((long)puVar1 + 8) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 8);
      *(long *)((long)puVar1 + 8) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x10);
      *(undefined ***)((long)puVar1 + 0x10) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x18);
      *(undefined ***)((long)puVar1 + 0x18) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
      *(long *)((long)puVar1 + 0x18) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x20);
      *(undefined ***)((long)puVar1 + 0x20) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
      *(long *)((long)puVar1 + 0x20) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x28);
      *(undefined ***)((long)puVar1 + 0x28) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
      *(long *)((long)puVar1 + 0x28) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x30);
      *(undefined ***)((long)puVar1 + 0x30) = &PTR____CFConstantStringClassReference_110db54d8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
      *(long *)((long)puVar1 + 0x30) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x38);
      *(undefined ***)((long)puVar1 + 0x38) = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
      *(long *)((long)puVar1 + 0x38) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x40);
      *(undefined ***)((long)puVar1 + 0x40) = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
      *(long *)((long)puVar1 + 0x40) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = *(long *)((long)puVar1 + 0x48);
      *(undefined ***)((long)puVar1 + 0x48) = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
      *(long *)((long)puVar1 + 0x48) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060eee70; end: 1060eee77; -[BTBinData prepaid] */

undefined8 FUN_1060eee70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060eee78; end: 1060eee7f; -[BTBinData healthcare] */

undefined8 FUN_1060eee78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060eee80; end: 1060eee87; -[BTBinData debit] */

undefined8 FUN_1060eee80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060eee88; end: 1060eee8f; -[BTBinData durbinRegulated] */

undefined8 FUN_1060eee88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060eee90; end: 1060eee97; -[BTBinData commercial] */

undefined8 FUN_1060eee90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060eee98; end: 1060eee9f; -[BTBinData payroll] */

undefined8 FUN_1060eee98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060eeea0; end: 1060eeea7; -[BTBinData issuingBank] */

undefined8 FUN_1060eeea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060eeea8; end: 1060eeeaf; -[BTBinData countryOfIssuance] */

undefined8 FUN_1060eeea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060eeeb0; end: 1060eeeb7; -[BTBinData productId] */

undefined8 FUN_1060eeeb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1060eeeb8; end: 1060eef3b; -[BTBinData .cxx_destruct] */

void FUN_1060eeeb8(long param_1)

{
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



/* Entry: 1060eef3c; end: 1060eeff3; -[BTClientMetadata init] */

undefined1 * FUN_1060eef3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126efa78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060eeff4; end: 1060ef05f; -[BTClientMetadata copyWithZone:] */

undefined * FUN_1060eeff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c7fd0;
  func_0x00010bf00e40();
  func_0x00010bfee200();
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf52240(uVar2,param_2,param_3);
  uVar3 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  _objc_release(uVar3);
  return puVar1;
}



/* Entry: 1060ef060; end: 1060ef0d7; -[BTClientMetadata mutableCopyWithZone:] */

undefined * FUN_1060ef060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8010;
  func_0x00010bf00e40(PTR_PTR_1126c8010);
  func_0x00010bfee200();
  func_0x00010c1add60();
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf52240(uVar2,param_2,param_3);
  func_0x00010c1fda20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 1060ef0d8; end: 1060ef10b; -[BTClientMetadata integrationString] */

void FUN_1060ef0d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010c068020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c068070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_integrationToString__1125f7a28,param_1);
  return;
}



/* Entry: 1060ef10c; end: 1060ef13f; -[BTClientMetadata sourceString] */

void FUN_1060ef10c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010c247520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c247cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_sourceToString__11266f950,param_1);
  return;
}



/* Entry: 1060ef140; end: 1060ef23f; -[BTClientMetadata parameters] */

undefined ** FUN_1060ef140(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e3e878;
  uVar1 = param_1;
  func_0x00010c068040();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dae8d8;
  uVar2 = param_1;
  uStack_50 = uVar1;
  func_0x00010c247c20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e18538;
  uStack_48 = uVar2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_50;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar4,&ppuStack_68,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return ppuVar3;
  }
  ___stack_chk_fail();
  if ((long)puVar4 - 1U < 3) {
    return (undefined **)(&PTR_PTR_11090e600)[(long)puVar4 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dc7b18;
}



/* Entry: 1060ef240; end: 1060ef267; +[BTClientMetadata integrationToString:] */

undefined ** FUN_1060ef240(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_11090e600)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dc7b18;
}



/* Entry: 1060ef268; end: 1060ef28b; +[BTClientMetadata sourceToString:] */

undefined ** FUN_1060ef268(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return (undefined **)(&PTR_PTR_11090e618)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110e3f4f8;
}



/* Entry: 1060ef28c; end: 1060ef293; -[BTClientMetadata integration] */

undefined8 FUN_1060ef28c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060ef294; end: 1060ef29b; -[BTClientMetadata source] */

undefined8 FUN_1060ef294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


