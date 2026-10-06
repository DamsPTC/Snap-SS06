/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106eafb10; end: 106eafb6b; -[SCSpectaclesManager deactivateDevice:] */

void FUN_106eafb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf65c60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eafb6c; end: 106eafc4b; -[SCSpectaclesManager forgetDevice:] */

void FUN_106eafb6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf71080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bf40();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0692a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281d00();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = param_3;
    func_0x00010c15e740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3,param_2,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eafc4c; end: 106eafdbb; -[SCSpectaclesManager manualUnpairDevice:successBlock:failureBlock:] */

void FUN_106eafc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,uVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106eafdbc;
  puStack_70 = &UNK_110981fd8;
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_copyWeak(auStack_58,auStack_50);
  _objc_retain(param_4);
  ppuVar2 = &puStack_88;
  uStack_68 = param_4;
  _objc_retainBlock(ppuVar2);
  func_0x00010c0b8560(uVar1);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eafdbc; end: 106eafeb3;  */

void FUN_106eafdbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      lVar3 = lVar1;
      func_0x00010bf71080(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12bf40();
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010c0692a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281d00();
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x10);
        lVar3 = lVar2;
        func_0x00010c15e740(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar4,param_2,lVar3);
        _objc_release(lVar3);
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
      }
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eafeb4; end: 106eafee7; -[SCSpectaclesManager restartDevice:] */

void FUN_106eafeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13bf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eafee8; end: 106eb0043; -[SCSpectaclesManager clearAllContentOnDevice:successBlock:failureBlock:] */

void FUN_106eafee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,uVar1);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_copyWeak(auStack_58,auStack_50);
  _objc_retain(param_4);
  func_0x00010bf3af00(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eb0044; end: 106eb00bb;  */

void FUN_106eb0044(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf04760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2488e0(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eb00bc; end: 106eb013b; -[SCSpectaclesManager addDeviceLogsRequestOnDevice:callback:] */

void FUN_106eb00bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef7da0(uVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb013c; end: 106eb028f; -[SCSpectaclesManager addDeviceIdleAnalyticsRequestForDevice:callback:] */

void FUN_106eb013c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bef7d80(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eb0290; end: 106eb031f;  */

void FUN_106eb0290(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_2);
  if ((param_3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8e20(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eb0320; end: 106eb039f; -[SCSpectaclesManager updateGPSAlmanacOnDevice:data:] */

void FUN_106eb0320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2861a0(uVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb03a0; end: 106eb03f7; -[SCSpectaclesManager bluetoothState] */

undefined8 FUN_106eb03a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c06f880();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c252440();
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 106eb03f8; end: 106eb04d3; -[SCSpectaclesManager isContentRefreshInProgressForDevice:] */

undefined8 FUN_106eb03f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf4d240(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f480();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106eb04d4; end: 106eb061b; -[SCSpectaclesManager totalSizeOfCacheFilesWithQueue:handler:] */

void FUN_106eb04d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106eb0590;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x000100a0df38(uVar1,&puStack_60);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eb061c; end: 106eb062b;  */

void FUN_106eb061c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106eb0628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eb062c; end: 106eb06b3; -[SCSpectaclesManager cleanUpCacheWithQueue:block:] */

void FUN_106eb062c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106eb06b4;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_4);
    lStack_28 = param_4;
    func_0x00010007380c(param_3,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106eb06b4; end: 106eb06bf;  */

void FUN_106eb06b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106eb06bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106eb06c0; end: 106eb07e7; -[SCSpectaclesManager deviceStore:didAddDevice:] */

void FUN_106eb06c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126d30c0;
      _objc_alloc(PTR_PTR_1126d30c0);
      func_0x00010c00bcc0();
      func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,puVar3,lVar1);
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x10);
      func_0x00010c0e00e0(puVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c120640();
    }
    _objc_release(puVar3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb07e8; end: 106eb0837; -[SCSpectaclesManager deviceStoreDidClearDevices] */

void FUN_106eb07e8(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb0838; end: 106eb086b; -[SCSpectaclesManager requestClientId:] */

void FUN_106eb0838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb086c; end: 106eb08f3; -[SCSpectaclesManager sendAuthzCodeForDevice:authzCode:codeVerifier:redirectUri:] */

void FUN_106eb086c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b660();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb08f4; end: 106eb0a13; -[SCSpectaclesManager sendAccessTokenForDevice:accessToken:refreshToken:expirationTimeMs:userId:] */

void FUN_106eb08f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c23f2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf8d6c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b440(param_3,param_2,param_4,param_5,param_6,param_7,uVar1,uVar2,uVar3,
                      *(undefined8 *)(param_1 + 0x70),0);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb0a14; end: 106eb0a47; -[SCSpectaclesManager requestWifiAPList:] */

void FUN_106eb0a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb0a48; end: 106eb0acf; -[SCSpectaclesManager setWifiAPList:forDevice:successBlock:failureBlock:] */

void FUN_106eb0a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x000106e937b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2257c0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106eb0ad0; end: 106eb0b03; -[SCSpectaclesManager requestLastCloudUploadTime:] */

void FUN_106eb0ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb0b04; end: 106eb0bb7; -[SCSpectaclesManager startManualWifiForProxyRequest] */

void FUN_106eb0b04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010bfa1c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c119e80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f340();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eb0bb8; end: 106eb0c6b; -[SCSpectaclesManager startProxyManualControl] */

void FUN_106eb0bb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010bfa1c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c119e80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2500c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eb0c6c; end: 106eb0d1f; -[SCSpectaclesManager stopProxyManualControl] */

void FUN_106eb0c6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010bfa1c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c119e80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2566c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eb0d20; end: 106eb0de7; -[SCSpectaclesManager isProxyConnectionActive] */

undefined8 FUN_106eb0d20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010bfa1c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c119e80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c07b6e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 106eb0de8; end: 106eb0e43; -[SCSpectaclesManager startFirmwareUpdate:updateIsActive:] */

void FUN_106eb0de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb0ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24ec80();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb0e44; end: 106eb0eb3; -[SCSpectaclesManager applyFirmwareUpdatePatch:filepath:] */

void FUN_106eb0e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb0ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf084c0();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb0eb4; end: 106eb0eff; -[SCSpectaclesManager revertFirmwareBinary:] */

void FUN_106eb0eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb0ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140260();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb0f00; end: 106eb0faf; -[SCSpectaclesManager requestFirmwareUpdate:version:digest:] */

void FUN_106eb0f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3098;
  func_0x00010bef1220(PTR_PTR_1126d3098,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010bfb0ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136ec0();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb0fb0; end: 106eb1093; -[SCSpectaclesManager requestFirmwareUpdate:version:targetDigest:windowStart:windowLength:userInfo:] */

void FUN_106eb0fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d3098;
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010c0f4e60(param_1,puVar1,param_3,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x000106e937b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c21e7c0(puVar1,param_3,param_8);
  _objc_release(param_8);
  uVar3 = uVar2;
  func_0x00010bfb0ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136ec0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106eb1094; end: 106eb10df; -[SCSpectaclesManager cancelFirmwareUpdate:] */

void FUN_106eb1094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb0ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f400();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb10e0; end: 106eb113f; -[SCSpectaclesManager setMinimumRequiredFirmwareVersion:forHardwareWithMajorNumber:] */

void FUN_106eb10e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf71080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8360();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb1140; end: 106eb128f; -[SCSpectaclesManager markContentAsSynced:] */

void FUN_106eb1140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf48720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x000106e937b0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = uVar1;
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106eb1290; end: 106eb13f7;  */

void FUN_106eb1290(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar8);
      }
      puVar3 = PTR_PTR_1126d2f58;
      uVar9 = *(ulong *)(lVar10 * 8);
      _objc_retain(uVar9);
      _objc_opt_class(puVar3);
      uVar4 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar3);
      uVar1 = uVar9;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar9);
      func_0x00010c0bbc00(uVar1);
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdfa8e0();
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  func_0x00010bf48720(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x000106e937b0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  func_0x00010c0f7fc0(lVar7);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  return;
}



/* Entry: 106eb13f8; end: 106eb14eb; -[SCSpectaclesManager markContentAsCorrupt:] */

void FUN_106eb13f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf48720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x000106e937b0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106eb14ec;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_58);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106eb14ec; end: 106eb162b;  */

void FUN_106eb14ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        puVar3 = PTR_PTR_1126d2f58;
        uVar7 = *(ulong *)(lStack_118 + lVar9 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar1 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar7);
        func_0x00010c0bb3e0(uVar1);
        _objc_release(uVar1);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010bf04760(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2488e0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106eb162c; end: 106eb167b; -[SCSpectaclesManager refreshContentList:] */

void FUN_106eb162c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2488e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb167c; end: 106eb1753; -[SCSpectaclesManager _deleteSyncedContentsIfPossible:] */

void FUN_106eb167c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c263b20();
  if ((int)lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = lVar2;
    func_0x00010c15e740(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = uVar4;
    func_0x00010bf4d240(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6cc60();
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb1754; end: 106eb17db; -[SCSpectaclesManager initiateDataFlowWithRequest:] */

void FUN_106eb1754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf6fd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf638a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064d40();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eb17dc; end: 106eb187b; -[SCSpectaclesManager addTasks:forRequest:] */

void FUN_106eb17dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf6fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf638a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbe00();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eb187c; end: 106eb191b; -[SCSpectaclesManager moveTaskToTheFrontOfTheQueue:forRequest:] */

void FUN_106eb187c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf6fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf638a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1780();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eb191c; end: 106eb19a3; -[SCSpectaclesManager cancelDataFlowRequest:] */

void FUN_106eb191c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf6fd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf638a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e1e0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eb19a4; end: 106eb1aeb; -[SCSpectaclesManager setCountryCode:] */

void FUN_106eb19a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_338 [128];
  long lStack_2b8;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar11 * 8);
        func_0x000106e937b0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c184960();
        _objc_release(uVar2);
        _objc_release(uVar1);
        lVar11 = lVar11 + 1;
      } while (lVar12 != lVar11);
      lVar12 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar12 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = auStack_208;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar12 = *plStack_240;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_248 + (long)puVar13 * 8);
        func_0x000106e937b0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf4d760();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar9,param_2,uVar1);
        _objc_release(uVar1);
        _objc_release(uVar2);
        _objc_release(uVar4);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar13 = auStack_208;
      puVar3 = param_3;
      puVar7 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    puVar8 = &uStack_380;
    lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    func_0x000106e937b0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 == (undefined1 *)0x0) {
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar13;
      func_0x00010bf4d760();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar3;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_380,auStack_338,0x10);
    if (puVar3 != (undefined1 *)0x0) {
      lVar12 = *plStack_370;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if (*plStack_370 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          puVar9 = *(undefined **)(lStack_378 + (long)puVar14 * 8);
          puVar5 = puVar9;
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          puVar8 = puVar7;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          if (((ulong)puVar6 & 1) != 0) {
            _objc_retain(puVar9);
            goto LAB_106eb1dc0;
          }
          puVar14 = puVar14 + 1;
        } while (puVar3 != puVar14);
        puVar3 = param_3;
        puVar8 = &uStack_380;
        func_0x00010bf52a60(param_3,param_2,&uStack_380,auStack_338,0x10);
      } while (puVar3 != (undefined1 *)0x0);
    }
    puVar9 = (undefined *)0x0;
LAB_106eb1dc0:
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(puVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
      ___stack_chk_fail();
      _objc_retain(puVar8);
      _objc_retain(puVar7);
      _objc_sync_enter(puVar7);
      uVar1 = *(undefined8 *)((long)puVar7 + 0x10);
      puVar13 = (undefined1 *)puVar8;
      func_0x00010c15e740(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar1,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      uVar2 = uVar1;
      func_0x00010bf4d980(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c064d20();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_sync_exit(puVar7);
      _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106eb1aec; end: 106eb1c5f; -[SCSpectaclesManager content] */

void FUN_106eb1aec(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_e8;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
        func_0x000106e937b0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf4d760();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar9,param_2,uVar8);
        _objc_release(uVar8);
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar11 = puVar11 + 1;
      } while (puVar1 != puVar11);
      puVar11 = auStack_e8;
      puVar1 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = &uStack_260;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    func_0x000106e937b0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined1 *)0x0) {
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = puVar11;
      func_0x00010bf4d760();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar1;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_260,auStack_218,0x10);
    if (puVar1 != (undefined1 *)0x0) {
      lVar10 = *plStack_250;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar10) {
            _objc_enumerationMutation(param_1);
          }
          puVar9 = *(undefined **)(lStack_258 + (long)puVar12 * 8);
          puVar4 = puVar9;
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          puVar7 = puVar6;
          func_0x00010c0720c0();
          _objc_release(puVar4);
          if (((ulong)puVar5 & 1) != 0) {
            _objc_retain(puVar9);
            goto LAB_106eb1dc0;
          }
          puVar12 = puVar12 + 1;
        } while (puVar1 != puVar12);
        puVar1 = param_1;
        puVar7 = &uStack_260;
        func_0x00010bf52a60(param_1,param_2,&uStack_260,auStack_218,0x10);
      } while (puVar1 != (undefined1 *)0x0);
    }
    puVar9 = (undefined *)0x0;
LAB_106eb1dc0:
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_retain(puVar7);
      _objc_retain(puVar6);
      _objc_sync_enter(puVar6);
      uVar8 = *(undefined8 *)((long)puVar6 + 0x10);
      puVar11 = (undefined1 *)puVar7;
      func_0x00010c15e740(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar8,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      uVar3 = uVar8;
      func_0x00010bf4d980(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c064d20();
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_sync_exit(puVar6);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106eb1c60; end: 106eb1e1f; -[SCSpectaclesManager contentWithUUID:fromDevice:] */

void FUN_106eb1c60(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_4;
    func_0x00010bf4d760();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar2 = uVar8;
        func_0x00010bdc3540();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar8);
          goto LAB_106eb1dc0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  uVar8 = 0;
LAB_106eb1dc0:
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(param_3);
  _objc_sync_enter(param_3);
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c15e740(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = uVar7;
  func_0x00010bf4d980(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064d20();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_sync_exit(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106eb1e20; end: 106eb1ef7; -[SCSpectaclesManager startContentTransferWithDevice:source:] */

void FUN_106eb1e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf4d980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064d20();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb1ef8; end: 106eb1fe7; -[SCSpectaclesManager startContentTransferWithDevice:contentIds:source:] */

void FUN_106eb1ef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf4d980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064d00();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb1fe8; end: 106eb20d7; -[SCSpectaclesManager startAnimatedThumbnailTransferWithDevice:contentIds:source:] */

void FUN_106eb1fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf4d980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064c60();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb20d8; end: 106eb219f; -[SCSpectaclesManager cancelContentTransferWithDevice:] */

void FUN_106eb20d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf4d980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f340();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb21a0; end: 106eb23af; -[SCSpectaclesManager transferringContentForContentComponent:] */

void FUN_106eb21a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *unaff_x23;
  undefined8 *puVar11;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar11 = param_3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    _objc_retain(puVar10);
  }
  else {
    unaff_x23 = (undefined8 *)param_1[2];
    unaff_x24 = puVar1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = unaff_x24;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    if (unaff_x23 == (undefined8 *)0x0) {
      _objc_retain(puVar10);
    }
    else {
      puStack_138 = unaff_x23;
      func_0x00010bf4d980();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010bf5f540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      unaff_x25 = param_1;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = &uStack_130;
      param_4 = auStack_f0;
      puVar2 = unaff_x25;
      func_0x00010bf52a60();
      if (puVar2 != (undefined8 *)0x0) {
        lVar13 = *plStack_120;
        do {
          puVar11 = (undefined8 *)0x0;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(unaff_x25);
            }
            uVar12 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
            puVar3 = param_1;
            func_0x00010be3f200(param_1,param_2,uVar12,param_3,unaff_x24);
            if ((int)puVar3 != 0) {
              func_0x00010befa120(puVar10,param_2,uVar12);
            }
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          } while (puVar2 != puVar11);
          puVar11 = &uStack_130;
          param_4 = auStack_f0;
          puVar2 = unaff_x25;
          func_0x00010bf52a60();
          unaff_x26 = 0;
        } while (puVar2 != (undefined8 *)0x0);
      }
      _objc_release(unaff_x25);
      _objc_retain(puVar10);
      _objc_release(unaff_x24);
      unaff_x23 = puStack_138;
    }
    _objc_release(unaff_x23);
  }
  _objc_release(puVar1);
  puVar4 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_106eb23b0;
    uStack_190 = unaff_x26;
    puStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    puStack_178 = unaff_x23;
    puStack_170 = param_1;
    puStack_168 = param_3;
    puStack_160 = puVar1;
    puStack_158 = puVar10;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    puVar5 = param_4;
    func_0x000106e937b0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(puVar4 + 0x10);
    puVar10 = param_4;
    func_0x00010c15e740(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c0e00e0(lVar13,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (lVar13 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar6 = lVar13;
      func_0x00010bf4d980();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf5f540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      puVar8 = puVar5;
      func_0x00010bf4d760(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_106eb2534;
      puStack_1b0 = &UNK_110982038;
      puStack_1a8 = puVar4;
      lStack_1a0 = lVar7;
      puStack_198 = puVar11;
      _objc_retain(lVar7);
      puVar10 = puVar9;
      func_0x00010bfaea20(puVar9,param_2,&puStack_1c8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lStack_1a0);
      _objc_release(lVar7);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    _objc_release(lVar13);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106eb23b0; end: 106eb2533; -[SCSpectaclesManager untransferredContentForContentComponent:device:] */

void FUN_106eb23b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000106e937b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x10);
  uVar6 = param_4;
  func_0x00010c15e740(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0e00e0(lVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = lVar7;
    func_0x00010bf4d980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5f540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = uVar1;
    func_0x00010bf4d760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106eb2534;
    puStack_70 = &UNK_110982038;
    lStack_68 = param_1;
    lStack_60 = lVar3;
    uStack_58 = param_3;
    _objc_retain(lVar3);
    uVar6 = uVar5;
    func_0x00010bfaea20(uVar5,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_60);
    _objc_release(lVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106eb2534; end: 106eb25b3;  */

uint FUN_106eb2534(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c06ee80();
  if ((((int)uVar1 == 0) || (uVar1 = param_2, func_0x00010c070dc0(), (uVar1 & 1) != 0)) ||
     (uVar1 = param_2, func_0x00010c080760(), (uVar1 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be3f200(uVar2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106eb25b4; end: 106eb2663; -[SCSpectaclesManager unsyncedContentUUIDs] */

void FUN_106eb25b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0b8620(lVar1,param_2,&PTR___NSConcreteGlobalBlock_110982088,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106eb2664; end: 106eb26bf;  */

uint FUN_106eb2664(undefined8 param_1,long param_2)

{
  long lVar1;
  uint unaff_w20;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  if ((lVar1 == 0) || (lVar1 == 1)) {
    lVar1 = param_2;
    func_0x00010c080760(param_2);
    unaff_w20 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_2);
  return unaff_w20 & 1;
}



/* Entry: 106eb26c0; end: 106eb26c7;  */

void FUN_106eb26c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106eb26c8; end: 106eb27db; -[SCSpectaclesManager currentTransferSession] */

void FUN_106eb26c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = lVar1;
    func_0x00010c15e740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar2 = lVar5;
      func_0x00010bf4d980();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf60760();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar4 = lVar5;
        func_0x00010bf4d240(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010bf60760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
      else {
        _objc_retain(lVar3);
        lVar6 = lVar3;
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106eb27dc; end: 106eb28a7; -[SCSpectaclesManager setTransferPriorityContext:contentUUIDs:] */

void FUN_106eb27dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = lVar1;
    func_0x00010c15e740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x00010bf4d980(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c113c00();
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106eb28a8; end: 106eb296b; -[SCSpectaclesManager deleteContentWithUUIDs:] */

void FUN_106eb28a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106eb296c;
  puStack_40 = &UNK_110870ac0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010bfaea20(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb3c0(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb296c; end: 106eb29b7;  */

undefined8 FUN_106eb296c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc3540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106eb29b8; end: 106eb2ac7; -[SCSpectaclesManager isContentPartOfCurrentTransferBatch:component:] */

long FUN_106eb29b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar2 = lVar1;
    func_0x00010c15e740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar4 == 0) {
      param_1 = 0;
    }
    else {
      lVar2 = lVar4;
      func_0x00010bf4d980(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf5f540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010be3f200(param_1,param_2,param_3,param_4,lVar3);
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106eb2ac8; end: 106eb2c5b; -[SCSpectaclesManager isContentBeingTranferred:component:] */

undefined8 * FUN_106eb2ac8(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 *puVar14;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_f0;
  puVar10 = (undefined8 *)0x10;
  lVar13 = param_1;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x22 = lVar13;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(long *)(lStack_128 + unaff_x28 * 8);
        func_0x000106e937b0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bf638a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c26a8c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        puVar7 = param_3;
        puVar9 = param_4;
        func_0x00010c27a380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        if (unaff_x26 != 0) {
          puVar11 = (undefined8 *)0x1;
          goto LAB_106eb2c0c;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x22 != unaff_x28);
      puVar9 = auStack_f0;
      puVar10 = (undefined8 *)0x10;
      unaff_x22 = param_1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_106eb2c0c:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106eb2c5c;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = puVar11;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  if (puVar10 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = puVar7;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar11;
    func_0x000106e937b0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = puVar1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010c26a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puVar8 = puVar7;
    func_0x00010c27a380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar11);
    if (puVar3 == (undefined8 *)0x0) {
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      puVar11 = puVar10;
      func_0x00010bf43f80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = &uStack_260;
      puVar2 = puVar11;
      func_0x00010bf52a60();
      if (puVar2 != (undefined8 *)0x0) {
        lVar13 = *plStack_250;
        do {
          puVar12 = (undefined8 *)0x0;
          do {
            if (*plStack_250 != lVar13) {
              _objc_enumerationMutation(puVar11);
            }
            puVar14 = *(undefined1 **)(lStack_258 + (long)puVar12 * 8);
            puVar4 = PTR_PTR_1126d3078;
            _objc_opt_class(PTR_PTR_1126d3078);
            puVar5 = puVar14;
            _objc_opt_isKindOfClass(puVar14,puVar4);
            if (((ulong)puVar5 & 1) != 0) {
              _objc_retain(puVar14);
              puVar5 = puVar14;
              func_0x00010bf4bc60();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              puVar8 = puVar7;
              func_0x00010c071ae0();
              if ((int)puVar6 == 0) {
                _objc_release(puVar5);
              }
              else {
                puVar6 = puVar14;
                func_0x00010bf4c0c0();
                _objc_release(puVar5);
                if (puVar6 == puVar9) {
                  _objc_release(puVar14);
                  _objc_release(puVar11);
                  puVar11 = (undefined8 *)0x1;
                  goto LAB_106eb2e84;
                }
              }
              _objc_release(puVar14);
            }
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          } while (puVar2 != puVar12);
          puVar8 = &uStack_260;
          puVar2 = puVar11;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined8 *)0x0);
      }
      _objc_release(puVar11);
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = puVar3;
      func_0x00010c27a200(puVar3);
      puVar2 = puVar10;
      func_0x00010c27a200(puVar10);
      puVar11 = (undefined8 *)(ulong)(puVar11 == puVar2);
    }
LAB_106eb2e84:
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    func_0x00010bf04760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return puVar7;
  }
  return puVar11;
}



/* Entry: 106eb2c5c; end: 106eb2ee3; -[SCSpectaclesManager _isContent:component:partOfTransferSession:] */

undefined8 *
FUN_106eb2c5c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
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
  puVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000106e937b0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar10 = puVar2;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010c26a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    puVar1 = param_3;
    func_0x00010c27a380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar10);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar10 = param_5;
      func_0x00010bf43f80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = &uStack_130;
      puVar3 = puVar10;
      func_0x00010bf52a60();
      if (puVar3 != (undefined8 *)0x0) {
        lVar9 = *plStack_120;
        do {
          puVar8 = (undefined8 *)0x0;
          do {
            if (*plStack_120 != lVar9) {
              _objc_enumerationMutation(puVar10);
            }
            uVar11 = *(ulong *)(lStack_128 + (long)puVar8 * 8);
            puVar5 = PTR_PTR_1126d3078;
            _objc_opt_class(PTR_PTR_1126d3078);
            uVar6 = uVar11;
            _objc_opt_isKindOfClass(uVar11,puVar5);
            if ((uVar6 & 1) != 0) {
              _objc_retain(uVar11);
              uVar6 = uVar11;
              func_0x00010bf4bc60();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              puVar1 = param_3;
              func_0x00010c071ae0();
              if ((int)uVar7 == 0) {
                _objc_release(uVar6);
              }
              else {
                uVar7 = uVar11;
                func_0x00010bf4c0c0();
                _objc_release(uVar6);
                if (uVar7 == param_4) {
                  _objc_release(uVar11);
                  _objc_release(puVar10);
                  puVar10 = (undefined8 *)0x1;
                  goto LAB_106eb2e84;
                }
              }
              _objc_release(uVar11);
            }
            puVar8 = (undefined8 *)((long)puVar8 + 1);
          } while (puVar3 != puVar8);
          puVar1 = &uStack_130;
          puVar3 = puVar10;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined8 *)0x0);
      }
      _objc_release(puVar10);
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = puVar4;
      func_0x00010c27a200(puVar4);
      puVar3 = param_5;
      func_0x00010c27a200(param_5);
      puVar10 = (undefined8 *)(ulong)(puVar10 == puVar3);
    }
LAB_106eb2e84:
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar1);
    func_0x00010bf04760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  return puVar10;
}



/* Entry: 106eb2ee4; end: 106eb2f33; -[SCSpectaclesManager removeListener:] */

void FUN_106eb2ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb2f34; end: 106eb2f37; -[SCSpectaclesManager managerDeviceList] */

void FUN_106eb2f34(void)

{
  return;
}



/* Entry: 106eb2f38; end: 106eb2f3b; -[SCSpectaclesManager managerPairing] */

void FUN_106eb2f38(void)

{
  return;
}



/* Entry: 106eb2f3c; end: 106eb2f3f; -[SCSpectaclesManager managerTweaks] */

void FUN_106eb2f3c(void)

{
  return;
}



/* Entry: 106eb2f40; end: 106eb2f43; -[SCSpectaclesManager managerUIAutomation] */

void FUN_106eb2f40(void)

{
  return;
}



/* Entry: 106eb2f44; end: 106eb2f47; -[SCSpectaclesManager spectaclesCapabilities] */

void FUN_106eb2f44(void)

{
  return;
}



/* Entry: 106eb2f48; end: 106eb304b; -[SCSpectaclesManager streamableAssetWithSpecsRemoteFileName:fileSize:fromDevice:] */

void FUN_106eb2f48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_5;
  func_0x00010c15e740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c117b80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf54a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106eb304c; end: 106eb3053; -[SCSpectaclesManager bluetoothOverrideOn] */

undefined8 FUN_106eb304c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106eb3054; end: 106eb3083; -[SCSpectaclesManager setBluetoothOverrideOn:] */

void FUN_106eb3054(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb3084; end: 106eb30b3; -[SCSpectaclesManager setAnnouncer:] */

void FUN_106eb3084(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb30b4; end: 106eb30bb; -[SCSpectaclesManager cache] */

undefined8 FUN_106eb30b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106eb30bc; end: 106eb30eb; -[SCSpectaclesManager setCache:] */

void FUN_106eb30bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb30ec; end: 106eb30f3; -[SCSpectaclesManager pairingManager] */

undefined8 FUN_106eb30ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106eb30f4; end: 106eb3123; -[SCSpectaclesManager setPairingManager:] */

void FUN_106eb30f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb3124; end: 106eb312b; -[SCSpectaclesManager pairingManagerSessionId] */

undefined8 FUN_106eb3124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106eb312c; end: 106eb3133; -[SCSpectaclesManager setPairingManagerSessionId:] */

void FUN_106eb312c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106eb3134; end: 106eb313b; -[SCSpectaclesManager crashLogger] */

undefined8 FUN_106eb3134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106eb313c; end: 106eb316b; -[SCSpectaclesManager setCrashLogger:] */

void FUN_106eb313c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb316c; end: 106eb3173; -[SCSpectaclesManager analyticsLogger] */

undefined8 FUN_106eb316c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106eb3174; end: 106eb31a3; -[SCSpectaclesManager setAnalyticsLogger:] */

void FUN_106eb3174(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb31a4; end: 106eb31ab; -[SCSpectaclesManager centralManagerLogger] */

undefined8 FUN_106eb31a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106eb31ac; end: 106eb31db; -[SCSpectaclesManager setCentralManagerLogger:] */

void FUN_106eb31ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb31dc; end: 106eb31e3; -[SCSpectaclesManager centralManager] */

undefined8 FUN_106eb31dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106eb31e4; end: 106eb3213; -[SCSpectaclesManager setCentralManager:] */

void FUN_106eb31e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb3214; end: 106eb3243; -[SCSpectaclesManager setDeviceStore:] */

void FUN_106eb3214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb3244; end: 106eb324b; -[SCSpectaclesManager fideliusKeyProvider] */

undefined8 FUN_106eb3244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106eb324c; end: 106eb3253; -[SCSpectaclesManager authorizationProviderBlock] */

undefined8 FUN_106eb324c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106eb3254; end: 106eb325b; -[SCSpectaclesManager setAuthorizationProviderBlock:] */

void FUN_106eb3254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106eb325c; end: 106eb3263; -[SCSpectaclesManager spectaclesProfile] */

undefined8 FUN_106eb325c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106eb3264; end: 106eb326b; -[SCSpectaclesManager usernameProvider] */

undefined8 FUN_106eb3264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106eb326c; end: 106eb329b; -[SCSpectaclesManager setUsernameProvider:] */

void FUN_106eb326c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb329c; end: 106eb32a3; -[SCSpectaclesManager serverMetadataFetcher] */

undefined8 FUN_106eb329c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106eb32a4; end: 106eb32d3; -[SCSpectaclesManager setServerMetadataFetcher:] */

void FUN_106eb32a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb32d4; end: 106eb33c3; -[SCSpectaclesManager .cxx_destruct] */

void FUN_106eb32d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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


