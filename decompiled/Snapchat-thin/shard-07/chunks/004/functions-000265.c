/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054cc960; end: 1054cca03; -[SCCameraHardwareRequestHandler submitBarrierForDependentOperation:] */

void FUN_1054cc960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9dc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126b9dc8;
  _objc_alloc(PTR_PTR_1126b9dc8);
  func_0x00010c00a2c0();
  func_0x00010bef7d60();
  func_0x00010bef7d60(param_3,param_2,puVar1);
  _objc_release(param_3);
  func_0x00010befa340(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010befa340(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054cca04; end: 1054cca6f; -[SCCameraHardwareRequestHandler .cxx_destruct] */

void FUN_1054cca04(long param_1)

{
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



/* Entry: 1054cca70; end: 1054cca77; -[SCCameraHardwareBarrierStartOperation type] */

undefined8 FUN_1054cca70(void)

{
  return 0x80;
}



/* Entry: 1054cca78; end: 1054cca7f; -[SCCameraHardwareBarrierStartOperation execute] */

undefined8 FUN_1054cca78(void)

{
  return 0;
}



/* Entry: 1054cca80; end: 1054cca83; -[SCCameraHardwareBarrierStartOperation publishState:] */

void FUN_1054cca80(void)

{
  return;
}



/* Entry: 1054cca84; end: 1054ccb3f; -[SCCameraHardwareBarrierStartOperation expectedStates] */

undefined * FUN_1054cca84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x00010bf728a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9d70;
  puStack_48 = puVar1;
  func_0x00010bf728c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x100;
}



/* Entry: 1054ccb40; end: 1054ccb47; -[SCCameraHardwareBarrierStopOperation type] */

undefined8 FUN_1054ccb40(void)

{
  return 0x100;
}



/* Entry: 1054ccb48; end: 1054ccb4f; -[SCCameraHardwareBarrierStopOperation execute] */

undefined8 FUN_1054ccb48(void)

{
  return 0;
}



/* Entry: 1054ccb50; end: 1054ccb53; -[SCCameraHardwareBarrierStopOperation publishState:] */

void FUN_1054ccb50(void)

{
  return;
}



/* Entry: 1054ccb54; end: 1054ccbe7; -[SCCameraHardwareBarrierStopOperation expectedStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1054ccb54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar5 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x00010bf728a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_90;
  _objc_retain(uVar6);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puStack_88 = PTR_PTR_1126e8a28;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(&puStack_90,PTR_s_initWithDelegate__1125e0280,ppuVar5);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar3 + (long)_DAT_112724668),uVar6);
    lVar7 = (long)_DAT_11272466c;
    _objc_retain(in_x5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + lVar7);
    *(undefined8 *)((long)ppuVar3 + lVar7) = in_x5;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)ppuVar3 + (long)_DAT_112724670),in_x4);
    _objc_storeWeak((undefined1 *)((long)ppuVar3 + (long)_DAT_112724674),in_x7);
    lVar7 = (long)_DAT_112724678;
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + lVar7);
    *(undefined8 *)((long)ppuVar3 + lVar7) = in_x6;
    _objc_release(uVar4);
  }
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(uVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1054ccbe8; end: 1054ccd1f; -[SCCameraHardwareStopOperation initWithDelegate:managedCaptureSession:cameraHardwareResource:deviceSubjectAreaHandler:systemConfiguration:streamingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1054ccbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e8a28;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithDelegate__1125e0280,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112724668),param_4);
    lVar3 = (long)_DAT_11272466c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112724670),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112724674),param_8);
    lVar3 = (long)_DAT_112724678;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1054ccd20; end: 1054cd0ab; -[SCCameraHardwareStopOperation execute] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ccd20(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = (long)_DAT_112724668;
  lVar12 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar12);
  lVar1 = param_1 + _DAT_112724674;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c256ba0(lVar12,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar12);
  uVar2 = param_1 + lVar11;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bfd41c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar12 = (long)_DAT_112724670;
    uVar2 = param_1 + lVar12;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c273200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b600();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      lVar1 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar1);
      lVar5 = lVar1;
      func_0x00010c252680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1afd00();
      _objc_release(lVar5);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c2568a0();
      _objc_release(lVar1);
      lVar1 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar1);
      lVar5 = lVar1;
      func_0x00010bf093a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
      _objc_release(lVar5);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar1);
      lVar5 = lVar1;
      func_0x00010c299c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256b60();
      _objc_release(lVar5);
      _objc_release(lVar1);
      lVar11 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c1b2aa0();
      _objc_release(lVar11);
      lVar1 = param_1 + lVar12;
      _objc_loadWeakRetained();
      lVar11 = lVar1;
      func_0x00010c0dc8e0();
      _objc_release(lVar1);
      if ((int)lVar11 != 0) {
        lVar1 = param_1 + lVar12;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c1ce5e0();
        _objc_release(lVar1);
        func_0x00010c2563c0(*(undefined8 *)(param_1 + _DAT_11272466c));
        puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1 + lVar12;
        _objc_loadWeakRetained(lVar1);
        lVar11 = lVar1;
        func_0x00010c160360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d5c0(puVar6,param_2,lVar11,
                            *(undefined8 *)PTR__AVCaptureSessionRuntimeErrorNotification_110347fb0,0
                           );
        _objc_release(lVar11);
        _objc_release(lVar1);
        _objc_release(puVar6);
      }
      puVar6 = PTR_PTR_1126b6fe8;
      lVar1 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar1);
      lVar11 = lVar1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7ec0(puVar6,param_2,lVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar1);
      puVar7 = puVar6;
      func_0x00010c2a8da0(puVar6,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2b0f40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010bdf71e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c2b9ec0(puVar8,param_2,lVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c209fc0();
      _objc_release(lVar1);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(lVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      param_1 = param_1 + lVar12;
      _objc_loadWeakRetained(param_1);
      lVar12 = param_1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      goto LAB_1054cd08c;
    }
  }
  lVar12 = 0;
LAB_1054cd08c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return;
}



/* Entry: 1054cd0ac; end: 1054cd12f; -[SCCameraHardwareStopOperation publishState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cd0ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112724670;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c160440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fdc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cd130; end: 1054cd137; -[SCCameraHardwareStopOperation type] */

undefined8 FUN_1054cd130(void)

{
  return 4;
}



/* Entry: 1054cd138; end: 1054cd1cb; -[SCCameraHardwareStopOperation expectedStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cd138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x00010bf728c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b7050;
    _objc_alloc(PTR_PTR_1126b7050);
    lVar8 = (long)_DAT_112724668;
    puVar3 = puVar1 + lVar8;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c29b480();
    puVar5 = puVar1 + lVar8;
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010bfbb220();
    puVar1 = puVar1 + lVar8;
    _objc_loadWeakRetained(puVar1);
    puVar7 = puVar1;
    func_0x00010c121e40();
    func_0x00010c0072e0(puVar2,param_2,puVar4,puVar6,puVar7);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054cd1cc; end: 1054cd283; -[SCCameraHardwareStopOperation _currentStabilizationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cd1cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b7050;
  _objc_alloc(PTR_PTR_1126b7050);
  lVar6 = (long)_DAT_112724668;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29b480();
  lVar4 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfbb220();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c121e40();
  func_0x00010c0072e0(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054cd284; end: 1054cd2e7; -[SCCameraHardwareStopOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cd284(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724678,0);
  _objc_destroyWeak(param_1 + _DAT_112724674);
  _objc_storeStrong(param_1 + _DAT_11272466c,0);
  _objc_destroyWeak(param_1 + _DAT_112724670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724668);
  return;
}



/* Entry: 1054cd2e8; end: 1054cd2eb; -[SCMockARSession pause] */

void FUN_1054cd2e8(void)

{
  return;
}



/* Entry: 1054cd2ec; end: 1054cd303; -[SCMockARSession delegate] */

void FUN_1054cd2ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054cd304; end: 1054cd30f; -[SCMockARSession setDelegate:] */

void FUN_1054cd304(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1054cd310; end: 1054cd317; -[SCMockARSession delegateQueue] */

undefined8 FUN_1054cd310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054cd318; end: 1054cd347; -[SCMockARSession setDelegateQueue:] */

void FUN_1054cd318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054cd348; end: 1054cd373; -[SCMockARSession .cxx_destruct] */

void FUN_1054cd348(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054cd374; end: 1054cd38f; +[SCARSession arSession] */

void FUN_1054cd374(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___ARSession_1126b9de8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054cd390; end: 1054cd3df; -[SCManagedCaptureDeviceSubjectAreaHandler stopObserving] */

void FUN_1054cd390(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054cd3e0; end: 1054cd3eb; -[SCManagedCaptureDeviceSubjectAreaHandler pauseAutoExposureAdjustment] */

void FUN_1054cd3e0(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1054cd3ec; end: 1054cd41f; -[SCManagedCaptureDeviceSubjectAreaHandler dealloc] */

void FUN_1054cd3ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e8a30;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1054cd420; end: 1054cd477; -[SCManagedCaptureDeviceSubjectAreaHandler _shouldAdjustExposureBasedOnFaceDetection] */

bool FUN_1054cd420(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c252440(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf70d80();
    bVar1 = lVar3 == 0;
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1054cd478; end: 1054cd60b; -[SCManagedCaptureDeviceSubjectAreaHandler startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_1054cd478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
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



/* Entry: 1054cd60c; end: 1054cd6af;  */

void FUN_1054cd60c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3a40(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1054cd6b0; end: 1054cd6f7;  */

void FUN_1054cd6b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cd6f8; end: 1054cd723; -[SCManagedCaptureDeviceSubjectAreaHandler stopObservingCapturerStateUpdate] */

void FUN_1054cd6f8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054cd724; end: 1054cd837; -[SCManagedCaptureDeviceSubjectAreaHandler _updateFaceBounds:] */

void FUN_1054cd724(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    *(bool *)(param_1 + 0x18) = lVar1 != 0;
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11dfc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1054cd838; end: 1054cd9af;  */

void FUN_1054cd838(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010beb25c0(), (int)lVar2 != 0)) {
    uVar3 = *(ulong *)(lVar1 + 8);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf093c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf2fa00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c252440(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf70d80();
      uVar8 = uVar6;
      func_0x00010c070840(uVar6,param_4,uVar9);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar8 != 0) {
        func_0x00010be5dbe0(lVar1,param_4,*(undefined8 *)(param_3 + 0x20));
        uVar9 = *(undefined8 *)(lVar1 + 0x10);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010bfb35a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8fbc0();
        _objc_release(uVar6);
        _objc_release(uVar9);
        uVar9 = *(undefined8 *)(lVar1 + 0x10);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010bf9d820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199080(param_1,param_2);
        _objc_release(uVar6);
        _objc_release(uVar9);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054cd9b0; end: 1054cdb4f; -[SCManagedCaptureDeviceSubjectAreaHandler _maxFaceRectCenter:] */

undefined1  [16]
FUN_1054cd9b0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dStack_168;
  double dStack_160;
  double dStack_158;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_158 = *(double *)PTR__CGRectZero_110347608;
  dStack_160 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar14 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dStack_168 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  dVar5 = 0.0;
  dVar9 = dStack_158;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 != 0) {
    dVar13 = 0.0;
    do {
      lVar4 = 0;
      dVar10 = dVar9;
      dVar11 = param_3;
      dVar12 = param_4;
      do {
        dVar6 = dVar5;
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_7);
          dVar6 = dVar5;
        }
        func_0x00010bdc1080(*(undefined8 *)(lVar4 * 8));
        dVar7 = dVar6;
        _CGRectGetWidth();
        dVar8 = dVar6;
        dVar9 = dVar10;
        param_3 = dVar11;
        param_4 = dVar12;
        _CGRectGetHeight(dVar6,dVar10,dVar11);
        dVar5 = 1.0;
        if (dVar7 * dVar8 <= 1.0) {
          dVar5 = dVar7 * dVar8;
        }
        if (dVar13 < dVar5) {
          dVar13 = dVar5;
          dVar14 = dVar11;
          dStack_168 = dVar12;
          dStack_160 = dVar10;
          dStack_158 = dVar6;
        }
        lVar4 = lVar4 + 1;
        dVar10 = dVar9;
        dVar11 = param_3;
        dVar12 = param_4;
      } while (lVar2 != lVar4);
      lVar2 = param_7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar15._0_8_ = dStack_158 + dVar14 * 0.5;
    auVar15._8_8_ = dStack_160 + dStack_168 * 0.5;
    return auVar15;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_7 + 0x28,0);
  _objc_storeStrong(param_7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_7 + 8,0);
  auVar16._8_8_ = dVar9;
  auVar16._0_8_ = dVar5;
  return auVar16;
}



/* Entry: 1054cdb50; end: 1054cdb8b; -[SCManagedCaptureDeviceSubjectAreaHandler .cxx_destruct] */

void FUN_1054cdb50(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cdb8c; end: 1054cdbff; -[SCCameraCaptureOperationBase initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1054cdb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8a38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272469c),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054cdc00; end: 1054cdc07; -[SCCameraCaptureOperationBase type] */

undefined8 FUN_1054cdc00(void)

{
  return 0;
}



/* Entry: 1054cdc08; end: 1054cdc6b; -[SCCameraCaptureOperationBase finish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cdc08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e8a38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_finish_1125c9748);
  param_1 = param_1 + _DAT_11272469c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf766a0();
  _objc_release(param_1);
  return;
}



/* Entry: 1054cdc6c; end: 1054cdd1b; -[SCCameraCaptureOperationBase start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cdc6c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_11272469c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf2d900();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a6c00();
    _objc_release(lVar3);
    puStack_38 = PTR_PTR_1126e8a38;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_start_112671080);
    return;
  }
  func_0x00010c133480(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1054cdd1c; end: 1054cdd1f; -[SCCameraCaptureOperationBase reportNotAllowedToStartError] */

void FUN_1054cdd1c(void)

{
  return;
}



/* Entry: 1054cdd20; end: 1054cdd2b; -[SCCameraCaptureOperationBase expectedStates] */

void FUN_1054cdd20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSArray_1126ae530,PTR_s_array_1125a0168);
  return;
}



/* Entry: 1054cdd2c; end: 1054cdd3b; -[SCCameraCaptureOperationBase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cdd2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272469c);
  return;
}



/* Entry: 1054cdd3c; end: 1054cdd43; -[SCCameraHardwareOperationBase type] */

undefined8 FUN_1054cdd3c(void)

{
  return 0;
}



/* Entry: 1054cdd44; end: 1054cdd4f; -[SCCameraHardwareOperationBase expectedStates] */

void FUN_1054cdd44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSArray_1126ae530,PTR_s_array_1125a0168);
  return;
}



/* Entry: 1054cdd50; end: 1054cddcb; -[SCCameraAsynchronousOperation init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1054cdd50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8a48;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127246a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127246a4) = puVar2;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127246a8) = param_1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054cddcc; end: 1054cdddf; -[SCCameraAsynchronousOperation name] */

void FUN_1054cddcc(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1054cdde0; end: 1054cde47; -[SCCameraAsynchronousOperation cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cdde0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127246a4;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c2a5c20(param_1);
  *(undefined1 *)(param_1 + _DAT_1127246ac) = 1;
  func_0x00010bf73800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar1),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1054cde48; end: 1054cdeeb; -[SCCameraAsynchronousOperation finish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cde48(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_1127246a4;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar1));
  _CACurrentMediaTime();
  lVar2 = (long)_DAT_1127246b4;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    func_0x00010c2a5c20(param_1);
    *(undefined1 *)(param_1 + lVar2) = 0;
    func_0x00010bf73800(param_1);
  }
  func_0x00010c2a5c20(param_1);
  *(undefined1 *)(param_1 + _DAT_1127246b8) = 1;
  func_0x00010bf73800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar1),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1054cdeec; end: 1054cdf87; -[SCCameraAsynchronousOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cdeec(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127246a4;
  func_0x00010c09faa0(*(undefined8 *)(param_2 + lVar2));
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_1127246b0) = param_1;
  func_0x00010c2a5c20(param_2);
  *(undefined1 *)(param_2 + _DAT_1127246b4) = 1;
  func_0x00010bf73800(param_2);
  cVar1 = *(char *)(param_2 + _DAT_1127246ac);
  func_0x00010c280b40(*(undefined8 *)(param_2 + lVar2));
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_finish_1125c9748);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b6590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_main_11260b378);
  return;
}



/* Entry: 1054cdf88; end: 1054cdf8f; -[SCCameraAsynchronousOperation isAsynchronous] */

undefined8 FUN_1054cdf88(void)

{
  return 1;
}



/* Entry: 1054cdf90; end: 1054cdf97; -[SCCameraAsynchronousOperation isConcurrent] */

undefined8 FUN_1054cdf90(void)

{
  return 1;
}



/* Entry: 1054cdf98; end: 1054cdfe3; -[SCCameraAsynchronousOperation isCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1054cdf98(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127246a4;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127246ac);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 1054cdfe4; end: 1054ce02f; -[SCCameraAsynchronousOperation isExecuting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1054cdfe4(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127246a4;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127246b4);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 1054ce030; end: 1054ce07b; -[SCCameraAsynchronousOperation isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1054ce030(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127246a4;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127246b8);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 1054ce07c; end: 1054ce08f; -[SCCameraAsynchronousOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ce07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127246a4,0);
  return;
}



/* Entry: 1054ce090; end: 1054ce0a3; -[SCCameraSynchronousOperation name] */

void FUN_1054ce090(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1054ce0a4; end: 1054ce0ab; -[SCCameraSynchronousOperation execute] */

undefined8 FUN_1054ce0a4(void)

{
  return 0;
}



/* Entry: 1054ce0ac; end: 1054ce0af; -[SCCameraSynchronousOperation publishState:] */

void FUN_1054ce0ac(void)

{
  return;
}



/* Entry: 1054ce0b0; end: 1054ce0bf; -[SCCameraSynchronousOperation stateUpdatePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1054ce0b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127246c0);
}



/* Entry: 1054ce0c0; end: 1054ce0ff; -[SCCameraSynchronousOperation setStateUpdatePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ce0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127246c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054ce100; end: 1054ce197; -[SCManagedDeviceCapacityAnalyzerHandler managedDeviceCapacityAnalyzer:didChangeLowLightCondition:] */

void FUN_1054ce100(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1054ce198; end: 1054ce227;  */

void FUN_1054ce198(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf70e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf733a0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054ce228; end: 1054ce2bf; -[SCManagedDeviceCapacityAnalyzerHandler managedDeviceCapacityAnalyzer:didChangeAdjustingExposure:] */

void FUN_1054ce228(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1054ce2c0; end: 1054ce34f;  */

void FUN_1054ce2c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf9d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72f60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054ce350; end: 1054ce3b7;  */

void FUN_1054ce350(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054ce3b8; end: 1054ce3e3; -[SCManagedDeviceCapacityAnalyzerHandler stopObservingManagedDeviceCapacityAnalyzerEvent] */

void FUN_1054ce3b8(long param_1)

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



/* Entry: 1054ce3e4; end: 1054ce47b; -[SCManagedDeviceCapacityAnalyzerHandler _didChangeLowLightCondition:] */

void FUN_1054ce3e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1054ce47c; end: 1054ce50b;  */

void FUN_1054ce47c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf70e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf733a0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054ce50c; end: 1054ce59f; -[SCManagedDeviceCapacityAnalyzerHandler _didChangeLightingCondition:] */

void FUN_1054ce50c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1054ce5a0; end: 1054ce62f;  */

void FUN_1054ce5a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf70e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73320();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054ce630; end: 1054ce65b; -[SCManagedDeviceCapacityAnalyzerHandler .cxx_destruct] */

void FUN_1054ce630(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054ce65c; end: 1054ce663; -[SCManagedDeviceCapacityAnalyzerImpl removeListener:] */

void FUN_1054ce65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stopObservingManagedDeviceCapaci_112673340);
  return;
}



/* Entry: 1054ce664; end: 1054ce68f; -[SCManagedDeviceCapacityAnalyzerImpl stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_1054ce664(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054ce690; end: 1054ce697; -[SCManagedDeviceCapacityAnalyzerImpl lowLightConditionEnabled] */

undefined1 FUN_1054ce690(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 1054ce698; end: 1054ce69f; -[SCManagedDeviceCapacityAnalyzerImpl lastBrightness] */

undefined8 FUN_1054ce698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1054ce6a0; end: 1054ce6e7; -[SCManagedDeviceCapacityAnalyzerImpl .cxx_destruct] */

void FUN_1054ce6a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ce6e8; end: 1054ce863; -[SCManagedStillImageCapturerV2 captureStillImageWithCaptureConfiguration:completionHandler:] */

void FUN_1054ce6e8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar4 = &puStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = param_4;
  _objc_release(uVar1);
  func_0x00010bf0aca0(param_4);
  if (param_1 == 0.0) {
    puVar2 = PTR_PTR_1126b9e08;
    func_0x00010bfe6fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001008e3740();
    func_0x00010c2a87a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined **)(param_2 + 0x18) = puVar3;
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  uVar1 = param_5;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_38,param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1054ce864;
  puStack_48 = &UNK_110890d28;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined ***)(param_2 + 0x28) = ppuVar4;
  _objc_release(uVar1);
  func_0x00010bec0fe0(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054ce864; end: 1054ce967;  */

void FUN_1054ce864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    _objc_retain(param_3);
    func_0x00010c0f88c0(uVar2);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1054ce968; end: 1054ce9cf;  */

void FUN_1054ce968(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    uVar3 = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))
                (lVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054ce9d0; end: 1054cea13; -[SCManagedStillImageCapturerV2 dealloc] */

void FUN_1054ce9d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126e8a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1054cea14; end: 1054cea17;  */

void FUN_1054cea14(void)

{
  return;
}



/* Entry: 1054cea18; end: 1054cea4b;  */

void FUN_1054cea18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cea4c; end: 1054cea77; -[SCManagedStillImageCapturerV2 stopObservingManagedDeviceCapacityAnalyzerEvent] */

void FUN_1054cea4c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054cea78; end: 1054ceb2f; -[SCManagedStillImageCapturerV2 _didReceiveChangeLightingConditionEvent:] */

void FUN_1054cea78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054ceb30; end: 1054ceb5f;  */

void FUN_1054ceb30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1054ceb60; end: 1054ceb8b; -[SCManagedStillImageCapturerV2 stopObservingCapturerStateUpdate] */

void FUN_1054ceb60(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x80));
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054ceb8c; end: 1054ced63; -[SCManagedStillImageCapturerV2 _startPhotoCapture] */

void FUN_1054ceb8c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  puVar3 = PTR_PTR_1126b9e10;
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lStack_48 = 0;
  func_0x00010bf30ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x70) != 0) {
      func_0x00010bf86d40();
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release(uVar4);
    }
    _objc_initWeak(auStack_50,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bfe6fe0();
    _objc_retainAutoreleasedReturnValue();
    dVar7 = 1.60807493534087e-314;
    _objc_copyWeak(auStack_58,auStack_50);
    uVar4 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010be0e5c0(param_1);
    func_0x00010bf65e60((float)dVar7,uVar4);
    func_0x00010bddb700(param_1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
  }
  else {
    func_0x00010be73b20(param_1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1054ced64; end: 1054cedb3;  */

void FUN_1054ced64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be80ee0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054cedb4; end: 1054cef27; -[SCManagedStillImageCapturerV2 _capturePhotoWithCaptureComponent:] */

void FUN_1054cedb4(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if (*(char *)(param_2 + 0x14) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bf9d7a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    if (param_1 == 0.0) {
      uVar2 = *(ulong *)(param_2 + 0x18);
      func_0x00010bf9d7c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) goto LAB_1054cee20;
    }
    else {
      _objc_release(uVar1);
    }
    *(undefined1 *)(param_2 + 0x16) = 1;
    _objc_initWeak(auStack_48,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    fVar4 = -32.0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bf9d7a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    if (fVar4 == 0.0) {
      fVar4 = *(float *)(param_2 + 0x10);
    }
    func_0x00010c0f7fe0((double)fVar4,uVar3);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
LAB_1054cee20:
    func_0x00010bf30f40(param_4);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1054cef28; end: 1054cef6f;  */

void FUN_1054cef28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x16) == '\x01')) {
    func_0x00010bf30f40(*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(lVar1 + 0x16) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054cef70; end: 1054cf1bb; -[SCManagedStillImageCapturerV2 _fallbackToVideoBufferDeadline] */

undefined8 FUN_1054cef70(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(ulong *)(param_2 + 0x18);
  func_0x00010c0773c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf70d80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x88);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfe7000();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131d00();
      goto LAB_1054cf188;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
  func_0x00010c0773c0();
  if (iVar1 != 0) {
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf70d80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x88);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfe7000();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b69a0();
      goto LAB_1054cf188;
    }
  }
  uVar2 = *(ulong *)(param_2 + 0x18);
  func_0x00010c0773c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf70d80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x88);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfe7000();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131a60();
      goto LAB_1054cf188;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
  func_0x00010c0773c0();
  if (iVar1 == 0) {
    return 0;
  }
  lVar3 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf70d80();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe7000();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b6640();
LAB_1054cf188:
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  return param_1;
}



/* Entry: 1054cf1bc; end: 1054cf2bf; -[SCManagedStillImageCapturerV2 _processEvent:] */

void FUN_1054cf1bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c24d4a0();
  *(bool *)(param_1 + 0xa0) = lVar1 - 1U < 3;
  *(bool *)(param_1 + 0xa1) = lVar1 == 3;
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_48,auStack_38);
  lStack_40 = lVar1;
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054cf2c0; end: 1054cf3ab;  */

void FUN_1054cf2c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1054cf398;
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 < 3) {
    if (lVar4 != 0) {
      if (lVar4 == 1) {
        func_0x00010be84640(lVar1);
      }
      goto LAB_1054cf398;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf987e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be73b20(lVar1,param_2,0,uVar3);
  }
  else {
    if (lVar4 == 3) {
      func_0x00010be83ee0(lVar1);
      goto LAB_1054cf398;
    }
    if (lVar4 != 4) goto LAB_1054cf398;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c255660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf987e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be73b20(lVar1,param_2,uVar3,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
LAB_1054cf398:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054cf3ac; end: 1054cf57f; -[SCManagedStillImageCapturerV2 _publishWillCapturePhotoNotification] */

void FUN_1054cf3ac(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  *(undefined **)(param_2 + 0x98) = puVar2;
  _objc_release(puVar1);
  lVar3 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e980();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b9e18;
  _objc_alloc();
  uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_60 = uStack_80;
  uStack_58 = uStack_78;
  uStack_50 = uStack_70;
  func_0x00010c0389e0((float)param_1);
  puVar7 = &uStack_60;
  _objc_initWeak(puVar7,param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,&uStack_60);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(&uStack_60);
  _objc_release(puVar1);
  return;
}



/* Entry: 1054cf580; end: 1054cf66f;  */

void FUN_1054cf580(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = &UNK_10f2ca52f;
    func_0x0001000ba800(&UNK_10f2ca52f);
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5b80();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x0001000e2a84(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cf670; end: 1054cf72f; -[SCManagedStillImageCapturerV2 _publishDidCapturePhotoNotification] */

void FUN_1054cf670(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1054cf730; end: 1054cf847;  */

void FUN_1054cf730(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = &UNK_10f2ca548;
    func_0x0001000ba800(&UNK_10f2ca548);
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72e80();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar6);
    func_0x0001000e2a84(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cf848; end: 1054cf923; -[SCManagedStillImageCapturerV2 _photoCaptureEndWithStillImageData:error:] */

void FUN_1054cf848(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retainBlock();
  if (param_3 == 0) {
    if (lVar1 == 0) goto LAB_1054cf8fc;
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar3 = 0;
    uVar2 = param_4;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c0a2980(uVar2);
    _objc_release(lVar3);
    _objc_release(uVar2);
    if (lVar1 == 0) goto LAB_1054cf8fc;
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar3 = param_3;
    uVar2 = 0;
  }
  (*pcVar4)(lVar1,lVar3,uVar2);
LAB_1054cf8fc:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054cf924; end: 1054cf92b; -[SCManagedStillImageCapturerV2 isAsync] */

undefined8 FUN_1054cf924(void)

{
  return 0;
}


