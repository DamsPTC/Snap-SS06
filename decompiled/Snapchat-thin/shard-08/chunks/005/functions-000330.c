/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061ab640; end: 1061ab693; -[SCFeatureToggleCameraImpl _refreshCachedDevicePostitionTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab640(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_11274181c) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127417f4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109223f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061ab694; end: 1061ab70b; -[SCFeatureToggleCameraImpl pendingDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab694(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar4;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112741820;
  uVar3 = *(ulong *)(param_1 + lVar4);
  uVar2 = (uint)uVar3;
  if ((uVar3 & 1) == 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e444d8);
    uVar2 = (uint)*(undefined8 *)(param_1 + lVar4);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e444f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061ab70c; end: 1061ab713; -[SCFeatureToggleCameraImpl featureName] */

undefined8 FUN_1061ab70c(void)

{
  return 2;
}



/* Entry: 1061ab714; end: 1061ab71b; -[SCFeatureToggleCameraImpl loadTimeout] */

undefined8 FUN_1061ab714(void)

{
  return 500;
}



/* Entry: 1061ab71c; end: 1061ab767; -[SCFeatureToggleCameraImpl _didLoadDependency:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab71c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  *(ulong *)(param_1 + _DAT_112741820) = *(ulong *)(param_1 + _DAT_112741820) | param_3;
  lVar1 = param_1;
  func_0x00010bf09860();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1afcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsCameraModeLoading__112649960,0);
    return;
  }
  return;
}



/* Entry: 1061ab768; end: 1061ab77b; -[SCFeatureToggleCameraImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab768(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741818,param_3);
  return;
}



/* Entry: 1061ab77c; end: 1061ab783; -[SCFeatureToggleCameraImpl modeEnabledStateChangedObservable] */

undefined8 FUN_1061ab77c(void)

{
  return 0;
}



/* Entry: 1061ab784; end: 1061ab787; -[SCFeatureToggleCameraImpl disableMode] */

void FUN_1061ab784(void)

{
  return;
}



/* Entry: 1061ab788; end: 1061ab793; -[SCFeatureToggleCameraImpl incompatibleModes] */

undefined * FUN_1061ab788(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 1061ab794; end: 1061ab79b; -[SCFeatureToggleCameraImpl isHidden] */

undefined8 FUN_1061ab794(void)

{
  return 0;
}



/* Entry: 1061ab79c; end: 1061ab7a3; -[SCFeatureToggleCameraImpl modeType] */

undefined8 FUN_1061ab79c(void)

{
  return 0xc;
}



/* Entry: 1061ab7a4; end: 1061ab7e3; -[SCFeatureToggleCameraImpl onTap:] */

void FUN_1061ab7a4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)uVar1 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010c272730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toggleCameraWithCompletion__11267a3f0,0);
    return;
  }
  return;
}



/* Entry: 1061ab7e4; end: 1061ab7e7; -[SCFeatureToggleCameraImpl secondaryOnTap:] */

void FUN_1061ab7e4(void)

{
  return;
}



/* Entry: 1061ab7e8; end: 1061ab7ef; -[SCFeatureToggleCameraImpl state] */

undefined8 FUN_1061ab7e8(void)

{
  return 4;
}



/* Entry: 1061ab7f0; end: 1061ab7f7; -[SCFeatureToggleCameraImpl secondaryButtonState] */

undefined8 FUN_1061ab7f0(void)

{
  return 0;
}



/* Entry: 1061ab7f8; end: 1061ab7fb; -[SCFeatureToggleCameraImpl toolbarButtonPositionDidChange:] */

void FUN_1061ab7f8(void)

{
  return;
}



/* Entry: 1061ab7fc; end: 1061ab8e3; -[SCFeatureToggleCameraImpl startObservingManagedVideoDataSourceOutputEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112741824;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061ab8e4; end: 1061ab98f;  */

void FUN_1061ab8e4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061ab990; end: 1061ab9c3;  */

void FUN_1061ab990(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ab9c4; end: 1061aba47; -[SCFeatureToggleCameraImpl _didReceiveMainCameraStreamFromDevicePosition:] */

void FUN_1061ab9c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf70d80();
    _objc_release(lVar1);
    if (param_3 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfe770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didLoadDependency__11255d378,2);
      return;
    }
  }
  return;
}



/* Entry: 1061aba48; end: 1061aba7b; -[SCFeatureToggleCameraImpl stopObservingManagedVideoDataSourceOutputEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aba48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741824;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061aba7c; end: 1061aba97; -[SCFeatureToggleCameraImpl areAllDependenciesLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061aba7c(long param_1)

{
  return (~*(uint *)(param_1 + _DAT_112741820) & 3) == 0;
}



/* Entry: 1061aba98; end: 1061abb97; -[SCFeatureToggleCameraImpl setIsCameraModeLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aba98(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + _DAT_112741828) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112741828) = (char)param_3;
  if (param_3 == 0) {
    lVar2 = param_1;
    func_0x00010bf09860();
    if ((int)lVar2 == 0) {
      func_0x00010c09ccc0(*(undefined8 *)(param_1 + _DAT_1127417fc));
    }
    else {
      func_0x00010c09cd80();
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127417f0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
  }
  else {
    *(undefined8 *)(param_1 + _DAT_112741820) = 0;
    func_0x00010c09cd40(*(undefined8 *)(param_1 + _DAT_1127417fc));
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127417f0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa260();
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061abb98; end: 1061abe77; -[SCFeatureToggleCameraImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061abb98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  lVar6 = (long)_DAT_11274182c;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1061abe78;
    puStack_90 = &UNK_11090d240;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1061abf64;
    puStack_b8 = &UNK_110872b30;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061abe78; end: 1061abf1b;  */

void FUN_1061abe78(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061abf1c; end: 1061abf63;  */

void FUN_1061abf1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061abf64; end: 1061ac007;  */

void FUN_1061abf64(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e6560(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061ac008; end: 1061ac067;  */

void FUN_1061ac008(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea16e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ac068; end: 1061ac09b; -[SCFeatureToggleCameraImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac068(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274182c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061ac09c; end: 1061ac09f; -[SCFeatureToggleCameraImpl _didChangeState:] */

void FUN_1061ac09c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c1b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setManagedCapturerState__11264e100);
  return;
}



/* Entry: 1061ac0a0; end: 1061ac0b3; -[SCFeatureToggleCameraImpl _sessionDidStartRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac0a0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274181c) = 1;
  return;
}



/* Entry: 1061ac0b4; end: 1061ac0d3; -[SCFeatureToggleCameraImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac0b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741814);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ac0d4; end: 1061ac0e7; -[SCFeatureToggleCameraImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741814,param_3);
  return;
}



/* Entry: 1061ac0e8; end: 1061ac107; -[SCFeatureToggleCameraImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac0e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ac108; end: 1061ac11b; -[SCFeatureToggleCameraImpl setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac108(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741818,param_3);
  return;
}



/* Entry: 1061ac11c; end: 1061ac12b; -[SCFeatureToggleCameraImpl managedCapturerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac11c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112741808,1);
  return;
}



/* Entry: 1061ac12c; end: 1061ac137; -[SCFeatureToggleCameraImpl setManagedCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac12c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1061ac138; end: 1061ac147; -[SCFeatureToggleCameraImpl isCameraModeLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061ac138(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741828);
}



/* Entry: 1061ac148; end: 1061ac23f; -[SCFeatureToggleCameraImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac148(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741808,0);
  _objc_destroyWeak(param_1 + _DAT_112741818);
  _objc_destroyWeak(param_1 + _DAT_112741814);
  _objc_storeStrong(param_1 + _DAT_11274182c,0);
  _objc_storeStrong(param_1 + _DAT_112741810,0);
  _objc_storeStrong(param_1 + _DAT_11274180c,0);
  _objc_storeStrong(param_1 + _DAT_112741804,0);
  _objc_storeStrong(param_1 + _DAT_1127417f8,0);
  _objc_storeStrong(param_1 + _DAT_1127417fc,0);
  _objc_storeStrong(param_1 + _DAT_112741824,0);
  _objc_storeStrong(param_1 + _DAT_1127417f4,0);
  _objc_storeStrong(param_1 + _DAT_1127417f0,0);
  _objc_storeStrong(param_1 + _DAT_1127417ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127417e8,0);
  return;
}



/* Entry: 1061ac240; end: 1061ac3af; +[SCFeatureHelperWidgetAnimation showWidgetAnimated:] */

void FUN_1061ac240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  func_0x00010c1677c0(0,param_3);
  func_0x00010c1a7f60(param_3,param_2,1);
  uVar3 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar3);
  func_0x00010c1a7f60(param_3,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1061ac3b0;
  puStack_60 = &UNK_110842e18;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1061ac400;
  puStack_88 = &UNK_110841f20;
  uStack_58 = param_3;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010bf03420(0x3fc3333333333333,puVar2,param_2,&puStack_78,&puStack_a0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1061ac4bc;
  puStack_b0 = &UNK_110842e18;
  uStack_a8 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fc1eb851eb851ec,0x3fb47ae147ae147b,puVar2,param_2,0,&puStack_c8,0);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1061ac3b0; end: 1061ac47f;  */

void FUN_1061ac3b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeTranslation(&uStack_50,0xc014000000000000,0);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 1061ac480; end: 1061ac4bb;  */

void FUN_1061ac480(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 1061ac4bc; end: 1061ac4c7;  */

void FUN_1061ac4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061ac4c8; end: 1061ac603; +[SCFeatureHelperWidgetAnimation hideWidgetAnimated:] */

void FUN_1061ac4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1061ac604;
  puStack_60 = &UNK_110842e18;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061ac654;
  puStack_88 = &UNK_110841f20;
  uStack_58 = param_3;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010bf03420(0x3fd3333333333333,puVar2,param_2,&puStack_78,&puStack_a0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1061ac660;
  puStack_b0 = &UNK_110842e18;
  uStack_a8 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03400(0x3fb999999999999a,puVar2,param_2,&puStack_c8);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1061ac604; end: 1061ac653;  */

void FUN_1061ac604(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeTranslation(&uStack_50,0x4014000000000000,0);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 1061ac654; end: 1061ac66b;  */

void FUN_1061ac654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1061ac66c; end: 1061ac6c3; -[SCZoomingRecordedScale initWithType:scale:] */

void FUN_1061ac66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0220;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 1061ac6c4; end: 1061ac70b; -[SCZoomingRecordedScale scaleWithType:] */

double FUN_1061ac6c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_1 + 0x10);
  if (param_3 == 0) {
    dVar3 = 0.5;
    lVar1 = 1;
  }
  else {
    dVar3 = dVar2;
    if (param_3 != 1) goto LAB_1061ac6f8;
    lVar1 = 0;
    dVar3 = 2.0;
  }
  dVar3 = dVar2 * dVar3;
  if (*(long *)(param_1 + 8) != lVar1) {
    dVar3 = dVar2;
  }
LAB_1061ac6f8:
  if (dVar3 <= 1.0) {
    dVar3 = 1.0;
  }
  return dVar3;
}



/* Entry: 1061ac70c; end: 1061ac74f; -[SCFeatureZoomingImpl initiatedRecording] */

undefined8 FUN_1061ac70c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa31c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1061ac750; end: 1061ac793; -[SCFeatureZoomingImpl dealloc] */

void FUN_1061ac750(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126f0228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061ac794; end: 1061ac88b; -[SCFeatureZoomingImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112741848;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1,param_2,uVar2,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061ac88c; end: 1061ac9ff; -[SCFeatureZoomingImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ac88c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061aca00;
  puStack_68 = &UNK_11084ec60;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274187c);
  *(undefined8 *)(param_1 + _DAT_11274187c) = uVar1;
  _objc_release(uVar2);
  _objc_copyWeak(auStack_88,auStack_58);
  uVar1 = param_4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741880);
  *(undefined8 *)(param_1 + _DAT_112741880) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061aca00; end: 1061acbc3;  */

void FUN_1061aca00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1061acbc4;
  puStack_80 = &UNK_11084ec30;
  _objc_copyWeak(auStack_78,param_1 + 0x20);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1061acbf4;
  puStack_a8 = &UNK_11084ec30;
  _objc_copyWeak(auStack_a0,param_1 + 0x20);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1061acc24;
  puStack_d0 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_c8,param_1 + 0x20);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1061acc54;
  puStack_f8 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  _objc_copyWeak(auStack_118,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 1061acbc4; end: 1061accb3;  */

void FUN_1061acbc4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e8f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061accb4; end: 1061acd5f;  */

void FUN_1061accb4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061acd60; end: 1061acd8f;  */

void FUN_1061acd60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e8f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061acd90; end: 1061ad223; -[SCFeatureZoomingImpl forwardCameraTimerGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061acd90(double param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  
  _objc_retain(param_7);
  lVar3 = param_5;
  func_0x00010bdf7580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar7 = (long)_DAT_112741878;
    lVar6 = param_5 + lVar7;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c09ef00(param_7,param_6,lVar6);
    dVar10 = param_1;
    dVar11 = param_2;
    _objc_release(lVar6);
    lVar7 = param_5 + lVar7;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf2b2e0();
    _objc_release(lVar7);
    lVar6 = (long)_DAT_112741884;
    dVar13 = dVar10;
    _CGRectGetMidX(dVar10,dVar11,param_3,param_4);
    _CGRectGetMidY(dVar10,dVar11,param_3,param_4);
    *(double *)(param_5 + lVar6) = dVar13;
    ((double *)(param_5 + lVar6))[1] = dVar10;
    lVar6 = (long)_DAT_112741888;
    *(double *)(param_5 + lVar6) = param_1;
    ((double *)(param_5 + lVar6))[1] = param_2;
  }
  else {
    lVar6 = param_7;
    func_0x00010c252440();
    if (lVar6 == 1) {
      lVar6 = param_7;
      func_0x00010c0df520();
      if (lVar6 != 0) {
        pdVar1 = (double *)(param_5 + _DAT_112741884);
        lVar6 = param_5 + _DAT_112741878;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c09f140(param_7,param_6,0,lVar6);
        *pdVar1 = param_1;
        pdVar1[1] = param_2;
        _objc_release(lVar6);
        lVar6 = (long)_DAT_112741888;
        param_1 = *pdVar1;
        ((double *)(param_5 + lVar6))[1] = pdVar1[1];
        *(double *)(param_5 + lVar6) = param_1;
      }
      uVar4 = *(undefined8 *)(param_5 + _DAT_112741844);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar4;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26a2a0(param_5);
      func_0x00010bf60de0(uVar12,param_6,param_5);
      dVar10 = param_1;
      _objc_release(uVar12);
      _objc_release(uVar4);
      func_0x00010c0994c0(lVar3);
      func_0x00010c198ea0(param_1 / dVar10,lVar3);
    }
    else {
      lVar6 = param_7;
      func_0x00010c252440();
      if (lVar6 == 2) {
        lVar7 = (long)_DAT_112741878;
        lVar6 = param_5 + lVar7;
        _objc_loadWeakRetained(lVar6);
        lVar5 = param_5;
        func_0x00010be1c920(param_5,param_6,param_7,lVar6);
        _objc_release(lVar6);
        if ((int)lVar5 != 0) {
          lVar6 = param_5 + lVar7;
          _objc_loadWeakRetained();
          lVar5 = lVar6;
          func_0x00010c082800();
          _objc_release(lVar6);
          if ((int)lVar5 != 0) {
            lVar6 = param_5 + lVar7;
            _objc_loadWeakRetained(lVar6);
            func_0x00010c09ef00(param_7,param_6,lVar6);
            _objc_release(lVar6);
            lVar8 = (long)_DAT_11274188c;
            lVar9 = *(long *)(param_5 + lVar8);
            lVar6 = param_5;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar6;
            func_0x00010bf29820();
            _objc_release(lVar6);
            if (lVar9 != lVar5) {
              lVar6 = param_5;
              func_0x00010bf6b020();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar6;
              func_0x00010bf29820();
              *(long *)(param_5 + lVar8) = lVar5;
              _objc_release(lVar6);
              lVar6 = (long)_DAT_112741888;
              *(double *)(param_5 + lVar6) = param_1;
              ((double *)(param_5 + lVar6))[1] = param_2;
            }
            lVar7 = param_5 + lVar7;
            _objc_loadWeakRetained(lVar7);
            func_0x00010bf2b2e0();
            _objc_release(lVar7);
            dVar13 = param_3 * 0.5 + 10.0;
            pdVar1 = (double *)(param_5 + _DAT_112741884);
            dVar10 = param_1 - *pdVar1;
            func_0x00010be20ee0(dVar10,param_2 - pdVar1[1],param_5);
            dVar10 = dVar10 - dVar13;
            if (dVar10 <= 0.0) {
              dVar10 = 0.0;
            }
            pdVar2 = (double *)(param_5 + _DAT_112741888);
            dVar11 = *pdVar2 - *pdVar1;
            func_0x00010be20ee0(dVar11,pdVar2[1] - pdVar1[1],param_5);
            dVar11 = dVar11 - dVar13;
            if (dVar11 <= 0.0) {
              dVar11 = 0.0;
            }
            if (dVar10 != dVar11) {
              dVar10 = dVar10 - dVar11;
              func_0x00010c276920(lVar3);
              dVar10 = dVar10 + dVar11;
              func_0x00010c2186a0(dVar10,lVar3);
              uVar4 = *(undefined8 *)(param_5 + _DAT_112741844);
              func_0x00010c269d40(uVar4);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar4;
              func_0x00010c2bf1a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8d000(lVar3);
              lVar6 = param_5;
              func_0x00010c26a2a0(param_5);
              func_0x00010c227b20(dVar10,uVar12,param_6,lVar6,0);
              _objc_release(uVar12);
              _objc_release(uVar4);
              func_0x00010be51420(param_1,param_2,param_5,param_6,0);
            }
            *pdVar2 = param_1;
            pdVar2[1] = param_2;
          }
          goto LAB_1061ad1f0;
        }
      }
      lVar6 = param_7;
      func_0x00010c252440();
      if (((lVar6 == 3) || (lVar6 = param_7, func_0x00010c252440(), lVar6 == 4)) ||
         (lVar6 = param_7, func_0x00010c252440(), lVar6 == 5)) {
        func_0x00010bebd3a0(param_5);
        lVar6 = (long)_DAT_112741888;
        uVar12 = *(undefined8 *)(param_5 + _DAT_112741884);
        ((undefined8 *)(param_5 + lVar6))[1] = ((undefined8 *)(param_5 + _DAT_112741884))[1];
        *(undefined8 *)(param_5 + lVar6) = uVar12;
        lVar6 = param_7;
        func_0x00010c252440();
        if (lVar6 == 3) {
          func_0x00010be513a0(param_5,param_6,0);
        }
        else {
          func_0x00010be513e0(param_5,param_6,0);
        }
      }
    }
  }
LAB_1061ad1f0:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1061ad224; end: 1061ad227; -[SCFeatureZoomingImpl forwardPinchGesture:] */

void FUN_1061ad224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be18e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__forwardPinchGesture__112563d30);
  return;
}



/* Entry: 1061ad228; end: 1061ad71b; -[SCFeatureZoomingImpl _forwardPinchGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ad228(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  _objc_retain(param_4);
  uVar2 = param_2;
  func_0x00010bdf7580();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) goto LAB_1061ad6e8;
  uVar3 = param_2;
  func_0x00010c26a2a0();
  lVar11 = (long)_DAT_112741844;
  uVar4 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60de0();
  dVar13 = param_1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar7 = param_4;
  func_0x00010c252440();
  if (lVar7 == 1) {
    if (((*(char *)(param_2 + (long)_DAT_112741864) == '\x01') &&
        (*(char *)(param_2 + (long)_DAT_112741868) == '\x01')) &&
       (uVar6 = param_2, func_0x00010c123d40(), (uVar6 & 1) == 0)) {
      lVar7 = *(long *)(param_2 + (long)_DAT_112741874);
      func_0x00010c0cfd40();
      if (lVar7 != 0) {
        *(undefined1 *)(param_2 + (long)_DAT_11274186c) = 1;
        goto LAB_1061ad6e8;
      }
    }
    func_0x00010c1bdd20(0x3ff0000000000000,uVar2);
    dVar13 = param_1;
    func_0x00010c198ea0(uVar2);
    *(undefined8 *)(param_2 + (long)_DAT_112741890) = 0;
    lVar7 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_4,param_3,lVar7);
    func_0x00010be51420(param_2,param_3,1);
    _objc_release(lVar7);
  }
  lVar7 = param_4;
  func_0x00010c252440();
  if ((lVar7 == 2) && ((*(byte *)(param_2 + (long)_DAT_11274186c) & 1) == 0)) {
    lVar10 = (long)_DAT_112741878;
    lVar7 = param_2 + lVar10;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c082800();
    if ((int)lVar8 != 0) {
      lVar10 = param_2 + lVar10;
      _objc_loadWeakRetained(lVar10);
      uVar6 = param_2;
      func_0x00010be1c920(param_2,param_3,param_4,lVar10);
      _objc_release(lVar10);
      _objc_release(lVar7);
      if ((int)uVar6 == 0) goto LAB_1061ad604;
      if ((*(byte *)(param_2 + (long)_DAT_112741894) & 1) != 0) goto LAB_1061ad6e8;
      func_0x00010bf8d000(uVar2);
      dVar14 = dVar13;
      func_0x00010c14e120(param_4);
      dVar15 = dVar14;
      func_0x00010c1bdd20(uVar2);
      func_0x00010c0994c0(uVar2);
      func_0x00010c1f5fe0(param_4);
      func_0x00010bf8d000(uVar2);
      uVar4 = *(undefined8 *)(param_2 + lVar11);
      dVar16 = dVar15;
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cd560();
      _objc_release(uVar5);
      _objc_release(uVar4);
      dVar17 = 1.0;
      if (1.0 <= dVar14) {
LAB_1061ad550:
        if (uVar3 == 1) goto LAB_1061ad558;
      }
      else {
        fVar18 = ABS((float)param_1 - (float)dVar16);
        fVar12 = ABS((float)param_1 + (float)dVar16) * 1.1920929e-07;
        dVar17 = (double)(ulong)(uint)fVar12;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar18) && (bVar1 = false, !NAN(fVar18) && !NAN(fVar12))) {
          bVar1 = fVar18 < fVar12;
        }
        if (((!bVar1) || (uVar6 = param_2, func_0x00010c123d40(), (uVar6 & 1) != 0)) || (uVar3 != 1)
           ) goto LAB_1061ad550;
        lVar10 = (long)_DAT_112741850;
        lVar7 = param_2 + lVar10;
        _objc_loadWeakRetained();
        lVar8 = lVar7;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf2c900();
        _objc_release(lVar8);
        _objc_release(lVar7);
        if ((int)lVar9 != 0) {
          lVar10 = param_2 + lVar10;
          _objc_loadWeakRetained(lVar10);
          lVar7 = lVar10;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0fc220();
          _objc_release(lVar7);
          _objc_release(lVar10);
        }
LAB_1061ad558:
        uVar3 = param_2;
        func_0x00010c123d40();
        if ((uVar3 & 1) == 0) {
          lVar7 = param_2 + (long)_DAT_112741850;
          _objc_loadWeakRetained(lVar7);
          lVar10 = lVar7;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8d000(uVar2);
          func_0x00010bf78420((float)dVar13,(float)dVar17,lVar10);
          _objc_release(lVar10);
          _objc_release(lVar7);
        }
      }
      lVar7 = *(long *)(param_2 + lVar11);
      func_0x00010c269d40(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010c26a2a0(param_2);
      func_0x00010c227b20(dVar15,lVar10,param_3,uVar3,0);
      _objc_release(lVar10);
    }
    _objc_release(lVar7);
  }
LAB_1061ad604:
  lVar7 = param_4;
  func_0x00010c252440();
  if ((lVar7 == 3) || (lVar7 = param_4, func_0x00010c252440(), lVar7 == 4)) {
    if (*(char *)(param_2 + (long)_DAT_11274186c) == '\x01') {
      *(undefined1 *)(param_2 + (long)_DAT_11274186c) = 0;
    }
    else {
      if (*(char *)(param_2 + (long)_DAT_112741894) == '\x01') {
        *(undefined1 *)(param_2 + (long)_DAT_112741894) = 0;
      }
      func_0x00010c1bdd20(0x3ff0000000000000,uVar2);
      uVar4 = *(undefined8 *)(param_2 + lVar11);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60de0();
      func_0x00010c198ea0(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x00010bebd3a0(param_2);
      lVar7 = param_4;
      func_0x00010c252440();
      if (lVar7 == 3) {
        func_0x00010be513a0(param_2,param_3,1);
      }
      else {
        lVar7 = param_4;
        func_0x00010c252440();
        if (lVar7 == 4) {
          func_0x00010be513e0(param_2,param_3,1);
        }
      }
    }
  }
LAB_1061ad6e8:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061ad71c; end: 1061adadf; -[SCFeatureZoomingImpl forwardPanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ad71c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bdf7580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar8 = param_3 + _DAT_112741878;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c09ef00(param_5,param_4,lVar8);
    _objc_release(lVar8);
    lVar8 = (long)_DAT_112741898;
    *(double *)(param_3 + lVar8) = param_1;
    ((double *)(param_3 + lVar8))[1] = param_2;
  }
  else {
    if (*(char *)(param_3 + _DAT_1127418a0) != '\x01') goto LAB_1061ad8cc;
    lVar8 = (long)_DAT_112741878;
    uVar2 = param_3 + lVar8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c082800();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
      goto LAB_1061ad8cc;
    }
    lVar6 = param_3 + lVar8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = param_3;
    func_0x00010be1c920(param_3,param_4,param_5,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar2);
    if ((int)lVar7 == 0) goto LAB_1061ad8cc;
    lVar8 = param_3 + lVar8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c09ef00(param_5,param_4,lVar8);
    _objc_release(lVar8);
    lVar6 = (long)_DAT_1127418a4;
    lVar7 = *(long *)(param_3 + lVar6);
    lVar8 = param_5;
    func_0x00010c0df520();
    if (lVar7 != lVar8) {
      lVar8 = param_5;
      func_0x00010c0df520();
      *(long *)(param_3 + lVar6) = lVar8;
      lVar8 = (long)_DAT_112741898;
      *(double *)(param_3 + lVar8) = param_1;
      ((double *)(param_3 + lVar8))[1] = param_2;
      lVar8 = (long)_DAT_11274189c;
      *(double *)(param_3 + lVar8) = param_1;
      ((double *)(param_3 + lVar8))[1] = param_2;
    }
    lVar8 = param_5;
    func_0x00010c252440();
    if (lVar8 == 1) {
      lVar8 = (long)_DAT_112741898;
      *(double *)(param_3 + lVar8) = param_1;
      ((double *)(param_3 + lVar8))[1] = param_2;
      func_0x00010be51420(param_1,param_2,param_3,param_4,0);
    }
    else {
      lVar8 = param_5;
      func_0x00010c252440();
      if (lVar8 == 2) {
        lVar7 = (long)_DAT_11274188c;
        lVar9 = *(long *)(param_3 + lVar7);
        lVar8 = param_3;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar8;
        func_0x00010bf29820();
        _objc_release(lVar8);
        if (lVar9 == lVar6) {
          lVar8 = (long)_DAT_112741898;
          dVar11 = ((double *)(param_3 + _DAT_11274189c))[1];
          dVar14 = *(double *)(param_3 + _DAT_11274189c);
        }
        else {
          lVar8 = param_3;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar8;
          func_0x00010bf29820();
          *(long *)(param_3 + lVar7) = lVar6;
          _objc_release(lVar8);
          lVar8 = (long)_DAT_112741898;
          *(double *)(param_3 + lVar8) = param_1;
          ((double *)(param_3 + lVar8))[1] = param_2;
          lVar6 = (long)_DAT_11274189c;
          *(double *)(param_3 + lVar6) = param_1;
          ((double *)(param_3 + lVar6))[1] = param_2;
          dVar11 = param_2;
          dVar14 = param_1;
        }
        dVar12 = *(double *)(param_3 + lVar8);
        dVar13 = ((double *)(param_3 + lVar8))[1];
        dVar10 = param_1 - dVar12;
        dVar14 = dVar14 - dVar12;
        func_0x00010be20ee0(dVar10,param_2 - dVar13,param_3);
        func_0x00010be20ee0(dVar14,dVar11 - dVar13,param_3);
        if (dVar10 != dVar14) {
          dVar11 = dVar14;
          func_0x00010c276920(lVar1);
          dVar14 = (dVar10 + dVar11) - dVar14;
          if (dVar14 <= 0.0) {
            dVar14 = 0.0;
          }
          func_0x00010c2186a0(dVar14,lVar1);
          uVar4 = *(undefined8 *)(param_3 + _DAT_112741844);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c2bf1a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8d000(lVar1);
          lVar8 = param_3;
          func_0x00010c26a2a0(param_3);
          func_0x00010c227b20(dVar14,uVar5,param_4,lVar8,0);
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
      }
      else {
        lVar8 = param_5;
        func_0x00010c252440();
        if ((lVar8 == 3) || (lVar8 = param_5, func_0x00010c252440(), lVar8 == 4)) {
          func_0x00010bebd3a0(param_3);
          lVar8 = param_5;
          func_0x00010c252440();
          if (lVar8 == 3) {
            func_0x00010be513a0(param_3,param_4,0);
          }
          else {
            lVar8 = param_5;
            func_0x00010c252440();
            if (lVar8 == 4) {
              func_0x00010be513e0(param_3,param_4,0);
            }
          }
        }
      }
    }
  }
  lVar8 = (long)_DAT_11274189c;
  *(double *)(param_3 + lVar8) = param_1;
  ((double *)(param_3 + lVar8))[1] = param_2;
LAB_1061ad8cc:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061adae0; end: 1061adafb; -[SCFeatureZoomingImpl actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061adae0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (*(long *)(param_1 + _DAT_1127418a8) != 1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 1061adafc; end: 1061adb03; -[SCFeatureZoomingImpl cameraUIItem] */

undefined8 FUN_1061adafc(void)

{
  return 1;
}



/* Entry: 1061adb04; end: 1061adc9f; -[SCFeatureZoomingImpl recordZoomingStateForDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061adb04(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_3 == 1) {
    uVar1 = *(ulong *)(param_1 + _DAT_112741844);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c081d40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar8 = (long)_DAT_1127418b4;
    if (*(long *)(param_1 + lVar8) == 0) {
      lVar4 = param_1;
      func_0x00010beebfc0(param_1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(long *)(param_1 + lVar8) = lVar4;
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126c87d8;
      _objc_alloc();
      func_0x00010bf695a0(*(undefined8 *)(param_1 + lVar8));
    }
    else {
      puVar5 = PTR_PTR_1126c87d8;
      _objc_alloc();
      func_0x00010bf8d000(*(undefined8 *)(param_1 + lVar8));
    }
    func_0x00010c056000(puVar5,param_2,uVar3 & 0xffffffff);
    piVar6 = (int *)&DAT_1127418b8;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    lVar8 = (long)_DAT_1127418ac;
    if (*(long *)(param_1 + lVar8) == 0) {
      lVar4 = param_1;
      func_0x00010beebfc0(param_1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(long *)(param_1 + lVar8) = lVar4;
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126c87d8;
      _objc_alloc();
      func_0x00010bf695a0(*(undefined8 *)(param_1 + lVar8));
    }
    else {
      puVar5 = PTR_PTR_1126c87d8;
      _objc_alloc();
      func_0x00010bf8d000(*(undefined8 *)(param_1 + lVar8));
    }
    func_0x00010c056000(puVar5,param_2,0);
    piVar6 = (int *)&DAT_1127418b0;
  }
  uVar7 = *(undefined8 *)(param_1 + *piVar6);
  *(undefined **)(param_1 + *piVar6) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1061adca0; end: 1061adccb; -[SCFeatureZoomingImpl recordZoomingState] */

/* WARNING: Possible PIC construction at 0x0001061adcb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061adcb8) */

void FUN_1061adca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c123c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_recordZoomingStateForDevicePosit_112626930,0)
  ;
  return;
}



/* Entry: 1061adccc; end: 1061ade6f; -[SCFeatureZoomingImpl restoreZoomingStateForDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061adccc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = param_2;
  if (param_4 == 1) {
    lVar7 = (long)_DAT_1127418b8;
    if (*(long *)(param_2 + lVar7) != 0) {
      func_0x00010beebfc0(param_2,param_3,1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_112741844;
      uVar3 = *(ulong *)(param_2 + lVar8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf2fa00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c081d40();
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c14e520(*(undefined8 *)(param_2 + lVar7),param_3,uVar5 & 0xffffffff);
      uVar1 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
LAB_1061ade10:
      func_0x00010c227b20(param_1);
      _objc_release(uVar6);
      _objc_release(uVar1);
      func_0x00010c198ea0(param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  else if (param_4 == 0) {
    lVar7 = (long)_DAT_1127418b0;
    if (*(long *)(param_2 + lVar7) != 0) {
      func_0x00010beebfc0(param_2,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e520(*(undefined8 *)(param_2 + lVar7),param_3,0);
      uVar1 = *(undefined8 *)(param_2 + _DAT_112741844);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1061ade10;
    }
  }
  return;
}



/* Entry: 1061ade70; end: 1061ade9b; -[SCFeatureZoomingImpl restoreZoomingState] */

/* WARNING: Possible PIC construction at 0x0001061ade84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061ade88) */

void FUN_1061ade70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_restoreZoomingStateForDevicePosi_11262cc40,0)
  ;
  return;
}



/* Entry: 1061ade9c; end: 1061adf37; -[SCFeatureZoomingImpl resetZoomingStateForDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ade9c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 < 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741844);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139fc0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010beebfc0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061adf38; end: 1061adf63; -[SCFeatureZoomingImpl resetZoomingState] */

/* WARNING: Possible PIC construction at 0x0001061adf4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061adf50) */

void FUN_1061adf38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetZoomingStateForDevicePositi_11262c220,0)
  ;
  return;
}



/* Entry: 1061adf64; end: 1061adf67; -[SCFeatureZoomingImpl resetMetrics] */

void FUN_1061adf64(void)

{
  return;
}



/* Entry: 1061adf68; end: 1061ae083; -[SCFeatureZoomingImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1061adf68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c26a2a0();
  if (lVar1 == 1) {
    piVar4 = (int *)&DAT_112741854;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26a2a0();
    dVar5 = 1.0;
    if (lVar1 != 0) goto LAB_1061adfc4;
    piVar4 = (int *)&DAT_112741858;
  }
  dVar5 = *(double *)(param_1 + *piVar4);
LAB_1061adfc4:
  dVar6 = dVar5 * 0.5;
  if (*(char *)(param_1 + _DAT_11274185c) == '\0') {
    dVar6 = dVar5;
  }
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e44538;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      dVar6 < 0.9999998807907104 || 1.0000001192092896 < dVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x00010bdf7580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8d000();
    _objc_release(puVar2);
    dVar5 = 100.0;
    if (dVar6 <= 100.0) {
      dVar5 = dVar6;
    }
    return dVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return dVar6;
}



/* Entry: 1061ae084; end: 1061ae0db; -[SCFeatureZoomingImpl currentVideoZoomLevel] */

double FUN_1061ae084(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010bdf7580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8d000();
  _objc_release(param_2);
  dVar1 = 100.0;
  if (param_1 <= 100.0) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 1061ae0dc; end: 1061ae103; -[SCFeatureZoomingImpl _currentZoomingState] */

void FUN_1061ae0dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c26a2a0();
                    /* WARNING: Could not recover jumptable at 0x00010beebfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__zoomingStateForDevicePosition__112598998,uVar1);
  return;
}



/* Entry: 1061ae104; end: 1061ae24f; -[SCFeatureZoomingImpl _zoomingStateForDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae104(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_4 == 0) {
    lVar5 = (long)_DAT_1127418ac;
    lVar4 = *(long *)(param_2 + lVar5);
    if (lVar4 == 0) {
      uVar1 = *(undefined8 *)(param_2 + _DAT_112741844);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6aac0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126c87e0;
      _objc_alloc();
      func_0x00010c009fe0(param_1);
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      *(undefined **)(param_2 + lVar5) = puVar2;
      _objc_release(uVar3);
      lVar4 = *(long *)(param_2 + lVar5);
    }
  }
  else {
    lVar5 = (long)_DAT_1127418b4;
    lVar4 = *(long *)(param_2 + lVar5);
    if (lVar4 == 0) {
      uVar1 = *(undefined8 *)(param_2 + _DAT_112741844);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6aac0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126c87e0;
      _objc_alloc();
      func_0x00010c009fe0(param_1);
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      *(undefined **)(param_2 + lVar5) = puVar2;
      _objc_release(uVar3);
      lVar4 = *(long *)(param_2 + lVar5);
    }
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1061ae250; end: 1061ae3af; -[SCFeatureZoomingImpl _snapToDefaultZoomFactorIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae250(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_112741844;
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26a2a0(param_2);
  uVar3 = uVar2;
  func_0x00010c081d60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26a2a0(param_2);
    func_0x00010bf60de0(uVar2);
    dVar5 = param_1;
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26a2a0(param_2);
    func_0x00010bf6aac0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (ABS(param_1 - dVar5) < 0.1) {
      lVar4 = param_2;
      func_0x00010c26a2a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c13a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_resetZoomingStateForDevicePositi_11262c220,lVar4);
      return;
    }
  }
  return;
}



/* Entry: 1061ae3b0; end: 1061ae417; -[SCFeatureZoomingImpl _logCameraUserActionDidStartWithZoomType:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae3b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_3 + _DAT_1127418a8) = param_5;
  uVar1 = *(undefined8 *)(param_3 + _DAT_11274183c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b7c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061ae418; end: 1061ae467; -[SCFeatureZoomingImpl _logCameraUserActionDidEndWithZoomType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_1127418a8) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274183c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061ae468; end: 1061ae4b7; -[SCFeatureZoomingImpl _logCameraUserActionDidNotCompleteWithZoomType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_1127418a8) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274183c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061ae4b8; end: 1061ae4bf; -[SCFeatureZoomingImpl _getOffsetFromVelocity:] */

double FUN_1061ae4b8(undefined8 param_1,double param_2)

{
  return -param_2;
}



/* Entry: 1061ae4c0; end: 1061ae5ff; -[SCFeatureZoomingImpl _gestureRecognizer:hasAllTouchesInView:] */

undefined8
FUN_1061ae4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_5;
  func_0x00010c0df520();
  if (lVar2 == 0) {
    uVar6 = 1;
  }
  else {
    lVar5 = 0;
    do {
      func_0x00010c09f140(param_5,param_4,lVar5,param_6);
      uVar6 = param_6;
      func_0x00010c08c0e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_6;
      func_0x00010c08c0e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c262c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf511e0(param_1,param_2,uVar6,param_4,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
      uVar3 = param_6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf4ba00();
      _objc_release(uVar3);
      if ((int)uVar6 == 0) break;
      bVar1 = lVar2 + -1 != lVar5;
      lVar5 = lVar5 + 1;
    } while (bVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar6;
}



/* Entry: 1061ae600; end: 1061ae6a3; -[SCFeatureZoomingImpl targetZoomDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061ae600(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127418bc;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    param_1 = *(long *)(param_1 + _DAT_112741848);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf70d80();
    _objc_release(lVar3);
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c26a2a0();
  }
  _objc_release(param_1);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1061ae6a4; end: 1061ae6c3; -[SCFeatureZoomingImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae6a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127418c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ae6c4; end: 1061ae6e3; -[SCFeatureZoomingImpl targetZoomDeviceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae6c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127418bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ae6e4; end: 1061ae6f7; -[SCFeatureZoomingImpl setTargetZoomDeviceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127418bc,param_3);
  return;
}



/* Entry: 1061ae6f8; end: 1061ae707; -[SCFeatureZoomingImpl cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061ae6f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741838);
}



/* Entry: 1061ae708; end: 1061ae717; -[SCFeatureZoomingImpl setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae708(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112741838) = param_3;
  return;
}



/* Entry: 1061ae718; end: 1061ae727; -[SCFeatureZoomingImpl cameraUserActionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061ae718(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274183c);
}



/* Entry: 1061ae728; end: 1061ae767; -[SCFeatureZoomingImpl setCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274183c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061ae768; end: 1061ae787; -[SCFeatureZoomingImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae768(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ae788; end: 1061ae79b; -[SCFeatureZoomingImpl setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae788(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741878,param_3);
  return;
}



/* Entry: 1061ae79c; end: 1061ae7ab; -[SCFeatureZoomingImpl recording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061ae79c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127418a0);
}



/* Entry: 1061ae7ac; end: 1061ae7bb; -[SCFeatureZoomingImpl setRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae7ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127418a0) = param_3;
  return;
}



/* Entry: 1061ae7bc; end: 1061ae8f7; -[SCFeatureZoomingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae7bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112741878);
  _objc_storeStrong(param_1 + _DAT_11274183c,0);
  _objc_destroyWeak(param_1 + _DAT_1127418bc);
  _objc_destroyWeak(param_1 + _DAT_1127418c0);
  _objc_storeStrong(param_1 + _DAT_112741874,0);
  _objc_destroyWeak(param_1 + _DAT_112741870);
  _objc_destroyWeak(param_1 + _DAT_112741850);
  _objc_storeStrong(param_1 + _DAT_11274184c,0);
  _objc_storeStrong(param_1 + _DAT_112741848,0);
  _objc_storeStrong(param_1 + _DAT_112741844,0);
  _objc_storeStrong(param_1 + _DAT_112741840,0);
  _objc_storeStrong(param_1 + _DAT_112741880,0);
  _objc_storeStrong(param_1 + _DAT_11274187c,0);
  _objc_storeStrong(param_1 + _DAT_1127418c4,0);
  _objc_storeStrong(param_1 + _DAT_112741860,0);
  _objc_storeStrong(param_1 + _DAT_1127418b8,0);
  _objc_storeStrong(param_1 + _DAT_1127418b0,0);
  _objc_storeStrong(param_1 + _DAT_1127418b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127418ac,0);
  return;
}



/* Entry: 1061ae8f8; end: 1061aeb4f; -[SCFeatureZoomingImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ae8f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  lVar6 = (long)_DAT_1127418c4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061aeb50;
    puStack_88 = &UNK_11090d240;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
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
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061aeb50; end: 1061aebf3;  */

void FUN_1061aeb50(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061aebf4; end: 1061aec3b;  */

void FUN_1061aebf4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aec3c; end: 1061aed37;  */

void FUN_1061aec3c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061aed38;
  puStack_50 = &UNK_1109113e0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e3a00(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e3b80(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1061aed38; end: 1061aed8f;  */

void FUN_1061aed38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aed90; end: 1061aedbb;  */

void FUN_1061aed90(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c139fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aedbc; end: 1061aedef; -[SCFeatureZoomingImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aedbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127418c4;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061aedf0; end: 1061aee6b; -[SCFeatureZoomingImpl _didChangeCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aedf0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27f0c0();
  *(char *)(param_1 + _DAT_11274185c) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010bf0acc0();
  *(char *)(param_1 + _DAT_112741864) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010bf70d80();
  _objc_release(param_3);
  *(bool *)(param_1 + _DAT_112741868) = lVar1 == 0;
  return;
}


