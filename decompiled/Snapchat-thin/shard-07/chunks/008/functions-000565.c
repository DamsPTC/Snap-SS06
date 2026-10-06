/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a7e0e8; end: 105a7e15b; +[SCSpectaclesFlightImuCalibrationTrayViewModel completeTrayWithTitle:displayDoneButton:] */

void FUN_105a7e0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1c88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
  puVar2[0x38] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7e15c; end: 105a7e1eb; +[SCSpectaclesFlightImuCalibrationTrayViewModel inProgressTrayWithTitle:currentPhase:numPhases:currentPhaseResultSuccess:currentPhaseResultFail:] */

void FUN_105a7e15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1c88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = param_6;
  puVar2[0x29] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7e1ec; end: 105a7e20f; -[SCSpectaclesFlightImuCalibrationTrayViewModel copyWithZone:] */

undefined8 FUN_105a7e1ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a7e210; end: 105a7e2a3; -[SCSpectaclesFlightImuCalibrationTrayViewModel hash] */

void FUN_105a7e210(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_48 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x29);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x38);
  puVar3 = &uStack_68;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126eb8a8;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a7e2a4; end: 105a7e2e7; -[SCSpectaclesFlightImuCalibrationTrayViewModel internalInit] */

void FUN_105a7e2a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126eb8a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a7e2e8; end: 105a7e3ef; -[SCSpectaclesFlightImuCalibrationTrayViewModel isEqual:] */

long FUN_105a7e2e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a7e3c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a7e3d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         ((*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28) &&
          (*(char *)(param_1 + 0x29) == *(char *)(param_3 + 0x29))))))) &&
       (*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_105a7e3d4;
        }
        goto LAB_105a7e3c8;
      }
    }
    lVar3 = 0;
  }
LAB_105a7e3d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a7e3f0; end: 105a7e487; -[SCSpectaclesFlightImuCalibrationTrayViewModel matchInProgressTray:completeTray:] */

void FUN_105a7e3f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
               *(undefined1 *)(param_1 + 0x29));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7e488; end: 105a7e4b7; -[SCSpectaclesFlightImuCalibrationTrayViewModel .cxx_destruct] */

void FUN_105a7e488(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a7e4b8; end: 105a7e713; -[SCSpectaclesHomeWifiEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7e4b8(long param_1,undefined8 param_2)

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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126c1cb8;
  _objc_alloc();
  lVar19 = (long)_DAT_11272e5e4;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272e5e8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11272e5ec;
  lVar7 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfe3fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar10 = lVar18;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272e5f0;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11272e5f4;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010c08f680();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c0e0(puVar1,param_2,lVar3,lVar6,lVar9,lVar11,lVar13,lVar15,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar19;
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



/* Entry: 105a7e714; end: 105a7e79f; -[SCSpectaclesHomeWifiEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7e714(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11272e5e4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126eb8b0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a7e7a0; end: 105a7e7fb; -[SCSpectaclesHomeWifiEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7e7a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e5f4);
  _objc_destroyWeak(param_1 + _DAT_11272e5f0);
  _objc_destroyWeak(param_1 + _DAT_11272e5e8);
  _objc_destroyWeak(param_1 + _DAT_11272e5ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e5e4);
  return;
}



/* Entry: 105a7e7fc; end: 105a7e9af; -[SCLagunaHomeWifiImportViewController initWithDevice:statusCoordinator:homeWifiService:analyticsService:onDemandResourceFetcher:legacySpectaclesTooltipsService:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105a7e7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126eb8b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_11272e5f8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11272e5fc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11272e600;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11272e604;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e608);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e608) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272e60c),param_9);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a7e9b0; end: 105a7ea0f; -[SCLagunaHomeWifiImportViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7e9b0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11272e60c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c248ca0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126eb8b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a7ea10; end: 105a7f047; -[SCLagunaHomeWifiImportViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7ea10(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126eb8b8;
  lStack_b8 = param_1;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar10 = (long)_DAT_11272e610;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar12);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105a7f048;
  puStack_c8 = &UNK_1108471b0;
  lStack_c0 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_initWeak(auStack_e8,param_1);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11272e608);
  puVar2 = auStack_f0;
  puVar8 = auStack_e8;
  _objc_copyWeak(puVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar9);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126af270;
  _objc_alloc();
  uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  lVar10 = (long)_DAT_11272e614;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar10));
  uStack_a8 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c162900(*(undefined8 *)(param_1 + lVar10));
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0995a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abb80(*(undefined8 *)(param_1 + lVar10));
  _objc_release(uVar9);
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  func_0x000105a84600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar11);
  _objc_release(uVar9);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar12);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(uVar13,uVar14,uVar15,uVar16);
  lVar10 = (long)_DAT_11272e618;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  func_0x00010c1738c0(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar10));
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar12);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  _objc_opt_class();
  func_0x00010c125fe0(uVar9);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  lVar12 = (long)_DAT_11272e61c;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar9);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c1bdb00();
  func_0x000105a845a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12));
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_f0);
  puVar2 = auStack_e8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e8);
  __Unwind_Resume();
  _objc_retain(puVar8);
  puVar4 = puVar8;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010bf4b2a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (**(code **)(puVar5 + 0x10))(puVar5,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar7 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar8;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010bf4b2a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar5 + 0x10))(puVar5,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar2 = puVar8;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x406b800000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar4 + 0x10))(puVar4,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar8;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4065e00000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar8 + 0x10))(puVar8,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a7f048; end: 105a7f27b;  */

void FUN_105a7f048(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x406b800000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4065e00000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a7f27c; end: 105a7f2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7f27c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11272e610));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a7f2d4; end: 105a7f61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7f2d4(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11272e614);
  _objc_retain(param_3);
  func_0x00010bf4c0e0(uVar7);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11272e610);
  func_0x00010c0bbea0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf4b2a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf4b2a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf4b2a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0xc044000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a7f61c; end: 105a7f7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7f61c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e614);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a7f7a8; end: 105a7f863; -[SCLagunaHomeWifiImportViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7f7a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eb8b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar4 = (long)_DAT_11272e600;
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bf2e7a0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272e604);
  lVar1 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2a5200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0a7da0(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105a7f864; end: 105a7f8bf; -[SCLagunaHomeWifiImportViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7f864(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eb8b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf2e7a0(*(undefined8 *)(param_1 + _DAT_11272e600));
  func_0x00010be58840(param_1);
  return;
}



/* Entry: 105a7f8c0; end: 105a7f8c7; -[SCLagunaHomeWifiImportViewController numberOfSectionsInTableView:] */

undefined8 FUN_105a7f8c0(void)

{
  return 1;
}



/* Entry: 105a7f8c8; end: 105a7f937; -[SCLagunaHomeWifiImportViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105a7f8c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 == 0) {
    lVar3 = (long)_DAT_11272e600;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf01ca0(uVar1);
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c2a5200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    lVar3 = lVar3 + (ulong)((uint)uVar1 ^ 1);
    _objc_release(lVar2);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 105a7f938; end: 105a7fa43; -[SCLagunaHomeWifiImportViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7f938(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c1554e0();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c142240();
    lVar6 = (long)_DAT_11272e600;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c2a5200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 == lVar3) {
      func_0x00010bdc6380(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c2a5200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c142240(param_4);
      uVar5 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be62980(param_1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a7fa44; end: 105a7fa53; -[SCLagunaHomeWifiImportViewController tableView:heightForFooterInSection:] */

undefined8 FUN_105a7fa44(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105a7fa54; end: 105a7fb5f; -[SCLagunaHomeWifiImportViewController tableView:viewForFooterInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7fa54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = *(long *)(param_1 + _DAT_11272e600);
  func_0x00010c2a5200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11272e61c;
    func_0x00010befbb60();
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a7fb60;
    puStack_48 = &UNK_11084fc58;
    lStack_40 = param_1;
    _objc_retain(puVar3);
    puStack_38 = puVar3;
    func_0x00010c0bbfc0(uVar5,param_2,&puStack_60);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = puStack_38;
    _objc_retain(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a7fb60; end: 105a7fe2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7fb60(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11272e61c);
  _objc_retain(param_3);
  func_0x00010bf4c0e0(uVar7);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x404b800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0xc04b800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a7fe2c; end: 105a7fe3b; -[SCLagunaHomeWifiImportViewController tableView:heightForHeaderInSection:] */

void FUN_105a7fe2c(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfe0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0710,PTR_s_heightForTableHeaderInSection__1125d5bc8,in_x3);
  return;
}



/* Entry: 105a7fe3c; end: 105a7fe9f; -[SCLagunaHomeWifiImportViewController tableView:viewForHeaderInSection:] */

void FUN_105a7fe3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 == 0) {
    func_0x000105a845b8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  puVar1 = PTR_PTR_1126b0710;
  func_0x00010c29cf80(PTR_PTR_1126b0710,param_2,param_4,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a7fea0; end: 105a7feab; -[SCLagunaHomeWifiImportViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105a7fea0(void)

{
  return 0x4046000000000000;
}



/* Entry: 105a7feac; end: 105a80127; -[SCLagunaHomeWifiImportViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7feac(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(*(undefined8 *)(param_1 + _DAT_11272e618));
  uVar3 = param_4;
  func_0x00010c142240();
  lVar10 = (long)_DAT_11272e600;
  uVar2 = *(ulong *)(param_1 + lVar10);
  func_0x00010c2a5200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 == uVar9) {
    uVar3 = *(ulong *)(param_1 + lVar10);
    func_0x00010bf01ca0();
    if ((uVar3 & 1) != 0) goto LAB_105a7ff30;
    puVar8 = PTR_PTR_1126b6728;
    func_0x00010c06f100();
    _objc_release(uVar2);
    if ((int)puVar8 != 0) {
      uVar9 = *(ulong *)(param_1 + lVar10);
      func_0x00010c2a5200();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010bf529e0();
      _objc_release(uVar9);
      if (uVar3 < 5) {
        func_0x00010bdc9080(param_1);
      }
      else {
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_105a80128;
        puStack_60 = &UNK_110842e18;
        lStack_58 = param_1;
        func_0x000100162d98("APPSTORE",&puStack_78);
      }
      goto LAB_105a800f8;
    }
  }
  else {
LAB_105a7ff30:
    _objc_release(uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf60d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c142240();
  uVar2 = *(ulong *)(param_1 + lVar10);
  func_0x00010c2a5200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar3 < uVar9) {
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c2a5200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142240(param_4);
    uVar6 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
    func_0x00010c2a5220();
    if (iVar1 != 0) {
      uVar5 = uVar6;
      func_0x00010c24cc00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((int)uVar7 == 0) {
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        uStack_98 = 0x105a80154;
        puStack_90 = &UNK_110841f80;
        lStack_88 = param_1;
        _objc_retain(uVar6);
        uStack_80 = uVar6;
        func_0x000100162d98("APPSTORE",&puStack_a8);
        _objc_release(uStack_80);
      }
      else {
        func_0x00010bdc9080(param_1);
      }
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
LAB_105a800f8:
  _objc_release(param_4);
  return;
}



/* Entry: 105a80128; end: 105a8018f;  */

void FUN_105a80128(long param_1)

{
  func_0x00010beb79c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be58850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logShareFlowFailure__112573bb0,4);
  return;
}



/* Entry: 105a80190; end: 105a8026b; -[SCLagunaHomeWifiImportViewController lagunaOnShareWifiCredentialsUpdate:device:wifiSsid:] */

void FUN_105a80190(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (lVar1 == param_4) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105a8026c;
    puStack_60 = &UNK_110844b80;
    lStack_58 = param_1;
    uStack_48 = param_3;
    _objc_retain(param_5);
    uStack_50 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105a8026c; end: 105a80343;  */

void FUN_105a8026c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 < 5) {
    if (lVar3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showAlertForSuccess__11258b848,
                 *(undefined8 *)(param_1 + 0x28));
      return;
    }
    if (lVar3 != 4) {
      return;
    }
    func_0x00010beb7960(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = 5;
  }
  else if (lVar3 == 5) {
    func_0x00010beb7920(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = 6;
  }
  else if (lVar3 == 6) {
    func_0x00010beb7920(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = 7;
  }
  else {
    if (lVar3 != 7) {
      return;
    }
    func_0x00010beb7900(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be58850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__logShareFlowFailure__112573bb0,uVar2);
  return;
}



/* Entry: 105a80344; end: 105a803e7; -[SCLagunaHomeWifiImportViewController lagunaOnWifiAPListUpdate:] */

void FUN_105a80344(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105a803e8;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 105a803e8; end: 105a8041b;  */

void FUN_105a803e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a8041c; end: 105a804a3; -[SCLagunaHomeWifiImportViewController didPressRemoveButton:] */

void FUN_105a8041c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105a804a4;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105a804a4; end: 105a80527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a804a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e5f8);
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf48920();
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d7cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 & 1) == 0) {
    func_0x00010beb7a40(uVar1,param_2,uVar4);
  }
  else {
    func_0x00010beb7a20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105a80528; end: 105a805a7; -[SCLagunaHomeWifiImportViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_105a80528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a805a8; end: 105a805ab; -[SCLagunaHomeWifiImportViewController getTitle] */

void FUN_105a805a8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6798;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db6798,
                      &PTR____CFConstantStringClassReference_110e1a398,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105a805ac; end: 105a807d7; -[SCLagunaHomeWifiImportViewController _addWifiNetwork] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a805ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar11 = (long)_DAT_11272e5f8;
  uVar2 = *(ulong *)(param_1 + lVar11);
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf48920();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105a807d8;
    puStack_50 = &UNK_110842e18;
    ppuVar9 = &puStack_68;
    lStack_48 = param_1;
  }
  else {
    lVar4 = *(long *)(param_1 + lVar11);
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c067fc0();
    if (lVar10 < 0x1e) {
      _objc_release(lVar7);
      _objc_release(lVar4);
    }
    else {
      lVar5 = *(long *)(param_1 + lVar11);
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar5;
      func_0x00010bf175c0();
      _objc_release(lVar5);
      _objc_release(lVar7);
      _objc_release(lVar4);
      if (lVar10 != 2) {
        iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272e5fc);
        func_0x00010c070920();
        if (iVar1 == 0) {
          puVar6 = PTR_PTR_1126b6728;
          func_0x00010c06f100();
          if ((int)puVar6 == 0) {
            return;
          }
          lVar10 = (long)_DAT_11272e600;
          lVar7 = *(long *)(param_1 + lVar10);
          func_0x00010c252440();
          if (lVar7 != 0) {
            return;
          }
          iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
          func_0x00010c263440();
          if (iVar1 == 0) {
            return;
          }
          uVar8 = *(undefined8 *)(param_1 + _DAT_11272e620);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c165780();
          _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010c24f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (*(undefined8 *)(param_1 + lVar10),PTR_s_startMfiShareWifiCredentials_112671718)
          ;
          return;
        }
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x105a80830;
        puStack_a0 = &UNK_110842e18;
        ppuVar9 = &puStack_b8;
        lStack_98 = param_1;
        goto LAB_105a80748;
      }
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x105a80804;
    puStack_78 = &UNK_110842e18;
    ppuVar9 = &puStack_90;
    lStack_70 = param_1;
  }
LAB_105a80748:
  func_0x000100162d98("APPSTORE",ppuVar9);
  return;
}



/* Entry: 105a807d8; end: 105a8085b;  */

void FUN_105a807d8(long param_1)

{
  func_0x00010beb7a00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be58850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logShareFlowFailure__112573bb0,1);
  return;
}



/* Entry: 105a8085c; end: 105a80943; -[SCLagunaHomeWifiImportViewController _addCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8085c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e618);
  func_0x00010bf6e060(uVar1,param_2,&PTR____CFConstantStringClassReference_110e1a2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1a318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c18b5e0(uVar1,param_2,param_1);
  puVar2 = PTR_PTR_1126b6728;
  func_0x00010c06f100();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010c20a040(uVar1,param_2,0,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272e600);
    func_0x00010bf60d80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7e80(param_1,param_2,uVar1,uVar3,1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a80944; end: 105a80a63; -[SCLagunaHomeWifiImportViewController _networkCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a80944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272e618);
  _objc_retain(param_3);
  func_0x00010bf6e060(uVar4,param_2,&PTR____CFConstantStringClassReference_110e1a2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1a338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(uVar4,param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e600);
  func_0x00010c2a5220(uVar2,param_2,param_3);
  uVar3 = param_3;
  func_0x00010c24cc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    func_0x00010c20a040(uVar4,param_2,4,uVar3);
  }
  else {
    func_0x00010bea7e80(param_1,param_2,uVar4,uVar3,5);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105a80a64; end: 105a80b43; -[SCLagunaHomeWifiImportViewController _setStateForCell:wifiSsid:idleState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a80a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11272e600;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf60d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c252440();
    if (lVar3 < 2) {
      if (lVar3 != 0) {
        if (lVar3 != 1) goto LAB_105a80b20;
        param_5 = 2;
      }
    }
    else if (lVar3 == 2) {
      param_5 = 3;
    }
    else {
      if (lVar3 != 3) goto LAB_105a80b20;
      param_5 = 4;
    }
  }
  func_0x00010c20a040(param_3,param_2,param_5,param_4);
LAB_105a80b20:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a80b44; end: 105a80bb7; -[SCLagunaHomeWifiImportViewController _logShareFlowFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a80b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272e604);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e600);
  func_0x00010bf5ebc0(uVar2);
  func_0x00010c0a7d20(uVar3,param_2,lVar1,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a80bb8; end: 105a80cd3; -[SCLagunaHomeWifiImportViewController _showAlertForNotConnected] */

void FUN_105a80bb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a84618();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105a84630();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar1,param_2,puVar2,puVar3,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c10eda0(param_1,param_2,puVar1,1,0);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105a80cd4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126aed78;
  puStack_90 = puVar5;
  uStack_88 = uVar4;
  puStack_80 = puVar3;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_alloc();
  puVar1 = puVar7;
  func_0x000105a84648();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105a84660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7,param_2,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar7;
  func_0x00010c10eda0(puVar6,param_2,puVar7,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126aed78;
  pcStack_a8 = FUN_105a80df0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b0 = &puStack_60;
  _objc_retain(puVar1);
  _objc_alloc();
  puVar5 = puVar3;
  func_0x000105a84678();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar5;
  func_0x000105a84690();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar1;
  func_0x00010c14de00(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar7;
  func_0x00010be22300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  puStack_108 = puVar1;
  func_0x00010be1da40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_100 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3,param_2,puVar5,puVar2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(puVar7,param_2,puVar3,1,0);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105a80f78;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126aed78;
  puStack_150 = puVar2;
  puStack_148 = puVar3;
  puStack_140 = puVar1;
  puStack_138 = puVar6;
  puStack_130 = puVar5;
  puStack_128 = puVar7;
  ppuStack_120 = &ppuStack_b0;
  _objc_alloc();
  puVar1 = puVar9;
  func_0x000105a846a8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105a846c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_160 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_160,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9,param_2,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c10eda0(puVar8,param_2,puVar9,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_105a81094;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aed78;
  ppuStack_170 = &ppuStack_120;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar3;
  func_0x000105a846d8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar6;
  func_0x00010c14de00(puVar1,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar1;
  func_0x000105a846f0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar8;
  func_0x00010c14de00(puVar2,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1d0 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1d0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3,param_2,puVar1,puVar2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(puVar9,param_2,puVar3,1,0);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_105a8125c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126aed78;
  puStack_220 = puVar7;
  puStack_218 = puVar3;
  puStack_210 = puVar1;
  puStack_208 = puVar6;
  puStack_200 = puVar5;
  puStack_1f8 = puVar9;
  ppuStack_1f0 = &ppuStack_170;
  _objc_alloc();
  puVar1 = puVar8;
  func_0x000105a84708();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000105a84720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_230 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_230,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar8,param_2,puVar1,puVar3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar8;
  func_0x00010c10eda0(puVar2,param_2,puVar8,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  puVar2 = puVar8;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((puVar1 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) {
    func_0x00010beb7aa0(puVar8);
  }
  else {
    func_0x00010beb7ac0(puVar8,param_2,puVar1,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a80cd4; end: 105a80def; -[SCLagunaHomeWifiImportViewController _showAlertForDisconnection] */

void FUN_105a80cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_180;
  long lStack_178;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a84648();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105a84660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar1,param_2,puVar2,puVar3,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c10eda0(param_1,param_2,puVar1,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126aed78;
  pcStack_58 = FUN_105a80df0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000105a84678();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar6;
  func_0x000105a84690();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar2;
  func_0x00010c14de00(puVar3,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010be22300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_b8 = puVar2;
  func_0x00010be1da40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5,param_2,puVar6,puVar3,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c10eda0(puVar1,param_2,puVar5,1,0);
  puVar8 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_105a80f78;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126aed78;
  puStack_100 = puVar3;
  puStack_f8 = puVar5;
  puStack_f0 = puVar2;
  puStack_e8 = puVar7;
  puStack_e0 = puVar6;
  puStack_d8 = puVar1;
  ppuStack_d0 = &puStack_60;
  _objc_alloc();
  puVar1 = puVar9;
  func_0x000105a846a8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105a846c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_110 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_110,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9,param_2,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c10eda0(puVar8,param_2,puVar9,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105a81094;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aed78;
  ppuStack_120 = &ppuStack_d0;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar3;
  func_0x000105a846d8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar6;
  func_0x00010c14de00(puVar1,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar1;
  func_0x000105a846f0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar8;
  func_0x00010c14de00(puVar2,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_180 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3,param_2,puVar1,puVar2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(puVar9,param_2,puVar3,1,0);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_105a8125c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126aed78;
  puStack_1d0 = puVar7;
  puStack_1c8 = puVar3;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  puStack_1b0 = puVar5;
  puStack_1a8 = puVar9;
  ppuStack_1a0 = &ppuStack_120;
  _objc_alloc();
  puVar1 = puVar8;
  func_0x000105a84708();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000105a84720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1e0 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1e0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar8,param_2,puVar1,puVar3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar8;
  func_0x00010c10eda0(puVar2,param_2,puVar8,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  puVar2 = puVar8;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((puVar1 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) {
    func_0x00010beb7aa0(puVar8);
  }
  else {
    func_0x00010beb7ac0(puVar8,param_2,puVar1,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a80df0; end: 105a80f77; -[SCLagunaHomeWifiImportViewController _showAlertForCannotConnectNetwork:] */

void FUN_105a80df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_130;
  long lStack_128;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126aed78;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a84678();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000105a84690();
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = param_3;
  func_0x00010c14de00(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010be22300();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_68 = uVar5;
  func_0x00010be1da40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar1,param_2,puVar2,puVar4,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c10eda0(param_1,param_2,puVar1,1,0);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_105a80f78;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126aed78;
  puStack_b0 = puVar4;
  puStack_a8 = puVar1;
  uStack_a0 = uVar5;
  puStack_98 = puVar3;
  puStack_90 = puVar2;
  uStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_alloc();
  puVar4 = puVar8;
  func_0x000105a846a8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x000105a846c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar8,param_2,puVar4,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  func_0x00010c10eda0(puVar7,param_2,puVar8,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_105a81094;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aed78;
  ppuStack_d0 = &puStack_80;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000105a846d8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar7;
  func_0x00010c14de00(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = puVar4;
  func_0x000105a846f0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar10;
  func_0x00010c14de00(puVar1,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_130 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_130,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2,param_2,puVar4,puVar1,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar3);
  func_0x00010c10eda0(puVar8,param_2,puVar2,1,0);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105a8125c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aed78;
  puStack_180 = puVar9;
  puStack_178 = puVar2;
  puStack_170 = puVar4;
  puStack_168 = puVar7;
  puStack_160 = puVar3;
  puStack_158 = puVar8;
  ppuStack_150 = &ppuStack_d0;
  _objc_alloc();
  puVar4 = puVar10;
  func_0x000105a84708();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x000105a84720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_190 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_190,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar10,param_2,puVar4,puVar2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar4 = puVar10;
  func_0x00010c10eda0(puVar1,param_2,puVar10,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar1 = puVar10;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((puVar4 == (undefined *)0x0) || (puVar7 == (undefined *)0x0)) {
    func_0x00010beb7aa0(puVar10);
  }
  else {
    func_0x00010beb7ac0(puVar10,param_2,puVar4,puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105a80f78; end: 105a81093; -[SCLagunaHomeWifiImportViewController _showAlertForCannotConnectInternet] */

void FUN_105a80f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a846a8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105a846c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar1,param_2,puVar2,puVar3,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c10eda0(param_1,param_2,puVar1,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105a81094;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126aed78;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar5;
  func_0x000105a846d8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar7;
  func_0x00010c14de00(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar2;
  func_0x000105a846f0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar9;
  func_0x00010c14de00(puVar3,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5,param_2,puVar2,puVar3,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c10eda0(puVar1,param_2,puVar5,1,0);
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_105a8125c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126aed78;
  puStack_110 = puVar8;
  puStack_108 = puVar5;
  puStack_100 = puVar2;
  puStack_f8 = puVar7;
  puStack_f0 = puVar6;
  puStack_e8 = puVar1;
  ppuStack_e0 = &puStack_60;
  _objc_alloc();
  puVar1 = puVar9;
  func_0x000105a84708();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105a84720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9,param_2,puVar1,puVar2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar9;
  func_0x00010c10eda0(puVar3,param_2,puVar9,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  puVar2 = puVar9;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((puVar1 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) {
    func_0x00010beb7aa0(puVar9);
  }
  else {
    func_0x00010beb7ac0(puVar9,param_2,puVar1,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a81094; end: 105a8125b; -[SCLagunaHomeWifiImportViewController _showAlertForLowBattery] */

void FUN_105a81094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  func_0x000105a846d8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = puVar3;
  func_0x00010c14de00(puVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x000105a846f0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5c60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2638);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = puVar6;
  func_0x00010c14de00(puVar7,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar1,param_2,puVar4,puVar7,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c10eda0(param_1,param_2,puVar1,1,0);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_105a8125c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aed78;
  puStack_c0 = puVar5;
  puStack_b8 = puVar1;
  puStack_b0 = puVar4;
  puStack_a8 = puVar3;
  puStack_a0 = puVar2;
  uStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_alloc();
  puVar4 = puVar6;
  func_0x000105a84708();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x000105a84720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6,param_2,puVar4,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c10eda0(puVar7,param_2,puVar6,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar7 = puVar6;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar7);
  if ((puVar4 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) {
    func_0x00010beb7aa0(puVar6);
  }
  else {
    func_0x00010beb7ac0(puVar6,param_2,puVar4,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105a8125c; end: 105a81377; -[SCLagunaHomeWifiImportViewController _showAlertForTransferInProgress] */

void FUN_105a8125c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a84708();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105a84720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar1,param_2,puVar2,puVar3,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c10eda0(param_1,param_2,puVar1,1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar3 = puVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  if ((puVar2 == (undefined *)0x0) || (puVar7 == (undefined *)0x0)) {
    func_0x00010beb7aa0(puVar1);
  }
  else {
    func_0x00010beb7ac0(puVar1,param_2,puVar2,puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a81378; end: 105a8142b; -[SCLagunaHomeWifiImportViewController _showAlertForSuccess:] */

void FUN_105a81378(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((param_3 == 0) || (lVar4 == 0)) {
    func_0x00010beb7aa0(param_1);
  }
  else {
    func_0x00010beb7ac0(param_1,param_2,param_3,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a8142c; end: 105a81547; -[SCLagunaHomeWifiImportViewController _showAlertForSuccessNoPending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8142c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a84738();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105a84750();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar12 = 1;
  puVar2 = puVar1;
  func_0x00010c10eda0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  _objc_retain();
  if (lVar12 == 1) {
    func_0x000105a84780();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105a84768();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = *(undefined **)(puVar1 + _DAT_11272e5f8);
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c06e420();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bfb5c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    func_0x000105a84798();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
  }
  _objc_release(puVar6);
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar7;
  func_0x000105a84738();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010c10eda0(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126aed78;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_alloc();
  puVar5 = puVar3;
  func_0x000105a847b0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar5;
  func_0x000105a847c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010be22160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar2;
  func_0x00010be1da40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar1 = puVar3;
  func_0x00010c10eda0(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126aed78;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_alloc();
  puVar7 = puVar5;
  func_0x000105a847e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar7;
  func_0x000105a847f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar7);
  func_0x00010c10eda0(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar7 = puVar3;
  func_0x000105a84810();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar7;
  func_0x000105a84828();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar1 = puVar3;
  func_0x00010c10eda0(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126aed78;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_alloc();
  puVar7 = puVar5;
  func_0x000105a84840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar7;
  func_0x000105a84858();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar7);
  func_0x00010c10eda0(puVar3);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aed70;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a81548; end: 105a8174b; -[SCLagunaHomeWifiImportViewController _showAlertForSuccessWithPending:untransferredSnapsCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a81548(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain();
  if (param_4 == 1) {
    func_0x000105a84780();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105a84768();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = *(undefined **)(param_1 + _DAT_11272e5f8);
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c06e420();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfb5c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    func_0x000105a84798();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
  }
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar2 = puVar3;
  func_0x000105a84738();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar4);
  _objc_release(lVar6);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126aed78;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000105a847b0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar4;
  func_0x000105a847c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010be22160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar8 = param_3;
  func_0x00010be1da40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar4);
  puVar5 = puVar3;
  func_0x00010c10eda0(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed78;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_alloc();
  puVar7 = puVar4;
  func_0x000105a847e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = puVar7;
  func_0x000105a847f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar7);
  func_0x00010c10eda0(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar7 = puVar2;
  func_0x000105a84810();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = puVar7;
  func_0x000105a84828();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar5 = puVar2;
  func_0x00010c10eda0(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed78;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_alloc();
  puVar7 = puVar4;
  func_0x000105a84840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = puVar7;
  func_0x000105a84858();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar2;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar7);
  func_0x00010c10eda0(puVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126aed70;
  ppuVar13 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a8174c; end: 105a818d7; -[SCLagunaHomeWifiImportViewController _showAlertForRemoveConfirm:] */

void FUN_105a8174c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a847b0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000105a847c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be22160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = param_1;
  func_0x00010be1da40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010c10eda0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126aed78;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_alloc();
  puVar7 = puVar3;
  func_0x000105a847e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar7;
  func_0x000105a847f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c10eda0(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar7 = puVar2;
  func_0x000105a84810();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar7;
  func_0x000105a84828();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar4 = puVar2;
  func_0x00010c10eda0(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126aed78;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_alloc();
  puVar7 = puVar3;
  func_0x000105a84840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar7;
  func_0x000105a84858();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c10eda0(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar12 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a818d8; end: 105a81a3f; -[SCLagunaHomeWifiImportViewController _showAlertForRemoveNotConnected:] */

void FUN_105a818d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a847e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000105a847f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c10eda0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar3;
  func_0x000105a84810();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar6;
  func_0x000105a84828();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar4 = puVar3;
  func_0x00010c10eda0(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126aed78;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_alloc();
  puVar6 = puVar2;
  func_0x000105a84840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar6;
  func_0x000105a84858();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c10eda0(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a81a40; end: 105a81bdf; -[SCLagunaHomeWifiImportViewController _showAlertForMaxNetworks] */

void FUN_105a81a40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a84810();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000105a84828();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar6 = puVar1;
  func_0x00010c10eda0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126aed78;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000105a84840();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar3;
  func_0x000105a84858();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c10eda0(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126aed70;
  ppuVar9 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a81be0; end: 105a81d47; -[SCLagunaHomeWifiImportViewController _showAlertForConnectNewPassword:] */

void FUN_105a81be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105a84840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000105a84858();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010be20f20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a81d48; end: 105a81daf; -[SCLagunaHomeWifiImportViewController _getOkNoOpAction] */

void FUN_105a81d48(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a81db0; end: 105a81dbf;  */

void FUN_105a81db0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a81dc0; end: 105a81edb; -[SCLagunaHomeWifiImportViewController _getRemoveButton:] */

void FUN_105a81dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dac918;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dac918,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010beff4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a81edc; end: 105a81f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a81edc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12f2a0(*(undefined8 *)(param_1 + _DAT_11272e600));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272e604);
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7ce0(uVar2);
    _objc_release(lVar1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a81f80; end: 105a8206f; -[SCLagunaHomeWifiImportViewController _getRetryButton] */

void FUN_105a81f80(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1a358;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a358,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010beff4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a82070; end: 105a820cb;  */

void FUN_105a82070(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdc9080(param_1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a820cc; end: 105a82133; -[SCLagunaHomeWifiImportViewController _getCancelButton] */

void FUN_105a820cc(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a82134; end: 105a82143;  */

void FUN_105a82134(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a82144; end: 105a82153; -[SCLagunaHomeWifiImportViewController device] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a82144(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e5f8);
}



/* Entry: 105a82154; end: 105a82193; -[SCLagunaHomeWifiImportViewController setDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a82154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e5f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a82194; end: 105a821a3; -[SCLagunaHomeWifiImportViewController instructionsImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a82194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e610);
}



/* Entry: 105a821a4; end: 105a821e3; -[SCLagunaHomeWifiImportViewController setInstructionsImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a821a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e610;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a821e4; end: 105a821f3; -[SCLagunaHomeWifiImportViewController explanationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a821e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e614);
}



/* Entry: 105a821f4; end: 105a82233; -[SCLagunaHomeWifiImportViewController setExplanationLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a821f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e614;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a82234; end: 105a82243; -[SCLagunaHomeWifiImportViewController footerLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a82234(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e61c);
}



/* Entry: 105a82244; end: 105a82283; -[SCLagunaHomeWifiImportViewController setFooterLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a82244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e61c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a82284; end: 105a82293; -[SCLagunaHomeWifiImportViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a82284(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e618);
}



/* Entry: 105a82294; end: 105a822d3; -[SCLagunaHomeWifiImportViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a82294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e618;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a822d4; end: 105a8239f; -[SCLagunaHomeWifiImportViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a822d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e618,0);
  _objc_storeStrong(param_1 + _DAT_11272e61c,0);
  _objc_storeStrong(param_1 + _DAT_11272e614,0);
  _objc_storeStrong(param_1 + _DAT_11272e610,0);
  _objc_storeStrong(param_1 + _DAT_11272e5f8,0);
  _objc_destroyWeak(param_1 + _DAT_11272e60c);
  _objc_storeStrong(param_1 + _DAT_11272e620,0);
  _objc_storeStrong(param_1 + _DAT_11272e608,0);
  _objc_storeStrong(param_1 + _DAT_11272e604,0);
  _objc_storeStrong(param_1 + _DAT_11272e600,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e5fc,0);
  return;
}



/* Entry: 105a823a0; end: 105a828f3; -[SCLagunaSettingsHomeWifiNetworkCell initWithStyle:reuseIdentifier:] */

undefined8 * FUN_105a823a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126eb8c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c161260(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar2);
    func_0x00010c2258c0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2a5380(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010bebbd20(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c1cc380(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0d7ce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0d7ce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0d7ce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c0d7ce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c180f20(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf48d60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf48d60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf48d60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17c780(puVar1);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf3ab00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010be36b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf3ab00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa240(0x4014000000000000,0x4014000000000000,0x4014000000000000,0x4014000000000000)
    ;
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf3ab00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf3ab00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf3ab00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1faee0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 105a828f4; end: 105a82b77;  */

void FUN_105a828f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a5380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bc000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d7ce0();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = "@";
  FUN_105a82b78("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar8);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a82b78; end: 105a82eff;  */

void FUN_105a82b78(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *in_stack_00000000;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x40) && (param_1[1] == 0)) {
    _objc_retain(in_stack_00000000);
    puVar3 = in_stack_00000000;
  }
  else {
    pbVar2 = param_1;
    _strcmp(param_1,"{CGPoint=dd}");
    if ((((int)pbVar2 == 0) || (pbVar2 = param_1, _strcmp(param_1,"{CGSize=dd}"), (int)pbVar2 == 0))
       || (pbVar2 = param_1, _strcmp(param_1,"{UIEdgeInsets=dddd}"), (int)pbVar2 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
      if (bVar1 < 99) {
        if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_105a82ec0;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_105a82ec0;
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_105a82ec0;
            }
          }
        }
        else if (bVar1 == 0x49) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105a82ec0;
          }
        }
        else if (bVar1 == 0x51) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105a82ec0;
          }
        }
        else {
          if (bVar1 != 0x53) goto LAB_105a82ec0;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df8a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105a82ec0;
          }
        }
      }
      else if (bVar1 < 0x69) {
        if (bVar1 == 99) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105a82ec0;
          }
        }
        else if (bVar1 == 100) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105a82ec0;
          }
        }
        else {
          if (bVar1 != 0x66) goto LAB_105a82ec0;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740((float)(double)in_stack_00000000,
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105a82ec0;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105a82ec0;
        }
      }
      else if (bVar1 == 0x71) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105a82ec0;
        }
      }
      else {
        if (bVar1 != 0x73) goto LAB_105a82ec0;
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105a82ec0;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
LAB_105a82ec0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a82f00; end: 105a830d3;  */

void FUN_105a82f00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x403e000000000000,0x403e000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0xc024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a830d4; end: 105a8311f; -[SCLagunaSettingsHomeWifiNetworkCell prepareForReuse] */

void FUN_105a830d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eb8c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c21e900(param_1);
  return;
}



/* Entry: 105a83120; end: 105a8320f; -[SCLagunaSettingsHomeWifiNetworkCell loadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a83120(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_11272e624;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105a83210;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105a83210; end: 105a83357;  */

void FUN_105a83210(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a83358; end: 105a8377b; -[SCLagunaSettingsHomeWifiNetworkCell setState:networkName:] */

void FUN_105a83358(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c1cc360(param_1,param_2,param_4);
  if (param_3 < 3) {
    lVar2 = param_1;
    if (param_3 == 0) {
      func_0x000105a84588();
      _objc_retainAutoreleasedReturnValue();
LAB_105a836c4:
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
    }
    else {
      if (param_3 != 1) {
        if (param_3 != 2) {
          return;
        }
        lVar1 = param_1;
        func_0x00010c0d7ce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1677c0(0x3fd3333333333333);
        _objc_release(lVar1);
        func_0x00010be35fc0(param_1);
        func_0x00010be35660(param_1);
        goto LAB_105a83574;
      }
      lVar4 = param_1;
      func_0x00010c0d7cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar4 == 0) {
        func_0x000105a84570();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105a836c4;
      }
      func_0x000105a84558();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d7cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0d7ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    func_0x00010be35fc0(param_1);
    func_0x00010be35660(param_1);
    func_0x00010be358e0(param_1);
  }
  else {
    if (param_3 == 3) {
      lVar1 = param_1;
      func_0x00010c0d7cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bebbd20(param_1);
      func_0x000105a845d0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb8760(param_1);
      _objc_release(puVar3);
      _objc_release(lVar1);
LAB_105a83574:
      func_0x00010beb99a0(param_1);
      uVar5 = 0;
      goto LAB_105a83738;
    }
    if (param_3 == 4) {
      lVar1 = param_1;
      func_0x00010c0d7cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(lVar1);
      func_0x00010bebbd20(param_1);
      func_0x00010be35660(param_1);
    }
    else {
      if (param_3 != 5) {
        return;
      }
      lVar1 = param_1;
      func_0x00010c0d7cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0d7ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010be35fc0(param_1);
      func_0x000105a845e8();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb8760(param_1);
      _objc_release(puVar3);
      _objc_release(lVar1);
    }
    func_0x00010be358e0(param_1);
  }
  uVar5 = 1;
LAB_105a83738:
  lVar1 = param_1;
  func_0x00010bf3ab00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserInteractionEnabled__112665468,uVar5);
  return;
}



/* Entry: 105a8377c; end: 105a837b3; -[SCLagunaSettingsHomeWifiNetworkCell _removeButtonPressed] */

void FUN_105a8377c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a837b4; end: 105a8391b; -[SCLagunaSettingsHomeWifiNetworkCell _showConnectionStateInCell:textColor:] */

void FUN_105a837b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf48d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf48d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf48d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d7ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf48d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 105a8391c; end: 105a839fb;  */

void FUN_105a8391c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a839fc; end: 105a83d37;  */

void FUN_105a839fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a5380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bc000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d7ce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf48d60();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = "@";
  FUN_105a82b78("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar8);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a83d38; end: 105a83dd7; -[SCLagunaSettingsHomeWifiNetworkCell _hideConnectionStateInCell] */

void FUN_105a83d38(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf48d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c0d7ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 105a83dd8; end: 105a83e5f;  */

void FUN_105a83dd8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a83e60; end: 105a83eff; -[SCLagunaSettingsHomeWifiNetworkCell _showWifiIcon] */

void FUN_105a83e60(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c2a5380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c2a5380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 105a83f00; end: 105a8406f;  */

void FUN_105a83f00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "{CGSize=dd}";
  FUN_105a82b78("{CGSize=dd}");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a84070; end: 105a840d7; -[SCLagunaSettingsHomeWifiNetworkCell _hideWifiIcon] */

void FUN_105a84070(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c2a5380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c2a5380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a840d8; end: 105a84177;  */

void FUN_105a840d8(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "{CGSize=dd}";
  FUN_105a82b78("{CGSize=dd}");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a84178; end: 105a841cf; -[SCLagunaSettingsHomeWifiNetworkCell _showLoadingIndicator] */

void FUN_105a84178(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c09cea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c09cea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a841d0; end: 105a84267; -[SCLagunaSettingsHomeWifiNetworkCell _hideLoadingIndicator] */

void FUN_105a841d0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c09cea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010c09cea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  func_0x00010c09cea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a84268; end: 105a842e3; -[SCLagunaSettingsHomeWifiNetworkCell _iconXSignFillImage] */

void FUN_105a84268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4039000000000000,0x4039000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a842e4; end: 105a84303; -[SCLagunaSettingsHomeWifiNetworkCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a842e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272e628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a84304; end: 105a84317; -[SCLagunaSettingsHomeWifiNetworkCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a84304(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272e628,param_3);
  return;
}


