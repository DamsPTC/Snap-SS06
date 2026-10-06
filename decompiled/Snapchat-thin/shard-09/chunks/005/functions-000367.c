/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e99778; end: 106e997a7; -[SCSpectaclesDevice setPerformer:] */

void FUN_106e99778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e997a8; end: 106e997af; -[SCSpectaclesDevice transferDisabledReason] */

undefined8 FUN_106e997a8(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 106e997b0; end: 106e997b7; -[SCSpectaclesDevice setTransferDisabledReason:] */

void FUN_106e997b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



/* Entry: 106e997b8; end: 106e997bf; -[SCSpectaclesDevice progressMonitor] */

undefined8 FUN_106e997b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 106e997c0; end: 106e997ef; -[SCSpectaclesDevice setProgressMonitor:] */

void FUN_106e997c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e997f0; end: 106e997f7; -[SCSpectaclesDevice shouldRequestCrashReports] */

undefined1 FUN_106e997f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5a);
}



/* Entry: 106e997f8; end: 106e997ff; -[SCSpectaclesDevice setShouldRequestCrashReports:] */

void FUN_106e997f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5a) = param_3;
  return;
}



/* Entry: 106e99800; end: 106e99807; -[SCSpectaclesDevice contentStore] */

undefined8 FUN_106e99800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 106e99808; end: 106e99837; -[SCSpectaclesDevice setContentStore:] */

void FUN_106e99808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99838; end: 106e9983f; -[SCSpectaclesDevice deviceAnnouncer] */

undefined8 FUN_106e99838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 106e99840; end: 106e9986f; -[SCSpectaclesDevice setDeviceAnnouncer:] */

void FUN_106e99840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99870; end: 106e99877; -[SCSpectaclesDevice connectionHub] */

undefined8 FUN_106e99870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 106e99878; end: 106e9987f; -[SCSpectaclesDevice genericMessageSender] */

undefined8 FUN_106e99878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 106e99880; end: 106e99887; -[SCSpectaclesDevice responseMonitors] */

undefined8 FUN_106e99880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 106e99888; end: 106e998b7; -[SCSpectaclesDevice setResponseMonitors:] */

void FUN_106e99888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e998b8; end: 106e998bf; -[SCSpectaclesDevice shortDisplayName] */

undefined8 FUN_106e998b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 106e998c0; end: 106e998c7; -[SCSpectaclesDevice setShortDisplayName:] */

void FUN_106e998c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106e998c8; end: 106e998cf; -[SCSpectaclesDevice connectionReason] */

undefined8 FUN_106e998c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 106e998d0; end: 106e998d7; -[SCSpectaclesDevice setConnectionReason:] */

void FUN_106e998d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
  return;
}



/* Entry: 106e998d8; end: 106e998ef; -[SCSpectaclesDevice analyticsLogger] */

void FUN_106e998d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e998f0; end: 106e998fb; -[SCSpectaclesDevice setAnalyticsLogger:] */

void FUN_106e998f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1d8,param_3);
  return;
}



/* Entry: 106e998fc; end: 106e99903; -[SCSpectaclesDevice lastMediaCount] */

undefined8 FUN_106e998fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 106e99904; end: 106e9990b; -[SCSpectaclesDevice deviceIpAddress] */

undefined8 FUN_106e99904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 106e9990c; end: 106e99913; -[SCSpectaclesDevice setDeviceIpAddress:] */

void FUN_106e9990c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106e99914; end: 106e9991b; -[SCSpectaclesDevice firmwareUpdater] */

undefined8 FUN_106e99914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 106e9991c; end: 106e9994b; -[SCSpectaclesDevice setFirmwareUpdater:] */

void FUN_106e9991c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e9994c; end: 106e99953; -[SCSpectaclesDevice ambaWatchdog] */

undefined8 FUN_106e9994c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 106e99954; end: 106e99983; -[SCSpectaclesDevice setAmbaWatchdog:] */

void FUN_106e99954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e99984; end: 106e9998b; -[SCSpectaclesDevice capabilities] */

undefined8 FUN_106e99984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 106e9998c; end: 106e99b63; -[SCSpectaclesDevice .cxx_destruct] */

void FUN_106e9998c(long param_1)

{
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_destroyWeak(param_1 + 0x1d8);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e99b64; end: 106e99c43; -[SCSpectaclesDeviceConnectionHub init] */

undefined1 * FUN_106e99b64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7a58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2f90;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e99c44; end: 106e99c8b; -[SCSpectaclesDeviceConnectionHub peripheral] */

void FUN_106e99c44(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e99c8c; end: 106e99cdb; -[SCSpectaclesDeviceConnectionHub setPeripheral:] */

void FUN_106e99c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e99cdc; end: 106e99ceb; -[SCSpectaclesDeviceConnectionHub sendRequest:] */

void FUN_106e99cdc(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c15c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x28),PTR_s_sendRequest__112634bd8);
    return;
  }
  return;
}



/* Entry: 106e99cec; end: 106e99e57; -[SCSpectaclesDeviceConnectionHub sendRequest:responseBlock:] */

void FUN_106e99cec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x28) == 0) {
    if (param_4 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,0,puVar2);
      _objc_release(puVar2);
    }
  }
  else {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    puVar2 = PTR_PTR_1126d2fd0;
    _objc_alloc(PTR_PTR_1126d2fd0);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ed20(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e99e58; end: 106e99e8f; -[SCSpectaclesDeviceConnectionHub addResponseMonitor:] */

void FUN_106e99e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010befb0c0(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e99e90; end: 106e99e97; -[SCSpectaclesDeviceConnectionHub removeResponseMonitor:] */

void FUN_106e99e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeResponseMonitor__112629250);
  return;
}



/* Entry: 106e99e98; end: 106e99f3f; -[SCSpectaclesDeviceConnectionHub addPushMessageMonitor:] */

void FUN_106e99e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf51e00();
    func_0x00010c12d460();
    func_0x00010befa120(uVar2,param_2,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e99f40; end: 106e99fc7; -[SCSpectaclesDeviceConnectionHub removePushMessageMonitor:] */

void FUN_106e99f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00();
  func_0x00010c12d460();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e99fc8; end: 106e9a04f; -[SCSpectaclesDeviceConnectionHub sendStartBTRequestWithBluetoothDisplayName:] */

void FUN_106e99fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b6718;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be61d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d420(puVar2,param_2,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e9a050; end: 106e9a093; -[SCSpectaclesDeviceConnectionHub sendStopBTRequest] */

void FUN_106e9a050(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c27d400(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a094; end: 106e9a147; -[SCSpectaclesDeviceConnectionHub sendDeviceInfoRequestWithSupportsHevc:enableLocation:forceBoot:] */

void FUN_106e9a094(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = 0x68766331;
    _VTIsHardwareDecodeSupported(0x68766331);
    bVar1 = iVar2 != 0;
  }
  puVar4 = PTR_PTR_1126b6718;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf707e0(puVar4,param_2,bVar1,puVar3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar5,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106e9a148; end: 106e9a18b; -[SCSpectaclesDeviceConnectionHub ambaWatchdogKick] */

void FUN_106e9a148(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf023a0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a18c; end: 106e9a1cf; -[SCSpectaclesDeviceConnectionHub clearCrashReport] */

void FUN_106e9a18c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf3b0a0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a1d0; end: 106e9a213; -[SCSpectaclesDeviceConnectionHub cancelBackupForIdentifiers:] */

void FUN_106e9a1d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf2df20(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a214; end: 106e9a257; -[SCSpectaclesDeviceConnectionHub resumeBackup] */

void FUN_106e9a214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c13d340(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a258; end: 106e9a29b; -[SCSpectaclesDeviceConnectionHub shareWifiCredentialsWithSSID:password:] */

void FUN_106e9a258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c22b280(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a29c; end: 106e9a2df; -[SCSpectaclesDeviceConnectionHub requestClientId] */

void FUN_106e9a29c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc3b00(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a2e0; end: 106e9a323; -[SCSpectaclesDeviceConnectionHub sendAuthzCode:codeVerifier:redirectUri:] */

void FUN_106e9a2e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf111e0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a324; end: 106e9a37f; -[SCSpectaclesDeviceConnectionHub sendAccessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:] */

void FUN_106e9a324(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010beecd00(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a380; end: 106e9a3c3; -[SCSpectaclesDeviceConnectionHub requestWifiAPList] */

void FUN_106e9a380(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfcc420(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a3c4; end: 106e9a407; -[SCSpectaclesDeviceConnectionHub requestLastCloudUploadTime] */

void FUN_106e9a3c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc6c80(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a408; end: 106e9a44b; -[SCSpectaclesDeviceConnectionHub registerForEvents] */

void FUN_106e9a408(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf9a1c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a44c; end: 106e9a48f; -[SCSpectaclesDeviceConnectionHub unregisterForEvents] */

void FUN_106e9a44c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf9a460(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e9a490; end: 106e9a577; -[SCSpectaclesDeviceConnectionHub handleResponse:] */

void FUN_106e9a490(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be167c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c13b740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = lVar1;
        func_0x00010c13b740();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar2 + 0x10))();
        _objc_release(lVar2);
      }
    }
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 == 5) {
    func_0x00010be2e920(param_1);
  }
  else {
    func_0x00010c0f4d40(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9a578; end: 106e9a57f; -[SCSpectaclesDeviceConnectionHub responseMonitorState] */

undefined8 FUN_106e9a578(void)

{
  return 0;
}



/* Entry: 106e9a580; end: 106e9a5cb; -[SCSpectaclesDeviceConnectionHub _myUUID] */

void FUN_106e9a580(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2fd8;
  func_0x00010bf275e0(PTR_PTR_1126d2fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e9a5cc; end: 106e9a6d7; -[SCSpectaclesDeviceConnectionHub _findAndDequeuePendingRequestMessageForResponse:] */

void FUN_106e9a5cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = 0;
  if (lVar1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df860(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
      _objc_retain(lVar3);
    }
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106e9a6d8; end: 106e9a7d7; -[SCSpectaclesDeviceConnectionHub _cleanupStalePendingRequests] */

void FUN_106e9a6d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae790;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e9a7d8; end: 106e9aa3b;  */

ulong FUN_106e9a7d8(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    _objc_retain(uVar2);
    _objc_sync_enter(uVar2);
    lVar3 = *(long *)(uVar2 + 8);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010c12d4a0(*(undefined8 *)(uVar2 + 8));
    }
    _objc_release(0);
    _objc_sync_exit(uVar2);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    lVar3 = 0;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(0);
        }
        lVar11 = *(long *)(lVar12 * 8);
        lVar6 = lVar11;
        func_0x00010c13b740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 != 0) {
          func_0x00010c13b740();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar11 + 0x10))();
          _objc_release(lVar11);
        }
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = 0;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    _objc_release(lVar5);
  }
  uVar7 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uVar2);
  __Unwind_Resume();
  uVar8 = *(undefined8 *)(*(long *)(uVar7 + 0x20) + 8);
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c15e300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(uVar9);
  if (param_1 < -60.0) {
    func_0x00010befa120(*(undefined8 *)(uVar7 + 0x28));
  }
  _objc_release(uVar8);
  return (ulong)(param_1 < -60.0);
}



/* Entry: 106e9aa3c; end: 106e9aadb;  */

bool FUN_106e9aa3c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c0e00e0(uVar1,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(uVar2);
  if (param_1 < -60.0) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x28));
  }
  _objc_release(uVar1);
  return param_1 < -60.0;
}



/* Entry: 106e9aadc; end: 106e9ac33; -[SCSpectaclesDeviceConnectionHub _handlePushMessage:] */

void FUN_106e9aadc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf51e00();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010bfd2500(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(0);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106e9ac34; end: 106e9ac87; -[SCSpectaclesDeviceConnectionHub .cxx_destruct] */

void FUN_106e9ac34(long param_1)

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



/* Entry: 106e9ac88; end: 106e9ae07; -[SCSpectaclesDeviceContentRefreshController initWithDevice:analyticsLogger:cache:delegate:] */

undefined8 *
FUN_106e9ac88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_6);
  puStack_50 = PTR_PTR_1126f7a60;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = auStack_48;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 4,puVar3);
    _objc_release(puVar3);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf6ff00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010c13ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb0c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e9ae08; end: 106e9aebb; -[SCSpectaclesDeviceContentRefreshController dealloc] */

void FUN_106e9ae08(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_38 = PTR_PTR_1126f7a60;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e9aebc; end: 106e9b177; -[SCSpectaclesDeviceContentRefreshController initiateContentRefresh] */

void FUN_106e9aebc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    puVar1 = PTR_PTR_1126d2fe0;
    _objc_alloc_init();
    lVar2 = param_1;
    func_0x00010beceb60(param_1);
    func_0x00010c2197c0(puVar1,param_2,lVar2);
    puVar3 = PTR_PTR_1126b6720;
    _objc_alloc();
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = param_1;
    func_0x00010beceb60(param_1);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c100(puVar3,param_2,lVar2,lVar4,0,0,puVar5,0,param_1,lVar6,0);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(lVar2);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c0895a0();
    *(long *)(param_1 + 0x30) = lVar4;
    _objc_release(lVar2);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064d40();
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf02380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef95c0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar4 = param_1;
    func_0x00010be3e540(param_1);
    puVar3 = PTR_PTR_1126d2fe8;
    _objc_alloc();
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c00c120(puVar3,param_2,lVar2,(uint)lVar4 ^ 1);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar3;
    _objc_release(uVar7);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c27a200(uVar7);
    func_0x00010c2197c0(*(undefined8 *)(param_1 + 0x38),param_2,uVar7);
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c27a300(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70240(lVar2,param_2,param_1,uVar7);
    _objc_release(uVar7);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_sync_exit(param_1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_sync_enter(lVar2);
  uVar7 = *(undefined8 *)(lVar2 + 0x38);
  func_0x00010c27a300(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106e9b178; end: 106e9b1db; -[SCSpectaclesDeviceContentRefreshController currentTransferSession] */

void FUN_106e9b178(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c27a300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e9b1dc; end: 106e9b223; -[SCSpectaclesDeviceContentRefreshController isContentRefreshInProgress] */

bool FUN_106e9b1dc(long param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106e9b224; end: 106e9b2d3; -[SCSpectaclesDeviceContentRefreshController cancelContentRefresh] */

void FUN_106e9b224(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    _objc_sync_exit(param_1);
  }
  else {
    _objc_retain(lVar2);
    func_0x00010bddf3e0(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106e9b2d4; end: 106e9b33b; -[SCSpectaclesDeviceContentRefreshController deleteSyncedContent:] */

void FUN_106e9b2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010bdc7f60(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9b33c; end: 106e9b4e7; -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:startedExecutingTask:connectionTimeInMs:] */

void FUN_106e9b33c(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 != *(long *)(param_1 + 0x28)) goto LAB_106e9b470;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar2 = param_4;
  func_0x00010c27dd80();
  if (uVar2 == 1) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
LAB_106e9b3c4:
    uVar2 = *(ulong *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar4;
  }
  else {
    uVar2 = param_4;
    func_0x00010c27dd80();
    if (uVar2 != 2) {
      uVar2 = param_4;
      func_0x00010c27dd80();
      if (uVar2 != 3) goto LAB_106e9b470;
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106e9b3c4;
    }
    _objc_retain(param_4);
    func_0x00010c187d80(*(undefined8 *)(param_1 + 0x38),param_2,param_4);
    uVar2 = param_4;
    func_0x00010c07c8e0();
    if ((uVar2 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar4;
      _objc_release(uVar1);
    }
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c27a300(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70260(lVar3,param_2,param_1,uVar1);
    _objc_release(uVar1);
    _objc_release(lVar3);
    uVar2 = param_4;
  }
  _objc_release(uVar2);
LAB_106e9b470:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9b4e8; end: 106e9b83b; -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:executedTask:] */

void FUN_106e9b4e8(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar4 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_sync_enter(param_2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != *(undefined **)(param_2 + 0x28)) goto LAB_106e9b6d0;
  if (*(long *)(param_2 + 0x50) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f3a0();
    func_0x00010c0df720(-param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = param_5;
  func_0x00010c27dd80();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_5;
    func_0x00010be2c200(param_2);
    goto LAB_106e9b6c8;
  }
  puVar1 = param_5;
  func_0x00010c27dd80();
  if (puVar1 == (undefined *)0x1) {
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    puVar2 = param_2;
    func_0x00010bf60760(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    func_0x00010c0cc0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    param_6 = puVar1;
    func_0x00010c15ebe0();
    puVar3 = param_5;
    func_0x00010bf4cca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0aa420(uVar6,param_3,puVar2,puVar5,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = param_5;
    func_0x00010be2c4a0(param_2);
    puVar1 = param_5;
LAB_106e9b6c4:
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_5;
    func_0x00010c27dd80();
    if (puVar1 == (undefined *)0x2) {
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      puVar2 = param_2;
      func_0x00010bf60760(param_2);
      _objc_retainAutoreleasedReturnValue();
      param_6 = (undefined *)0x0;
      func_0x00010c0a6740(uVar6,param_3,puVar2,puVar5,0);
      _objc_release(puVar2);
      puVar1 = param_2 + 0x20;
      _objc_loadWeakRetained(puVar1);
      puVar3 = *(undefined **)(param_2 + 0x38);
      func_0x00010c27a300();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      puVar4 = puVar3;
      func_0x00010bf701c0(puVar1);
      _objc_release(puVar3);
      goto LAB_106e9b6c4;
    }
    puVar1 = param_5;
    func_0x00010c27dd80();
    if (((puVar1 == (undefined *)0xb) ||
        (puVar1 = param_5, func_0x00010c27dd80(), puVar1 == (undefined *)0xc)) ||
       (puVar1 = param_5, func_0x00010c27dd80(), puVar1 == (undefined *)0xd)) {
      puVar1 = param_2 + 8;
      _objc_loadWeakRetained();
      puVar3 = puVar1;
      func_0x00010c263400();
      _objc_release(puVar1);
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = PTR_PTR_1126d2ff0;
        _objc_alloc_init();
        puVar4 = (undefined *)0x1;
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_70);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010be0a2c0(param_2);
        _objc_release(puVar3);
        _objc_release(puVar1);
      }
    }
    else {
      puVar1 = param_5;
      func_0x00010c27dd80();
      if (puVar1 == (undefined *)0x3) {
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        puVar1 = param_2;
        func_0x00010bf60760();
        _objc_retainAutoreleasedReturnValue();
        param_6 = (undefined *)0x0;
        puVar2 = puVar1;
        puVar4 = puVar5;
        func_0x00010c0a6740(uVar6);
        goto LAB_106e9b6c4;
      }
      func_0x00010c27dd80(param_5);
    }
  }
LAB_106e9b6c8:
  _objc_release(puVar5);
LAB_106e9b6d0:
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_sync_exit(param_2);
    __Unwind_Resume();
    _objc_retain(puVar2);
    _objc_retain(puVar4);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_sync_enter(param_4);
    if (puVar2 == *(undefined **)(param_4 + 0x28)) {
      puVar5 = puVar4;
      func_0x00010c27dd80();
      if (puVar5 == (undefined *)0x1) {
        func_0x00010be2c4c0(param_4,param_3,puVar4);
      }
      else {
        param_4[0x48] = 0;
      }
    }
    _objc_sync_exit(param_4);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106e9b83c; end: 106e9b8fb; -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:failedToExecutedTask:error:] */

void FUN_106e9b83c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 == *(long *)(param_1 + 0x28)) {
    lVar1 = param_4;
    func_0x00010c27dd80();
    if (lVar1 == 1) {
      func_0x00010be2c4c0(param_1,param_2,param_4);
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9b8fc; end: 106e9ba7b; -[SCSpectaclesDeviceContentRefreshController dataFlowsRequestCompleted:] */

void FUN_106e9b8fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 == *(long *)(param_1 + 0x28)) {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1b8240();
      _objc_release(lVar2);
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c27a300(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf70220(lVar2,param_2,param_1,uVar1);
    }
    else {
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c27a300(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      lVar3 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar4,param_2,lVar3,0xffffffffffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf701a0(lVar2,param_2,param_1,uVar1,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(uVar1);
    _objc_release(lVar2);
    func_0x00010bddf3e0(param_1);
    func_0x00010bdc7f60(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9ba7c; end: 106e9baef; -[SCSpectaclesDeviceContentRefreshController dataFlowsRequestCancelled:] */

void FUN_106e9ba7c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 == *(long *)(param_1 + 0x28)) {
    func_0x00010bddf3e0(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9baf0; end: 106e9bbd3; -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:failedWithError:] */

void FUN_106e9baf0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 == *(long *)(param_1 + 0x28)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c27a300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf701a0(lVar1,param_2,param_1,uVar2,param_4);
    _objc_release(uVar2);
    _objc_release(lVar1);
    func_0x00010bddf3e0(param_1);
    func_0x00010bdc7f60(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9bbd4; end: 106e9bc17; -[SCSpectaclesDeviceContentRefreshController _handleMediaListTaskCompleted:] */

void FUN_106e9bbd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be1c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__generateTasksWithMediaList__1125649b8,*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106e9bc18; end: 106e9c5c3; -[SCSpectaclesDeviceContentRefreshController _handleMetadataTaskCompleted:] */

undefined * FUN_106e9bc18(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 unaff_x19;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *unaff_x26;
  undefined *puVar15;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined auStack_300 [128];
  long lStack_280;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  puVar13 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar2 = puVar13;
  func_0x00010bf4d760();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_3;
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  puVar10 = puVar15;
  func_0x00010bf4dee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar15);
  _objc_release(puVar2);
  _objc_release(puVar13);
  if (puVar1 == (undefined *)0x0) {
    puVar13 = PTR_PTR_1126d2f58;
    _objc_alloc();
    puVar2 = param_3;
    func_0x00010bf4cca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained();
    unaff_x26 = puVar13;
    func_0x00010c02d640(puVar13,param_2,puVar2,puVar15);
    _objc_release(puVar15);
    _objc_release(puVar2);
    puVar2 = *(undefined **)(param_1 + 0x38);
    func_0x00010bf16f40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c16f800(unaff_x26);
    _objc_release(puVar2);
    puVar2 = unaff_x26;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((puVar2 != (undefined *)0x0) &&
       (lVar12 = param_1, puVar10 = unaff_x26, func_0x00010be75c80(),
       puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0, (int)lVar12 != 0)) {
      puVar13 = unaff_x26;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar13;
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8abb8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      unaff_x28 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar13 = unaff_x26;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar13;
      func_0x00010c14de00(unaff_x28,param_2,&PTR____CFConstantStringClassReference_110e8abd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar15 = unaff_x26;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar15;
      func_0x00010c14de00(puVar13,param_2,&PTR____CFConstantStringClassReference_110e8abf8);
      _objc_retainAutoreleasedReturnValue();
      puStack_150 = puVar13;
      _objc_release(puVar15);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar15 = unaff_x26;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar15;
      func_0x00010c14de00(puVar13,param_2,&PTR____CFConstantStringClassReference_110e8ac18);
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = puVar13;
      _objc_release(puVar15);
      puVar13 = param_3;
      func_0x00010c0cc2e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010bdedba0(param_1,param_2,puVar3,puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c74a0(unaff_x26,param_2,lVar12);
      _objc_release(lVar12);
      _objc_release(puVar13);
      puVar13 = param_3;
      func_0x00010c26db00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010bdedba0(param_1,param_2,unaff_x28,puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214060(unaff_x26,param_2,lVar12);
      _objc_release(lVar12);
      _objc_release(puVar13);
      puVar15 = param_3;
      func_0x00010bfeade0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_160 = puVar15;
      if (puVar15 != (undefined *)0x0) {
        puVar15 = unaff_x26;
        func_0x00010bdc3540();
        _objc_retainAutoreleasedReturnValue();
        puStack_1c0 = puVar15;
        func_0x00010c14de00(puVar13,param_2,&PTR____CFConstantStringClassReference_110e8ac38);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar15 = param_3;
        func_0x00010bfeade0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_1;
        func_0x00010bdedba0(param_1,param_2,puVar13,puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ab540(unaff_x26,param_2,lVar12);
        _objc_release(lVar12);
        _objc_release(puVar15);
        _objc_release(puVar13);
      }
      puVar15 = param_3;
      func_0x00010c153040();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar15 != (undefined *)0x0) {
        puVar2 = unaff_x26;
        func_0x00010bdc3540();
        _objc_retainAutoreleasedReturnValue();
        puStack_1c0 = puVar2;
        func_0x00010c14de00(puVar13,param_2,&PTR____CFConstantStringClassReference_110e8ac58);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        lVar12 = param_1;
        func_0x00010bdedba0(param_1,param_2,puVar13,puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f8000(unaff_x26,param_2,lVar12);
        _objc_release(lVar12);
        _objc_release(puVar13);
      }
      puVar13 = param_3;
      func_0x00010bfdef20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar13 != (undefined *)0x0) {
        lVar12 = param_1;
        func_0x00010bdedba0(param_1,param_2,puStack_150,puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a75c0(unaff_x26,param_2,lVar12);
        _objc_release(lVar12);
      }
      puVar2 = param_3;
      func_0x00010c0fbc80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        lVar12 = param_1;
        func_0x00010bdedba0(param_1,param_2,puStack_158,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1db840(unaff_x26,param_2,lVar12);
        _objc_release(lVar12);
      }
      puVar1 = param_3;
      puStack_178 = puVar2;
      func_0x00010bf038c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_170 = puVar13;
      if (puVar1 != (undefined *)0x0) {
        puVar13 = unaff_x26;
        func_0x00010bdc3540();
        _objc_retainAutoreleasedReturnValue();
        puStack_1c0 = puVar13;
        func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8ac78);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        lVar12 = param_1;
        func_0x00010bdedba0(param_1,param_2,puVar2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c167fa0(unaff_x26,param_2,lVar12);
        _objc_release(lVar12);
        _objc_release(puVar2);
      }
      puVar13 = param_3;
      puStack_180 = puVar1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar13;
      func_0x00010c120080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = unaff_x26;
      func_0x00010c0cc2e0(unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c08fa60(puVar2);
      puStack_188 = puVar2;
      func_0x00010bf06b00(puVar13,param_2,puVar2,0,puVar1);
      _objc_release(puVar13);
      lVar12 = param_1;
      func_0x00010be08920(param_1,param_2,unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 != 0) {
        func_0x00010c1f8000(unaff_x26,param_2,lVar12);
      }
      puVar13 = param_3;
      lStack_190 = lVar12;
      puStack_168 = puVar15;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar13;
      func_0x00010bfc0dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      unaff_x27 = puVar3;
      if (puVar1 != (undefined *)0x0) {
        puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        puStack_1a8 = unaff_x28;
        puStack_1a0 = puVar3;
        puStack_198 = param_3;
        lStack_138 = param_1;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        puStack_140 = puVar13;
        _objc_retain(puVar1);
        puVar13 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
        if (puVar13 != (undefined *)0x0) {
          lVar12 = *plStack_120;
          puStack_148 = puVar1;
          do {
            puVar15 = (undefined *)0x0;
            do {
              if (*plStack_120 != lVar12) {
                _objc_enumerationMutation(puStack_148);
              }
              puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar14 = *(undefined8 *)(lStack_128 + (long)puVar15 * 8);
              puVar1 = unaff_x26;
              func_0x00010bdc3540();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar14;
              func_0x00010bf0b2c0();
              _objc_retainAutoreleasedReturnValue();
              puStack_1c0 = puVar1;
              uStack_1b8 = uVar5;
              func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar5);
              _objc_release(puVar1);
              lVar4 = lStack_138;
              func_0x00010bdedb80(lStack_138,param_2,puVar2,uVar14);
              _objc_retainAutoreleasedReturnValue();
              if (lVar4 != 0) {
                func_0x00010bf0b2c0(uVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_140,param_2,lVar4,uVar14);
                _objc_release(uVar14);
              }
              _objc_release(lVar4);
              _objc_release(puVar2);
              puVar1 = puStack_148;
              puVar15 = puVar15 + 1;
            } while (puVar13 != puVar15);
            puVar13 = puStack_148;
            func_0x00010bf52a60(puStack_148,param_2,&uStack_130,auStack_f0,0x10);
          } while (puVar13 != (undefined *)0x0);
        }
        _objc_release(puVar1);
        func_0x00010c1a2a80(unaff_x26,param_2,puVar1);
        puVar13 = puStack_140;
        func_0x00010c1a2a60(unaff_x26,param_2,puStack_140);
        _objc_release(puVar13);
        param_3 = puStack_198;
        param_1 = lStack_138;
        unaff_x27 = puStack_1a0;
        unaff_x28 = puStack_1a8;
      }
      lVar12 = param_1 + 8;
      _objc_loadWeakRetained(lVar12);
      lVar4 = lVar12;
      func_0x00010bf4d760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7a80();
      _objc_release(lVar4);
      _objc_release(lVar12);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c27a300(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_3;
      func_0x00010c0cc0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = unaff_x26;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a3d60(uVar14,param_2,uVar5,puVar13,puVar15);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(uVar5);
      lVar12 = param_1 + 8;
      _objc_loadWeakRetained(lVar12);
      func_0x00010c0895a0();
      puVar2 = (undefined *)(param_1 + 8);
      _objc_loadWeakRetained();
      func_0x00010c1b8240();
      _objc_release(puVar2);
      _objc_release(lVar12);
      unaff_x19 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c27a300();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = (undefined *)(param_1 + 0x20);
      _objc_loadWeakRetained();
      func_0x00010bf70200();
      _objc_release(puVar13);
      puVar10 = *(undefined **)(param_1 + 0x40);
      func_0x00010be1c060(param_1);
      _objc_release(unaff_x19);
      _objc_release(puVar1);
      _objc_release(lStack_190);
      _objc_release(puStack_188);
      _objc_release(puStack_180);
      _objc_release(puStack_178);
      _objc_release(puStack_170);
      _objc_release(puStack_168);
      _objc_release(puStack_160);
      _objc_release(puStack_158);
      _objc_release(puStack_150);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
    }
    _objc_release(unaff_x26);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126d2ff8;
  pcStack_1c8 = FUN_106e9c5c4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = puVar1;
  puStack_1f8 = puVar15;
  puStack_1f0 = puVar2;
  puStack_1e8 = puVar13;
  puStack_1e0 = param_3;
  uStack_1d8 = unaff_x19;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_alloc();
  puVar13 = puVar10;
  func_0x00010bf4cca0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0038a0(puVar6,param_2,puVar13);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_210 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_210,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0a2c0(puVar3,param_2,puVar13);
  _objc_release(puVar13);
  uVar5 = *(undefined8 *)(puVar3 + 0x10);
  puVar15 = puVar10;
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar3 = puVar3 + 8;
  _objc_loadWeakRetained();
  puVar13 = puVar15;
  func_0x00010c0a3f80(uVar5,param_2,puVar15,puVar3,1);
  _objc_release(puVar3);
  _objc_release(puVar15);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_106e9c700;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_270 = unaff_x28;
  puStack_268 = unaff_x27;
  puStack_260 = unaff_x26;
  lStack_258 = param_1;
  puStack_250 = puVar1;
  puStack_248 = puVar15;
  uStack_240 = uVar5;
  puStack_238 = puVar6;
  puStack_230 = puVar10;
  puStack_228 = puVar3;
  ppuStack_220 = &puStack_1d0;
  _objc_retain(puVar13);
  puVar1 = PTR_PTR_1126d3000;
  _objc_alloc();
  puVar15 = puVar2 + 8;
  _objc_loadWeakRetained();
  puVar10 = puVar15;
  func_0x00010bf4d760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0298c0(puVar1,param_2,puVar13,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar15);
  func_0x00010c284980(puVar1);
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  puVar10 = puVar1;
  func_0x00010bf4d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = auStack_300;
  puVar3 = puVar10;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar12 = *plStack_330;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_330 != lVar12) {
          _objc_enumerationMutation(puVar10);
        }
        puVar6 = puVar2 + 8;
        _objc_loadWeakRetained();
        puVar7 = puVar6;
        func_0x00010bf4d760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b900();
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar15 = auStack_300;
      puVar3 = puVar10;
      func_0x00010bf52a60(puVar10,param_2,&uStack_340,puVar15,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar10);
  puVar10 = puVar1;
  func_0x00010c0d7060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010be0a2c0(puVar2,param_2,puVar10);
  puVar3 = puVar1;
  func_0x00010c0d7020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0a2c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0d7040();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010be0a2c0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar15);
  puVar2 = puVar15;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
LAB_106e9cf90:
    puVar13 = (undefined *)0x0;
    goto LAB_106e9cfa4;
  }
  puVar2 = puVar15;
  func_0x00010c0cc0c0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf4dac0();
  func_0x00010c21acc0(puVar6,param_2,puVar1);
  _objc_release(puVar2);
  puVar2 = puVar6;
  func_0x00010c27dd80();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar15;
    func_0x00010c0cc0c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221580(puVar6,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar15;
    func_0x00010c0cc0c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0d2900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9b80(puVar6,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar15;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c074a20();
    uVar11 = 3;
    if ((int)puVar1 == 0) {
      uVar11 = 4;
    }
    func_0x00010c1c4760(puVar6,param_2,uVar11);
    _objc_release(puVar2);
    puVar1 = puVar6;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = puVar13 + 8;
    _objc_loadWeakRetained();
    puVar10 = puVar2;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = puVar10;
      func_0x00010c075fc0();
      _objc_release(puVar10);
      _objc_release(puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = puVar13 + 8;
        _objc_loadWeakRetained();
        puVar1 = puVar2;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010c0774a0();
        _objc_release(puVar1);
        _objc_release(puVar2);
        if (((ulong)puVar10 & 1) == 0) {
          puVar2 = puVar13 + 8;
          _objc_loadWeakRetained();
          puVar1 = puVar2;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          func_0x00010c078aa0();
          _objc_release(puVar1);
          _objc_release(puVar2);
          if (((ulong)puVar10 & 1) == 0) {
            puVar2 = puVar13 + 8;
            _objc_loadWeakRetained();
            puVar1 = puVar2;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar1;
            func_0x00010c074bc0();
            _objc_release(puVar1);
            _objc_release(puVar2);
            if (((ulong)puVar10 & 1) == 0) {
              puVar13 = puVar13 + 8;
              _objc_loadWeakRetained();
              puVar2 = puVar13;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar2;
              func_0x00010c06e7e0();
              _objc_release(puVar2);
              _objc_release(puVar13);
              if ((int)puVar1 == 0) goto LAB_106e9cd40;
              uVar5 = 0xc;
            }
            else {
              uVar5 = 10;
            }
          }
          else {
            uVar5 = 8;
          }
        }
        else {
          uVar5 = 5;
        }
      }
      else {
        uVar5 = 6;
      }
      goto LAB_106e9cd38;
    }
    func_0x00010c06e7e0();
    puVar13 = (undefined *)0x0;
LAB_106e9cf84:
    _objc_release(puVar10);
  }
  else {
    if (puVar2 == (undefined *)0x1) {
      func_0x00010c1c4760(puVar6,param_2,1);
      puVar2 = puVar13 + 8;
      _objc_loadWeakRetained();
      puVar1 = puVar2;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010c075fc0();
      _objc_release(puVar1);
      _objc_release(puVar2);
      if (((ulong)puVar10 & 1) == 0) {
        puVar2 = puVar13 + 8;
        _objc_loadWeakRetained();
        puVar1 = puVar2;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010c0774a0();
        _objc_release(puVar1);
        _objc_release(puVar2);
        if (((ulong)puVar10 & 1) == 0) {
          puVar2 = puVar13 + 8;
          _objc_loadWeakRetained();
          puVar1 = puVar2;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          func_0x00010c078aa0();
          _objc_release(puVar1);
          _objc_release(puVar2);
          if (((ulong)puVar10 & 1) == 0) {
            puVar2 = puVar13 + 8;
            _objc_loadWeakRetained();
            puVar1 = puVar2;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar1;
            func_0x00010c074bc0();
            _objc_release(puVar1);
            _objc_release(puVar2);
            if (((ulong)puVar10 & 1) == 0) {
              puVar13 = puVar13 + 8;
              _objc_loadWeakRetained();
              puVar2 = puVar13;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar2;
              func_0x00010c06e7e0();
              _objc_release(puVar2);
              _objc_release(puVar13);
              if (((ulong)puVar1 & 1) == 0) goto LAB_106e9cd40;
              uVar5 = 0xb;
            }
            else {
              uVar5 = 9;
            }
          }
          else {
            uVar5 = 7;
          }
        }
        else {
          uVar5 = 4;
        }
      }
      else {
        uVar5 = 3;
      }
LAB_106e9cd38:
      func_0x00010c1c5440(puVar6,param_2,uVar5);
    }
LAB_106e9cd40:
    puVar2 = puVar15;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c26f500();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 != (undefined *)0x0) {
      puVar1 = puVar15;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c11f0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = (undefined *)(ulong)(puVar3 != (undefined *)0x0);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = puVar15;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c08fa60();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release(puVar10);
        _objc_release(puVar2);
        if (puVar9 != (undefined *)0x30) goto LAB_106e9cf90;
        puVar2 = puVar15;
        func_0x00010c0cc0c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x00010bf258e0();
        func_0x00010c174a00(puVar6,param_2,puVar1);
        _objc_release(puVar2);
        puVar2 = puVar15;
        func_0x00010c0cc0c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x00010bfb2960();
        func_0x00010c19dd60(puVar6,param_2,puVar1);
        _objc_release(puVar2);
        puVar2 = puVar15;
        func_0x00010c0cc0c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x00010c26f500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214e00(puVar6,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar2);
        puVar2 = puVar15;
        func_0x00010c0cc0c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf6c0(puVar6,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar2);
        puVar2 = puVar15;
        func_0x00010c0cc0c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40(puVar6,param_2,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar1);
        _objc_release(puVar2);
        puVar2 = puVar15;
        func_0x00010c0cc0c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar10;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9620(puVar6,param_2,puVar1);
      }
      _objc_release(puVar1);
      goto LAB_106e9cf84;
    }
    puVar13 = (undefined *)0x0;
  }
  _objc_release(puVar2);
LAB_106e9cfa4:
  _objc_release(puVar15);
  _objc_release(puVar6);
  return puVar13;
}



/* Entry: 106e9c5c4; end: 106e9c6ff; -[SCSpectaclesDeviceContentRefreshController _handleMetadataTaskFailed:] */

undefined * FUN_106e9c5c4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [128];
  long lStack_c0;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126d2ff8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar16 = param_3;
  func_0x00010bf4cca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0038a0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0a2c0(param_1,param_2,puVar16);
  _objc_release(puVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = param_3;
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar16 = puVar2;
  func_0x00010c0a3f80(uVar17,param_2,puVar2,param_1,1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  puVar3 = PTR_PTR_1126d3000;
  _objc_alloc();
  puVar2 = puVar1 + 8;
  _objc_loadWeakRetained();
  puVar4 = puVar2;
  func_0x00010bf4d760();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar4;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0298c0(puVar3,param_2,puVar16,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c284980(puVar3);
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  puVar2 = puVar3;
  func_0x00010bf4d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_140;
  puVar4 = puVar2;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar18 = *plStack_170;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar18) {
          _objc_enumerationMutation(puVar2);
        }
        puVar5 = puVar1 + 8;
        _objc_loadWeakRetained();
        puVar6 = puVar5;
        func_0x00010bf4d760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b900();
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar19 = puVar19 + 1;
      } while (puVar4 != puVar19);
      puVar14 = auStack_140;
      puVar4 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_180,puVar14,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c0d7060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010be0a2c0(puVar1,param_2,puVar2);
  puVar4 = puVar3;
  func_0x00010c0d7020(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0a2c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0d7040();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar4;
  func_0x00010be0a2c0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return puVar16;
  }
  ___stack_chk_fail();
  _objc_retain(puVar19);
  _objc_retain(puVar14);
  puVar7 = puVar14;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 == (undefined1 *)0x0) {
LAB_106e9cf90:
    puVar16 = (undefined *)0x0;
    goto LAB_106e9cfa4;
  }
  puVar7 = puVar14;
  func_0x00010c0cc0c0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf4dac0();
  func_0x00010c21acc0(puVar19,param_2,puVar8);
  _objc_release(puVar7);
  puVar1 = puVar19;
  func_0x00010c27dd80();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = puVar14;
    func_0x00010c0cc0c0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221580(puVar19,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar14;
    func_0x00010c0cc0c0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d2900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9b80(puVar19,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar14;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c074a20();
    uVar15 = 3;
    if ((int)puVar8 == 0) {
      uVar15 = 4;
    }
    func_0x00010c1c4760(puVar19,param_2,uVar15);
    _objc_release(puVar7);
    puVar1 = puVar19;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = puVar16 + 8;
    _objc_loadWeakRetained();
    puVar8 = puVar7;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar9 = puVar8;
      func_0x00010c075fc0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      if (((ulong)puVar9 & 1) == 0) {
        puVar1 = puVar16 + 8;
        _objc_loadWeakRetained();
        puVar2 = puVar1;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0774a0();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (((ulong)puVar3 & 1) == 0) {
          puVar1 = puVar16 + 8;
          _objc_loadWeakRetained();
          puVar2 = puVar1;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c078aa0();
          _objc_release(puVar2);
          _objc_release(puVar1);
          if (((ulong)puVar3 & 1) == 0) {
            puVar1 = puVar16 + 8;
            _objc_loadWeakRetained();
            puVar2 = puVar1;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c074bc0();
            _objc_release(puVar2);
            _objc_release(puVar1);
            if (((ulong)puVar3 & 1) == 0) {
              puVar16 = puVar16 + 8;
              _objc_loadWeakRetained();
              puVar1 = puVar16;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010c06e7e0();
              _objc_release(puVar1);
              _objc_release(puVar16);
              if ((int)puVar2 == 0) goto LAB_106e9cd40;
              uVar17 = 0xc;
            }
            else {
              uVar17 = 10;
            }
          }
          else {
            uVar17 = 8;
          }
        }
        else {
          uVar17 = 5;
        }
      }
      else {
        uVar17 = 6;
      }
      goto LAB_106e9cd38;
    }
    func_0x00010c06e7e0();
    puVar16 = (undefined *)0x0;
LAB_106e9cf84:
    _objc_release(puVar8);
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      func_0x00010c1c4760(puVar19,param_2,1);
      puVar1 = puVar16 + 8;
      _objc_loadWeakRetained();
      puVar2 = puVar1;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c075fc0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = puVar16 + 8;
        _objc_loadWeakRetained();
        puVar2 = puVar1;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0774a0();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (((ulong)puVar3 & 1) == 0) {
          puVar1 = puVar16 + 8;
          _objc_loadWeakRetained();
          puVar2 = puVar1;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c078aa0();
          _objc_release(puVar2);
          _objc_release(puVar1);
          if (((ulong)puVar3 & 1) == 0) {
            puVar1 = puVar16 + 8;
            _objc_loadWeakRetained();
            puVar2 = puVar1;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c074bc0();
            _objc_release(puVar2);
            _objc_release(puVar1);
            if (((ulong)puVar3 & 1) == 0) {
              puVar16 = puVar16 + 8;
              _objc_loadWeakRetained();
              puVar1 = puVar16;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010c06e7e0();
              _objc_release(puVar1);
              _objc_release(puVar16);
              if (((ulong)puVar2 & 1) == 0) goto LAB_106e9cd40;
              uVar17 = 0xb;
            }
            else {
              uVar17 = 9;
            }
          }
          else {
            uVar17 = 7;
          }
        }
        else {
          uVar17 = 4;
        }
      }
      else {
        uVar17 = 3;
      }
LAB_106e9cd38:
      func_0x00010c1c5440(puVar19,param_2,uVar17);
    }
LAB_106e9cd40:
    puVar7 = puVar14;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c26f500();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined1 *)0x0) {
      puVar9 = puVar14;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c11f0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = (undefined *)(ulong)(puVar10 != (undefined1 *)0x0);
      if (puVar10 != (undefined1 *)0x0) {
        puVar11 = puVar14;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c08fa60();
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        if (puVar13 != (undefined1 *)0x30) goto LAB_106e9cf90;
        puVar7 = puVar14;
        func_0x00010c0cc0c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf258e0();
        func_0x00010c174a00(puVar19,param_2,puVar8);
        _objc_release(puVar7);
        puVar7 = puVar14;
        func_0x00010c0cc0c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfb2960();
        func_0x00010c19dd60(puVar19,param_2,puVar8);
        _objc_release(puVar7);
        puVar7 = puVar14;
        func_0x00010c0cc0c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c26f500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214e00(puVar19,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        puVar7 = puVar14;
        func_0x00010c0cc0c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf6c0(puVar19,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        puVar7 = puVar14;
        func_0x00010c0cc0c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40(puVar19,param_2,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        puVar7 = puVar14;
        func_0x00010c0cc0c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9620(puVar19,param_2,puVar9);
      }
      _objc_release(puVar9);
      goto LAB_106e9cf84;
    }
    puVar16 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_106e9cfa4:
  _objc_release(puVar14);
  _objc_release(puVar19);
  return puVar16;
}



/* Entry: 106e9c700; end: 106e9c93f; -[SCSpectaclesDeviceContentRefreshController _generateTasksWithMediaList:] */

ulong FUN_106e9c700(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  puVar1 = PTR_PTR_1126d3000;
  _objc_alloc();
  lVar19 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar19;
  func_0x00010bf4d760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0298c0(puVar1,param_2,param_3,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar19);
  func_0x00010c284980(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar4 = puVar1;
  func_0x00010bf4d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = auStack_f0;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar19 = *plStack_120;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(puVar4);
        }
        lVar2 = param_1 + 8;
        _objc_loadWeakRetained();
        lVar3 = lVar2;
        func_0x00010bf4d760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b900();
        _objc_release(lVar3);
        _objc_release(lVar2);
        puVar20 = puVar20 + 1;
      } while (puVar5 != puVar20);
      puVar16 = auStack_f0;
      puVar5 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_130,puVar16,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c0d7060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010be0a2c0(param_1,param_2,puVar4);
  puVar5 = puVar1;
  func_0x00010c0d7020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0a2c0(param_1,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x00010c0d7040();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar5;
  func_0x00010be0a2c0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar20);
  _objc_retain(puVar16);
  puVar6 = puVar16;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 == (undefined1 *)0x0) {
LAB_106e9cf90:
    uVar18 = 0;
    goto LAB_106e9cfa4;
  }
  puVar6 = puVar16;
  func_0x00010c0cc0c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf4dac0();
  func_0x00010c21acc0(puVar20,param_2,puVar7);
  _objc_release(puVar6);
  puVar1 = puVar20;
  func_0x00010c27dd80();
  if (puVar1 == (undefined *)0x0) {
    puVar6 = puVar16;
    func_0x00010c0cc0c0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221580(puVar20,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar16;
    func_0x00010c0cc0c0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0d2900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9b80(puVar20,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar16;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c074a20();
    uVar17 = 3;
    if ((int)puVar7 == 0) {
      uVar17 = 4;
    }
    func_0x00010c1c4760(puVar20,param_2,uVar17);
    _objc_release(puVar6);
    puVar1 = puVar20;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = (undefined1 *)(param_3 + 8);
    _objc_loadWeakRetained();
    puVar7 = puVar6;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar8 = puVar7;
      func_0x00010c075fc0();
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (((ulong)puVar8 & 1) == 0) {
        uVar18 = param_3 + 8;
        _objc_loadWeakRetained();
        uVar9 = uVar18;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0774a0();
        _objc_release(uVar9);
        _objc_release(uVar18);
        if ((uVar10 & 1) == 0) {
          uVar18 = param_3 + 8;
          _objc_loadWeakRetained();
          uVar9 = uVar18;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c078aa0();
          _objc_release(uVar9);
          _objc_release(uVar18);
          if ((uVar10 & 1) == 0) {
            uVar18 = param_3 + 8;
            _objc_loadWeakRetained();
            uVar9 = uVar18;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c074bc0();
            _objc_release(uVar9);
            _objc_release(uVar18);
            if ((uVar10 & 1) == 0) {
              lVar19 = param_3 + 8;
              _objc_loadWeakRetained();
              lVar2 = lVar19;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar2;
              func_0x00010c06e7e0();
              _objc_release(lVar2);
              _objc_release(lVar19);
              if ((int)lVar3 == 0) goto LAB_106e9cd40;
              uVar15 = 0xc;
            }
            else {
              uVar15 = 10;
            }
          }
          else {
            uVar15 = 8;
          }
        }
        else {
          uVar15 = 5;
        }
      }
      else {
        uVar15 = 6;
      }
      goto LAB_106e9cd38;
    }
    func_0x00010c06e7e0();
    uVar18 = 0;
LAB_106e9cf84:
    _objc_release(puVar7);
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      func_0x00010c1c4760(puVar20,param_2,1);
      uVar18 = param_3 + 8;
      _objc_loadWeakRetained();
      uVar9 = uVar18;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c075fc0();
      _objc_release(uVar9);
      _objc_release(uVar18);
      if ((uVar10 & 1) == 0) {
        uVar18 = param_3 + 8;
        _objc_loadWeakRetained();
        uVar9 = uVar18;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0774a0();
        _objc_release(uVar9);
        _objc_release(uVar18);
        if ((uVar10 & 1) == 0) {
          uVar18 = param_3 + 8;
          _objc_loadWeakRetained();
          uVar9 = uVar18;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c078aa0();
          _objc_release(uVar9);
          _objc_release(uVar18);
          if ((uVar10 & 1) == 0) {
            uVar18 = param_3 + 8;
            _objc_loadWeakRetained();
            uVar9 = uVar18;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c074bc0();
            _objc_release(uVar9);
            _objc_release(uVar18);
            if ((uVar10 & 1) == 0) {
              param_3 = param_3 + 8;
              _objc_loadWeakRetained();
              uVar18 = param_3;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar18;
              func_0x00010c06e7e0();
              _objc_release(uVar18);
              _objc_release(param_3);
              if ((uVar9 & 1) == 0) goto LAB_106e9cd40;
              uVar15 = 0xb;
            }
            else {
              uVar15 = 9;
            }
          }
          else {
            uVar15 = 7;
          }
        }
        else {
          uVar15 = 4;
        }
      }
      else {
        uVar15 = 3;
      }
LAB_106e9cd38:
      func_0x00010c1c5440(puVar20,param_2,uVar15);
    }
LAB_106e9cd40:
    puVar6 = puVar16;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c26f500();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined1 *)0x0) {
      puVar8 = puVar16;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c11f0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = (ulong)(puVar11 != (undefined1 *)0x0);
      if (puVar11 != (undefined1 *)0x0) {
        puVar12 = puVar16;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c08fa60();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        if (puVar14 != (undefined1 *)0x30) goto LAB_106e9cf90;
        puVar6 = puVar16;
        func_0x00010c0cc0c0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf258e0();
        func_0x00010c174a00(puVar20,param_2,puVar7);
        _objc_release(puVar6);
        puVar6 = puVar16;
        func_0x00010c0cc0c0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfb2960();
        func_0x00010c19dd60(puVar20,param_2,puVar7);
        _objc_release(puVar6);
        puVar6 = puVar16;
        func_0x00010c0cc0c0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c26f500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214e00(puVar20,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = puVar16;
        func_0x00010c0cc0c0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf6c0(puVar20,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = puVar16;
        func_0x00010c0cc0c0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40(puVar20,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = puVar16;
        func_0x00010c0cc0c0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9620(puVar20,param_2,puVar8);
      }
      _objc_release(puVar8);
      goto LAB_106e9cf84;
    }
    uVar18 = 0;
  }
  _objc_release(puVar6);
LAB_106e9cfa4:
  _objc_release(puVar16);
  _objc_release(puVar20);
  return uVar18;
}



/* Entry: 106e9c940; end: 106e9cfd3; -[SCSpectaclesDeviceContentRefreshController _populateContentMetadata:fromMetadataTask:] */

bool FUN_106e9c940(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
LAB_106e9cf90:
    bVar1 = false;
    goto LAB_106e9cfa4;
  }
  uVar2 = param_4;
  func_0x00010c0cc0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4dac0();
  func_0x00010c21acc0(param_3,param_2,uVar3);
  _objc_release(uVar2);
  lVar4 = param_3;
  func_0x00010c27dd80();
  if (lVar4 == 0) {
    uVar2 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221580(param_3,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d2900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9b80(param_3,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074a20();
    uVar12 = 3;
    if ((int)uVar3 == 0) {
      uVar12 = 4;
    }
    func_0x00010c1c4760(param_3,param_2,uVar12);
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010c299d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      uVar5 = uVar3;
      func_0x00010c075fc0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar5 & 1) == 0) {
        uVar2 = param_1 + 8;
        _objc_loadWeakRetained();
        uVar3 = uVar2;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0774a0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar5 & 1) == 0) {
          uVar2 = param_1 + 8;
          _objc_loadWeakRetained();
          uVar3 = uVar2;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c078aa0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar5 & 1) == 0) {
            uVar2 = param_1 + 8;
            _objc_loadWeakRetained();
            uVar3 = uVar2;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010c074bc0();
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((uVar5 & 1) == 0) {
              param_1 = param_1 + 8;
              _objc_loadWeakRetained();
              lVar4 = param_1;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar4;
              func_0x00010c06e7e0();
              _objc_release(lVar4);
              _objc_release(param_1);
              if ((int)lVar6 == 0) goto LAB_106e9cd40;
              uVar11 = 0xc;
            }
            else {
              uVar11 = 10;
            }
          }
          else {
            uVar11 = 8;
          }
        }
        else {
          uVar11 = 5;
        }
      }
      else {
        uVar11 = 6;
      }
      goto LAB_106e9cd38;
    }
    func_0x00010c06e7e0();
    bVar1 = false;
LAB_106e9cf84:
    _objc_release(uVar3);
  }
  else {
    if (lVar4 == 1) {
      func_0x00010c1c4760(param_3,param_2,1);
      uVar2 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c075fc0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar5 & 1) == 0) {
        uVar2 = param_1 + 8;
        _objc_loadWeakRetained();
        uVar3 = uVar2;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0774a0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar5 & 1) == 0) {
          uVar2 = param_1 + 8;
          _objc_loadWeakRetained();
          uVar3 = uVar2;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c078aa0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar5 & 1) == 0) {
            uVar2 = param_1 + 8;
            _objc_loadWeakRetained();
            uVar3 = uVar2;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010c074bc0();
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((uVar5 & 1) == 0) {
              uVar2 = param_1 + 8;
              _objc_loadWeakRetained();
              uVar3 = uVar2;
              func_0x00010bfd38e0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar3;
              func_0x00010c06e7e0();
              _objc_release(uVar3);
              _objc_release(uVar2);
              if ((uVar5 & 1) == 0) goto LAB_106e9cd40;
              uVar11 = 0xb;
            }
            else {
              uVar11 = 9;
            }
          }
          else {
            uVar11 = 7;
          }
        }
        else {
          uVar11 = 4;
        }
      }
      else {
        uVar11 = 3;
      }
LAB_106e9cd38:
      func_0x00010c1c5440(param_3,param_2,uVar11);
    }
LAB_106e9cd40:
    uVar2 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26f500();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar5 = param_4;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c11f0a0();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar7 != 0;
      if (uVar7 != 0) {
        uVar8 = param_4;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c08fa60();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if (uVar10 != 0x30) goto LAB_106e9cf90;
        uVar2 = param_4;
        func_0x00010c0cc0c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf258e0();
        func_0x00010c174a00(param_3,param_2,uVar3);
        _objc_release(uVar2);
        uVar2 = param_4;
        func_0x00010c0cc0c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb2960();
        func_0x00010c19dd60(param_3,param_2,uVar3);
        _objc_release(uVar2);
        uVar2 = param_4;
        func_0x00010c0cc0c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c26f500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214e00(param_3,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar2 = param_4;
        func_0x00010c0cc0c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf6c0(param_3,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar2 = param_4;
        func_0x00010c0cc0c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40(param_3,param_2,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar2 = param_4;
        func_0x00010c0cc0c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c11f0a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9620(param_3,param_2,uVar5);
      }
      _objc_release(uVar5);
      goto LAB_106e9cf84;
    }
    bVar1 = false;
  }
  _objc_release(uVar2);
LAB_106e9cfa4:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e9cfd4; end: 106e9d0bb; -[SCSpectaclesDeviceContentRefreshController _emptySdVideoFileForContentIfNeeded:] */

void FUN_106e9cfd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c153040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8ac58);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126d2f50;
      _objc_alloc(PTR_PTR_1126d2f50);
      func_0x00010bffa720();
      _objc_release(puVar2);
      goto LAB_106e9d024;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106e9d024:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e9d0bc; end: 106e9d1c7; -[SCSpectaclesDeviceContentRefreshController _createFileWithLocalFilename:fromMetadata:] */

void FUN_106e9d0bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010c23d0a0(), lVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2f50;
    _objc_alloc(PTR_PTR_1126d2f50);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_4;
    func_0x00010c12a140(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c23d0a0(param_4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c074bc0();
    func_0x00010bffa720(puVar5,param_2,uVar6,param_3,lVar1,lVar2,lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e9d1c8; end: 106e9d2d3; -[SCSpectaclesDeviceContentRefreshController _createFileWithLocalFilename:fromGenericAssetMetadata:] */

void FUN_106e9d1c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010bfad040(), lVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2f50;
    _objc_alloc(PTR_PTR_1126d2f50);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_4;
    func_0x00010bfacde0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010bfad040(param_4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c074bc0();
    func_0x00010bffa720(puVar5,param_2,uVar6,param_3,lVar1,lVar2,lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e9d2d4; end: 106e9d43b; -[SCSpectaclesDeviceContentRefreshController _enqueueTasks:] */

ulong FUN_106e9d2d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
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
  uVar1 = param_3;
  func_0x00010bf529e0();
  if ((uVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (uVar1 != 0) {
      lVar6 = *plStack_110;
      do {
        uVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          uVar5 = *(undefined8 *)(lStack_118 + uVar7 * 8);
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c27a200(uVar2);
          func_0x00010c2197c0(uVar5,param_2,uVar2);
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
        uVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (uVar1 != 0);
    }
    _objc_release(param_3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbe00();
    _objc_release(lVar6);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf07b60();
  _objc_release(puVar3);
  return (ulong)(puVar4 == (undefined *)0x2);
}



/* Entry: 106e9d43c; end: 106e9d483; -[SCSpectaclesDeviceContentRefreshController _isBackgrounded] */

bool FUN_106e9d43c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x2;
}



/* Entry: 106e9d484; end: 106e9d50b; -[SCSpectaclesDeviceContentRefreshController _cleanup] */

void FUN_106e9d484(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf02380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cd20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 106e9d50c; end: 106e9d597; -[SCSpectaclesDeviceContentRefreshController _transferChannel] */

undefined8 FUN_106e9d50c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf489a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = param_1;
    func_0x00010c263440();
    _objc_release(param_1);
    uVar4 = 0;
    if ((int)lVar5 == 0) {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 106e9d598; end: 106e9d8f3; -[SCSpectaclesDeviceContentRefreshController _addRefreshContentRequestIfNecessary] */

void FUN_106e9d598(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27a240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27d060();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf48920();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if ((int)lVar6 == 0) {
    return;
  }
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf175c0();
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar8 = lVar5;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106fd261c(lVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar4);
  if ((int)lVar7 == 0) {
    return;
  }
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c089580();
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar7 = lVar5;
  func_0x00010c0895a0();
  if (lVar6 == lVar7) {
LAB_106e9d770:
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c0895a0();
    if (lVar7 == -1) {
      _objc_release(lVar6);
      goto LAB_106e9d770;
    }
    lVar7 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0895a0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar8 != 0) goto LAB_106e9d8c0;
  }
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c263b20();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bf4d760();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bfd8e00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar10 & 1) != 0) goto LAB_106e9d8c0;
  }
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010bf4d760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c27f940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c263820();
  if ((int)lVar6 == 0) {
LAB_106e9d8b4:
    _objc_release(lVar4);
  }
  else {
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c2634e0();
    _objc_release(uVar1);
    _objc_release(lVar4);
    if ((uVar2 & 1) == 0) {
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar6 = lVar4;
      func_0x00010bf4d760();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c27f940();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf529e0();
      lVar5 = lVar8 + lVar5;
      _objc_release(lVar7);
      _objc_release(lVar6);
      goto LAB_106e9d8b4;
    }
  }
  if (lVar5 == 0) {
    return;
  }
LAB_106e9d8c0:
                    /* WARNING: Could not recover jumptable at 0x00010c064cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initiateContentRefresh_1125f6d48);
  return;
}



/* Entry: 106e9d8f4; end: 106e9d9e7; -[SCSpectaclesDeviceContentRefreshController deviceDidUpdateState:] */

void FUN_106e9d8f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar3);
  if (lVar3 == param_3) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar1 = lVar3;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf489a0();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        func_0x00010c27a200();
        if (lVar3 == 1) {
          return;
        }
        func_0x00010bf2e100(param_1);
      }
      uVar4 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar5 = uVar4;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c27a240();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c064cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initiateContentRefresh_1125f6d48);
        return;
      }
    }
  }
  return;
}



/* Entry: 106e9d9e8; end: 106e9da6b; -[SCSpectaclesDeviceContentRefreshController device:didUpdateInfo:] */

void FUN_106e9d9e8(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (((param_4 >> 0x11 & 1) != 0) && (uVar1 == param_3)) {
    uVar1 = param_3;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06f0e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c064ce0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9da6c; end: 106e9da77; -[SCSpectaclesDeviceContentRefreshController device:didReceiveCrashReport:] */

void FUN_106e9da6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b8250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setLastMediaCount__11264bab8,0xffffffffffffffff);
  return;
}



/* Entry: 106e9da78; end: 106e9daeb; -[SCSpectaclesDeviceContentRefreshController deviceDidStartRecording:] */

void FUN_106e9da78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2634a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010bf2e100(param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1b8260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e9daec; end: 106e9daf3; -[SCSpectaclesDeviceContentRefreshController responseMonitorState] */

undefined8 FUN_106e9daec(void)

{
  return 0;
}



/* Entry: 106e9daf4; end: 106e9dc47; -[SCSpectaclesDeviceContentRefreshController handleResponse:] */

void FUN_106e9daf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c4760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0c4760(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    lVar4 = param_1;
    func_0x00010be2c0a0(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      func_0x00010bdc7f60(param_1);
    }
  }
  lVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  if (lVar2 == 0x17) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1b8240();
    _objc_release(lVar1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1b8260();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bfd4800();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf14d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c252d60();
    if (lVar2 == 2) {
      func_0x00010c064ce0(param_1);
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf701e0();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9dc48; end: 106e9dcb7; -[SCSpectaclesDeviceContentRefreshController _handleMediaCount:] */

bool FUN_106e9dc48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0895a0();
  _objc_release(lVar1);
  if (lVar2 != param_3) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1b8260();
    _objc_release(param_1);
  }
  return lVar2 != param_3;
}



/* Entry: 106e9dcb8; end: 106e9dd27; -[SCSpectaclesDeviceContentRefreshController .cxx_destruct] */

void FUN_106e9dcb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106e9dd28; end: 106e9df7f; -[SCSpectaclesDeviceController initWithDevice:analyticsLogger:crashLogger:cache:announcer:networkConnectivityServices:] */

undefined1 *
FUN_106e9dd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f7a68;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c13ba00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb0c0();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010bf6ff00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c06b700();
    if ((int)uVar2 != 0) {
      func_0x00010bdc8620(puVar1);
    }
    func_0x00010beaf600(puVar1);
    puVar3 = PTR_PTR_1126d3008;
    _objc_alloc();
    func_0x00010c00bca0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e9df80; end: 106e9dfd3; -[SCSpectaclesDeviceController dealloc] */

void FUN_106e9df80(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec3aa0();
  func_0x00010bec38e0(param_1);
  func_0x00010bddada0(param_1);
  puStack_28 = PTR_PTR_1126f7a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e9dfd4; end: 106e9e09b; -[SCSpectaclesDeviceController contentTransferController] */

void FUN_106e9dfd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfd38e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c06e7e0();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d3010;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar1 = uVar5;
    func_0x00010bf638a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00bdc0(puVar2,param_2,uVar5,param_1,uVar1,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x20),(uint)uVar3 ^ 1);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x50);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}


