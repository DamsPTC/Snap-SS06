/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a690c8; end: 105a6913f; -[SCSpectaclesCheeriosOTALogger firmwareUpdateDownloadedWithDeviceInfo:sessionInfo:] */

void FUN_105a690c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be51a80(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a69140; end: 105a691b7; -[SCSpectaclesCheeriosOTALogger firmwareUpdateTransferStartWithDeviceInfo:sessionInfo:] */

void FUN_105a69140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be51a80(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a691b8; end: 105a6922f; -[SCSpectaclesCheeriosOTALogger firmwareUpdateTransferredWithDeviceInfo:sessionInfo:] */

void FUN_105a691b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be51a80(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a69230; end: 105a6923b; -[SCSpectaclesCheeriosOTALogger .cxx_destruct] */

void FUN_105a69230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a6923c; end: 105a692f3; -[SCSpectaclesLowPowerModeManager initWithConnectionHub:] */

undefined1 * FUN_105a6923c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb7d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a692f4; end: 105a69337; -[SCSpectaclesLowPowerModeManager requestSettingsWithForceBoot:] */

void FUN_105a692f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc7520(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a69338; end: 105a6937b; -[SCSpectaclesLowPowerModeManager updateSettings:] */

void FUN_105a69338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1c1060(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a6937c; end: 105a693fb; -[SCSpectaclesLowPowerModeManager _errorFromResponse:] */

void FUN_105a6937c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e19c58,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a693fc; end: 105a695b7; -[SCSpectaclesLowPowerModeManager handleResponse:] */

void FUN_105a693fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be0afa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126af5d0;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 == 0x3c) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010c0b59c0(param_3);
      func_0x00010c0df6e0(puVar5,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar4);
      _objc_release(puVar4);
    }
    else {
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar5);
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    if (lVar3 != 0x3b) goto LAB_105a69560;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (lVar1 == 0) {
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar5);
      _objc_release(puVar5);
      func_0x00010c136620(param_1,param_2,0);
      goto LAB_105a69560;
    }
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar5);
  }
  _objc_release(puVar5);
LAB_105a69560:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a695b8; end: 105a695bf; -[SCSpectaclesLowPowerModeManager responseMonitorState] */

undefined8 FUN_105a695b8(void)

{
  return 0;
}



/* Entry: 105a695c0; end: 105a695c7; -[SCSpectaclesLowPowerModeManager settingsResult] */

undefined8 FUN_105a695c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a695c8; end: 105a695cf; -[SCSpectaclesLowPowerModeManager updateSettingsResult] */

undefined8 FUN_105a695c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a695d0; end: 105a6960b; -[SCSpectaclesLowPowerModeManager .cxx_destruct] */

void FUN_105a695d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a6960c; end: 105a6982b; -[SCSpectaclesPowerStateEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6960c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar8 = (long)_DAT_11272e2b8;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be42d60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105a6982c;
    puStack_58 = &UNK_1108cff80;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
  }
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar1 = lVar8;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2638e0();
  _objc_release(lVar1);
  _objc_release(lVar8);
  puVar7 = PTR_PTR_1126ae720;
  if ((int)lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_78);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272e2bc);
  puVar4 = PTR_PTR_1126c1b88;
  _objc_alloc(PTR_PTR_1126c1b88);
  func_0x00010c037f40();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a6982c; end: 105a698ab;  */

void FUN_105a6982c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a698ac; end: 105a6995f; -[SCSpectaclesPowerStateEntryPoint _createPowerStateManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a698ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c1b90;
  _objc_alloc(PTR_PTR_1126c1b90);
  lVar4 = (long)_DAT_11272e2b8;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006f40(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a69960; end: 105a699db; -[SCSpectaclesPowerStateEntryPoint _createLowPowerModeManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a69960(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1b98;
  _objc_alloc(PTR_PTR_1126c1b98);
  param_1 = param_1 + _DAT_11272e2b8;
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



/* Entry: 105a699dc; end: 105a69af3; -[SCSpectaclesPowerStateEntryPoint _isPowerStateSupported:] */

ulong FUN_105a699dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0776e0();
  _objc_release(uVar2);
  uVar2 = param_3;
  if ((int)uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c074bc0();
    _objc_release(uVar3);
    if ((int)uVar5 == 0) goto LAB_105a69ad0;
    uVar3 = param_3;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      uVar5 = 0;
      goto LAB_105a69ad0;
    }
    func_0x00010bfb0d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0c68;
    func_0x00010bfe0bc0(PTR_PTR_1126c0c68);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf433a0(uVar2,param_2,puVar4);
    bVar1 = uVar3 == 0xffffffffffffffff;
    _objc_release(puVar4);
  }
  else {
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 == 0;
  }
  uVar5 = (ulong)!bVar1;
  _objc_release(uVar2);
LAB_105a69ad0:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105a69af4; end: 105a69b2f; -[SCSpectaclesPowerStateEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a69af4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e2bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e2b8);
  return;
}



/* Entry: 105a69b30; end: 105a69d93; -[SCSpectaclesPowerStateManager initWithCurrentDevice:connectionHub:] */

undefined8 *
FUN_105a69b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126eb7e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1ba0;
    _objc_alloc();
    func_0x00010c03c240();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    func_0x00010befb0c0(puVar1[2]);
    func_0x00010befac20(puVar1[2]);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c252740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0e0ea0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    puVar9 = puVar8;
    func_0x00010c25ff60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a69d94; end: 105a69ddb;  */

void FUN_105a69d94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a69ddc; end: 105a69e3f; -[SCSpectaclesPowerStateManager _handleConnectionState:] */

void FUN_105a69ddc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1ca20();
  if (lVar1 == 2) {
    func_0x00010c135160(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf1ca20();
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      func_0x00010be2cde0(param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a69e40; end: 105a69ec3; -[SCSpectaclesPowerStateManager _handleNewQCOMState:] */

void FUN_105a69e40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c11cbc0();
  if (lVar1 == param_3) {
    return;
  }
  puVar2 = PTR_PTR_1126c1ba0;
  _objc_alloc();
  func_0x00010c03c240();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a69ec4; end: 105a69f13; -[SCSpectaclesPowerStateManager _handleBootCompleteEvent:] */

void FUN_105a69ec4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c1ba8;
    _objc_alloc(PTR_PTR_1126c1ba8);
    func_0x00010c0109e0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105a69f14; end: 105a6a04b; -[SCSpectaclesPowerStateManager handleResponse:] */

void FUN_105a69f14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 == 5) {
    func_0x00010be2e920(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    if (lVar2 != 0x42) {
      lVar1 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c27dd80();
      _objc_release(lVar1);
      if (lVar2 != 0x6a) {
        lVar1 = param_3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c27dd80();
        _objc_release(lVar1);
        if (lVar2 == 0x6b) {
          puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_58 = 0xc2000000;
          pcStack_50 = FUN_105a6a04c;
          puStack_48 = &UNK_110841f80;
          uStack_40 = param_1;
          _objc_retain(param_3);
          lStack_38 = param_3;
          func_0x0001000d76cc("APPSTORE",&puStack_60);
          _objc_release(lStack_38);
        }
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a6a04c; end: 105a6a07b;  */

void FUN_105a6a04c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfc9480(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be2cdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__handleNewQCOMState__112568d18,uVar2);
  return;
}



/* Entry: 105a6a07c; end: 105a6a143; -[SCSpectaclesPowerStateManager _handlePushMessage:] */

void FUN_105a6a07c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 auStack_90 [6];
  undefined8 auStack_60 [6];
  
  puVar3 = auStack_90;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c13bcc0();
  if (uVar1 == 5) {
    uVar1 = param_3;
    func_0x00010bfdaca0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010bfd4c00();
      if ((int)uVar1 == 0) goto LAB_105a6a128;
      pcVar2 = (code *)0x105a6a16c;
    }
    else {
      pcVar2 = FUN_105a6a144;
      puVar3 = auStack_60;
    }
    *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puVar3[1] = 0xc2000000;
    puVar3[2] = pcVar2;
    puVar3[3] = &UNK_110841f80;
    puVar3[4] = param_1;
    _objc_retain(param_3);
    puVar3[5] = param_3;
    func_0x0001000d76cc("APPSTORE",puVar3);
    _objc_release(puVar3[5]);
  }
LAB_105a6a128:
  _objc_release(param_3);
  return;
}



/* Entry: 105a6a144; end: 105a6a193;  */

void FUN_105a6a144(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11cbe0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be2cdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__handleNewQCOMState__112568d18,uVar2);
  return;
}



/* Entry: 105a6a194; end: 105a6a19b; -[SCSpectaclesPowerStateManager responseMonitorState] */

undefined8 FUN_105a6a194(void)

{
  return 0;
}



/* Entry: 105a6a19c; end: 105a6a1f3; -[SCSpectaclesPowerStateManager requestCurrentPowerState] */

void FUN_105a6a19c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc9460(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a6a1f4; end: 105a6a257; -[SCSpectaclesPowerStateManager turnOnDevice] */

void FUN_105a6a1f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c11cbc0();
  if (lVar1 == 1) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126b6718;
  func_0x00010c11cc20(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a6a258; end: 105a6a2bb; -[SCSpectaclesPowerStateManager turnOffDevice] */

void FUN_105a6a258(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c11cbc0();
  if (lVar1 == 2) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126b6718;
  func_0x00010c11cb80(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a6a2bc; end: 105a6a2c3; -[SCSpectaclesPowerStateManager currentPowerState] */

undefined8 FUN_105a6a2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a6a2c4; end: 105a6a2cb; -[SCSpectaclesPowerStateManager currentPowerStateObservable] */

undefined8 FUN_105a6a2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a6a2cc; end: 105a6a2d3; -[SCSpectaclesPowerStateManager bootCompleteObservable] */

undefined8 FUN_105a6a2cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a6a2d4; end: 105a6a32f; -[SCSpectaclesPowerStateManager .cxx_destruct] */

void FUN_105a6a2d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a6a330; end: 105a6a3d7; -[SCSpectaclesDeviceReportIssueManager initWithConnectionHub:] */

undefined1 * FUN_105a6a330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb7e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010befac20(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a6a3d8; end: 105a6a41b; -[SCSpectaclesDeviceReportIssueManager sendShakeToReportData:description:] */

void FUN_105a6a3d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c15c920(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a6a41c; end: 105a6a47f; -[SCSpectaclesDeviceReportIssueManager handleResponse:] */

void FUN_105a6a41c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bfdbf80();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105a6a480; end: 105a6a487; -[SCSpectaclesDeviceReportIssueManager responseMonitorState] */

undefined8 FUN_105a6a480(void)

{
  return 0;
}



/* Entry: 105a6a488; end: 105a6a48f; -[SCSpectaclesDeviceReportIssueManager shakeToReportEvent] */

undefined8 FUN_105a6a488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a6a490; end: 105a6a4bf; -[SCSpectaclesDeviceReportIssueManager .cxx_destruct] */

void FUN_105a6a490(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a6a4c0; end: 105a6a62f; -[SCSpectaclesDeviceReportIssueManagerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6a4c0(long param_1)

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
  lVar1 = param_1 + _DAT_11272e2e4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c074be0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126ae720;
  if ((int)lVar4 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272e2e8);
  puVar5 = PTR_PTR_1126c1bb0;
  _objc_alloc(PTR_PTR_1126c1bb0);
  func_0x00010c00c3a0();
  func_0x00010bf9d660(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a6a630; end: 105a6a66f;  */

void FUN_105a6a630(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdecfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a6a670; end: 105a6a6eb; -[SCSpectaclesDeviceReportIssueManagerEntryPoint _createDeviceReportIssueManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6a670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1bb8;
  _objc_alloc(PTR_PTR_1126c1bb8);
  param_1 = param_1 + _DAT_11272e2e4;
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



/* Entry: 105a6a6ec; end: 105a6a727; -[SCSpectaclesDeviceReportIssueManagerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6a6ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e2e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e2e4);
  return;
}



/* Entry: 105a6a728; end: 105a6a7cb; -[SCSpectaclesTomaRPCManager initWithMessageSender:] */

undefined1 * FUN_105a6a728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb7f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x000106f9a77c(param_3,&PTR____CFConstantStringClassReference_110e19c78,
                        &PTR___NSConcreteGlobalBlock_1108d0030);
    func_0x000106f9a77c(param_3,&PTR____CFConstantStringClassReference_110e19c98,
                        &PTR___NSConcreteGlobalBlock_1108d0070);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a6a7cc; end: 105a6a9f3;  */

void FUN_105a6a7cc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  lVar3 = param_2;
  func_0x00010c102ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar4 = PTR_PTR_1126c1bc0;
      uVar10 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c102e40(uVar10);
      func_0x00010c2be880(uVar10);
      func_0x00010c2beba0(uVar10);
      func_0x00010bdc3820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c218cc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c102ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      lVar9 = lVar9 + 1;
    } while (lVar8 != lVar9);
    lVar8 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126c1bc0;
  func_0x00010beef1e0(param_2);
  func_0x00010bdc3880(puVar4);
  puVar4 = puVar2;
  func_0x00010c218cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126c18d0;
    _objc_alloc_init();
    puVar4 = PTR_PTR_1126c1bc8;
    _objc_alloc_init(PTR_PTR_1126c1bc8);
    func_0x00010c190000(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      puVar4 = PTR_PTR_1126c1bd0;
      _objc_alloc_init(PTR_PTR_1126c1bd0);
      func_0x00010c1a99c0();
      func_0x00010c227500(puVar4);
      func_0x00010c2276e0(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a6a9f4; end: 105a6aaa3;  */

void FUN_105a6a9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126c1bc8;
  _objc_alloc_init(PTR_PTR_1126c1bc8);
  func_0x00010c190000(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c1bd0;
    _objc_alloc_init(PTR_PTR_1126c1bd0);
    func_0x00010c1a99c0();
    func_0x00010c227500(puVar2,param_2,uVar3);
    func_0x00010c2276e0(puVar2,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a6aaa4; end: 105a6ab03; +[SCSpectaclesTomaRPCManager _HRMPBActionPointerWithId:x:y:] */

void FUN_105a6aaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1bd0;
  _objc_alloc_init(PTR_PTR_1126c1bd0);
  func_0x00010c1a99c0();
  func_0x00010c227500(puVar1,param_2,param_4);
  func_0x00010c2276e0(puVar1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a6ab04; end: 105a6ab13; +[SCSpectaclesTomaRPCManager _HRMPBTouchEventRequestTouchActionFromAction:] */

int FUN_105a6ab04(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 4) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 105a6ab14; end: 105a6abaf; -[SCSpectaclesTomaRPCManager sendTouchEventWithPointers:action:] */

void FUN_105a6ab14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c1bd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c037980();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126c1928;
  _objc_alloc(PTR_PTR_1126c1928);
  func_0x00010c055e80();
  func_0x00010c15bec0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a6abb0; end: 105a6ac2f; -[SCSpectaclesTomaRPCManager toggleDisplay] */

void FUN_105a6abb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c1928;
  _objc_alloc(PTR_PTR_1126c1928);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e19c98,puVar2,0);
  func_0x00010c15bec0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a6ac30; end: 105a6ac5f; -[SCSpectaclesTomaRPCManager .cxx_destruct] */

void FUN_105a6ac30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a6ac60; end: 105a6adc7; -[SCSpectaclesTomaServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6ac60(long param_1)

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
  
  lVar1 = param_1 + _DAT_11272e2f4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0776e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar7 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272e2f8);
  puVar5 = PTR_PTR_1126c1be0;
  _objc_alloc(PTR_PTR_1126c1be0);
  func_0x00010c054040();
  func_0x00010bf9d660(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar7);
  return;
}



/* Entry: 105a6adc8; end: 105a6ae07;  */

void FUN_105a6adc8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010becd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a6ae08; end: 105a6ae83; -[SCSpectaclesTomaServicesEntryPoint _tomaRPCManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6ae08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1bc0;
  _objc_alloc(PTR_PTR_1126c1bc0);
  param_1 = param_1 + _DAT_11272e2f4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfc0fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b880(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a6ae84; end: 105a6aebf; -[SCSpectaclesTomaServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6ae84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e2f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e2f4);
  return;
}



/* Entry: 105a6aec0; end: 105a6b017; -[SCSpectaclesWiFiSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6aec0(long param_1)

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
  lVar1 = param_1 + _DAT_11272e2fc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be459a0();
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
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272e300);
  puVar4 = PTR_PTR_1126c1be8;
  _objc_alloc(PTR_PTR_1126c1be8);
  func_0x00010c063040();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a6b018; end: 105a6b057;  */

void FUN_105a6b018(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a6b058; end: 105a6b183; -[SCSpectaclesWiFiSettingsEntryPoint _createWiFiSettingsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6b058(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c1bf0;
  _objc_alloc(PTR_PTR_1126c1bf0);
  lVar8 = (long)_DAT_11272e2fc;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar6 = lVar8;
  func_0x00010c24cc20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272e304;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006f80(puVar1,param_2,lVar3,lVar5,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a6b184; end: 105a6b20b; -[SCSpectaclesWiFiSettingsEntryPoint _isWifiSupported:] */

ulong FUN_105a6b184(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074bc0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfd38e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0776e0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105a6b20c; end: 105a6b253; -[SCSpectaclesWiFiSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6b20c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e300,0);
  _objc_destroyWeak(param_1 + _DAT_11272e304);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e2fc);
  return;
}



/* Entry: 105a6b254; end: 105a6b693; -[SCSpectaclesWiFiSettingsManager initWithCurrentDevice:connectionHub:ssidScanner:onDemandResourceFetching:] */

undefined8 *
FUN_105a6b254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126eb7f8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    *(undefined2 *)(puVar1 + 0xe) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c105b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_initWeak(auStack_88,puVar1);
    uVar7 = puVar1[0xf];
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf5fb80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105a6b694;
    puStack_98 = &UNK_1108711e0;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar9 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar7);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf601e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[9];
    puVar1[9] = uVar8;
    _objc_release(uVar10);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf60200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e0ea0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar7 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar2);
    func_0x00010befb0c0(puVar1[2]);
    func_0x00010befac20(puVar1[2]);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a6b694; end: 105a6b723;  */

void FUN_105a6b694(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a6b724; end: 105a6b77f; -[SCSpectaclesWiFiSettingsManager _handleSsidChange:] */

void FUN_105a6b724(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _objc_release(uVar3);
    func_0x00010c136fe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6b780; end: 105a6b7b7; -[SCSpectaclesWiFiSettingsManager _shouldForceBoot] */

bool FUN_105a6b780(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 == 0;
}



/* Entry: 105a6b7b8; end: 105a6b877; -[SCSpectaclesWiFiSettingsManager isWiFiSettingsAccessible] */

long FUN_105a6b7b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf48920();
  if ((int)lVar3 == 0) {
    param_1 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf5fb60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c11cbc0();
    if (lVar5 == 1) {
      param_1 = 1;
    }
    else {
      func_0x00010beb3d00(param_1);
    }
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 105a6b878; end: 105a6b89f; -[SCSpectaclesWiFiSettingsManager currentPhoneWiFiSSID] */

void FUN_105a6b878(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a6b8a0; end: 105a6b8fb; -[SCSpectaclesWiFiSettingsManager connectedDeviceWiFiSSID] */

void FUN_105a6b8a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c083b80();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf48900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c24cc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105a6b8fc; end: 105a6b9cb; -[SCSpectaclesWiFiSettingsManager _requestDevicePowerStateIfNeeded] */

void FUN_105a6b8fc(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010beb3d00();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf48920();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf5fb60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c11cbc0();
      _objc_release(lVar2);
      _objc_release(lVar4);
      if (lVar3 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c135160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 105a6b9cc; end: 105a6ba77; -[SCSpectaclesWiFiSettingsManager requestAvailableWiFiNetworksAsync] */

void FUN_105a6b9cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010be90f00();
  lVar1 = param_1;
  func_0x00010c083b80();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c136ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestWiFiNetworkStatusAsync_11262b618);
      return;
    }
    if ((*(byte *)(param_1 + 0x71) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x71) = 1;
      puVar2 = PTR_PTR_1126b6718;
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010beb3d00(param_1);
      func_0x00010bfc2c40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 105a6ba78; end: 105a6bb0f; -[SCSpectaclesWiFiSettingsManager requestWiFiNetworkStatusAsync] */

void FUN_105a6ba78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010be90f00();
  lVar1 = param_1;
  func_0x00010c083b80();
  if ((((int)lVar1 != 0) && (*(long *)(param_1 + 0x60) == 0)) &&
     ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x70) = 1;
    puVar2 = PTR_PTR_1126b6718;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010beb3d00(param_1);
    func_0x00010bfcc3a0(puVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105a6bb10; end: 105a6bb73; -[SCSpectaclesWiFiSettingsManager enableSpectaclesWiFiSettings:] */

void FUN_105a6bb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c083b80();
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126b6718;
    func_0x00010bf91c00(PTR_PTR_1126b6718,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105a6bb74; end: 105a6bc6f; -[SCSpectaclesWiFiSettingsManager connectWiFiWithSSID:password:] */

void FUN_105a6bb74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (lVar2 = param_1, func_0x00010c083b80(), (int)lVar2 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010c22b280(PTR_PTR_1126b6718);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar4);
    _objc_release(puVar3);
    func_0x00010bea3380(param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105a6bc70;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a6bc70; end: 105a6bc77;  */

void FUN_105a6bc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebfb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startConnectWiFiRequestTimer_11258d880);
  return;
}



/* Entry: 105a6bc78; end: 105a6bcbb; -[SCSpectaclesWiFiSettingsManager forgetWiFiWithSSID:] */

void FUN_105a6bc78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfb5680(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a6bcbc; end: 105a6bcf3; -[SCSpectaclesWiFiSettingsManager canForgetWiFi] */

long FUN_105a6bcbc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c263760();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105a6bcf4; end: 105a6bdf7; -[SCSpectaclesWiFiSettingsManager wifiNetworkForSSID:] */

void FUN_105a6bcf4(long param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf48900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c24cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105a6bdf8;
    puStack_50 = &UNK_1108d00f0;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010bfb2040(uVar3,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_48);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf48900(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105a6bdf8; end: 105a6be3f;  */

undefined8 FUN_105a6bdf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c24cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105a6be40; end: 105a6be77; -[SCSpectaclesWiFiSettingsManager supportProxyNetwork] */

long FUN_105a6be40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c263a80();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105a6be78; end: 105a6bea3; -[SCSpectaclesWiFiSettingsManager _resetConnectWiFiRequestTimer] */

void FUN_105a6be78(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a6bea4; end: 105a6befb; -[SCSpectaclesWiFiSettingsManager _startConnectWiFiRequestTimer] */

void FUN_105a6bea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be92740();
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x402e000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__connectWiFiRequestTimeout__11252c220,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a6befc; end: 105a6bf93; -[SCSpectaclesWiFiSettingsManager _connectWiFiRequestTimeout:] */

void FUN_105a6befc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == *(long *)(param_1 + 0x68)) && (*(long *)(param_1 + 0x60) != 0)) {
    func_0x00010bea3380(param_1,param_2,0);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e19cb8,
                        &PTR____CFConstantStringClassReference_110e19cd8,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6bf94; end: 105a6c073; -[SCSpectaclesWiFiSettingsManager _resetCurrentlyConnectingSSIDIfNeeded] */

void FUN_105a6bf94(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    func_0x00010bf48900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c24cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf48900();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60e80();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      func_0x00010bea3380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be92750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetConnectWiFiRequestTimer_112582370);
      return;
    }
  }
  return;
}



/* Entry: 105a6c074; end: 105a6c0fb; -[SCSpectaclesWiFiSettingsManager _setCurrentlyConnectingSSID:] */

void FUN_105a6c074(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x60));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar3 = PTR_PTR_1126c1bf8;
    _objc_alloc(PTR_PTR_1126c1bf8);
    func_0x00010c007ac0();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6c0fc; end: 105a6c3f3; -[SCSpectaclesWiFiSettingsManager _didUpdateWiFiNetworkStatus:error:] */

void FUN_105a6c0fc(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
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
  puVar9 = param_3;
  puVar10 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x70) = 0;
  lVar14 = param_1;
  func_0x00010c083b80();
  if ((int)lVar14 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = param_3;
    _objc_release(uVar1);
    if (param_4 == (undefined1 *)0x0) {
      if ((param_3 != (undefined8 *)0x0) &&
         (puVar9 = param_3, func_0x00010c2a5300(), ((ulong)puVar9 & 1) == 0)) {
        puVar9 = (undefined8 *)0x1;
        func_0x00010bf91c00(param_1);
        goto LAB_105a6c3a8;
      }
      puVar9 = param_3;
      func_0x00010c2a5300();
      if (((int)puVar9 != 0) && (*(long *)(param_1 + 0x58) == 0)) {
        func_0x00010c134b40(param_1);
      }
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf48900(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60e80();
      _objc_release(uVar1);
      func_0x00010be92940(param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = (undefined8 *)PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be92940(param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = (undefined8 *)PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = puVar2;
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
    if ((param_3 != (undefined8 *)0x0) && (lVar14 = *(long *)(param_1 + 0x58), lVar14 != 0)) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(lVar14);
      puVar9 = &uStack_130;
      puVar10 = auStack_f0;
      lVar3 = lVar14;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar12 = *plStack_120;
        do {
          lVar11 = 0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(lVar14);
            }
            uVar13 = *(ulong *)(lStack_128 + lVar11 * 8);
            uVar4 = uVar13;
            func_0x00010c24cc00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = param_3;
            func_0x00010bf48900(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar9;
            func_0x00010c24cc00();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c0720c0(uVar4,param_2,puVar2);
            if ((uVar5 & 1) == 0) {
              _objc_release(puVar2);
              _objc_release(puVar9);
              _objc_release(uVar4);
            }
            else {
              func_0x00010bf60e80();
              puVar6 = param_3;
              func_0x00010bf48900();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010bf60e80();
              _objc_release(puVar6);
              _objc_release(puVar2);
              _objc_release(puVar9);
              _objc_release(uVar4);
              if ((int)uVar13 != (int)puVar7) {
                func_0x00010c134b40(param_1);
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar3 != lVar11);
          puVar9 = &uStack_130;
          puVar10 = auStack_f0;
          lVar3 = lVar14;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar14);
    }
  }
LAB_105a6c3a8:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  *(undefined1 *)((long)param_3 + 0x71) = 0;
  puVar2 = param_3;
  func_0x00010c083b80();
  if ((int)puVar2 != 0) {
    puVar2 = puVar9;
    func_0x00010c0d8360();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3[0xb];
    param_3[0xb] = puVar2;
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126af5d0;
    uVar1 = param_3[5];
    if (puVar10 == (undefined1 *)0x0) {
      puVar2 = puVar9;
      func_0x00010c0d8360(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar8,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar1,param_2,puVar8);
      _objc_release(puVar8);
    }
    else {
      puVar2 = (undefined8 *)PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar1,param_2,puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 105a6c3f4; end: 105a6c4f3; -[SCSpectaclesWiFiSettingsManager _didUpdateAvailableWiFiNetworks:error:] */

void FUN_105a6c3f4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x71) = 0;
  lVar1 = param_1;
  func_0x00010c083b80();
  if ((int)lVar1 != 0) {
    puVar2 = param_3;
    func_0x00010c0d8360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126af5d0;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (param_4 == 0) {
      puVar3 = param_3;
      func_0x00010c0d8360(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar2,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_2,puVar2);
      _objc_release(puVar2);
    }
    else {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_2,puVar3);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6c4f4; end: 105a6c53b; -[SCSpectaclesWiFiSettingsManager _didFailToConnectToWiFi:] */

void FUN_105a6c4f4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bea3380(param_1,param_2,0);
  if (param_3 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6c53c; end: 105a6c543; -[SCSpectaclesWiFiSettingsManager _didFailToForgetWiFi:] */

void FUN_105a6c53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028);
  return;
}



/* Entry: 105a6c544; end: 105a6c62f; -[SCSpectaclesWiFiSettingsManager _handlePowerState:] */

void FUN_105a6c544(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c11cbc0();
  if (param_3 != 1) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release();
    *(undefined1 *)(param_1 + 0x70) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x71) = 0;
    func_0x00010bea3380(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c136ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestWiFiNetworkStatusAsync_11262b618);
  return;
}



/* Entry: 105a6c630; end: 105a6c9cf; -[SCSpectaclesWiFiSettingsManager handleResponse:] */

void FUN_105a6c630(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c13bcc0();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar1 == (undefined *)0x4) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_48,param_1);
  puVar1 = param_3;
  func_0x00010c13bcc0();
  if (puVar1 == (undefined *)0x5) {
    func_0x00010be2e920(param_1);
    goto LAB_105a6c848;
  }
  puVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27dd80();
  _objc_release(puVar1);
  puVar1 = param_3;
  if (puVar2 == (undefined *)0x36) {
    func_0x00010c2a4ca0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105a6c9d0;
    puStack_68 = &UNK_110848218;
    ppuVar5 = &puStack_80;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar4);
    puStack_60 = puVar4;
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(puStack_58);
    puVar2 = puStack_60;
LAB_105a6c834:
    _objc_release(puVar2);
    _objc_destroyWeak(ppuVar5 + 6);
  }
  else {
    puVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c27dd80();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x37) {
      func_0x00010bf12ba0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x105a6ca18;
      puStack_a0 = &UNK_110848218;
      ppuVar5 = &puStack_b8;
      _objc_copyWeak(auStack_88,auStack_48);
      _objc_retain(puVar4);
      puStack_98 = puVar4;
      _objc_retain(puVar1);
      puStack_90 = puVar1;
      func_0x000100162d98("APPSTORE",&puStack_b8);
      _objc_release(puStack_90);
      puVar2 = puStack_98;
      goto LAB_105a6c834;
    }
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c27dd80();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x29) {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x105a6ca60;
      puStack_d8 = &UNK_110848218;
      _objc_retain(puVar4);
      puStack_d0 = puVar4;
      _objc_retain(param_3);
      puStack_c8 = param_3;
      _objc_copyWeak(auStack_c0,auStack_48);
      func_0x000100162d98("APPSTORE",&puStack_f0);
      _objc_destroyWeak(auStack_c0);
      _objc_release(puStack_c8);
      puVar1 = puStack_d0;
    }
    else {
      puVar1 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c27dd80();
      _objc_release(puVar1);
      if (puVar2 != (undefined *)0x76) goto LAB_105a6c848;
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_105a6cab4;
      puStack_108 = &UNK_110841fb0;
      _objc_retain(puVar4);
      puStack_100 = puVar4;
      _objc_copyWeak(auStack_f8,auStack_48);
      func_0x000100162d98("APPSTORE",&puStack_120);
      _objc_destroyWeak(auStack_f8);
      puVar1 = puStack_100;
    }
  }
  _objc_release(puVar1);
LAB_105a6c848:
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a6c9d0; end: 105a6cab3;  */

void FUN_105a6c9d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar2 = 0;
  }
  func_0x00010be018e0(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a6cab4; end: 105a6cb1f;  */

void FUN_105a6cab4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if (lVar2 == 0) {
    func_0x00010c136fe0(lVar1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c134b40();
  }
  else {
    func_0x00010bdfdb60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a6cb20; end: 105a6cc07; -[SCSpectaclesWiFiSettingsManager _handlePushMessage:] */

void FUN_105a6cb20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 == 5) {
    lVar1 = param_3;
    func_0x00010c2a4ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105a6cc08;
      puStack_50 = &UNK_110841fb0;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_68);
      _objc_release(lStack_48);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a6cc08; end: 105a6cc5f;  */

void FUN_105a6cc08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a4ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be018e0(lVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a6cc60; end: 105a6cc67; -[SCSpectaclesWiFiSettingsManager responseMonitorState] */

undefined8 FUN_105a6cc60(void)

{
  return 0;
}



/* Entry: 105a6cc68; end: 105a6cc6f; -[SCSpectaclesWiFiSettingsManager wifiStatus] */

undefined8 FUN_105a6cc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a6cc70; end: 105a6cc77; -[SCSpectaclesWiFiSettingsManager wifiNetworkList] */

undefined8 FUN_105a6cc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a6cc78; end: 105a6cc7f; -[SCSpectaclesWiFiSettingsManager connectingWiFiSSID] */

undefined8 FUN_105a6cc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


