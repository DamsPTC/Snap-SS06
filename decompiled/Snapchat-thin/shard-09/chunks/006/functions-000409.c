/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f736d0; end: 106f736d7; -[SCSpectaclesBlockResponseMonitor responseMonitorState] */

undefined8 FUN_106f736d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f736d8; end: 106f736df; -[SCSpectaclesBlockResponseMonitor setResponseMonitorState:] */

void FUN_106f736d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106f736e0; end: 106f73733; -[SCSpectaclesBlockResponseMonitor .cxx_destruct] */

void FUN_106f736e0(long param_1)

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



/* Entry: 106f73734; end: 106f7374f; +[SCSpectaclesCommunicator networkClientWithHardwareVersion:endpoint:encryptionKey:networkTimeout:connectivityDelegate:messagingDelegate:] */

void FUN_106f73734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d7910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3238,PTR_s_networkClientWithHardwareVersion_112613858,param_3,param_4,0,
             param_5,param_6,param_7);
  return;
}



/* Entry: 106f73750; end: 106f73887; +[SCSpectaclesCommunicator RPCNetworkClientWithRpcMessageFactory:packetEncryptorBuilder:encryptionKey:connectivityDelegate:messagingDelegate:enableEncryption:] */

void FUN_106f73750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6a380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  func_0x00010c215b80(0x4024000000000000,puVar2);
  puVar1 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  func_0x00010c1606a0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d37b0;
  _objc_alloc(PTR_PTR_1126d37b0);
  func_0x00010c044f60();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f73888; end: 106f73bb7; +[SCSpectaclesCommunicator networkClientWithHardwareVersion:endpoint:peripheral:encryptionKey:networkTimeout:connectivityDelegate:messagingDelegate:] */

void FUN_106f73888(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_4;
  func_0x00010c074be0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c06e7e0(param_4);
  }
  uVar1 = param_4;
  func_0x00010c074be0();
  puVar4 = PTR_PTR_1126d37b8;
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c06e7e0();
    puVar4 = PTR_PTR_1126d3238;
    if ((int)uVar1 == 0) {
      puVar4 = PTR_PTR_1126d37e8;
      func_0x00010c22bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010bf550e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        uVar1 = param_4;
        func_0x00010c0774a0();
        if (((uVar1 & 1) == 0) && (uVar1 = param_4, func_0x00010c078aa0(), (uVar1 & 1) == 0)) {
          func_0x00010c075fc0(param_4);
          ppuVar5 = &PTR_PTR_1126d37f8;
        }
        else {
          ppuVar5 = &PTR_PTR_1126d37f0;
        }
        puVar4 = *ppuVar5;
        _objc_alloc(puVar4);
        func_0x00010c04e6c0(param_1);
      }
      goto LAB_106f73b5c;
    }
    if (param_6 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126d37c0;
      _objc_alloc(PTR_PTR_1126d37c0);
      puVar2 = PTR_PTR_1126d37d8;
      _objc_opt_new(PTR_PTR_1126d37d8);
      func_0x00010c035440(puVar4);
      goto LAB_106f73b5c;
    }
    puVar2 = PTR_PTR_1126d37d8;
    _objc_opt_new(PTR_PTR_1126d37d8);
    puVar3 = PTR_PTR_1126d37e0;
    _objc_opt_new(PTR_PTR_1126d37e0);
    func_0x00010bdc1ee0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_6 == (undefined *)0x0) {
    uVar1 = param_4;
    func_0x00010c0776e0();
    if ((int)uVar1 != 0) {
      func_0x00010b6fc0bc();
    }
    puVar4 = PTR_PTR_1126d3238;
    puVar2 = PTR_PTR_1126d37c8;
    _objc_opt_new(PTR_PTR_1126d37c8);
    puVar3 = PTR_PTR_1126d37d0;
    _objc_alloc(PTR_PTR_1126d37d0);
    func_0x00010bffd740();
    func_0x00010bdc1ee0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_6);
    _objc_opt_class(puVar4);
    puVar2 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar4);
    puVar3 = param_6;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_6);
    puVar4 = PTR_PTR_1126d37c0;
    _objc_alloc(PTR_PTR_1126d37c0);
    puVar2 = PTR_PTR_1126d37c8;
    _objc_opt_new(PTR_PTR_1126d37c8);
    func_0x00010c035440(puVar4);
  }
  _objc_release(puVar3);
LAB_106f73b5c:
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f73bb8; end: 106f73d53; +[SCSpectaclesCommunicator peripheralWithHardwareVersion:blePeripheral:delegate:] */

void FUN_106f73bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c075fc0();
  puVar4 = PTR_PTR_1126d3800;
  if ((((int)uVar3 == 0) &&
      (uVar3 = param_3, func_0x00010c0774a0(), puVar4 = PTR_PTR_1126d3808, (int)uVar3 == 0)) &&
     (uVar3 = param_3, func_0x00010c078aa0(), puVar4 = PTR_PTR_1126d3810, (int)uVar3 == 0)) {
    uVar3 = param_3;
    func_0x00010c074be0();
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c06e7e0();
      if ((int)uVar3 == 0) {
        puVar4 = (undefined *)0x0;
        goto LAB_106f73c48;
      }
      puVar4 = PTR_PTR_1126d37b8;
      _objc_alloc(PTR_PTR_1126d37b8);
      puVar1 = PTR_PTR_1126d37d8;
      _objc_opt_new(PTR_PTR_1126d37d8);
      puVar2 = PTR_PTR_1126d37e0;
      _objc_opt_new(PTR_PTR_1126d37e0);
      uVar3 = 0;
    }
    else {
      puVar4 = PTR_PTR_1126d37b8;
      _objc_alloc(PTR_PTR_1126d37b8);
      puVar1 = PTR_PTR_1126d37c8;
      _objc_opt_new(PTR_PTR_1126d37c8);
      puVar2 = PTR_PTR_1126d37d0;
      _objc_alloc(PTR_PTR_1126d37d0);
      func_0x00010bffd740();
      uVar3 = param_3;
      func_0x00010c0776e0(param_3);
    }
    func_0x00010c035460(puVar4,param_2,param_4,puVar1,puVar2,uVar3,param_5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_alloc(puVar4);
    func_0x00010c035420();
  }
LAB_106f73c48:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f73d54; end: 106f73de3; -[SCSpectaclesMessageBuffer initWithDelegate:] */

undefined1 * FUN_106f73d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8020;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 0x1c;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f73de4; end: 106f73e83; -[SCSpectaclesMessageBuffer dataWithTlvHeaderPrepended:messageType:] */

void FUN_106f73de4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uStack_34;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  uVar1 = (uint)(param_4 << (*(ulong *)(param_1 + 0x10) & 0x3f)) | (uint)uVar2;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,&uStack_34,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ae0();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f73e84; end: 106f73eaf; -[SCSpectaclesMessageBuffer processData:] */

void FUN_106f73e84(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bf06ae0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_parseBuffer_11261a9c0);
  return;
}



/* Entry: 106f73eb0; end: 106f73f93; -[SCSpectaclesMessageBuffer parseBuffer] */

void FUN_106f73eb0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c08fa60();
  if (3 < uVar1) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c08fa60();
    lVar2 = param_1;
    func_0x00010becc640();
    if (lVar2 + 4U <= uVar1) {
      lVar2 = param_1;
      func_0x00010becc640(param_1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c25eac0(uVar3,param_2,4,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becc660(param_1);
      func_0x00010c130ce0(*(undefined8 *)(param_1 + 8),param_2,0,lVar2 + 4,0,0);
      lVar2 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb2e0();
      _objc_release(lVar2);
      func_0x00010c0f3ea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 106f73f94; end: 106f73fb7; -[SCSpectaclesMessageBuffer _tlvLength] */

uint FUN_106f73f94(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  func_0x00010bf25f00();
  uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff000f) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



/* Entry: 106f73fb8; end: 106f73ff7; -[SCSpectaclesMessageBuffer _tlvType] */

uint FUN_106f73fb8(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  func_0x00010bf25f00();
  uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) >> (ulong)(*(uint *)(param_1 + 0x10) & 0x1f);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 106f73ff8; end: 106f7400f; -[SCSpectaclesMessageBuffer delegate] */

void FUN_106f73ff8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74010; end: 106f7401b; -[SCSpectaclesMessageBuffer setDelegate:] */

void FUN_106f74010(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106f7401c; end: 106f74047; -[SCSpectaclesMessageBuffer .cxx_destruct] */

void FUN_106f7401c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f74048; end: 106f740cf; -[SCSpectaclesNetworkRequest initWithProviderBlock:expectedResponseCount:] */

undefined1 *
FUN_106f74048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f740d0; end: 106f7414b; -[SCSpectaclesNetworkRequest lagunaRequests] */

void FUN_106f740d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c119b60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3818;
  _objc_opt_class(PTR_PTR_1126d3818);
  lVar2 = param_1;
  (**(code **)(param_1 + 0x10))(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c087c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f7414c; end: 106f741c7; -[SCSpectaclesNetworkRequest malibuRequest] */

void FUN_106f7414c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c119b60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3820;
  _objc_opt_class(PTR_PTR_1126d3820);
  lVar2 = param_1;
  (**(code **)(param_1 + 0x10))(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b7c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f741c8; end: 106f74243; -[SCSpectaclesNetworkRequest hermosaRequests] */

void FUN_106f741c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c119b60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3828;
  _objc_opt_class(PTR_PTR_1126d3828);
  lVar2 = param_1;
  (**(code **)(param_1 + 0x10))(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f74244; end: 106f742bf; -[SCSpectaclesNetworkRequest cheeriosRequests] */

void FUN_106f74244(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c119b60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3830;
  _objc_opt_class(PTR_PTR_1126d3830);
  lVar2 = param_1;
  (**(code **)(param_1 + 0x10))(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf38c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f742c0; end: 106f743f7; +[SCSpectaclesNetworkRequest requestByBatchingRequests:] */

void FUN_106f742c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c124d20(param_3,param_2,&PTR___NSConcreteGlobalBlock_110985d58,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c99b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_alloc(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106f743f8;
  puStack_40 = &UNK_110985d98;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_58,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f743f8; end: 106f744db;  */

void FUN_106f743f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x106f74488;
  puStack_30 = &UNK_110985d78;
  uStack_28 = param_2;
  func_0x00010c0b8600(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106f744dc; end: 106f744ff; +[SCSpectaclesNetworkRequest mediaListRequest] */

void FUN_106f744dc(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985de8,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74500; end: 106f74507;  */

void FUN_106f74500(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaListRequest_11260efa0);
  return;
}



/* Entry: 106f74508; end: 106f745a3; +[SCSpectaclesNetworkRequest readRequestWithFilename:] */

void FUN_106f74508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f745a4;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_48,1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f745a4; end: 106f745af;  */

void FUN_106f745a4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_readRequestWithFilename__112626040,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f745b0; end: 106f7467f; +[SCSpectaclesNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:] */

void FUN_106f745b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,undefined1 param_7)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106f74680;
  puStack_70 = &UNK_110985e08;
  uVar1 = 0;
  if (param_6 != 0) {
    uVar1 = ((param_6 + param_5) - 1) / param_6;
  }
  uStack_68 = param_3;
  uStack_60 = param_4;
  lStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_88,uVar1);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f74680; end: 106f74693;  */

void FUN_106f74680(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_batchReadRequestWithFilename_ran_1125a35f0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 106f74694; end: 106f7475b; +[SCSpectaclesNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:] */

void FUN_106f74694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106f7475c;
  puStack_68 = &UNK_110985e38;
  uVar1 = 0;
  if (param_6 != 0) {
    uVar1 = ((param_6 + param_5) - 1) / param_6;
  }
  uStack_60 = param_3;
  uStack_58 = param_4;
  lStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_80,uVar1);
  _objc_release(uStack_60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f7475c; end: 106f7476b;  */

void FUN_106f7475c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc60b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_getGenericAssetWithFileIdentifie_1125cf1d0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106f7476c; end: 106f74817; +[SCSpectaclesNetworkRequest markTransferredRequestForContentNamed:includeHd:] */

void FUN_106f7476c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f74818;
  puStack_48 = &UNK_110985e68;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_60,1);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f74818; end: 106f74827;  */

void FUN_106f74818(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bbc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_markTransferredRequestForContent_11260c928,
             *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f74828; end: 106f748d3; +[SCSpectaclesNetworkRequest deletionRequestForContentNamed:includeHd:] */

void FUN_106f74828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f748d4;
  puStack_48 = &UNK_110985e68;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_60,1);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f748d4; end: 106f748e3;  */

void FUN_106f748d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_deletionRequestForContentNamed_i_1125b8dd8,
             *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f748e4; end: 106f74907; +[SCSpectaclesNetworkRequest startAsNeededDeletionRequest] */

void FUN_106f748e4(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985e98,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74908; end: 106f7490f;  */

void FUN_106f74908(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_startAsNeededDeletionRequest_1126711b0);
  return;
}



/* Entry: 106f74910; end: 106f74933; +[SCSpectaclesNetworkRequest crashLogFileListRequest] */

void FUN_106f74910(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985eb8,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74934; end: 106f7493b;  */

void FUN_106f74934(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf53f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_crashLogFileListRequest_1125b2980);
  return;
}



/* Entry: 106f7493c; end: 106f749eb; +[SCSpectaclesNetworkRequest crashLogFileRequestWithFilename:range:] */

void FUN_106f7493c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f749ec;
  puStack_50 = &UNK_110985ed8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_68,1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f749ec; end: 106f749fb;  */

void FUN_106f749ec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf53f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_crashLogFileRequestWithFilename__1125b2988,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106f749fc; end: 106f74aa3; +[SCSpectaclesNetworkRequest firmwareWriteRequest:start:] */

void FUN_106f749fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f74aa4;
  puStack_48 = &UNK_110985f08;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_60,1);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f74aa4; end: 106f74aaf;  */

void FUN_106f74aa4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_firmwareWriteRequest_start__1125c9cf8,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f74ab0; end: 106f74b4b; +[SCSpectaclesNetworkRequest gpsWriteRequest:] */

void FUN_106f74ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f74b4c;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_48,1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f74b4c; end: 106f74b57;  */

void FUN_106f74b4c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcd750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_gpsWriteRequest__1125d0f78,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f74b58; end: 106f74b7b; +[SCSpectaclesNetworkRequest shareWifiCredentialsRequest] */

void FUN_106f74b58(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985f38,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74b7c; end: 106f74b83;  */

void FUN_106f74b7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shareWifiCredentialsRequest_1126686d0);
  return;
}



/* Entry: 106f74b84; end: 106f74ba7; +[SCSpectaclesNetworkRequest shareWifiCredentialsStatusRequest] */

void FUN_106f74b84(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985f58,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74ba8; end: 106f74baf;  */

void FUN_106f74ba8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shareWifiCredentialsStatusReques_1126686d8);
  return;
}



/* Entry: 106f74bb0; end: 106f74bd3; +[SCSpectaclesNetworkRequest analyticsFilesListRequest] */

void FUN_106f74bb0(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985f78,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74bd4; end: 106f74bdb;  */

void FUN_106f74bd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_analyticsFilesListRequest_11259e340);
  return;
}



/* Entry: 106f74bdc; end: 106f74c8b; +[SCSpectaclesNetworkRequest analyticsFilesGetWithFilename:range:] */

void FUN_106f74bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f74c8c;
  puStack_50 = &UNK_110985ed8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_68,1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f74c8c; end: 106f74c9b;  */

void FUN_106f74c8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_analyticsFilesGetWithFilename_ra_11259e338,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106f74c9c; end: 106f74cbf; +[SCSpectaclesNetworkRequest analyticsFilesDeleteRequest] */

void FUN_106f74c9c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985f98,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74cc0; end: 106f74cc7;  */

void FUN_106f74cc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_analyticsFilesDeleteRequest_11259e330);
  return;
}



/* Entry: 106f74cc8; end: 106f74ceb; +[SCSpectaclesNetworkRequest stereoCalibrationDataRequest] */

void FUN_106f74cc8(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03bb00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110985fb8,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f74cec; end: 106f74cf3;  */

void FUN_106f74cec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stereoCalibrationDataRequest_112672838);
  return;
}



/* Entry: 106f74cf4; end: 106f74d8f; +[SCSpectaclesNetworkRequest lagunaPairingRequestWithAmbaRequest:] */

void FUN_106f74cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f74d90;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c03bb00(param_1,param_2,&puStack_48,1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f74d90; end: 106f74d9b;  */

void FUN_106f74d90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c087bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_lagunaPairingRequestWithAmbaRequ_1125ff908,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f74d9c; end: 106f74da3; -[SCSpectaclesNetworkRequest expectedResponseCount] */

undefined8 FUN_106f74d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f74da4; end: 106f74dab; -[SCSpectaclesNetworkRequest setExpectedResponseCount:] */

void FUN_106f74da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106f74dac; end: 106f74db3; -[SCSpectaclesNetworkRequest providerBlock] */

undefined8 FUN_106f74dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f74db4; end: 106f74dbb; -[SCSpectaclesNetworkRequest setProviderBlock:] */

void FUN_106f74db4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f74dbc; end: 106f74dc7; -[SCSpectaclesNetworkRequest .cxx_destruct] */

void FUN_106f74dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f74dc8; end: 106f74e8f;  */

void FUN_106f74dc8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar1 = param_3 + param_4;
  puVar3 = PTR_PTR_1126b6718;
  for (; PTR_PTR_1126b6718 = puVar3, param_3 < uVar1; param_3 = param_3 + param_5) {
    func_0x00010c1218a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b6718;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f74e90; end: 106f74f47;  */

void FUN_106f74e90(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar1 = param_2 + param_3;
  puVar3 = PTR_PTR_1126b6718;
  for (; PTR_PTR_1126b6718 = puVar3, param_2 < uVar1; param_2 = param_2 + param_4) {
    func_0x00010bfc6080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b6718;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f74f48; end: 106f74f9b; -[SCSpectaclesNetworkResponse serializedSize] */

undefined8 FUN_106f74f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106f74f9c; end: 106f74fef; -[SCSpectaclesNetworkResponse responseStatus] */

undefined8 FUN_106f74f9c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 106f74ff0; end: 106f74ff7; -[SCSpectaclesNetworkResponse mediaList] */

undefined8 FUN_106f74ff0(void)

{
  return 0;
}



/* Entry: 106f74ff8; end: 106f74fff; -[SCSpectaclesNetworkResponse mediaUUID] */

undefined8 FUN_106f74ff8(void)

{
  return 0;
}



/* Entry: 106f75000; end: 106f75007; -[SCSpectaclesNetworkResponse mediaData] */

undefined8 FUN_106f75000(void)

{
  return 0;
}



/* Entry: 106f75008; end: 106f75013; -[SCSpectaclesNetworkResponse mediaDataRange] */

undefined1  [16] FUN_106f75008(void)

{
  return ZEXT816(0x7fffffffffffffff);
}



/* Entry: 106f75014; end: 106f7501b; -[SCSpectaclesNetworkResponse genericAssetFileIdentifier] */

undefined8 FUN_106f75014(void)

{
  return 0;
}



/* Entry: 106f7501c; end: 106f75027; -[SCSpectaclesNetworkResponse genericAssetRequestedRange] */

undefined1  [16] FUN_106f7501c(void)

{
  return ZEXT816(0x7fffffffffffffff);
}



/* Entry: 106f75028; end: 106f75033; -[SCSpectaclesNetworkResponse genericAssetActualRange] */

undefined1  [16] FUN_106f75028(void)

{
  return ZEXT816(0x7fffffffffffffff);
}



/* Entry: 106f75034; end: 106f7503b; -[SCSpectaclesNetworkResponse genericAssetData] */

undefined8 FUN_106f75034(void)

{
  return 0;
}



/* Entry: 106f7503c; end: 106f75043; -[SCSpectaclesNetworkResponse backupStatus] */

undefined8 FUN_106f7503c(void)

{
  return 0;
}



/* Entry: 106f75044; end: 106f7504b; -[SCSpectaclesNetworkResponse metadata] */

undefined8 FUN_106f75044(void)

{
  return 0;
}



/* Entry: 106f7504c; end: 106f75053; -[SCSpectaclesNetworkResponse logFileList] */

undefined8 FUN_106f7504c(void)

{
  return 0;
}



/* Entry: 106f75054; end: 106f7505b; -[SCSpectaclesNetworkResponse logData] */

undefined8 FUN_106f75054(void)

{
  return 0;
}



/* Entry: 106f7505c; end: 106f75063; -[SCSpectaclesNetworkResponse wifiSharingStatus] */

undefined8 FUN_106f7505c(void)

{
  return 1;
}



/* Entry: 106f75064; end: 106f7506b; -[SCSpectaclesNetworkResponse stereoCalibrationData] */

undefined8 FUN_106f75064(void)

{
  return 0;
}



/* Entry: 106f7506c; end: 106f75073; -[SCSpectaclesNetworkResponse encryptionSetupNonce] */

undefined8 FUN_106f7506c(void)

{
  return 0;
}



/* Entry: 106f75074; end: 106f750e7; -[SCSpectaclesCheeriosContentMetadata initWithProto:] */

undefined1 * FUN_106f75074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8030;
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



/* Entry: 106f750e8; end: 106f750ef; -[SCSpectaclesCheeriosContentMetadata serializedSize] */

void FUN_106f750e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ebf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_serializedSize_112635518);
  return;
}



/* Entry: 106f750f0; end: 106f750f7; -[SCSpectaclesCheeriosContentMetadata rawData] */

void FUN_106f750f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_data_1125b6738);
  return;
}



/* Entry: 106f750f8; end: 106f75113; -[SCSpectaclesCheeriosContentMetadata contentType] */

ulong FUN_106f750f8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfd7d60(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 106f75114; end: 106f751c3; -[SCSpectaclesCheeriosContentMetadata videoDuration] */

void FUN_106f75114(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfde440();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c299c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd6800();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c299c20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf8b340();
      func_0x00010c0df720((double)(int)uVar3 / 1000.0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f751b0;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106f751b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f751c4; end: 106f75267; -[SCSpectaclesCheeriosContentMetadata timeOfCapture] */

void FUN_106f751c4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfdd540();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd5220();
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((int)uVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x00010c26f000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf314a0();
      func_0x00010bf655e0((double)uVar5,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      goto LAB_106f75254;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_106f75254:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f75268; end: 106f752a7; -[SCSpectaclesCheeriosContentMetadata randBytes] */

void FUN_106f75268(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfdad80();
  if (iVar1 != 0) {
    func_0x00010c11f100(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f752a8; end: 106f752af; -[SCSpectaclesCheeriosContentMetadata multisnapGroupID] */

undefined8 FUN_106f752a8(void)

{
  return 0;
}



/* Entry: 106f752b0; end: 106f752f3; -[SCSpectaclesCheeriosContentMetadata isHEVC] */

bool FUN_106f752b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c299c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3efc0();
  _objc_release(uVar1);
  return (int)uVar2 == 2;
}



/* Entry: 106f752f4; end: 106f752fb; -[SCSpectaclesCheeriosContentMetadata multisnapIndex] */

undefined8 FUN_106f752f4(void)

{
  return 0;
}



/* Entry: 106f752fc; end: 106f75377; -[SCSpectaclesCheeriosContentMetadata firmwareVersion] */

void FUN_106f752fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0c68;
  _objc_alloc(PTR_PTR_1126c0c68);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfbc500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfccca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f75378; end: 106f7540f; -[SCSpectaclesCheeriosContentMetadata batterySoc] */

void FUN_106f75378(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2673a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4900();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2673a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf176c0();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f75410; end: 106f7544f; -[SCSpectaclesCheeriosContentMetadata hasCharging] */

undefined8 FUN_106f75410(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2673a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5380();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f75450; end: 106f754cb; -[SCSpectaclesCheeriosContentMetadata charging] */

undefined8 FUN_106f75450(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2673a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5380();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2673a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf35b20();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 106f754cc; end: 106f7555f; -[SCSpectaclesCheeriosContentMetadata storagePercentage] */

void FUN_106f754cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2673a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcbc0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2673a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257100();
    func_0x00010c0df740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f75560; end: 106f755f7; -[SCSpectaclesCheeriosContentMetadata socTemperature] */

void FUN_106f75560(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2673a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8cc0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2673a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b6cc0();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f755f8; end: 106f755ff; -[SCSpectaclesCheeriosContentMetadata nordicTemperature] */

undefined8 FUN_106f755f8(void)

{
  return 0;
}


