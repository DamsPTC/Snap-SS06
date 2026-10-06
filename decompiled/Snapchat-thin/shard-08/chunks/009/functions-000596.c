/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10674001c; end: 10674005f; -[SCMainCameraRealTimeScanActivationUpdate internalInit] */

void FUN_10674001c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2d90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106740060; end: 106740107; -[SCMainCameraRealTimeScanActivationUpdate isEqual:] */

bool FUN_106740060(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106740108; end: 10674018b; -[SCMainCameraRealTimeScanActivationUpdate matchIsSupported:isUnsupported:] */

void FUN_106740108(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_106740170;
    lVar2 = 0x11;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106740170;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined1 *)(param_1 + lVar2));
LAB_106740170:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10674018c; end: 106740267; -[SCScanCapturerImpl initWithCameraHardwareServicesAPI:] */

undefined1 * FUN_10674018c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2d98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106740268; end: 1067402bb; -[SCScanCapturerImpl dealloc] */

void FUN_106740268(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f2d98;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1067402bc; end: 1067403f3; -[SCScanCapturerImpl beginScanningWithFrameModifier:frameSelector:frameAnalyzer:] */

void FUN_1067402bc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067403f4; end: 10674042b;  */

void FUN_1067403f4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10674042c; end: 1067404d3; -[SCScanCapturerImpl endScanning] */

void FUN_10674042c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f8240(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1067404d4; end: 1067404ff;  */

void FUN_1067404d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106740500; end: 1067405df; -[SCScanCapturerImpl startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_106740500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1067405e0; end: 10674068b;  */

void FUN_1067405e0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10674068c; end: 1067406eb;  */

void FUN_10674068c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1494c0(param_2);
  _objc_release(param_2);
  func_0x00010bdff540(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067406ec; end: 106740717; -[SCScanCapturerImpl stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_1067406ec(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106740718; end: 10674077b; -[SCScanCapturerImpl _didReceiveManagedVideoDataSourceEvent:] */

void FUN_106740718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_10674110c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfc640(param_1,param_2,param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10674077c; end: 10674086b; -[SCScanCapturerImpl _beginScanningWithFrameModifier:frameSelector:frameAnalyzer:] */

void FUN_10674077c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  func_0x00010bddb4c0(param_1,param_2,0);
  puVar1 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x3ff0000000000000,PTR_PTR_1126bc890,param_2,param_1,PTR_s__capture__1125546d0
                      ,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10674086c; end: 1067408bb; -[SCScanCapturerImpl _endScanning] */

void FUN_10674086c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067408bc; end: 1067408fb; -[SCScanCapturerImpl _capture:] */

void FUN_1067408bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef86c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067408fc; end: 1067409fb; -[SCScanCapturerImpl _didCaptureFrame:] */

void FUN_1067408fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf70d80();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = uVar2;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067409fc; end: 106740a33;  */

void FUN_1067409fc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106740a34; end: 106740b0b; -[SCScanCapturerImpl _didCaptureFrame:devicePosition:] */

void FUN_106740a34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d04a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef74c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c1596a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf02880(uVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e920();
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106740b0c; end: 106740b23; -[SCScanCapturerImpl delegate] */

void FUN_106740b0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106740b24; end: 106740b2f; -[SCScanCapturerImpl setDelegate:] */

void FUN_106740b24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106740b30; end: 106740ba3; -[SCScanCapturerImpl .cxx_destruct] */

void FUN_106740b30(long param_1)

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



/* Entry: 106740ba4; end: 106740c47; -[SCScanBarcodeFrameAnalyzer initWithModelKey:modelProvider:] */

undefined1 *
FUN_106740ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2da0;
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



/* Entry: 106740c48; end: 106740e77; -[SCScanBarcodeFrameAnalyzer analyzeFrame:] */

void FUN_106740c48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d0160();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf04b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf15b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf6f920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      lVar3 = lVar2;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      puVar7 = PTR_PTR_1126cd598;
      puVar6 = PTR____NSArray0__struct_11034ab48;
      if (lVar4 != 0) {
        lVar3 = lVar2;
        func_0x00010c0ec5e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15c00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar5);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106740e78; end: 106740ea7; -[SCScanBarcodeFrameAnalyzer .cxx_destruct] */

void FUN_106740e78(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106740ea8; end: 106740f1b; -[SCScanCropScaleFrameModifier initWithCropRect:scaleToFitSize:] */

void FUN_106740ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f2da8;
  uStack_50 = param_7;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
  }
  return;
}



/* Entry: 106740f1c; end: 106740f97; -[SCScanCropScaleFrameModifier initWithCenteredCropRect:scaleToFitSize:] */

void FUN_106740f1c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2da8;
  puVar1 = &uStack_30;
  uStack_30 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    auVar2._8_8_ = param_4;
    auVar2._0_8_ = param_3;
    auVar3 = NEON_fmov(0x3ff0000000000000,8);
    auVar4._8_8_ = -(ulong)(auVar3._8_8_ < param_4);
    auVar4._0_8_ = -(ulong)(auVar3._0_8_ < param_3);
    auVar2 = auVar2 ^ (auVar2 ^ auVar3) & auVar4;
    auVar4 = NEON_fmov(0x3fe0000000000000,8);
    puVar1[2] = (auVar3._8_8_ - auVar2._8_8_) * auVar4._8_8_;
    puVar1[1] = (auVar3._0_8_ - auVar2._0_8_) * auVar4._0_8_;
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    puVar1[5] = param_5;
    puVar1[6] = param_6;
  }
  return;
}



/* Entry: 106740f98; end: 10674110b; -[SCScanCropScaleFrameModifier modifyFrame:] */

void FUN_106740f98(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar4 = 0;
    goto LAB_106741084;
  }
  func_0x00010c23d0a0(param_5);
  if ((((param_1 <= 0.0) || (func_0x00010c23d0a0(param_5), param_2 <= 0.0)) ||
      (*(double *)(param_3 + 0x28) <= 0.0)) || (*(double *)(param_3 + 0x30) <= 0.0)) {
    _objc_retain(param_5);
    lVar4 = param_5;
    goto LAB_106741084;
  }
  lVar2 = param_5;
  func_0x00010bfe9820(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = *(double *)(param_3 + 8);
  dVar6 = *(double *)(param_3 + 0x10);
  lVar3 = lVar2;
  func_0x00010bf5c880(dVar5,dVar6,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  dVar7 = *(double *)(param_3 + 0x28);
  func_0x00010c23d0a0();
  dVar8 = *(double *)(param_3 + 0x30);
  dVar7 = dVar7 / dVar5;
  func_0x00010c23d0a0(lVar3);
  dVar8 = dVar8 / dVar6;
  dVar5 = 1.0;
  bVar1 = false;
  if ((dVar7 < 1.0) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar8))) {
    bVar1 = dVar7 < dVar8;
  }
  lVar4 = lVar3;
  if (bVar1) {
    func_0x00010c23d0a0(lVar3);
    dVar5 = dVar7 * dVar5;
    func_0x00010c23d0a0(lVar3);
    dVar8 = dVar7 * dVar6;
LAB_1067410dc:
    func_0x00010c14e6c0(dVar5,dVar8,0x3ff0000000000000,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    bVar1 = false;
    if ((dVar8 < dVar7) && (bVar1 = false, !NAN(dVar8))) {
      bVar1 = dVar8 < 1.0;
    }
    if (bVar1) {
      func_0x00010c23d0a0(lVar3);
      dVar5 = dVar8 * dVar5;
      func_0x00010c23d0a0(lVar3);
      dVar8 = dVar8 * dVar6;
      goto LAB_1067410dc;
    }
    _objc_retain(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_106741084:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10674110c; end: 10674132f;  */

void FUN_10674110c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  _CMSampleBufferGetImageBuffer();
  _CVPixelBufferLockBaseAddress();
  uVar1 = param_1;
  _CVPixelBufferGetWidth();
  uVar2 = param_1;
  _CVPixelBufferGetHeight();
  uVar3 = param_1;
  _CVPixelBufferGetBaseAddressOfPlane(param_1,0);
  uVar4 = param_1;
  _CVPixelBufferGetBytesPerRowOfPlane(param_1,0);
  uVar5 = param_1;
  _CVPixelBufferGetBaseAddressOfPlane(param_1,1);
  uVar6 = param_1;
  _CVPixelBufferGetBytesPerRowOfPlane(param_1,1);
  lVar18 = uVar1 * 4;
  lVar7 = lVar18 * uVar2;
  _malloc();
  if (uVar2 != 0) {
    uVar10 = 0;
    puVar11 = (undefined1 *)(lVar7 + 3);
    do {
      if (uVar1 != 0) {
        uVar12 = 0;
        lVar13 = uVar5 + (uVar10 >> 1 & 0x7fffffff) * uVar6;
        puVar14 = puVar11;
        do {
          dVar19 = (double)NEON_ucvtf((ulong)*(byte *)(uVar3 + uVar12));
          dVar20 = (double)(int)(*(byte *)(lVar13 + 1 + (uVar12 & 0xfffffffe)) - 0x80);
          dVar21 = (double)(int)(*(byte *)(lVar13 + (uVar12 & 0x7ffffffe)) - 0x80);
          uVar15 = (uint)(dVar19 + dVar20 * 1.4);
          uVar16 = (uint)(dVar19 + dVar21 * -0.343 + dVar20 * -0.711);
          uVar17 = (uint)(dVar19 + dVar21 * 1.765);
          puVar14[-3] = 0xff;
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar17) {
            uVar17 = 0xff;
          }
          puVar14[-2] = (char)uVar17;
          uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar16) {
            uVar16 = 0xff;
          }
          uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
          puVar14[-1] = (char)uVar16;
          if (0xfe < (int)uVar15) {
            uVar15 = 0xff;
          }
          *puVar14 = (char)uVar15;
          uVar12 = uVar12 + 1;
          puVar14 = puVar14 + 4;
        } while (uVar1 != uVar12);
      }
      uVar10 = uVar10 + 1;
      uVar3 = uVar3 + uVar4;
      puVar11 = puVar11 + lVar18;
    } while (uVar10 != uVar2);
  }
  lVar13 = lVar7;
  _CGColorSpaceCreateDeviceRGB();
  lVar8 = lVar7;
  _CGBitmapContextCreate(lVar7,uVar1,uVar2,8,lVar18,lVar13,0x2005);
  lVar18 = lVar8;
  _CGBitmapContextCreateImage();
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9260(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGContextRelease(lVar8);
  _CGColorSpaceRelease(lVar13);
  _CGImageRelease(lVar18);
  _free(lVar7);
  _CVPixelBufferUnlockBaseAddress(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106741330; end: 1067413eb; -[SCScanMaxDimensionScaleFrameModifier modifyFrame:] */

void FUN_106741330(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    if (param_1 <= param_2) {
      param_1 = param_2;
    }
    lVar1 = param_5;
    if (480.0 <= param_1) {
      dVar2 = 480.0;
      dVar3 = 480.0 / param_1;
      func_0x00010c23d0a0(param_5);
      func_0x00010c23d0a0(param_5);
      func_0x00010c14e6c0(dVar3 * param_1,dVar3 * dVar2,0x3ff0000000000000,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_5);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067413ec; end: 10674146b; -[SCScanScaleFrameModifier modifyFrame:] */

void FUN_1067413ec(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (param_5 == 0) {
    lVar1 = 0;
  }
  else {
    _objc_retain(param_5);
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    lVar1 = param_5;
    func_0x00010c14e6c0(param_1 * (480.0 / param_2),0x407e000000000000,0x3ff0000000000000,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10674146c; end: 106741577; -[SCScanBarcodeFrameSelector initWithModelKey:modelProvider:] */

undefined1 *
FUN_10674146c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2db0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106741578; end: 106741653; -[SCScanBarcodeFrameSelector addCandidateFrame:] */

void FUN_106741578(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106741654; end: 106741687;  */

void FUN_106741654(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc6300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106741688; end: 106741793; -[SCScanBarcodeFrameSelector selectedFrame] */

void FUN_106741688(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106741794;
  uStack_30 = 0x1067417a4;
  uStack_28 = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106741794; end: 1067417ab;  */

void FUN_106741794(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067417ac; end: 1067417fb;  */

void FUN_1067417ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be9de60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067417fc; end: 1067418a3; -[SCScanBarcodeFrameSelector reset] */

void FUN_1067417fc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f8240(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1067418a4; end: 1067418cf;  */

void FUN_1067418a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067418d0; end: 106741a7b; -[SCScanBarcodeFrameSelector _addCandidateFrame:] */

void FUN_1067418d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d0160();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf04b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf15b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_60 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf6f920(lVar5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c265b00();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(puVar6);
      if (lVar1 != 0) {
        _objc_retain(param_3);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        *(long *)(param_1 + 0x20) = param_3;
        _objc_release(uVar7);
      }
    }
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106741a7c; end: 106741aa3; -[SCScanBarcodeFrameSelector _selectedFrame] */

void FUN_106741a7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106741aa4; end: 106741ab3; -[SCScanBarcodeFrameSelector _reset] */

void FUN_106741aa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106741ab4; end: 106741afb; -[SCScanBarcodeFrameSelector .cxx_destruct] */

void FUN_106741ab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106741afc; end: 106741b5f; -[SCScanNaiveFrameSelector init] */

undefined1 * FUN_106741afc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2db8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106741b60; end: 106741b6f; -[SCScanNaiveFrameSelector addCandidateFrame:] */

void FUN_106741b60(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 106741b70; end: 106741b77; -[SCScanNaiveFrameSelector selectedFrame] */

void FUN_106741b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 106741b78; end: 106741b7f; -[SCScanNaiveFrameSelector reset] */

void FUN_106741b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106741b80; end: 106741b8b; -[SCScanNaiveFrameSelector .cxx_destruct] */

void FUN_106741b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106741b8c; end: 106741c0f; -[SCScanTimeoutGatedFrameSelector initWithFrameSelector:timeout:] */

undefined1 *
FUN_106741b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2dc0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106741c10; end: 106741c63; -[SCScanTimeoutGatedFrameSelector dealloc] */

void FUN_106741c10(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f2dc0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106741c64; end: 106741cc3; -[SCScanTimeoutGatedFrameSelector addCandidateFrame:] */

void FUN_106741c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be9b8e0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef74c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106741cc4; end: 106741d2b; -[SCScanTimeoutGatedFrameSelector selectedFrame] */

void FUN_106741cc4(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = *(char *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1596a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (cVar1 == '\x01') {
    if (lVar2 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
    }
    _objc_retain(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106741d2c; end: 106741d5f; -[SCScanTimeoutGatedFrameSelector reset] */

void FUN_106741d2c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 106741d60; end: 106741e7f; -[SCScanTimeoutGatedFrameSelector _scheduleUngateIfNecessary] */

void FUN_106741d60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c270920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106741e80; end: 106741eab;  */

void FUN_106741e80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed10c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106741eac; end: 106741eb7; -[SCScanTimeoutGatedFrameSelector _ungate] */

void FUN_106741eac(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 106741eb8; end: 106741ef3; -[SCScanTimeoutGatedFrameSelector .cxx_destruct] */

void FUN_106741eb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106741ef4; end: 106741f57; +[SCScanFrameAnalysisResult barcodeResultWithResult:] */

void FUN_106741ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd598;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106741f58; end: 106741f7b; -[SCScanFrameAnalysisResult copyWithZone:] */

undefined8 FUN_106741f58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106741f7c; end: 106741fdb; -[SCScanFrameAnalysisResult hash] */

void FUN_106741f7c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f2dc8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106741fdc; end: 10674201f; -[SCScanFrameAnalysisResult internalInit] */

void FUN_106741fdc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2dc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106742020; end: 1067420bf; -[SCScanFrameAnalysisResult isEqual:] */

long FUN_106742020(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067420a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1067420a4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1067420a4;
    }
  }
  lVar3 = 1;
LAB_1067420a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067420c0; end: 1067420df; -[SCScanFrameAnalysisResult matchBarcodeResult:] */

void FUN_1067420c0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001067420d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 1067420e0; end: 1067420eb; -[SCScanFrameAnalysisResult .cxx_destruct] */

void FUN_1067420e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067420ec; end: 106742187; -[MockScanCapturer initWithCameraHardwareServices:convertImageToBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067420ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f2dd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274f414;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274f418) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106742188; end: 1067421ab; -[MockScanCapturer captureSession] */

void FUN_106742188(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0e0560(param_1,param_2,&PTR____CFConstantStringClassReference_110e5abf8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067421ac; end: 106742353; -[MockScanCapturer observableForImageNamed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067421ac(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + _DAT_11274f414);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf70d80();
  uVar1 = 1;
  if (lVar5 == 1) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (lVar5 != -1) {
    uVar2 = uVar1;
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126b3140;
  func_0x00010bf30ee0(PTR_PTR_1126b3140,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if ((param_1[_DAT_11274f418] & 1) == 0) {
    param_1 = PTR_PTR_1126b30f8;
    func_0x00010bfe94a0(PTR_PTR_1126b30f8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be9ad00(param_1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126b3100;
  func_0x00010bfe9500(PTR_PTR_1126b3100,param_2,param_1,
                      &PTR____CFConstantStringClassReference_110daafd8,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010c0e0560();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106742354; end: 106742377; -[MockScanCapturer observableForSnapcode] */

void FUN_106742354(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0e0560(param_1,param_2,&PTR____CFConstantStringClassReference_110e5abf8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106742378; end: 1067424c3; -[MockScanCapturer _scannableImageWithPixelBufferForImage:] */

void FUN_106742378(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = 90.0;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8a20(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  lVar6 = (long)dVar7;
  lVar1 = lVar6 + 0xf;
  if (-1 < lVar6) {
    lVar1 = lVar6;
  }
  dVar7 = (double)(lVar1 >> 4) * 16.0;
  func_0x00010c23d0a0(puVar2);
  lVar6 = (long)param_2;
  lVar1 = lVar6 + 0xf;
  if (-1 < lVar6) {
    lVar1 = lVar6;
  }
  dVar8 = (double)(lVar1 >> 4);
  dVar9 = dVar8 * 16.0;
  func_0x00010c23d0a0(puVar2);
  func_0x00010c23d0a0(puVar2);
  puVar3 = puVar2;
  func_0x00010bf5c7a0(((double)(long)dVar8 - dVar7) * 0.5,((double)(long)param_2 - dVar9) * 0.5,
                      dVar7,dVar9,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bcab8;
  _objc_alloc(PTR_PTR_1126bcab8);
  puVar5 = puVar3;
  func_0x00010bf54240(puVar3);
  func_0x00010c036160(puVar4,param_4,puVar5);
  puVar5 = PTR_PTR_1126b30f8;
  func_0x00010c0fca20(PTR_PTR_1126b30f8,param_4,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067424c4; end: 1067424d7; -[MockScanCapturer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067424c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f414,0);
  return;
}



/* Entry: 1067424d8; end: 10674255b; -[SCScanCapturer processImageMetadata:] */

void FUN_1067424d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cd5a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd5a8;
  _objc_alloc(PTR_PTR_1126cd5a8);
  func_0x00010bff8d00();
  _objc_release(param_3);
  func_0x00010bffcae0(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674255c; end: 1067425d3; -[SCScanImageMetadataBlockProcessor initWithBlock:] */

undefined1 * FUN_10674255c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2dd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067425d4; end: 1067425e3; -[SCScanImageMetadataBlockProcessor imageMetadataForImage:] */

void FUN_1067425d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001067425e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1067425e4; end: 1067425ef; -[SCScanImageMetadataBlockProcessor .cxx_destruct] */

void FUN_1067425e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067425f0; end: 1067426ef; -[SCScanProcessImageMetadataCapturer initWithCapturer:imageMetadataProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1067425f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2de0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274f420;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1067426f0;
    puStack_60 = &UNK_1109382e0;
    _objc_retain(param_4);
    ppuVar3 = &puStack_78;
    uStack_58 = param_4;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f424);
    *(undefined ***)((long)puVar1 + (long)_DAT_11274f424) = ppuVar3;
    _objc_release(uVar2);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067426f0; end: 10674282f;  */

void FUN_1067426f0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bfe81c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b3100;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar7 = param_2;
  }
  else {
    puVar3 = PTR_PTR_1126b30f8;
    func_0x00010bfe94a0(PTR_PTR_1126b30f8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe81e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9500(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106742830; end: 106742897; -[SCScanProcessImageMetadataCapturer captureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106742830(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f420);
  func_0x00010bf31140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106742898; end: 1067428d7; -[SCScanProcessImageMetadataCapturer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106742898(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f424,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f420,0);
  return;
}



/* Entry: 1067428d8; end: 1067428db; -[SCScanCapturer capturer] */

void FUN_1067428d8(void)

{
  return;
}



/* Entry: 1067428dc; end: 1067428e3; -[SCScanCapturer captureSession] */

undefined8 FUN_1067428dc(void)

{
  return 0;
}



/* Entry: 1067428e4; end: 106742a7f; -[SCScanThrottledFrameCapturer initWithCameraHardwareServices:deviceMotionManager:fps:limit:pixelBufferEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067428e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f2de8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11274f428;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274f42c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f430) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f434) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274f438) = param_7;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f43c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f43c) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f440);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f440) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cd5b0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f444);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f444) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11274f448) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106742a80; end: 106742bdf; -[SCScanThrottledFrameCapturer captureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106742a80(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = (long)_DAT_11274f44c;
  puVar2 = *(undefined **)(param_1 + lVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274f428);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef86c0();
    _objc_release(uVar1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    _objc_retain(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106742be0; end: 106742dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106742be0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar5 = (long)_DAT_11274f448;
    _os_unfair_lock_lock(lVar1 + lVar5);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274f44c);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106742dbc;
    puStack_70 = &UNK_1109381d0;
    _objc_retain(param_2);
    puStack_b0 = puVar3;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x106742dc8;
    puStack_98 = &UNK_110842e18;
    uStack_68 = param_2;
    _objc_retain(param_2);
    uStack_90 = param_2;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
    puVar3 = PTR_PTR_1126b0418;
    _objc_copyWeak(auStack_b8,param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uVar4);
    _objc_release(uStack_90);
    _objc_release(uStack_68);
    _os_unfair_lock_unlock(lVar1 + lVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106742dbc; end: 106742dcf;  */

void FUN_106742dbc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 106742dd0; end: 106742e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106742dd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_11274f448;
    _os_unfair_lock_lock(lVar1 + lVar3);
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -1;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010c256480();
      _objc_release(param_1);
    }
    _os_unfair_lock_unlock(lVar1 + lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106742e78; end: 106742ebf; -[SCScanThrottledFrameCapturer _isDeviceInMotion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106742e78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f42c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070860();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106742ec0; end: 1067430d3; -[SCScanThrottledFrameCapturer _didReceiveEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106742ec0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1067430d4;
    uStack_70 = 0x1067430e4;
    uStack_68 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    lVar4 = param_3;
    func_0x00010c0bd5e0(param_3);
    puVar3 = PTR_PTR_1126b3100;
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274f44c);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b3140;
    func_0x00010bf30ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9500(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar4);
    __Block_object_dispose(&uStack_b0,8);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b0,8);
  lVar4 = 8;
  __Block_object_dispose(&uStack_90);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1067430d4; end: 1067430eb;  */

void FUN_1067430d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067430ec; end: 106743223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067430ec(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274f438) == '\x01') {
    lVar4 = param_2;
    func_0x00010c1494c0();
    _CMSampleBufferGetImageBuffer();
    puVar2 = PTR_PTR_1126b30f8;
    if (lVar4 == 0) goto LAB_1067431e0;
    puVar5 = PTR_PTR_1126bcab8;
    _objc_alloc(PTR_PTR_1126bcab8);
    func_0x00010c036160();
    func_0x00010c0fca20();
    _objc_retainAutoreleasedReturnValue();
LAB_1067431c0:
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  else {
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11274f444);
    func_0x00010c1494c0(param_2);
    func_0x00010bfe7be0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b30f8;
      func_0x00010bfe94a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1067431c0;
    }
  }
  _objc_release(puVar5);
LAB_1067431e0:
  uVar3 = 1;
  if (param_4 == 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (param_4 != -1) {
    uVar1 = uVar3;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
  func_0x00010c1494c0(param_2);
  _CFRelease();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106743224; end: 10674323b; -[SCScanThrottledFrameCapturer _resetDataSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106743224(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f44c);
  *(undefined8 *)(param_1 + _DAT_11274f44c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10674323c; end: 1067434bb; -[SCScanThrottledFrameCapturer startObservingManagedVideoDataSourceOutputEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10674323c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11274f450;
  if (*(long *)(param_1 + lVar6) == 0) {
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    dVar7 = *(double *)(param_1 + _DAT_11274f430);
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1067434bc;
    puStack_b8 = &UNK_110938370;
    puStack_90 = &uStack_98;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar2 = param_3;
    puStack_b0 = &uStack_98;
    dStack_a0 = 1.0 / dVar7;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar2;
    if (0 < *(long *)(param_1 + _DAT_11274f434)) {
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106743784;
    puStack_e0 = &UNK_11084eff0;
    _objc_copyWeak(auStack_d8,auStack_78);
    _objc_copyWeak(auStack_100,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_a8);
    __Block_object_dispose(&uStack_98,8);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1067434bc; end: 106743567;  */

undefined8 FUN_1067434bc(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010be3f900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar4 = param_2 + 0x28;
    _objc_loadWeakRetained(lVar4);
    lVar3 = lVar4;
    func_0x00010c26f600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec800();
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    if (*(double *)(param_2 + 0x30) <= param_1 - *(double *)(lVar4 + 0x18)) {
      *(double *)(lVar4 + 0x18) = param_1;
      return 1;
    }
  }
  return 0;
}



/* Entry: 106743568; end: 10674371f;  */

void FUN_106743568(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_90 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1067430d4;
  uStack_40 = 0x1067430e4;
  uStack_38 = 0;
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0xffffffffffffffff;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106743720;
  puStack_98 = &UNK_1109383e0;
  puStack_78 = puStack_88;
  puStack_58 = puStack_90;
  func_0x00010c0bd5e0(param_2);
  lVar1 = puStack_58[5];
  func_0x00010c1494c0();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1494c0(puStack_58[5]);
    _CFRetain();
    puVar2 = PTR_PTR_1126cd5b8;
    puVar3 = PTR_PTR_1126ae750;
    _CMTimeMake(auStack_c8,0,0);
    func_0x00010bf78160(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106743720; end: 106743783;  */

void FUN_106743720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106743784; end: 10674382b;  */

void FUN_106743784(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bf0a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10674382c; end: 10674389f;  */

void FUN_10674382c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067438a0; end: 106743973; -[SCScanThrottledFrameCapturer stopObservingManagedVideoDataSourceOutputEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067438a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = (long)_DAT_11274f450;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f43c);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106743974; end: 10674399f;  */

void FUN_106743974(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067439a0; end: 1067439af; -[SCScanThrottledFrameCapturer timeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067439a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f440);
}


