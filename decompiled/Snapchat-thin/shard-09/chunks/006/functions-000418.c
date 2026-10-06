/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f92624; end: 106f9262b; -[SCSpectaclesMalibuNetworkClient channelDidWriteData:] */

void FUN_106f92624(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a67d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHasProcessedData__112647410,1);
  return;
}



/* Entry: 106f9262c; end: 106f9264f; -[SCSpectaclesMalibuNetworkClient channelDidOpen:] */

void FUN_106f9262c(undefined8 param_1)

{
  func_0x00010bebf540();
                    /* WARNING: Could not recover jumptable at 0x00010be0b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exchangeNonces_112560740);
  return;
}



/* Entry: 106f92650; end: 106f92667; -[SCSpectaclesMalibuNetworkClient connectivityDelegate] */

void FUN_106f92650(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f92668; end: 106f92673; -[SCSpectaclesMalibuNetworkClient setConnectivityDelegate:] */

void FUN_106f92668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106f92674; end: 106f9268b; -[SCSpectaclesMalibuNetworkClient messagingDelegate] */

void FUN_106f92674(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f9268c; end: 106f92697; -[SCSpectaclesMalibuNetworkClient setMessagingDelegate:] */

void FUN_106f9268c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106f92698; end: 106f9269f; -[SCSpectaclesMalibuNetworkClient encryptor] */

undefined8 FUN_106f92698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f926a0; end: 106f926cf; -[SCSpectaclesMalibuNetworkClient setEncryptor:] */

void FUN_106f926a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f926d0; end: 106f926d7; -[SCSpectaclesMalibuNetworkClient stream] */

undefined8 FUN_106f926d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f926d8; end: 106f92707; -[SCSpectaclesMalibuNetworkClient setStream:] */

void FUN_106f926d8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f92708; end: 106f9270f; -[SCSpectaclesMalibuNetworkClient messageBuffer] */

undefined8 FUN_106f92708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f92710; end: 106f9273f; -[SCSpectaclesMalibuNetworkClient setMessageBuffer:] */

void FUN_106f92710(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f92740; end: 106f92747; -[SCSpectaclesMalibuNetworkClient activityTimer] */

undefined8 FUN_106f92740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f92748; end: 106f92777; -[SCSpectaclesMalibuNetworkClient setActivityTimer:] */

void FUN_106f92748(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f92778; end: 106f9277f; -[SCSpectaclesMalibuNetworkClient networkTimeout] */

undefined8 FUN_106f92778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106f92780; end: 106f92787; -[SCSpectaclesMalibuNetworkClient setNetworkTimeout:] */

void FUN_106f92780(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 106f92788; end: 106f9278f; -[SCSpectaclesMalibuNetworkClient hasProcessedData] */

undefined1 FUN_106f92788(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106f92790; end: 106f92797; -[SCSpectaclesMalibuNetworkClient setHasProcessedData:] */

void FUN_106f92790(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106f92798; end: 106f9279f; -[SCSpectaclesMalibuNetworkClient isActive] */

undefined1 FUN_106f92798(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106f927a0; end: 106f927a7; -[SCSpectaclesMalibuNetworkClient setActive:] */

void FUN_106f927a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106f927a8; end: 106f927af; -[SCSpectaclesMalibuNetworkClient suspended] */

undefined1 FUN_106f927a8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106f927b0; end: 106f927b7; -[SCSpectaclesMalibuNetworkClient setSuspended:] */

void FUN_106f927b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106f927b8; end: 106f927bf; -[SCSpectaclesMalibuNetworkClient lastCancellationRequestId] */

undefined8 FUN_106f927b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106f927c0; end: 106f927c7; -[SCSpectaclesMalibuNetworkClient setLastCancellationRequestId:] */

void FUN_106f927c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106f927c8; end: 106f927cf; -[SCSpectaclesMalibuNetworkClient lastReceivedResponseId] */

undefined8 FUN_106f927c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106f927d0; end: 106f927d7; -[SCSpectaclesMalibuNetworkClient setLastReceivedResponseId:] */

void FUN_106f927d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106f927d8; end: 106f927df; -[SCSpectaclesMalibuNetworkClient nextFreeRequestId] */

undefined8 FUN_106f927d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106f927e0; end: 106f927e7; -[SCSpectaclesMalibuNetworkClient setNextFreeRequestId:] */

void FUN_106f927e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 106f927e8; end: 106f9283f; -[SCSpectaclesMalibuNetworkClient .cxx_destruct] */

void FUN_106f927e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106f92840; end: 106f928b3; -[SCSpectaclesMalibuNetworkRequest initWithMalibuRequest:] */

undefined1 * FUN_106f92840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8100;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f928b4; end: 106f92d9f; +[SCSpectaclesMalibuNetworkRequest requestByBatchingRequests:] */

void FUN_106f928b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010c0b7c20(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c27dd80();
        func_0x00010c21acc0(puVar1,param_2,lVar4);
        _objc_release(lVar3);
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfd4560();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = lVar7;
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf108e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16c7c0(puVar1,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfd7580();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = lVar7;
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bfbc4e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a1880(puVar1,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0c6320();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          puVar5 = puVar1;
          func_0x00010c0c6300(puVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0c6300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(puVar5);
        }
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0ae1e0();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          puVar5 = puVar1;
          func_0x00010c0ae1c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0ae1c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(puVar5);
        }
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf2f660();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          puVar5 = puVar1;
          func_0x00010bf2f640(puVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf2f640();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(puVar5);
        }
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfde860();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = lVar7;
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c2a54e0();
          func_0x00010c225940(puVar1,param_2,lVar4);
          _objc_release(lVar3);
        }
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfdcb80();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = lVar7;
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c253840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20a7c0(puVar1,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        lVar3 = lVar7;
        func_0x00010c0b7c20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfd7820();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          func_0x00010c0b7c20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010bfcd6a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a3f60(puVar1,param_2,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_alloc();
  func_0x00010c0281a0();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126d39e8;
    _objc_alloc_init(PTR_PTR_1126d39e8);
    func_0x00010c21acc0();
    puVar5 = PTR_PTR_1126d3a18;
    _objc_alloc_init(PTR_PTR_1126d3a18);
    func_0x00010c21acc0();
    puVar6 = puVar1;
    func_0x00010c0c6300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
    _objc_alloc(param_3);
    func_0x00010c0281a0();
    _objc_release(puVar5);
    _objc_release(puVar1);
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f92da0; end: 106f92e3f; +[SCSpectaclesMalibuNetworkRequest mediaListRequest] */

void FUN_106f92da0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a18;
  _objc_alloc_init(PTR_PTR_1126d3a18);
  func_0x00010c21acc0();
  puVar3 = puVar1;
  func_0x00010c0c6300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f92e40; end: 106f92e5f; +[SCSpectaclesMalibuNetworkRequest _mediaTypeFromFileType:] */

undefined4 FUN_106f92e40(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xe) {
    return *(undefined4 *)(&UNK_10de19580 + param_3 * 4);
  }
  return 4;
}



/* Entry: 106f92e60; end: 106f92fb3; +[SCSpectaclesMalibuNetworkRequest readRequestWithFilename:] */

void FUN_106f92e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a18;
  _objc_alloc_init(PTR_PTR_1126d3a18);
  func_0x00010c21acc0();
  puVar3 = PTR_PTR_1126d2f50;
  func_0x00010bf4ccc0(PTR_PTR_1126d2f50,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0c4f20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21fc80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d2f50;
  func_0x00010bfad140(PTR_PTR_1126d2f50,param_2,param_3);
  _objc_release(param_3);
  func_0x00010be5ed40(param_1,param_2,puVar3);
  puVar3 = puVar2;
  func_0x00010c0c4f20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0c6300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f92fb4; end: 106f931bb; +[SCSpectaclesMalibuNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:] */

void FUN_106f92fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  uVar1 = param_4 + param_5;
  puVar3 = PTR_PTR_1126d3a18;
  for (; PTR_PTR_1126d3a18 = puVar3, param_4 < uVar1; param_4 = param_4 + param_6) {
    _objc_alloc_init(puVar3);
    func_0x00010c21acc0();
    puVar4 = PTR_PTR_1126d2f50;
    func_0x00010bf4ccc0(PTR_PTR_1126d2f50,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0c4f20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fc80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126d2f50;
    func_0x00010bfad140(PTR_PTR_1126d2f50,param_2,param_3);
    func_0x00010be5ed40(param_1,param_2,puVar4);
    puVar4 = puVar3;
    func_0x00010c0c4f20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0c4f20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209380();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0c4f20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba820();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c0c6300(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d3a18;
  }
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f931bc; end: 106f931c3; +[SCSpectaclesMalibuNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:] */

undefined8 FUN_106f931bc(void)

{
  return 0;
}



/* Entry: 106f931c4; end: 106f932a7; +[SCSpectaclesMalibuNetworkRequest markTransferredRequestForContentNamed:includeHd:] */

void FUN_106f931c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a18;
  _objc_alloc_init(PTR_PTR_1126d3a18);
  func_0x00010c21acc0();
  puVar3 = puVar2;
  func_0x00010c0c4ee0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21fc80();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0c6300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f932a8; end: 106f933b3; +[SCSpectaclesMalibuNetworkRequest deletionRequestForContentNamed:includeHd:] */

void FUN_106f932a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a18;
  _objc_alloc_init(PTR_PTR_1126d3a18);
  func_0x00010c21acc0();
  puVar3 = puVar2;
  func_0x00010c0c4ea0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21fc80();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0c4ea0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abce0();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0c6300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f933b4; end: 106f93453; +[SCSpectaclesMalibuNetworkRequest startAsNeededDeletionRequest] */

void FUN_106f933b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a18;
  _objc_alloc_init(PTR_PTR_1126d3a18);
  func_0x00010c21acc0();
  puVar3 = puVar1;
  func_0x00010c0c6300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93454; end: 106f934f3; +[SCSpectaclesMalibuNetworkRequest crashLogFileListRequest] */

void FUN_106f93454(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a20;
  _objc_alloc_init(PTR_PTR_1126d3a20);
  func_0x00010c21acc0();
  puVar3 = puVar1;
  func_0x00010c0ae1c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f934f4; end: 106f9365f; +[SCSpectaclesMalibuNetworkRequest crashLogFileRequestWithFilename:range:] */

void FUN_106f934f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a20;
  _objc_alloc_init(PTR_PTR_1126d3a20);
  func_0x00010c21acc0();
  puVar3 = puVar2;
  func_0x00010c0a6760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0a6760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209380();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0a6760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba820();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0ae1c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93660; end: 106f93777; +[SCSpectaclesMalibuNetworkRequest firmwareWriteRequest:start:] */

void FUN_106f93660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21acc0();
  puVar2 = puVar1;
  func_0x00010bfbc4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189980();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209780();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7b00();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93778; end: 106f938bf; +[SCSpectaclesMalibuNetworkRequest gpsWriteRequest:] */

void FUN_106f93778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21acc0();
  puVar2 = puVar1;
  func_0x00010bfcd6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfacfe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209380();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c08fa60(param_3);
  puVar2 = puVar1;
  func_0x00010bfcd6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfacfe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba820();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ba80();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f938c0; end: 106f9391f; +[SCSpectaclesMalibuNetworkRequest shareWifiCredentialsRequest] */

void FUN_106f938c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  func_0x00010c225940(puVar1,param_2,1);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93920; end: 106f93973; +[SCSpectaclesMalibuNetworkRequest shareWifiCredentialsStatusRequest] */

void FUN_106f93920(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93974; end: 106f93a13; +[SCSpectaclesMalibuNetworkRequest analyticsFilesListRequest] */

void FUN_106f93974(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a20;
  _objc_alloc_init(PTR_PTR_1126d3a20);
  func_0x00010c21acc0();
  puVar3 = puVar1;
  func_0x00010c0ae1c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93a14; end: 106f93b57; +[SCSpectaclesMalibuNetworkRequest analyticsFilesGetWithFilename:range:] */

void FUN_106f93a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a20;
  _objc_alloc_init(PTR_PTR_1126d3a20);
  func_0x00010c21acc0();
  puVar3 = PTR_PTR_1126d3a28;
  _objc_alloc_init(PTR_PTR_1126d3a28);
  func_0x00010c1cafa0();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c11f2a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209380();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c11f2a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba820();
  _objc_release(puVar4);
  func_0x00010c1c0280(puVar2,param_2,puVar3);
  puVar4 = puVar1;
  func_0x00010c0ae1c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93b58; end: 106f93bf7; +[SCSpectaclesMalibuNetworkRequest analyticsFilesDeleteRequest] */

void FUN_106f93b58(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3a20;
  _objc_alloc_init(PTR_PTR_1126d3a20);
  func_0x00010c21acc0();
  puVar3 = puVar1;
  func_0x00010c0ae1c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93bf8; end: 106f93c77; +[SCSpectaclesMalibuNetworkRequest stereoCalibrationDataRequest] */

void FUN_106f93bf8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d39e8;
  _objc_alloc_init(PTR_PTR_1126d39e8);
  func_0x00010c21acc0();
  puVar2 = puVar1;
  func_0x00010c253840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199d00();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0281a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f93c78; end: 106f93c7f; +[SCSpectaclesMalibuNetworkRequest lagunaPairingRequestWithAmbaRequest:] */

undefined8 FUN_106f93c78(void)

{
  return 0;
}



/* Entry: 106f93c80; end: 106f93c87; -[SCSpectaclesMalibuNetworkRequest malibuRequest] */

undefined8 FUN_106f93c80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f93c88; end: 106f93c93; -[SCSpectaclesMalibuNetworkRequest .cxx_destruct] */

void FUN_106f93c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f93c94; end: 106f93d17; -[SCSpectaclesMalibuNetworkResponse initWithMalibuResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106f93c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8108;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761cc8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f93d18; end: 106f93d6b; -[SCSpectaclesMalibuNetworkResponse responseStatus] */

undefined8 FUN_106f93d18(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c252d60();
  _objc_release(param_1);
  if ((uint)uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10de195b8 + (uVar1 & 0xffffffff) * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106f93d6c; end: 106f93da7; -[SCSpectaclesMalibuNetworkResponse serializedSize] */

undefined8 FUN_106f93d6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15ebe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f93da8; end: 106f93dc7; +[SCSpectaclesMalibuNetworkResponse _fileTypeFromMediaType:] */

undefined8 FUN_106f93da8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 8) {
    return *(undefined8 *)(&UNK_10de195d0 + (ulong)param_3 * 8);
  }
  return 0;
}



/* Entry: 106f93dc8; end: 106f9408f; -[SCSpectaclesMalibuNetworkResponse mediaList] */

void FUN_106f93dc8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puStack_208;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bfd9040();
  _objc_release();
  if ((int)puVar13 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    puVar13 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar13;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf12840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar13);
    puStack_208 = puVar3;
    func_0x00010bf52a60(puVar3,param_2,&uStack_1b0,auStack_f0,0x10);
    if (puStack_208 != (undefined *)0x0) {
      lVar12 = *plStack_1a0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          lVar16 = *(long *)(lStack_1a8 + (long)puVar13 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lVar4 = lVar16;
          func_0x00010c0c4040();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf52a60();
          if (lVar5 != 0) {
            lVar15 = *plStack_1e0;
            do {
              lVar14 = 0;
              do {
                if (*plStack_1e0 != lVar15) {
                  _objc_enumerationMutation(lVar4);
                }
                uVar17 = *(ulong *)(lStack_1e8 + lVar14 * 8);
                puVar2 = PTR_PTR_1126d3158;
                _objc_alloc();
                lVar6 = lVar16;
                func_0x00010c294d60(lVar16);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = param_1;
                _objc_opt_class(param_1);
                uVar8 = uVar17;
                func_0x00010c27dd80(uVar17);
                func_0x00010be15a80(puVar7,param_2,uVar8);
                func_0x00010c23d0a0(uVar17);
                func_0x00010c03dfc0(puVar2,param_2,lVar6,puVar7,uVar17 & 0xffffffff);
                func_0x00010befa120(puVar1,param_2,puVar2);
                _objc_release(puVar2);
                _objc_release(lVar6);
                lVar14 = lVar14 + 1;
              } while (lVar5 != lVar14);
              lVar5 = lVar4;
              func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar5 != 0);
          }
          _objc_release(lVar4);
          puVar13 = puVar13 + 1;
        } while (puVar13 != puStack_208);
        puStack_208 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (puStack_208 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar13 = puVar1;
    func_0x00010bf51e00();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bfd9040();
    if ((int)puVar13 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar1;
      func_0x00010c0b7c40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar7;
      func_0x00010bfd8f80();
      if ((int)puVar13 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar1;
        func_0x00010c0b7c40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar13;
        func_0x00010c0c64c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0c4820();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bfde280();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar13);
        _objc_release(puVar7);
        _objc_release(puVar3);
        _objc_release(puVar2);
        if ((int)puVar11 == 0) {
          puVar13 = (undefined *)0x0;
          goto _objc_autoreleaseReturnValue;
        }
        func_0x00010c0b7c40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c0c64c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0c4820();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar7;
        func_0x00010c294d60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
      }
      _objc_release(puVar7);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106f94090; end: 106f941ef; -[SCSpectaclesMalibuNetworkResponse mediaUUID] */

void FUN_106f94090(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfd9040();
  if ((int)uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bfd8f80();
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_1;
      func_0x00010c0b7c40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfde280();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar6 == 0) {
        uVar7 = 0;
        goto LAB_106f941cc;
      }
      func_0x00010c0b7c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_106f941cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106f941f0; end: 106f943e7; -[SCSpectaclesMalibuNetworkResponse mediaData] */

void FUN_106f941f0(long param_1)

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
  long lVar10;
  long lVar11;
  
  lVar1 = param_1;
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010bfd9040();
  if ((int)lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010bfd8f80();
    if ((int)lVar11 == 0) {
LAB_106f943a0:
      lVar11 = 0;
    }
    else {
      lVar11 = param_1;
      func_0x00010c0b7c40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar11;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfd6200();
      if ((int)lVar6 == 0) {
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar11);
        goto LAB_106f943a0;
      }
      lVar6 = param_1;
      func_0x00010c0b7c40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c08fa60();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar11);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar10 == 0) {
        lVar11 = 0;
        goto LAB_106f943bc;
      }
      func_0x00010c0b7c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_106f943bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 106f943e8; end: 106f94593; -[SCSpectaclesMalibuNetworkResponse mediaDataRange] */

undefined1  [16] FUN_106f943e8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar1 = param_1;
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfd9040();
  if ((int)uVar7 == 0) {
LAB_106f94558:
    uVar6 = 0;
    uVar7 = 0x7fffffffffffffff;
  }
  else {
    uVar7 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bfd8f80();
    if ((uVar2 & 1) == 0) {
      _objc_release(uVar6);
      _objc_release(uVar7);
      goto LAB_106f94558;
    }
    uVar2 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd3ca0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar1);
    if ((int)uVar5 == 0) {
      uVar6 = 0;
      uVar7 = 0x7fffffffffffffff;
      goto LAB_106f94568;
    }
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bef1a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(param_1);
    uVar7 = uVar1;
    func_0x00010bfdca00();
    if (((int)uVar7 == 0) || (uVar7 = uVar1, func_0x00010bfd84c0(), (int)uVar7 == 0))
    goto LAB_106f94558;
    uVar7 = uVar1;
    func_0x00010c24d960(uVar1);
    uVar7 = uVar7 & 0xffffffff;
    uVar6 = uVar1;
    func_0x00010c08fa40(uVar1);
    uVar6 = uVar6 & 0xffffffff;
  }
  _objc_release(uVar1);
LAB_106f94568:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 106f94594; end: 106f94617; -[SCSpectaclesMalibuNetworkResponse metadata] */

void FUN_106f94594(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c0c4820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d3a30;
    _objc_alloc(PTR_PTR_1126d3a30);
    func_0x00010c0c4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028180(puVar2,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f94618; end: 106f9485b; -[SCSpectaclesMalibuNetworkResponse logFileList] */

void FUN_106f94618(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfd8ae0();
  if (((ulong)puVar5 & 1) == 0) {
    _objc_release();
LAB_106f94818:
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c0a6700();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release();
    if (puVar8 == (undefined *)0x0) goto LAB_106f94818;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0a66e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_1);
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          uVar6 = *(ulong *)(lStack_128 + (long)puVar8 * 8);
          uVar3 = uVar6;
          func_0x00010bfd9620();
          if ((((int)uVar3 != 0) && (uVar3 = uVar6, func_0x00010bfdc180(), (int)uVar3 != 0)) &&
             (uVar3 = uVar6, func_0x00010c23d0a0(), (int)uVar3 != 0)) {
            puVar4 = PTR_PTR_1126d3850;
            _objc_alloc();
            uVar3 = uVar6;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d0a0(uVar6);
            func_0x00010c012ee0(puVar4,param_2,uVar3,uVar6 & 0xffffffff);
            func_0x00010befa120(puVar5,param_2,puVar4);
            _objc_release(puVar4);
            _objc_release(uVar3);
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfd8ae0();
    if ((int)puVar5 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar1;
      func_0x00010c0b7c40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c0ae600();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bfd8ac0();
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar2);
      if ((int)puVar4 == 0) {
        puVar5 = (undefined *)0x0;
        goto _objc_autoreleaseReturnValue;
      }
      func_0x00010c0b7c40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0ae600();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0a4900();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar2);
      puVar2 = puVar1;
    }
    _objc_release(puVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f9485c; end: 106f94957; -[SCSpectaclesMalibuNetworkResponse logData] */

void FUN_106f9485c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfd8ae0();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8ac0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar4 = 0;
      goto LAB_106f94940;
    }
    func_0x00010c0b7c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0a4900();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f94940:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f94958; end: 106f949af; -[SCSpectaclesMalibuNetworkResponse wifiSharingStatus] */

undefined8 FUN_106f94958(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010c0b7c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2a5500();
  func_0x00010bde9460(uVar1,param_2,uVar2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f949b0; end: 106f94aff; -[SCSpectaclesMalibuNetworkResponse stereoCalibrationData] */

void FUN_106f949b0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x00010c0b7c40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfdcb60();
  if ((int)uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0b7c40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c253820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bfd6f40();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar7);
      uVar7 = 0;
    }
    else {
      uVar3 = param_1;
      func_0x00010c0b7c40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c253820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf9f4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar6 == 0) {
        uVar7 = 0;
        goto LAB_106f94adc;
      }
      func_0x00010c0b7c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c253820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bf9f4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_106f94adc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106f94b00; end: 106f94b13; +[SCSpectaclesMalibuNetworkResponse _convertShareWifiRequestStatus:] */

long FUN_106f94b00(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (ulong)(param_3 - 1U) + 2;
  if (4 < param_3 - 1U) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 106f94b14; end: 106f94b23; -[SCSpectaclesMalibuNetworkResponse malibuResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f94b14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761cc8);
}



/* Entry: 106f94b24; end: 106f94b37; -[SCSpectaclesMalibuNetworkResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f94b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761cc8,0);
  return;
}



/* Entry: 106f94b38; end: 106f94bbf; -[SCSpectaclesMalibuNordicMessageBuffer initWithDelegate:] */

undefined1 * FUN_106f94b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f94bc0; end: 106f94c47; -[SCSpectaclesMalibuNordicMessageBuffer dataWithTlvHeaderPrepended:messageType:] */

void FUN_106f94bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uStack_24;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  uStack_24 = param_4 | (int)uVar1 << 8;
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,&uStack_24,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ae0();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f94c48; end: 106f94cab; -[SCSpectaclesMalibuNordicMessageBuffer processData:] */

void FUN_106f94c48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010c134be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ae0();
    _objc_release(param_3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__parseBuffer_112579980);
  return;
}



/* Entry: 106f94cac; end: 106f94dfb; -[SCSpectaclesMalibuNordicMessageBuffer _parseBuffer] */

void FUN_106f94cac(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c134be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (3 < uVar2) {
    uVar1 = param_1;
    func_0x00010c134be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    uVar3 = param_1;
    func_0x00010becc640();
    _objc_release(uVar1);
    if (uVar3 + 4 <= uVar2) {
      func_0x00010becc640(param_1);
      uVar1 = param_1;
      func_0x00010c134be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c25eac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010becc660(param_1);
      uVar1 = param_1;
      func_0x00010c134be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130ce0();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb2e0();
      _objc_release(uVar1);
      func_0x00010be6ff80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 106f94dfc; end: 106f94e43; -[SCSpectaclesMalibuNordicMessageBuffer _tlvLength] */

ulong FUN_106f94dfc(long param_1)

{
  long lVar1;
  
  func_0x00010c134be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  _objc_release(param_1);
  return (ulong)*(uint3 *)(lVar1 + 1);
}



/* Entry: 106f94e44; end: 106f94e83; -[SCSpectaclesMalibuNordicMessageBuffer _tlvType] */

undefined1 FUN_106f94e44(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  func_0x00010c134be0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar1 = *puVar2;
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f94e84; end: 106f94e8b; -[SCSpectaclesMalibuNordicMessageBuffer requestBuffer] */

undefined8 FUN_106f94e84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f94e8c; end: 106f94ebb; -[SCSpectaclesMalibuNordicMessageBuffer setRequestBuffer:] */

void FUN_106f94e8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f94ebc; end: 106f94ed3; -[SCSpectaclesMalibuNordicMessageBuffer delegate] */

void FUN_106f94ebc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f94ed4; end: 106f94edf; -[SCSpectaclesMalibuNordicMessageBuffer setDelegate:] */

void FUN_106f94ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106f94ee0; end: 106f94f0b; -[SCSpectaclesMalibuNordicMessageBuffer .cxx_destruct] */

void FUN_106f94ee0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f94f0c; end: 106f9510b; -[SCSpectaclesMalibuPeripheral initWithPeripheral:delegate:] */

undefined1 *
FUN_106f94f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f8118;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d37e8;
    func_0x00010c22bca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3240;
    puVar5 = PTR_PTR_1126d38c8;
    func_0x00010c0b7ca0(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d38c8;
    func_0x00010c0b7cc0(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d38c8;
    func_0x00010c0b7c80(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95e80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf550e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d3a38;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f9510c; end: 106f951d3; -[SCSpectaclesMalibuPeripheral openStream] */

void FUN_106f9510c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f951d4; end: 106f95217;  */

void FUN_106f951d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8e20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f95218; end: 106f9529f; -[SCSpectaclesMalibuPeripheral isReadyToExchangeMessages] */

ulong FUN_106f95218(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0791a0();
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf48ce0();
    if ((uVar3 & 1) == 0) {
      func_0x00010bf93da0(param_1);
    }
    else {
      param_1 = 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106f952a0; end: 106f953d7; -[SCSpectaclesMalibuPeripheral setupEncryptionWithKey:] */

void FUN_106f952a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c195c40(param_1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9a40();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106f953d8; end: 106f955af;  */

void FUN_106f953d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126d38b8;
  _objc_alloc_init(PTR_PTR_1126d38b8);
  func_0x00010c195d80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf94040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c195ce0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010bf6b020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f99e0(puVar2,param_2,puVar1,puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126d3178;
    func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c21ac80();
    _objc_release(puVar3);
    puVar3 = puVar1;
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f99e0(puVar3,param_2,puVar1,puVar4);
      _objc_release(puVar4);
    }
    else {
      puVar4 = PTR_PTR_1126b6718;
      func_0x00010bf9aaa0(PTR_PTR_1126b6718,param_2,puVar2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7360(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c0ef2a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(puVar1,param_2,puVar3);
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f955b0; end: 106f956c7; -[SCSpectaclesMalibuPeripheral _handleEncryptionSetupResponse:] */

void FUN_106f955b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010c1d7360(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010bf94040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf93f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1ef020(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf94040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf48ce0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f99e0(uVar1,param_2,param_1,puVar4);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c0f9a40(uVar1,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f956c8; end: 106f957bf; -[SCSpectaclesMalibuPeripheral sendRequest:] */

void FUN_106f956c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f957c0; end: 106f95bb3;  */

/* WARNING: Possible PIC construction at 0x000106f95850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f95854) */

void FUN_106f957c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar8 = puVar1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c0791a0();
  _objc_release(puVar8);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010bf6b020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 2;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = puVar1;
    func_0x00010c142380();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = &uStack_130;
    puStack_138 = puVar2;
    func_0x00010bf52a60();
    if (puStack_138 != (undefined8 *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          puVar10 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
          lVar11 = 0x100;
          while( true ) {
            puVar3 = puVar1;
            func_0x00010c0ef2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0d9a60(puVar1);
            func_0x00010c0df800(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar4);
            _objc_release(puVar3);
            func_0x00010c0d9a60(puVar1);
            if (puVar5 == (undefined8 *)0x0) break;
            func_0x00010c1cd380(puVar1);
            lVar11 = lVar11 + -1;
            if (lVar11 == 0) goto LAB_106f95b20;
          }
          puVar3 = puVar1;
          func_0x00010c0ef2e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0d9a60(puVar1);
          func_0x00010c0df800(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar4);
          _objc_release(puVar3);
          func_0x00010c0d9a60(puVar1);
          func_0x00010c1cd380(puVar1);
          func_0x00010bf64c00();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010bf94040();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf48ce0();
          _objc_release(puVar3);
          if ((int)puVar5 != 0) {
            puVar3 = puVar1;
            func_0x00010bf94040();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf93920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            _objc_release(puVar3);
            puVar10 = puVar5;
          }
          if (puVar10 == (undefined8 *)0x0) {
LAB_106f95b20:
            puVar10 = puVar1;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            func_0x00010be97c00(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar1;
            func_0x00010c0f99e0(puVar10);
            _objc_release(puVar3);
            _objc_release(puVar10);
            goto LAB_106f95b68;
          }
          puVar3 = puVar1;
          func_0x00010c25c420(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0cb2c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf64c40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bda00(puVar3);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar10);
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar8 != puStack_138);
        puVar8 = &uStack_130;
        puStack_138 = puVar2;
        func_0x00010bf52a60();
      } while (puStack_138 != (undefined8 *)0x0);
    }
LAB_106f95b68:
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(puVar8);
    puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
    _NSStringFromSelector(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2803a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_release(param_2);
    _objc_exception_throw(puVar4);
    uVar7 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110e78258,uVar7,0);
  return;
}



/* Entry: 106f95bb4; end: 106f95c13; -[SCSpectaclesMalibuPeripheral sendEncryptionRequest:] */

void FUN_106f95bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110e78258,5,0);
  return;
}



/* Entry: 106f95c14; end: 106f95c2f; -[SCSpectaclesMalibuPeripheral _rpcClientError] */

void FUN_106f95c14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110e78258,5,0);
  return;
}



/* Entry: 106f95c30; end: 106f95c37; -[SCSpectaclesMalibuPeripheral rpcInvocationsFromRequest:] */

void FUN_106f95c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_malibuRpcInvocations_11260b930);
  return;
}



/* Entry: 106f95c38; end: 106f95e23; -[SCSpectaclesMalibuPeripheral _handleRpcResponseData:] */

void FUN_106f95c38(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d3a40;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008240();
  _objc_release(param_3);
  puVar2 = param_1;
  func_0x00010c0ef2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = puVar1;
  func_0x00010c135700(puVar1);
  func_0x00010c0df800(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c0ef2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = puVar1;
  func_0x00010c135700(puVar1);
  func_0x00010c0df800(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if ((puVar3 == (undefined *)0x0) ||
     (puVar4 = puVar1, func_0x00010c082b20(), ((ulong)puVar4 & 1) == 0)) {
    puVar4 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010be97c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f99e0(puVar4,param_2,param_1,puVar2);
  }
  else {
    puVar4 = PTR_PTR_1126d3a48;
    _objc_alloc(PTR_PTR_1126d3a48);
    func_0x00010c040aa0();
    puVar2 = param_1;
    func_0x00010c0ef2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == puVar2) {
      func_0x00010be28e40(param_1,param_2,puVar4);
      goto LAB_106f95dec;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9a20();
    puVar2 = param_1;
  }
  _objc_release(puVar2);
LAB_106f95dec:
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f95e24; end: 106f95f5b; -[SCSpectaclesMalibuPeripheral _handlePushResponseData:] */

void FUN_106f95e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d3a50;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bfd8080();
    if ((int)puVar2 != 0) {
      puVar2 = puVar1;
      func_0x00010c06a2e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c135700();
      _objc_release(puVar2);
      uVar4 = param_1;
      func_0x00010c0ef2e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(uint)puVar3 & 0xff);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4,param_2,0,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar4);
    }
    puVar2 = PTR_PTR_1126d3a58;
    _objc_alloc(PTR_PTR_1126d3a58);
    func_0x00010c03c1e0();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9a20();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106f95f5c; end: 106f960f3; -[SCSpectaclesMalibuPeripheral messageBufferReceivedData:messageType:] */

void FUN_106f95f5c(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_4 < 4) {
    if (param_4 == 0) {
      func_0x00010be2e980(param_1,param_2,param_3);
    }
    else if (param_4 == 1) {
      func_0x00010be2f680(param_1,param_2,param_3);
    }
    goto LAB_106f960e0;
  }
  puVar3 = param_1;
  if (param_4 == 4) {
    puVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf48ce0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
LAB_106f96084:
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f99e0(puVar3,param_2,param_1,puVar1);
    }
    else {
      func_0x00010bf94040(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bf678c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2e980(param_1,param_2,puVar1);
    }
  }
  else {
    if (param_4 != 5) goto LAB_106f960e0;
    puVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf48ce0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) goto LAB_106f96084;
    func_0x00010bf94040(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf678c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2f680(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
LAB_106f960e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f960f4; end: 106f961d7; -[SCSpectaclesMalibuPeripheral channelDidOpen:] */

void FUN_106f960f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f961d8; end: 106f9621f;  */

void FUN_106f961d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9a60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f96220; end: 106f9632b; -[SCSpectaclesMalibuPeripheral channel:didReadData:] */

void FUN_106f96220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f9632c; end: 106f9637f;  */

void FUN_106f9632c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cb2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1147e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f96380; end: 106f96383; -[SCSpectaclesMalibuPeripheral channelDidWriteData:] */

void FUN_106f96380(void)

{
  return;
}



/* Entry: 106f96384; end: 106f9648f; -[SCSpectaclesMalibuPeripheral channel:didError:] */

void FUN_106f96384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


