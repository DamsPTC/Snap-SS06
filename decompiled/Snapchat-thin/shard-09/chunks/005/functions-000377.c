/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ec0b18; end: 106ec0b27; -[SCSpectaclesTaskMarkTransferredContent setFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0b18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760bf0) = param_3;
  return;
}



/* Entry: 106ec0b28; end: 106ec0b3b; -[SCSpectaclesTaskMarkTransferredContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760bec,0);
  return;
}



/* Entry: 106ec0b3c; end: 106ec0b43; -[SCSpectaclesTaskMediaList type] */

undefined8 FUN_106ec0b3c(void)

{
  return 0;
}



/* Entry: 106ec0b44; end: 106ec0b5b; -[SCSpectaclesTaskMediaList isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ec0b44(long param_1)

{
  return *(long *)(param_1 + _DAT_112760bf4) != 0;
}



/* Entry: 106ec0b5c; end: 106ec0c5f; -[SCSpectaclesTaskMediaList isEqual:] */

ulong FUN_106ec0b5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  _objc_opt_class(param_1);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar4);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == uVar2) {
      uVar4 = 1;
    }
    else {
      uVar3 = param_3;
      func_0x00010c0c5580(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5580(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c071ae0(uVar3);
      _objc_release(param_1);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106ec0c60; end: 106ec0c9b; -[SCSpectaclesTaskMediaList hash] */

undefined8 FUN_106ec0c60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ec0c9c; end: 106ec0ca3; -[SCSpectaclesTaskMediaList maxReTryCount] */

undefined8 FUN_106ec0c9c(void)

{
  return 2;
}



/* Entry: 106ec0ca4; end: 106ec0caf; -[SCSpectaclesTaskMediaList nextRequest:] */

void FUN_106ec0ca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d3150,PTR_s_mediaListRequest_11260efa0);
  return;
}



/* Entry: 106ec0cb0; end: 106ec0d13; -[SCSpectaclesTaskMediaList handleResponse:] */

bool FUN_106ec0cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0c5580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4a80(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c0c5580(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106ec0d14; end: 106ec0d1b; -[SCSpectaclesTaskMediaList supportsBatchingOnTransferChannel:] */

undefined8 FUN_106ec0d14(void)

{
  return 1;
}



/* Entry: 106ec0d1c; end: 106ec0d3f; -[SCSpectaclesTaskMediaList requiredDelay] */

undefined8 FUN_106ec0d1c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c13f540();
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0x4014000000000000;
  }
  return uVar1;
}



/* Entry: 106ec0d40; end: 106ec0d4f; -[SCSpectaclesTaskMediaList retryCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec0d40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bf8);
}



/* Entry: 106ec0d50; end: 106ec0d5f; -[SCSpectaclesTaskMediaList setRetryCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112760bf8) = param_3;
  return;
}



/* Entry: 106ec0d60; end: 106ec0d6f; -[SCSpectaclesTaskMediaList mediaList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec0d60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bf4);
}



/* Entry: 106ec0d70; end: 106ec0daf; -[SCSpectaclesTaskMediaList setMediaList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760bf4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec0db0; end: 106ec0dc3; -[SCSpectaclesTaskMediaList .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760bf4,0);
  return;
}



/* Entry: 106ec0dc4; end: 106ec0e2f; -[SCSpectaclesTaskMediaTransfer initWithContent:] */

undefined1 * FUN_106ec0dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4c0c0(param_1);
  puStack_28 = PTR_PTR_1126f7b60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithContent_contentComponent_112535c38,param_3,uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 106ec0e30; end: 106ec0e83; -[SCSpectaclesTaskMediaTransfer contentComponent] */

void FUN_106ec0e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar2 = puVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0c0(puVar1);
  puVar1 = puVar2;
  func_0x00010be15900(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ec0e84; end: 106ec0edb; -[SCSpectaclesTaskMediaTransfer file] */

void FUN_106ec0e84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0c0(param_1);
  uVar2 = uVar1;
  func_0x00010be15900(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec0edc; end: 106ec0f13; -[SCSpectaclesTaskMediaTransfer setUsePartialEncryption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0edc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c27dd80();
  if (lVar1 == 5) {
    *(undefined1 *)(param_1 + _DAT_112760bfc) = param_3;
  }
  return;
}



/* Entry: 106ec0f14; end: 106ec0fbf; -[SCSpectaclesTaskMediaTransfer nextRequestWithRange:chunkSize:] */

void FUN_106ec0f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d3150;
  uVar1 = param_1;
  func_0x00010bfac9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12a100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290720(param_1);
  func_0x00010bf17120(puVar3,param_2,uVar2,param_3,param_4,param_5,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ec0fc0; end: 106ec118b; -[SCSpectaclesTaskMediaTransfer appendDataWithResponse:] */

ulong FUN_106ec0fc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0c4820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar8 = param_3;
    func_0x00010c0c6e40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 != 0) {
      uVar2 = param_3;
      func_0x00010c0c6e40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf4bc60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4cca0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar8);
      if ((int)uVar5 == 0) {
        uVar8 = 0;
        goto LAB_106ec1148;
      }
    }
    func_0x00010bfac9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4960(param_3);
    uVar8 = param_1;
    func_0x00010bf06b00();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126d2f50;
    if (((uVar8 & 1) == 0) && (param_1 != 0)) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c640(puVar1);
      _objc_release(puVar6);
    }
    _objc_release(param_1);
  }
LAB_106ec1148:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  uVar8 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c266960();
  _objc_release(uVar8);
  if ((uVar2 & 1) == 0) {
    uVar8 = param_3;
    func_0x00010bfac9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c09d900();
    _objc_release(uVar8);
    if (-1 < (long)uVar2) {
      uVar8 = param_3;
      func_0x00010bfac9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c12a120();
      _objc_release(uVar8);
      if (uVar2 != 0) {
        uVar8 = param_3;
        func_0x00010bf4bc60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4c0c0(param_3);
        uVar2 = uVar8;
        func_0x00010c070dc0(uVar8);
        _objc_release(uVar8);
        return uVar2;
      }
    }
  }
  return 1;
}



/* Entry: 106ec118c; end: 106ec1263; -[SCSpectaclesTaskMediaTransfer isFinished] */

ulong FUN_106ec118c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c266960();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bfac9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c09d900();
    _objc_release(uVar1);
    if (-1 < (long)uVar2) {
      uVar1 = param_1;
      func_0x00010bfac9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c12a120();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        uVar1 = param_1;
        func_0x00010bf4bc60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4c0c0(param_1);
        uVar2 = uVar1;
        func_0x00010c070dc0(uVar1,param_2,param_1);
        _objc_release(uVar1);
        return uVar2;
      }
    }
  }
  return 1;
}



/* Entry: 106ec1264; end: 106ec1273; -[SCSpectaclesTaskMediaTransfer usePartialEncryption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ec1264(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760bfc);
}



/* Entry: 106ec1274; end: 106ec132f; -[SCSpectaclesTaskMetadata initWithContentName:mediaList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ec1274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7b68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112760c00;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112760c04;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ec1330; end: 106ec1337; -[SCSpectaclesTaskMetadata type] */

undefined8 FUN_106ec1330(void)

{
  return 1;
}



/* Entry: 106ec1338; end: 106ec133f; -[SCSpectaclesTaskMetadata maxReTryCount] */

undefined8 FUN_106ec1338(void)

{
  return 5;
}



/* Entry: 106ec1340; end: 106ec1373; -[SCSpectaclesTaskMetadata isFinished] */

bool FUN_106ec1340(long param_1)

{
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106ec1374; end: 106ec1477; -[SCSpectaclesTaskMetadata isEqual:] */

ulong FUN_106ec1374(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  _objc_opt_class(param_1);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar4);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bf4cca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf4cca0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == uVar2) {
      uVar4 = 1;
    }
    else {
      uVar3 = param_3;
      func_0x00010bf4cca0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0(uVar3);
      _objc_release(param_1);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106ec1478; end: 106ec14b3; -[SCSpectaclesTaskMetadata hash] */

undefined8 FUN_106ec1478(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ec14b4; end: 106ec152f; -[SCSpectaclesTaskMetadata nextRequest:] */

void FUN_106ec14b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d3150;
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121880(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ec1530; end: 106ec15f3; -[SCSpectaclesTaskMetadata handleResponse:] */

bool FUN_106ec1530(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c082b20();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010c0cc0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c73c0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  return param_1 != 0;
}



/* Entry: 106ec15f4; end: 106ec15fb; -[SCSpectaclesTaskMetadata supportsBatchingOnTransferChannel:] */

undefined8 FUN_106ec15f4(void)

{
  return 1;
}



/* Entry: 106ec15fc; end: 106ec16c3; -[SCSpectaclesTaskMetadata metadataFile] */

void FUN_106ec15fc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = param_1;
  func_0x00010be5e820(param_1,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c23d0a0();
  puVar3 = puVar1;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d3158;
    _objc_alloc(PTR_PTR_1126d3158);
    puVar2 = puVar1;
    func_0x00010bf4cca0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c27dd80(puVar1);
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c15ebe0();
    func_0x00010c03dfc0(puVar3,param_2,puVar2,puVar4,puVar5);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ec16c4; end: 106ec16cb; -[SCSpectaclesTaskMetadata thumbnailFile] */

void FUN_106ec16c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaInfoForFileType__1125753a8,1);
  return;
}



/* Entry: 106ec16cc; end: 106ec16d3; -[SCSpectaclesTaskMetadata sdVideoFile] */

void FUN_106ec16cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaInfoForFileType__1125753a8,2);
  return;
}



/* Entry: 106ec16d4; end: 106ec16db; -[SCSpectaclesTaskMetadata hdVideoFile] */

void FUN_106ec16d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaInfoForFileType__1125753a8,3);
  return;
}



/* Entry: 106ec16dc; end: 106ec16e3; -[SCSpectaclesTaskMetadata imuFile] */

void FUN_106ec16dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaInfoForFileType__1125753a8,5);
  return;
}



/* Entry: 106ec16e4; end: 106ec16eb; -[SCSpectaclesTaskMetadata pictureFile] */

void FUN_106ec16e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaInfoForFileType__1125753a8,4);
  return;
}



/* Entry: 106ec16ec; end: 106ec16f3; -[SCSpectaclesTaskMetadata animatedThumbnailFile] */

void FUN_106ec16ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaInfoForFileType__1125753a8,0xd);
  return;
}



/* Entry: 106ec16f4; end: 106ec187b; -[SCSpectaclesTaskMetadata _mediaInfoForFileType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106ec16f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        lVar6 = *(long *)(lStack_128 + lVar8 * 8);
        lVar3 = lVar6;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bf4cca0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c071ae0(lVar3,param_2,lVar4);
        if ((int)lVar5 == 0) {
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        else {
          lVar5 = lVar6;
          func_0x00010c27dd80();
          _objc_release(lVar4);
          _objc_release(lVar3);
          if (lVar5 == param_3) {
            _objc_retain(lVar6);
            goto LAB_106ec1834;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  lVar6 = 0;
LAB_106ec1834:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return *(long *)(lVar1 + _DAT_112760c00);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return lVar6;
}



/* Entry: 106ec187c; end: 106ec188b; -[SCSpectaclesTaskMetadata contentName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec187c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c00);
}



/* Entry: 106ec188c; end: 106ec1897; -[SCSpectaclesTaskMetadata setContentName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec188c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ec1898; end: 106ec18a7; -[SCSpectaclesTaskMetadata metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec1898(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c08);
}



/* Entry: 106ec18a8; end: 106ec18e7; -[SCSpectaclesTaskMetadata setMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec18a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760c08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec18e8; end: 106ec18f7; -[SCSpectaclesTaskMetadata mediaList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec18e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c04);
}



/* Entry: 106ec18f8; end: 106ec1937; -[SCSpectaclesTaskMetadata setMediaList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec18f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760c04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec1938; end: 106ec1987; -[SCSpectaclesTaskMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec1938(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112760c04,0);
  _objc_storeStrong(param_1 + _DAT_112760c08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760c00,0);
  return;
}



/* Entry: 106ec1988; end: 106ec19df; -[SCSpectaclesTaskPicture initWithContent:transferChannel:] */

undefined1 * FUN_106ec1988(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7b70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithContent__1125de490);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c2197c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ec19e0; end: 106ec19e7; -[SCSpectaclesTaskPicture type] */

undefined8 FUN_106ec19e0(void)

{
  return 4;
}



/* Entry: 106ec19e8; end: 106ec19ef; -[SCSpectaclesTaskPicture contentComponent] */

undefined8 FUN_106ec19e8(void)

{
  return 2;
}



/* Entry: 106ec19f0; end: 106ec19f7; -[SCSpectaclesTaskShareWifiCredentials type] */

undefined8 FUN_106ec19f0(void)

{
  return 0xf;
}



/* Entry: 106ec19f8; end: 106ec19fb; -[SCSpectaclesTaskShareWifiCredentials isFinished] */

void FUN_106ec19f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_responseReceived_11262c918);
  return;
}



/* Entry: 106ec19fc; end: 106ec1a07; -[SCSpectaclesTaskShareWifiCredentials nextRequest:] */

void FUN_106ec19fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3150,PTR_s_shareWifiCredentialsRequest_1126686d0);
  return;
}



/* Entry: 106ec1a08; end: 106ec1a3f; -[SCSpectaclesTaskShareWifiCredentials handleResponse:] */

undefined8 FUN_106ec1a08(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c13bcc0(param_3);
  func_0x00010c1ed080(param_1,param_2,param_3 == 4);
  return 1;
}



/* Entry: 106ec1a40; end: 106ec1a4f; -[SCSpectaclesTaskShareWifiCredentials responseReceived] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ec1a40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760c0c);
}



/* Entry: 106ec1a50; end: 106ec1a5f; -[SCSpectaclesTaskShareWifiCredentials setResponseReceived:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec1a50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760c0c) = param_3;
  return;
}



/* Entry: 106ec1a60; end: 106ec1a67; -[SCSpectaclesTaskStartDeletionAsNeeded type] */

undefined8 FUN_106ec1a60(void)

{
  return 0xe;
}



/* Entry: 106ec1a68; end: 106ec1a73; -[SCSpectaclesTaskStartDeletionAsNeeded nextRequest:] */

void FUN_106ec1a68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3150,PTR_s_startAsNeededDeletionRequest_1126711b0);
  return;
}



/* Entry: 106ec1a74; end: 106ec1adf; -[SCSpectaclesTaskStartDeletionAsNeeded handleResponse:] */

undefined8 FUN_106ec1a74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c19cd00(param_1,param_2,1);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if ((lVar1 == 4) || (lVar1 = param_3, func_0x00010c13bcc0(), lVar1 == 3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106ec1ae0; end: 106ec1ae7; -[SCSpectaclesTaskStartDeletionAsNeeded supportsBatchingOnTransferChannel:] */

undefined8 FUN_106ec1ae0(void)

{
  return 1;
}



/* Entry: 106ec1ae8; end: 106ec1af3; -[SCSpectaclesTaskStartDeletionAsNeeded requiredDelay] */

undefined8 FUN_106ec1ae8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 106ec1af4; end: 106ec1b3f; -[SCSpectaclesTaskStartDeletionAsNeeded isEqual:] */

uint FUN_106ec1af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,param_1);
  _objc_release(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 106ec1b40; end: 106ec1b53; -[SCSpectaclesTaskStartDeletionAsNeeded hash] */

void FUN_106ec1b40(undefined8 param_1)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106ec1b54; end: 106ec1b63; -[SCSpectaclesTaskStartDeletionAsNeeded isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ec1b54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760c10);
}



/* Entry: 106ec1b64; end: 106ec1b73; -[SCSpectaclesTaskStartDeletionAsNeeded setFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec1b64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760c10) = param_3;
  return;
}



/* Entry: 106ec1b74; end: 106ec1b7b; -[SCSpectaclesTaskStereoCalibrationData type] */

undefined8 FUN_106ec1b74(void)

{
  return 0x11;
}



/* Entry: 106ec1b7c; end: 106ec1b93; -[SCSpectaclesTaskStereoCalibrationData isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ec1b7c(long param_1)

{
  return *(long *)(param_1 + _DAT_112760c14) != 0;
}



/* Entry: 106ec1b94; end: 106ec1c73; -[SCSpectaclesTaskStereoCalibrationData isEqual:] */

ulong FUN_106ec1b94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  _objc_opt_class(param_1);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c253820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c253820();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(param_1);
    if (uVar1 == param_1) {
      uVar2 = 1;
    }
    else if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x00010c071ae0(uVar1);
    }
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106ec1c74; end: 106ec1caf; -[SCSpectaclesTaskStereoCalibrationData hash] */

undefined8 FUN_106ec1c74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c253820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ec1cb0; end: 106ec1cbb; -[SCSpectaclesTaskStereoCalibrationData nextRequest:] */

void FUN_106ec1cb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3150,PTR_s_stereoCalibrationDataRequest_112672838);
  return;
}



/* Entry: 106ec1cbc; end: 106ec1d1f; -[SCSpectaclesTaskStereoCalibrationData handleResponse:] */

bool FUN_106ec1cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c253820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a7a0(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c253820(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106ec1d20; end: 106ec1d2f; -[SCSpectaclesTaskStereoCalibrationData stereoCalibrationData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec1d20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c14);
}



/* Entry: 106ec1d30; end: 106ec1d6f; -[SCSpectaclesTaskStereoCalibrationData setStereoCalibrationData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec1d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760c14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec1d70; end: 106ec1d83; -[SCSpectaclesTaskStereoCalibrationData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec1d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760c14,0);
  return;
}



/* Entry: 106ec1d84; end: 106ec1d8b; -[SCSpectaclesTaskThumbnail type] */

undefined8 FUN_106ec1d84(void)

{
  return 2;
}



/* Entry: 106ec1d8c; end: 106ec1d93; -[SCSpectaclesTaskThumbnail contentComponent] */

undefined8 FUN_106ec1d8c(void)

{
  return 0;
}



/* Entry: 106ec1d94; end: 106ec1d9b; -[SCSpectaclesTaskThumbnail supportsBatchingOnTransferChannel:] */

undefined8 FUN_106ec1d94(void)

{
  return 1;
}



/* Entry: 106ec1d9c; end: 106ec1e37; -[SCSpectaclesTaskTransfer initWithContent:contentComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ec1d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f7b78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112760c1c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760c20) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ec1e38; end: 106ec1e8b; -[SCSpectaclesTaskTransfer file] */

undefined8 FUN_106ec1e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106ec1e8c; end: 106ec1e93; -[SCSpectaclesTaskTransfer _burstTransferForTransferChannel:] */

undefined8 FUN_106ec1e8c(void)

{
  return 0;
}



/* Entry: 106ec1e94; end: 106ec1f7f; -[SCSpectaclesTaskTransfer nextRequest:] */

void FUN_106ec1e94(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bfac9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12a120();
  if (0 < (long)uVar2) {
    uVar2 = uVar1;
    func_0x00010c09d900();
    uVar5 = uVar1;
    func_0x00010c12a120();
    if ((long)uVar2 < (long)uVar5) {
      uVar3 = param_1;
      func_0x00010be91360(param_1,param_2,param_3);
      uVar4 = param_1;
      func_0x00010bdd70c0(param_1,param_2,param_3);
      uVar5 = uVar1;
      func_0x00010c12a120();
      uVar2 = uVar1;
      func_0x00010c09d900();
      uVar5 = uVar5 - uVar2;
      uVar2 = uVar5;
      if (uVar3 <= uVar5) {
        uVar2 = uVar3;
      }
      if ((int)uVar4 == 0) {
        uVar5 = uVar2;
      }
      uVar2 = uVar1;
      func_0x00010c09d900(uVar1);
      func_0x00010c0d9de0(param_1,param_2,uVar2,uVar5,uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106ec1f60;
    }
  }
  param_1 = 0;
LAB_106ec1f60:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ec1f80; end: 106ec1fd3; -[SCSpectaclesTaskTransfer nextRequestWithRange:chunkSize:] */

undefined * FUN_106ec1f80(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(lVar4);
  puVar1 = puVar5;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0c0(puVar5);
  puVar2 = puVar1;
  func_0x00010c080760();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = lVar4;
    func_0x00010c13bcc0();
    if (lVar3 == 4) {
      func_0x00010bf06b20(puVar5);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  }
  else {
    puVar5 = (undefined *)0x1;
  }
  _objc_release(lVar4);
  return puVar5;
}



/* Entry: 106ec1fd4; end: 106ec2077; -[SCSpectaclesTaskTransfer handleResponse:] */

ulong FUN_106ec1fd4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4c0c0(param_1);
  uVar3 = uVar1;
  func_0x00010c080760(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_3;
    func_0x00010c13bcc0();
    if (lVar4 == 4) {
      func_0x00010bf06b20(param_1,param_2,param_3);
    }
    else {
      param_1 = 0;
    }
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106ec2078; end: 106ec20d7; -[SCSpectaclesTaskTransfer appendDataWithResponse:] */

undefined * FUN_106ec2078(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  puVar2 = puVar1;
  func_0x00010be3ee20();
  if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be91390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__requestLengthForCheerios__112581e80,lVar3);
    return puVar1;
  }
  puVar2 = puVar1;
  func_0x00010be40e80();
  if ((int)puVar2 == 0) {
    if (lVar3 == 2) {
      puVar2 = (undefined *)0x400;
    }
    else if (lVar3 == 1) {
      func_0x00010bf00f40();
      puVar2 = (undefined *)0x200000;
      if ((int)puVar1 == 0) {
        puVar2 = (undefined *)0x100000;
      }
    }
    else {
      puVar2 = (undefined *)0x40000;
    }
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be913b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__requestLengthForHermosa__112581e88,lVar3);
  return puVar1;
}



/* Entry: 106ec20d8; end: 106ec216b; -[SCSpectaclesTaskTransfer _requestLength:] */

undefined8 FUN_106ec20d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3ee20();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be91390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__requestLengthForCheerios__112581e80,param_3);
    return param_1;
  }
  uVar1 = param_1;
  func_0x00010be40e80();
  if ((int)uVar1 == 0) {
    if (param_3 == 2) {
      uVar1 = 0x400;
    }
    else if (param_3 == 1) {
      func_0x00010bf00f40();
      uVar1 = 0x200000;
      if ((int)param_1 == 0) {
        uVar1 = 0x100000;
      }
    }
    else {
      uVar1 = 0x40000;
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be913b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestLengthForHermosa__112581e88,param_3);
  return param_1;
}



/* Entry: 106ec216c; end: 106ec21e7; -[SCSpectaclesTaskTransfer _isCheerios] */

bool FUN_106ec216c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c6c20();
  if ((int)uVar3 == 0xb) {
    bVar1 = true;
  }
  else {
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0c6c20();
    bVar1 = (int)uVar3 == 0xc;
    _objc_release(param_1);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106ec21e8; end: 106ec2263; -[SCSpectaclesTaskTransfer _isHermosa] */

bool FUN_106ec21e8(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c6c20();
  if ((int)uVar3 == 9) {
    bVar1 = true;
  }
  else {
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0c6c20();
    bVar1 = (int)uVar3 == 10;
    _objc_release(param_1);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106ec2264; end: 106ec2283; -[SCSpectaclesTaskTransfer _requestLengthForCheerios:] */

undefined8 FUN_106ec2264(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x1800;
  if (param_3 != 2) {
    uVar1 = 0x40000;
  }
  uVar2 = 0x1000000;
  if (param_3 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106ec2284; end: 106ec22a3; -[SCSpectaclesTaskTransfer _requestLengthForHermosa:] */

undefined8 FUN_106ec2284(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x400;
  if (param_3 != 2) {
    uVar1 = 0x40000;
  }
  uVar2 = 0x1000000;
  if (param_3 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106ec22a4; end: 106ec22e3; -[SCSpectaclesTaskTransfer isResuming] */

bool FUN_106ec22a4(long param_1)

{
  long lVar1;
  
  func_0x00010bfac9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c09d900();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106ec22e4; end: 106ec2337; -[SCSpectaclesTaskTransfer isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ec22e4(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(puVar5);
  puVar3 = puVar2;
  _objc_opt_class(puVar2);
  puVar4 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar6 = (int)*(undefined8 *)(puVar2 + _DAT_112760c1c);
    puVar3 = puVar5;
    func_0x00010bf4bc60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar6 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bf4c0c0(puVar2);
      puVar4 = puVar5;
      func_0x00010bf4c0c0(puVar5);
      bVar1 = puVar2 == puVar4;
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  return bVar1;
}



/* Entry: 106ec2338; end: 106ec23ef; -[SCSpectaclesTaskTransfer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ec2338(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  _objc_opt_class(param_1);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar4 = (int)*(undefined8 *)(param_1 + (long)_DAT_112760c1c);
    uVar2 = param_3;
    func_0x00010bf4bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar4 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bf4c0c0(param_1);
      uVar3 = param_3;
      func_0x00010bf4c0c0(param_3);
      bVar1 = param_1 == uVar3;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106ec23f0; end: 106ec249f; -[SCSpectaclesTaskTransfer hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106ec23f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112760c1c);
  func_0x00010bfde980(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bf4c0c0(param_1);
  func_0x00010c0df840(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfde980();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27dd80(param_1);
  func_0x00010c0df840(puVar5,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfde980();
  _objc_release(puVar5);
  _objc_release(puVar3);
  return (ulong)puVar4 ^ (ulong)puVar6 ^ uVar1;
}



/* Entry: 106ec24a0; end: 106ec24af; -[SCSpectaclesTaskTransfer content] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec24a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c1c);
}



/* Entry: 106ec24b0; end: 106ec24bf; -[SCSpectaclesTaskTransfer contentComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec24b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c20);
}



/* Entry: 106ec24c0; end: 106ec24cf; -[SCSpectaclesTaskTransfer allowBurstRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ec24c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760c18);
}



/* Entry: 106ec24d0; end: 106ec24df; -[SCSpectaclesTaskTransfer setAllowBurstRequests:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec24d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760c18) = param_3;
  return;
}



/* Entry: 106ec24e0; end: 106ec24f3; -[SCSpectaclesTaskTransfer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec24e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760c1c,0);
  return;
}



/* Entry: 106ec24f4; end: 106ec2563; -[SCSpectaclesManager pairingStateShortCode] */

void FUN_106ec24f4(undefined **param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = param_1;
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e8af38;
  }
  else {
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010c0f34a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}


