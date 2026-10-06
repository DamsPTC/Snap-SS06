/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105aaf72c; end: 105aaf757; -[SCSpectaclesPairingInactivityMonitor _cancelPairingTimeoutTimer] */

void FUN_105aaf72c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aaf758; end: 105aaf783; -[SCSpectaclesPairingInactivityMonitor _cleanUpTimers] */

void FUN_105aaf758(undefined8 param_1)

{
  func_0x00010bddad20();
  func_0x00010bddab40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdda4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelBTPickerTitleChangeTimer_1125542d0);
  return;
}



/* Entry: 105aaf784; end: 105aaf79b; -[SCSpectaclesPairingInactivityMonitor delegate] */

void FUN_105aaf784(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aaf79c; end: 105aaf7a7; -[SCSpectaclesPairingInactivityMonitor setDelegate:] */

void FUN_105aaf79c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105aaf7a8; end: 105aaf7eb; -[SCSpectaclesPairingInactivityMonitor .cxx_destruct] */

void FUN_105aaf7a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105aaf7ec; end: 105aaf8b7; -[SCSpectaclesPairingTooltipProvider initWithService:featureSettingsService:userPreferences:] */

undefined1 *
FUN_105aaf7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ebb98;
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
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aaf8b8; end: 105aaf8ff; -[SCSpectaclesPairingTooltipProvider hasAcceptedTermsOfUseForSpectacles] */

undefined8 FUN_105aaf8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e1b9b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105aaf900; end: 105aaf9a7; -[SCSpectaclesPairingTooltipProvider setAcceptedTermsOfUseForSpectacles:] */

void FUN_105aaf900(long param_1,undefined8 param_2)

{
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110e1b9b8);
  func_0x00010c28b8e0(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 105aaf9a8; end: 105aaf9af;  */

void FUN_105aaf9a8(void)

{
  return;
}



/* Entry: 105aaf9b0; end: 105aaf9b7; -[SCSpectaclesPairingTooltipProvider hasUsedSpectacles] */

void FUN_105aaf9b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_hasUsedSpectacles_1125d51c8);
  return;
}



/* Entry: 105aaf9b8; end: 105aaf9bf; -[SCSpectaclesPairingTooltipProvider setHasUsedSpectacles:] */

void FUN_105aaf9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setHasUsedSpectacles__1126476b8);
  return;
}



/* Entry: 105aaf9c0; end: 105aaf9fb; -[SCSpectaclesPairingTooltipProvider .cxx_destruct] */

void FUN_105aaf9c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105aaf9fc; end: 105ab00a3; -[SCSpectaclesPairingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaf9fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
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
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lStack_108;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  lVar26 = (long)_DAT_11272eb74;
  lVar1 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf70e00();
  _objc_release(lVar1);
  if (lVar2 != 1) {
    puVar3 = PTR_PTR_1126c2010;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11272eb7c;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010c15f420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11272eb80;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c273160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044d60();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126c2018;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11272eb84;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11272eb88;
    _objc_loadWeakRetained(lVar2);
    lVar7 = lVar2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044e40();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lStack_108 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar1 = lStack_108;
    func_0x00010bf70e00();
    _objc_release();
    if (lVar1 == 1) {
      lVar1 = param_1 + _DAT_11272eb8c;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_108 = lVar2;
      func_0x00010bf1f440();
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x000105ab0e84();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar1 == 0) {
      FUN_105ab0c7c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lStack_108 = 0;
    }
    uStack_98 = 0;
    uStack_88 = 0x3042000000;
    pcStack_80 = FUN_105ab00a4;
    uStack_78 = 0x105ab00b0;
    puStack_90 = &uStack_98;
    _objc_initWeak(auStack_70,0);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105ab00b8;
    puStack_a8 = &UNK_1108d35a0;
    ppuVar9 = &puStack_c0;
    puStack_a0 = &uStack_98;
    _objc_retainBlock();
    puVar10 = PTR_PTR_1126c2020;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11272eb90;
    _objc_loadWeakRetained();
    lVar11 = lVar1;
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11272eb94;
    _objc_loadWeakRetained();
    lVar4 = param_1 + _DAT_11272eb98;
    _objc_loadWeakRetained();
    lVar5 = param_1 + lVar26;
    _objc_loadWeakRetained();
    func_0x00010c0f3460();
    lVar7 = param_1 + _DAT_11272eb9c;
    _objc_loadWeakRetained();
    lVar14 = lVar7;
    func_0x00010c0e35c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_11272eba0;
    _objc_loadWeakRetained();
    lVar15 = lVar8;
    func_0x00010c100e20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_11272eba4;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf54100();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010bf53e40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + lVar26;
    _objc_loadWeakRetained();
    func_0x00010bf70e00();
    lVar21 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c0f2e80();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar25 = 0;
    }
    else {
      lVar25 = param_1 + _DAT_11272ebc8;
      _objc_loadWeakRetained();
    }
    lVar23 = lVar25;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d5a0(puVar10);
    _objc_release(lVar23);
    _objc_release(lVar25);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_storeWeak(puStack_90 + 5,puVar10);
    puVar24 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    func_0x00010c0402e0();
    func_0x00010c1c8b80();
    func_0x00010c1cb760(puVar24);
    param_1 = param_1 + lVar26;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar24);
    _objc_release(puVar10);
    _objc_release(ppuVar9);
    __Block_object_dispose(&uStack_98,8);
    _objc_destroyWeak(auStack_70);
    _objc_release(lStack_108);
    _objc_release(puVar6);
    _objc_release(puVar3);
    return;
  }
  lVar1 = param_1 + lVar26;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar26;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2493e0(lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ab00a4; end: 105ab00b7;  */

void FUN_105ab00a4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 105ab00b8; end: 105ab0133;  */

void FUN_105ab00b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ab0134; end: 105ab025f; -[SCSpectaclesPairingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab0134(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  lVar5 = param_1 + _DAT_11272eb74;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126ebba0;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = (long *)PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11272ebac;
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(long **)(param_1 + lVar5) = plVar2;
    _objc_release(uVar3);
    _objc_retain(plVar2);
    func_0x00010bf6f440(lVar1);
    plVar4 = plVar2;
    func_0x00010c117720(plVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar2);
    _objc_release(plVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105ab0260; end: 105ab0267;  */

void FUN_105ab0260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105ab0268; end: 105ab02fb; -[SCSpectaclesPairingEntryPoint _completePairingWithPostPairingOnboardingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab0268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272eb74;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249400(lVar2,param_2,param_1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ab02fc; end: 105ab049f; -[SCSpectaclesPairingEntryPoint pairingSucceededWithOnboardingManager:postPairingOnboardingInfo:pairingViewController:shouldDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab02fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  int param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = (long)_DAT_11272ebb0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = param_4;
  _objc_release(uVar1);
  if (param_4 == 0) {
    lVar6 = (long)_DAT_11272eb74;
    puVar2 = (undefined *)(param_1 + lVar6);
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2493e0(puVar3,param_2,param_1);
    _objc_release(param_1);
LAB_105ab03ac:
    _objc_release(puVar3);
  }
  else {
    if (param_6 != 0) {
      func_0x00010bde2f60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
      goto LAB_105ab03e4;
    }
    lVar7 = (long)_DAT_11272ebb4;
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) goto LAB_105ab03e4;
    puVar2 = (undefined *)(param_1 + _DAT_11272ebb8);
    _objc_loadWeakRetained();
    if ((param_5 != 0) && (*(long *)(param_1 + lVar7) != 0 && puVar2 != (undefined *)0x0)) {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar5 = puVar2;
      func_0x00010bf23fe0(puVar2,param_2,puVar3,param_1,*(undefined8 *)(param_1 + lVar6));
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11272ebbc;
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar5;
      _objc_release(uVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar6))
      ;
      goto LAB_105ab03ac;
    }
    func_0x00010bde2f60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  }
  _objc_release(puVar2);
LAB_105ab03e4:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ab04a0; end: 105ab0513; -[SCSpectaclesPairingEntryPoint pairingFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab04a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272eb74;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2493e0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ab0514; end: 105ab0523; -[SCSpectaclesPairingEntryPoint spectaclesPostPairingScopeDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab0514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completePairingWithPostPairingO_112556578,
             *(undefined8 *)(param_1 + _DAT_11272ebb0));
  return;
}



/* Entry: 105ab0524; end: 105ab0597; -[SCSpectaclesPairingEntryPoint spectaclesPostPairingScopeDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab0524(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272eb74;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2493e0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ab0598; end: 105ab059b; -[SCSpectaclesPairingEntryPoint spectaclesPostPairingScopeDidDeallocFlowController:] */

void FUN_105ab0598(void)

{
  return;
}



/* Entry: 105ab059c; end: 105ab063b; -[SCSpectaclesPairingEntryPoint spectaclesPairingScopeV2RequestsDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab059c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272eb74;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010c2493e0(lVar2,param_2,param_1);
  }
  else {
    func_0x00010c249400();
  }
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ab063c; end: 105ab077b; -[SCSpectaclesPairingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab063c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272eba8,0);
  _objc_storeStrong(param_1 + _DAT_11272eb78,0);
  _objc_storeStrong(param_1 + _DAT_11272ebb4,0);
  _objc_destroyWeak(param_1 + _DAT_11272ebb8);
  _objc_destroyWeak(param_1 + _DAT_11272ebc8);
  _objc_destroyWeak(param_1 + _DAT_11272eb7c);
  _objc_destroyWeak(param_1 + _DAT_11272eb8c);
  _objc_destroyWeak(param_1 + _DAT_11272eb80);
  _objc_destroyWeak(param_1 + _DAT_11272eb98);
  _objc_destroyWeak(param_1 + _DAT_11272eba0);
  _objc_destroyWeak(param_1 + _DAT_11272eb94);
  _objc_destroyWeak(param_1 + _DAT_11272eb9c);
  _objc_destroyWeak(param_1 + _DAT_11272eba4);
  _objc_destroyWeak(param_1 + _DAT_11272ebc4);
  _objc_destroyWeak(param_1 + _DAT_11272ebc0);
  _objc_destroyWeak(param_1 + _DAT_11272eb84);
  _objc_destroyWeak(param_1 + _DAT_11272eb88);
  _objc_destroyWeak(param_1 + _DAT_11272eb90);
  _objc_destroyWeak(param_1 + _DAT_11272eb74);
  _objc_storeStrong(param_1 + _DAT_11272ebac,0);
  _objc_storeStrong(param_1 + _DAT_11272ebbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ebb0,0);
  return;
}



/* Entry: 105ab077c; end: 105ab081f; -[SCLagunaService initWithServerMetadataFetcher:snapTokenProvider:] */

undefined1 *
FUN_105ab077c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebba8;
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



/* Entry: 105ab0820; end: 105ab0a07; -[SCLagunaService updateUserAcceptedTermsOfUseForSpectacles:successBlock:failureBlock:] */

void FUN_105ab0820(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010bfa48e0(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105ab0a08; end: 105ab0b9f;  */

void FUN_105ab0a08(long param_1,long param_2,ulong param_3,undefined *param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(lVar5 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (ulong)*(byte *)(param_1 + 0x38);
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    param_4 = puVar1;
    param_5 = lVar4;
    func_0x00010beecb60(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(puVar1);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    if (param_5 == 0) {
      lVar5 = *(long *)(param_2 + 0x20);
    }
    else {
      lVar5 = *(long *)(param_2 + 0x28);
    }
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))();
    }
    _objc_release(param_5);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105ab0ba0; end: 105ab0c1b;  */

void FUN_105ab0ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ab0c1c; end: 105ab0c27;  */

void FUN_105ab0c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105ab0c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105ab0c28; end: 105ab0c57; -[SCLagunaService .cxx_destruct] */

void FUN_105ab0c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ab0c58; end: 105ab0c7b;  */

undefined ** FUN_105ab0c58(ulong param_1)

{
  if (param_1 < 0x1a) {
    return (undefined **)(&PTR_PTR_1108d3630)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110e1b9f8;
}



/* Entry: 105ab0c7c; end: 105ab10bf;  */

void FUN_105ab0c7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  
  puVar1 = PTR_PTR_1126c2028;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x0001090261e8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1bdd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bdd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dcd798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcd798,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x000109026200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e1bdf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bdf8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x0001090261d0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110e1be18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1be18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar9 = ppuVar8;
  func_0x0001090263b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR____CFConstantStringClassReference_110dae6f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053360(puVar1);
  _objc_release(ppuVar11);
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ab10c0; end: 105ab1247; -[SCSpectaclesPairingCompleteViewController initWithOnDemandResourceFetching:playerProvider:delegate:subtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105ab10c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ebbb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11272ebd4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272ebd8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ebdc);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ebdc) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ebe0);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ebe0) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272ebe4),param_5);
    lVar4 = (long)_DAT_11272ebe8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    func_0x00010be91560(puVar1);
    func_0x00010be91560(puVar1);
    func_0x00010be91580(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ab1248; end: 105ab1287; -[SCSpectaclesPairingCompleteViewController _isDarkMode] */

bool FUN_105ab1248(long param_1)

{
  long lVar1;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 105ab1288; end: 105ab12eb; -[SCSpectaclesPairingCompleteViewController doneButtonClicked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab1288(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272ebec;
  func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar1),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar1),param_2,0);
  param_1 = param_1 + _DAT_11272ebe4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f2e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab12ec; end: 105ab135f; -[SCSpectaclesPairingCompleteViewController playerItemDidReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab12ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  func_0x00010c0fe360(*(undefined8 *)(param_1 + _DAT_11272ebf0));
  _objc_release(param_3);
  return;
}



/* Entry: 105ab1360; end: 105ab1f8b; -[SCSpectaclesPairingCompleteViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab1360(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f8 = PTR_PTR_1126ebbb0;
  lStack_100 = param_1;
  _objc_msgSendSuper2(&lStack_100,PTR_s_viewDidLoad_112684cd8);
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(lVar6);
  _objc_release(puVar1);
  func_0x00010bed3b00(param_1);
  lVar11 = (long)_DAT_11272ebf4;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  lStack_108 = lVar6;
  func_0x00010befbb60(lVar6);
  puStack_148 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  uStack_118 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = (undefined *)lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  uStack_128 = uVar2;
  uStack_b0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  lStack_138 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_150 = uVar3;
  uStack_a8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_a0 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_148);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(uStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_130);
  _objc_release(lStack_138);
  _objc_release(uStack_128);
  _objc_release(puStack_120);
  _objc_release(lStack_110);
  _objc_release(uStack_118);
  puVar1 = PTR_PTR_1126bf660;
  _objc_alloc();
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar14);
  lVar11 = (long)_DAT_11272ebf8;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c100c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2218a0();
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  uVar2 = 0xf;
  FUN_105ab0c58();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11272ebe0;
  lVar6 = *(long *)(param_1 + lVar13);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    func_0x00010bff41a0();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11272ebd8);
    func_0x00010c101100();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + _DAT_11272ebf0);
    *(undefined8 *)(param_1 + _DAT_11272ebf0) = uVar8;
    _objc_release(uVar10);
    func_0x00010c1dda40(*(undefined8 *)(param_1 + lVar11));
    _objc_release(puVar1);
    _objc_release(uVar7);
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c2a5060(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_110 = uVar2;
  uStack_b8 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar14);
  lVar6 = (long)_DAT_11272ebfc;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c213040(uVar2);
  func_0x0001090262c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar14);
  lVar6 = (long)_DAT_11272ec00;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11272ebec;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c160fc0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1bec80(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1bec80(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1bec80(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar12 = (long)_DAT_11272ec04;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c207380(0x4026000000000000,*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1b9ba0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1b9b80(0,0x4043000000000000,0,0x4042800000000000,*(undefined8 *)(param_1 + lVar12));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1887e0(0x4042800000000000,*(undefined8 *)(param_1 + lVar12));
  lVar6 = lStack_108;
  func_0x00010befbb60(lStack_108);
  puStack_148 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  uStack_118 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = (undefined *)lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_128 = uVar2;
  uStack_d8 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  lStack_130 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  lStack_140 = uVar3;
  uStack_d0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar11);
  uStack_c8 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_148);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_130);
  _objc_release(uStack_128);
  _objc_release(puStack_120);
  _objc_release(uStack_118);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar12 = (long)_DAT_11272ec08;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c207380(0x4026000000000000,*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1b9ba0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1b9b80(0,0,0x402e000000000000,0,*(undefined8 *)(param_1 + lVar12));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar12));
  lVar6 = lStack_108;
  func_0x00010befbb60(lStack_108);
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  uStack_118 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_f0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010bf1ff80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar12);
  uStack_e8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_120);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(lVar13);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar11);
  _objc_release(uStack_118);
  _objc_release(lStack_110);
  lVar13 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lStack_168 = lVar6;
  pcStack_158 = FUN_105ab1f8c;
  puStack_178 = PTR_PTR_1126ebbb0;
  lStack_180 = lVar13;
  uStack_170 = uVar14;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_180,PTR_s_viewWillAppear__1126853f0);
  if (*(long *)(lVar13 + _DAT_11272ebf0) != 0) {
    uVar2 = *(undefined8 *)(lVar13 + _DAT_11272ebf8);
    func_0x00010c100720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(uVar2);
    func_0x00010bec9100(lVar13);
  }
  return;
}



/* Entry: 105ab1f8c; end: 105ab200b; -[SCSpectaclesPairingCompleteViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab1f8c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebbb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  if (*(long *)(param_1 + _DAT_11272ebf0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272ebf8);
    func_0x00010c100720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(uVar1);
    func_0x00010bec9100(param_1);
  }
  return;
}



/* Entry: 105ab200c; end: 105ab20df; -[SCSpectaclesPairingCompleteViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab200c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebbb0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ebf8);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ebf0);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105ab20e0; end: 105ab2177; -[SCSpectaclesPairingCompleteViewController _suscribeToAVPlayerDidEndPlayingNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab20e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_playerItemDidReachEnd__11252c4a8;
  uVar4 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ebf0);
  func_0x00010bf5f0a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2,param_2,param_1,puVar1,uVar4,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ab2178; end: 105ab222f; -[SCSpectaclesPairingCompleteViewController _updateBackgroundImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab2178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1;
  func_0x00010be3f740();
  uVar1 = 0xd;
  if ((int)lVar5 == 0) {
    uVar1 = 0xe;
  }
  FUN_105ab0c58(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ebdc);
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11272ec0c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar4);
  lVar6 = (long)_DAT_11272ebf4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1a9f00(*(long *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar5));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ab2230; end: 105ab2377; -[SCSpectaclesPairingCompleteViewController _requestOnDemandResourcesVideoForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab2230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11272ebd4;
  if (*(long *)(param_1 + lVar5) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    FUN_105ab0c58(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c29a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_58;
    _objc_copyWeak(puVar4,auStack_48);
    uStack_50 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105ab2378; end: 105ab23e3;  */

void FUN_105ab2378(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33060();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab23e4; end: 105ab2503; -[SCSpectaclesPairingCompleteViewController _handleVideoForResourceType:video:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab23e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ebe0);
  FUN_105ab0c58(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,param_4,param_3);
  _objc_release(param_3);
  lVar4 = (long)_DAT_11272ebf8;
  if ((*(long *)(param_1 + lVar4) != 0) &&
     (lVar5 = (long)_DAT_11272ebf0, *(long *)(param_1 + lVar5) == 0)) {
    puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    func_0x00010bff41a0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272ebd8);
    func_0x00010c101100(uVar3,param_2,&PTR____CFConstantStringClassReference_110e1afd8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar2);
    func_0x00010c1dda40(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c100720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(uVar3);
    func_0x00010bec9100(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ab2504; end: 105ab264b; -[SCSpectaclesPairingCompleteViewController _requestOnDemandResourcesImageForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab2504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11272ebd4;
  if (*(long *)(param_1 + lVar5) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    FUN_105ab0c58(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfe7d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_58;
    _objc_copyWeak(puVar4,auStack_48);
    uStack_50 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105ab264c; end: 105ab26b7;  */

void FUN_105ab264c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a9c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab26b8; end: 105ab2767; -[SCSpectaclesPairingCompleteViewController _handleImageForResourceType:image:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab26b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ebdc);
  lVar1 = param_3;
  FUN_105ab0c58(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_4,lVar1);
  _objc_release(lVar1);
  if (param_3 == 0xe) {
    lVar3 = (long)_DAT_11272ebf4;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ab2768; end: 105ab2813; -[SCSpectaclesPairingCompleteViewController traitCollectionDidChange:] */

void FUN_105ab2768(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_48 = PTR_PTR_1126ebbb0;
  lStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar1,param_3);
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c292b20();
  lVar4 = param_3;
  func_0x00010c292b20();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar3 != lVar4) {
    func_0x00010bed3b00(param_1);
  }
  return;
}



/* Entry: 105ab2814; end: 105ab291f; -[SCSpectaclesPairingCompleteViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab2814(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ebe8,0);
  _objc_storeStrong(param_1 + _DAT_11272ebd8,0);
  _objc_storeStrong(param_1 + _DAT_11272ebd4,0);
  _objc_storeStrong(param_1 + _DAT_11272ebe0,0);
  _objc_storeStrong(param_1 + _DAT_11272ebdc,0);
  _objc_storeStrong(param_1 + _DAT_11272ebec,0);
  _objc_storeStrong(param_1 + _DAT_11272ec00,0);
  _objc_storeStrong(param_1 + _DAT_11272ebfc,0);
  _objc_storeStrong(param_1 + _DAT_11272ec0c,0);
  _objc_storeStrong(param_1 + _DAT_11272ebf4,0);
  _objc_storeStrong(param_1 + _DAT_11272ebf0,0);
  _objc_storeStrong(param_1 + _DAT_11272ebf8,0);
  _objc_storeStrong(param_1 + _DAT_11272ec04,0);
  _objc_storeStrong(param_1 + _DAT_11272ec08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ebe4);
  return;
}



/* Entry: 105ab2920; end: 105ab3043; -[SCSpectaclesPairingFooterView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105ab2920(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_3;
  _objc_retain(param_3);
  puStack_108 = PTR_PTR_1126ebbb8;
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_110;
  uStack_110 = param_1;
  _objc_msgSendSuper2(uVar20,uVar21,uVar22,uVar23,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272ec10,param_3);
    puVar2 = PTR_PTR_1126af270;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar17 = (long)_DAT_11272ec14;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar16);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar17));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c1bdb00(uVar3);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(uVar16);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar17));
    puVar4 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    func_0x00010c166c00();
    uStack_c0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar5 = puVar2;
    puStack_a8 = puVar2;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar6;
    puStack_98 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd60(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    func_0x00010c162900(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11272ec18;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar19 = (long)_DAT_11272ec1c;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar20);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar19));
    uVar21 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c160fc0(uVar21);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c271420(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar22);
    _objc_release(uVar20);
    _objc_release(uVar21);
    uVar20 = *(undefined8 *)((long)puVar1 + lVar19);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar20);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar5);
    _objc_release(uVar20);
    _objc_release(uVar21);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_e0 = *(undefined8 *)((long)puVar1 + lVar17);
    uStack_d8 = *(undefined8 *)((long)puVar1 + lVar18);
    uStack_d0 = *(undefined8 *)((long)puVar1 + lVar19);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar17 = (long)_DAT_11272ec20;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar20);
    _objc_release(puVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c207380(0x4034000000000000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar22;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar23;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar21;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar20;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(uVar20);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar21);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar23);
    _objc_release(puVar9);
    _objc_release(uVar3);
    _objc_release(uVar22);
    _objc_release(puVar8);
    _objc_release(uVar16);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  lVar17 = (long)_DAT_11272ec24;
  if (*(undefined8 **)((long)param_3 + lVar17) != puVar15) {
    _objc_retain(puVar15);
    uVar20 = *(undefined8 *)((long)param_3 + lVar17);
    *(undefined8 **)((long)param_3 + lVar17) = puVar15;
    _objc_release(uVar20);
    func_0x00010c081560(puVar15);
    lVar17 = (long)_DAT_11272ec14;
    func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar17));
    uVar20 = *(undefined8 *)((long)param_3 + lVar17);
    puVar1 = puVar15;
    func_0x00010c275e80(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099980(uVar20);
    _objc_release(puVar1);
    func_0x00010c06efa0(puVar15);
    lVar17 = (long)_DAT_11272ec18;
    func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar17));
    func_0x00010c06efc0(puVar15);
    func_0x00010c1beb60(*(undefined8 *)((long)param_3 + lVar17));
    func_0x00010c06efc0(puVar15);
    func_0x00010c21e900(*(undefined8 *)((long)param_3 + lVar17));
    uVar20 = *(undefined8 *)((long)param_3 + lVar17);
    puVar1 = puVar15;
    func_0x00010bf47e40(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar20);
    _objc_release(puVar1);
    func_0x00010c06e080(puVar15);
    lVar17 = (long)_DAT_11272ec1c;
    func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar17));
    uVar20 = *(undefined8 *)((long)param_3 + lVar17);
    puVar1 = puVar15;
    func_0x00010bf2e020(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar20);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return puVar15;
}



/* Entry: 105ab3044; end: 105ab31af; -[SCSpectaclesPairingFooterView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab3044(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11272ec24;
  if (*(long *)(param_1 + lVar2) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c081560(param_3);
    lVar3 = (long)_DAT_11272ec14;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    lVar2 = param_3;
    func_0x00010c275e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099980(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c06efa0(param_3);
    lVar3 = (long)_DAT_11272ec18;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c06efc0(param_3);
    func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c06efc0(param_3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,(uint)lVar2 ^ 1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    lVar2 = param_3;
    func_0x00010bf47e40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar1,param_2,lVar2,0);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c06e080(param_3);
    lVar3 = (long)_DAT_11272ec1c;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    lVar2 = param_3;
    func_0x00010bf2e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar1,param_2,lVar2,0);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ab31b0; end: 105ab31eb; -[SCSpectaclesPairingFooterView _confirmButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab31b0(long param_1)

{
  param_1 = param_1 + _DAT_11272ec10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f3100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab31ec; end: 105ab3227; -[SCSpectaclesPairingFooterView _cancelButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab31ec(long param_1)

{
  param_1 = param_1 + _DAT_11272ec10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f30e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab3228; end: 105ab3283; -[SCSpectaclesPairingFooterView attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab3228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272ec10;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f30c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab3284; end: 105ab32ff; -[SCSpectaclesPairingFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab3284(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ec10);
  _objc_storeStrong(param_1 + _DAT_11272ec24,0);
  _objc_storeStrong(param_1 + _DAT_11272ec1c,0);
  _objc_storeStrong(param_1 + _DAT_11272ec18,0);
  _objc_storeStrong(param_1 + _DAT_11272ec14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ec20,0);
  return;
}



/* Entry: 105ab3300; end: 105ab3993; -[SCSpectaclesPairingHeaderView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105ab3300(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  _objc_retain(param_3);
  puStack_b0 = PTR_PTR_1126ebbc0;
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_b8;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(uVar14,uVar15,uVar16,uVar17,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272ec28,param_3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar13 = (long)_DAT_11272ec2c;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar13 = (long)_DAT_11272ec30;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar13 = (long)_DAT_11272ec34;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    uVar15 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010befbd60(uVar15);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c271420(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar15);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar14);
    _objc_release(puVar2);
    func_0x00010c181f00(0x443b8000,*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11272ec38;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar14);
    uVar15 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c219b60(uVar15);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010bf138e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar15);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c16e480(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c181f00(0x443b8000,*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar13 = (long)_DAT_11272ec3c;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c207380(0x4010000000000000,*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c181f00(0x437a0000,*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar13 = (long)_DAT_11272ec40;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c1b9ba0(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c1b9b80(0x4024000000000000,0x4034000000000000,0x4024000000000000,0x4034000000000000,
                        *(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar16;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar17;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar14;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar10);
    _objc_release(uVar15);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar14);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar17);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar16);
    _objc_release(puVar3);
    _objc_release(uVar12);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  lVar13 = (long)_DAT_11272ec44;
  if (*(undefined8 **)((long)param_3 + lVar13) != puVar11) {
    _objc_retain(puVar11);
    uVar14 = *(undefined8 *)((long)param_3 + lVar13);
    *(undefined8 **)((long)param_3 + lVar13) = puVar11;
    _objc_release(uVar14);
    puVar1 = puVar11;
    func_0x00010c2711a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)param_3 + (long)_DAT_11272ec2c));
    _objc_release(puVar1);
    puVar1 = puVar11;
    func_0x00010c260dc0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)param_3 + (long)_DAT_11272ec30));
    _objc_release(puVar1);
    lVar13 = (long)_DAT_11272ec34;
    uVar14 = *(undefined8 *)((long)param_3 + lVar13);
    puVar1 = puVar11;
    func_0x00010c0d5e00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar14);
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar1 = puVar11;
    func_0x00010c0d5dc0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)((long)param_3 + lVar13));
    _objc_release(puVar1);
    func_0x00010c0787c0(puVar11);
    func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar13));
    func_0x00010c06ce40(puVar11);
    func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + (long)_DAT_11272ec38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return puVar11;
}



/* Entry: 105ab3994; end: 105ab3aff; -[SCSpectaclesPairingHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab3994(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272ec44;
  if (*(long *)(param_1 + lVar3) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    lVar3 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11272ec2c),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c260dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11272ec30),param_2,lVar3);
    _objc_release(lVar3);
    lVar4 = (long)_DAT_11272ec34;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_3;
    func_0x00010c0d5e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar1,param_2,lVar2,0);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0d5dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0787c0(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    lVar3 = param_3;
    func_0x00010c06ce40(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272ec38),param_2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ab3b00; end: 105ab3b3b; -[SCSpectaclesPairingHeaderView _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab3b00(long param_1)

{
  param_1 = param_1 + _DAT_11272ec28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f3180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab3b3c; end: 105ab3b77; -[SCSpectaclesPairingHeaderView _navigationButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab3b3c(long param_1)

{
  param_1 = param_1 + _DAT_11272ec28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f31a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab3b78; end: 105ab3c13; -[SCSpectaclesPairingHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab3b78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ec28);
  _objc_storeStrong(param_1 + _DAT_11272ec44,0);
  _objc_storeStrong(param_1 + _DAT_11272ec34,0);
  _objc_storeStrong(param_1 + _DAT_11272ec38,0);
  _objc_storeStrong(param_1 + _DAT_11272ec30,0);
  _objc_storeStrong(param_1 + _DAT_11272ec2c,0);
  _objc_storeStrong(param_1 + _DAT_11272ec3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ec40,0);
  return;
}



/* Entry: 105ab3c14; end: 105ab4297; -[SCSpectaclesPairingStatusView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105ab3c14(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_3;
  _objc_retain(param_3);
  puStack_f0 = PTR_PTR_1126ebbc8;
  uVar18 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(uVar18,uVar19,uVar20,uVar21,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272ec48,param_3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar15 = (long)_DAT_11272ec4c;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar14);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    func_0x00010c166c00();
    puVar2 = PTR_PTR_1126af270;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar16 = (long)_DAT_11272ec50;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c219b60(uVar4);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(uVar14);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar16));
    uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar2;
    puStack_98 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd60(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar5);
    _objc_release(puVar2);
    func_0x00010c162900(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar17 = (long)_DAT_11272ec54;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar18);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar17));
    uVar19 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010befbd60(uVar19);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar19;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c271420(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar19);
    uVar18 = *(undefined8 *)((long)puVar1 + lVar17);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar18);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_c8 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_c0 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_b8 = *(undefined8 *)((long)puVar1 + lVar17);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar15 = (long)_DAT_11272ec58;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar18);
    _objc_release(puVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c207380(0x4026000000000000,*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c1887e0(0x4031000000000000,*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar19;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar20;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar21;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar18);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar21);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar20);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar19);
    _objc_release(puVar6);
    _objc_release(uVar14);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  lVar15 = (long)_DAT_11272ec5c;
  if (*(undefined8 **)((long)param_3 + lVar15) != puVar13) {
    _objc_retain(puVar13);
    uVar18 = *(undefined8 *)((long)param_3 + lVar15);
    *(undefined8 **)((long)param_3 + lVar15) = puVar13;
    _objc_release(uVar18);
    puVar1 = puVar13;
    func_0x00010c2711a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)param_3 + (long)_DAT_11272ec4c));
    _objc_release(puVar1);
    puVar1 = puVar13;
    func_0x00010bf1e9e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11272ec50;
    func_0x00010c160fc0(*(undefined8 *)((long)param_3 + lVar15));
    _objc_release(puVar1);
    uVar18 = *(undefined8 *)((long)param_3 + lVar15);
    puVar1 = puVar13;
    func_0x00010bf1e9c0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099980(uVar18);
    _objc_release(puVar1);
    func_0x00010c06da20(puVar13);
    lVar15 = (long)_DAT_11272ec54;
    func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar15));
    uVar18 = *(undefined8 *)((long)param_3 + lVar15);
    puVar1 = puVar13;
    func_0x00010bf25a80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar18);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return puVar13;
}



/* Entry: 105ab4298; end: 105ab43cf; -[SCSpectaclesPairingStatusView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab4298(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11272ec5c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11272ec4c),param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf1e9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_11272ec50;
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    lVar2 = param_3;
    func_0x00010bf1e9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099980(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c06da20(param_3);
    lVar3 = (long)_DAT_11272ec54;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    lVar2 = param_3;
    func_0x00010bf25a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar1,param_2,lVar2,0);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ab43d0; end: 105ab440b; -[SCSpectaclesPairingStatusView _buttonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab43d0(long param_1)

{
  param_1 = param_1 + _DAT_11272ec48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f34e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab440c; end: 105ab4467; -[SCSpectaclesPairingStatusView attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab440c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272ec48;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f34c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ab4468; end: 105ab44e3; -[SCSpectaclesPairingStatusView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab4468(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ec48);
  _objc_storeStrong(param_1 + _DAT_11272ec5c,0);
  _objc_storeStrong(param_1 + _DAT_11272ec54,0);
  _objc_storeStrong(param_1 + _DAT_11272ec50,0);
  _objc_storeStrong(param_1 + _DAT_11272ec4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ec58,0);
  return;
}



/* Entry: 105ab44e4; end: 105ab4a43; -[SCSpectaclesPairingViewController initWithDisplayName:viewModel:spectaclesServices:networkConnectivityServices:tooltipProvider:delegate:source:onDemandResourceFetching:playerProvider:crashContext:targetDeviceProductType:pairingDeviceInfo:isBIPA:crashLogger:containerFactory:interstitialScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ab44e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126ebbd0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11272ec68;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    lVar6 = (long)_DAT_11272ec6c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11272ec70;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec74);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec74) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c0e8100();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec78);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec78) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf6fec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec7c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec7c) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11272ec80;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2030;
    _objc_alloc();
    func_0x00010c041a60(0x4034000000000000,0x404e000000000000,0x402e000000000000);
    lVar6 = (long)_DAT_11272ec84;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    lVar6 = (long)_DAT_11272ec88;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2038;
    _objc_alloc();
    uVar2 = param_5;
    func_0x00010bf027a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2ce0();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec8c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ec8c) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272ec90,param_8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec94) = param_9;
    lVar6 = (long)_DAT_11272ec98;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ec9c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ec9c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272eca0);
    *(undefined **)((long)puVar1 + (long)_DAT_11272eca0) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272eca4) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272eca8) = 0;
    lVar6 = (long)_DAT_11272ecac;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ecb0) = param_13;
    lVar6 = (long)_DAT_11272ecb4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272ecb8) = param_15;
    lVar6 = (long)_DAT_11272ecbc;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_17;
    _objc_release(uVar2);
    uVar2 = param_18;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ecc0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ecc0) = uVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11272ecc4;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_19;
    _objc_release(uVar2);
    func_0x00010c1c8b80(puVar1);
    puVar3 = PTR_PTR_1126c1838;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ecc8);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ecc8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    func_0x00010be77060(puVar1);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ab4a44; end: 105ab4d17; -[SCSpectaclesPairingViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105ab4a44(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be3a320();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272eccc);
  *(undefined **)(param_1 + _DAT_11272eccc) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11272ecd0;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bdc3580(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80(*(undefined8 *)(param_1 + _DAT_11272ec98),param_2,uVar6);
  _objc_release(uVar6);
  lVar8 = (long)_DAT_11272ec74;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0b8320(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80();
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar2);
  func_0x00010c222380(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar7);
  _objc_release(puVar2);
  func_0x00010be39d40(param_1);
  func_0x00010be39c40(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272ec70);
  func_0x00010c06e7e0();
  if (iVar1 == 0) {
    func_0x00010be3a520(param_1);
  }
  else {
    func_0x00010be397c0(param_1);
  }
  func_0x00010be3a540(param_1);
  func_0x00010beaa240(param_1,param_2,1);
  puVar2 = PTR_PTR_1126c2040;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11272ecb4);
  lVar7 = (long)_DAT_11272ec8c;
  uStack_78 = *(undefined8 *)(param_1 + lVar7);
  lVar8 = (long)_DAT_11272ec84;
  uStack_70 = *(undefined8 *)(param_1 + lVar8);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_80 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)(param_1 + lVar7);
  uStack_88 = *(undefined8 *)(param_1 + lVar8);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04af60(puVar2,param_2,uVar6,uVar9,puVar3,puVar4);
  lVar7 = (long)_DAT_11272ecd4;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar7 = *(long *)(param_1 + lVar7);
  func_0x00010c24de00(lVar7,param_2,*(undefined8 *)(param_1 + _DAT_11272ec94));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar7;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(lVar7 + _DAT_11272ecd4);
  func_0x00010c0f2ea0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c074be0();
  _objc_release(lVar7);
  _objc_release(lVar5);
  return lVar8;
}



/* Entry: 105ab4d18; end: 105ab4d7f; -[SCSpectaclesPairingViewController _isHermosaFamily] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ab4d18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ecd4);
  func_0x00010c0f2ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074be0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105ab4d80; end: 105ab5027; -[SCSpectaclesPairingViewController _initSpinner] */

/* WARNING: Possible PIC construction at 0x000105ab4df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab4df4) */
/* WARNING: Removing unreachable block (ram,0x000105ab5024) */
/* WARNING: Removing unreachable block (ram,0x000105ab5000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab4d80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar3 = (long)_DAT_11272ecd8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105ab5028; end: 105ab508b; -[SCSpectaclesPairingViewController _initStatusView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab5028(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ecdc);
  *(undefined8 *)(param_1 + _DAT_11272ecdc) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2048;
  _objc_alloc();
  func_0x00010c00a2c0();
  lVar3 = (long)_DAT_11272ece0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105ab508c; end: 105ab52f7; -[SCSpectaclesPairingViewController _initHeaderView] */

/* WARNING: Possible PIC construction at 0x000105ab50f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab57fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab62f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab67b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab6814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab67bc) */
/* WARNING: Removing unreachable block (ram,0x000105ab62f4) */
/* WARNING: Removing unreachable block (ram,0x000105ab6718) */
/* WARNING: Removing unreachable block (ram,0x000105ab66f8) */
/* WARNING: Removing unreachable block (ram,0x000105ab5dd8) */
/* WARNING: Removing unreachable block (ram,0x000105ab6224) */
/* WARNING: Removing unreachable block (ram,0x000105ab6200) */
/* WARNING: Removing unreachable block (ram,0x000105ab5a7c) */
/* WARNING: Removing unreachable block (ram,0x000105ab5cc0) */
/* WARNING: Removing unreachable block (ram,0x000105ab5c94) */
/* WARNING: Removing unreachable block (ram,0x000105ab599c) */
/* WARNING: Removing unreachable block (ram,0x000105ab5800) */
/* WARNING: Removing unreachable block (ram,0x000105ab5628) */
/* WARNING: Removing unreachable block (ram,0x000105ab538c) */
/* WARNING: Removing unreachable block (ram,0x000105ab55a8) */
/* WARNING: Removing unreachable block (ram,0x000105ab5588) */
/* WARNING: Removing unreachable block (ram,0x000105ab50f8) */
/* WARNING: Removing unreachable block (ram,0x000105ab52f4) */
/* WARNING: Removing unreachable block (ram,0x000105ab52d4) */
/* WARNING: Removing unreachable block (ram,0x000105ab6818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab508c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c1f70;
  _objc_alloc();
  func_0x00010c00a2c0();
  lVar3 = (long)_DAT_11272ece4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105ab52f8; end: 105ab55ab; -[SCSpectaclesPairingViewController _initFooterView] */

/* WARNING: Possible PIC construction at 0x000105ab5388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab57fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab62f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab67b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab6814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab67bc) */
/* WARNING: Removing unreachable block (ram,0x000105ab62f4) */
/* WARNING: Removing unreachable block (ram,0x000105ab6718) */
/* WARNING: Removing unreachable block (ram,0x000105ab66f8) */
/* WARNING: Removing unreachable block (ram,0x000105ab5dd8) */
/* WARNING: Removing unreachable block (ram,0x000105ab6224) */
/* WARNING: Removing unreachable block (ram,0x000105ab6200) */
/* WARNING: Removing unreachable block (ram,0x000105ab5a7c) */
/* WARNING: Removing unreachable block (ram,0x000105ab5cc0) */
/* WARNING: Removing unreachable block (ram,0x000105ab5c94) */
/* WARNING: Removing unreachable block (ram,0x000105ab599c) */
/* WARNING: Removing unreachable block (ram,0x000105ab5800) */
/* WARNING: Removing unreachable block (ram,0x000105ab5628) */
/* WARNING: Removing unreachable block (ram,0x000105ab538c) */
/* WARNING: Removing unreachable block (ram,0x000105ab55a8) */
/* WARNING: Removing unreachable block (ram,0x000105ab5588) */
/* WARNING: Removing unreachable block (ram,0x000105ab6818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab52f8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ece8);
  *(undefined8 *)(param_1 + _DAT_11272ece8) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2050;
  _objc_alloc();
  func_0x00010c00a2c0();
  lVar3 = (long)_DAT_11272ecec;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar2;
  _objc_release(uVar1);
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105ab55ac; end: 105ab5cc3; -[SCSpectaclesPairingViewController _initNamingStackView] */

/* WARNING: Possible PIC construction at 0x000105ab5624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab57fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab5dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab62f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab67b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab6814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab67bc) */
/* WARNING: Removing unreachable block (ram,0x000105ab62f4) */
/* WARNING: Removing unreachable block (ram,0x000105ab6718) */
/* WARNING: Removing unreachable block (ram,0x000105ab66f8) */
/* WARNING: Removing unreachable block (ram,0x000105ab5dd8) */
/* WARNING: Removing unreachable block (ram,0x000105ab6224) */
/* WARNING: Removing unreachable block (ram,0x000105ab6200) */
/* WARNING: Removing unreachable block (ram,0x000105ab5a7c) */
/* WARNING: Removing unreachable block (ram,0x000105ab5cc0) */
/* WARNING: Removing unreachable block (ram,0x000105ab5c94) */
/* WARNING: Removing unreachable block (ram,0x000105ab599c) */
/* WARNING: Removing unreachable block (ram,0x000105ab5800) */
/* WARNING: Removing unreachable block (ram,0x000105ab5628) */
/* WARNING: Removing unreachable block (ram,0x000105ab6818) */

void FUN_105ab55ac(void)

{
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105ab5cc4; end: 105ab6227; -[SCSpectaclesPairingViewController _initSpecsMediaAndStatusViews] */

/* WARNING: Possible PIC construction at 0x000105ab5dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab62f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab67b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab6814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab67bc) */
/* WARNING: Removing unreachable block (ram,0x000105ab62f4) */
/* WARNING: Removing unreachable block (ram,0x000105ab6718) */
/* WARNING: Removing unreachable block (ram,0x000105ab66f8) */
/* WARNING: Removing unreachable block (ram,0x000105ab5dd8) */
/* WARNING: Removing unreachable block (ram,0x000105ab6224) */
/* WARNING: Removing unreachable block (ram,0x000105ab6200) */
/* WARNING: Removing unreachable block (ram,0x000105ab6818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab5cc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010be39f60();
  func_0x00010be3a620(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar5 = (long)_DAT_11272ecfc;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c207380(0x4040000000000000,*(undefined8 *)(param_1 + lVar5));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105ab6228; end: 105ab671b; -[SCSpectaclesPairingViewController _initCheeriosMediaAndStatusViews] */

/* WARNING: Possible PIC construction at 0x000105ab62f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab67b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab6814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab67bc) */
/* WARNING: Removing unreachable block (ram,0x000105ab62f4) */
/* WARNING: Removing unreachable block (ram,0x000105ab6718) */
/* WARNING: Removing unreachable block (ram,0x000105ab66f8) */
/* WARNING: Removing unreachable block (ram,0x000105ab6818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab6228(long param_1)

{
  long lVar1;
  
  func_0x00010be39f60();
  func_0x00010be3a620(param_1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cda0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ecfc),
             PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105ab671c; end: 105ab686f; -[SCSpectaclesPairingViewController _initMediaView] */

/* WARNING: Possible PIC construction at 0x000105ab67b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab6814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab67bc) */
/* WARNING: Removing unreachable block (ram,0x000105ab6818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab671c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b4640;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005ee0(0);
  lVar5 = (long)_DAT_11272ecf8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105ab6870; end: 105ab69bb; -[SCSpectaclesPairingViewController _updateMediaView] */

/* WARNING: Possible PIC construction at 0x000105ab68a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab68ac) */
/* WARNING: Removing unreachable block (ram,0x000105ab68d4) */
/* WARNING: Removing unreachable block (ram,0x000105ab68d8) */
/* WARNING: Removing unreachable block (ram,0x000105ab6988) */
/* WARNING: Removing unreachable block (ram,0x000105ab68dc) */
/* WARNING: Removing unreachable block (ram,0x000105ab690c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab6870(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = *(long *)(param_1 + _DAT_11272eca4) == 0;
  if (bVar1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272ed00);
    func_0x00010c100720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272ecf8);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272ecf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setHidden__1126479f8,bVar1);
  return;
}



/* Entry: 105ab69bc; end: 105ab6a53; -[SCSpectaclesPairingViewController _updateMediaViewCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab69bc(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(ulong *)(param_2 + _DAT_11272eca4) < 0x12) ||
     (*(ulong *)(param_2 + _DAT_11272eca4) - 0x14 < 6)) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_11272ecf8);
    param_1 = 0.0;
  }
  else {
    lVar2 = (long)_DAT_11272ecf8;
    func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar2));
    if (param_1 <= 0.0) {
      func_0x00010c2a5040(*(undefined8 *)(param_2 + _DAT_11272ecfc));
      param_1 = param_1 + -26.0;
    }
    else {
      func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar2));
    }
    param_1 = param_1 * 0.5;
    uVar1 = *(undefined8 *)(param_2 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1842f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar1,PTR_s_setCornerRadius__11263ead8);
  return;
}



/* Entry: 105ab6a54; end: 105ab6b77; -[SCSpectaclesPairingViewController _setAVPlayerVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab6a54(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010bff41a0();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272ecac);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c101100();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11272ed08;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11272ed00;
    func_0x00010c1dda40(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c100c60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2218a0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c100720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(uVar3);
    func_0x00010bec9100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105ab6b78; end: 105ab6b87; -[SCSpectaclesPairingViewController _setImageViewAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab6b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ed04),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 105ab6b88; end: 105ab6c97; -[SCSpectaclesPairingViewController _fadeView:withUpdates:] */

void FUN_105ab6b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ab6c98;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105ab6ca4;
  puStack_88 = &UNK_1108d3770;
  uStack_70 = 0x3fc3333340000000;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c27ac60(0x3fc3333340000000,puVar2,param_2,param_3,0x500000,&puStack_68,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105ab6c98; end: 105ab6ca3;  */

void FUN_105ab6c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105ab6ca4; end: 105ab6d4f;  */

void FUN_105ab6ca4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ab6d50;
  puStack_50 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x00010c27ac60(uVar3,puVar1,param_2,uVar2,0x500000,&puStack_68,0);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105ab6d50; end: 105ab6d5b;  */

void FUN_105ab6d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105ab6d5c; end: 105ab6dd3; -[SCSpectaclesPairingViewController _setViewsForPhase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab6d5c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11272ed0c) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11272ed0c) = param_3;
  func_0x00010bea5c20();
  func_0x00010bea4600(param_1);
  func_0x00010bea40a0(param_1);
  func_0x00010bea7f00(param_1);
  func_0x00010bea57e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSpinnerForPhase__1125878d0,param_3);
  return;
}



/* Entry: 105ab6dd4; end: 105ab71af; -[SCSpectaclesPairingViewController _setStatusViewForPhase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab6dd4(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  
  ppuVar7 = (undefined **)0x0;
  ppuVar6 = (undefined **)0x0;
  switch(param_3) {
  case 1:
    lVar8 = (long)_DAT_11272ec70;
    ppuVar6 = *(undefined ***)((long)param_1 + lVar8);
    func_0x00010c14f840(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = *(undefined ***)((long)param_1 + lVar8);
    func_0x00010c14f860(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    ppuVar6 = param_1;
    func_0x000109026368();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = *(undefined ***)((long)param_1 + (long)_DAT_11272ec70);
    func_0x00010bf48ac0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e1bf18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bf18,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e1bf38;
    goto code_r0x000105ab6f14;
  case 4:
    ppuVar6 = *(undefined ***)((long)param_1 + (long)_DAT_11272ec70);
    func_0x00010c227f40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e1bf38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bf38,0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    ppuVar6 = param_1;
    func_0x000109026380();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x000109026398();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e1bf58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bf58,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e1bf78;
    goto code_r0x000105ab6f14;
  case 8:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e1bf98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bf98,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e1bfb8;
code_r0x000105ab6f14:
    func_0x00010bcbeaa8(ppuVar7,0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e1bfd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bfd8,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)((long)param_1 + (long)_DAT_11272ecd4);
    func_0x00010c0f2ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar8 == 0) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e1bff8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1bff8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    _objc_release(lVar8);
    break;
  case 10:
    ppuVar6 = param_1;
    func_0x0001090262d8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)0x0;
    break;
  case 0xb:
    ppuVar6 = *(undefined ***)((long)param_1 + (long)_DAT_11272ec70);
    func_0x00010c06e7e0();
    if ((int)ppuVar6 == 0) {
      ppuVar7 = (undefined **)0x0;
      ppuVar6 = (undefined **)0x0;
    }
    else {
      func_0x0001090262c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x000109026170();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar3 = PTR_PTR_1126c1ff8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1c018;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c018,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052d00();
  _objc_release(ppuVar2);
  lVar8 = (long)_DAT_11272ecdc;
  uVar4 = *(ulong *)((long)param_1 + lVar8);
  func_0x00010c071ae0();
  if ((uVar4 & 1) == 0) {
    _objc_retain(puVar3);
    uVar5 = *(undefined8 *)((long)param_1 + lVar8);
    *(undefined **)((long)param_1 + lVar8) = puVar3;
    _objc_release(uVar5);
    func_0x00010be0e100(param_1);
  }
  _objc_release(puVar3);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  return;
}



/* Entry: 105ab71b0; end: 105ab71cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab71b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ece0),
             PTR_s_setViewModel__1126663d8,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ecdc));
  return;
}



/* Entry: 105ab71cc; end: 105ab73ef; -[SCSpectaclesPairingViewController _setHeaderViewForPhase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab71cc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11272ec70;
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010c06e7e0();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000109026320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 < 6) {
    if (param_3 < 3) {
      if (param_3 == 1) {
        uVar2 = *(ulong *)(param_1 + lVar8);
        func_0x00010c06e7e0();
      }
      else if (param_3 != 2) goto LAB_105ab72fc;
LAB_105ab72d4:
      iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
      func_0x00010c06e7e0();
      if (iVar1 != 0) goto LAB_105ab72e0;
LAB_105ab72fc:
      if ((uVar2 & 1) != 0) goto LAB_105ab7300;
    }
    else {
      if (param_3 - 3U < 2) goto LAB_105ab72e0;
      if (param_3 != 5) goto LAB_105ab72fc;
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0d5580(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar5;
    }
  }
  else {
    if (3 < param_3 - 7U) {
      if (param_3 == 6) goto LAB_105ab72d4;
      if (param_3 != 0xb) goto LAB_105ab72fc;
LAB_105ab7300:
      puVar7 = (undefined *)0x0;
      goto LAB_105ab7340;
    }
LAB_105ab72e0:
    _objc_release(ppuVar6);
    ppuVar6 = (undefined **)0x0;
    puVar7 = (undefined *)0x0;
    if ((uVar2 & 1) != 0) goto LAB_105ab7340;
  }
  puVar7 = PTR_PTR_1126c1f78;
  _objc_alloc();
  func_0x00010c053720();
LAB_105ab7340:
  lVar8 = (long)_DAT_11272ed10;
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(puVar7);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar7;
    _objc_release(uVar5);
    func_0x00010be0e100(param_1);
  }
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105ab73f0; end: 105ab745b;  */

/* WARNING: Possible PIC construction at 0x000105ab7428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab742c) */
/* WARNING: Removing unreachable block (ram,0x00010c2226c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab73f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ece4),
             PTR_s_setHidden__1126479f8,
             *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ed10) == 0);
  return;
}



/* Entry: 105ab745c; end: 105ab769f; -[SCSpectaclesPairingViewController _setFooterViewForPhase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab745c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  
  ppuVar5 = (undefined **)0x0;
  if (param_3 < 7) {
    if (3 < param_3 - 1U) {
      ppuVar6 = (undefined **)0x0;
      if (param_3 - 5U < 2) {
        ppuVar5 = *(undefined ***)(param_1 + _DAT_11272ec70);
        func_0x00010c26b3e0(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = (undefined **)0x0;
      }
      goto LAB_105ab7558;
    }
LAB_105ab74dc:
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272ec70);
    func_0x00010c06e7e0();
    if (iVar1 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1c078;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c078,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = (undefined **)0x0;
      goto LAB_105ab7558;
    }
LAB_105ab7550:
    ppuVar5 = (undefined **)0x0;
  }
  else {
    if (param_3 - 8U < 3) goto LAB_105ab74dc;
    if (param_3 == 7) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e1c038;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c038,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1c058;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c058,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105ab7558;
    }
    ppuVar6 = (undefined **)0x0;
    if (param_3 != 0xb) goto LAB_105ab7558;
    ppuVar5 = *(undefined ***)(param_1 + _DAT_11272ec70);
    func_0x00010c06e7e0();
    if ((int)ppuVar5 == 0) goto LAB_105ab7550;
    func_0x000109025120();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar6 = (undefined **)0x0;
LAB_105ab7558:
  puVar2 = PTR_PTR_1126c2060;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ec70);
  func_0x00010c26b400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fa00();
  _objc_release(uVar3);
  lVar7 = (long)_DAT_11272ece8;
  uVar4 = *(ulong *)(param_1 + lVar7);
  func_0x00010c071ae0();
  if ((uVar4 & 1) == 0) {
    _objc_retain(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar3);
    func_0x00010be0e100(param_1);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  return;
}



/* Entry: 105ab76a0; end: 105ab76bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab76a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ecec),
             PTR_s_setViewModel__1126663d8,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ece8));
  return;
}



/* Entry: 105ab76bc; end: 105ab7777; -[SCSpectaclesPairingViewController _setNamingViewForPhase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab76bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar3 = (long)_DAT_11272ecf4;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    if (param_3 != 5) {
      return;
    }
    func_0x00010be39fe0(param_1);
    uVar2 = *(ulong *)(param_1 + lVar3);
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  else {
    func_0x00010c074c20();
    if ((uint)(param_3 != 5) == (uint)lVar1) {
      return;
    }
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ab7778;
  puStack_48 = &UNK_110845ce0;
  lStack_40 = param_1;
  uStack_38 = param_3 != 5;
  func_0x00010be0e100(param_1,param_2,*(undefined8 *)(param_1 + lVar3),&puStack_60);
  return;
}



/* Entry: 105ab7778; end: 105ab778f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ecf4),
             PTR_s_setHidden__1126479f8,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105ab7790; end: 105ab78c3; -[SCSpectaclesPairingViewController _setMediaAssetForPhase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7790(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar4 = 0;
  if (param_3 < 6) {
    if (2 < param_3 - 2U) {
      if (param_3 == 1) {
        iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272ec70);
        func_0x00010c06e7e0();
        lVar4 = 0x16;
        if (iVar1 == 0) {
          lVar4 = 0x11;
        }
      }
      goto LAB_105ab7854;
    }
LAB_105ab781c:
    uVar2 = *(ulong *)(param_1 + _DAT_11272ec70);
    func_0x00010c06e7e0();
    if ((uVar2 & 1) != 0) {
      lVar4 = 0x18;
      goto LAB_105ab7854;
    }
  }
  else {
    if (param_3 == 6) goto LAB_105ab781c;
    if (param_3 == 7) {
      lVar4 = 0x13;
      goto LAB_105ab7854;
    }
    if (param_3 != 0xb) goto LAB_105ab7854;
    uVar2 = *(ulong *)(param_1 + _DAT_11272ec70);
    func_0x00010c06e7e0();
    if ((uVar2 & 1) != 0) {
      lVar4 = 0x19;
      goto LAB_105ab7854;
    }
  }
  lVar3 = param_1;
  func_0x00010be40ea0();
  lVar4 = 0x12;
  if ((int)lVar3 != 0) {
    lVar4 = 1;
  }
LAB_105ab7854:
  if (*(long *)(param_1 + _DAT_11272eca4) != lVar4) {
    *(long *)(param_1 + _DAT_11272eca4) = lVar4;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105ab78c4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010be0e100(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11272ecf8),&puStack_48);
  }
  return;
}



/* Entry: 105ab78c4; end: 105ab78cb;  */

void FUN_105ab78c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateMediaView_112594778);
  return;
}



/* Entry: 105ab78cc; end: 105ab793f; -[SCSpectaclesPairingViewController _setSpinnerForPhase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab78cc(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272ecd8;
  uVar1 = (uint)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06c0e0();
  if ((param_3 == 8) == uVar1) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if (param_3 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105ab7940; end: 105ab79b7; -[SCSpectaclesPairingViewController _prefetchAssets] */

/* WARNING: Possible PIC construction at 0x000105ab796c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105ab7984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ab7970) */
/* WARNING: Removing unreachable block (ram,0x000105ab7988) */
/* WARNING: Removing unreachable block (ram,0x000105ab799c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab7940(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272ec70);
  func_0x00010c06e7e0();
  if (iVar1 == 0) {
    uVar2 = 0x12;
  }
  else {
    uVar2 = 0x16;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be91590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__requestOnDemandResourcesVideoFo_112581f00,uVar2);
  return;
}



/* Entry: 105ab79b8; end: 105ab7aff; -[SCSpectaclesPairingViewController _requestOnDemandResourcesVideoForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ab79b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11272ec68;
  if (*(long *)(param_1 + lVar5) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    FUN_105ab0c58(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c29a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_58;
    _objc_copyWeak(puVar4,auStack_48);
    uStack_50 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105ab7b00; end: 105ab7b6b;  */

void FUN_105ab7b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33060();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


