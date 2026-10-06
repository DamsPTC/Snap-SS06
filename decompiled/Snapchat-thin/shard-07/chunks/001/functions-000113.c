/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105232b00; end: 105232b5f; -[SCSpectaclesDeviceFeatureLauncherImpl removeScopeWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105232b00(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720214);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c2a4ae0(uVar1,param_2,param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105232b60; end: 105232b6f; -[SCSpectaclesDeviceFeatureLauncherImpl scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105232b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112720214),PTR_s_scope_112631b68);
  return;
}



/* Entry: 105232b70; end: 105232b83; -[SCSpectaclesDeviceFeatureLauncherImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105232b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720214,0);
  return;
}



/* Entry: 105232b84; end: 105232bcb; +[SCSpectaclesDeviceFeatureAutoSaveManager shouldManuallyActivateForPreferences:] */

undefined8 FUN_105232b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcc2d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105232bcc; end: 105232e0f; -[SCSpectaclesDeviceFeatureAutoSaveManager initWithDevice:photoPermissionCoordinator:devicePreferences:contentStatusObservable:temporaryFileWriter:fileWritingQueue:cameraRollSaver:fetchLimit:] */

undefined8 *
FUN_105232bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined **param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 *puStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e70c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e7e0();
    _objc_release(uVar2);
    ppuVar4 = param_9;
    if (param_9 == (undefined **)0x0) {
      uStack_78 = 1;
      if ((int)uVar3 != 0) {
        uStack_78 = 2;
      }
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105232e10;
      puStack_88 = &UNK_1108710f0;
      ppuVar4 = &puStack_a0;
      puStack_b0 = &uStack_80;
      _objc_retain(param_10);
      uStack_80 = param_10;
    }
    _objc_retainBlock();
    uVar2 = puVar1[7];
    puVar1[7] = ppuVar4;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar5;
    _objc_release(uVar2);
    if (param_9 == (undefined **)0x0) {
      _objc_release(*puStack_b0);
    }
  }
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



/* Entry: 105232e10; end: 105232ee7;  */

void FUN_105232e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2827c0();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105232ee8;
  puStack_50 = &UNK_11085a1b8;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x000107fe8cd4(param_2,uVar1,uVar3,&puStack_68);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105232ee8; end: 105232efb;  */

void FUN_105232ee8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105232ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105232efc; end: 105232f2f; -[SCSpectaclesDeviceFeatureAutoSaveManager activate] */

void FUN_105232efc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d040();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateSaveLogic_11254ed68);
    return;
  }
  return;
}



/* Entry: 105232f30; end: 105232f6f; -[SCSpectaclesDeviceFeatureAutoSaveManager hasUserSelectedSaveToDestination] */

bool FUN_105232f30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcc2d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 105232f70; end: 105233033; -[SCSpectaclesDeviceFeatureAutoSaveManager isSaveToCameraRollEnabled] */

undefined8 FUN_105232f70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dcc2d8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
LAB_105233020:
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c079f60();
    if ((int)uVar4 == 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c079f80();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        func_0x00010bea3aa0(param_1,param_2,0);
        goto LAB_105233020;
      }
    }
    else {
      _objc_release(uVar1);
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 105233034; end: 10523306b; -[SCSpectaclesDeviceFeatureAutoSaveManager disableSaveToCameraRoll] */

void FUN_105233034(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d040();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea3ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setEnabled__112586850,0);
    return;
  }
  return;
}



/* Entry: 10523306c; end: 105233113; -[SCSpectaclesDeviceFeatureAutoSaveManager tryEnablingSaveToCameraRoll] */

undefined8 FUN_10523306c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c07d040();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c079f60();
    if ((int)uVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c079f80();
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        return 0;
      }
    }
    else {
      _objc_release(uVar2);
    }
    func_0x00010bea3aa0(param_1,param_2,1);
  }
  return 1;
}



/* Entry: 105233114; end: 10523321b; -[SCSpectaclesDeviceFeatureAutoSaveManager tryEnablingSaveToCameraRollWithPresentingViewController:completion:] */

void FUN_105233114(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c27ccc0();
  if ((int)uVar1 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10523321c;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(param_3);
    uStack_50 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10523321c; end: 105233493;  */

void FUN_10523321c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126aed70;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6ad8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar10);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dace78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dace78,0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar11);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db74f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db74f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110db7518;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7518);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(puVar2);
  _objc_release(uVar10);
  puVar7 = auStack_80;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(uVar9);
  puVar8 = puVar7 + 0x28;
  _objc_loadWeakRetained(puVar8);
  uVar10 = *(undefined8 *)(puVar7 + 0x20);
  _objc_retain(uVar10);
  _objc_retain(uVar9);
  func_0x00010be91660(puVar8);
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar9);
  return;
}



/* Entry: 105233494; end: 10523354b;  */

void FUN_105233494(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010be91660(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10523354c; end: 1052335df;  */

void FUN_10523354c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x20),param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105233588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1052335e0; end: 10523371f; -[SCSpectaclesDeviceFeatureAutoSaveManager _requestPhotoLibraryPermissionsWithCompletion:] */

void FUN_1052335e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c134a40(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e99c0();
    _objc_release(uVar2);
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105233720; end: 105233787;  */

void FUN_105233720(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bea3aa0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105233774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 105233788; end: 1052337fb; -[SCSpectaclesDeviceFeatureAutoSaveManager _setEnabled:] */

void FUN_105233788(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
  _objc_release(puVar1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateSaveLogic_11254ed68);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf8490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivateSaveLogic_11255bac0);
  return;
}



/* Entry: 1052337fc; end: 1052338fb; -[SCSpectaclesDeviceFeatureAutoSaveManager _activateSaveLogic] */

void FUN_1052337fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = param_1;
    func_0x00010c25ff60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1052338fc; end: 105233943;  */

void FUN_1052338fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be686e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105233944; end: 10523396f; -[SCSpectaclesDeviceFeatureAutoSaveManager _deactivateSaveLogic] */

void FUN_105233944(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105233970; end: 105233ccb; -[SCSpectaclesDeviceFeatureAutoSaveManager _onContentStatusUpdate:] */

void FUN_105233970(ulong param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)(param_1 + 8);
  _objc_loadWeakRetained();
  if (ppuVar1 == ppuVar8) {
    uVar11 = param_1;
    func_0x00010c07d040();
    _objc_release(ppuVar8);
    _objc_release(ppuVar1);
    if ((uVar11 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      ppuVar1 = param_3;
      func_0x00010c27a420();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_240 = ppuVar1;
      func_0x00010bf52a60();
      if (ppuStack_240 != (undefined **)0x0) {
        lVar6 = *plStack_1b0;
        do {
          ppuVar8 = (undefined **)0x0;
          do {
            if (*plStack_1b0 != lVar6) {
              _objc_enumerationMutation(ppuVar1);
            }
            lVar3 = *(long *)(lStack_1b8 + (long)ppuVar8 * 8);
            lStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            plStack_1f0 = (long *)0x0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            func_0x00010bf4bc60();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf52a60();
            if (lVar4 != 0) {
              lVar7 = *plStack_1f0;
              do {
                lVar9 = 0;
                do {
                  if (*plStack_1f0 != lVar7) {
                    _objc_enumerationMutation(lVar3);
                  }
                  uVar10 = *(undefined8 *)(lStack_1f8 + lVar9 * 8);
                  uVar11 = *(ulong *)(param_1 + 0x40);
                  uVar12 = uVar10;
                  func_0x00010bdc3540(uVar10);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf4b900();
                  _objc_release(uVar12);
                  if ((uVar11 & 1) == 0) {
                    uVar12 = *(undefined8 *)(param_1 + 0x40);
                    func_0x00010bdc3540(uVar10);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(uVar12);
                    _objc_release(uVar10);
                    func_0x00010befa120(puVar2);
                  }
                  lVar9 = lVar9 + 1;
                } while (lVar4 != lVar9);
                lVar4 = lVar3;
                func_0x00010bf52a60();
              } while (lVar4 != 0);
            }
            _objc_release(lVar3);
            ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          } while (ppuVar8 != ppuStack_240);
          ppuStack_240 = ppuVar1;
          func_0x00010bf52a60();
        } while (ppuStack_240 != (undefined **)0x0);
      }
      _objc_release(ppuVar1);
      puVar5 = puVar2;
      func_0x00010bf529e0();
      if (puVar5 != (undefined *)0x0) {
        _objc_initWeak(auStack_208,param_1);
        uVar12 = *(undefined8 *)(param_1 + 0x30);
        puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_230 = 0xc2000000;
        pcStack_228 = FUN_105233ccc;
        puStack_220 = &UNK_110841fb0;
        ppuVar8 = &puStack_238;
        _objc_copyWeak(auStack_210,auStack_208);
        _objc_retain(puVar2);
        puStack_218 = puVar2;
        func_0x00010c0f7fc0(uVar12);
        _objc_release(puStack_218);
        _objc_destroyWeak(auStack_210);
        _objc_destroyWeak(auStack_208);
      }
      _objc_release(puVar2);
    }
  }
  else {
    _objc_release(ppuVar8);
    _objc_release(ppuVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar8 + 5);
  _objc_destroyWeak(auStack_208);
  __Unwind_Resume();
  param_3 = param_3 + 5;
  _objc_loadWeakRetained(param_3);
  func_0x00010be98ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105233ccc; end: 105233cff;  */

void FUN_105233ccc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105233d00; end: 10523404f; -[SCSpectaclesDeviceFeatureAutoSaveManager _saveContent:] */

void FUN_105233d00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar9 = *plStack_130;
    uVar7 = *(undefined8 *)PTR__NSFileCreationDate_110345410;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_138 + lVar12 * 8);
        lVar8 = lVar14;
        func_0x00010c27dd80();
        if ((lVar8 == 0) || (lVar8 == 1)) {
          lVar8 = lVar14;
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar8;
          func_0x00010c25ce20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
        }
        else {
          lVar13 = 0;
        }
        func_0x00010c137620(lVar14);
        lVar8 = lVar14;
        func_0x00010bf63a60();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c2bda40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (lVar3 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
          func_0x00010bfad300();
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 != (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
            _objc_retainAutoreleasedReturnValue();
            uStack_100 = uVar7;
            func_0x00010c26f500();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            lStack_f8 = lVar14;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16b7e0(puVar5);
            _objc_release(puVar6);
            _objc_release(lVar14);
            _objc_release(puVar5);
            func_0x00010befa120(puVar1);
          }
          _objc_release(puVar4);
        }
        _objc_release(lVar3);
        _objc_release(lVar8);
        _objc_release(lVar13);
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = param_3;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_3);
  lVar11 = *(long *)(param_1 + 0x38);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_105234050;
  puStack_150 = &UNK_110842e18;
  pcVar10 = *(code **)(lVar11 + 0x10);
  puStack_148 = puVar1;
  _objc_retain(puVar1);
  (*pcVar10)(lVar11,puVar1,&puStack_168);
  _objc_release(puStack_148);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_3 + 0x20);
  _objc_retain(lVar12);
  lVar11 = lVar12;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar12);
      }
      puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar1);
      lVar14 = lVar14 + 1;
    } while (lVar11 != lVar14);
    lVar11 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar12 + 0x48,0);
  _objc_storeStrong(lVar12 + 0x40,0);
  _objc_storeStrong(lVar12 + 0x38,0);
  _objc_storeStrong(lVar12 + 0x30,0);
  _objc_storeStrong(lVar12 + 0x28,0);
  _objc_destroyWeak(lVar12 + 0x20);
  _objc_storeStrong(lVar12 + 0x18,0);
  _objc_storeStrong(lVar12 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar12 + 8);
  return;
}



/* Entry: 105234050; end: 10523416f;  */

void FUN_105234050(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar5 + 0x48,0);
  _objc_storeStrong(lVar5 + 0x40,0);
  _objc_storeStrong(lVar5 + 0x38,0);
  _objc_storeStrong(lVar5 + 0x30,0);
  _objc_storeStrong(lVar5 + 0x28,0);
  _objc_destroyWeak(lVar5 + 0x20);
  _objc_storeStrong(lVar5 + 0x18,0);
  _objc_storeStrong(lVar5 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar5 + 8);
  return;
}



/* Entry: 105234170; end: 1052341eb; -[SCSpectaclesDeviceFeatureAutoSaveManager .cxx_destruct] */

void FUN_105234170(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052341ec; end: 1052343a3; -[SCSpectaclesDeviceFeatureProxyManager initWithConnectionHub:device:dataFlowManager:backgroundTaskWrapper:notificationPresenter:userTrackedLogger:] */

undefined1 *
FUN_1052341ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_4);
  _objc_initWeak(auStack_60,param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e70d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_58;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),puVar3);
    _objc_release(puVar3);
    puVar3 = auStack_60;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),puVar3);
    _objc_release(puVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    puVar4 = PTR_PTR_1126b6710;
    _objc_alloc();
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8560();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010bf47760(*(undefined8 *)((long)puVar1 + 0x38));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052343a4; end: 1052343ab; -[SCSpectaclesDeviceFeatureProxyManager startManualWifiForProxyRequest] */

void FUN_1052343a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startProxyFlowWithUserInteracti_11258de88,1)
  ;
  return;
}



/* Entry: 1052343ac; end: 1052343ef; -[SCSpectaclesDeviceFeatureProxyManager _showManualWifiNotification] */

void FUN_1052343ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cee0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052343f0; end: 10523446f; -[SCSpectaclesDeviceFeatureProxyManager _hideManualWifiNotification] */

void FUN_1052343f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d080();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105234470; end: 1052344c7; -[SCSpectaclesDeviceFeatureProxyManager _stopProxyAndNotifyHermosa] */

void FUN_105234470(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c119ec0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyFlow_11258e780);
  return;
}



/* Entry: 1052344c8; end: 105234517; -[SCSpectaclesDeviceFeatureProxyManager startProxyManualControl] */

void FUN_1052344c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c195320(param_1,param_2,1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c119ea0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105234518; end: 10523453f; -[SCSpectaclesDeviceFeatureProxyManager stopProxyManualControl] */

void FUN_105234518(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c195320(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bec3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyAndNotifyHermosa_11258e778);
  return;
}



/* Entry: 105234540; end: 105234547; -[SCSpectaclesDeviceFeatureProxyManager isProxyConnectionActive] */

undefined1 FUN_105234540(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 105234548; end: 1052345ff; -[SCSpectaclesDeviceFeatureProxyManager handleResponse:] */

void FUN_105234548(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c250080();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c256680();
    if ((int)lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c119ea0();
      if (lVar1 == 0) {
        lVar1 = param_3;
        func_0x00010bfde7c0();
        if ((int)lVar1 != 0) {
          lVar1 = param_3;
          func_0x00010c2a4c20(param_3);
          func_0x00010bde6300(param_1,param_2,lVar1);
        }
      }
      else {
        lVar1 = param_3;
        func_0x00010c119ea0(param_3);
        func_0x00010be2bee0(param_1,param_2,lVar1);
      }
    }
    else {
      func_0x00010be30e60(param_1);
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010bf92280(param_1);
    func_0x00010bec1380(param_1,param_2,uVar2);
    func_0x00010c195320(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105234600; end: 105234613; -[SCSpectaclesDeviceFeatureProxyManager _handleManualStartResponse:] */

void FUN_105234600(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 0xfffffffffffffffd) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c195330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setEnableUIForNextProxyAttempt__112642ee8,0);
    return;
  }
  return;
}



/* Entry: 105234614; end: 105234637; -[SCSpectaclesDeviceFeatureProxyManager _handleStopProxyMsg] */

void FUN_105234614(undefined8 param_1)

{
  func_0x00010be35980();
                    /* WARNING: Could not recover jumptable at 0x00010bec3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyFlow_11258e780);
  return;
}



/* Entry: 105234638; end: 10523463f; -[SCSpectaclesDeviceFeatureProxyManager responseMonitorState] */

undefined8 FUN_105234638(void)

{
  return 0;
}



/* Entry: 105234640; end: 105234693; -[SCSpectaclesDeviceFeatureProxyManager _sendProxyWifiFailureRPC] */

void FUN_105234640(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126b6718;
    func_0x00010c11a020(PTR_PTR_1126b6718,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105234694; end: 1052346bf; -[SCSpectaclesDeviceFeatureProxyManager _connectedClientCountUpdated:] */

void FUN_105234694(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  func_0x00010be9fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bec3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyFlow_11258e780);
  return;
}



/* Entry: 1052346c0; end: 1052346cb; -[SCSpectaclesDeviceFeatureProxyManager proxyListeningWithCredentials:] */

void FUN_1052346c0(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be9fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendProxyStartedMessage__112585880);
  return;
}



/* Entry: 1052346cc; end: 1052346cf; -[SCSpectaclesDeviceFeatureProxyManager proxyConnectionEstablished] */

void FUN_1052346cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideManualWifiNotification_11256b000);
  return;
}



/* Entry: 1052346d0; end: 1052346d3; -[SCSpectaclesDeviceFeatureProxyManager proxyConnectionStopped] */

void FUN_1052346d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyAndNotifyHermosa_11258e778);
  return;
}



/* Entry: 1052346d4; end: 1052346db; -[SCSpectaclesDeviceFeatureProxyManager port] */

undefined8 FUN_1052346d4(void)

{
  return 0x778;
}



/* Entry: 1052346dc; end: 1052346e3; -[SCSpectaclesDeviceFeatureProxyManager isProxyRequired] */

undefined8 FUN_1052346dc(void)

{
  return 1;
}



/* Entry: 1052346e4; end: 105234737; -[SCSpectaclesDeviceFeatureProxyManager dataFlowsRequestRequireAutomaticWiFiConnectionTrigger:] */

void FUN_1052346e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != *(long *)(param_1 + 0x28)) {
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b3a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105234738; end: 10523477f; -[SCSpectaclesDeviceFeatureProxyManager dataFlowsRequestStartedExecuting:] */

void FUN_105234738(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x28)) {
    return;
  }
  func_0x00010c119e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2500a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105234780; end: 1052347b3; -[SCSpectaclesDeviceFeatureProxyManager dataFlowsRequest:failedWithError:] */

void FUN_105234780(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x28)) {
    return;
  }
  func_0x00010be9fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bec3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyFlow_11258e780);
  return;
}



/* Entry: 1052347b4; end: 1052347eb; -[SCSpectaclesDeviceFeatureProxyManager tweakStartProxy] */

void FUN_1052347b4(undefined8 param_1)

{
  func_0x00010c119e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2500a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052347ec; end: 1052347ef; -[SCSpectaclesDeviceFeatureProxyManager tweakStopProxy] */

void FUN_1052347ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyFlow_11258e780);
  return;
}



/* Entry: 1052347f0; end: 1052347f7; -[SCSpectaclesDeviceFeatureProxyManager tweakStartFullProxy] */

void FUN_1052347f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startProxyFlowWithUserInteracti_11258de88,1)
  ;
  return;
}



/* Entry: 1052347f8; end: 1052347fb; -[SCSpectaclesDeviceFeatureProxyManager tweakStopFullProxy] */

void FUN_1052347f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopProxyFlow_11258e780);
  return;
}



/* Entry: 1052347fc; end: 10523495f; -[SCSpectaclesDeviceFeatureProxyManager _startProxyFlowWithUserInteractionAllowed:] */

void FUN_1052347fc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if ((param_3 & 1) == 0) {
    func_0x00010beb9c60(param_1);
    goto LAB_10523492c;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    if (lVar1 == 0) goto LAB_10523492c;
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_10523492c;
    puVar3 = PTR_PTR_1126b6720;
    _objc_alloc();
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c100(puVar3,param_2,lVar1,1,0,1,0,0,param_1,lVar2,0);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c064d40();
  }
  else {
    if (*(char *)(param_1 + 0x20) != '\x01') goto LAB_10523492c;
    lVar1 = param_1;
    func_0x00010c119e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2500a0();
  }
  _objc_release(lVar1);
LAB_10523492c:
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105234960; end: 1052349d7; -[SCSpectaclesDeviceFeatureProxyManager _stopProxyFlow] */

void FUN_105234960(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  lVar1 = param_1;
  func_0x00010c119e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2566a0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf2e1e0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1052349d8; end: 105234ae7; -[SCSpectaclesDeviceFeatureProxyManager _sendProxyStartedMessage:] */

void FUN_1052349d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b6728;
  _objc_retain(param_3);
  func_0x00010c2a53c0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) || (puVar2 = puVar1, func_0x00010befd580(), puVar2[1] != '\x02'))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(puVar2 + 4);
  }
  puVar2 = PTR_PTR_1126b6718;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c104060(param_1);
  func_0x00010c11a000(puVar2,param_2,uVar3,uVar4,param_1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar6,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105234ae8; end: 105234aff; -[SCSpectaclesDeviceFeatureProxyManager proxyDelegate] */

void FUN_105234ae8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105234b00; end: 105234b0b; -[SCSpectaclesDeviceFeatureProxyManager setProxyDelegate:] */

void FUN_105234b00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105234b0c; end: 105234b17; -[SCSpectaclesDeviceFeatureProxyManager enableUIForNextProxyAttempt] */

byte FUN_105234b0c(long param_1)

{
  return *(byte *)(param_1 + 0x40) & 1;
}



/* Entry: 105234b18; end: 105234b1f; -[SCSpectaclesDeviceFeatureProxyManager setEnableUIForNextProxyAttempt:] */

void FUN_105234b18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 105234b20; end: 105234b7b; -[SCSpectaclesDeviceFeatureProxyManager .cxx_destruct] */

void FUN_105234b20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105234b7c; end: 105234bef; -[SCComposerSpectaclesHomeTouchpadActionHandler initWithTomaRPCManager:] */

undefined1 * FUN_105234b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e70d8;
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



/* Entry: 105234bf0; end: 105234bfb; -[SCComposerSpectaclesHomeTouchpadActionHandler pushToValdiMarshaller:] */

void FUN_105234bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105234bfc; end: 105234ddb; -[SCComposerSpectaclesHomeTouchpadActionHandler sendTouchEventWithPointersWithPointers:action:] */

void FUN_105234bfc(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
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
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        puVar5 = PTR_PTR_1126b6730;
        _objc_alloc(PTR_PTR_1126b6730);
        func_0x00010c102e40(uVar8);
        dVar1 = (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))
                                                ));
        func_0x00010c2be880(uVar8);
        dVar2 = (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))
                                                ));
        func_0x00010c2beba0(uVar8);
        func_0x00010c037960(puVar5,param_2,(long)dVar1,(long)dVar2,
                            (long)(double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(
                                                  uVar14,CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(
                                                  uVar11,uVar10))))))));
        func_0x00010befa120(puVar3,param_2,puVar5);
        _objc_release(puVar5);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b6738;
  func_0x00010bdc3b00(PTR_PTR_1126b6738,param_2,param_4);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c15d7a0(uVar8,param_2,puVar6,puVar5);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105234ddc; end: 105234e0f; -[SCComposerSpectaclesHomeTouchpadActionHandler onTapPowerIcon] */

void FUN_105234ddc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105234e10; end: 105234e1f; +[SCComposerSpectaclesHomeTouchpadActionHandler _SCSpectaclesTomaTouchActionFromAction:] */

long FUN_105234e10(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 4) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 105234e20; end: 105234e2b; -[SCComposerSpectaclesHomeTouchpadActionHandler .cxx_destruct] */

void FUN_105234e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105234e2c; end: 105234f23; -[SCSpectaclesHomeDeviceSetupActionHandler initWithCurrentDevice:postPairingScopeExposer:postPairingScopeServices:uiContainer:] */

undefined1 *
FUN_105234e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e70e0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105234f24; end: 105234f93; -[SCSpectaclesHomeDeviceSetupActionHandler _removePostPairingScopeIfNeeded:] */

void FUN_105234f24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105234f94; end: 10523510b; -[SCSpectaclesHomeDeviceSetupActionHandler onTapContinue] */

void FUN_105234f94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x10) != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      (**(code **)(lVar2 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126b6740;
        _objc_alloc(PTR_PTR_1126b6740);
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010bfd38e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010bfb0d20(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf40c40(uVar6);
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010c15e740(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c019b40(puVar3,param_2,uVar4,uVar5,uVar6,0,uVar7,0);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar4);
        lVar8 = lVar1;
        func_0x00010bf23fe0(lVar1,param_2,lVar2,param_1,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,lVar8);
        _objc_release(lVar8);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10523510c; end: 10523510f; -[SCSpectaclesHomeDeviceSetupActionHandler spectaclesPostPairingScopeDidComplete:] */

void FUN_10523510c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePostPairingScopeIfNeeded__112580d40);
  return;
}



/* Entry: 105235110; end: 105235113; -[SCSpectaclesHomeDeviceSetupActionHandler spectaclesPostPairingScopeDidCancel:] */

void FUN_105235110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePostPairingScopeIfNeeded__112580d40);
  return;
}



/* Entry: 105235114; end: 105235117; -[SCSpectaclesHomeDeviceSetupActionHandler spectaclesPostPairingScopeDidDeallocFlowController:] */

void FUN_105235114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePostPairingScopeIfNeeded__112580d40);
  return;
}



/* Entry: 105235118; end: 105235123; -[SCSpectaclesHomeDeviceSetupActionHandler pushToValdiMarshaller:] */

void FUN_105235118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105235124; end: 105235167; -[SCSpectaclesHomeDeviceSetupActionHandler .cxx_destruct] */

void FUN_105235124(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105235168; end: 10523522b; -[SCSpectaclesHomeDeviceStatusActionHandler initWithDelegate:currentDevice:spectaclesManager:] */

undefined1 *
FUN_105235168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e70e8;
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



/* Entry: 10523522c; end: 105235263; -[SCSpectaclesHomeDeviceStatusActionHandler _didUnpairedOrForgottenCurrentDevice] */

void FUN_10523522c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf71000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105235264; end: 1052352d7; -[SCSpectaclesHomeDeviceStatusActionHandler onTapBluetoothItem] */

void FUN_105235264(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c263900();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf48920();
    if ((int)uVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c082060(uVar3);
      uVar4 = (uint)uVar3 ^ 1;
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar4);
  return;
}



/* Entry: 1052352d8; end: 1052352df; -[SCSpectaclesHomeDeviceStatusActionHandler onTapWiFiItem] */

undefined8 FUN_1052352d8(void)

{
  return 0;
}



/* Entry: 1052352e0; end: 105235423; -[SCSpectaclesHomeDeviceStatusActionHandler onManuallyUnpairDeviceWithCompletion:] */

void FUN_1052352e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c0b8540(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105235424; end: 105235467;  */

void FUN_105235424(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105235468; end: 10523547f;  */

void FUN_105235468(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105235478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 105235480; end: 1052354f3; -[SCSpectaclesHomeDeviceStatusActionHandler onForgetDeviceWithCompletion:] */

void FUN_105235480(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5540();
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  func_0x00010be01520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052354f4; end: 1052354ff; -[SCSpectaclesHomeDeviceStatusActionHandler pushToValdiMarshaller:] */

void FUN_1052354f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 105235500; end: 105235537; -[SCSpectaclesHomeDeviceStatusActionHandler .cxx_destruct] */

void FUN_105235500(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105235538; end: 10523571f; -[SCSpectaclesHomeDeviceStatusProvider initWithSpectaclesDevice:spectaclesManager:spectaclesAppStatusProvider:wifiSettingsManager:currentPhoneDeviceName:] */

undefined1 *
FUN_105235538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e70f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar4);
    func_0x00010be881e0(puVar1);
    func_0x00010beafe80(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105235720; end: 10523572b; -[SCSpectaclesHomeDeviceStatusProvider pushToValdiMarshaller:] */

void FUN_105235720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 10523572c; end: 1052359a3; -[SCSpectaclesHomeDeviceStatusProvider _setupStatusObservations] */

void FUN_10523572c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf48d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c252740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1052359a4;
  puStack_78 = &UNK_110871150;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c2a55c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136fe0();
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1052359a4; end: 105235a8f;  */

void FUN_1052359a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105235a90; end: 105235ae7;  */

void FUN_105235a90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  func_0x00010be88ec0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105235ae8; end: 105235af7;  */

void FUN_105235ae8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105235af8; end: 105235be7; -[SCSpectaclesHomeDeviceStatusProvider _refreshAllStatusWithDelay] */

void FUN_105235af8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  if (*(long *)(param_1 + 0x48) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
  }
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105235bbc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x3f000000,"APPSTORE",*(undefined8 *)(param_1 + 0x48));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105235be8; end: 105235c13; -[SCSpectaclesHomeDeviceStatusProvider _refreshAllStatus] */

void FUN_105235be8(undefined8 param_1)

{
  func_0x00010be88320();
  func_0x00010be882e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be88ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshWiFiStatus_11257fd50);
  return;
}



/* Entry: 105235c14; end: 105235d0f; -[SCSpectaclesHomeDeviceStatusProvider _refreshBatteryStatus] */

void FUN_105235c14(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b6748;
  _objc_alloc(PTR_PTR_1126b6748);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0692a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0692a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06e420();
  lVar6 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf06300();
  func_0x00010bff75c0((double)param_1,puVar1,param_3,uVar5,lVar7 == 4);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105235d10; end: 105235e9f; -[SCSpectaclesHomeDeviceStatusProvider _refreshBluetoothStatus] */

void FUN_105235d10(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126b6750;
  _objc_alloc(PTR_PTR_1126b6750);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06b700();
  if (iVar1 == 0) {
    func_0x00010c0020c0(puVar2,param_2,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf48920();
    if ((int)uVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf48d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf48960();
      func_0x00010c0020c0(puVar2,param_2,uVar4);
      _objc_release(uVar5);
    }
    else {
      func_0x00010c0020c0(puVar2,param_2,1);
    }
    _objc_release(uVar3);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf06300();
  func_0x00010c0df760(puVar8,param_2,lVar7 != 0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ce00(puVar2,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(lVar6);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf06300();
  lVar7 = param_1;
  func_0x00010bde6420(param_1,param_2,uVar4);
  func_0x00010c0df760(puVar8,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180f00(puVar2,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105235ea0; end: 105235eaf; -[SCSpectaclesHomeDeviceStatusProvider _connectionStateFromAppState:] */

ulong FUN_105235ea0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (3 < param_3) {
    param_3 = 4;
  }
  return param_3;
}



/* Entry: 105235eb0; end: 10523609f; -[SCSpectaclesHomeDeviceStatusProvider _refreshWiFiStatus] */

void FUN_105235eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126b6758;
    _objc_alloc(PTR_PTR_1126b6758);
    func_0x00010c046760();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf48700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar6);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c07b6e0();
      _objc_release(uVar5);
      if ((int)uVar4 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c083b80();
        if ((int)uVar4 == 0) {
          _objc_release(uVar5);
          puVar6 = (undefined *)0x0;
        }
        else {
          _objc_release(uVar5);
          puVar6 = (undefined *)0x0;
        }
      }
      else {
        puVar6 = *(undefined **)(param_1 + 0x40);
        _objc_retain(puVar6);
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010bf48900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a53e0();
        _objc_release(uVar4);
      }
    }
    else {
      _objc_retain(puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bf48900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a53e0();
      _objc_release(uVar4);
      puVar6 = puVar3;
    }
    puVar2 = PTR_PTR_1126b6758;
    _objc_alloc(PTR_PTR_1126b6758);
    func_0x00010c046760();
    func_0x00010c1cc640();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1052360a0; end: 105236153; -[SCSpectaclesHomeDeviceStatusProvider _refreshStatusIfNeededWithNewDeviceState:] */

void FUN_1052360a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0 && lVar4 == param_3) goto LAB_105236140;
  _objc_retain(lVar4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  if (lVar4 == 0) {
    func_0x00010be881e0(param_1);
  }
  lVar2 = lVar4;
  func_0x00010bf1ca20();
  lVar3 = param_3;
  func_0x00010bf1ca20();
  if (lVar2 == lVar3) {
    lVar2 = lVar4;
    func_0x00010bf21aa0();
    lVar3 = param_3;
    func_0x00010bf21aa0();
    if (lVar2 != lVar3) goto LAB_105236130;
  }
  else {
LAB_105236130:
    func_0x00010be88320(param_1);
  }
  _objc_release(lVar4);
LAB_105236140:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105236154; end: 105236167; -[SCSpectaclesHomeDeviceStatusProvider spectaclesDeviceDidUpdateState:] */

void FUN_105236154(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x20)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be88210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshAllStatusWithDelay_11257fa20);
  return;
}



/* Entry: 105236168; end: 105236187; -[SCSpectaclesHomeDeviceStatusProvider spectaclesDevice:didUpdateInfo:] */

void FUN_105236168(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  if ((param_4 & 0x801) == 0 || param_3 != *(long *)(param_1 + 0x20)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be882f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshBatteryStatus_11257fa58);
  return;
}


