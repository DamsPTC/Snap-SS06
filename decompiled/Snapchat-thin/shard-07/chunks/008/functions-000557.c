/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a5a8f4; end: 105a5a8fb; -[SCSpectaclesKioskModeManager needsToRestartDevice] */

undefined8 FUN_105a5a8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105a5a8fc; end: 105a5a903; -[SCSpectaclesKioskModeManager errors] */

undefined8 FUN_105a5a8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105a5a904; end: 105a5a90b; -[SCSpectaclesKioskModeManager getSettingsForCategoryRequest] */

undefined8 FUN_105a5a904(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105a5a90c; end: 105a5a913; -[SCSpectaclesKioskModeManager getAvailableLensRequest] */

undefined8 FUN_105a5a90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105a5a914; end: 105a5a91b; -[SCSpectaclesKioskModeManager setKioskModeEnabledRequest] */

undefined8 FUN_105a5a914(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105a5a91c; end: 105a5a923; -[SCSpectaclesKioskModeManager setActiveLensIdRequest] */

undefined8 FUN_105a5a91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105a5a924; end: 105a5aa5b; -[SCSpectaclesKioskModeManager .cxx_destruct] */

void FUN_105a5a924(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105a5aa5c; end: 105a5abbf; -[SCSpectaclesKnobsLocationManager initWithRPCManager:locationManager:deviceLocationPermissionsManager:grapheneServices:] */

undefined1 *
FUN_105a5aa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eb730;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf87080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c087280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a5abc0; end: 105a5ac0f; -[SCSpectaclesKnobsLocationManager dealloc] */

void FUN_105a5abc0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_1126eb730;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a5ac10; end: 105a5ac17; -[SCSpectaclesKnobsLocationManager backgroundUpdatesEnabled] */

undefined8 FUN_105a5ac10(void)

{
  return 0;
}



/* Entry: 105a5ac18; end: 105a5ae37; -[SCSpectaclesKnobsLocationManager startBackgroundEnabledUpdates] */

undefined1 FUN_105a5ac18(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c088380();
  if (lVar1 == 1) {
    puVar2 = PTR_PTR_1126c1818;
    _objc_alloc(PTR_PTR_1126c1818);
    puVar3 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar3);
    func_0x00010bff4e40(*(undefined8 *)PTR__kCLLocationAccuracyBestForNavigation_110349b78,
                        *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68,puVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1347e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    _objc_release(uVar5);
    uVar7 = *(long *)(param_1 + 0x18) != 0;
    if ((bool)uVar7) {
      _objc_initWeak(auStack_38,param_1);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c09f820();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      uVar4 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      _objc_release(uVar6);
      _objc_release(uVar5);
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar3;
      _objc_release(uVar4);
      func_0x00010be557e0(param_1);
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010c248dc0();
      _objc_release(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(puVar2);
  }
  else {
    uVar7 = 2;
  }
  return uVar7;
}



/* Entry: 105a5ae38; end: 105a5aecf;  */

void FUN_105a5ae38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a5aed0; end: 105a5aedf;  */

void FUN_105a5aed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onLocationUpdate_112616e10);
  return;
}



/* Entry: 105a5aee0; end: 105a5af6f; -[SCSpectaclesKnobsLocationManager stopBackgroundEnabledUpdates] */

void FUN_105a5aee0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  func_0x00010be557c0(param_1,param_2,*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf87080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5af70; end: 105a5af93; -[SCSpectaclesKnobsLocationManager _locationUpdatesDeadline] */

double FUN_105a5af70(double param_1,long param_2)

{
  func_0x00010c26f320(*(undefined8 *)(param_2 + 0x30));
  return param_1 + 3600.0;
}



/* Entry: 105a5af94; end: 105a5afdb; -[SCSpectaclesKnobsLocationManager _logLocationUpdatesStarted] */

void FUN_105a5af94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1a30;
  func_0x00010c0872a0(PTR_PTR_1126c1a30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x38),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5afdc; end: 105a5b093; -[SCSpectaclesKnobsLocationManager _logLocationUpdatesEndedWithStartDate:] */

void FUN_105a5afdc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126c1a30;
  func_0x00010c087260(PTR_PTR_1126c1a30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_2 + 0x38),param_3,puVar2,1);
  func_0x00010befc000(param_1 * 1000.0,*(undefined8 *)(param_2 + 0x38),param_3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5b094; end: 105a5b157; -[SCSpectaclesKnobsLocationManager onLocationUpdate] */

void FUN_105a5b094(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar4 = param_1;
  func_0x00010be4f8a0(param_2);
  _objc_release(puVar1);
  if (param_1 < dVar4) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c09ea00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010bfe0320(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ca60(*(undefined8 *)(param_2 + 0x28));
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c255af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stopBackgroundEnabledUpdates_1126730e0);
  return;
}



/* Entry: 105a5b158; end: 105a5b16f; -[SCSpectaclesKnobsLocationManager delegate] */

void FUN_105a5b158(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a5b170; end: 105a5b17b; -[SCSpectaclesKnobsLocationManager setDelegate:] */

void FUN_105a5b170(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105a5b17c; end: 105a5b1ef; -[SCSpectaclesKnobsLocationManager .cxx_destruct] */

void FUN_105a5b17c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105a5b1f0; end: 105a5b263; -[SCSpectaclesKnobsRPCManager initWithConnectionHub:] */

undefined1 * FUN_105a5b1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb738;
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



/* Entry: 105a5b264; end: 105a5b2ab; -[SCSpectaclesKnobsRPCManager getAllKnobs] */

void FUN_105a5b264(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfca300(PTR_PTR_1126b6718,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c15c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendRequest__112634bd8,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 105a5b2ac; end: 105a5b2ff; -[SCSpectaclesKnobsRPCManager updateWithNewLocation:heading:] */

void FUN_105a5b2ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1198e0(PTR_PTR_1126b6718,param_2,0,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5b300; end: 105a5b347; -[SCSpectaclesKnobsRPCManager setBatchUpdates:] */

void FUN_105a5b300(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c16f880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c15c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendRequest__112634bd8,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 105a5b348; end: 105a5b38f; -[SCSpectaclesKnobsRPCManager restartSpectacles] */

void FUN_105a5b348(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf70e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c15c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendRequest__112634bd8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105a5b390; end: 105a5b503; -[SCSpectaclesKnobsRPCManager handleResponse:] */

void FUN_105a5b390(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + 0x10);
  _objc_release();
  if (puVar1 == puVar3) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    puVar3 = param_3;
    func_0x00010c228120();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c248e00();
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(param_1 + 0x18);
    _objc_release();
    if (puVar1 == puVar3) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar2);
      puVar1 = param_3;
      func_0x00010bfdbf00();
      if ((int)puVar1 != 0) {
        func_0x00010c16f8a0(param_3);
      }
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010c248de0();
    }
    else {
      puVar1 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = *(undefined **)(param_1 + 0x20);
      _objc_release();
      if (puVar1 != puVar3) goto LAB_105a5b4f0;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release(uVar2);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010c248e20();
    }
  }
  _objc_release(param_1);
LAB_105a5b4f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a5b504; end: 105a5b50b; -[SCSpectaclesKnobsRPCManager responseMonitorState] */

undefined8 FUN_105a5b504(void)

{
  return 0;
}



/* Entry: 105a5b50c; end: 105a5b523; -[SCSpectaclesKnobsRPCManager delegate] */

void FUN_105a5b50c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a5b524; end: 105a5b52f; -[SCSpectaclesKnobsRPCManager setDelegate:] */

void FUN_105a5b524(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105a5b530; end: 105a5b57f; -[SCSpectaclesKnobsRPCManager .cxx_destruct] */

void FUN_105a5b530(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a5b580; end: 105a5b70f; -[SCSpectaclesKnobsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5b580(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a5b710;
  puStack_68 = &UNK_1108cf918;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1a38;
  _objc_alloc(PTR_PTR_1126c1a38);
  func_0x00010c0212c0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11272e0e8));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a5b710; end: 105a5b797;  */

void FUN_105a5b710(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a5b798; end: 105a5b84f; -[SCSpectaclesKnobsServicesEntryPoint _createRpcManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5b798(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c1a40;
  _objc_alloc(PTR_PTR_1126c1a40);
  lVar4 = (long)_DAT_11272e0ec;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb0c0();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a5b850; end: 105a5b9a7; -[SCSpectaclesKnobsServicesEntryPoint _createLocationManagerWithRpcManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5b850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c1a48;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1 + _DAT_11272e0f0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272e0f4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = param_1 + _DAT_11272e0f8;
    _objc_loadWeakRetained(lVar9);
  }
  func_0x00010c03cac0(puVar1,param_2,uVar2,lVar5,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a5b9a8; end: 105a5ba07; -[SCSpectaclesKnobsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5b9a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e0f0);
  _objc_destroyWeak(param_1 + _DAT_11272e0f4);
  _objc_destroyWeak(param_1 + _DAT_11272e0f8);
  _objc_storeStrong(param_1 + _DAT_11272e0e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e0ec);
  return;
}



/* Entry: 105a5ba08; end: 105a5ba33; +[SCGrapheneKnobLocationMetric knobLocationStart] */

void FUN_105a5ba08(void)

{
  _objc_alloc(PTR_PTR_1126c1a30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a5ba34; end: 105a5ba5f; +[SCGrapheneKnobLocationMetric knobLocationEnd] */

void FUN_105a5ba34(void)

{
  _objc_alloc(PTR_PTR_1126c1a30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a5ba60; end: 105a5baff; -[SCGrapheneKnobLocationMetric description] */

void FUN_105a5ba60(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e19418;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e19418,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126eb740;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105a5bb00; end: 105a5bc4b; -[SCGrapheneRegistry knobLocationGraphene] */

void FUN_105a5bb00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105a5bb88;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1ab0 != -1) {
    func_0x00010002a2fc(0x1136c1ab0,&puStack_48);
  }
  uVar1 = uRam00000001136c1aa8;
  _objc_retain(uRam00000001136c1aa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a5bc4c; end: 105a5bd9b; -[SCSpectaclesLensLaunchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5bc4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272e0fc;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c263860();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272e100);
  puVar4 = PTR_PTR_1126c1a50;
  _objc_alloc(PTR_PTR_1126c1a50);
  func_0x00010c024ca0();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a5bd9c; end: 105a5bddb;  */

void FUN_105a5bd9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a5bddc; end: 105a5bec7; -[SCSpectaclesLensLaunchEntryPoint _createLensLaunchManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5bddc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c1a58;
  _objc_alloc(PTR_PTR_1126c1a58);
  lVar4 = (long)_DAT_11272e0fc;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb0c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befac20();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a5bec8; end: 105a5bf03; -[SCSpectaclesLensLaunchEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5bec8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e0fc);
  return;
}



/* Entry: 105a5bf04; end: 105a5bf93; -[SCSpectaclesLensLaunchManager initWithConnectionHub:] */

undefined1 * FUN_105a5bf04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a5bf94; end: 105a5bfd7; -[SCSpectaclesLensLaunchManager launchLensWithLensId:] */

void FUN_105a5bf94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c08b9c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5bfd8; end: 105a5c093; -[SCSpectaclesLensLaunchManager launchLensWithLensId:completionBlock:] */

void FUN_105a5bfd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c08b9c0(PTR_PTR_1126b6718,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105a5c094;
  puStack_40 = &UNK_1108cf9a8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c15c740(uVar2,param_2,puVar1,&puStack_58);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105a5c094; end: 105a5c0ab;  */

void FUN_105a5c094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a5c0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 105a5c0ac; end: 105a5c15f; -[SCSpectaclesLensLaunchManager syncLensesWithCompletionBlock:] */

void FUN_105a5c0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c266100(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105a5c160;
  puStack_40 = &UNK_1108cf9a8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c15c740(uVar2,param_2,puVar1,&puStack_58);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a5c160; end: 105a5c177;  */

void FUN_105a5c160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a5c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 105a5c178; end: 105a5c24b; -[SCSpectaclesLensLaunchManager handleResponse:] */

void FUN_105a5c178(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c094ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010c094ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c0d9840(uVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a5c24c; end: 105a5c253; -[SCSpectaclesLensLaunchManager responseMonitorState] */

undefined8 FUN_105a5c24c(void)

{
  return 0;
}



/* Entry: 105a5c254; end: 105a5c25b; -[SCSpectaclesLensLaunchManager currentActiveLensId] */

undefined8 FUN_105a5c254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a5c25c; end: 105a5c263; -[SCSpectaclesLensLaunchManager lensLaunchEventObservable] */

undefined8 FUN_105a5c25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a5c264; end: 105a5c29f; -[SCSpectaclesLensLaunchManager .cxx_destruct] */

void FUN_105a5c264(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a5c2a0; end: 105a5c42b; -[SCSpectaclesDeviceLocationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5c2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11272e110;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c262f20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126c1a60;
    _objc_alloc();
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11272e114;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + _DAT_11272e118;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0021c0(puVar4,param_2,lVar5,lVar2,lVar3);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11272e11c);
    *(undefined **)(param_1 + _DAT_11272e11c) = puVar4;
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb0c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + lVar7;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befac20();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105a5c42c; end: 105a5c4d3; -[SCSpectaclesDeviceLocationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5c42c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar4 = (long)_DAT_11272e11c;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_1 + _DAT_11272e110;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e0c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar3);
  }
  puStack_38 = PTR_PTR_1126eb750;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a5c4d4; end: 105a5c527; -[SCSpectaclesDeviceLocationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5c4d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e114);
  _objc_destroyWeak(param_1 + _DAT_11272e118);
  _objc_destroyWeak(param_1 + _DAT_11272e110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e11c,0);
  return;
}



/* Entry: 105a5c528; end: 105a5c617; -[SCSpectaclesLocationProvider initWithConnectionHub:userLocationServices:systemScope:] */

undefined1 *
FUN_105a5c528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb758;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    func_0x00010bec6960(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a5c618; end: 105a5c65f; -[SCSpectaclesLocationProvider dealloc] */

void FUN_105a5c618(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126eb758;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a5c660; end: 105a5c757; -[SCSpectaclesLocationProvider handleResponse:] */

void FUN_105a5c660(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c09f3e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105a5c758; end: 105a5c793;  */

void FUN_105a5c758(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be2b9c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a5c794; end: 105a5c79b; -[SCSpectaclesLocationProvider responseMonitorState] */

undefined8 FUN_105a5c794(void)

{
  return 0;
}



/* Entry: 105a5c79c; end: 105a5c827; -[SCSpectaclesLocationProvider onLocationUpdate:] */

void FUN_105a5c79c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) goto LAB_105a5c814;
  func_0x00010bf6ea80();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x28);
    func_0x00010bf6ea80();
    if (9 < uVar2) {
      lVar1 = *(long *)(param_2 + 0x28);
      func_0x00010bf6ea80();
      if (lVar1 == 0) goto LAB_105a5c814;
      func_0x00010bfe4080(param_4);
      uVar2 = *(ulong *)(param_2 + 0x28);
      func_0x00010bf6ea80();
      if ((double)uVar2 < param_1) goto LAB_105a5c814;
    }
  }
  func_0x00010be8f280(param_2,param_3,param_4);
LAB_105a5c814:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a5c828; end: 105a5c877; -[SCSpectaclesLocationProvider onLocationError:] */

void FUN_105a5c828(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f260(param_1,param_2,1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105a5c878; end: 105a5c99b; -[SCSpectaclesLocationProvider _handleLocationRequest:] */

void FUN_105a5c878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0c1d00();
    dVar3 = 10.0;
    if (uVar2 != 0) {
      dVar3 = (double)uVar2 / 1000.0;
    }
    func_0x00010c0f7fe0(dVar3,uVar1);
    func_0x00010bee7820(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a5c99c; end: 105a5c9eb;  */

void FUN_105a5c99c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) == *(long *)(param_1 + 0x20))) {
    func_0x00010be8f260(lVar1,param_2,4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a5c9ec; end: 105a5cb23; -[SCSpectaclesLocationProvider _validateAuthorization] */

void FUN_105a5c9ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c292d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8200(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  return;
}



/* Entry: 105a5cb24; end: 105a5cb7b;  */

void FUN_105a5cb24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) == *(long *)(param_1 + 0x20))) {
    func_0x00010be26020(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a5cb7c; end: 105a5cbeb; -[SCSpectaclesLocationProvider _handleAuthorizationStatusAvailable:] */

void FUN_105a5cb7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 != 1) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010be26050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAuthorizedStatus_1125671b0);
      return;
    }
  }
  else {
    if (param_3 - 2U < 2) goto LAB_105a5cbd0;
    if (param_3 != 4) {
      return;
    }
  }
  func_0x00010be2cbc0(param_1);
LAB_105a5cbd0:
                    /* WARNING: Could not recover jumptable at 0x00010be2de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePermissionRefused_112569120);
  return;
}



/* Entry: 105a5cbec; end: 105a5cc5f; -[SCSpectaclesLocationProvider _handleAuthorizedStatus] */

void FUN_105a5cbec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07b60();
  _objc_release(lVar1);
  if (lVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be8f270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__replyWithErrorStatus_debugMessa_112581638,1,
               &PTR____CFConstantStringClassReference_110e19478);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeLocationUpdates_11258f440);
  return;
}



/* Entry: 105a5cc60; end: 105a5cdef; -[SCSpectaclesLocationProvider _handleNeedsDevicePermissionPrompt] */

void FUN_105a5cc60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0f9be0();
  if (lVar1 == 0) {
    uVar4 = 2;
    ppuVar5 = (undefined **)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf075a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf07b60();
    _objc_release(lVar2);
    if (lVar1 != 2) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c292d20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(uVar6);
      func_0x00010c135c40(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar6);
      return;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110e19498;
    uVar4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8f270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__replyWithErrorStatus_debugMessa_112581638,uVar4,ppuVar5);
  return;
}



/* Entry: 105a5cdf0; end: 105a5ce37;  */

void FUN_105a5cdf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) == *(long *)(param_1 + 0x20))) {
    func_0x00010bee7820(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a5ce38; end: 105a5ce43; -[SCSpectaclesLocationProvider _handlePermissionRefused] */

void FUN_105a5ce38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__replyWithErrorStatus_debugMessa_112581638,3,0);
  return;
}



/* Entry: 105a5ce44; end: 105a5cf87; -[SCSpectaclesLocationProvider _subscribeAuthorizationStatus] */

void FUN_105a5ce44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x38) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c292d20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105a5cf88; end: 105a5d033;  */

void FUN_105a5cf88(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105a5d034; end: 105a5d077;  */

void FUN_105a5d034(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    func_0x00010be26020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5d078; end: 105a5d2ab; -[SCSpectaclesLocationProvider _subscribeLocationUpdates] */

void FUN_105a5d078(long param_1)

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
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c1347e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar8 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 105a5d2ac; end: 105a5d39b;  */

void FUN_105a5d2ac(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105a5d39c;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105a5d39c; end: 105a5d427;  */

void FUN_105a5d39c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c09f2a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e5000(param_1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5d428; end: 105a5d45f;  */

void FUN_105a5d428(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e4f60(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5d460; end: 105a5d497; -[SCSpectaclesLocationProvider _unsubscribeLocationUpdates] */

void FUN_105a5d460(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a5d498; end: 105a5d4fb; -[SCSpectaclesLocationProvider _replyWithLocation:] */

void FUN_105a5d498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1198c0(PTR_PTR_1126b6718,param_2,0,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 105a5d4fc; end: 105a5d5d7; -[SCSpectaclesLocationProvider _replyWithErrorStatus:debugMessage:] */

void FUN_105a5d4fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b6718;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c09f2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1198c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c15c6e0(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 105a5d5d8; end: 105a5d5ff; -[SCSpectaclesLocationProvider _cleanup] */

void FUN_105a5d5d8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bed21c0();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a5d600; end: 105a5d603; -[SCSpectaclesLocationProvider permissionsManagerWantsToPresentPermissionsPrompt:] */

void FUN_105a5d600(void)

{
  return;
}



/* Entry: 105a5d604; end: 105a5d67b; -[SCSpectaclesLocationProvider .cxx_destruct] */

void FUN_105a5d604(long param_1)

{
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



/* Entry: 105a5d67c; end: 105a5d707; -[SCSpectaclesLostModeManager initWithConnectionHub:] */

undefined1 * FUN_105a5d67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb760;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010befac20(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a5d708; end: 105a5d74b; -[SCSpectaclesLostModeManager enableLostMode] */

void FUN_105a5d708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf90bc0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5d74c; end: 105a5d74f; -[SCSpectaclesLostModeManager handleResponse:] */

void FUN_105a5d74c(void)

{
  return;
}



/* Entry: 105a5d750; end: 105a5d757; -[SCSpectaclesLostModeManager responseMonitorState] */

undefined8 FUN_105a5d750(void)

{
  return 0;
}



/* Entry: 105a5d758; end: 105a5d763; -[SCSpectaclesLostModeManager .cxx_destruct] */

void FUN_105a5d758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a5d764; end: 105a5d8d7; -[SCSpectaclesLostModeServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5d764(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + _DAT_11272e144;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf70e00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126ae720;
  if (lVar4 == 1) {
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272e148);
  puVar5 = PTR_PTR_1126c1a68;
  _objc_alloc(PTR_PTR_1126c1a68);
  func_0x00010c027d00();
  func_0x00010bf9d660(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a5d8d8; end: 105a5d917;  */

void FUN_105a5d8d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a5d918; end: 105a5d993; -[SCSpectaclesLostModeServicesEntryPoint _createLostModeManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5d918(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1a70;
  _objc_alloc(PTR_PTR_1126c1a70);
  param_1 = param_1 + _DAT_11272e144;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a5d994; end: 105a5d9cf; -[SCSpectaclesLostModeServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5d994(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e148,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e144);
  return;
}



/* Entry: 105a5d9d0; end: 105a5dc0f; -[SCSpectaclesCheeriosOTAManager initWithCurrentDevice:deviceActivationService:managingDataFlow:networkConnectivityMonitor:firmwareUpdateClient:otaPackageFetcher:spectaclesManager:devicePreferences:] */

undefined1 *
FUN_105a5d9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
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
  puStack_68 = PTR_PTR_1126eb768;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_9);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x90) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar3 = PTR_PTR_1126c1838;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined **)((long)puVar1 + 0xb0) = puVar3;
    _objc_release(uVar2);
    func_0x00010c266240(puVar1);
    func_0x00010beae6c0(puVar1);
    func_0x00010beac060(puVar1);
    func_0x00010bec1460(puVar1);
    puVar4 = (undefined1 *)((long)puVar1 + 0x28);
    _objc_loadWeakRetained(puVar4);
    func_0x00010bef9980();
    _objc_release(puVar4);
  }
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



/* Entry: 105a5dc10; end: 105a5dd3b; -[SCSpectaclesCheeriosOTAManager syncOTAUpdateState] */

void FUN_105a5dc10(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf48920();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR_PTR_1126c1a78;
    _objc_alloc(PTR_PTR_1126c1a78);
    func_0x00010c04c2c0();
    func_0x00010bea5fc0(param_1);
  }
  else {
    lVar4 = param_1;
    func_0x00010bdd9e60();
    if ((int)lVar4 != 0) {
      puVar5 = PTR_PTR_1126c1a78;
      _objc_alloc(PTR_PTR_1126c1a78);
      func_0x00010c04c2c0();
      func_0x00010bea5fc0(param_1);
      _objc_release(puVar5);
      lVar4 = param_1;
      func_0x00010bdf7740();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x88);
      *(long *)(param_1 + 0x88) = lVar4;
      _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bddd950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkForUpdate_112554ff0);
      return;
    }
    puVar5 = *(undefined **)(param_1 + 0x80);
    if (puVar5 == (undefined *)0x0) {
      return;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf51e00();
    func_0x00010c0d9840(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105a5dd3c; end: 105a5ddd7; -[SCSpectaclesCheeriosOTAManager updateOTA] */

void FUN_105a5dd3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdd9ea0();
  if ((int)lVar1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010c252d60();
    if (lVar1 != 10) {
                    /* WARNING: Could not recover jumptable at 0x00010c266270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_syncOTAUpdateState_1126772c0);
      return;
    }
  }
  lVar1 = param_1;
  func_0x00010be3ff00();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleOTAUpdateErrorType__112568de0,lVar1)
    ;
    return;
  }
  func_0x00010be19180(param_1);
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bec2010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startUpload_11258e1a8);
  return;
}



/* Entry: 105a5ddd8; end: 105a5ddff; -[SCSpectaclesCheeriosOTAManager updatingOTA] */

bool FUN_105a5ddd8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x80);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010c252d60();
    bVar1 = lVar2 - 5U < 4;
  }
  return bVar1;
}


