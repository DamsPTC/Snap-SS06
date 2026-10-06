/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051a5cc8; end: 1051a5ce7; -[SCBloopsSettingsPolicyViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a5cc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271e788);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a5ce8; end: 1051a5cfb; -[SCBloopsSettingsPolicyViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a5ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271e788,param_3);
  return;
}



/* Entry: 1051a5cfc; end: 1051a5d67; -[SCBloopsSettingsPolicyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a5cfc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e788);
  _objc_storeStrong(param_1 + _DAT_11271e770,0);
  _objc_storeStrong(param_1 + _DAT_11271e77c,0);
  _objc_storeStrong(param_1 + _DAT_11271e774,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e784,0);
  return;
}



/* Entry: 1051a5d68; end: 1051a5fbf; -[SCCameraLensObserverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a5d68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar8 = (long)_DAT_11271e78c;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1051a5fc0;
  puStack_88 = &UNK_110842a38;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar6 = lVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271e790);
  *(long *)(param_1 + _DAT_11271e790) = lVar6;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar1 = lVar8;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar5 = lVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271e794);
  *(long *)(param_1 + _DAT_11271e794) = lVar5;
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1051a5fc0; end: 1051a601f;  */

void FUN_1051a5fc0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be682a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a6020; end: 1051a6067;  */

void FUN_1051a6020(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a6068; end: 1051a60cf; -[SCCameraLensObserverEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a6068(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11271e790));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11271e794));
  puStack_28 = PTR_PTR_1126e6ae8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a60d0; end: 1051a6143; -[SCCameraLensObserverEntryPoint _onCarouselEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a60d0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11271e798;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c29b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098480();
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1051a6144; end: 1051a61ff; -[SCCameraLensObserverEntryPoint _onLensActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a6144(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11271e798;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c29b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0969e0(lVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051a6200; end: 1051a626f; -[SCCameraLensObserverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a6200(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e78c);
  _objc_destroyWeak(param_1 + _DAT_11271e798);
  _objc_destroyWeak(param_1 + _DAT_11271e7a0);
  _objc_destroyWeak(param_1 + _DAT_11271e79c);
  _objc_storeStrong(param_1 + _DAT_11271e794,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e790,0);
  return;
}



/* Entry: 1051a6270; end: 1051a6333; -[SCCameraAEAFLensURIHandlerImpl initWithCameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:] */

undefined1 *
FUN_1051a6270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6af0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a6334; end: 1051a6367; -[SCCameraAEAFLensURIHandlerImpl dealloc] */

void FUN_1051a6334(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6af0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1051a6368; end: 1051a651f; -[SCCameraAEAFLensURIHandlerImpl handleWithRequest:completion:] */

void FUN_1051a6368(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar1 = param_3;
      func_0x00010c069c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar1);
      _objc_release(uVar1);
    }
    else {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010c11dfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(lVar4);
      _objc_release(lVar4);
      _objc_release(param_1);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a6520; end: 1051a65df;  */

void FUN_1051a6520(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bdc9320();
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b1ce0;
  _objc_alloc(PTR_PTR_1126b1ce0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c059e80(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1051a65e0; end: 1051a65e3; -[SCCameraAEAFLensURIHandlerImpl reset] */

void FUN_1051a65e0(void)

{
  return;
}



/* Entry: 1051a65e4; end: 1051a66c7; -[SCCameraAEAFLensURIHandlerImpl _getPointFromRequest:] */

undefined1  [16]
FUN_1051a65e4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110db4498);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar3 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110db4498);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0e00e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110dbf2b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  auVar4._8_8_ = 1.0 - param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 1051a66c8; end: 1051a6873; -[SCCameraAEAFLensURIHandlerImpl _adjustExposureBasedOnPoint:] */

void FUN_1051a66c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf70d80();
  uVar7 = uVar2;
  func_0x00010c070840(uVar2,param_4,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if ((int)uVar7 != 0) {
    uVar2 = param_5;
    func_0x00010bf1e9c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900(puVar6,param_4,uVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010be21880(param_3,param_4,puVar6);
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf9d820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199080(param_1,param_2);
    _objc_release(uVar2);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bfb35a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d300(param_1,param_2);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1051a6874; end: 1051a68ab; -[SCCameraAEAFLensURIHandlerImpl .cxx_destruct] */

void FUN_1051a6874(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1051a68ac; end: 1051a694f; -[SCCameraLightingConditionLensURIHandlerImpl initWithCameraHardwareResource:deviceCapacityAnalyzer:] */

undefined1 *
FUN_1051a68ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6af8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a6950; end: 1051a6bb7; -[SCCameraLightingConditionLensURIHandlerImpl handleWithRequest:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001051a6a94) */

void FUN_1051a6950(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)puVar3 == 0) {
      puVar2 = param_3;
      func_0x00010c069c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar2);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c088420();
      func_0x00010bddecc0(param_1);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar4);
      puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b1ce0;
      _objc_alloc(PTR_PTR_1126b1ce0);
      puVar5 = param_3;
      func_0x00010c28f280(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010c059e80(puVar3);
      (**(code **)(param_4 + 0x10))(param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 1051a6bb8; end: 1051a6bbb; -[SCCameraLightingConditionLensURIHandlerImpl reset] */

void FUN_1051a6bb8(void)

{
  return;
}



/* Entry: 1051a6bbc; end: 1051a6bcf; -[SCCameraLightingConditionLensURIHandlerImpl _clampBrightness:] */

undefined8 FUN_1051a6bbc(double param_1)

{
  undefined8 uVar1;
  
  if (param_1 <= -10.0) {
    param_1 = -10.0;
  }
  uVar1 = NEON_fminnm(param_1,0x4024000000000000);
  return uVar1;
}



/* Entry: 1051a6bd0; end: 1051a6bff; -[SCCameraLightingConditionLensURIHandlerImpl .cxx_destruct] */

void FUN_1051a6bd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051a6c00; end: 1051a6d17; -[SCCameraMultiCamLensUriHandler initWithMultiCamModeFeature:cameraHardwareResource:] */

undefined1 *
FUN_1051a6c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e6b00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf318a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c252440(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    uVar5 = param_4;
    func_0x00010c0b7ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a6d18; end: 1051a6d63; -[SCCameraMultiCamLensUriHandler dealloc] */

void FUN_1051a6d18(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec33e0();
  func_0x00010c256420(param_1);
  puStack_28 = PTR_PTR_1126e6b00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1051a6d64; end: 1051a6f1f; -[SCCameraMultiCamLensUriHandler handleWithRequest:completion:] */

void FUN_1051a6d64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar1 = param_3;
      func_0x00010c069c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar1);
      _objc_release(uVar1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c08cf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      uVar1 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a6f20; end: 1051a6f83;  */

void FUN_1051a6f20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067ec0(param_2);
  _objc_release(param_2);
  func_0x00010bde5f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a6f84; end: 1051a6f87; -[SCCameraMultiCamLensUriHandler reset] */

void FUN_1051a6f84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec33f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopObservingLayout_11258e6a0);
  return;
}



/* Entry: 1051a6f88; end: 1051a711b; -[SCCameraMultiCamLensUriHandler startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_1051a6f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a711c; end: 1051a71bf;  */

void FUN_1051a711c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1051a71c0; end: 1051a71f3;  */

void FUN_1051a71c0(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec33e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a71f4; end: 1051a721f; -[SCCameraMultiCamLensUriHandler stopObservingCapturerStateUpdate] */

void FUN_1051a71f4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051a7220; end: 1051a724b; -[SCCameraMultiCamLensUriHandler _stopObservingLayout] */

void FUN_1051a7220(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051a724c; end: 1051a7417; -[SCCameraMultiCamLensUriHandler _configureWithNewLayout:request:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001051a7310) */
/* WARNING: Removing unreachable block (ram,0x0001051a7314) */

undefined **
FUN_1051a724c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be23a20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar3 = puVar1;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  iVar6 = (int)puVar3;
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    puVar3 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    ppuVar4 = param_4;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppuVar7 = ppuVar4;
    func_0x00010c059e80(puVar3);
    iVar6 = (int)ppuVar7;
    (**(code **)(param_5 + 0x10))(param_5,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (4 < iVar6 - 1U) {
      return &PTR____CFConstantStringClassReference_110dc9af8;
    }
    return (undefined **)(&PTR_PTR_11086e420)[iVar6 - 1U];
  }
  return param_4;
}



/* Entry: 1051a7418; end: 1051a743f; -[SCCameraMultiCamLensUriHandler _getUriResponseValueFromLayout:] */

undefined ** FUN_1051a7418(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_11086e420)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dc9af8;
}



/* Entry: 1051a7440; end: 1051a747b; -[SCCameraMultiCamLensUriHandler .cxx_destruct] */

void FUN_1051a7440(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051a747c; end: 1051a74ef; -[SCCameraRemixCamLensUriHandler initWithRemixCamModeFeature:] */

undefined1 * FUN_1051a747c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6b08;
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



/* Entry: 1051a74f0; end: 1051a7533; -[SCCameraRemixCamLensUriHandler dealloc] */

void FUN_1051a74f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec33e0();
  puStack_28 = PTR_PTR_1126e6b08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1051a7534; end: 1051a76ef; -[SCCameraRemixCamLensUriHandler handleWithRequest:completion:] */

void FUN_1051a7534(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar1 = param_3;
      func_0x00010c069c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar1);
      _objc_release(uVar1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c08cf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      uVar1 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a76f0; end: 1051a7753;  */

void FUN_1051a76f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067ec0(param_2);
  _objc_release(param_2);
  func_0x00010bde5f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a7754; end: 1051a7757; -[SCCameraRemixCamLensUriHandler reset] */

void FUN_1051a7754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec33f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopObservingLayout_11258e6a0);
  return;
}



/* Entry: 1051a7758; end: 1051a7783; -[SCCameraRemixCamLensUriHandler _stopObservingLayout] */

void FUN_1051a7758(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051a7784; end: 1051a794f; -[SCCameraRemixCamLensUriHandler _configureWithNewLayout:request:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001051a7848) */
/* WARNING: Removing unreachable block (ram,0x0001051a784c) */

undefined **
FUN_1051a7784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be23a20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar3 = puVar1;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  iVar6 = (int)puVar3;
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    puVar3 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    ppuVar4 = param_4;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppuVar7 = ppuVar4;
    func_0x00010c059e80(puVar3);
    iVar6 = (int)ppuVar7;
    (**(code **)(param_5 + 0x10))(param_5,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (4 < iVar6 - 1U) {
      return &PTR____CFConstantStringClassReference_110dc9af8;
    }
    return (undefined **)(&PTR_PTR_11086e448)[iVar6 - 1U];
  }
  return param_4;
}



/* Entry: 1051a7950; end: 1051a7977; -[SCCameraRemixCamLensUriHandler _getUriResponseValueFromLayout:] */

undefined ** FUN_1051a7950(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_11086e448)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dc9af8;
}



/* Entry: 1051a7978; end: 1051a79a7; -[SCCameraRemixCamLensUriHandler .cxx_destruct] */

void FUN_1051a7978(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051a79a8; end: 1051a7a9b; -[SCCameraLensUriHandlerV2EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a79a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271e7e0;
    _objc_loadWeakRetained(lVar1);
  }
  lVar2 = lVar1;
  func_0x00010bf29780(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051a7a9c; end: 1051a7b13;  */

void FUN_1051a7a9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c11a2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be89740(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a7b14; end: 1051a7b67; -[SCCameraLensUriHandlerV2EntryPoint _registerHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a7b14(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_storeWeak(param_1 + _DAT_11271e7cc,param_3);
    func_0x00010be896a0(param_1);
    func_0x00010be896c0(param_1);
    func_0x00010be89700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be896f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerHandlerForRemixCam_11257ff58);
    return;
  }
  return;
}



/* Entry: 1051a7b68; end: 1051a7cab; -[SCCameraLensUriHandlerV2EntryPoint _registerHandlerForLightingCondition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a7b68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b5a20;
  _objc_alloc(PTR_PTR_1126b5a20);
  lVar7 = (long)_DAT_11271e7d0;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar5 = lVar7;
  func_0x00010bf6ffe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb480(puVar1,param_2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  FUN_1051a7cac(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c28f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051a7cac; end: 1051a7ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a7cac(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271e7dc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a7cd0; end: 1051a7edb; -[SCCameraLensUriHandlerV2EntryPoint _registerHandlerForMultiCam] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a7cd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11271e7d4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar7;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d1c60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c078040();
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126b5a28;
    _objc_alloc(PTR_PTR_1126b5a28);
    lVar7 = param_1 + _DAT_11271e7cc;
    _objc_loadWeakRetained(lVar7);
    lVar1 = lVar7;
    func_0x00010c0d1c40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1 + _DAT_11271e7d0;
      _objc_loadWeakRetained(lVar8);
    }
    lVar3 = lVar8;
    func_0x00010bf29960(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02ca00(puVar4,param_2,lVar2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar7);
    puVar6 = PTR_PTR_1126b1cb0;
    _objc_alloc(PTR_PTR_1126b1cb0);
    func_0x00010c0199e0();
    FUN_1051a7cac(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c28f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1051a7edc; end: 1051a8437; -[SCCameraLensUriHandlerV2EntryPoint _registerHandlerForSelfieSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a7edc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_11271e7d4;
  puVar15 = (undefined *)(param_1 + lVar16);
  _objc_loadWeakRetained();
  puVar1 = puVar15;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c15b060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010c071800();
  if ((int)puVar14 == 0) {
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar15);
      return;
    }
  }
  else {
    lVar13 = (long)_DAT_11271e7cc;
    lVar4 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c15b000();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c072ba0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    if ((int)lVar7 != 0) {
      lVar16 = param_1 + lVar16;
      _objc_loadWeakRetained();
      lVar4 = lVar16;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c15b060();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c06b2a0();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar16);
      if ((int)lVar7 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        lVar16 = param_1;
        FUN_1051a8438();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = (undefined *)0x0;
        if (lVar16 != 0) {
          lVar4 = param_1;
          func_0x0001051a845c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar16);
          if (lVar4 == 0) {
            puVar15 = (undefined *)0x0;
          }
          else {
            puVar15 = PTR_PTR_1126b5a30;
            _objc_alloc();
            lVar4 = param_1;
            FUN_1051a8438();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c095e80();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = param_1;
            func_0x0001051a845c(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c0f6ba0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = param_1 + lVar13;
            _objc_loadWeakRetained(lVar16);
            lVar10 = lVar16;
            func_0x00010c15b000();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010bfa1820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0253a0(puVar15,param_2,lVar6,lVar9,lVar11);
            _objc_release(lVar11);
            _objc_release(lVar10);
            _objc_release(lVar16);
            _objc_release(lVar9);
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
          }
        }
      }
      puVar2 = PTR_PTR_1126b5a38;
      _objc_alloc(PTR_PTR_1126b5a38);
      lVar13 = param_1 + lVar13;
      _objc_loadWeakRetained(lVar13);
      lVar16 = lVar13;
      func_0x00010c15b000();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar16;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0441e0(puVar2,param_2,lVar4,puVar15);
      _objc_release(lVar4);
      _objc_release(lVar16);
      _objc_release(lVar13);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110dc9bf8;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110dc9c18;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110dc9c38;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dc9c78;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_90,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar15 != (undefined *)0x0) {
        func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc9c58);
      }
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      _objc_retain(puVar1);
      puVar3 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_150,auStack_110,0x10);
      if (puVar3 != (undefined *)0x0) {
        lVar16 = *plStack_140;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_140 != lVar16) {
              _objc_enumerationMutation(puVar1);
            }
            puVar12 = PTR_PTR_1126b1cb0;
            _objc_alloc(PTR_PTR_1126b1cb0);
            func_0x00010c0199e0();
            lVar4 = param_1;
            FUN_1051a7cac(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar4;
            func_0x00010c28f2a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c125b60();
            _objc_release(lVar13);
            _objc_release(lVar4);
            _objc_release(puVar12);
            puVar14 = puVar14 + 1;
          } while (puVar3 != puVar14);
          puVar3 = puVar1;
          func_0x00010bf52a60(puVar1,param_2,&uStack_150,auStack_110,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release();
    }
    puVar1 = puVar15;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  ___stack_chk_fail();
  if (puVar1 != (undefined *)0x0) {
    _objc_loadWeakRetained(puVar1 + _DAT_11271e7e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a8438; end: 1051a847f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a8438(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271e7e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a8480; end: 1051a85e3; -[SCCameraLensUriHandlerV2EntryPoint _registerHandlerForRemixCam] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a8480(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271e7cc;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1295e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b5a40;
    _objc_alloc(PTR_PTR_1126b5a40);
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar1 = lVar6;
    func_0x00010c1295e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ddc0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
    puVar5 = PTR_PTR_1126b1cb0;
    _objc_alloc(PTR_PTR_1126b1cb0);
    func_0x00010c0199e0();
    FUN_1051a7cac(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c28f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1051a85e4; end: 1051a8663; -[SCCameraLensUriHandlerV2EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a85e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e7e8);
  _objc_destroyWeak(param_1 + _DAT_11271e7e4);
  _objc_destroyWeak(param_1 + _DAT_11271e7d4);
  _objc_destroyWeak(param_1 + _DAT_11271e7d0);
  _objc_destroyWeak(param_1 + _DAT_11271e7e0);
  _objc_destroyWeak(param_1 + _DAT_11271e7dc);
  _objc_destroyWeak(param_1 + _DAT_11271e7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e7cc);
  return;
}



/* Entry: 1051a8664; end: 1051a8727; -[SCCameraSelfieSettingsAutoPaywallGate initWithLensPlusTierService:paywallPresenter:selfieSettingsFeature:] */

undefined1 *
FUN_1051a8664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6b10;
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



/* Entry: 1051a8728; end: 1051a87cf; -[SCCameraSelfieSettingsAutoPaywallGate handleAutoTap] */

void FUN_1051a8728(undefined8 param_1)

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
  pcStack_40 = FUN_1051a87d0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1051a87d0; end: 1051a882f;  */

void FUN_1051a87d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c076660(uVar1,param_2,1);
    if ((uVar1 & 1) == 0) {
      lVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c27bd00();
      _objc_release(lVar2);
    }
    else {
      func_0x00010be7d2a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a8830; end: 1051a891f; -[SCCameraSelfieSettingsAutoPaywallGate _presentPaywall] */

void FUN_1051a8830(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c10d7a0(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1051a8920; end: 1051a897b;  */

void FUN_1051a8920(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    if (param_2 == 0) {
      func_0x00010bf2df00();
    }
    else {
      func_0x00010c27bd00();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a897c; end: 1051a89b3; -[SCCameraSelfieSettingsAutoPaywallGate .cxx_destruct] */

void FUN_1051a897c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051a89b4; end: 1051a89bb; -[SCCameraSelfieSettingsUriHandler initWithSelfieSettingsFeature:] */

void FUN_1051a89b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0441f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSelfieSettingsFeature_au_1125eea78,param_3,0);
  return;
}



/* Entry: 1051a89bc; end: 1051a8a57; -[SCCameraSelfieSettingsUriHandler initWithSelfieSettingsFeature:autoPaywallGate:] */

undefined1 *
FUN_1051a89bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6b18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a8a58; end: 1051a8a9b; -[SCCameraSelfieSettingsUriHandler dealloc] */

void FUN_1051a8a58(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec3540();
  puStack_28 = PTR_PTR_1126e6b18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1051a8a9c; end: 1051a8be3; -[SCCameraSelfieSettingsUriHandler handleWithRequest:completion:] */

void FUN_1051a8a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc9cb8);
  if ((int)uVar1 == 0) {
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc9ab8);
    if ((int)uVar1 == 0) {
      uVar1 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc9cd8);
      if ((int)uVar1 == 0) {
        uVar1 = uVar2;
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc9d18);
        if ((int)uVar1 == 0) {
          uVar1 = uVar2;
          func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc9cf8);
          if ((int)uVar1 != 0) {
            func_0x00010be26200(param_1,param_2,param_3,param_4);
          }
        }
        else {
          func_0x00010be27b40(param_1,param_2,param_3,param_4);
        }
      }
      else {
        func_0x00010be25c80(param_1,param_2,param_3,param_4);
      }
    }
    else {
      func_0x00010be25840(param_1,param_2,param_3,param_4);
    }
  }
  else {
    func_0x00010be25ca0(param_1,param_2,param_3,param_4);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051a8be4; end: 1051a8dff; -[SCCameraSelfieSettingsUriHandler _handleApplyAutoRequest:completion:] */

void FUN_1051a8be4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c15b020();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1051a8e00;
    puStack_88 = &UNK_11086e390;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_4);
    lVar3 = lVar2;
    lStack_78 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c15b040();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar3 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a8e00; end: 1051a8e53;  */

void FUN_1051a8e00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcdb20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a8e54; end: 1051a8e8b;  */

void FUN_1051a8e54(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a8e8c; end: 1051a9077; -[SCCameraSelfieSettingsUriHandler _handleApplySettingsRequest:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001051a8f04) */
/* WARNING: Removing unreachable block (ram,0x0001051a8f08) */

void FUN_1051a8e8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be70360(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = lVar2;
  func_0x00010c296f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(lVar3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  puVar5 = PTR_PTR_1126b5a48;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf088a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1640(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  if (param_4 != 0) {
    puVar5 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar1 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c059e80(puVar5);
    (**(code **)(param_4 + 0x10))(param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a9078; end: 1051a9253; -[SCCameraSelfieSettingsUriHandler _handleCtaClickRequest:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001051a90f4) */
/* WARNING: Removing unreachable block (ram,0x0001051a90f8) */

void FUN_1051a9078(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be70360(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = lVar2;
  func_0x00010c296f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  puVar5 = PTR_PTR_1126b5a48;
  func_0x00010bf5d200(PTR_PTR_1126b5a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1640(param_1);
  _objc_release(puVar5);
  _objc_release(param_1);
  if (param_4 != 0) {
    puVar5 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar1 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c059e80(puVar5);
    (**(code **)(param_4 + 0x10))(param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(uVar1);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a9254; end: 1051a93a7; -[SCCameraSelfieSettingsUriHandler _handleAdjustmentRequest:completion:] */

void FUN_1051a9254(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c15b080();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar3 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a93a8; end: 1051a93fb;  */

void FUN_1051a93a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedab40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a93fc; end: 1051a940f; -[SCCameraSelfieSettingsUriHandler _parseLensRequestBody:error:] */

void FUN_1051a93fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,
             PTR_s_JSONObjectWithData_options_error_11254dfe0,param_3,0,param_4);
  return;
}



/* Entry: 1051a9410; end: 1051a9413; -[SCCameraSelfieSettingsUriHandler reset] */

void FUN_1051a9410(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopObservingSelfieSettingsEven_11258e6f8);
  return;
}



/* Entry: 1051a9414; end: 1051a94ef; -[SCCameraSelfieSettingsUriHandler _handleAutoTapRequest:completion:] */

void FUN_1051a9414(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1ce0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c059e80(puVar1);
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd0490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_handleAutoTap_1125d1ac8);
  return;
}



/* Entry: 1051a94f0; end: 1051a9543; -[SCCameraSelfieSettingsUriHandler _stopObservingSelfieSettingsEvent] */

void FUN_1051a94f0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051a9544; end: 1051a95af; -[SCCameraSelfieSettingsUriHandler _applyAutoWithEvent:request:completion:] */

void FUN_1051a9544(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf1f3c0();
  if (param_3 != 0) {
    func_0x00010be95160(param_1,param_2,1,param_4,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051a95b0; end: 1051a977f; -[SCCameraSelfieSettingsUriHandler _respondWithApplyAuto:request:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001051a99b8) */
/* WARNING: Removing unreachable block (ram,0x0001051a99bc) */

void FUN_1051a95b0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *in_x3;
  undefined8 uVar8;
  long in_x4;
  long *plVar9;
  ulong uVar10;
  long lStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  plVar9 = &lStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dc9db8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lStack_70 = 0;
  uVar8 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar7 = puVar2;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = in_x3;
  if (lStack_70 == 0) {
    if (in_x4 == 0) goto LAB_1051a9728;
    puVar3 = PTR_PTR_1126b1ce0;
    _objc_alloc();
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar8 = 200;
    plVar9 = (long *)0x0;
    puVar7 = puVar4;
    func_0x00010c059e80();
    (**(code **)(in_x4 + 0x10))(in_x4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  else {
    if (in_x4 == 0) goto LAB_1051a9728;
    func_0x00010c069c60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x4 + 0x10))(in_x4,puVar4);
  }
  _objc_release(puVar4);
LAB_1051a9728:
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(in_x4);
  _objc_release(in_x3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    _objc_retain(uVar8);
    _objc_retain(plVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010c23aa80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = puVar7;
      func_0x00010c23aa80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1d0560(puVar1);
      _objc_release(puVar2);
    }
    puVar2 = puVar7;
    func_0x00010c14ad60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = puVar7;
      func_0x00010c14ad60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1d0560(puVar1);
      _objc_release(puVar2);
    }
    puVar2 = puVar7;
    func_0x00010c2746e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bf885a0();
      uVar10 = param_1 & 0x7fffffffffffffff;
      _objc_release(puVar2);
      if (uVar10 < 0x7ff0000000000000) {
        puVar2 = puVar7;
        func_0x00010c2746e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1);
        _objc_release(puVar2);
      }
    }
    puVar2 = puVar7;
    func_0x00010bf20340();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bf885a0();
      _objc_release(puVar2);
      if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
        puVar2 = puVar7;
        func_0x00010bf20340(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1);
        _objc_release(puVar2);
      }
    }
    puVar2 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
      if (plVar9 != (long *)0x0) {
        puVar4 = PTR_PTR_1126b1ce0;
        _objc_alloc(PTR_PTR_1126b1ce0);
        uVar6 = uVar8;
        func_0x00010c28f280(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        func_0x00010c059e80(puVar4);
        (**(code **)((long)plVar9 + 0x10))(plVar9,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(uVar6);
      }
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_release(plVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    return;
  }
  return;
}



/* Entry: 1051a9780; end: 1051a9aa7; -[SCCameraSelfieSettingsUriHandler _updateLensWithEvent:request:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001051a99b8) */
/* WARNING: Removing unreachable block (ram,0x0001051a99bc) */

void FUN_1051a9780(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c23aa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c23aa80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1d0560(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c14ad60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c14ad60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1d0560(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c2746e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bf885a0();
    uVar7 = param_1 & 0x7fffffffffffffff;
    _objc_release(lVar2);
    if (uVar7 < 0x7ff0000000000000) {
      lVar2 = param_4;
      func_0x00010c2746e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1);
      _objc_release(lVar2);
    }
  }
  lVar2 = param_4;
  func_0x00010bf20340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bf885a0();
    _objc_release(lVar2);
    if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      lVar2 = param_4;
      func_0x00010bf20340(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1);
      _objc_release(lVar2);
    }
  }
  puVar3 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 != 0) {
      puVar4 = PTR_PTR_1126b1ce0;
      _objc_alloc(PTR_PTR_1126b1ce0);
      uVar5 = param_5;
      func_0x00010c28f280(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010c059e80(puVar4);
      (**(code **)(param_6 + 0x10))(param_6,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(uVar5);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1051a9aa8; end: 1051a9af7; -[SCCameraSelfieSettingsUriHandler .cxx_destruct] */

void FUN_1051a9aa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1051a9af8; end: 1051aa44b; -[SCDirectorModeCaptureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a9af8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  
  lVar71 = (long)_DAT_11271e80c;
  lVar1 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5a50;
  func_0x00010bfb5340(PTR_PTR_1126b5a50);
  lVar77 = (long)_DAT_11271e810;
  lVar5 = param_1 + lVar77;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf70fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c250580(lVar3,param_2,puVar4,lVar6,puVar7,&PTR___NSConcreteGlobalBlock_11086e4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271e814;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf2a5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c119b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271e818;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c2bd460();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = (long)_DAT_11271e81c;
  lVar5 = param_1 + lVar74;
  _objc_loadWeakRetained();
  lVar12 = lVar5;
  func_0x00010bf2bbc0();
  lVar2 = param_1 + _DAT_11271e820;
  _objc_loadWeakRetained();
  lVar13 = lVar2;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11271e824;
  _objc_loadWeakRetained();
  lVar77 = param_1 + lVar77;
  _objc_loadWeakRetained();
  lVar14 = lVar77;
  func_0x00010bf70fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271e828;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_11271e82c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf06400();
  _objc_retainAutoreleasedReturnValue();
  uVar73 = *(undefined8 *)(param_1 + _DAT_11271e830);
  uVar72 = *(undefined8 *)(param_1 + _DAT_11271e834);
  lVar17 = param_1 + _DAT_11271e838;
  _objc_loadWeakRetained();
  lVar18 = param_1 + _DAT_11271e83c;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11271e840;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11271e844;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11271e848;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c29f260();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = (long)_DAT_11271e84c;
  lVar27 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf29c20();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar29 = lVar76;
  func_0x00010bf29be0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11271e850;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11271e854;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c258780();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010c08d8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_11271e858;
  _objc_loadWeakRetained();
  lVar36 = param_1 + _DAT_11271e85c;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010bf29180();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_11271e860;
  _objc_loadWeakRetained();
  lVar39 = param_1 + _DAT_11271e864;
  _objc_loadWeakRetained();
  lVar40 = param_1 + _DAT_11271e868;
  _objc_loadWeakRetained();
  lVar41 = param_1 + _DAT_11271e86c;
  _objc_loadWeakRetained();
  lVar42 = param_1 + _DAT_11271e870;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_11271e874;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_11271e878;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11271e87c;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_11271e880;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11271e884;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_11271e888;
  _objc_loadWeakRetained();
  lVar74 = param_1 + lVar74;
  _objc_loadWeakRetained();
  lVar75 = (long)_DAT_11271e88c;
  lVar55 = param_1 + lVar75;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c12f720();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + lVar75;
  _objc_loadWeakRetained();
  lVar57 = lVar75;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_11271e890;
  _objc_loadWeakRetained();
  lVar59 = param_1 + _DAT_11271e894;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + _DAT_11271e8a0;
  _objc_loadWeakRetained();
  lVar62 = lVar61;
  func_0x00010c2522e0();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = lVar62;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1;
  FUN_1051aa450();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = lVar64;
  func_0x00010c0f9c20();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1 + _DAT_11271e8b0;
  _objc_loadWeakRetained();
  lVar67 = lVar66;
  func_0x00010c095e80();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_1;
  FUN_1051aa450();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar68;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271e8ac;
  _objc_loadWeakRetained();
  lVar70 = param_1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf192e0(lVar11,param_2,lVar9,lVar12,lVar13,lVar71,lVar3,lVar14,lVar6,lVar16,uVar73,
                      uVar72,lVar17,lVar19,lVar21,lVar23,lVar26,lVar28,lVar29,lVar31,lVar34,lVar35,
                      lVar37,lVar38,lVar39,lVar40,lVar41,lVar43,lVar45,lVar47,lVar49,lVar51,lVar53,
                      lVar54,lVar74,lVar56,lVar57,lVar58,lVar60,lVar63,lVar65,lVar67,lVar69,lVar70);
  _objc_release(lVar70);
  _objc_release(param_1);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar75);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar74);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar76);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar77);
  _objc_release(lVar3);
  _objc_release(lVar71);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 1051aa44c; end: 1051aa44f;  */

void FUN_1051aa44c(void)

{
  return;
}



/* Entry: 1051aa450; end: 1051aa473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aa450(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271e8a4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051aa474; end: 1051aa693; -[SCDirectorModeCaptureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aa474(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e8b0);
  _objc_destroyWeak(param_1 + _DAT_11271e8ac);
  _objc_destroyWeak(param_1 + _DAT_11271e838);
  _objc_storeStrong(param_1 + _DAT_11271e834,0);
  _objc_storeStrong(param_1 + _DAT_11271e830,0);
  _objc_destroyWeak(param_1 + _DAT_11271e8a8);
  _objc_destroyWeak(param_1 + _DAT_11271e8a4);
  _objc_destroyWeak(param_1 + _DAT_11271e824);
  _objc_destroyWeak(param_1 + _DAT_11271e828);
  _objc_destroyWeak(param_1 + _DAT_11271e814);
  _objc_destroyWeak(param_1 + _DAT_11271e888);
  _objc_destroyWeak(param_1 + _DAT_11271e844);
  _objc_destroyWeak(param_1 + _DAT_11271e854);
  _objc_destroyWeak(param_1 + _DAT_11271e894);
  _objc_destroyWeak(param_1 + _DAT_11271e8a0);
  _objc_destroyWeak(param_1 + _DAT_11271e86c);
  _objc_destroyWeak(param_1 + _DAT_11271e884);
  _objc_destroyWeak(param_1 + _DAT_11271e880);
  _objc_destroyWeak(param_1 + _DAT_11271e87c);
  _objc_destroyWeak(param_1 + _DAT_11271e878);
  _objc_destroyWeak(param_1 + _DAT_11271e874);
  _objc_destroyWeak(param_1 + _DAT_11271e870);
  _objc_destroyWeak(param_1 + _DAT_11271e868);
  _objc_destroyWeak(param_1 + _DAT_11271e864);
  _objc_destroyWeak(param_1 + _DAT_11271e860);
  _objc_destroyWeak(param_1 + _DAT_11271e85c);
  _objc_destroyWeak(param_1 + _DAT_11271e858);
  _objc_destroyWeak(param_1 + _DAT_11271e850);
  _objc_destroyWeak(param_1 + _DAT_11271e84c);
  _objc_destroyWeak(param_1 + _DAT_11271e890);
  _objc_destroyWeak(param_1 + _DAT_11271e848);
  _objc_destroyWeak(param_1 + _DAT_11271e840);
  _objc_destroyWeak(param_1 + _DAT_11271e83c);
  _objc_destroyWeak(param_1 + _DAT_11271e82c);
  _objc_destroyWeak(param_1 + _DAT_11271e810);
  _objc_destroyWeak(param_1 + _DAT_11271e88c);
  _objc_destroyWeak(param_1 + _DAT_11271e80c);
  _objc_destroyWeak(param_1 + _DAT_11271e818);
  _objc_destroyWeak(param_1 + _DAT_11271e81c);
  _objc_destroyWeak(param_1 + _DAT_11271e89c);
  _objc_destroyWeak(param_1 + _DAT_11271e898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e820);
  return;
}



/* Entry: 1051aa694; end: 1051aa80f; -[SCCanvasConnectedAppsActionHandler initWithPresentingViewController:navigationController:imageDownloader:connectionManager:preferences:userTrackedLogger:webBrowsingScopeExposer:] */

undefined1 *
FUN_1051aa694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6b20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051aa810; end: 1051aaad7; -[SCCanvasConnectedAppsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined * FUN_1051aa810(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        puVar13 = (undefined *)0x0;
        goto LAB_1051aaa8c;
      }
    }
    func_0x00010be7b480(param_1);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b5a58;
    _objc_opt_class(PTR_PTR_1126b5a58);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar13);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    puVar13 = PTR_PTR_1126b5a60;
    _objc_alloc();
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    lVar5 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bff32a0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained();
    func_0x00010c11c520();
    _objc_release(lVar4);
    uVar2 = uVar1;
    func_0x00010bf04ea0();
    if ((uVar2 == 2) || (uVar2 = uVar1, func_0x00010bf04ea0(), uVar2 == 1)) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf07940();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001070adbc8(uVar7,&PTR____CFConstantStringClassReference_110e9d038,puVar8);
      _objc_release(puVar8);
      _objc_release(uVar2);
      _objc_release(uVar7);
    }
    _objc_release(puVar13);
    _objc_release(uVar1);
  }
  puVar13 = (undefined *)0x1;
LAB_1051aaa8c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2ac300();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar9 = puVar8;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b5a68;
    _objc_alloc(PTR_PTR_1126b5a68);
    func_0x00010c000e00();
    func_0x00010c18eb00();
    func_0x00010bf9d620(*(undefined8 *)(param_4 + 0x40));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar11);
    _objc_release(puVar13);
    return puVar13;
  }
  return puVar13;
}



/* Entry: 1051aaad8; end: 1051aac57; -[SCCanvasConnectedAppsActionHandler _presentExternalWebURL:] */

void FUN_1051aaad8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar3 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b5a68;
  _objc_alloc(PTR_PTR_1126b5a68);
  func_0x00010c000e00();
  func_0x00010c18eb00();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 1051aac58; end: 1051aac6f;  */

void FUN_1051aac58(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1051aac70; end: 1051aacb7; -[SCCanvasConnectedAppsActionHandler webBrowserDidDismiss:] */

void FUN_1051aac70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051aacb8; end: 1051aad1b; -[SCCanvasConnectedAppsActionHandler .cxx_destruct] */

void FUN_1051aacb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1051aad1c; end: 1051aaee7; -[SCCanvasConnectedAppsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aad1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126b5a70;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271e8d4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf48ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271e8d8;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271e8dc;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11271e8e0;
  lVar9 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271e8e4;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002200(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar12,
                      *(undefined8 *)(param_1 + _DAT_11271e8e8));
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051aaee8; end: 1051aaf53; -[SCCanvasConnectedAppsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aaee8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e8e8,0);
  _objc_destroyWeak(param_1 + _DAT_11271e8e4);
  _objc_destroyWeak(param_1 + _DAT_11271e8dc);
  _objc_destroyWeak(param_1 + _DAT_11271e8e0);
  _objc_destroyWeak(param_1 + _DAT_11271e8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e8d4);
  return;
}



/* Entry: 1051aaf54; end: 1051ab0ab; -[SCCanvasConnectedAppsCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1051aaf54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6b28;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161a60();
    _objc_release(puVar3);
    func_0x00010c198080(puVar1);
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e8ec);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e8ec) = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return puVar1;
}



/* Entry: 1051ab0ac; end: 1051ab0eb;  */

void FUN_1051ab0ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebc380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051ab0ec; end: 1051ab187; -[SCCanvasConnectedAppsCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ab0ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6b28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e8f0);
  *(undefined8 *)(param_1 + _DAT_11271e8f0) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(lVar2);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(param_1);
  return;
}



/* Entry: 1051ab188; end: 1051ab56b; -[SCCanvasConnectedAppsCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ab188(undefined *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11271e8f0;
  uVar2 = *(ulong *)(param_1 + lVar9);
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b5a78;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar2 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar5 = uVar2;
    func_0x00010c23cf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 != 0) {
      lVar10 = (long)_DAT_11271e8ec;
      lVar9 = *(long *)(param_1 + lVar10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar4 = param_1;
        func_0x00010c27f7a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040(puVar4);
        _objc_release(uVar3);
        _objc_release(puVar4);
      }
    }
    func_0x00010bfcf7e0(uVar2);
    func_0x00010bf9e0a0(uVar2);
    func_0x00010c20eaa0(param_1);
    uVar5 = uVar2;
    func_0x00010bf48b00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf07a80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar4 = param_1;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c08dda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b48f0;
    _objc_opt_class(PTR_PTR_1126b48f0);
    puVar8 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar4);
    puVar4 = puVar7;
    if (((ulong)puVar8 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar7);
    if (puVar4 == (undefined *)0x0) {
      uVar5 = uVar2;
      func_0x00010c074f40();
      puVar7 = PTR_PTR_1126b48f0;
      _objc_alloc(PTR_PTR_1126b48f0);
      bVar1 = (int)uVar5 == 0;
      uVar3 = 0x4041000000000000;
      if (bVar1) {
        uVar3 = 0x4040000000000000;
      }
      uVar11 = 0x4031000000000000;
      if (bVar1) {
        uVar11 = 0x401a000000000000;
      }
      uVar12 = 0x402e000000000000;
      if (bVar1) {
        uVar12 = 0x4030000000000000;
      }
      func_0x00010c013de0(0,0,uVar3,uVar3);
      puVar4 = puVar7;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(uVar11);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193400(0,uVar12,0,uVar12);
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c08c0e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bfe7580(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa200(puVar7);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9fe0();
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar5 = uVar2;
    func_0x00010bf48b00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf07920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar8 = PTR_PTR_1126b4860;
    func_0x00010c0fde60(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200(puVar7);
    _objc_release(puVar8);
    func_0x00010c1cbe20(param_1);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051ab56c; end: 1051ab617; +[SCCanvasConnectedAppsCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1051ab56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_1;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b5a78;
  _objc_opt_class(PTR_PTR_1126b5a78);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bfcf7e0(uVar1);
  func_0x00010bf9e0a0(uVar1);
  _objc_release(uVar1);
  func_0x00010bfe0740(PTR_PTR_1126b2780);
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 1051ab618; end: 1051ab65f; -[SCCanvasConnectedAppsCollectionViewCell _singleTapGestureRecognizer] */

void FUN_1051ab618(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c1d0120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051ab660; end: 1051ab70b; -[SCCanvasConnectedAppsCollectionViewCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ab660(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b5a78;
  uVar4 = *(ulong *)(param_1 + _DAT_11271e8f0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271e8f4);
  uVar3 = uVar1;
  func_0x00010c23cf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1051ab70c; end: 1051ab71b; -[SCCanvasConnectedAppsCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051ab70c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e8f0);
}


