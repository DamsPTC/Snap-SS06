/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106738b84; end: 1067390c7; -[SCFeatureMainCameraRealTimeScan initWithFeatureScan:cameraFeatureUpdateEventObservable:cameraHardwareResource:cameraHardwareServicesAPI:appLifecycleManager:applicationLifecycleEvents:performerProvider:realTimeScanScopeExposer:realTimeScanScopeServices:realTimeScanConfiguration:realTimeScanLogger:cameraUIServices:cameraWorkflowDelegate:mainCameraViewControllerLifecycleEvents:mainQueuePerformer:batchCaptureFeature:lensCarouselManager:startupInfoService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106738b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126f2d38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274f200,param_14);
    lVar6 = (long)_DAT_11274f204;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f208;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f20c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f210;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274f214,param_15);
    lVar6 = (long)_DAT_11274f218;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f21c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274f220,param_10);
    lVar6 = (long)_DAT_11274f224;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f228;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f22c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f230;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f234;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_17;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274f238;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_18;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274f23c,param_20);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f240);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f240) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b7e38;
    func_0x00010c131720();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f244);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f244) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f248);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f248) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cd558;
    _objc_alloc();
    func_0x00010c03d140();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f24c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f24c) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f250);
    *(undefined ***)((long)puVar1 + (long)_DAT_11274f250) = &PTR___NSConcreteGlobalBlock_110938090;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c297260(param_19);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067390c8; end: 1067390db;  */

void FUN_1067390c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c270930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSTimer_1126af1b0,PTR_s_timerWithTimeInterval_repeats_bl_112679c70,
             param_2,param_3);
  return;
}



/* Entry: 1067390dc; end: 106739143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067390dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + _DAT_11274f254) & 1) == 0)) {
    _objc_storeWeak(param_1 + _DAT_11274f258,param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106739144; end: 1067391db; -[SCFeatureMainCameraRealTimeScan configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0870;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d96a0();
  func_0x00010befbb60(param_3,param_2,puVar1);
  _objc_release(param_3);
  func_0x00010c14c940(puVar1);
  puVar2 = PTR_PTR_1126cd560;
  _objc_alloc();
  func_0x00010c04f340();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274f25c);
  *(undefined **)(param_1 + _DAT_11274f25c) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067391dc; end: 10673923b; -[SCFeatureMainCameraRealTimeScan activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067391dc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10673923c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11274f234),param_2,&puStack_38);
  return;
}



/* Entry: 10673923c; end: 106739243;  */

void FUN_10673923c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc4cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__activateIfNeeded_11254ecd8);
  return;
}



/* Entry: 106739244; end: 106739267; -[SCFeatureMainCameraRealTimeScan _activateIfNeeded] */

void FUN_106739244(undefined8 param_1)

{
  func_0x00010bde5440();
                    /* WARNING: Could not recover jumptable at 0x00010be0d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeRealTimeScanScopeIfNeeded_112560e28);
  return;
}



/* Entry: 106739268; end: 106739333; -[SCFeatureMainCameraRealTimeScan _configureObservablesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739268(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + _DAT_11274f260) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274f260) = 1;
    func_0x00010bde4a00();
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274f240);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106739334; end: 10673935f;  */

void FUN_106739334(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106739360; end: 10673952b; -[SCFeatureMainCameraRealTimeScan _configureRtsAndCameraViewLifecycleObservables] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739360(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f24c);
  func_0x00010c1424a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10673952c;
  puStack_68 = &UNK_1109166c8;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274f264);
  *(undefined8 *)(param_1 + _DAT_11274f264) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274f230);
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f268);
  *(undefined8 *)(param_1 + _DAT_11274f268) = uVar2;
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10673952c; end: 1067395bb;  */

void FUN_10673952c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067395bc; end: 10673969f; -[SCFeatureMainCameraRealTimeScan _handleCameraLifecycleEventUpdate:] */

void FUN_1067395bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0c1540(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067396a0; end: 1067396ab;  */

void FUN_1067396a0(void)

{
  return;
}



/* Entry: 1067396ac; end: 1067396d7;  */

void FUN_1067396ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf81e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067396d8; end: 106739793; -[SCFeatureMainCameraRealTimeScan _deactivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067396d8(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010be8cfe0();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106739744;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11274f240),param_2,&puStack_48);
  return;
}



/* Entry: 106739794; end: 106739843; -[SCFeatureMainCameraRealTimeScan _removeRealTimeScanScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739794(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f234);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106739844; end: 1067398cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739844(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_11274f220;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar3 = param_1 + lVar3;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067398cc; end: 10673992b; -[SCFeatureMainCameraRealTimeScan realTimeScanDidPresentNotificationUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067398cc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10673992c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11274f240),param_2,&puStack_38);
  return;
}



/* Entry: 10673992c; end: 106739937;  */

void FUN_10673992c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beccc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__toggleFrameObservableForFeature_112590cc8,0);
  return;
}



/* Entry: 106739938; end: 106739a03; -[SCFeatureMainCameraRealTimeScan realTimeScanDidDismissNotificationUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739938(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_11274f228);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf15960();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274f240);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106739a04;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  _objc_retain(param_1);
  func_0x00010c0f7fe0((double)((float)lVar2 * 0.001),uVar3,param_2,&puStack_68);
  _objc_release(param_1);
  return;
}



/* Entry: 106739a04; end: 106739a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739a04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11274f24c);
    _objc_retain(lVar1);
    func_0x00010c1424e0(uVar2);
    func_0x00010beccc80(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106739a5c; end: 106739a5f; -[SCFeatureMainCameraRealTimeScan realTimeScanWantsDismiss:] */

void FUN_106739a5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeRealTimeScanScope_112580d98);
  return;
}



/* Entry: 106739a60; end: 106739a6f; -[SCFeatureMainCameraRealTimeScan realTimeScanWantsScanLaunchWithFrameId:dataSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef00d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274f204),
             PTR_s_activateWithSourceId_withDataSub_1125999d8);
  return;
}



/* Entry: 106739a70; end: 106739b27; -[SCFeatureMainCameraRealTimeScan didDismissFullscreenModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739a70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11274f200;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e220(lVar2,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106739b28; end: 106739bdb; -[SCFeatureMainCameraRealTimeScan didDisplayFullscreenModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739b28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11274f200;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255c20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11274f258;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106739bdc; end: 106739c23; -[SCFeatureMainCameraRealTimeScan setAllCameraUIVisible:animated:] */

void FUN_106739bdc(undefined8 param_1)

{
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106739c24; end: 106739c6b; -[SCFeatureMainCameraRealTimeScan setCameraHeaderVisible:animated:] */

void FUN_106739c24(undefined8 param_1)

{
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1767a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106739c6c; end: 106739cb3; -[SCFeatureMainCameraRealTimeScan setCameraToolbarVisible:animated:] */

void FUN_106739c6c(undefined8 param_1)

{
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1773c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106739cb4; end: 106739cf7; -[SCFeatureMainCameraRealTimeScan headerItemYOffset] */

undefined8 FUN_106739cb4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdfc40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106739cf8; end: 106739e5f; -[SCFeatureMainCameraRealTimeScan frameCapturer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739cf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x23;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = (long)_DAT_11274f26c;
  lVar8 = *(long *)(param_1 + lVar11);
  if (lVar8 == 0) {
    puVar1 = PTR_PTR_1126cd568;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11274f210);
    lVar8 = (long)_DAT_11274f228;
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c13b5c0();
    if ((int)uVar3 == 0) {
      uVar10 = 0;
    }
    else {
      unaff_x23 = *(undefined8 *)(param_1 + _DAT_11274f20c);
      func_0x00010c269d40(unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = unaff_x23;
      func_0x00010bf70ba0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = *(long *)(param_1 + lVar8);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf30c60();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c121ce0();
    func_0x00010bffb560((double)lVar5,puVar1,param_2,uVar9,uVar10,0xffffffffffffffff,uVar7);
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar1;
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(lVar4);
    if ((int)uVar3 != 0) {
      _objc_release(uVar10);
      _objc_release(unaff_x23);
    }
    _objc_release(uVar2);
    lVar8 = *(long *)(param_1 + lVar11);
  }
  _objc_retain(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 106739e60; end: 10673a053; -[SCFeatureMainCameraRealTimeScan _configureActivationStateObservables] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106739e60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar13 = *(undefined8 *)(param_1 + _DAT_11274f24c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f210);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274f218);
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274f21c);
  lVar18 = (long)_DAT_11274f258;
  lVar3 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + _DAT_11274f230);
  uVar16 = *(undefined8 *)(param_1 + _DAT_11274f208);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274f204);
  func_0x00010c14f520();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar7 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bef0ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274f238);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c06b6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + _DAT_11274f22c);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11274f20c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf190a0(uVar13,param_2,uVar2,uVar14,uVar15,lVar5,uVar17,uVar16,uVar6,lVar8,uVar10,
                      uVar19,uVar12);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673a054; end: 10673a313; -[SCFeatureMainCameraRealTimeScan _exposeRealTimeScanScopeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a054(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_11274f220;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126b7e38;
    func_0x00010c131720(PTR_PTR_1126b7e38,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cd570;
    _objc_alloc(PTR_PTR_1126cd570);
    func_0x00010c057600();
    puVar5 = PTR_PTR_1126b5f78;
    func_0x00010c0b6920(PTR_PTR_1126b5f78,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cd578;
    _objc_alloc();
    func_0x00010c041740();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11274f240);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x10673a1b8;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    puStack_50 = puVar3;
    puStack_48 = puVar6;
    _objc_retain();
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(uVar7,param_2,&puStack_78);
    _objc_release(puStack_48);
    _objc_release(puStack_50);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 10673a314; end: 10673a38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274f224);
  func_0x00010bf23f60(uVar1,param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274f25c),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11274f220;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf9d620();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673a390; end: 10673a533; -[SCFeatureMainCameraRealTimeScan _handleActivationStateUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c0be780(param_3);
  if (*(char *)(param_1 + _DAT_11274f278) != *(char *)(puStack_58 + 3)) {
    *(char *)(param_1 + _DAT_11274f278) = *(char *)(puStack_58 + 3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274f248));
    func_0x00010beccc80(param_1);
    if ((*(char *)(puStack_58 + 3) == '\x01') && (*(char *)(puStack_78 + 3) == '\x01')) {
      _mach_absolute_time();
      func_0x00010beec840();
      func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11274f234));
    }
  }
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return;
}



/* Entry: 10673a534; end: 10673a55f;  */

void FUN_10673a534(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10673a560; end: 10673a5af; -[SCFeatureMainCameraRealTimeScan _toggleFrameObservableForFeatureActivationState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a560(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274f270;
  if (*(byte *)(param_1 + lVar1) != param_3) {
    if (param_3 == 0) {
      func_0x00010bed2100();
    }
    else {
      func_0x00010bec7860();
    }
    *(char *)(param_1 + lVar1) = (char)param_3;
  }
  return;
}



/* Entry: 10673a5b0; end: 10673a607; +[SCFeatureMainCameraRealTimeScan _logFeatureActivationStateUpdate:] */

void FUN_10673a5b0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3130;
  func_0x00010c22bc20(PTR_PTR_1126b3130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10673a608; end: 10673a6c7; -[SCFeatureMainCameraRealTimeScan _subscribeToFrameUpdatesAndBeginQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a608(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000d76cc("APPSTORE",&PTR___NSConcreteGlobalBlock_110938110);
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274f274);
  *(undefined **)(param_1 + _DAT_11274f274) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126cd580;
  _objc_alloc(PTR_PTR_1126cd580);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c3e0(puVar1);
  _objc_release(puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274f244));
  func_0x00010bec7840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10673a6c8; end: 10673a6d7;  */

void FUN_10673a6c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010be530f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cd548,PTR_s__logFeatureActivationStateUpdate_1125725d8,1);
  return;
}



/* Entry: 10673a6d8; end: 10673a813; -[SCFeatureMainCameraRealTimeScan _subscribeToFrameCaptureSessionUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a6d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar6 = (long)_DAT_11274f27c;
  if (*(long *)(param_1 + lVar6) == 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1;
    func_0x00010bfb6ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf31140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10673a814; end: 10673a85b;  */

void FUN_10673a814(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff3e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673a85c; end: 10673a88f; -[SCFeatureMainCameraRealTimeScan _unsubscribeFromFrameCaptureSessionUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a85c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274f27c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673a890; end: 10673a89f; -[SCFeatureMainCameraRealTimeScan _didReceiveFrameUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274f274),PTR_s_next__112614028);
  return;
}



/* Entry: 10673a8a0; end: 10673a8ef; -[SCFeatureMainCameraRealTimeScan _unsubscribeFromFrameUpdatesAndEndQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a8a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x0001000d76cc("APPSTORE",&PTR___NSConcreteGlobalBlock_110938130);
  lVar2 = (long)_DAT_11274f274;
  func_0x00010bf436e0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed20f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unsubscribeFromFrameCaptureSess_1125921e0);
  return;
}



/* Entry: 10673a8f0; end: 10673a8ff;  */

void FUN_10673a8f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010be530f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cd548,PTR_s__logFeatureActivationStateUpdate_1125725d8,0);
  return;
}



/* Entry: 10673a900; end: 10673a9e7; -[SCFeatureMainCameraRealTimeScan _logBlizzardStartTimeMetricWithRtsStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a900(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = param_1;
  func_0x00010aee6fe0();
  dVar4 = (double)lVar3;
  func_0x00010aee7044();
  lVar3 = (long)((double)lVar3 / 1000.0);
  if (lVar3 <= (long)(dVar4 / 1000.0) || (long)((double)param_3 / 1000.0) <= lVar3) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f22c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274f23c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c2523e0();
  func_0x00010c121c40(uVar1,param_2,(long)((double)param_3 / 1000.0),(long)(dVar4 / 1000.0),lVar3,
                      lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673a9e8; end: 10673aa07; -[SCFeatureMainCameraRealTimeScan cameraUIDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673a9e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274f280);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10673aa08; end: 10673aa1b; -[SCFeatureMainCameraRealTimeScan setCameraUIDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673aa08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274f280,param_3);
  return;
}



/* Entry: 10673aa1c; end: 10673aa5b; -[SCFeatureMainCameraRealTimeScan setFrameCapturer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673aa1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274f26c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673aa5c; end: 10673aa6b; -[SCFeatureMainCameraRealTimeScan timerFactoryBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10673aa5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f250);
}



/* Entry: 10673aa6c; end: 10673aa77; -[SCFeatureMainCameraRealTimeScan setTimerFactoryBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673aa6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10673aa78; end: 10673aa87; -[SCFeatureMainCameraRealTimeScan activationWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10673aa78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f24c);
}



/* Entry: 10673aa88; end: 10673aac7; -[SCFeatureMainCameraRealTimeScan setActivationWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673aa88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274f24c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673aac8; end: 10673aad7; -[SCFeatureMainCameraRealTimeScan isInTestMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10673aac8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274f254);
}



/* Entry: 10673aad8; end: 10673aae7; -[SCFeatureMainCameraRealTimeScan setIsInTestMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673aad8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274f254) = param_3;
  return;
}



/* Entry: 10673aae8; end: 10673accf; -[SCFeatureMainCameraRealTimeScan .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673aae8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f250,0);
  _objc_destroyWeak(param_1 + _DAT_11274f23c);
  _objc_storeStrong(param_1 + _DAT_11274f238,0);
  _objc_storeStrong(param_1 + _DAT_11274f284,0);
  _objc_storeStrong(param_1 + _DAT_11274f240,0);
  _objc_storeStrong(param_1 + _DAT_11274f234,0);
  _objc_storeStrong(param_1 + _DAT_11274f248,0);
  _objc_storeStrong(param_1 + _DAT_11274f24c,0);
  _objc_storeStrong(param_1 + _DAT_11274f244,0);
  _objc_storeStrong(param_1 + _DAT_11274f274,0);
  _objc_storeStrong(param_1 + _DAT_11274f264,0);
  _objc_storeStrong(param_1 + _DAT_11274f268,0);
  _objc_storeStrong(param_1 + _DAT_11274f27c,0);
  _objc_storeStrong(param_1 + _DAT_11274f26c,0);
  _objc_storeStrong(param_1 + _DAT_11274f230,0);
  _objc_storeStrong(param_1 + _DAT_11274f208,0);
  _objc_storeStrong(param_1 + _DAT_11274f21c,0);
  _objc_destroyWeak(param_1 + _DAT_11274f258);
  _objc_storeStrong(param_1 + _DAT_11274f218,0);
  _objc_storeStrong(param_1 + _DAT_11274f228,0);
  _objc_storeStrong(param_1 + _DAT_11274f224,0);
  _objc_destroyWeak(param_1 + _DAT_11274f220);
  _objc_storeStrong(param_1 + _DAT_11274f25c,0);
  _objc_storeStrong(param_1 + _DAT_11274f22c,0);
  _objc_storeStrong(param_1 + _DAT_11274f210,0);
  _objc_storeStrong(param_1 + _DAT_11274f20c,0);
  _objc_destroyWeak(param_1 + _DAT_11274f280);
  _objc_destroyWeak(param_1 + _DAT_11274f214);
  _objc_destroyWeak(param_1 + _DAT_11274f200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f204,0);
  return;
}



/* Entry: 10673acd0; end: 10673afff; -[SCFeatureMainCameraScan initWithScanServices:scanFromLensFeatureSettings:applicationLifecycleEventsObservable:capturer:cameraHardwareResource:performer:cameraUIServices:lensCarouselManager:scanConfiguration:scanScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10673acd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126f2d40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274f28c);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274f290,param_3);
    lVar4 = (long)_DAT_11274f294;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274f298;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274f29c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274f2a0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274f2a4,param_7);
    lVar4 = (long)_DAT_11274f2a8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274f2ac;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f2b0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f2b0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f2b4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f2b4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11274f2b8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274f2bc) = 0;
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c297260(param_10);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10673b000; end: 10673b057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673b000(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + _DAT_11274f2c0,param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10673b058; end: 10673b26f; -[SCFeatureMainCameraScan initWithScanServices:scanFromLensFeatureSettings:cameraHardwareServices:cameraHardwareResource:cameraUIServices:cameraWorkflowDelegate:applicationLifecycleEventsObservable:lensCarouselManager:scanConfiguration:scanScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10673b058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cd568;
  _objc_retain();
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bffb560(0x4000000000000000);
  _objc_release(param_5);
  _objc_storeWeak(param_1 + _DAT_11274f2c4,param_8);
  _objc_release(param_8);
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar2);
  func_0x00010c041920();
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10673b270; end: 10673b3f7; -[SCFeatureMainCameraScan configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673b270(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + _DAT_11274f2c8,param_3);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  _objc_release(param_3);
  uVar1 = param_3;
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  while ((PTR__OBJC_CLASS___UIViewController_1126af898 = puVar2, (uVar3 & 1) != 0 && (uVar1 != 0)))
  {
    uVar4 = uVar1;
    func_0x00010c0d9e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    _objc_release(uVar4);
    uVar1 = uVar4;
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  }
  _objc_retain(uVar1);
  _objc_opt_class(puVar2);
  uVar4 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar3 = uVar1;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0870;
  _objc_alloc();
  func_0x00010c033f60();
  lVar6 = (long)_DAT_11274f2cc;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1d96a0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(param_3);
  _objc_release(uVar3);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10673b3f8; end: 10673b51b; -[SCFeatureMainCameraScan activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673b3f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2d40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_activate_112599760);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + _DAT_11274f28c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0b68e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar3 = lVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274f2d0);
  *(long *)(param_1 + _DAT_11274f2d0) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10673b51c; end: 10673b5d7;  */

void FUN_10673b51c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10673b5d8; end: 10673b5db;  */

void FUN_10673b5d8(void)

{
  return;
}



/* Entry: 10673b5dc; end: 10673b607;  */

void FUN_10673b5dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf65b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673b608; end: 10673b60f;  */

void FUN_10673b608(void)

{
  return;
}



/* Entry: 10673b610; end: 10673b613; -[SCFeatureMainCameraScan deactivate] */

void FUN_10673b610(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endScan_1125600c8);
  return;
}



/* Entry: 10673b614; end: 10673b623; -[SCFeatureMainCameraScan isLaunchedFromMainCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10673b614(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274f2bc);
}



/* Entry: 10673b624; end: 10673b6cf; -[SCFeatureMainCameraScan activateWithSourceId:withDataSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10673b624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11274f2d4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f2d8);
  *(undefined8 *)(param_1 + _DAT_11274f2d8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bdc5060(param_1,param_2,param_3,*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10673b6d0; end: 10673b793; -[SCFeatureMainCameraScan _activateWithSourceId:withOptionalDataSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10673b6d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = (undefined *)(param_1 + _DAT_11274f2a4);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c154f00();
  puVar4 = PTR_PTR_1126afed0;
  func_0x00010c0db140();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == puVar4) {
    *(undefined8 *)(param_1 + _DAT_11274f2dc) = 5;
    func_0x00010bdd3b40(param_1,param_2,5,*(undefined8 *)(param_1 + _DAT_11274f2d8),param_4);
  }
  _objc_release(param_4);
  return 1;
}



/* Entry: 10673b794; end: 10673b89b; -[SCFeatureMainCameraScan _beginScanFromSource:activationSourceId:withOptionalDataSubject:] */

void FUN_10673b794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10673b89c;
  puStack_60 = &UNK_1108502a8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retain(param_5);
  uStack_50 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10673b89c; end: 10673b917;  */

void FUN_10673b89c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be7e440(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20));
    func_0x00010be09c60(lVar1);
    uVar3 = *(long *)(param_1 + 0x38) - 1;
    if (uVar3 < 0x10) {
      uVar2 = *(undefined8 *)(&UNK_10ddde860 + uVar3 * 8);
    }
    else {
      uVar2 = 0;
    }
    func_0x00010bdd3aa0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),0,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10673b918; end: 10673b93b; -[SCFeatureMainCameraScan _endScan] */

void FUN_10673b918(undefined8 param_1)

{
  func_0x00010be09c60();
                    /* WARNING: Could not recover jumptable at 0x00010be033d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissScanIfNecessary_11255e690);
  return;
}



/* Entry: 10673b93c; end: 10673ba6f; -[SCFeatureMainCameraScan _beginQueryFromSource:activationSourceId:requestedAnalyzerServiceIds:optionalDataSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673b93c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_6;
  if (param_6 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274f2e0);
    *(undefined **)(param_1 + _DAT_11274f2e0) = puVar1;
    _objc_release(uVar2);
  }
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274f2e4);
  puVar3 = PTR_PTR_1126b5f70;
  _objc_alloc(PTR_PTR_1126b5f70);
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c400(puVar3,param_2,puVar4,puVar1,param_3,param_5);
  func_0x00010c0d9840(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  if (param_6 == (undefined *)0x0) {
    func_0x00010bdd3260(param_1,param_2,puVar1,param_4);
  }
  else {
    func_0x00010be09c60();
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10673ba70; end: 10673bc43; -[SCFeatureMainCameraScan _beginCaptureSessionWithDataSubject:activationSourceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673ba70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274f2a0);
  func_0x00010bf31800();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc0000000;
  pcStack_88 = FUN_10673bc44;
  puStack_80 = &UNK_1109381b0;
  uStack_70 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uStack_78 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar3 = uVar2;
  func_0x00010c114c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf31140();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10673bd58;
  puStack_a8 = &UNK_1109381d0;
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_copyWeak(auStack_c8,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274f2e8);
  *(undefined8 *)(param_1 + _DAT_11274f2e8) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10673bc44; end: 10673bd57;  */

void FUN_10673bc44(double param_1,double param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3140;
  func_0x00010c23d0a0(param_4);
  if ((param_1 == 0.0) || (func_0x00010c23d0a0(param_4), param_2 == 0.0)) {
    dVar6 = *(double *)PTR__CGPointZero_110347540;
    dVar5 = *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  else {
    dVar6 = *(double *)(param_3 + 0x20);
    func_0x00010c23d0a0(param_4);
    dVar5 = *(double *)(param_3 + 0x28);
    dVar6 = dVar6 / param_1;
    func_0x00010c23d0a0(param_4);
    dVar5 = dVar5 / param_2;
  }
  func_0x00010c277300(dVar6,dVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_next__112614028,lVar3);
  return;
}



/* Entry: 10673bd58; end: 10673bd63;  */

void FUN_10673bd58(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 10673bd64; end: 10673bd8f;  */

void FUN_10673bd64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673bd90; end: 10673be13; -[SCFeatureMainCameraScan _endQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673bd90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274f2e8;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf86d40();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_11274f2e0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf436e0();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_11274f2d4;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf436e0();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10673be14; end: 10673bfcf; -[SCFeatureMainCameraScan _presentScanIfNecessary:sourceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673be14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_4);
  lVar10 = (long)_DAT_11274f290;
  uVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c14f0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c076220();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    lVar9 = (long)_DAT_11274f2e4;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar5;
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126cd570;
    _objc_alloc(PTR_PTR_1126cd570);
    func_0x00010c057600();
    puVar6 = PTR_PTR_1126b5f78;
    func_0x00010c0b6920(PTR_PTR_1126b5f78,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11274f294);
    func_0x00010bf23f80(uVar8,param_2,*(undefined8 *)(param_1 + _DAT_11274f2cc),
                        *(undefined8 *)(param_1 + lVar9),puVar6,param_3,param_4,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar9 = lVar10;
    func_0x00010c14f0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bcc0();
    _objc_release(lVar7);
    _objc_release(lVar9);
    _objc_release(lVar10);
    *(undefined1 *)(param_1 + _DAT_11274f2bc) = 1;
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274f2b8),param_2,
                        PTR____kCFBooleanTrue_11034ab68);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10673bfd0; end: 10673bfe3; -[SCFeatureMainCameraScan _dismissScanUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673bfd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274f2cc),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10673bfe4; end: 10673c183; -[SCFeatureMainCameraScan _dismissScanIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673bfe4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar5 = (long)_DAT_11274f2bc;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    func_0x00010be09c60();
    lVar6 = (long)_DAT_11274f290;
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c14f0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c076220();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      _objc_initWeak(auStack_58,param_1);
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar6);
      lVar1 = lVar6;
      func_0x00010c14f0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010bf84460(lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar6);
      *(undefined1 *)(param_1 + lVar5) = 0;
      param_1 = param_1 + _DAT_11274f2c4;
      _objc_loadWeakRetained(param_1);
      func_0x00010beef6e0();
      _objc_release(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  return;
}



/* Entry: 10673c184; end: 10673c1af;  */

void FUN_10673c184(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c1b0; end: 10673c273; -[SCFeatureMainCameraScan _didDismissScan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c1b0(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274f2b8),param_2,
                      PTR____kCFBooleanFalse_11034ab60);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10673c274;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10673c274; end: 10673c29f;  */

void FUN_10673c274(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c2a0; end: 10673c2e7; -[SCFeatureMainCameraScan _dismissScanIfNecessaryToMainCamera] */

void FUN_10673c2a0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be033d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissScanIfNecessary_11255e690);
  return;
}



/* Entry: 10673c2e8; end: 10673c33f; -[SCFeatureMainCameraScan _dismissScanIfNecessaryWithFallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c2e8(long param_1)

{
  long lVar1;
  
  func_0x00010be033c0();
  param_1 = param_1 + _DAT_11274f2c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef0000();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c340; end: 10673c3fb; -[SCFeatureMainCameraScan scanWantsDismiss:] */

void FUN_10673c340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10673c3fc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10673c3fc; end: 10673c47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c3fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11274f2c0;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef03e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      func_0x00010be03400(param_1);
    }
    else {
      func_0x00010be033e0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c480; end: 10673c4df; -[SCFeatureMainCameraScan scanWantsQueryWithSource:requestedAnalyzerServiceIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010be09c60(param_1);
  func_0x00010bdd3aa0(param_1,param_2,param_3,*(undefined8 *)(param_1 + _DAT_11274f2d8),param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10673c4e0; end: 10673c597; -[SCFeatureMainCameraScan didDismissFullscreenModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c4e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11274f28c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e220(lVar2,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c598; end: 10673c64b; -[SCFeatureMainCameraScan didDisplayFullscreenModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c598(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11274f28c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255c20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11274f2c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c64c; end: 10673c707; -[SCFeatureMainCameraScan setAllCameraUIVisible:animated:] */

void FUN_10673c64c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10673c708;
  puStack_50 = &UNK_11086a898;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  uStack_3f = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10673c708; end: 10673c75f;  */

void FUN_10673c708(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166d00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c760; end: 10673c81b; -[SCFeatureMainCameraScan setCameraHeaderVisible:animated:] */

void FUN_10673c760(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10673c81c;
  puStack_50 = &UNK_11086a898;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  uStack_3f = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10673c81c; end: 10673c873;  */

void FUN_10673c81c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1767a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c874; end: 10673c92f; -[SCFeatureMainCameraScan setCameraToolbarVisible:animated:] */

void FUN_10673c874(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10673c930;
  puStack_50 = &UNK_11086a898;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  uStack_3f = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10673c930; end: 10673c987;  */

void FUN_10673c930(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1773c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673c988; end: 10673c9cb; -[SCFeatureMainCameraScan headerItemYOffset] */

undefined8 FUN_10673c988(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf2b560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdfc40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10673c9cc; end: 10673c9eb; -[SCFeatureMainCameraScan cameraUIDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c9cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274f2ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10673c9ec; end: 10673c9ff; -[SCFeatureMainCameraScan setCameraUIDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673c9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274f2ec,param_3);
  return;
}


