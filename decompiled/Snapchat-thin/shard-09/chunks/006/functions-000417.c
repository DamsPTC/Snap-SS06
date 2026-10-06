/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f8f0a4; end: 106f8f16b; -[SCSpectaclesLagunaPeripheral openStream] */

void FUN_106f8f0a4(undefined8 param_1)

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



/* Entry: 106f8f16c; end: 106f8f1af;  */

void FUN_106f8f16c(long param_1)

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



/* Entry: 106f8f1b0; end: 106f8f237; -[SCSpectaclesLagunaPeripheral isReadyToExchangeMessages] */

ulong FUN_106f8f1b0(ulong param_1)

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



/* Entry: 106f8f238; end: 106f8f35b; -[SCSpectaclesLagunaPeripheral messageBufferReceivedData:messageType:] */

void FUN_106f8f238(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    func_0x00010be28e20(param_1,param_2,param_3);
  }
  else if (param_4 == 1) {
    puVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf48ce0();
    _objc_release(puVar1);
    puVar1 = param_1;
    if ((int)puVar2 == 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f99e0(puVar1,param_2,param_1,puVar2);
    }
    else {
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf678c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2d020(param_1,param_2,puVar2);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else if (param_4 == 0) {
    func_0x00010be2d020(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f8f35c; end: 106f8f43f; -[SCSpectaclesLagunaPeripheral channelDidOpen:] */

void FUN_106f8f35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8f440; end: 106f8f487;  */

void FUN_106f8f440(long param_1)

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



/* Entry: 106f8f488; end: 106f8f593; -[SCSpectaclesLagunaPeripheral channel:didReadData:] */

void FUN_106f8f488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 106f8f594; end: 106f8f5e7;  */

void FUN_106f8f594(long param_1)

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



/* Entry: 106f8f5e8; end: 106f8f5eb; -[SCSpectaclesLagunaPeripheral channelDidWriteData:] */

void FUN_106f8f5e8(void)

{
  return;
}



/* Entry: 106f8f5ec; end: 106f8f6f7; -[SCSpectaclesLagunaPeripheral channel:didError:] */

void FUN_106f8f5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 106f8f6f8; end: 106f8f74f;  */

void FUN_106f8f6f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f99e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f8f750; end: 106f8f753; -[SCSpectaclesLagunaPeripheral channelDidClose:] */

void FUN_106f8f750(void)

{
  return;
}



/* Entry: 106f8f754; end: 106f8f88f; -[SCSpectaclesLagunaPeripheral channel:didReadRSSI:error:] */

void FUN_106f8f754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f8f890; end: 106f8f8c3;  */

void FUN_106f8f890(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e6e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f8f8c4; end: 106f8f8db; -[SCSpectaclesLagunaPeripheral delegate] */

void FUN_106f8f8c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f8f8dc; end: 106f8f8e7; -[SCSpectaclesLagunaPeripheral setDelegate:] */

void FUN_106f8f8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106f8f8e8; end: 106f8f8ef; -[SCSpectaclesLagunaPeripheral performer] */

undefined8 FUN_106f8f8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f8f8f0; end: 106f8f91f; -[SCSpectaclesLagunaPeripheral setPerformer:] */

void FUN_106f8f8f0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8f920; end: 106f8f927; -[SCSpectaclesLagunaPeripheral peripheral] */

undefined8 FUN_106f8f920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f8f928; end: 106f8f957; -[SCSpectaclesLagunaPeripheral setPeripheral:] */

void FUN_106f8f928(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8f958; end: 106f8f95f; -[SCSpectaclesLagunaPeripheral RSSI] */

undefined8 FUN_106f8f958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f8f960; end: 106f8f98f; -[SCSpectaclesLagunaPeripheral setRSSI:] */

void FUN_106f8f960(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8f990; end: 106f8f997; -[SCSpectaclesLagunaPeripheral messageBuffer] */

undefined8 FUN_106f8f990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f8f998; end: 106f8f9c7; -[SCSpectaclesLagunaPeripheral setMessageBuffer:] */

void FUN_106f8f998(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8f9c8; end: 106f8f9cf; -[SCSpectaclesLagunaPeripheral stream] */

undefined8 FUN_106f8f9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f8f9d0; end: 106f8f9ff; -[SCSpectaclesLagunaPeripheral setStream:] */

void FUN_106f8f9d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8fa00; end: 106f8fa07; -[SCSpectaclesLagunaPeripheral requests] */

undefined8 FUN_106f8fa00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106f8fa08; end: 106f8fa37; -[SCSpectaclesLagunaPeripheral setRequests:] */

void FUN_106f8fa08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f8fa38; end: 106f8fa3f; -[SCSpectaclesLagunaPeripheral previousRequestCount] */

undefined8 FUN_106f8fa38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106f8fa40; end: 106f8fa47; -[SCSpectaclesLagunaPeripheral setPreviousRequestCount:] */

void FUN_106f8fa40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106f8fa48; end: 106f8fa4f; -[SCSpectaclesLagunaPeripheral encryptor] */

undefined8 FUN_106f8fa48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106f8fa50; end: 106f8fa7f; -[SCSpectaclesLagunaPeripheral setEncryptor:] */

void FUN_106f8fa50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f8fa80; end: 106f8fa87; -[SCSpectaclesLagunaPeripheral encryptionDisabled] */

undefined1 FUN_106f8fa80(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106f8fa88; end: 106f8fa8f; -[SCSpectaclesLagunaPeripheral setEncryptionDisabled:] */

void FUN_106f8fa88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106f8fa90; end: 106f8fb03; -[SCSpectaclesLagunaPeripheral .cxx_destruct] */

void FUN_106f8fa90(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106f8fb04; end: 106f8fbc7; -[SCSpectaclesMalibuContentMetadata initWithMalibuData:] */

undefined8 * FUN_106f8fb04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f80f0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d39e0;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    lVar4 = puVar1[1];
    _objc_release(0);
    puVar5 = (undefined8 *)0x0;
    if (lVar4 == 0) goto LAB_106f8fba0;
  }
  _objc_retain(puVar1);
  puVar5 = puVar1;
LAB_106f8fba0:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 106f8fbc8; end: 106f8fc03; -[SCSpectaclesMalibuContentMetadata serializedSize] */

undefined8 FUN_106f8fbc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15ebe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8fc04; end: 106f8fc47; -[SCSpectaclesMalibuContentMetadata rawData] */

void FUN_106f8fc04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f8fc48; end: 106f8fc83; -[SCSpectaclesMalibuContentMetadata contentType] */

ulong FUN_106f8fc48(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd7d60();
  _objc_release(param_1);
  return uVar1 & 0xffffffff;
}



/* Entry: 106f8fc84; end: 106f8fd87; -[SCSpectaclesMalibuContentMetadata videoDuration] */

void FUN_106f8fc84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde440();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c27f800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c299c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd6800();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8fd70;
    }
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c299c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8b340();
    func_0x00010c0df720((double)(int)uVar2 / 1000.0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8fd70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8fd88; end: 106f8fe7f; -[SCSpectaclesMalibuContentMetadata timeOfCapture] */

void FUN_106f8fd88(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd540();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c27f800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd5220();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8fe68;
    }
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf314a0();
    func_0x00010bf655e0((double)uVar2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8fe68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8fe80; end: 106f8feff; -[SCSpectaclesMalibuContentMetadata randBytes] */

void FUN_106f8fe80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfdad80();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c11f100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f8ff00; end: 106f8ff63; -[SCSpectaclesMalibuContentMetadata multisnapGroupID] */

void FUN_106f8ff00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d28c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f8ff64; end: 106f90027; -[SCSpectaclesMalibuContentMetadata multisnapIndex] */

void FUN_106f8ff64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d28c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd7ec0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d28c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfec9e0();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90028; end: 106f90087; -[SCSpectaclesMalibuContentMetadata isHEVC] */

bool FUN_106f90028(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c299c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3efc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 2;
}



/* Entry: 106f90088; end: 106f9011b; -[SCSpectaclesMalibuContentMetadata firmwareVersion] */

void FUN_106f90088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0c68;
  _objc_alloc(PTR_PTR_1126c0c68);
  func_0x00010c27f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfbc500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfccca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f9011c; end: 106f901df; -[SCSpectaclesMalibuContentMetadata batterySoc] */

void FUN_106f9011c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd48e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c267380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf176a0();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f901e0; end: 106f9023b; -[SCSpectaclesMalibuContentMetadata hasCharging] */

undefined8 FUN_106f901e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5380();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f9023c; end: 106f90297; -[SCSpectaclesMalibuContentMetadata charging] */

undefined8 FUN_106f9023c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf35b20();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f90298; end: 106f9035b; -[SCSpectaclesMalibuContentMetadata storagePercentage] */

void FUN_106f90298(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf022a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdcc00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf022a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c257260();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f9035c; end: 106f9041f; -[SCSpectaclesMalibuContentMetadata socTemperature] */

void FUN_106f9035c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd40a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c267380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf02360();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90420; end: 106f904df; -[SCSpectaclesMalibuContentMetadata nordicTemperature] */

void FUN_106f90420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9880();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c267380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db2a0();
    func_0x00010c0df740(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f904e0; end: 106f905a3; -[SCSpectaclesMalibuContentMetadata wifiTemperature] */

void FUN_106f904e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde8c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c267380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a5660();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f905a4; end: 106f90667; -[SCSpectaclesMalibuContentMetadata ambientLightIntensity] */

void FUN_106f905a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd3fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf2aca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf01d60();
    func_0x00010c0df820(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90668; end: 106f9072b; -[SCSpectaclesMalibuContentMetadata sensorBeginTemperature] */

void FUN_106f90668(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdca40();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf2aca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c250ea0();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f9072c; end: 106f907ef; -[SCSpectaclesMalibuContentMetadata sensorEndTemperature] */

void FUN_106f9072c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd6ac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf2aca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf95720();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f907f0; end: 106f908b3; -[SCSpectaclesMalibuContentMetadata sensorCurrentDgc] */

void FUN_106f907f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd6460();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf2aca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf71be0();
    func_0x00010c0df820(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f908b4; end: 106f90977; -[SCSpectaclesMalibuContentMetadata sensorCurrentAgc] */

void FUN_106f908b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd3e60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf2aca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010befe760();
    func_0x00010c0df820(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90978; end: 106f90a3b; -[SCSpectaclesMalibuContentMetadata startEvIndex] */

void FUN_106f90978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdca20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf2aca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c24eb20();
    func_0x00010c0df820(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90a3c; end: 106f90aff; -[SCSpectaclesMalibuContentMetadata endEvIndex] */

void FUN_106f90a3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd6aa0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf2aca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf94860();
    func_0x00010c0df820(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90b00; end: 106f90bfb; -[SCSpectaclesMalibuContentMetadata droppedFramesVin0] */

void FUN_106f90b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8ab80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfde580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c299c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8ab80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29f820();
    func_0x00010c0df760(puVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f90bfc; end: 106f90cf7; -[SCSpectaclesMalibuContentMetadata droppedFramesVin1] */

void FUN_106f90bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8ab80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfde5a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c299c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8ab80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29f840();
    func_0x00010c0df760(puVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f90cf8; end: 106f90dbb; -[SCSpectaclesMalibuContentMetadata nordicLastBootSession] */

void FUN_106f90cf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0db240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd4c20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0db240();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1fa60();
    func_0x00010c0df760(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90dbc; end: 106f90dc3; -[SCSpectaclesMalibuContentMetadata bleUUID] */

undefined8 FUN_106f90dbc(void)

{
  return 0;
}



/* Entry: 106f90dc4; end: 106f90e87; -[SCSpectaclesMalibuContentMetadata bleConnected] */

void FUN_106f90dc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd4ac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c267380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1ca60();
    func_0x00010c0df6e0(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f90e88; end: 106f90e8f; -[SCSpectaclesMalibuContentMetadata buttonPressType] */

undefined8 FUN_106f90e88(void)

{
  return 0;
}



/* Entry: 106f90e90; end: 106f90e97; -[SCSpectaclesMalibuContentMetadata snapcodeDetected] */

undefined8 FUN_106f90e90(void)

{
  return 0;
}



/* Entry: 106f90e98; end: 106f90e9f; -[SCSpectaclesMalibuContentMetadata userAssociated] */

undefined8 FUN_106f90e98(void)

{
  return 0;
}



/* Entry: 106f90ea0; end: 106f90f27; -[SCSpectaclesMalibuContentMetadata buttonSide] */

undefined8 FUN_106f90ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd4e20();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c27f800();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf258e0();
    _objc_release(param_1);
    uVar2 = 2;
    if ((int)uVar1 != 1) {
      uVar2 = 0;
    }
    if ((int)uVar1 == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 106f90f28; end: 106f9114b; -[SCSpectaclesMalibuContentMetadata location] */

void FUN_106f90f28(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar1 = param_2;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8a00();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f800();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c09ed60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar2 = uVar1;
    func_0x00010bfd83a0();
    if (((int)uVar2 == 0) || (uVar2 = uVar1, func_0x00010bfd8c40(), (int)uVar2 == 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
      func_0x00010c08b3c0(uVar1);
      dVar6 = (double)param_1;
      func_0x00010c0b55a0(uVar1);
      dVar5 = (double)param_1;
      _CLLocationCoordinate2DMake(dVar6,dVar5);
      uVar2 = uVar1;
      func_0x00010bfd7bc0();
      dVar7 = 0.0;
      dVar8 = 0.0;
      if ((int)uVar2 != 0) {
        uVar2 = uVar1;
        func_0x00010bfe0920(uVar1);
        dVar8 = (double)(int)uVar2 * 0.001;
      }
      uVar2 = uVar1;
      func_0x00010bfd79a0();
      if ((int)uVar2 != 0) {
        uVar2 = uVar1;
        func_0x00010bfcfd80(uVar1);
        dVar7 = (double)(uVar2 & 0xffffffff) * 0.001;
      }
      uVar2 = uVar1;
      func_0x00010bfde2c0();
      dVar9 = 0.0;
      dVar10 = 0.0;
      if ((int)uVar2 != 0) {
        uVar2 = uVar1;
        func_0x00010c294f00(uVar1);
        dVar10 = (double)(uVar2 & 0xffffffff) * 0.001;
      }
      uVar2 = uVar1;
      func_0x00010bfd7b80();
      if ((int)uVar2 != 0) {
        uVar2 = uVar1;
        func_0x00010bfe0380(uVar1);
        dVar9 = (double)(int)uVar2;
      }
      uVar2 = uVar1;
      func_0x00010bfdc860();
      dVar11 = 0.0;
      if ((int)uVar2 != 0) {
        uVar2 = uVar1;
        func_0x00010c249e00(uVar1);
        dVar11 = (double)(uVar2 & 0xffffffff);
      }
      uVar2 = uVar1;
      func_0x00010bfde260();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      if ((uVar2 & 1) == 0) {
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar2 = uVar1;
        func_0x00010c294d20(uVar1);
        func_0x00010bf655e0((double)uVar2,puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c005aa0(dVar6,dVar5,dVar8,dVar7,dVar10,dVar9,dVar11,puVar4,param_3,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f9114c; end: 106f91153; -[SCSpectaclesMalibuContentMetadata genericAssetMetadata] */

undefined8 FUN_106f9114c(void)

{
  return 0;
}



/* Entry: 106f91154; end: 106f9115b; -[SCSpectaclesMalibuContentMetadata flightMode] */

undefined8 FUN_106f91154(void)

{
  return 0;
}



/* Entry: 106f9115c; end: 106f91163; -[SCSpectaclesMalibuContentMetadata flightId] */

undefined8 FUN_106f9115c(void)

{
  return 0;
}



/* Entry: 106f91164; end: 106f911d7; -[SCSpectaclesMalibuContentMetadata isValid] */

ulong FUN_106f91164(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c27f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7d60();
  if ((uVar2 & 1) == 0) {
    func_0x00010c27f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfde440();
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f911d8; end: 106f911df; -[SCSpectaclesMalibuContentMetadata underlyingMalibuProto] */

undefined8 FUN_106f911d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f911e0; end: 106f9120f; -[SCSpectaclesMalibuContentMetadata setUnderlyingMalibuProto:] */

void FUN_106f911e0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f91210; end: 106f9121b; -[SCSpectaclesMalibuContentMetadata .cxx_destruct] */

void FUN_106f91210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f9121c; end: 106f913bb; -[SCSpectaclesMalibuNetworkClient initWithStream:encryptionKey:networkTimeout:connectivityDelegate:messagingDelegate:] */

undefined1 *
FUN_106f9121c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_6);
  _objc_initWeak(auStack_60,param_7);
  puStack_68 = PTR_PTR_1126f80f8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x28));
    lVar3 = param_5;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126d38b8;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined **)((long)puVar1 + 0x20) = puVar4;
      _objc_release(uVar2);
      func_0x00010c195ce0(*(undefined8 *)((long)puVar1 + 0x20));
    }
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    puVar4 = PTR_PTR_1126d3968;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    puVar5 = auStack_58;
    _objc_loadWeakRetained(puVar5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),puVar5);
    _objc_release(puVar5);
    puVar5 = auStack_60;
    _objc_loadWeakRetained(puVar5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),puVar5);
    _objc_release(puVar5);
    *(undefined8 *)((long)puVar1 + 0x58) = 1;
  }
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f913bc; end: 106f9141f; -[SCSpectaclesMalibuNetworkClient dealloc] */

void FUN_106f913bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
  func_0x00010bec2c80(param_1);
  puStack_28 = PTR_PTR_1126f80f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106f91420; end: 106f9149f; -[SCSpectaclesMalibuNetworkClient start] */

void FUN_106f91420(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c264320();
  if ((int)uVar1 == 0) {
    func_0x00010c25c420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e8e20();
  }
  else {
    func_0x00010c162480(param_1,param_2,1);
    func_0x00010c2104a0(param_1,param_2,0);
    func_0x00010bebf540(param_1);
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42cc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f914a0; end: 106f914d3; -[SCSpectaclesMalibuNetworkClient suspend] */

void FUN_106f914a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c162480(param_1,param_2,0);
  func_0x00010c2104a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopActivityTimer_11258e4c8);
  return;
}



/* Entry: 106f914d4; end: 106f91527; -[SCSpectaclesMalibuNetworkClient halt] */

void FUN_106f914d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c162480(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010c25c420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
  func_0x00010c20e520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopActivityTimer_11258e4c8);
  return;
}



/* Entry: 106f91528; end: 106f91563; -[SCSpectaclesMalibuNetworkClient isConnected] */

undefined8 FUN_106f91528(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0791a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f91564; end: 106f915cb; -[SCSpectaclesMalibuNetworkClient sendRequest:] */

void FUN_106f91564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c0b7c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0d9a60(param_1);
  func_0x00010c1ebd20(param_3,param_2,lVar1);
  lVar1 = param_1;
  func_0x00010c0d9a60(param_1);
  func_0x00010c1cd380(param_1,param_2,lVar1 + 1);
  func_0x00010be9e860(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f915cc; end: 106f916f3; -[SCSpectaclesMalibuNetworkClient cancelOutstandingRequest] */

void FUN_106f915cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c089bc0();
  uVar2 = param_1;
  func_0x00010c088460();
  if (uVar2 <= uVar1) {
    puVar3 = PTR_PTR_1126d39e8;
    _objc_alloc_init(PTR_PTR_1126d39e8);
    uVar1 = param_1;
    func_0x00010c089bc0();
    uVar2 = param_1;
    func_0x00010c0d9a60();
    if (uVar1 < uVar2) {
      do {
        puVar4 = PTR_PTR_1126d39f0;
        _objc_alloc_init(PTR_PTR_1126d39f0);
        func_0x00010c1ebd20();
        puVar5 = puVar3;
        func_0x00010bf2f640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar5);
        _objc_release(puVar4);
        uVar1 = uVar1 + 1;
        uVar2 = param_1;
        func_0x00010c0d9a60();
      } while (uVar1 < uVar2);
    }
    uVar1 = param_1;
    func_0x00010c0d9a60(param_1);
    func_0x00010c1ebd20(puVar3,param_2,uVar1);
    uVar1 = param_1;
    func_0x00010c0d9a60(param_1);
    func_0x00010c1b7860(param_1,param_2,uVar1);
    uVar1 = param_1;
    func_0x00010c0d9a60(param_1);
    func_0x00010c1cd380(param_1,param_2,uVar1 + 1);
    func_0x00010be9e860(param_1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106f916f4; end: 106f9187b; -[SCSpectaclesMalibuNetworkClient _sendAmbaRequest:] */

void FUN_106f916f4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c06b700();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(puVar1,param_2,param_1,puVar3);
  }
  else {
    puVar1 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf48ce0();
    _objc_release(puVar3);
    if ((int)puVar2 != 0) {
      puVar3 = param_1;
      func_0x00010bf94040(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf93920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar3);
      puVar1 = puVar2;
    }
    puVar3 = param_1;
    func_0x00010c25c420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf64c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda00(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f9187c; end: 106f91903; -[SCSpectaclesMalibuNetworkClient _startActivityTimer] */

void FUN_106f9187c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bef1960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(uVar1);
  func_0x00010c1a67c0(param_1,param_2,0);
  puVar2 = PTR_PTR_1126bc890;
  func_0x00010c0d8220(param_1);
  func_0x00010c150380(puVar2,param_2,param_1,PTR_s__checkIfResponseTimedOut_112536498,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162e40(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f91904; end: 106f91943; -[SCSpectaclesMalibuNetworkClient _stopActivityTimer] */

void FUN_106f91904(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef1960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c162e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setActivityTimer__1126365b0,0);
  return;
}



/* Entry: 106f91944; end: 106f9199b; -[SCSpectaclesMalibuNetworkClient _checkIfResponseTimedOut] */

void FUN_106f91944(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfda9c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a67d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHasProcessedData__112647410,0);
    return;
  }
  func_0x00010c0cbd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f9199c; end: 106f91a37; +[SCSpectaclesMalibuNetworkClient _shortData:] */

void FUN_106f9199c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c08fa60(param_3);
  func_0x00010c0df840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8fd78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf64920(puVar2,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f91a38; end: 106f91c03; +[SCSpectaclesMalibuNetworkClient _requestDescription:] */

void FUN_106f91a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd7580();
  uVar3 = param_3;
  uVar4 = param_3;
  if ((int)uVar1 == 0) {
LAB_106f91af8:
    uVar1 = param_3;
    func_0x00010bfd7820();
    if ((int)uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010bfcd6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd7140();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010bf51e00(param_3);
        func_0x00010bfcd6a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010bfacb00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb2200(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bfcd6a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19ba80();
        goto LAB_106f91b90;
      }
    }
    uVar1 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_3;
    func_0x00010bfbc4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd6200();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106f91af8;
    func_0x00010bf51e00(param_3);
    func_0x00010bfbc4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb2200(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfbc4e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189980();
LAB_106f91b90:
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar1 = uVar3;
    func_0x00010bf6e340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f91c04; end: 106f91ec3; +[SCSpectaclesMalibuNetworkClient _responseDescription:] */

void FUN_106f91c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd9040();
  uVar5 = param_3;
  uVar6 = param_3;
  if ((int)uVar1 == 0) {
LAB_106f91cdc:
    uVar1 = param_3;
    func_0x00010bfd8ae0();
    if ((int)uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010c0ae600();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd8ac0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010bf51e00(param_3);
        func_0x00010c0ae600(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010c0a4900();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf64c80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb2200(param_1,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c0ae600(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0a4900();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1;
        param_1 = uVar2;
        goto LAB_106f91d88;
      }
    }
    uVar1 = param_3;
    func_0x00010bfdcb60();
    if ((int)uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010c253820();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd6f40();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010bf51e00(param_3);
        func_0x00010c253820(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010bf9f4c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb2200(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c253820(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199d00();
        _objc_release(uVar2);
        goto LAB_106f91e58;
      }
    }
    uVar1 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_3;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd8f80();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106f91cdc;
    func_0x00010bf51e00(param_3);
    func_0x00010c0c64c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb2200(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0c64c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    param_1 = uVar2;
LAB_106f91d88:
    func_0x00010c189980();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
LAB_106f91e58:
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(uVar6);
    uVar1 = uVar5;
    func_0x00010bf6e340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f91ec4; end: 106f91feb; -[SCSpectaclesMalibuNetworkClient _handleAmbaResponseData:] */

/* WARNING: Removing unreachable block (ram,0x000106f91f28) */

void FUN_106f91ec4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d39f8;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(0);
  puVar2 = PTR_PTR_1126d3a00;
  _objc_alloc(PTR_PTR_1126d3a00);
  func_0x00010c0281c0();
  puVar3 = puVar1;
  func_0x00010c135700(puVar1);
  func_0x00010c1b8620(param_1,param_2,puVar3);
  puVar3 = puVar1;
  func_0x00010c135700();
  puVar4 = param_1;
  func_0x00010c088460();
  if (puVar3 != puVar4) {
    func_0x00010c0cbd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42ca0();
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 106f91fec; end: 106f920e7; -[SCSpectaclesMalibuNetworkClient _exchangeNonces] */

void FUN_106f91fec(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bf94040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010c162480(param_1,param_2,1);
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42cc0();
  }
  else {
    puVar1 = PTR_PTR_1126d3178;
    func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf94040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ac80();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d3a08;
    _objc_alloc_init(PTR_PTR_1126d3a08);
    func_0x00010c21acc0();
    puVar3 = puVar2;
    func_0x00010c228f40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdaa0();
    _objc_release(puVar3);
    func_0x00010be9efe0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f920e8; end: 106f9220f; -[SCSpectaclesMalibuNetworkClient _sendEncryptionSetupRequest:] */

void FUN_106f920e8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_1;
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(puVar3,param_2,param_1,puVar1);
  }
  else {
    func_0x00010c25c420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf64c40(param_1,param_2,uVar2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda00(puVar3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar1 = param_1;
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f92210; end: 106f923ff; -[SCSpectaclesMalibuNetworkClient _handleEncryptionSetupResponseData:] */

/* WARNING: Removing unreachable block (ram,0x000106f92274) */

void FUN_106f92210(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126d3a10;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(0);
  puVar2 = puVar1;
  func_0x00010bfdbf40();
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x00010c228f40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfd9820();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = param_1;
      func_0x00010bf94040(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c228f40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0db0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ef020(uVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf48ce0();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        func_0x00010c162480(param_1,param_2,1);
        func_0x00010bf48ec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf42cc0();
        uVar4 = param_1;
        goto LAB_106f923d0;
      }
    }
  }
  uVar4 = param_1;
  func_0x00010bf48ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e78258,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42c80(uVar4,param_2,param_1,puVar2);
  _objc_release(puVar2);
LAB_106f923d0:
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 106f92400; end: 106f92523; -[SCSpectaclesMalibuNetworkClient messageBufferReceivedData:messageType:] */

void FUN_106f92400(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    func_0x00010be28e60(param_1,param_2,param_3);
  }
  else if (param_4 == 1) {
    puVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf48ce0();
    _objc_release(puVar1);
    puVar1 = param_1;
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bf48ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,1,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42c80(puVar1,param_2,param_1,puVar2);
    }
    else {
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf678c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be25980(param_1,param_2,puVar2);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else if (param_4 == 0) {
    func_0x00010be25980(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f92524; end: 106f9256b; -[SCSpectaclesMalibuNetworkClient channelDidClose:] */

void FUN_106f92524(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bec2c80();
  uVar1 = param_1;
  func_0x00010c25c420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStream__112661370,0);
  return;
}



/* Entry: 106f9256c; end: 106f925c7; -[SCSpectaclesMalibuNetworkClient channel:didError:] */

void FUN_106f9256c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf48ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42c80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f925c8; end: 106f92623; -[SCSpectaclesMalibuNetworkClient channel:didReadData:] */

void FUN_106f925c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c1a67c0(param_1,param_2,1);
  func_0x00010c0cb2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1147e0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


