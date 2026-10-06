/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a3ba24; end: 105a3ba2b; -[SCSpectaclesTransferInitiationAnalyticsInfo wifiEnabledGo] */

undefined8 FUN_105a3ba24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105a3ba2c; end: 105a3ba5b; -[SCSpectaclesTransferInitiationAnalyticsInfo setWifiEnabledGo:] */

void FUN_105a3ba2c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3ba5c; end: 105a3ba63; -[SCSpectaclesTransferInitiationAnalyticsInfo manualWifiTransferPreviouslyDoneGo] */

undefined8 FUN_105a3ba5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105a3ba64; end: 105a3ba93; -[SCSpectaclesTransferInitiationAnalyticsInfo setManualWifiTransferPreviouslyDoneGo:] */

void FUN_105a3ba64(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3ba94; end: 105a3ba9b; -[SCSpectaclesTransferInitiationAnalyticsInfo isSpectaclesBatteryThresholdGo] */

undefined8 FUN_105a3ba94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105a3ba9c; end: 105a3bacb; -[SCSpectaclesTransferInitiationAnalyticsInfo setIsSpectaclesBatteryThresholdGo:] */

void FUN_105a3ba9c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3bacc; end: 105a3bad3; -[SCSpectaclesTransferInitiationAnalyticsInfo isSpectaclesChargingGo] */

undefined8 FUN_105a3bacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105a3bad4; end: 105a3bb03; -[SCSpectaclesTransferInitiationAnalyticsInfo setIsSpectaclesChargingGo:] */

void FUN_105a3bad4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3bb04; end: 105a3bbff; -[SCSpectaclesTransferInitiationAnalyticsInfo .cxx_destruct] */

void FUN_105a3bb04(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105a3bc00; end: 105a3bc07; -[SCLagunaModule spectaclesManagerUIAutomation] */

void FUN_105a3bc00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_managerUIAutomation_11260baf0);
  return;
}



/* Entry: 105a3bc08; end: 105a3bc0b; -[SCLagunaModule notificationPresenter] */

void FUN_105a3bc08(void)

{
  return;
}



/* Entry: 105a3bc0c; end: 105a3bc93; -[SCLagunaModule presentAutomaticWiFiTriggeringProxyLocalNotification] */

void FUN_105a3bc0c(undefined8 param_1)

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
  pcStack_40 = FUN_105a3bc94;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a3bc94; end: 105a3bef7;  */

void FUN_105a3bc94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **unaff_x24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc();
  func_0x00010bfef600();
  puVar2 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010befa0a0();
      _objc_release(lVar4);
      _objc_release(param_1);
    }
    goto LAB_105a3bea0;
  }
  puVar2 = puVar1;
  func_0x00010bf0cee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = puVar1;
  if (puVar2 == (undefined *)0x0) {
LAB_105a3bdd4:
    func_0x00010bf59e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf0cee0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (**(code **)(puVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar5 == (undefined *)0x0) goto LAB_105a3bdd4;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a3bef8;
  puStack_70 = &UNK_11085f5c8;
  unaff_x24 = &puStack_88;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_retain(puVar1);
  puStack_68 = puVar1;
  _objc_retain(puVar3);
  puStack_60 = puVar3;
  func_0x00010befa100(puVar2);
  _objc_release(puStack_60);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar5);
LAB_105a3bea0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  __Unwind_Resume();
  puVar2 = puVar1 + 0x30;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c128780(*(undefined8 *)(puVar1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a3bef8; end: 105a3bf2f;  */

void FUN_105a3bef8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c128780(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a3bf30; end: 105a3bfb7; -[SCLagunaModule presentManualProxyWifiLocalNotification] */

void FUN_105a3bf30(undefined8 param_1)

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
  pcStack_40 = FUN_105a3bfb8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a3bfb8; end: 105a3c217;  */

void FUN_105a3bfb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **unaff_x24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc();
  func_0x00010bfef620();
  puVar2 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) goto LAB_105a3c18c;
  puVar2 = puVar1;
  func_0x00010bf0cee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = puVar1;
  if (puVar2 == (undefined *)0x0) {
LAB_105a3c0c0:
    func_0x00010bf59e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf0cee0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (**(code **)(puVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar5 == (undefined *)0x0) goto LAB_105a3c0c0;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a3c218;
  puStack_70 = &UNK_11085f5c8;
  unaff_x24 = &puStack_88;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_retain(puVar1);
  puStack_68 = puVar1;
  _objc_retain(puVar3);
  puStack_60 = puVar3;
  func_0x00010befa100(puVar2);
  _objc_release(puStack_60);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar5);
LAB_105a3c18c:
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010befa0a0();
    _objc_release(lVar4);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  __Unwind_Resume();
  puVar2 = puVar1 + 0x30;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c128780(*(undefined8 *)(puVar1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a3c218; end: 105a3c24f;  */

void FUN_105a3c218(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c128780(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a3c250; end: 105a3c2d7; -[SCLagunaModule removeManualWifiNotification] */

void FUN_105a3c250(undefined8 param_1)

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
  pcStack_40 = FUN_105a3c2d8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a3c2d8; end: 105a3c347;  */

void FUN_105a3c2d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  func_0x00010bfef620();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12d300();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3c348; end: 105a3c3cf; -[SCLagunaModule removeAutomaticWifiNotification] */

void FUN_105a3c348(undefined8 param_1)

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
  pcStack_40 = FUN_105a3c3d0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a3c3d0; end: 105a3c43f;  */

void FUN_105a3c3d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  func_0x00010bfef600();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12d300();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3c440; end: 105a3c457; -[SCLagunaModule userSession] */

void FUN_105a3c440(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a3c458; end: 105a3c463; -[SCLagunaModule setUserSession:] */

void FUN_105a3c458(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105a3c464; end: 105a3c493; -[SCLagunaModule setSpectaclesManager:] */

void FUN_105a3c464(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3c494; end: 105a3c49b; -[SCLagunaModule onboardingManager] */

undefined8 FUN_105a3c494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a3c49c; end: 105a3c4cb; -[SCLagunaModule setOnboardingManager:] */

void FUN_105a3c49c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3c4cc; end: 105a3c4d3; -[SCLagunaModule firmwareManager] */

undefined8 FUN_105a3c4cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a3c4d4; end: 105a3c503; -[SCLagunaModule setFirmwareManager:] */

void FUN_105a3c4d4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3c504; end: 105a3c50b; -[SCLagunaModule homeWifiManager] */

undefined8 FUN_105a3c504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a3c50c; end: 105a3c53b; -[SCLagunaModule setHomeWifiManager:] */

void FUN_105a3c50c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3c53c; end: 105a3c543; -[SCLagunaModule activateDeviceFlow] */

undefined8 FUN_105a3c53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105a3c544; end: 105a3c573; -[SCLagunaModule setActivateDeviceFlow:] */

void FUN_105a3c544(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3c574; end: 105a3c57b; -[SCLagunaModule crashLogger] */

undefined8 FUN_105a3c574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105a3c57c; end: 105a3c5ab; -[SCLagunaModule setCrashLogger:] */

void FUN_105a3c57c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3c5ac; end: 105a3c5b3; -[SCLagunaModule analyticsLogger] */

undefined8 FUN_105a3c5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105a3c5b4; end: 105a3c5e3; -[SCLagunaModule setAnalyticsLogger:] */

void FUN_105a3c5b4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3c5e4; end: 105a3c66b; -[SCLagunaModule .cxx_destruct] */

void FUN_105a3c5e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a3c66c; end: 105a3c86f; -[SCAppNotification initWithSpectaclesPushType:snapId:] */

undefined * FUN_105a3c66c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  puVar11 = PTR_PTR_1126b1370;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0x79) {
    _objc_retain(param_4);
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e17d78;
    ppuVar1 = ppuVar3;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17d78,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e17d98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17d98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17d78,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 7;
    func_0x000107fcbeb0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _objc_release(puVar11);
    func_0x00010c030320();
    _objc_retain();
    _objc_release(puVar5);
    puVar11 = param_1;
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar11;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_1;
  func_0x000109025678();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar5);
  func_0x00010c030320();
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000109025690();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x0001090256a8();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x0001090256a8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843c0;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c030320();
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar11;
  }
  ___stack_chk_fail();
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 105a3c870; end: 105a3c9c7; -[SCAppNotification initSpectaclesProxyAutomaticWifiNotification] */

undefined * FUN_105a3c870(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x000109025678();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dad058;
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x4a);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dad0b8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f9e958;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e17db8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f9e878;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e12eb8;
  uVar3 = 7;
  puStack_70 = puVar2;
  puStack_68 = puVar1;
  puStack_58 = puVar1;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = uVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_98,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c030320(param_1,param_2,puVar4,2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110dad058;
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x4b);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110dad0b8;
  puVar4 = puVar2;
  puStack_128 = puVar2;
  func_0x000109025690();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110dad858;
  puVar5 = puVar4;
  puStack_120 = puVar4;
  func_0x0001090256a8();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f9e878;
  puVar6 = puVar5;
  puStack_118 = puVar5;
  func_0x0001090256a8();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f9e958;
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843c0;
  puStack_110 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110e12eb8;
  uVar3 = 7;
  ppuStack_108 = ppuVar7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_100 = uVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_128,&ppuStack_158,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c030320(puVar1,param_2,puVar8,2);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 105a3c9c8; end: 105a3cb93; -[SCAppNotification initSpectaclesProxyManualWifiNotification] */

undefined * FUN_105a3c9c8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dad058;
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x4b);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dad0b8;
  puVar2 = puVar1;
  puStack_88 = puVar1;
  func_0x000109025690();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dad858;
  puVar3 = puVar2;
  puStack_80 = puVar2;
  func_0x0001090256a8();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f9e878;
  puVar4 = puVar3;
  puStack_78 = puVar3;
  func_0x0001090256a8();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f9e958;
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843c0;
  puStack_70 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e12eb8;
  uVar6 = 7;
  ppuStack_68 = ppuVar5;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = uVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_b8,6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c030320(param_1,param_2,puVar7,2);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 105a3cb94; end: 105a3cbe3; -[SCAppNotification spectaclesRawSnapId] */

void FUN_105a3cb94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3cbe4; end: 105a3cbef; -[SCPreferences hasSeenCheeriosTooltipOnMemoriesSideButton] */

void FUN_105a3cbe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolForKey__1125a5670,&PTR____CFConstantStringClassReference_110e17dd8);
  return;
}



/* Entry: 105a3cbf0; end: 105a3cbfb; -[SCPreferences setHasSeenCheeriosTooltipOnMemoriesSideButton:] */

void FUN_105a3cbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e17dd8);
  return;
}



/* Entry: 105a3cbfc; end: 105a3cdbf; -[SCSpectaclesAppLocationCoordinator initWithServerMetadataFetcher:onDemandResourceFetcher:spectaclesManager:userPreferences:locationProvider:] */

undefined8 *
FUN_105a3cbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eb638;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a3cdc0;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010007380c(uVar2,&puStack_90);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a3cdc0; end: 105a3cdeb;  */

void FUN_105a3cdc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be765a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a3cdec; end: 105a3ce33; -[SCSpectaclesAppLocationCoordinator dealloc] */

void FUN_105a3cdec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126eb638;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a3ce34; end: 105a3cea3; -[SCSpectaclesAppLocationCoordinator spectaclesDeviceDidUpdateState:] */

void FUN_105a3ce34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bea3120(param_1);
    func_0x00010bed8bc0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a3cea4; end: 105a3cf53; -[SCSpectaclesAppLocationCoordinator spectaclesDeviceDidPair:] */

void FUN_105a3cea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar3,param_2,puVar2);
  func_0x00010c285160(uVar4,param_2,uVar1,puVar3,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105a3cf54; end: 105a3cfa7; -[SCSpectaclesAppLocationCoordinator spectaclesOnDeviceForgotten:] */

void FUN_105a3cf54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a3cfa8; end: 105a3d047; -[SCSpectaclesAppLocationCoordinator spectaclesDevice:didUpdateInfo:] */

void FUN_105a3cfa8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((param_4 & 0xe) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f260(puVar2,param_2,puVar1);
    func_0x00010c285160(uVar3,param_2,param_3,puVar2,0);
    _objc_release(param_3);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105a3d048; end: 105a3d083; -[SCSpectaclesAppLocationCoordinator _postInitSetup] */

void FUN_105a3d048(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a3d084; end: 105a3d2a3; -[SCSpectaclesAppLocationCoordinator _subscribeLocationUpdates] */

void FUN_105a3d084(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar1 = PTR_PTR_1126c1818;
    _objc_alloc(PTR_PTR_1126c1818);
    puVar2 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar3 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar2);
    func_0x00010bff4e40(*(undefined8 *)PTR__kCLLocationAccuracyThreeKilometers_110349b90,
                        *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68,puVar1);
    _objc_release(puVar2);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1347e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar7 = uVar8;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 105a3d2a4; end: 105a3d34f;  */

void FUN_105a3d2a4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105a3d350; end: 105a3d37b;  */

void FUN_105a3d350(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a3d37c; end: 105a3d3b3; -[SCSpectaclesAppLocationCoordinator _unsubscribeLocationUpdates] */

void FUN_105a3d37c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a3d3b4; end: 105a3d5eb; -[SCSpectaclesAppLocationCoordinator _setCountryCodeIfNecessary] */

void FUN_105a3d3b4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010bfdbf20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107f49238();
  _objc_release(uVar1);
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c1a6d00();
    func_0x00010b6fc0fc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c08fa60();
    _objc_release();
    if (uVar3 == 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010b6fc0fc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c184960(uVar4);
      _objc_release(uVar6);
    }
    else {
      func_0x00010b6fc0fc();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar3 == 0) {
        _objc_initWeak(auStack_38,param_1);
        puVar5 = PTR__OBJC_CLASS___CLGeocoder_1126c1820;
        _objc_alloc_init(PTR__OBJC_CLASS___CLGeocoder_1126c1820);
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x00010c140060(puVar5);
        _objc_release(uVar4);
        _objc_release(uVar6);
        _objc_release(puVar5);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c184960();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeLocationUpdates_11258f440);
  return;
}



/* Entry: 105a3d5ec; end: 105a3d7a3;  */

void FUN_105a3d5ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long lVar7;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    lVar5 = param_2;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_2);
          }
          unaff_x23 = *(long *)(lStack_128 + lVar7 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010bdc17e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (unaff_x24 != 0) {
            unaff_x22 = unaff_x23;
            func_0x00010bdc17e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            if ((param_3 != 0) || (unaff_x22 == 0)) goto LAB_105a3d744;
            func_0x00010bed21c0(param_1);
            param_3 = *(long *)(param_1 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = unaff_x22;
            func_0x00010c184960();
            _objc_release(param_3);
            goto LAB_105a3d750;
          }
          lVar7 = lVar7 + 1;
        } while (lVar5 != lVar7);
        lVar5 = param_2;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(param_2);
    unaff_x22 = 0;
LAB_105a3d744:
    lVar5 = 0;
    func_0x00010c1a6d00(param_1);
LAB_105a3d750:
    _objc_release(unaff_x22);
  }
  _objc_release(param_1);
  lVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105a3d7a4;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  lStack_158 = param_3;
  lStack_150 = param_1;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar5);
  lVar7 = lVar5;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c078aa0();
  _objc_release(lVar7);
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(lVar6 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c0b4ca0();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf60520();
    if (lVar7 < (long)(puVar2 + -86400000)) {
      _objc_initWeak(auStack_178,lVar6);
      _objc_copyWeak(auStack_180,auStack_178);
      _objc_retain(lVar5);
      func_0x00010be05f00(lVar6);
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_180);
      _objc_destroyWeak(auStack_178);
    }
    if (0 < lVar7) {
      lVar1 = lVar5;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c088da0();
      _objc_release(lVar1);
      if (lVar3 < lVar7) {
        lVar7 = lVar6;
        func_0x00010be24400(lVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(lVar6 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2861c0();
        _objc_release(uVar4);
        _objc_release(lVar7);
      }
    }
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 105a3d7a4; end: 105a3d96b; -[SCSpectaclesAppLocationCoordinator _updateGPSAlmanacIfNeededForDevice:] */

void FUN_105a3d7a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c078aa0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0b4ca0();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf60520();
    if (lVar1 < (long)(puVar3 + -86400000)) {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010be05f00(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    if (0 < lVar1) {
      lVar2 = param_3;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c088da0();
      _objc_release(lVar2);
      if (lVar4 < lVar1) {
        lVar1 = param_1;
        func_0x00010be24400(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2861c0();
        _objc_release(uVar5);
        _objc_release(lVar1);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a3d96c; end: 105a3d9b7;  */

void FUN_105a3d96c(long param_1,long param_2)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bed8bc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a3d9b8; end: 105a3db0b; -[SCSpectaclesAppLocationCoordinator _downloadGPSAlmanacWithCompletion:] */

void FUN_105a3d9b8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c070e40();
  if ((uVar1 & 1) == 0) {
    func_0x00010c191480(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf63be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a3db0c; end: 105a3dbd7;  */

void FUN_105a3db0c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c191480(lVar1);
    if (param_2 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x20));
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf60520(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c0df7c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x20));
      _objc_release(puVar2);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a3dbd8; end: 105a3dbe7; -[SCSpectaclesAppLocationCoordinator _gpsAlmanacData] */

void FUN_105a3dbd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110e17e18);
  return;
}



/* Entry: 105a3dbe8; end: 105a3dbef; -[SCSpectaclesAppLocationCoordinator hasSetCountryCode] */

undefined1 FUN_105a3dbe8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 105a3dbf0; end: 105a3dbf7; -[SCSpectaclesAppLocationCoordinator setHasSetCountryCode:] */

void FUN_105a3dbf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 105a3dbf8; end: 105a3dbff; -[SCSpectaclesAppLocationCoordinator isDownloadingGPSAlmanac] */

undefined1 FUN_105a3dbf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 105a3dc00; end: 105a3dc07; -[SCSpectaclesAppLocationCoordinator setDownloadingGPSAlmanac:] */

void FUN_105a3dc00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 105a3dc08; end: 105a3dc73; -[SCSpectaclesAppLocationCoordinator .cxx_destruct] */

void FUN_105a3dc08(long param_1)

{
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



/* Entry: 105a3dc74; end: 105a3df93; -[SCSpectaclesAppStatusCoordinator initWithUserPreferences:spectaclesManager:firmwareManager:spectaclesAppLogger:appInsightsMetadataStorage:featureSettingsService:] */

undefined8 *
FUN_105a3dc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126eb640;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1828;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xb) = 0;
    uVar4 = puVar1[6];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0x5f) = (char)uVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[6];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c067ec0();
    puVar1[0xd] = (long)(int)uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c1830;
    _objc_alloc();
    func_0x00010bff3480();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1838;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105a3df94;
    puStack_88 = &UNK_1108434b0;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010007380c(uVar2,&puStack_a0);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a3df94; end: 105a3dfbf;  */

void FUN_105a3df94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be765a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a3dfc0; end: 105a3e05b; -[SCSpectaclesAppStatusCoordinator _statusForDevice:] */

void FUN_105a3dfc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdfbf60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x000106e937b0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3bbe0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010bdfbf60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a3e05c; end: 105a3e107; -[SCSpectaclesAppStatusCoordinator appStatusStateForDevice:] */

long FUN_105a3e05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdfbf60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x000106e937b0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3bbe0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010bdfbf60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105a3e108; end: 105a3e193; -[SCSpectaclesAppStatusCoordinator deviceAtIndex:] */

void FUN_105a3e108(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = uVar2;
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3e194; end: 105a3e1f7; -[SCSpectaclesAppStatusCoordinator pairedDeviceAtIndex:] */

void FUN_105a3e194(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c0f2bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3e1f8; end: 105a3e25b; -[SCSpectaclesAppStatusCoordinator connectedDeviceAtIndex:] */

void FUN_105a3e1f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3e25c; end: 105a3e2e7; -[SCSpectaclesAppStatusCoordinator indexOfDevice:] */

long FUN_105a3e25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = lVar2;
    func_0x00010bfecde0(lVar2,param_2,param_3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105a3e2e8; end: 105a3e347; -[SCSpectaclesAppStatusCoordinator numberOfDevices] */

undefined8 FUN_105a3e2e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105a3e348; end: 105a3e383; -[SCSpectaclesAppStatusCoordinator numberOfPairedDevices] */

undefined8 FUN_105a3e348(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f2bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a3e384; end: 105a3e3bf; -[SCSpectaclesAppStatusCoordinator numberOfConnectedDevices] */

undefined8 FUN_105a3e384(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a3e3c0; end: 105a3e44f; -[SCSpectaclesAppStatusCoordinator _numberOfUntransferredContentsFromConnectedDevice] */

undefined8 FUN_105a3e3c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf486e0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_105a441e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105a3e450; end: 105a3e50f; -[SCSpectaclesAppStatusCoordinator _pairingCompleteMessageForConnectedDevice] */

void FUN_105a3e450(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x00010bf486e0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    param_1 = (undefined *)0x0;
  }
  else {
    func_0x00010be65760();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_1 != (undefined *)0x0) {
      if (param_1 == (undefined *)0x1) {
        func_0x000109025648();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000109025660();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar2,param_2,param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        param_1 = puVar2;
      }
    }
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a3e510; end: 105a3e537; -[SCSpectaclesAppStatusCoordinator crashContext] */

void FUN_105a3e510(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3e538; end: 105a3e57b; -[SCSpectaclesAppStatusCoordinator isBluetoothOn] */

bool FUN_105a3e538(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1e6e0();
  _objc_release(lVar1);
  return lVar2 == 5;
}



/* Entry: 105a3e57c; end: 105a3e5bf; -[SCSpectaclesAppStatusCoordinator isBluetoothAuthorized] */

bool FUN_105a3e57c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1e6e0();
  _objc_release(lVar1);
  return lVar2 != 3;
}



/* Entry: 105a3e5c0; end: 105a3e67b; -[SCSpectaclesAppStatusCoordinator isUserTriggeredStateForDevice:] */

undefined8 FUN_105a3e5c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bec2760(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c252440();
  if (uVar1 < 0x1b) {
    if ((1L << (uVar1 & 0x3f) & 0x5139800U) != 0) {
      uVar3 = 1;
      goto LAB_105a3e620;
    }
    if (uVar1 == 3) {
      uVar2 = param_3;
      func_0x00010c0692a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfd7b60();
      _objc_release(uVar2);
      goto LAB_105a3e620;
    }
  }
  uVar3 = 0;
LAB_105a3e620:
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105a3e67c; end: 105a3e6fb; -[SCSpectaclesAppStatusCoordinator isDeviceTransferring:] */

uint FUN_105a3e67c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bec2760(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c252440();
    _objc_release(param_1);
    uVar2 = 0;
    if (uVar1 < 0x1b) {
      uVar2 = 0x4f00000 >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 105a3e6fc; end: 105a3e7eb; -[SCSpectaclesAppStatusCoordinator isDeviceUpdating:] */

long FUN_105a3e6fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0eddc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 == 0) {
    if (param_3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bec2760(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c252440();
      func_0x00010be40720(lVar3,param_2,lVar1);
      _objc_release(param_1);
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c28d8a0(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a3e7ec; end: 105a3e853; -[SCSpectaclesAppStatusCoordinator setSpectaclesMemoriesOnScreen:] */

void FUN_105a3e7ec(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 8) == param_3) {
    return;
  }
  *(char *)(param_1 + 8) = (char)param_3;
  if (param_3 == 0) {
    func_0x00010bddfcc0();
  }
  else {
    func_0x00010bedb7e0(param_1,param_2,0);
  }
  func_0x00010bdddbc0(param_1);
  func_0x00010bdddac0(param_1);
  func_0x00010bdddae0(param_1);
  func_0x00010bdddb00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContext_112593290);
  return;
}



/* Entry: 105a3e854; end: 105a3e893; -[SCSpectaclesAppStatusCoordinator setSpectaclesSettingsOnScreen:] */

void FUN_105a3e854(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 9) == param_3) {
    return;
  }
  *(char *)(param_1 + 9) = (char)param_3;
  func_0x00010bdddbc0();
  func_0x00010bdddac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContext_112593290);
  return;
}



/* Entry: 105a3e894; end: 105a3e89b; -[SCSpectaclesAppStatusCoordinator addListener:] */

void FUN_105a3e894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105a3e89c; end: 105a3e8a3; -[SCSpectaclesAppStatusCoordinator removeListener:] */

void FUN_105a3e89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105a3e8a4; end: 105a3ebef; -[SCSpectaclesAppStatusCoordinator expandedStatusDescriptionForDevice:] */

void FUN_105a3e8a4(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  func_0x00010bec2760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_release(param_1);
  ppuVar4 = (undefined **)0x0;
  if (lVar1 < 9) {
    if (lVar1 < 6) {
      if (lVar1 != 4) {
        if (lVar1 != 5) goto LAB_105a3ebd4;
        ppuVar2 = param_3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf70e00();
        _objc_release(ppuVar2);
        ppuVar4 = (undefined **)0x0;
        if (ppuVar3 == (undefined **)0x0) goto LAB_105a3ebd4;
        if (ppuVar3 == (undefined **)0x1) {
          func_0x0001090257b0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar2;
          goto LAB_105a3ebd4;
        }
LAB_105a3e99c:
        ppuVar2 = param_3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf70e00();
        _objc_release(ppuVar2);
        ppuVar4 = (undefined **)0x0;
        if (ppuVar3 == (undefined **)0x0) goto LAB_105a3ebd4;
        if (ppuVar3 == (undefined **)0x1) {
          func_0x0001090257c8();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar2;
          goto LAB_105a3ebd4;
        }
        goto LAB_105a3e9dc;
      }
LAB_105a3ea8c:
      ppuVar4 = param_3;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar4;
      func_0x00010bf70e00();
      _objc_release(ppuVar4);
      if (ppuVar2 == (undefined **)0x1) {
        func_0x000109025810();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105a3ebd4;
      }
      if (ppuVar2 != (undefined **)0x0) goto LAB_105a3eac8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e17e98;
    }
    else {
      if (lVar1 == 6) goto LAB_105a3e99c;
      if (lVar1 != 8) goto LAB_105a3ebd4;
LAB_105a3eb40:
      ppuVar4 = param_3;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar4;
      func_0x00010bf70e00();
      _objc_release(ppuVar4);
      if (ppuVar2 == (undefined **)0x1) {
        func_0x000109025858();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105a3ebd4;
      }
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar4 = (undefined **)0x0;
        goto LAB_105a3ebd4;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110e17ef8;
    }
  }
  else {
    if (0x10 < lVar1) {
      if (lVar1 == 0x11) {
LAB_105a3e9dc:
        ppuVar2 = param_3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf70e00();
        _objc_release(ppuVar2);
        ppuVar4 = (undefined **)0x0;
        if (ppuVar3 == (undefined **)0x0) goto LAB_105a3ebd4;
        if (ppuVar3 == (undefined **)0x1) {
          func_0x0001090257e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar2;
          goto LAB_105a3ebd4;
        }
LAB_105a3ea1c:
        ppuVar2 = param_3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf70e00();
        _objc_release(ppuVar2);
        ppuVar4 = (undefined **)0x0;
        if (ppuVar3 == (undefined **)0x0) goto LAB_105a3ebd4;
        if (ppuVar3 != (undefined **)0x1) goto LAB_105a3ea4c;
      }
      else {
        if (lVar1 == 0x12) goto LAB_105a3ea1c;
        if (lVar1 != 0x13) goto LAB_105a3ebd4;
LAB_105a3ea4c:
        ppuVar2 = param_3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf70e00();
        _objc_release(ppuVar2);
        ppuVar4 = (undefined **)0x0;
        if (ppuVar3 == (undefined **)0x0) goto LAB_105a3ebd4;
        if (ppuVar3 != (undefined **)0x1) goto LAB_105a3ea8c;
      }
      func_0x0001090257f8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      goto LAB_105a3ebd4;
    }
    if (lVar1 != 9) {
      if (lVar1 != 10) goto LAB_105a3ebd4;
LAB_105a3eac8:
      ppuVar4 = param_3;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar4;
      func_0x00010bf70e00();
      _objc_release(ppuVar4);
      if (ppuVar2 == (undefined **)0x1) {
        func_0x000109025828();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105a3ebd4;
      }
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e17eb8;
        goto LAB_105a3eb78;
      }
    }
    ppuVar4 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf70e00();
    _objc_release(ppuVar4);
    if (ppuVar2 == (undefined **)0x1) {
      func_0x000109025840();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105a3ebd4;
    }
    if (ppuVar2 != (undefined **)0x0) goto LAB_105a3eb40;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e17ed8;
  }
LAB_105a3eb78:
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105a3ebd4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105a3ebf0; end: 105a3ec33; -[SCSpectaclesAppStatusCoordinator firmwareUpdateProgressForDevice:] */

undefined8 FUN_105a3ebf0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bec2760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb0b40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105a3ec34; end: 105a3ed6f; -[SCSpectaclesAppStatusCoordinator _buildGroupsForDevice:] */

void FUN_105a3ec34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a3ed70;
  puStack_50 = &UNK_110870ac0;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010bfaea20(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c246ca0(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108cec68);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfce6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105a3ed70; end: 105a3edb7;  */

undefined8 FUN_105a3ed70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6fd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105a3edb8; end: 105a3efbf;  */

undefined8 FUN_105a3edb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c26f500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105a3efc0; end: 105a3efcb;  */

void FUN_105a3efc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isDownloadCompleteForComponent__1125f9d80,0);
  return;
}



/* Entry: 105a3efcc; end: 105a3efcf; -[SCSpectaclesAppStatusCoordinator contentManifestForDevice:] */

void FUN_105a3efcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfbd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deviceContentManifestsForDevice_11255c900);
  return;
}



/* Entry: 105a3efd0; end: 105a3f383; -[SCSpectaclesAppStatusCoordinator _calculateContentManifestForDevice:transferSession:] */

/* WARNING: Possible PIC construction at 0x000105a3f0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a3f1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a3f0f0) */
/* WARNING: Removing unreachable block (ram,0x000105a3f2b8) */
/* WARNING: Removing unreachable block (ram,0x000105a3f174) */
/* WARNING: Removing unreachable block (ram,0x000105a3f1d0) */
/* WARNING: Removing unreachable block (ram,0x000105a3f1fc) */
/* WARNING: Removing unreachable block (ram,0x000105a3f210) */
/* WARNING: Removing unreachable block (ram,0x000105a3f228) */
/* WARNING: Removing unreachable block (ram,0x000105a3f240) */
/* WARNING: Removing unreachable block (ram,0x000105a3f274) */
/* WARNING: Removing unreachable block (ram,0x000105a3f27c) */
/* WARNING: Removing unreachable block (ram,0x000105a3f290) */
/* WARNING: Removing unreachable block (ram,0x000105a3f184) */
/* WARNING: Removing unreachable block (ram,0x000105a3f188) */
/* WARNING: Removing unreachable block (ram,0x000105a3f198) */
/* WARNING: Removing unreachable block (ram,0x000105a3f1a0) */
/* WARNING: Removing unreachable block (ram,0x000105a3f2ac) */
/* WARNING: Removing unreachable block (ram,0x000105a3f2bc) */

void FUN_105a3efd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_1);
  if ((int)uVar3 == 0) {
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      lVar4 = 0;
      goto _objc_autoreleaseReturnValue;
    }
    param_4 = param_2;
    ___stack_chk_fail();
  }
  else {
    func_0x00010bdd6300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c0f7680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010bfea5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain();
  lVar1 = param_4;
  func_0x00010c0d2900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar4 = param_4;
  if (lVar2 == 0) {
    func_0x00010bdc3540(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d2900(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(lVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105a3f384; end: 105a3f393;  */

void FUN_105a3f384(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0d2900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_2;
  if (lVar2 == 0) {
    func_0x00010bdc3540(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d2900(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105a3f394; end: 105a3f3f7;  */

ulong FUN_105a3f394(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  func_0x00010c137620(param_2);
  uVar1 = param_2;
  func_0x00010c070dc0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c080760(param_2);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_2);
  return uVar1;
}


