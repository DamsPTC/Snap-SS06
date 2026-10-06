/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107aa8234; end: 107aa8343; -[SCResourceLoaderCMWriteStream setError:message:networkCode:] */

void FUN_107aa8234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107aa8344; end: 107aa838f;  */

void FUN_107aa8344(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010be45a20(), (int)lVar2 != 0)) {
    func_0x00010be28f20(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aa8390; end: 107aa8393; -[SCResourceLoaderCMWriteStream onComplete] */

void FUN_107aa8390(void)

{
  return;
}



/* Entry: 107aa8394; end: 107aa841f; -[SCResourceLoaderCMWriteStream cancelForContentResult:playerCanceled:] */

void FUN_107aa8394(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eabcb8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eabcd8;
  }
  func_0x00010be081a0(param_1,param_2,ppuVar1);
  *(undefined4 *)(param_1 + 0x3c) = 3;
  if ((param_4 & 1) == 0) {
    uVar2 = 0;
    func_0x00010b29185c(0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfaf960();
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 107aa8420; end: 107aa859b; -[SCResourceLoaderCMWriteStream _handleError:message:networkCode:] */

void FUN_107aa8420(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_5 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be081a0(param_1);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfaf960();
  _objc_release(lVar4);
  *(undefined4 *)(param_1 + 0x3c) = 3;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107aa859c; end: 107aa877f; -[SCResourceLoaderCMWriteStream _putBytesHelper:range:callTimeUs:] */

void FUN_107aa859c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

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
  ulong uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010be45a20();
  if ((int)lVar4 != 0) {
    if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x78) == 0)) {
      *(undefined8 *)(param_1 + 0x78) = param_6;
    }
    uVar10 = param_3;
    func_0x00010c08fa60();
    if (param_4 < uVar10) {
      uVar10 = param_3;
      func_0x00010c08fa60();
      uVar10 = uVar10 - param_4;
    }
    else {
      uVar10 = 0;
    }
    if (uVar10 <= param_5) {
      param_5 = uVar10;
    }
    lVar9 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = lVar2 + param_5;
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf5f600();
    lVar1 = *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x58);
    lVar7 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010bf5f600();
    lVar11 = (lVar3 + lVar1) - lVar11;
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _NSIntersectionRange(lVar6,lVar11,lVar2 + lVar9,param_5);
    if (lVar11 != 0) {
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      lVar7 = lVar4;
      func_0x00010bf64280();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bec6860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b6c0(lVar7);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar4);
    }
    lVar4 = *(long *)(param_1 + 0x60);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar7 = *(long *)(param_1 + 0x50);
    lVar1 = *(long *)(param_1 + 0x58);
    _NSIntersectionRange(lVar4,lVar9,lVar7,lVar1);
    if ((lVar7 == lVar4) && (lVar1 == lVar9)) {
      func_0x00010be17220(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa8780; end: 107aa884b; -[SCResourceLoaderCMWriteStream _subrangeOfData:range:] */

void FUN_107aa8780(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    func_0x00010c25eac0(param_3,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((param_4 == 0) && (puVar1 = param_3, func_0x00010c08fa60(), param_5 == puVar1)) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c08fa60();
    if (puVar2 < param_5 + param_4) {
      func_0x00010c08fa60(param_3);
    }
    puVar2 = PTR_PTR_1126d6338;
    _objc_alloc(PTR_PTR_1126d6338);
    func_0x00010c0084e0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107aa884c; end: 107aa885b; -[SCResourceLoaderCMWriteStream _isWriteStreamInProgress] */

bool FUN_107aa884c(long param_1)

{
  return *(int *)(param_1 + 0x3c) == 1;
}



/* Entry: 107aa885c; end: 107aa899b; -[SCResourceLoaderCMWriteStream _emitPhaseSpansWithOutcome:] */

void FUN_107aa885c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar3 = PTR_PTR_1126bff98;
    func_0x00010bf60700(PTR_PTR_1126bff98);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eabd38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bff98;
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 < 1) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110eabd78;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110eabd58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066600(puVar2,param_2,uVar7,lVar1,puVar5);
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x78);
      ppuVar6 = &PTR____CFConstantStringClassReference_110db9f38;
    }
    puVar2 = PTR_PTR_1126bff98;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066600(puVar2,param_2,uVar7,puVar3,puVar5);
    _objc_release(puVar5);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aa899c; end: 107aa89ff; -[SCResourceLoaderCMWriteStream _finishRequestAndCallback] */

void FUN_107aa899c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010be081a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eabd98);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfaf920();
  _objc_release(lVar1);
  *(undefined4 *)(param_1 + 0x3c) = 2;
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107aa89f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 107aa8a00; end: 107aa8a0b; -[SCResourceLoaderCMWriteStream byteRangeFulfilled] */

undefined1  [16] FUN_107aa8a00(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



/* Entry: 107aa8a0c; end: 107aa8a67; -[SCResourceLoaderCMWriteStream .cxx_destruct] */

void FUN_107aa8a0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107aa8a68; end: 107aa8b13; -[SCStreamingResourceContentInfo initWithResourceId:contentResult:contentType:] */

undefined1 *
FUN_107aa8a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9a18;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aa8b14; end: 107aa8b1b; -[SCStreamingResourceContentInfo resourceId] */

undefined8 FUN_107aa8b14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107aa8b1c; end: 107aa8b23; -[SCStreamingResourceContentInfo contentResult] */

undefined8 FUN_107aa8b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107aa8b24; end: 107aa8b2b; -[SCStreamingResourceContentInfo contentType] */

undefined8 FUN_107aa8b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107aa8b2c; end: 107aa8b5b; -[SCStreamingResourceContentInfo .cxx_destruct] */

void FUN_107aa8b2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aa8b5c; end: 107aa8c07; -[SCContentLocationResourceLoaderRequestData initWithLoadingRequest:cancelable:end:] */

undefined1 *
FUN_107aa8b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9a20;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aa8c08; end: 107aa8c0f; -[SCContentLocationResourceLoaderRequestData loadingRequest] */

undefined8 FUN_107aa8c08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107aa8c10; end: 107aa8c17; -[SCContentLocationResourceLoaderRequestData cancelable] */

undefined8 FUN_107aa8c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107aa8c18; end: 107aa8c1f; -[SCContentLocationResourceLoaderRequestData end] */

undefined8 FUN_107aa8c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107aa8c20; end: 107aa8c4f; -[SCContentLocationResourceLoaderRequestData .cxx_destruct] */

void FUN_107aa8c20(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aa8c50; end: 107aa8d53; -[SCContentLocationResourceLoader initWithContentStreamer:queuePerformer:configProvider:estimatedBitrate:] */

undefined1 *
FUN_107aa8c50(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9a28;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = param_1;
    func_0x00010be88f60(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107aa8d54; end: 107aa8e4b; -[SCContentLocationResourceLoader resourceLoader:didCancelLoadingRequest:] */

void FUN_107aa8d54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf0ae40(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_4;
  func_0x00010bfde980(param_4);
  func_0x00010c0df840(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf2f540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_4;
  func_0x00010bfde980(param_4);
  _objc_release(param_4);
  func_0x00010c0df840(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aa8e4c; end: 107aa916b; -[SCContentLocationResourceLoader resourceLoader:shouldWaitForLoadingOfRequestedResource:] */

undefined1 * FUN_107aa8e4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 == (undefined *)0x0) {
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110eabdd8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf960(param_4);
    _objc_release(puVar3);
  }
  else {
    func_0x00010bfc7920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010bf4c7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = puVar1;
    if ((lVar2 != 0) && (puVar1 != (undefined *)0x0)) {
      func_0x00010bea5a40(param_1);
      lVar2 = param_4;
      func_0x00010bf64280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        func_0x00010bfaf920(param_4);
        goto LAB_107aa9118;
      }
    }
    lVar2 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c067f00();
    }
    else {
      lVar2 = param_4;
      func_0x00010bf64280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1372a0();
      _objc_release(lVar2);
      lVar2 = param_4;
      func_0x00010bf64280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137280();
      _objc_release(lVar2);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar2 = param_1;
      func_0x00010c100720();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010c26f180();
      }
      _objc_release(lVar2);
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar4 = PTR_PTR_1126b7f98;
    _objc_alloc(PTR_PTR_1126b7f98);
    func_0x00010c04b840();
    func_0x00010c25c4c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126d6340;
    _objc_alloc(PTR_PTR_1126d6340);
    func_0x00010c0267e0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfde980(param_4);
    func_0x00010c0df840(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar8);
  }
LAB_107aa9118:
  _objc_release(puVar1);
  lVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)0x1;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107aa916c;
  puStack_90 = puVar3;
  lStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_98,lVar2);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c0f7fc0(uVar8);
  _objc_destroyWeak(auStack_a0);
  puVar6 = auStack_98;
  _objc_destroyWeak(puVar6);
  return puVar6;
}



/* Entry: 107aa916c; end: 107aa9213; -[SCContentLocationResourceLoader cancel] */

void FUN_107aa916c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107aa9214; end: 107aa923f;  */

void FUN_107aa9214(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aa9240; end: 107aa9317; -[SCContentLocationResourceLoader onMetadataAvailable:] */

void FUN_107aa9240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107aa9318; end: 107aa934b;  */

void FUN_107aa9318(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aa934c; end: 107aa944b; -[SCContentLocationResourceLoader onDataReceived:dataSlice:] */

void FUN_107aa934c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107aa944c; end: 107aa956b;  */

void FUN_107aa944c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23e860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c24d960();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c23e860(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf940a0();
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c23e860(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c24d960();
  uVar6 = uVar1;
  func_0x00010c25eac0(uVar1,param_2,uVar7,lVar4 - lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c24d960(uVar7);
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010bf940a0(lVar8);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c24d960(lVar3);
  func_0x00010be68980(lVar4,param_2,uVar7,lVar8 - lVar3,uVar6);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107aa956c; end: 107aa9673; -[SCContentLocationResourceLoader onFailure:error:] */

void FUN_107aa956c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107aa9674; end: 107aa96fb;  */

void FUN_107aa9674(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c24d960(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf940a0(lVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c24d960(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010beb2180(uVar5,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be691a0(lVar1,param_2,uVar2,lVar3 - lVar4,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aa96fc; end: 107aa96ff; -[SCContentLocationResourceLoader onComplete] */

void FUN_107aa96fc(void)

{
  return;
}



/* Entry: 107aa9700; end: 107aa977f; -[SCContentLocationResourceLoader setViewLocation:] */

void FUN_107aa9700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + 0x48) = param_3;
  puVar1 = PTR_PTR_1126c99b8;
  _objc_alloc_init(PTR_PTR_1126c99b8);
  func_0x000108534aa8(param_3);
  func_0x00010c182be0(puVar1,param_2,param_3);
  puVar2 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c1d5760();
  func_0x00010be88f60(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aa9780; end: 107aa98b7; -[SCContentLocationResourceLoader _cancel] */

void FUN_107aa9780(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  puVar7 = auStack_d8;
  lVar1 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_120,puVar7,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(lStack_118 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf2f540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2dba0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar7 = auStack_d8;
      lVar1 = lVar8;
      puVar6 = &uStack_120;
      func_0x00010bf52a60(lVar8,param_2,&uStack_120,puVar7,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  puVar4 = puVar7;
  func_0x00010bf4c7a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00();
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010bf4c7a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174ca0();
  _objc_release(puVar4);
  puVar4 = (undefined1 *)puVar6;
  func_0x00010bf4c940(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar7;
  func_0x00010bf4c7a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c182140(puVar5,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107aa98b8; end: 107aa9983; -[SCContentLocationResourceLoader _setMetadata:forLoadingRequest:] */

void FUN_107aa98b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf4c7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf4c7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174ca0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf4c940(param_3);
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010bf4c7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c182140(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aa9984; end: 107aa9bdf; -[SCContentLocationResourceLoader _onMetadataAvailable:] */

void FUN_107aa9984(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long unaff_x23;
  long lVar18;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_610;
  undefined8 uStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_490;
  undefined *puStack_480;
  long lStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined1 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  long lStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  long lStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [256];
  long lStack_260;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined auStack_170 [256];
  long lStack_70;
  
  puVar8 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar16 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar16);
  puVar15 = puVar16;
  func_0x00010bf52a60();
  if (puVar15 != (undefined *)0x0) {
    unaff_x27 = *plStack_1a0;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != unaff_x27) {
          _objc_enumerationMutation(puVar16);
        }
        unaff_x24 = *(undefined **)(lStack_1a8 + (long)unaff_x28 * 8);
        puVar1 = *(undefined **)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = puVar1;
        func_0x00010c09d2a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = unaff_x25;
        func_0x00010bf4c7a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        unaff_x26 = (undefined *)0x0;
        if (puVar1 != (undefined *)0x0) {
          func_0x00010bea5a40(param_1);
          unaff_x26 = unaff_x25;
          func_0x00010bf64280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (unaff_x26 == (undefined *)0x0) {
            func_0x00010bfaf920(unaff_x25);
            func_0x00010befa120(puVar14);
          }
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar15 != unaff_x28);
      puVar15 = puVar16;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (puVar15 != (undefined *)0x0);
  }
  _objc_release(puVar16);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar14);
  puVar15 = auStack_170;
  puVar10 = (undefined *)0x10;
  puVar1 = puVar14;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x23 = *plStack_1e0;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != unaff_x23) {
          _objc_enumerationMutation(puVar14);
        }
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar15 = auStack_170;
      puVar10 = (undefined *)0x10;
      puVar1 = puVar14;
      puVar8 = &uStack_1f0;
      func_0x00010bf52a60();
      puVar16 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar14);
  _objc_release(puVar14);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_107aa9be0;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_408 = puVar10;
  puStack_250 = unaff_x28;
  lStack_248 = unaff_x27;
  puStack_240 = unaff_x26;
  puStack_238 = unaff_x25;
  puStack_230 = unaff_x24;
  lStack_228 = unaff_x23;
  puStack_220 = puVar16;
  puStack_218 = puVar14;
  lStack_210 = param_1;
  puStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  func_0x00010bf0ae40(*(undefined8 *)(puVar1 + 0x10));
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  plStack_390 = (long *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  puVar10 = *(undefined **)(puVar1 + 0x20);
  puStack_420 = puVar16;
  _objc_retain(puVar10);
  puVar16 = puVar10;
  puStack_400 = puVar10;
  func_0x00010bf52a60();
  puStack_3f0 = puVar16;
  if (puVar16 != (undefined *)0x0) {
    unaff_x27 = *plStack_390;
    puStack_418 = (undefined *)((long)puVar8 + (long)puVar15);
    lStack_410 = unaff_x27;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if (*plStack_390 != unaff_x27) {
          _objc_enumerationMutation(puStack_400);
        }
        uStack_3e8 = *(undefined8 *)(lStack_398 + (long)unaff_x25 * 8);
        unaff_x26 = *(undefined **)(puVar1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x26;
        func_0x00010c09d2a0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = unaff_x28;
        func_0x00010bf64280();
        _objc_retainAutoreleasedReturnValue();
        if (puVar16 != (undefined *)0x0) {
          puVar14 = unaff_x28;
          func_0x00010bf64280();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = puVar14;
          func_0x00010bf5f600();
          _objc_release(puVar14);
          _objc_release(puVar16);
          puVar10 = puVar16;
          if (puVar8 <= unaff_x24 && unaff_x24 + -(long)puVar8 < puVar15) {
            puVar14 = unaff_x26;
            func_0x00010bf940a0();
            puVar16 = unaff_x28;
            func_0x00010bf64280();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar16;
            func_0x00010bf5f600();
            lStack_3f8 = (long)puVar14 - (long)puVar10;
            _objc_release(puVar16);
            puVar16 = unaff_x28;
            func_0x00010bf64280();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = puVar16;
            func_0x00010bf5f600();
            _objc_release(puVar16);
            _NSIntersectionRange(puVar8,puVar15,unaff_x24,(long)puVar14 - (long)puVar10);
            puVar16 = unaff_x28;
            func_0x00010bf64280(unaff_x28);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puStack_408;
            func_0x00010c25eac0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13b6c0(puVar16);
            _objc_release(puVar14);
            unaff_x27 = lStack_410;
            _objc_release(puVar16);
            puVar10 = puVar1;
            if (unaff_x24 + lStack_3f8 <= puStack_418) {
              func_0x00010bfaf920(unaff_x28);
              func_0x00010befa120(puStack_420);
            }
          }
        }
        _objc_release(unaff_x28);
        _objc_release(unaff_x26);
        unaff_x25 = unaff_x25 + 1;
      } while (puStack_3f0 != unaff_x25);
      puVar16 = puStack_400;
      func_0x00010bf52a60();
      puStack_3f0 = puVar16;
    } while (puVar16 != (undefined *)0x0);
  }
  _objc_release(puStack_400);
  puVar16 = puStack_420;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  puStack_3d0 = (undefined8 *)0x0;
  _objc_retain(puStack_420);
  puVar8 = &uStack_3e0;
  puVar9 = auStack_360;
  uVar11 = 0x10;
  puVar2 = puVar16;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    puVar10 = (undefined *)*puStack_3d0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_3d0 != puVar10) {
          _objc_enumerationMutation(puVar16);
        }
        func_0x00010c12d3e0(*(undefined8 *)(puVar1 + 0x20));
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar8 = &uStack_3e0;
      puVar9 = auStack_360;
      uVar11 = 0x10;
      puVar2 = puVar16;
      func_0x00010bf52a60();
      puVar15 = (undefined *)0x0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar16);
  _objc_release(puVar16);
  puVar2 = puStack_408;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
    ___stack_chk_fail();
    puStack_458 = puVar16;
    pcStack_428 = FUN_107aa9f4c;
    lStack_490 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_480 = unaff_x28;
    lStack_478 = unaff_x27;
    puStack_470 = unaff_x26;
    puStack_468 = unaff_x25;
    puStack_460 = unaff_x24;
    puStack_450 = puVar15;
    puStack_448 = puVar14;
    puStack_440 = puVar1;
    puStack_438 = puVar10;
    ppuStack_430 = &puStack_200;
    _objc_retain(uVar11);
    func_0x00010bf0ae40(*(undefined8 *)(puVar2 + 0x10));
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    plStack_5c0 = (long *)0x0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    lVar12 = *(long *)(puVar2 + 0x20);
    _objc_retain(lVar12);
    lVar13 = lVar12;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar17 = *plStack_5c0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_5c0 != lVar17) {
            _objc_enumerationMutation(lVar12);
          }
          puVar3 = *(undefined8 **)(puVar2 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c09d2a0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf64280();
          _objc_retainAutoreleasedReturnValue();
          if (puVar5 != (undefined8 *)0x0) {
            puVar6 = puVar4;
            func_0x00010bf64280();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010bf5f600();
            _objc_release(puVar6);
            _objc_release(puVar5);
            if (puVar8 <= puVar7 && (undefined1 *)((long)puVar7 - (long)puVar8) < puVar9) {
              func_0x00010bfaf960(puVar4);
              func_0x00010befa120(puVar14);
            }
          }
          _objc_release(puVar4);
          _objc_release(puVar3);
          lVar18 = lVar18 + 1;
        } while (lVar13 != lVar18);
        lVar13 = lVar12;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar12);
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    uStack_5f8 = 0;
    plStack_600 = (long *)0x0;
    _objc_retain(puVar14);
    puVar8 = &uStack_610;
    puVar16 = puVar14;
    func_0x00010bf52a60();
    if (puVar16 != (undefined *)0x0) {
      lVar13 = *plStack_600;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_600 != lVar13) {
            _objc_enumerationMutation(puVar14);
          }
          func_0x00010c12d3e0(*(undefined8 *)(puVar2 + 0x20));
          puVar15 = puVar15 + 1;
        } while (puVar16 != puVar15);
        puVar8 = &uStack_610;
        puVar16 = puVar14;
        func_0x00010bf52a60();
      } while (puVar16 != (undefined *)0x0);
    }
    _objc_release(puVar14);
    _objc_release(puVar14);
    _objc_release(uVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_490) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined8 *)0x0) {
        puVar4 = puVar8;
        func_0x00010bf6e340(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar16);
        _objc_release(puVar4);
      }
      puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar4 = puVar8;
      func_0x00010bf98a40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf98940(puVar8);
      func_0x00010bf99240(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar16);
    }
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  return;
}



/* Entry: 107aa9be0; end: 107aa9f4b; -[SCContentLocationResourceLoader _onDataReceived:data:] */

void FUN_107aa9be0(undefined *param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *unaff_x21;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_2a0;
  undefined *puStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  ulong uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_218 = param_5;
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar10 = *(undefined **)(param_1 + 0x20);
  puStack_230 = puVar14;
  _objc_retain(puVar10);
  puVar14 = puVar10;
  puStack_210 = puVar10;
  func_0x00010bf52a60();
  puStack_200 = puVar14;
  if (puVar14 != (undefined *)0x0) {
    unaff_x27 = *plStack_1a0;
    puStack_228 = param_3 + param_4;
    lStack_220 = unaff_x27;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != unaff_x27) {
          _objc_enumerationMutation(puStack_210);
        }
        uStack_1f8 = *(undefined8 *)(lStack_1a8 + (long)unaff_x25 * 8);
        unaff_x26 = *(undefined **)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x26;
        func_0x00010c09d2a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = unaff_x28;
        func_0x00010bf64280();
        _objc_retainAutoreleasedReturnValue();
        if (puVar14 != (undefined *)0x0) {
          unaff_x21 = unaff_x28;
          func_0x00010bf64280();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x21;
          func_0x00010bf5f600();
          _objc_release(unaff_x21);
          _objc_release(puVar14);
          puVar10 = puVar14;
          if (param_3 <= unaff_x24 && (ulong)((long)unaff_x24 - (long)param_3) < param_4) {
            puVar14 = unaff_x26;
            func_0x00010bf940a0();
            puVar10 = unaff_x28;
            func_0x00010bf64280();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar10;
            func_0x00010bf5f600();
            lStack_208 = (long)puVar14 - (long)puVar1;
            _objc_release(puVar10);
            puVar10 = unaff_x28;
            func_0x00010bf64280();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = puVar10;
            func_0x00010bf5f600();
            _objc_release(puVar10);
            _NSIntersectionRange(param_3,param_4,unaff_x24,(long)puVar14 - (long)puVar1);
            puVar14 = unaff_x28;
            func_0x00010bf64280(unaff_x28);
            _objc_retainAutoreleasedReturnValue();
            unaff_x21 = puStack_218;
            func_0x00010c25eac0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13b6c0(puVar14);
            _objc_release(unaff_x21);
            unaff_x27 = lStack_220;
            _objc_release(puVar14);
            puVar10 = param_1;
            if (unaff_x24 + lStack_208 <= puStack_228) {
              func_0x00010bfaf920(unaff_x28);
              func_0x00010befa120(puStack_230);
            }
          }
        }
        _objc_release(unaff_x28);
        _objc_release(unaff_x26);
        unaff_x25 = unaff_x25 + 1;
      } while (puStack_200 != unaff_x25);
      puVar14 = puStack_210;
      func_0x00010bf52a60();
      puStack_200 = puVar14;
    } while (puVar14 != (undefined *)0x0);
  }
  _objc_release(puStack_210);
  puVar14 = puStack_230;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  _objc_retain(puStack_230);
  puVar7 = &uStack_1f0;
  puVar8 = auStack_170;
  uVar9 = 0x10;
  puVar1 = puVar14;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)*puStack_1e0;
    do {
      unaff_x21 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_1e0 != puVar10) {
          _objc_enumerationMutation(puVar14);
        }
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
        unaff_x21 = unaff_x21 + 1;
      } while (puVar1 != unaff_x21);
      puVar7 = &uStack_1f0;
      puVar8 = auStack_170;
      uVar9 = 0x10;
      puVar1 = puVar14;
      func_0x00010bf52a60();
      param_4 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar14);
  _objc_release(puVar14);
  puVar1 = puStack_218;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_268 = puVar14;
  pcStack_238 = FUN_107aa9f4c;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_290 = unaff_x28;
  lStack_288 = unaff_x27;
  puStack_280 = unaff_x26;
  puStack_278 = unaff_x25;
  puStack_270 = unaff_x24;
  uStack_260 = param_4;
  puStack_258 = unaff_x21;
  puStack_250 = param_1;
  puStack_248 = puVar10;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(uVar9);
  func_0x00010bf0ae40(*(undefined8 *)(puVar1 + 0x10));
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  lVar11 = *(long *)(puVar1 + 0x20);
  _objc_retain(lVar11);
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar15 = *plStack_3d0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_3d0 != lVar15) {
          _objc_enumerationMutation(lVar11);
        }
        puVar2 = *(undefined8 **)(puVar1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c09d2a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf64280();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined8 *)0x0) {
          puVar5 = puVar3;
          func_0x00010bf64280();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf5f600();
          _objc_release(puVar5);
          _objc_release(puVar4);
          if (puVar7 <= puVar6 && (undefined1 *)((long)puVar6 - (long)puVar7) < puVar8) {
            func_0x00010bfaf960(puVar3);
            func_0x00010befa120(puVar14);
          }
        }
        _objc_release(puVar3);
        _objc_release(puVar2);
        lVar16 = lVar16 + 1;
      } while (lVar12 != lVar16);
      lVar12 = lVar11;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  plStack_410 = (long *)0x0;
  _objc_retain(puVar14);
  puVar7 = &uStack_420;
  puVar10 = puVar14;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar12 = *plStack_410;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_410 != lVar12) {
          _objc_enumerationMutation(puVar14);
        }
        func_0x00010c12d3e0(*(undefined8 *)(puVar1 + 0x20));
        puVar13 = puVar13 + 1;
      } while (puVar10 != puVar13);
      puVar7 = &uStack_420;
      puVar10 = puVar14;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar14);
  _objc_release(puVar14);
  _objc_release(uVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  if (puVar7 == (undefined8 *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined8 *)0x0) {
      puVar3 = puVar7;
      func_0x00010bf6e340(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar10);
      _objc_release(puVar3);
    }
    puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = puVar7;
    func_0x00010bf98a40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98940(puVar7);
    func_0x00010bf99240(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar10);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107aa9f4c; end: 107aaa1bf; -[SCContentLocationResourceLoader _onFailure:error:] */

void FUN_107aa9f4c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar11 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar11 != 0) {
    lVar14 = *plStack_1a0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1a0 != lVar14) {
          _objc_enumerationMutation(lVar10);
        }
        uVar16 = *(undefined8 *)(lStack_1a8 + lVar15 * 8);
        uVar1 = *(ulong *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar1,param_2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c09d2a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf64280();
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 != 0) {
          uVar4 = uVar2;
          func_0x00010bf64280();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf5f600();
          _objc_release(uVar4);
          _objc_release(uVar3);
          if (param_3 <= uVar5 && uVar5 - param_3 < param_4) {
            func_0x00010bfaf960(uVar2,param_2,param_5);
            func_0x00010befa120(puVar13,param_2,uVar16);
          }
        }
        _objc_release(uVar2);
        _objc_release(uVar1);
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar11 != 0);
  }
  _objc_release(lVar10);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar13);
  puVar9 = &uStack_1f0;
  puVar6 = puVar13;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar11 = *plStack_1e0;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(puVar13);
        }
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,
                            *(undefined8 *)(lStack_1e8 + (long)puVar12 * 8));
        puVar12 = puVar12 + 1;
      } while (puVar6 != puVar12);
      puVar9 = &uStack_1f0;
      puVar6 = puVar13;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  if (puVar9 == (undefined8 *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined8 *)0x0) {
      puVar7 = puVar9;
      func_0x00010bf6e340(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar6,param_2,puVar7,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
      _objc_release(puVar7);
    }
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar7 = puVar9;
    func_0x00010bf98a40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf98940(puVar9);
    func_0x00010bf99240(puVar13,param_2,puVar7,puVar8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107aaa1c0; end: 107aaa2bf; -[SCContentLocationResourceLoader _shimsErrorToNSError:] */

void FUN_107aaa1c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010bf6e340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar1,param_2,lVar2,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
      _objc_release(lVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar2 = param_3;
    func_0x00010bf98a40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf98940(param_3);
    func_0x00010bf99240(puVar4,param_2,lVar2,lVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107aaa2c0; end: 107aaa35b; -[SCContentLocationResourceLoader _regenerateConfigsWithFeatureProvidedSignals:] */

void FUN_107aaa2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110eabe18,0x40000,param_3
                     );
  *(long *)(param_1 + 0x30) = (long)(int)uVar1;
  if (0.0 < *(float *)(param_1 + 0x28)) {
    fVar2 = 1.0;
    func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x18),param_2,
                        &PTR____CFConstantStringClassReference_110eabe38,param_3);
    *(long *)(param_1 + 0x30) = (long)(fVar2 * *(float *)(param_1 + 0x28));
  }
  uVar3 = 0;
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x18),param_2,
                      &PTR____CFConstantStringClassReference_110eabe58,param_3);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aaa35c; end: 107aaa373; -[SCContentLocationResourceLoader player] */

void FUN_107aaa35c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aaa374; end: 107aaa37f; -[SCContentLocationResourceLoader setPlayer:] */

void FUN_107aaa374(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 107aaa380; end: 107aaa387; -[SCContentLocationResourceLoader viewLocation] */

undefined8 FUN_107aaa380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107aaa388; end: 107aaa3d7; -[SCContentLocationResourceLoader .cxx_destruct] */

void FUN_107aaa388(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aaa3d8; end: 107aaa4bb; -[SCStreamingNeoPlayerLocalBytesCollector initWithExpectedByteCount:maxByteCount:performer:completion:] */

undefined1 *
FUN_107aaa3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9a30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107aaa4bc; end: 107aaa4eb; -[SCStreamingNeoPlayerLocalBytesCollector setRequestHandle:] */

void FUN_107aaa4bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107aaa4ec; end: 107aaa5a3; -[SCStreamingNeoPlayerLocalBytesCollector scheduleTimeout:] */

void FUN_107aaa4ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fe0(param_1,uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107aaa5a4; end: 107aaa5d7;  */

void FUN_107aaa5a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be16c80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aaa5d8; end: 107aaa6cb; -[SCStreamingNeoPlayerLocalBytesCollector putBytesSlice:] */

void FUN_107aaa5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010b7f51c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107aaa6cc; end: 107aaa72b;  */

void FUN_107aaa6cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x38) & 1) == 0)) {
    func_0x00010bf06ae0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c08fa60();
    if (*(long *)(lVar1 + 0x10) <= lVar2) {
      func_0x00010be16c80(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aaa72c; end: 107aaa803; -[SCStreamingNeoPlayerLocalBytesCollector setError:message:networkCode:] */

void FUN_107aaa72c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107aaa804; end: 107aaa837;  */

void FUN_107aaa804(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be16c80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aaa838; end: 107aaa8df; -[SCStreamingNeoPlayerLocalBytesCollector onComplete] */

void FUN_107aaa838(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107aaa8e0; end: 107aaa913;  */

void FUN_107aaa8e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be16c80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aaa914; end: 107aaa9db; -[SCStreamingNeoPlayerLocalBytesCollector _finish] */

void FUN_107aaa914(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  if (lVar1 == 0) goto LAB_107aaa9cc;
  if (*(long *)(param_1 + 0x18) < 1) {
LAB_107aaa994:
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf51e00(uVar2);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c08fa60();
    if (lVar3 <= *(long *)(param_1 + 0x18)) goto LAB_107aaa994;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25eac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_release(uVar2);
LAB_107aaa9cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aaa9dc; end: 107aaaa23; -[SCStreamingNeoPlayerLocalBytesCollector .cxx_destruct] */

void FUN_107aaa9dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aaaa24; end: 107aaac0f; -[SCStreamingNeoPlayerRequestHandler initWithConfigProvider:contentInfo:callbackQueue:requestHandlerDelegate:] */

undefined8 *
FUN_107aaaa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_6);
  puStack_60 = PTR_PTR_1126f9a38;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar3 = auStack_58;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 0xc,puVar3);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 1) = 0;
    uVar5 = puVar1[5];
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfc40e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf51e00();
    uVar8 = puVar1[8];
    puVar1[8] = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar2 = puVar1[2];
    puVar1[2] = 0;
    _objc_release(uVar2);
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 1;
    uVar2 = param_3;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 3) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x19) = (char)uVar2;
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107aaac10; end: 107aaacab; -[SCStreamingNeoPlayerRequestHandler setStreamingContext] */

void FUN_107aaac10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc4620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2bbc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4d380(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a7a0();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107aaacac; end: 107aaad4f; -[SCStreamingNeoPlayerRequestHandler dealloc] */

void FUN_107aaacac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (((*(byte *)(param_1 + 0x19) & 1) == 0) && (*(long *)(param_1 + 0x50) != 0)) {
    puVar1 = PTR_PTR_1126b7f98;
    _objc_alloc(PTR_PTR_1126b7f98);
    func_0x00010c04b840();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4d380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3940();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  puStack_38 = PTR_PTR_1126f9a38;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107aaad50; end: 107aaad53; -[SCStreamingNeoPlayerRequestHandler setViewLocation:] */

void FUN_107aaad50(void)

{
  return;
}



/* Entry: 107aaad54; end: 107aaadfb; -[SCStreamingNeoPlayerRequestHandler cancel] */

void FUN_107aaad54(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107aaadfc; end: 107aaae37;  */

void FUN_107aaadfc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 3;
    func_0x00010becaca0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aaae38; end: 107aaaf7f; -[SCStreamingNeoPlayerRequestHandler _tearDown] */

void FUN_107aaae38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  long lVar6;
  undefined1 auStack_168 [8];
  undefined1 *puStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf4d380(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2e440(unaff_x22);
        _objc_release(uVar1);
        _objc_release(unaff_x22);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107aaaf80;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar4;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_158,lVar2);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  _objc_copyWeak(auStack_168,auStack_158);
  puStack_160 = (undefined1 *)puVar3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_158);
  return;
}



/* Entry: 107aaaf80; end: 107aab037; -[SCStreamingNeoPlayerRequestHandler cancelLoad:] */

void FUN_107aaaf80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107aab038; end: 107aab0ef;  */

void FUN_107aab038(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(lVar1 + 0x30);
    func_0x00010c0e00e0(lVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x30),param_2,puVar2);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010bf4d380(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2e440(lVar3,param_2,uVar4,1);
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aab0f0; end: 107aab177; -[SCStreamingNeoPlayerRequestHandler getTotalDataSize:] */

undefined8 FUN_107aab0f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 8) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfcb5a0();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  (**(code **)(param_3 + 0x10))(param_3,0,0,*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}



/* Entry: 107aab178; end: 107aab34f; -[SCStreamingNeoPlayerRequestHandler copyLocallyAvailableDataWithCompletion:] */

void FUN_107aab178(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) ||
     (puVar2 = puVar1, func_0x00010bfcaaa0(), puVar2 != (undefined *)0x0)) {
LAB_107aab1c0:
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bfc68a0();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar1;
      func_0x00010c13e900();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      puVar5 = puVar2;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = puVar1;
        func_0x00010bfc5880();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08fa60();
        if (puVar4 != (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
        }
        _objc_release(puVar3);
      }
      puVar2 = puVar5;
      func_0x00010c08fa60();
      puVar3 = puVar5;
      if (0x300000 < (long)puVar2) {
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      puVar5 = puVar3;
      func_0x00010c08fa60();
      puVar2 = (undefined *)0x0;
      if (puVar5 != (undefined *)0x0) {
        puVar2 = puVar3;
      }
      (**(code **)(param_3 + 0x10))(param_3,puVar2);
    }
    else {
      puVar2 = puVar1;
      func_0x00010bfc2be0();
      if ((long)puVar2 < 1) goto LAB_107aab1c0;
      puVar3 = PTR_PTR_1126d6348;
      _objc_alloc(PTR_PTR_1126d6348);
      func_0x00010c0110a0();
      puVar2 = puVar1;
      func_0x00010c11c020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ebc60(puVar3);
      func_0x00010c150240(0x4014000000000000,puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aab350; end: 107aab44f; -[SCStreamingNeoPlayerRequestHandler loadDataChunk:chunkSize:completion:] */

long FUN_107aab350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar1 + 1;
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_60 = param_3;
  uStack_58 = param_4;
  lStack_50 = lVar1;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return lVar1;
}



/* Entry: 107aab450; end: 107aab493;  */

void FUN_107aab450(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be4d020(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aab494; end: 107aab733; -[SCStreamingNeoPlayerRequestHandler _loadDataChunkWithByteOffset:chunkSize:externalRequestId:completion:] */

void FUN_107aab494(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 in_x5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4d380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13e900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(PTR_PTR_1126bff98);
  puVar5 = PTR_PTR_1126bff98;
  func_0x00010bf18180();
  puVar6 = PTR_PTR_1126d6350;
  _objc_alloc();
  func_0x00010c063960();
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107aab734;
  puStack_88 = &UNK_110860190;
  _objc_copyWeak(auStack_78,auStack_68);
  puStack_70 = puVar5;
  _objc_retain(puVar6);
  ppuVar7 = &puStack_a0;
  puStack_80 = puVar6;
  _objc_retainBlock();
  puVar5 = PTR_PTR_1126d6358;
  _objc_alloc(PTR_PTR_1126d6358);
  func_0x00010c026800();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar8 = puVar6;
  func_0x00010c135700(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(puVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4d380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef6a0(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(ppuVar7);
  _objc_release(puStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(in_x5);
  return;
}



/* Entry: 107aab734; end: 107aab79f;  */

void FUN_107aab734(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf94960(PTR_PTR_1126bff98);
    func_0x00010be26a00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107aab7a0; end: 107aab873; -[SCStreamingNeoPlayerRequestHandler _handleCMWriteStreamCallbackforNeoPlayerLoadingRequest:error:] */

void FUN_107aab7a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30));
  uVar2 = uVar1;
  func_0x00010bf25ea0(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  _NSUnionRange(uVar3,uVar5,uVar2,param_2);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  if (param_4 != 0) {
    lVar4 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c135660();
    _objc_release(lVar4);
    *(undefined4 *)(param_1 + 8) = 3;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107aab874; end: 107aab8cf; -[SCStreamingNeoPlayerRequestHandler .cxx_destruct] */

void FUN_107aab874(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107aab8d0; end: 107aab8df;  */

void FUN_107aab8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)
            (param_1,PTR_s_retainResourceLoaderDelegate__11262d180,param_3,1);
  return;
}



/* Entry: 107aab8e0; end: 107aab9f7; -[SCStreamingResourceLoader initWithConfigProvider:grapheneRegistry:contentResolver:contentFetcher:] */

undefined1 *
FUN_107aab8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9a40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
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
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aab9f8; end: 107aabd37; -[SCStreamingResourceLoader createPlaybackAssetFromContentBundle:contentType:mediaContextType:] */

void FUN_107aab9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b1378;
    puVar1 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    func_0x00010c1081a0(puVar11,param_2,param_5,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c107440(lVar10,param_2,param_3,puVar11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar11);
    _objc_release(puVar1);
    _objc_release(lVar10);
    lVar10 = lVar2;
    func_0x00010bfbc440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010bfc1d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar11 = (undefined *)0x0;
    if (lVar3 == 0) {
      func_0x00010b2911e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126bcb80;
      _objc_alloc(PTR_PTR_1126bcb80);
      func_0x00010bfefc40();
      func_0x00010c1c43a0();
      _objc_retain(puVar11);
      puVar4 = PTR_PTR_1126ae790;
      _objc_alloc(PTR_PTR_1126ae790);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f44294b);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520(puVar4,param_2,puVar5,0x19,0,0x21);
      _objc_release(puVar5);
      lVar10 = lVar2;
      func_0x00010bfbc480(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar10;
      func_0x00010bfc1d60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c1076a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar10);
      func_0x00010be0b3e0(param_1,param_2,lVar7);
      lVar10 = lVar2;
      func_0x00010bf555a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar10;
      func_0x00010bfc1d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar5 = PTR_PTR_1126d6360;
      _objc_alloc(PTR_PTR_1126d6360);
      func_0x00010c003c80((float)((double)param_1 * 1000.0 * 0.125));
      puVar8 = puVar1;
      func_0x00010c13b360(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c11de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b640(puVar8,param_2,puVar5,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c13dd80(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(lVar6);
      _objc_release(lVar7);
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar1);
      _objc_release(param_4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107aabd38; end: 107aabd3b; -[SCStreamingResourceLoader createPlaybackAssetFromContentResult:resourceId:contentType:] */

void FUN_107aabd38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf549f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createAssetFromContentResult_res_1125b2c20);
  return;
}



/* Entry: 107aabd3c; end: 107aabd3f; -[SCStreamingResourceLoader createAssetFromContentResult:resourceId:contentType:] */

void FUN_107aabd3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcf8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__assetFromContentResult_resource_1125517d8);
  return;
}



/* Entry: 107aabd40; end: 107aac123; -[SCStreamingResourceLoader _assetFromContentResult:resourceId:contentType:] */

void FUN_107aabd40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126d6368;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c03f9c0();
  _objc_release(param_4);
  lVar2 = param_3;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ee80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010b2912d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfc79a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182680(puVar5);
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfd69e0(param_3);
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182660(puVar5);
  _objc_release(puVar6);
  puVar7 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  _objc_release(puVar6);
  puVar8 = PTR_PTR_1126d6370;
  _objc_alloc(PTR_PTR_1126d6370);
  func_0x00010c0013e0();
  puVar6 = puVar5;
  func_0x00010c13b360(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c11de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b640(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar6);
  func_0x00010c13dd80(puVar5);
  _objc_retain(param_1);
  puVar6 = PTR_PTR_1126ae720;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bcb80;
  _objc_alloc(PTR_PTR_1126bcb80);
  func_0x00010bfefc60();
  lVar2 = param_3;
  func_0x00010bfc40e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c1c43a0(puVar9);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf4d2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c29a660();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c1076a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar11;
  func_0x00010c086360(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e04c0(puVar9);
  _objc_release(lVar2);
  if (lVar11 != 0) {
    func_0x00010c26fc60(lVar11);
  }
  func_0x00010c1e04e0(puVar9);
  _objc_release(lVar11);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107aac124; end: 107aac183;  */

void FUN_107aac124(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6378;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_alloc(puVar1);
  func_0x00010c001360();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107aac184; end: 107aac343; -[SCStreamingResourceLoader _estimatedBitrateKbpsFromPrefetchHint:] */

long FUN_107aac184(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  double dVar9;
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
  if (param_3 != 0) {
    lVar4 = param_3;
    func_0x00010c086360();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar2 != 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      lVar4 = param_3;
      func_0x00010c086360();
      _objc_retainAutoreleasedReturnValue();
      param_4 = auStack_d8;
      param_5 = 0x10;
      lVar2 = lVar4;
      func_0x00010bf52a60();
      if (lVar2 == 0) {
        dVar9 = 0.0;
      }
      else {
        lVar6 = *plStack_110;
        fVar8 = 0.0;
        do {
          lVar7 = 0;
          do {
            if (*plStack_110 != lVar6) {
              _objc_enumerationMutation(lVar4);
            }
            iVar1 = (int)*(undefined8 *)(lStack_118 + lVar7 * 8);
            func_0x00010c067ec0();
            fVar8 = fVar8 + (float)(iVar1 << 10);
            lVar7 = lVar7 + 1;
          } while (lVar2 != lVar7);
          param_4 = auStack_d8;
          param_5 = 0x10;
          lVar2 = lVar4;
          func_0x00010bf52a60(lVar4,param_2,&uStack_120,param_4,0x10);
        } while (lVar2 != 0);
        dVar9 = (double)fVar8;
      }
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010c26fc60();
      lVar2 = param_3;
      func_0x00010c086360();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      lVar4 = (long)(((float)(dVar9 / ((double)(ulong)(lVar6 * (int)lVar4) / 1000.0)) * 8.0) /
                    1000.0);
      goto LAB_107aac300;
    }
  }
  lVar4 = 0;
LAB_107aac300:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar4;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d6380;
  if (param_4 != (undefined1 *)0x0) {
    uVar5 = *(undefined8 *)(param_3 + 8);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_alloc(puVar3);
    lVar4 = param_5;
    func_0x00010c13b320(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c03f9e0(puVar3,param_2,lVar4,param_4);
    _objc_release(param_4);
    func_0x00010c0d9840(uVar5,param_2,puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return lVar4;
  }
  return param_3;
}



/* Entry: 107aac344; end: 107aac3f3; -[SCStreamingResourceLoader requestHandlerDidFinish:withError:contentInfo:] */

void FUN_107aac344(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6380;
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    uVar2 = param_5;
    func_0x00010c13b320(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c03f9e0(puVar1,param_2,uVar2,param_4);
    _objc_release(param_4);
    func_0x00010c0d9840(uVar3,param_2,puVar1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107aac3f4; end: 107aac3fb; -[SCStreamingResourceLoader resourceLoaderErrorObservable] */

undefined8 FUN_107aac3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107aac3fc; end: 107aac44f; -[SCStreamingResourceLoader .cxx_destruct] */

void FUN_107aac3fc(long param_1)

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



/* Entry: 107aac450; end: 107aac4cf; +[SCStreamingResourceLoadingRequestHandler _nextExponentialChunkSizeAtOffset:withFirstChunkSize:initialMultiplier:successiveMultiplier:maxMultiplier:maxChunkSize:] */

ulong FUN_107aac450(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                   ulong param_6,ulong param_7,ulong param_8)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  if (param_8 == 0) {
    param_8 = 0xffffffffffffffff;
  }
  fVar3 = param_3 * (float)param_7;
  bVar1 = false;
  if ((1.0 <= param_3) && (bVar1 = false, !NAN(fVar3) && !NAN((float)param_8))) {
    bVar1 = fVar3 < (float)param_8;
  }
  if (bVar1) {
    param_8 = (ulong)fVar3;
  }
  dVar2 = (double)param_1;
  if (dVar2 <= 1.0) {
    dVar2 = 1.0;
  }
  dVar2 = dVar2 * (double)param_7;
  dVar4 = (double)param_8;
  bVar1 = false;
  if ((1.0 < param_2 && param_6 != 0) && (bVar1 = false, !NAN(dVar2) && !NAN(dVar4))) {
    bVar1 = dVar2 < dVar4;
  }
  if (bVar1) {
    dVar5 = 0.0;
    do {
      dVar5 = dVar2 + dVar5;
      dVar2 = dVar2 * (double)param_2;
      bVar1 = false;
      if ((dVar5 < (double)param_6) && (bVar1 = false, !NAN(dVar2) && !NAN(dVar4))) {
        bVar1 = dVar2 < dVar4;
      }
    } while (bVar1);
  }
  if ((ulong)(long)dVar2 <= param_8) {
    param_8 = (long)dVar2;
  }
  return param_8;
}



/* Entry: 107aac4d0; end: 107aac817; -[SCStreamingResourceLoadingRequestHandler initWithConfigProvider:grapheneRegistry:contentInfo:callbackQueue:requestHandlerDelegate:] */

undefined8 *
FUN_107aac4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_7);
  puStack_60 = PTR_PTR_1126f9a48;
  puVar2 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[10];
    puVar2[10] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[9];
    puVar2[9] = param_6;
    _objc_release(uVar3);
    puVar4 = auStack_58;
    _objc_loadWeakRetained(puVar4);
    _objc_storeWeak(puVar2 + 0x12,puVar4);
    _objc_release(puVar4);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xb];
    puVar2[0xb] = puVar8;
    _objc_release(uVar3);
    *(undefined4 *)(puVar2 + 3) = 0;
    uVar5 = puVar2[10];
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfc40e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf51e00();
    uVar12 = puVar2[0xd];
    puVar2[0xd] = uVar6;
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar1 = (undefined1)puVar2[1];
    func_0x00010bf1f440();
    *(undefined1 *)(puVar2 + 5) = uVar1;
    uVar1 = (undefined1)puVar2[1];
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + 0x41) = uVar1;
    uVar1 = (undefined1)puVar2[1];
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + 0x43) = uVar1;
    uVar1 = (undefined1)puVar2[1];
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + 0x44) = uVar1;
    *(undefined1 *)((long)puVar2 + 0x42) = 0;
    uVar3 = param_4;
    if (*(char *)((long)puVar2 + 0x41) == '\0') {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    uVar7 = puVar2[2];
    puVar2[2] = uVar3;
    _objc_release(uVar7);
    if (((*(byte *)(puVar2 + 5) & 1) == 0) && (*(char *)((long)puVar2 + 0x41) != '\x01')) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126b44c8;
      func_0x00010bf4ff40();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = puVar2[7];
    puVar2[7] = puVar8;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 8) = 0;
    uVar3 = puVar2[6];
    puVar2[6] = 0;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 4,0);
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    func_0x00010be88f60(puVar2);
    lVar9 = puVar2[10];
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bfc4620();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2bbc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    if (lVar11 != 0) {
      uVar3 = puVar2[10];
      func_0x00010bf4d380(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a7a0();
      _objc_release(uVar3);
    }
    _objc_release(lVar11);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107aac818; end: 107aac9b3; -[SCStreamingResourceLoadingRequestHandler setPlayer:] */

void FUN_107aac818(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != param_3) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0x38), _objc_release(), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c281a80(uVar3);
      _objc_release(lVar2);
    }
    _objc_storeWeak(param_1 + 0x20,param_3);
    if (((*(byte *)(param_1 + 0x43) & 1) == 0) && (*(long *)(param_1 + 0x88) != 0)) {
      puVar1 = PTR_PTR_1126b7f98;
      _objc_alloc(PTR_PTR_1126b7f98);
      func_0x00010c04b840();
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf4d380(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a3940();
      _objc_release(uVar3);
      _objc_release(puVar1);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107aac9b4; end: 107aac9ff;  */

void FUN_107aac9b4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x20) == 0)) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x78);
    func_0x00010c0f5d20();
    if (iVar1 != 0) {
      func_0x00010becaca0(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107aaca00; end: 107aaca17; -[SCStreamingResourceLoadingRequestHandler player] */

void FUN_107aaca00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aaca18; end: 107aaca6b; +[SCStreamingResourceLoadingRequestHandler _playerIsPaused:] */

bool FUN_107aaca18(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c14dea0();
  if (lVar2 == 0) {
    func_0x00010c14d900(param_4);
    bVar1 = param_1 == 0.0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107aaca6c; end: 107aacb57; -[SCStreamingResourceLoadingRequestHandler _playerStatusDidChange:] */

void FUN_107aaca6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d6370;
  func_0x00010be750c0();
  if (((ulong)puVar1 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
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



/* Entry: 107aacb58; end: 107aacc93;  */

void FUN_107aacb58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c281a80(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(lVar1 + 0x28) = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar4 = *(long *)(lVar1 + 0x30);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar2 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar6 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010be269c0(lVar1,param_2,*(undefined8 *)(lStack_108 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar4);
    func_0x00010c12adc0(*(undefined8 *)(lVar1 + 0x30));
    if (*(char *)(lVar1 + 0x41) == '\x01') {
      func_0x00010bdd5200(lVar1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar1;
  func_0x00010be4f1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(lVar1 + 0x58);
  func_0x00010c0e00e0(lVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x58),param_2,lVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010bf4d380(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e440(lVar4,param_2,uVar3,1);
    _objc_release(uVar3);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107aacc94; end: 107aacd2b; -[SCStreamingResourceLoadingRequestHandler resourceLoader:didCancelLoadingRequest:] */

void FUN_107aacc94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be4f1a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c0e00e0(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf4d380(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e440(lVar2,param_2,uVar3,1);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aacd2c; end: 107aacdbf; -[SCStreamingResourceLoadingRequestHandler resourceLoader:shouldWaitForLoadingOfRequestedResource:] */

undefined8 FUN_107aacd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf4c7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010be27d00(param_1,param_2,param_4);
    }
  }
  else {
    func_0x00010be27680(param_1,param_2,param_4,1);
  }
  _objc_release(param_4);
  return 1;
}



/* Entry: 107aacdc0; end: 107aace17; -[SCStreamingResourceLoadingRequestHandler cancel] */

void FUN_107aacdc0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107aace18;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 107aace18; end: 107aace2b;  */

void FUN_107aace18(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010becacb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__tearDown_1125904d0);
  return;
}



/* Entry: 107aace2c; end: 107aaceab; -[SCStreamingResourceLoadingRequestHandler setViewLocation:] */

void FUN_107aace2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + 0x98) = param_3;
  puVar1 = PTR_PTR_1126c99b8;
  _objc_alloc_init(PTR_PTR_1126c99b8);
  func_0x000108534aa8(param_3);
  func_0x00010c182be0(puVar1,param_2,param_3);
  puVar2 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c1d5760();
  func_0x00010be88f60(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aaceac; end: 107aacfe3; -[SCStreamingResourceLoadingRequestHandler _handleContentInfoLoadingRequest:finishLoading:] */

void FUN_107aaceac(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcb5a0();
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010bf4c7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182140();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x50);
  func_0x00010bf4dac0();
  if (lVar3 == 1) {
    ppuVar4 = &PTR_PTR_110cd09f8;
  }
  else {
    if (lVar3 != 2) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db8b78;
      goto LAB_107aacf6c;
    }
    ppuVar4 = &PTR_PTR_110cd0a00;
  }
  ppuVar4 = (undefined **)*ppuVar4;
  _objc_retain(ppuVar4);
LAB_107aacf6c:
  uVar2 = param_3;
  func_0x00010bf4c7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00();
  _objc_release(uVar2);
  _objc_release(ppuVar4);
  uVar2 = param_3;
  func_0x00010bf4c7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174ca0();
  _objc_release(uVar2);
  if (param_4 != 0) {
    func_0x00010bfaf920(param_3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


