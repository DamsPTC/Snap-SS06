/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105236188; end: 10523619b; -[SCSpectaclesHomeDeviceStatusProvider statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_105236188(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != *(long *)(param_1 + 0x20)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be88210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshAllStatusWithDelay_11257fa20);
  return;
}



/* Entry: 10523619c; end: 1052361a3; -[SCSpectaclesHomeDeviceStatusProvider batteryStatusObservable] */

undefined8 FUN_10523619c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1052361a4; end: 1052361d3; -[SCSpectaclesHomeDeviceStatusProvider setBatteryStatusObservable:] */

void FUN_1052361a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052361d4; end: 1052361db; -[SCSpectaclesHomeDeviceStatusProvider bluetoothConnectionStatusObservable] */

undefined8 FUN_1052361d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1052361dc; end: 10523620b; -[SCSpectaclesHomeDeviceStatusProvider setBluetoothConnectionStatusObservable:] */

void FUN_1052361dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10523620c; end: 105236213; -[SCSpectaclesHomeDeviceStatusProvider wifiConnectionStatusObservable] */

undefined8 FUN_10523620c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105236214; end: 105236243; -[SCSpectaclesHomeDeviceStatusProvider setWifiConnectionStatusObservable:] */

void FUN_105236214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105236244; end: 10523630f; -[SCSpectaclesHomeDeviceStatusProvider .cxx_destruct] */

void FUN_105236244(long param_1)

{
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



/* Entry: 105236310; end: 105236383; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl initWithHardwareVersion:] */

undefined1 * FUN_105236310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e70f8;
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



/* Entry: 105236384; end: 10523639f; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl majorVersionNumber] */

double FUN_105236384(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b6e60(lVar1);
  return (double)lVar1;
}



/* Entry: 1052363a0; end: 1052363bb; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl minorVersionNumber] */

double FUN_1052363a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0ce800(lVar1);
  return (double)lVar1;
}



/* Entry: 1052363bc; end: 1052363c3; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl isLaguna] */

void FUN_1052363bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c075fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isLaguna_1125fb200);
  return;
}



/* Entry: 1052363c4; end: 1052363cb; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl isMalibu] */

void FUN_1052363c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0774b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isMalibu_1125fb738);
  return;
}



/* Entry: 1052363cc; end: 1052363d3; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl isNeptune] */

void FUN_1052363cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isNeptune_1125fbc30);
  return;
}



/* Entry: 1052363d4; end: 1052363db; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl isNewport] */

void FUN_1052363d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isNewport_1125fbcb8);
  return;
}



/* Entry: 1052363dc; end: 1052363e3; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl isHermosa] */

void FUN_1052363dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isHermosa_1125fad00);
  return;
}



/* Entry: 1052363e4; end: 1052363eb; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl isMatador] */

void FUN_1052363e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0776f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isMatador_1125fb7c8);
  return;
}



/* Entry: 1052363ec; end: 1052363f3; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl isCheerios] */

void FUN_1052363ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isCheerios_1125f9408);
  return;
}



/* Entry: 1052363f4; end: 1052363ff; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl pushToValdiMarshaller:] */

void FUN_1052363f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105236400; end: 10523640b; -[SCComposerSpectaclesHomeDeviceHardwareVersionImpl .cxx_destruct] */

void FUN_105236400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10523640c; end: 1052364cf; -[SCComposerSpectaclesHomePhoneMirroringManager initWithRuntime:manager:notificationServices:] */

undefined1 *
FUN_10523640c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7100;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052364d0; end: 1052364db; -[SCComposerSpectaclesHomePhoneMirroringManager pushToValdiMarshaller:] */

void FUN_1052364d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 1052364dc; end: 1052365a7; -[SCComposerSpectaclesHomePhoneMirroringManager iconViewFactory] */

void FUN_1052364dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_opt_class(PTR__OBJC_CLASS___RPSystemBroadcastPickerView_1126b6760);
  func_0x00010c0b7ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052365a8; end: 105236617;  */

void FUN_1052365a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf213c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105236618; end: 10523661b; -[SCComposerSpectaclesHomePhoneMirroringManager launchPhoneMirroring] */

void FUN_105236618(void)

{
  return;
}



/* Entry: 10523661c; end: 105236653; -[SCComposerSpectaclesHomePhoneMirroringManager .cxx_destruct] */

void FUN_10523661c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105236654; end: 10523672f; -[SCComposerSpectaclesHomePowerStateActionHandler initWithCurrentDevice:spectaclesManager:] */

undefined1 *
FUN_105236654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7108;
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
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c105b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105236730; end: 1052367d7; -[SCComposerSpectaclesHomePowerStateActionHandler onTapTurnOnDevice] */

void FUN_105236730(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1052367d8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052367d8; end: 105236823;  */

void FUN_1052367d8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d5c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105236824; end: 1052368cb; -[SCComposerSpectaclesHomePowerStateActionHandler onTapTurnOffDevice] */

void FUN_105236824(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1052368cc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052368cc; end: 105236917;  */

void FUN_1052368cc(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d560();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105236918; end: 1052369bf; -[SCComposerSpectaclesHomePowerStateActionHandler onTapRestartDevice] */

void FUN_105236918(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1052369c0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052369c0; end: 105236a0f;  */

void FUN_1052369c0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13bf80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105236a10; end: 105236a1b; -[SCComposerSpectaclesHomePowerStateActionHandler pushToValdiMarshaller:] */

void FUN_105236a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105236a1c; end: 105236a57; -[SCComposerSpectaclesHomePowerStateActionHandler .cxx_destruct] */

void FUN_105236a1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105236a58; end: 105236c4b; -[SCComposerSpectaclesHomePowerStateProvider initWithPowerStateManager:] */

undefined8 * FUN_105236a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e7110;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[1];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar4 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar4);
    uVar5 = puVar1[3];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf5fb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2e4a0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,puVar1);
    uVar3 = puVar1[3];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5fb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105236c4c; end: 105236c93;  */

void FUN_105236c4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105236c94; end: 105236c9f; -[SCComposerSpectaclesHomePowerStateProvider pushToValdiMarshaller:] */

void FUN_105236c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105236ca0; end: 105236ce7; -[SCComposerSpectaclesHomePowerStateProvider _handlePowerState:] */

void FUN_105236ca0(long param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c11cbc0();
  if (param_3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_next__112614028,(&PTR_PTR_110871210)[param_3]);
    return;
  }
  return;
}



/* Entry: 105236ce8; end: 105236cef; -[SCComposerSpectaclesHomePowerStateProvider powerState] */

undefined8 FUN_105236ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105236cf0; end: 105236d1f; -[SCComposerSpectaclesHomePowerStateProvider setPowerState:] */

void FUN_105236cf0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105236d20; end: 105236d67; -[SCComposerSpectaclesHomePowerStateProvider .cxx_destruct] */

void FUN_105236d20(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105236d68; end: 105236f3f; -[SCComposerSpectaclesOTAStateManager initWithOtaUpdateManager:] */

undefined8 * FUN_105236d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e7118;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[1];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar4 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,puVar1);
    uVar3 = puVar1[3];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252740();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = puVar1[3];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266260();
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105236f40; end: 105236f87;  */

void FUN_105236f40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105236f88; end: 105236f93; -[SCComposerSpectaclesOTAStateManager pushToValdiMarshaller:] */

void FUN_105236f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105236f94; end: 1052370ef; -[SCComposerSpectaclesOTAStateManager _handleOtaState:] */

void FUN_105236f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126b6768;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bfed8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1052370f0;
  puStack_60 = &UNK_110855e40;
  _objc_retain(puVar1);
  puStack_a0 = puVar3;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105237138;
  puStack_88 = &UNK_1108484c8;
  puStack_80 = puVar1;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0bc9a0(uVar2,param_2,0,&puStack_78,&puStack_a0,0,0,0);
  _objc_release(uVar2);
  func_0x00010c252d60();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b6770;
  _objc_alloc(PTR_PTR_1126b6770);
  func_0x00010c04c2c0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puStack_80);
  _objc_release(puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052370f0; end: 10523717f;  */

void FUN_1052370f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4680(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105237180; end: 1052371c7; -[SCComposerSpectaclesOTAStateManager updateAvailableVersion] */

void FUN_105237180(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c283a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1052371c8; end: 1052371fb; -[SCComposerSpectaclesOTAStateManager updateOTA] */

void FUN_1052371c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052371fc; end: 105237203; -[SCComposerSpectaclesOTAStateManager otaState] */

undefined8 FUN_1052371fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105237204; end: 105237233; -[SCComposerSpectaclesOTAStateManager setOtaState:] */

void FUN_105237204(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105237234; end: 10523727b; -[SCComposerSpectaclesOTAStateManager .cxx_destruct] */

void FUN_105237234(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10523727c; end: 1052373ff; -[SCSpectaclesHomeDeviceInfoProvider initWithDevice:spectaclesManager:] */

undefined1 *
FUN_10523727c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7120;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6778;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bfd38e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019b20();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    uVar2 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105237400; end: 10523740b; -[SCSpectaclesHomeDeviceInfoProvider pushToValdiMarshaller:] */

void FUN_105237400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 10523740c; end: 10523747b; -[SCSpectaclesHomeDeviceInfoProvider spectaclesDeviceDidUpdateDeviceName:] */

void FUN_10523740c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != *(long *)(param_1 + 8)) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10523747c; end: 105237483; -[SCSpectaclesHomeDeviceInfoProvider displayNameObservable] */

undefined8 FUN_10523747c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105237484; end: 1052374b3; -[SCSpectaclesHomeDeviceInfoProvider setDisplayNameObservable:] */

void FUN_105237484(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052374b4; end: 1052374bb; -[SCSpectaclesHomeDeviceInfoProvider hardwareVersion] */

undefined8 FUN_1052374b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052374bc; end: 1052374eb; -[SCSpectaclesHomeDeviceInfoProvider setHardwareVersion:] */

void FUN_1052374bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052374ec; end: 10523753f; -[SCSpectaclesHomeDeviceInfoProvider .cxx_destruct] */

void FUN_1052374ec(long param_1)

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



/* Entry: 105237540; end: 105237603; -[SCSpectaclesHomeImportStatusActionHandler initWithContentStatusProvider:wifiTransferInitiator:application:] */

undefined1 *
FUN_105237540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7128;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105237604; end: 1052376ef; -[SCSpectaclesHomeImportStatusActionHandler onTapSection] */

void FUN_105237604(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5e4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4d740();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5e4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4d740();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010be87f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__redirectToMemories_11257f970);
    return;
  }
  return;
}



/* Entry: 1052376f0; end: 1052376fb; -[SCSpectaclesHomeImportStatusActionHandler pushToValdiMarshaller:] */

void FUN_1052376f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 1052376fc; end: 105237763; -[SCSpectaclesHomeImportStatusActionHandler _redirectToMemories] */

void FUN_1052376fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110dc8af8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(param_1,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105237764; end: 10523779b; -[SCSpectaclesHomeImportStatusActionHandler .cxx_destruct] */

void FUN_105237764(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10523779c; end: 105237847; -[SCSpectaclesHomeImportStatusProvider initWithDevice:contentStatusProvider:] */

undefined1 *
FUN_10523779c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7130;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    func_0x00010beafe80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105237848; end: 105237853; -[SCSpectaclesHomeImportStatusProvider pushToValdiMarshaller:] */

void FUN_105237848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105237854; end: 1052379e3; -[SCSpectaclesHomeImportStatusProvider _setupStatusObservations] */

void FUN_105237854(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _objc_release(uVar4);
  func_0x00010be07e00(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2533a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265d60();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1052379e4; end: 105237a2b;  */

void FUN_1052379e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88a60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105237a2c; end: 105237a7f; -[SCSpectaclesHomeImportStatusProvider _emitInitialStatus] */

void FUN_105237a2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6780;
  _objc_alloc(PTR_PTR_1126b6780);
  func_0x00010c007300(0,0,0,0);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105237a80; end: 105237cb3; -[SCSpectaclesHomeImportStatusProvider _refreshStatusIfNeededWithNewContentStatus:] */

void FUN_105237a80(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  double dVar12;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c27a420();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c282be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c27a440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf529e0();
  uVar1 = lVar7 + lVar5;
  _objc_release(lVar4);
  dVar12 = 0.0;
  if (0 < (long)uVar1) {
    dVar12 = (double)((float)lVar5 / (float)uVar1);
  }
  lVar4 = param_3;
  func_0x00010bf4d740();
  lVar7 = param_3;
  if (lVar4 == 5) {
    lVar4 = param_3;
    func_0x00010bf610a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      func_0x00010bf610a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105237c08;
    }
  }
  func_0x00010c282be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
LAB_105237c08:
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar7);
  puVar11 = PTR_PTR_1126b6780;
  _objc_alloc(PTR_PTR_1126b6780);
  lVar4 = param_3;
  func_0x00010bf4d740();
  iVar2 = 0;
  if (lVar4 - 1U < 6) {
    iVar2 = (int)(lVar4 - 1U) + 1;
  }
  uVar3 = uVar1;
  if (lVar5 + 1 < (long)uVar1) {
    uVar3 = lVar5 + 1;
  }
  func_0x00010c007300((double)(long)uVar1,(double)lVar6,(double)(long)uVar3,dVar12,puVar11,param_2,
                      iVar2);
  func_0x00010c187120();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105237cb4; end: 105237cbb; -[SCSpectaclesHomeImportStatusProvider currentStatusObservable] */

undefined8 FUN_105237cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105237cbc; end: 105237ceb; -[SCSpectaclesHomeImportStatusProvider setCurrentStatusObservable:] */

void FUN_105237cbc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105237cec; end: 105237d3f; -[SCSpectaclesHomeImportStatusProvider .cxx_destruct] */

void FUN_105237cec(long param_1)

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



/* Entry: 105237d40; end: 105238103; -[SCComposerSpectaclesHomeLensProvider initWithPerformer:lensLaunchManager:unpinnedLensAPI:pinnedLensAPI:] */

undefined8 *
FUN_105237d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126e7138;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    uVar5 = puVar1[1];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = uVar5;
    _objc_release(uVar6);
    uVar5 = puVar1[2];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xe];
    puVar1[0xe] = uVar5;
    _objc_release(uVar6);
    uVar5 = puVar1[3];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xf];
    puVar1[0xf] = uVar5;
    _objc_release(uVar6);
    _objc_retain(param_6);
    uVar5 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar5);
    func_0x00010c0d9840(puVar1[1]);
    func_0x00010c0d9840(puVar1[2]);
    _objc_initWeak(auStack_88,puVar1);
    uVar3 = puVar1[10];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0cae20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105238104;
    puStack_98 = &UNK_110871268;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar4 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar5 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar5);
    uVar3 = puVar1[9];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c094cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar4 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010be12200(puVar1);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105238104; end: 105238193;  */

void FUN_105238104(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105238194; end: 10523819f; -[SCComposerSpectaclesHomeLensProvider pushToValdiMarshaller:] */

void FUN_105238194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 1052381a0; end: 1052382bb; -[SCComposerSpectaclesHomeLensProvider lensMetadataForLensId:] */

void FUN_1052381a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be4b3e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010c0e00e0(lVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
      lVar3 = lVar2;
    }
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    if (lVar3 != 0) {
      func_0x00010c2a8660(puVar4,param_2,lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010c2b2880(puVar4,param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1052382bc; end: 1052382bf; -[SCComposerSpectaclesHomeLensProvider refreshLens] */

void FUN_1052382bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be12210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchLenses_112562220);
  return;
}



/* Entry: 1052382c0; end: 1052382e3; -[SCComposerSpectaclesHomeLensProvider _fetchLenses] */

void FUN_1052382c0(undefined8 param_1)

{
  func_0x00010be15260();
                    /* WARNING: Could not recover jumptable at 0x00010be130f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchPinnedLenses_1125625d8);
  return;
}



/* Entry: 1052382e4; end: 10523831b; -[SCComposerSpectaclesHomeLensProvider _fetchUnpinnedLenses] */

void FUN_1052382e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10523831c; end: 105238447; -[SCComposerSpectaclesHomeLensProvider _fetchPinnedLenses] */

void FUN_10523831c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ae60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfab160(uVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105238448; end: 10523848f;  */

void FUN_105238448(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105238490; end: 105238493;  */

void FUN_105238490(void)

{
  return;
}



/* Entry: 105238494; end: 105238657; -[SCComposerSpectaclesHomeLensProvider _handleLensLaunchEvent:] */

void FUN_105238494(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010be4b3e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((puVar7 != (undefined *)0x0) || ((uVar4 & 1) != 0)) goto LAB_105238608;
      uVar1 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c08fa60();
      _objc_release(uVar1);
      if (uVar2 == 0) {
        puVar7 = (undefined *)0x0;
        goto LAB_105238608;
      }
      puVar7 = PTR_PTR_1126b6788;
      _objc_alloc(PTR_PTR_1126b6788);
      uVar1 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c095760(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c024640(puVar7,param_2,uVar1,uVar2,
                          &PTR____CFConstantStringClassReference_110daafd8);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_105238608:
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar5 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c0d9840(uVar6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105238658; end: 105238773; -[SCComposerSpectaclesHomeLensProvider _lensMetadataForLensId:] */

void FUN_105238658(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105238774;
    puStack_60 = &UNK_110871338;
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x00010bfb2040(lVar2,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      puStack_a0 = puVar1;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x1052387bc;
      puStack_88 = &UNK_110871338;
      _objc_retain(param_3);
      lStack_80 = param_3;
      func_0x00010bfb2040(lVar3,param_2,&puStack_a0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lStack_80);
    }
    else {
      _objc_retain(lVar2);
      lVar3 = lVar2;
    }
    _objc_release(lVar2);
    _objc_release(lStack_58);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105238774; end: 105238803;  */

undefined8 FUN_105238774(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105238804; end: 10523889b; -[SCComposerSpectaclesHomeLensProvider _lensGroups] */

undefined * FUN_105238804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x22;
  undefined *unaff_x23;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 unaff_x25;
  long lVar16;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [128];
  long lStack_200;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar11 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR_PTR_1126b6790;
  _objc_alloc();
  func_0x00010c0590e0();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_10523889c;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = puVar15;
  puStack_40 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_170 = puVar15;
  _objc_opt_new();
  puVar15 = (undefined *)ppuVar11;
  puStack_168 = puVar1;
  func_0x00010bfcf760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  puStack_188 = puVar1;
  func_0x00010c281780();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x22 = *plStack_150;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_150 != unaff_x22) {
          _objc_enumerationMutation(puStack_178);
        }
        uVar2 = *(undefined8 *)(lStack_158 + (long)puVar15 * 8);
        func_0x00010bfe5e40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = uVar2;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        unaff_x28 = (undefined *)ppuVar11;
        func_0x00010c098240();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x28;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x28);
        if (unaff_x27 != (undefined *)0x0) {
          unaff_x28 = PTR_PTR_1126b6788;
          _objc_alloc();
          unaff_x23 = unaff_x27;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x27;
          func_0x00010c0d4f60(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x27;
          func_0x00010bfe5b40(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c024640(unaff_x28,param_2,unaff_x23,puVar3,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(unaff_x23);
          func_0x00010befa120(puStack_170,param_2,unaff_x28);
          _objc_release(unaff_x28);
        }
        puVar3 = unaff_x27;
        func_0x00010bf07540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined *)0x0) {
          puVar3 = unaff_x27;
          func_0x00010bf07540(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf51e00();
          unaff_x23 = unaff_x27;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puStack_168,param_2,puVar4,unaff_x23);
          _objc_release(unaff_x23);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        puVar15 = puVar15 + 1;
      } while (puVar1 != puVar15);
      puVar1 = puStack_178;
      func_0x00010bf52a60(puStack_178,param_2,&uStack_160,auStack_120,0x10);
      unaff_x25 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puStack_178);
  puVar3 = puStack_170;
  puVar1 = puStack_180;
  puVar12 = *(undefined **)(puStack_180 + 0x20);
  puVar4 = puStack_170;
  func_0x00010c071b60();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined **)(puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    puVar4 = puStack_168;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x30);
    *(undefined **)(puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    puVar12 = *(undefined **)(puVar1 + 0x20);
    func_0x00010c0d9840(*(undefined8 *)(puVar1 + 8));
  }
  _objc_release(puStack_188);
  _objc_release(puStack_168);
  _objc_release(puVar3);
  puVar4 = (undefined *)ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar4;
  }
  ___stack_chk_fail();
  puStack_1b8 = puVar1;
  puStack_1b0 = puVar3;
  pcStack_198 = FUN_105238bf4;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1f0 = unaff_x28;
  puStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  uStack_1d8 = unaff_x25;
  puStack_1d0 = puVar15;
  puStack_1c8 = unaff_x23;
  lStack_1c0 = unaff_x22;
  puStack_1a8 = (undefined *)ppuVar11;
  ppuStack_1a0 = &puStack_40;
  _objc_retain(puVar12);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  puVar3 = puVar12;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar13 = *plStack_2b0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_2b0 != lVar13) {
          _objc_enumerationMutation(puVar3);
        }
        lVar16 = *(long *)(lStack_2b8 + (long)puVar14 * 8);
        puVar6 = PTR_PTR_1126b6788;
        _objc_alloc(PTR_PTR_1126b6788);
        lVar7 = lVar16;
        func_0x00010c094540(lVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar16;
        func_0x00010c0d4f60(lVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar16;
        func_0x00010bfe5b40(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c024640(puVar6,param_2,lVar7,lVar8,lVar9);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        func_0x00010befa120(puVar15,param_2,puVar6);
        lVar7 = lVar16;
        func_0x00010bf07540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar16;
          func_0x00010bf07540(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf51e00();
          func_0x00010c094540(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar1,param_2,lVar8,lVar16);
          _objc_release(lVar16);
          _objc_release(lVar8);
          _objc_release(lVar7);
        }
        _objc_release(puVar6);
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar5 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_2c0,auStack_280,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  uVar10 = *(ulong *)(puVar4 + 0x28);
  func_0x00010c071b60(uVar10,param_2,puVar15);
  if ((uVar10 & 1) == 0) {
    puVar3 = puVar15;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar4 + 0x28);
    *(undefined **)(puVar4 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar4 + 0x38);
    *(undefined **)(puVar4 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(puVar4 + 0x10),param_2,*(undefined8 *)(puVar4 + 0x28));
  }
  _objc_release(puVar1);
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return puVar12;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar12 + 0x68);
}



/* Entry: 10523889c; end: 105238bf3; -[SCComposerSpectaclesHomeLensProvider _handlePinnedLensesWithUnlockablesResponse:] */

undefined * FUN_10523889c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x22;
  undefined *unaff_x23;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 unaff_x25;
  long lVar15;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [128];
  long lStack_1d0;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  lStack_150 = param_1;
  _objc_retain(param_3);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_140 = puVar14;
  _objc_opt_new();
  puVar14 = param_3;
  puStack_138 = puVar1;
  func_0x00010bfcf760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puStack_158 = puVar1;
  func_0x00010c281780();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x22 = *plStack_120;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x22) {
          _objc_enumerationMutation(puStack_148);
        }
        uVar2 = *(undefined8 *)(lStack_128 + (long)puVar14 * 8);
        func_0x00010bfe5e40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = uVar2;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        unaff_x28 = param_3;
        func_0x00010c098240();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x28;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x28);
        if (unaff_x27 != (undefined *)0x0) {
          unaff_x28 = PTR_PTR_1126b6788;
          _objc_alloc();
          unaff_x23 = unaff_x27;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x27;
          func_0x00010c0d4f60(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = unaff_x27;
          func_0x00010bfe5b40(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c024640(unaff_x28,param_2,unaff_x23,puVar3,puVar11);
          _objc_release(puVar11);
          _objc_release(puVar3);
          _objc_release(unaff_x23);
          func_0x00010befa120(puStack_140,param_2,unaff_x28);
          _objc_release(unaff_x28);
        }
        puVar3 = unaff_x27;
        func_0x00010bf07540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined *)0x0) {
          puVar3 = unaff_x27;
          func_0x00010bf07540(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar3;
          func_0x00010bf51e00();
          unaff_x23 = unaff_x27;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puStack_138,param_2,puVar11,unaff_x23);
          _objc_release(unaff_x23);
          _objc_release(puVar11);
          _objc_release(puVar3);
        }
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        puVar14 = puVar14 + 1;
      } while (puVar1 != puVar14);
      puVar1 = puStack_148;
      func_0x00010bf52a60(puStack_148,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x25 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puStack_148);
  puVar1 = puStack_140;
  lVar12 = lStack_150;
  puVar11 = *(undefined **)(lStack_150 + 0x20);
  puVar3 = puStack_140;
  func_0x00010c071b60();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar1;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(lVar12 + 0x20);
    *(undefined **)(lVar12 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = puStack_138;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(lVar12 + 0x30);
    *(undefined **)(lVar12 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar11 = *(undefined **)(lVar12 + 0x20);
    func_0x00010c0d9840(*(undefined8 *)(lVar12 + 8));
  }
  _objc_release(puStack_158);
  _objc_release(puStack_138);
  _objc_release(puVar1);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  lStack_188 = lVar12;
  puStack_180 = puVar1;
  pcStack_168 = FUN_105238bf4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = unaff_x28;
  puStack_1b8 = unaff_x27;
  uStack_1b0 = unaff_x26;
  uStack_1a8 = unaff_x25;
  puStack_1a0 = puVar14;
  puStack_198 = unaff_x23;
  lStack_190 = unaff_x22;
  puStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puVar4 = puVar11;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar12 = *plStack_280;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_280 != lVar12) {
          _objc_enumerationMutation(puVar4);
        }
        lVar15 = *(long *)(lStack_288 + (long)puVar13 * 8);
        puVar6 = PTR_PTR_1126b6788;
        _objc_alloc(PTR_PTR_1126b6788);
        lVar7 = lVar15;
        func_0x00010c094540(lVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar15;
        func_0x00010c0d4f60(lVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar15;
        func_0x00010bfe5b40(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c024640(puVar6,param_2,lVar7,lVar8,lVar9);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        func_0x00010befa120(puVar14,param_2,puVar6);
        lVar7 = lVar15;
        func_0x00010bf07540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar15;
          func_0x00010bf07540(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf51e00();
          func_0x00010c094540(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar1,param_2,lVar8,lVar15);
          _objc_release(lVar15);
          _objc_release(lVar8);
          _objc_release(lVar7);
        }
        _objc_release(puVar6);
        puVar13 = puVar13 + 1;
      } while (puVar5 != puVar13);
      puVar5 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_290,auStack_250,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  uVar10 = *(ulong *)(puVar3 + 0x28);
  func_0x00010c071b60(uVar10,param_2,puVar14);
  if ((uVar10 & 1) == 0) {
    puVar4 = puVar14;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar3 + 0x28);
    *(undefined **)(puVar3 + 0x28) = puVar4;
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar3 + 0x38);
    *(undefined **)(puVar3 + 0x38) = puVar4;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(puVar3 + 0x10),param_2,*(undefined8 *)(puVar3 + 0x28));
  }
  _objc_release(puVar1);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return puVar11;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar11 + 0x68);
}



/* Entry: 105238bf4; end: 105238e9b; -[SCComposerSpectaclesHomeLensProvider _handleUnpinnedLensesWithNamespaceData:] */

long FUN_105238bf4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = param_3;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar3);
        }
        lVar13 = *(long *)(lStack_128 + lVar12 * 8);
        puVar5 = PTR_PTR_1126b6788;
        _objc_alloc(PTR_PTR_1126b6788);
        lVar6 = lVar13;
        func_0x00010c094540(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar13;
        func_0x00010c0d4f60(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar13;
        func_0x00010bfe5b40(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c024640(puVar5,param_2,lVar6,lVar7,lVar8);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        func_0x00010befa120(puVar1,param_2,puVar5);
        lVar6 = lVar13;
        func_0x00010bf07540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 != 0) {
          lVar6 = lVar13;
          func_0x00010bf07540(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf51e00();
          func_0x00010c094540(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar2,param_2,lVar7,lVar13);
          _objc_release(lVar13);
          _objc_release(lVar7);
          _objc_release(lVar6);
        }
        _objc_release(puVar5);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  uVar9 = *(ulong *)(param_1 + 0x28);
  func_0x00010c071b60(uVar9,param_2,puVar1);
  if ((uVar9 & 1) == 0) {
    puVar5 = puVar1;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar5;
    _objc_release(uVar10);
    puVar5 = puVar2;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar5;
    _objc_release(uVar10);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x68);
}



/* Entry: 105238e9c; end: 105238ea3; -[SCComposerSpectaclesHomeLensProvider pinnedLenses] */

undefined8 FUN_105238e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105238ea4; end: 105238ed3; -[SCComposerSpectaclesHomeLensProvider setPinnedLenses:] */

void FUN_105238ea4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105238ed4; end: 105238edb; -[SCComposerSpectaclesHomeLensProvider hermosaLenses] */

undefined8 FUN_105238ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105238edc; end: 105238f0b; -[SCComposerSpectaclesHomeLensProvider setHermosaLenses:] */

void FUN_105238edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105238f0c; end: 105238f13; -[SCComposerSpectaclesHomeLensProvider activeLens] */

undefined8 FUN_105238f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105238f14; end: 105238f43; -[SCComposerSpectaclesHomeLensProvider setActiveLens:] */

void FUN_105238f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105238f44; end: 10523900f; -[SCComposerSpectaclesHomeLensProvider .cxx_destruct] */

void FUN_105238f44(long param_1)

{
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



/* Entry: 105239010; end: 1052391d3; -[SCComposerSpectaclesHomeLensSectionActionHandler initWithDevice:userId:viewControllerBlock:spectaclesHomeLensCacheManager:lensLaunchManager:spectaclesLensManagementScopeExposer:spectaclesLensManagementScopeServices:lensExplorerSpectaclesNavigation:lensInfoCardPresentation:] */

undefined1 *
FUN_105239010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e7140;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052391d4; end: 1052391df; -[SCComposerSpectaclesHomeLensSectionActionHandler pushToValdiMarshaller:] */

void FUN_1052391d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 1052391e0; end: 1052392af; -[SCComposerSpectaclesHomeLensSectionActionHandler onLaunchLensWithLensId:] */

void FUN_1052391e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1052392b0;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}


