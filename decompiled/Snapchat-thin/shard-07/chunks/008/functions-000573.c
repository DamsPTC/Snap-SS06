/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a9cbf8; end: 105a9cc5f;  */

void FUN_105a9cbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be330a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9cc60; end: 105a9cd9f; -[SCSpectaclesOnboardingManager _handleVideoObjectDict:error:] */

void FUN_105a9cc60(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c29bbe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c107b60(param_1);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105a9cda0; end: 105a9cddb; -[SCSpectaclesOnboardingManager .cxx_destruct] */

void FUN_105a9cda0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a9cddc; end: 105a9d2e7; -[SCSpectaclesOnboardingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9cddc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar15 = (long)_DAT_11272e924;
  lVar17 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar17);
  puVar2 = (undefined *)(param_1 + lVar15);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c0e8100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar16 = (long)_DAT_11272e928;
  lVar17 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0e80e0();
  _objc_release(lVar17);
  lVar14 = (long)_DAT_11272e92c;
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = 0;
  _objc_release(uVar5);
  lVar17 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar15 = lVar17;
  func_0x00010c104ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  uVar5 = 0;
  lVar17 = lVar16;
  if (lVar18 < 2) {
    if (lVar18 == 0) {
      lVar18 = param_1 + lVar16;
      _objc_loadWeakRetained(lVar18);
      lVar17 = lVar18;
      func_0x00010c104ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c0d8da0(puVar4,param_2,lVar17);
      uVar5 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar2;
      _objc_release(uVar5);
      _objc_release(lVar17);
      uVar5 = 0;
      lVar17 = 0;
    }
    else {
      if (lVar18 != 1) goto LAB_105a9cfa4;
      puVar2 = puVar4;
      func_0x00010c0d9040();
      lVar18 = *(long *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar2;
      uVar5 = 1;
LAB_105a9cf30:
      lVar17 = 1;
    }
  }
  else {
    if (lVar18 != 2) {
      if (lVar18 != 3) goto LAB_105a9cfa4;
      puVar2 = puVar4;
      func_0x00010c0d8b60();
      uVar5 = 0;
      lVar18 = *(long *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar2;
      goto LAB_105a9cf30;
    }
    puVar2 = puVar4;
    func_0x00010c0d86c0();
    lVar18 = *(long *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar2;
    lVar17 = 1;
    uVar5 = 1;
  }
  _objc_release(lVar18);
LAB_105a9cfa4:
  puVar2 = PTR_PTR_1126c1ee8;
  _objc_alloc();
  lVar18 = lVar15;
  func_0x00010bf70720(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x00010bfb0d20(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar15;
  func_0x00010bfd38e0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bf700a0(lVar15);
  lVar9 = lVar15;
  func_0x00010c0f3420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031a60(0,puVar2,param_2,lVar17,0,lVar18,lVar6,lVar7,lVar8,lVar9,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar18);
  lVar17 = *(long *)(param_1 + lVar14);
  func_0x00010c27dd80();
  if (lVar17 == 8) {
    puVar10 = PTR_PTR_1126c1ef0;
    _objc_alloc(PTR_PTR_1126c1ef0);
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    lVar17 = param_1 + _DAT_11272e930;
    _objc_loadWeakRetained(lVar17);
    lVar14 = lVar17;
    func_0x00010c100e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_11272e934;
    _objc_loadWeakRetained();
    lVar7 = lVar18;
    func_0x00010c0e35c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013920(puVar10,param_2,uVar13,param_1,puVar2,lVar1,uVar5,lVar6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar18);
    _objc_release(lVar6);
    _objc_release(lVar14);
    _objc_release(lVar17);
    puVar3 = (undefined *)(param_1 + lVar16);
    _objc_loadWeakRetained(puVar3);
    puVar11 = puVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
  }
  else {
    puVar10 = puVar4;
    func_0x00010c0e35e0(puVar4,param_2,*(undefined8 *)(param_1 + lVar14));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c1ef8;
    _objc_alloc(PTR_PTR_1126c1ef8);
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    lVar17 = param_1 + _DAT_11272e930;
    _objc_loadWeakRetained();
    lVar14 = lVar17;
    func_0x00010c100e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_11272e934;
    _objc_loadWeakRetained();
    lVar7 = lVar18;
    func_0x00010c0e35c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013940(puVar3,param_2,uVar13,param_1,puVar2,puVar10,lVar1,uVar5,lVar6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar18);
    _objc_release(lVar6);
    _objc_release(lVar14);
    _objc_release(lVar17);
    puVar11 = (undefined *)(param_1 + lVar16);
    _objc_loadWeakRetained(puVar11);
    puVar12 = puVar11;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(puVar12);
  }
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(lVar15);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a9d2e8; end: 105a9d373; -[SCSpectaclesOnboardingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9d2e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11272e928;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ebaa0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a9d374; end: 105a9d42b; -[SCSpectaclesOnboardingEntryPoint spectaclesOnboardingViewControllerWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9d374(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11272e924;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0e8100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b8a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11272e928;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249340();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9d42c; end: 105a9d4e3; -[SCSpectaclesOnboardingEntryPoint cheeriosOnboardingViewControllerWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9d42c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11272e924;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0e8100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b8a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11272e928;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249340();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9d4e4; end: 105a9d543; -[SCSpectaclesOnboardingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9d4e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e934);
  _objc_destroyWeak(param_1 + _DAT_11272e928);
  _objc_destroyWeak(param_1 + _DAT_11272e930);
  _objc_destroyWeak(param_1 + _DAT_11272e924);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e92c,0);
  return;
}



/* Entry: 105a9d544; end: 105a9d6d3; -[SCSpectaclesCheeriosOnboardingViewController initWithFlow:delegate:onboardingSessionInfo:analyticsLogger:showBackButton:playerProvider:onDemandResourceFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105a9d544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ebaa8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e938) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e93c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272e940) = param_7;
    lVar3 = (long)_DAT_11272e944;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272e948;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272e94c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272e950;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272e954;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272e958),param_4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9d6d4; end: 105a9e2d3; -[SCSpectaclesCheeriosOnboardingViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9d6d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e8 = PTR_PTR_1126ebaa8;
  lStack_f0 = param_1;
  _objc_msgSendSuper2(&lStack_f0,PTR_s_loadView_112604be0);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11272e95c;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar9);
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar11));
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  puStack_130 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  puStack_100 = (undefined *)uVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar6;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  uStack_110 = uVar9;
  uStack_90 = uVar9;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  uStack_120 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  uStack_138 = uVar2;
  uStack_88 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_130);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(uStack_138);
  _objc_release(lStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  _objc_release(puStack_100);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11272e960;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar9);
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar11));
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  puStack_130 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  puStack_100 = (undefined *)uVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  uStack_110 = uVar9;
  uStack_b0 = uVar9;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  uStack_120 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  uStack_138 = uVar2;
  uStack_a8 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_a0 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_130);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(uStack_138);
  _objc_release(lStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  _objc_release(puStack_100);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11272e964;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x000109025f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2);
  _objc_release(uVar9);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar10));
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  lStack_f8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_c0 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf493c0(0xc050000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lStack_f8);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar10 = (long)_DAT_11272e968;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  lStack_f8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_d0 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lStack_f8);
  lVar6 = *(long *)(param_1 + lVar10);
  func_0x00010c24dbc0();
  if (*(char *)(param_1 + _DAT_11272e940) == '\x01') {
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11272e96c;
    uVar9 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar1;
    _objc_release(uVar9);
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar12));
    uVar9 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c216380(uVar9);
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    func_0x0001090250f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar2);
    _objc_release(uVar9);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
    func_0x00010c198080(*(undefined8 *)(param_1 + lVar12));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar12));
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar6);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar11 = *(long *)(param_1 + lVar12);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010bf493c0(0x4055000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    lStack_e0 = lVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(lVar12);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar10);
    lVar6 = lVar11;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105a9e2d4;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  lStack_170 = lVar4;
  lStack_168 = lVar10;
  lStack_160 = lVar11;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puStack_178 = PTR_PTR_1126ebaa8;
  lStack_180 = lVar6;
  _objc_msgSendSuper2(&lStack_180,PTR_s_viewWillAppear__1126853f0,puVar8);
  return;
}



/* Entry: 105a9e2d4; end: 105a9e39b; -[SCSpectaclesCheeriosOnboardingViewController viewWillAppear:] */

void FUN_105a9e2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126ebaa8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 105a9e39c; end: 105a9e47f; -[SCSpectaclesCheeriosOnboardingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9e39c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ebaa8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  lVar5 = (long)_DAT_11272e970;
  if ((*(byte *)(param_1 + lVar5) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272e944);
    func_0x00010c0f2660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0f1e60();
    *(undefined8 *)(param_1 + _DAT_11272e93c) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11272e948);
    lVar3 = param_1;
    func_0x00010bdf6d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab660(uVar4);
    _objc_release(lVar3);
    *(undefined1 *)(param_1 + lVar5) = 1;
  }
  return;
}



/* Entry: 105a9e480; end: 105a9e52b; -[SCSpectaclesCheeriosOnboardingViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9e480(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebaa8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11272e974));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a080();
  _objc_release(puVar1);
  return;
}



/* Entry: 105a9e52c; end: 105a9e573; -[SCSpectaclesCheeriosOnboardingViewController viewDidLoad] */

void FUN_105a9e52c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebaa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be4ee20(param_1);
  return;
}



/* Entry: 105a9e574; end: 105a9e57b; -[SCSpectaclesCheeriosOnboardingViewController modalPresentationStyle] */

undefined8 FUN_105a9e574(void)

{
  return 0;
}



/* Entry: 105a9e57c; end: 105a9e587; -[SCSpectaclesCheeriosOnboardingViewController supportedInterfaceOrientations] */

undefined8 FUN_105a9e57c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105a9e588; end: 105a9e597; -[SCSpectaclesCheeriosOnboardingViewController appEnteredForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9e588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e974),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 105a9e598; end: 105a9e613; -[SCSpectaclesCheeriosOnboardingViewController _backButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9e598(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11272e958;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf38be0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e948);
  func_0x00010bdf6d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab620(uVar2,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9e614; end: 105a9e68f; -[SCSpectaclesCheeriosOnboardingViewController _onboardingVideoFinishedPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9e614(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11272e958;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf38be0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e948);
  func_0x00010bdf6d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab620(uVar2,param_2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9e690; end: 105a9e6d7; -[SCSpectaclesCheeriosOnboardingViewController volumeChanged:] */

void FUN_105a9e690(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a9e6d8; end: 105a9e80b; -[SCSpectaclesCheeriosOnboardingViewController _loadVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9e6d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e944);
  func_0x00010c0f2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = uVar2;
  func_0x00010c29a6c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_40;
  _objc_copyWeak(puVar3,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 105a9e80c; end: 105a9e873;  */

void FUN_105a9e80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15460();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9e874; end: 105a9e9df; -[SCSpectaclesCheeriosOnboardingViewController _fetchVideoFromSpectaclesVideoObject:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9e874(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272e954);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c29bbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c29a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_60;
    _objc_copyWeak(puVar4,auStack_58);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a9e9e0; end: 105a9ea47;  */

void FUN_105a9e9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33000();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9ea48; end: 105a9eb1b; -[SCSpectaclesCheeriosOnboardingViewController _handleVideo:error:] */

void FUN_105a9ea48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105a9eb1c;
    puStack_50 = &UNK_110841fb0;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_destroyWeak(auStack_40);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a9eb1c; end: 105a9eb73;  */

void FUN_105a9eb1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be97640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a9eb74; end: 105a9edb3; -[SCSpectaclesCheeriosOnboardingViewController _rollFilm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9eb74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e950);
  func_0x00010c101100();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11272e974;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar1;
  _objc_release(uVar3);
  lVar4 = (long)_DAT_11272e968;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x00010c100c80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11272e978;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar1);
  func_0x00010c2218a0(*(undefined8 *)(param_1 + lVar5));
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar4);
  func_0x00010c161660(*(undefined8 *)(param_1 + lVar6));
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e95c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f60(lVar5);
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  _CMTimeMakeWithSeconds(auStack_70,0x3f91111111111111,1000000000);
  _objc_copyWeak(auStack_78,auStack_58);
  func_0x00010befa7a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0fe360(*(undefined8 *)(param_1 + lVar6));
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105a9edb4; end: 105a9ee03;  */

void FUN_105a9edb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6640();
  _objc_release(param_1);
  return;
}



/* Entry: 105a9ee04; end: 105a9ef4b; -[SCSpectaclesCheeriosOnboardingViewController _updateCurrentPageIndexWithTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9ee04(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e944);
  func_0x00010c0f2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = uVar2;
  func_0x00010c29a6c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_58;
  _objc_copyWeak(puVar3,auStack_38);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 105a9ef4c; end: 105a9efd3;  */

void FUN_105a9ef4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33080();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 105a9efd4; end: 105a9f187; -[SCSpectaclesCheeriosOnboardingViewController _handleVideoObject:time:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9efd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if (param_6 != 0) {
    return;
  }
  _objc_retain(param_4);
  func_0x00010c250f20(param_4);
  lVar6 = (long)_DAT_11272e974;
  if (*(long *)(param_2 + lVar6) == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_80);
    uVar1 = uStack_78 & 0xffffffff;
  }
  _CMTimeMakeWithSeconds(&uStack_68,param_1,uVar1);
  func_0x00010bf95780(param_4);
  _objc_release(param_4);
  if (*(long *)(param_2 + lVar6) == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_a0);
    uVar1 = uStack_98 & 0xffffffff;
  }
  _CMTimeMakeWithSeconds(&uStack_80,param_1,uVar1);
  uStack_98 = param_5[1];
  uStack_a0 = *param_5;
  uStack_90 = param_5[2];
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  puVar2 = &uStack_a0;
  _CMTimeCompare(puVar2,&uStack_c0);
  if ((int)puVar2 < 1) {
    uStack_98 = param_5[1];
    uStack_a0 = *param_5;
    uStack_90 = param_5[2];
    uStack_b8 = uStack_60;
    uStack_c0 = uStack_68;
    uStack_b0 = uStack_58;
    puVar2 = &uStack_a0;
    _CMTimeCompare(puVar2,&uStack_c0);
    if (-1 < (int)puVar2) {
      return;
    }
    lVar6 = *(long *)(param_2 + _DAT_11272e938);
    if (lVar6 < 1) {
      return;
    }
    *(long *)(param_2 + _DAT_11272e938) = lVar6 + -1;
  }
  else {
    lVar5 = (long)_DAT_11272e938;
    lVar7 = *(long *)(param_2 + lVar5);
    lVar3 = *(long *)(param_2 + _DAT_11272e944);
    func_0x00010c0f2660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar7 == lVar4 + -1) {
      func_0x00010c0f5b20(*(undefined8 *)(param_2 + lVar6));
      return;
    }
    *(long *)(param_2 + lVar5) = *(long *)(param_2 + lVar5) + 1;
  }
  func_0x00010bdddba0(param_2);
  return;
}



/* Entry: 105a9f188; end: 105a9f24b; -[SCSpectaclesCheeriosOnboardingViewController _checkIfStartFlyingButtonIsDisplayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9f188(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [5];
  
  lVar6 = *(long *)(param_1 + _DAT_11272e938);
  lVar4 = *(long *)(param_1 + _DAT_11272e944);
  func_0x00010c0f2660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  bVar3 = lVar6 != lVar5 + -1;
  puVar1 = auStack_58;
  if (bVar3) {
    puVar1 = auStack_80;
  }
  pcVar2 = FUN_105a9f24c;
  if (bVar3) {
    pcVar2 = (code *)0x105a9f2ac;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_110842e18;
  puVar1[4] = param_1;
  func_0x00010bf03400(0x3fd3333340000000,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 105a9f24c; end: 105a9f30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9f24c(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272e964;
  func_0x00010bf01b40(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar1));
  if (param_1 == 0.0) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar1),PTR_s_setHidden__1126479f8,0);
    return;
  }
  return;
}



/* Entry: 105a9f310; end: 105a9f3bb; -[SCSpectaclesCheeriosOnboardingViewController _playPreviousPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9f310(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (0 < *(long *)(param_1 + _DAT_11272e938)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272e944);
    func_0x00010c0f2660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29a6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd260(param_1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a9f3bc; end: 105a9f497; -[SCSpectaclesCheeriosOnboardingViewController _playNextPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9f3bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + _DAT_11272e938);
  lVar6 = (long)_DAT_11272e944;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c0f2660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (uVar7 < lVar2 - 1U) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0f2660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c29a6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd260(param_1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105a9f498; end: 105a9f573; -[SCSpectaclesCheeriosOnboardingViewController _updatePlayTimeWithVideoObjectFuture:] */

void FUN_105a9f498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = auStack_40;
  _objc_copyWeak(puVar1,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a9f574; end: 105a9f5db;  */

void FUN_105a9f574(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d240();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a9f5dc; end: 105a9f6b7; -[SCSpectaclesCheeriosOnboardingViewController _seekPlayTimeWithVideoObject:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9f5dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 != 0) {
    return;
  }
  func_0x00010c250f20(param_4);
  lVar2 = (long)_DAT_11272e974;
  if (*(long *)(param_2 + lVar2) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_60);
    uVar1 = uStack_58 & 0xffffffff;
  }
  _CMTimeMakeWithSeconds(&uStack_48,param_1,uVar1);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_80 = uStack_a0;
  uStack_78 = uStack_98;
  uStack_70 = uStack_90;
  func_0x00010c1572c0(*(undefined8 *)(param_2 + lVar2),param_3,&uStack_60,&uStack_80,&uStack_a0);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010bed6640(param_2,param_3,&uStack_60);
  func_0x00010c0fe360(*(undefined8 *)(param_2 + lVar2));
  return;
}



/* Entry: 105a9f6b8; end: 105a9f843; -[SCSpectaclesCheeriosOnboardingViewController _currentOnboardingSessionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9f6b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c1ee8;
  _objc_alloc();
  lVar11 = (long)_DAT_11272e94c;
  uVar2 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0e8140();
  uVar12 = *(undefined8 *)(param_2 + _DAT_11272e93c);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0f3480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar3,param_3,uVar4);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bf70720(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfb0d20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfd38e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bf700a0(uVar8);
  uVar9 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0f3420();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0f3480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031a60(param_1,puVar1,param_3,uVar2,uVar12,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a9f844; end: 105a9f92f; -[SCSpectaclesCheeriosOnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9f844(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e958);
  _objc_storeStrong(param_1 + _DAT_11272e948,0);
  _objc_storeStrong(param_1 + _DAT_11272e94c,0);
  _objc_storeStrong(param_1 + _DAT_11272e954,0);
  _objc_storeStrong(param_1 + _DAT_11272e950,0);
  _objc_storeStrong(param_1 + _DAT_11272e944,0);
  _objc_storeStrong(param_1 + _DAT_11272e978,0);
  _objc_storeStrong(param_1 + _DAT_11272e974,0);
  _objc_storeStrong(param_1 + _DAT_11272e968,0);
  _objc_storeStrong(param_1 + _DAT_11272e964,0);
  _objc_storeStrong(param_1 + _DAT_11272e960,0);
  _objc_storeStrong(param_1 + _DAT_11272e95c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e96c,0);
  return;
}



/* Entry: 105a9f930; end: 105a9fa4b; -[SCSpectaclesOnboardingAnimatableLabel initWithText:textFont:textColor:] */

undefined1 *
FUN_105a9f930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebab0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c212f20(puVar1);
    func_0x00010c19e480(puVar1);
    func_0x00010c213180(puVar1);
    func_0x00010c213040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c165e20(puVar1);
    func_0x00010c1cfce0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9fa4c; end: 105a9fb67; -[SCSpectaclesOnboardingAnimatableLabel initWithAttributedText:textFont:textColor:] */

undefined1 *
FUN_105a9fa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebab0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c16b720(puVar1);
    func_0x00010c19e480(puVar1);
    func_0x00010c213180(puVar1);
    func_0x00010c213040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c165e20(puVar1);
    func_0x00010c1cfce0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a9fb68; end: 105a9fbdf; -[SCSpectaclesOnboardingAnimatableLabel animateWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9fb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be77f40(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e97c);
  *(undefined8 *)(param_1 + _DAT_11272e97c) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef6c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e980),PTR_s_addAnimation_forKey__11259b4b0,
             *(undefined8 *)(param_1 + _DAT_11272e984),
             &PTR____CFConstantStringClassReference_110dfec58);
  return;
}



/* Entry: 105a9fbe0; end: 105a9ff47; -[SCSpectaclesOnboardingAnimatableLabel _prepareAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9fbe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11272e980;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar2;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar9),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c209760(0,0,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c196020(0,0x3ff0000000000000,*(undefined8 *)(param_1 + lVar9));
  lVar9 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_alloc_init();
  lVar9 = (long)_DAT_11272e984;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  func_0x00010c1b6c80(*(undefined8 *)(param_1 + lVar9),param_2,
                      &PTR____CFConstantStringClassReference_110e1aff8);
  func_0x00010c192d40(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1ea580(*(undefined8 *)(param_1 + lVar9),param_2,0);
  uVar7 = *(undefined8 *)PTR__kCAFillModeForwards_110346ce0;
  func_0x00010c19bc40(*(undefined8 *)(param_1 + lVar9),param_2,uVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(*(undefined8 *)(param_1 + lVar9),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9),param_2,param_1);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_alloc_init();
  lVar9 = (long)_DAT_11272e988;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  func_0x00010c1b6c80(*(undefined8 *)(param_1 + lVar9),param_2,
                      &PTR____CFConstantStringClassReference_110e1aff8);
  func_0x00010c192d40(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1ea580(*(undefined8 *)(param_1 + lVar9),param_2,0);
  func_0x00010c19bc40(*(undefined8 *)(param_1 + lVar9),param_2,uVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_98 = puVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(*(undefined8 *)(param_1 + lVar9),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9),param_2,param_1);
  lVar9 = 0;
  func_0x00010c1a7f60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  lVar8 = (long)_DAT_11272e980;
  lVar5 = *(long *)(param_1 + lVar8);
  func_0x00010bf03c40(lVar5,param_2,&PTR____CFConstantStringClassReference_110dfec58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar8 = *(long *)(param_1 + lVar8);
  if (lVar9 == lVar5) {
    func_0x00010bef6c20(lVar8,param_2,*(undefined8 *)(param_1 + _DAT_11272e988),
                        &PTR____CFConstantStringClassReference_110dfeaf8);
  }
  else {
    func_0x00010bf03c40(lVar8,param_2,&PTR____CFConstantStringClassReference_110dfeaf8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == lVar8) {
      lVar5 = (long)_DAT_11272e97c;
      uVar6 = 0;
      if (*(long *)(param_1 + lVar5) != 0) {
        (**(code **)(*(long *)(param_1 + lVar5) + 0x10))();
        uVar6 = *(undefined8 *)(param_1 + lVar5);
      }
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 105a9ff48; end: 105aa0013; -[SCSpectaclesOnboardingAnimatableLabel animationDidStop:finished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9ff48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272e980;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf03c40(lVar1,param_2,&PTR____CFConstantStringClassReference_110dfec58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = *(long *)(param_1 + lVar3);
  if (param_3 == lVar1) {
    func_0x00010bef6c20(lVar3,param_2,*(undefined8 *)(param_1 + _DAT_11272e988),
                        &PTR____CFConstantStringClassReference_110dfeaf8);
  }
  else {
    func_0x00010bf03c40(lVar3,param_2,&PTR____CFConstantStringClassReference_110dfeaf8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar3) {
      lVar1 = (long)_DAT_11272e97c;
      uVar2 = 0;
      if (*(long *)(param_1 + lVar1) != 0) {
        (**(code **)(*(long *)(param_1 + lVar1) + 0x10))();
        uVar2 = *(undefined8 *)(param_1 + lVar1);
      }
      *(undefined8 *)(param_1 + lVar1) = 0;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aa0014; end: 105aa0073; -[SCSpectaclesOnboardingAnimatableLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa0014(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e97c,0);
  _objc_storeStrong(param_1 + _DAT_11272e980,0);
  _objc_storeStrong(param_1 + _DAT_11272e988,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e984,0);
  return;
}



/* Entry: 105aa0074; end: 105aa0657; -[SCSpectaclesOnboardingDescriptionView initWithFrame:offsetForVideo:page:pageType:flowType:theme:onboardingScrollViewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105aa0074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
             undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_a0 = PTR_PTR_1126ebab8;
  puVar2 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar11 = param_7;
    func_0x00010beecec0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(puVar2);
    _objc_release(lVar11);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    puVar4 = PTR_PTR_1126c1f08;
    _objc_alloc();
    lVar11 = param_7;
    func_0x00010c113080(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_10;
    func_0x00010c1130c0(param_10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_10;
    func_0x00010bf6e560(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051740();
    lVar12 = (long)_DAT_11272e98c;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined **)((long)puVar2 + lVar12) = puVar4;
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(lVar11);
    func_0x00010befbb60(puVar3);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar12);
    _objc_retain(puVar3);
    func_0x00010c0bbfc0(uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar13 = param_10;
    func_0x00010c078ac0();
    if ((param_9 != 8) && ((int)uVar13 == 0)) {
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf414e0(0x3fc3333333333333);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      func_0x00010befbb60(puVar3);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      func_0x00010c0bbfc0(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    lVar11 = param_7;
    func_0x00010c154da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126c1f08;
    _objc_alloc();
    lVar8 = param_7;
    uVar13 = param_10;
    uVar5 = param_10;
    if (lVar11 == 0) {
      func_0x00010c155120(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c155180(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e560(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051740();
    }
    else {
      func_0x00010c154da0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c155180(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e560(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4fa0();
    }
    lVar11 = (long)_DAT_11272e990;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined **)((long)puVar2 + lVar11) = puVar4;
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(lVar8);
    func_0x00010befbb60(puVar3);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar11);
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    func_0x00010c0bbfc0(uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_retain(param_10);
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar13 = param_10;
    func_0x00010c078ac0();
    iVar1 = 0;
    if (param_8 == 0) {
      iVar1 = (int)uVar13;
    }
    if ((param_9 == 8) || (iVar1 != 0)) {
      func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar12));
      func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar11));
    }
    if ((param_8 == 1) && (param_9 != 8)) {
      puVar9 = puVar2;
      func_0x00010be78020(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(puVar2);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      func_0x00010c0bbfc0(puVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar9);
    }
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272e994,param_11);
    _objc_release(puVar2);
    _objc_release(param_10);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  return puVar2;
}



/* Entry: 105aa0658; end: 105aa06f7;  */

void FUN_105aa0658(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aa06f8; end: 105aa0913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa06f8(long param_1,long param_2)

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
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e98c);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4014000000000000);
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
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa0914; end: 105aa094f;  */

void FUN_105aa0914(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aa0950; end: 105aa0aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa0950(long param_1,long param_2)

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
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e98c);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4026000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa0aec; end: 105aa107f;  */

void FUN_105aa0aec(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c078ac0();
  lVar2 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  if (iVar1 == 0) {
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    (**(code **)(lVar5 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c098960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    (**(code **)(lVar5 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    (**(code **)(lVar7 + 0x10))
              (*(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x50) * 0.1428571492433548);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c113c80();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(0x447a0000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  (**(code **)(lVar7 + 0x10))(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(0x447a0000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  (**(code **)(lVar7 + 0x10))(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(0x447a0000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  (**(code **)(lVar7 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(0x446d8000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  (**(code **)(lVar7 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(0x446d8000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  (**(code **)(lVar7 + 0x10))(0xc05e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x447a0000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aa1080; end: 105aa126b;  */

void FUN_105aa1080(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
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
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c113d80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbea0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4040000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa126c; end: 105aa132f; -[SCSpectaclesOnboardingDescriptionView animateDiscreptionLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa126c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272e990);
  _objc_retain(uVar3);
  lVar1 = param_1 + _DAT_11272e994;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e98c);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105aa1330;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar3;
  lStack_38 = lVar1;
  _objc_retain();
  _objc_retain(uVar3);
  func_0x00010bf033c0(uVar2,param_2,&puStack_60);
  _objc_release(lStack_38);
  _objc_release(uStack_40);
  _objc_release(lVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 105aa1330; end: 105aa139f;  */

void FUN_105aa1330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105aa13a0;
  puStack_30 = &UNK_110842e18;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010bf033c0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 105aa13a0; end: 105aa13a7;  */

void FUN_105aa13a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didEndAnimatingDescriptionLabels_1125baf88);
  return;
}



/* Entry: 105aa13a8; end: 105aa148f; -[SCSpectaclesOnboardingDescriptionView _prepareButtonsViewWithTheme:] */

void FUN_105aa13a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x00010c166c00();
  func_0x00010c16e060(puVar1,param_2,1);
  func_0x00010c190b80(puVar1,param_2,3);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c207380(0x4014000000000000,puVar1);
  uVar2 = param_3;
  func_0x00010c078ac0();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bdef2a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(puVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010bded3c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa1490; end: 105aa1757; -[SCSpectaclesOnboardingDescriptionView _createLearnMoreButtonWithTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa1490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17f18;
  lVar9 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c08e080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c08e060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c16b780(puVar2);
  func_0x00010c16b780(puVar2);
  param_1 = param_1 + _DAT_11272e994;
  _objc_loadWeakRetained(param_1);
  func_0x00010befbd60(puVar2);
  _objc_release(param_1);
  func_0x00010c198080(puVar2);
  func_0x00010c160fc0(puVar2);
  uVar4 = param_3;
  func_0x00010c08e020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c08e040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retainAutorelease(uVar4);
  func_0x00010bdc0fe0();
  puVar6 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar6);
  _objc_release(uVar4);
  puVar6 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar6);
  puVar6 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403c000000000000);
  _objc_release(puVar6);
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  lVar10 = lVar9;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(lVar7,lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar10);
  lVar10 = lVar9;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(lVar9,lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 105aa1758; end: 105aa186f;  */

void FUN_105aa1758(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa1870; end: 105aa1b43; -[SCSpectaclesOnboardingDescriptionView _createDoneButtonWithTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa1870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c078ac0();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dcbb98;
  if ((int)uVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dbb618;
  }
  lVar9 = 0;
  func_0x00010bcbeaa8(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf881a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf88180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(ppuVar4);
  func_0x00010c16b780(puVar1);
  func_0x00010c16b780(puVar1);
  param_1 = param_1 + _DAT_11272e994;
  _objc_loadWeakRetained(param_1);
  func_0x00010befbd60(puVar1);
  _objc_release(param_1);
  func_0x00010c198080(puVar1);
  func_0x00010c160fc0(puVar1);
  puVar6 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403c000000000000);
  _objc_release(puVar6);
  uVar3 = param_3;
  func_0x00010bf88140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf88160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar6);
  _objc_release(uVar3);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  lVar10 = lVar9;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(lVar7,lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar10);
  lVar10 = lVar9;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(lVar9,lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 105aa1b44; end: 105aa1c5b;  */

void FUN_105aa1b44(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105aa0914();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa1c5c; end: 105aa1ca7; -[SCSpectaclesOnboardingDescriptionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa1c5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e994);
  _objc_storeStrong(param_1 + _DAT_11272e990,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e98c,0);
  return;
}



/* Entry: 105aa1ca8; end: 105aa1db3; +[SCSpectaclesOnboardingPageViewModelsFactory onboardingPagesWithType:videoObjectModelsFuture:] */

void FUN_105aa1ca8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 unaff_x21;
  
  _objc_retain(param_4);
  if (3 < param_3) {
    if (param_3 - 4U < 2) {
      func_0x00010be62900(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = param_1;
    }
    else if (param_3 - 6U < 2) {
      func_0x00010be636c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = param_1;
    }
    else if (param_3 == 8) {
      func_0x00010bdde920(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = param_1;
    }
    goto LAB_105aa1d98;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010be46d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = param_1;
      goto LAB_105aa1d98;
    }
    if (param_3 != 1) goto LAB_105aa1d98;
  }
  else {
    if (param_3 == 2) {
      func_0x00010be46dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = param_1;
      goto LAB_105aa1d98;
    }
    if (param_3 != 3) goto LAB_105aa1d98;
  }
  func_0x00010be5c820(param_1);
  _objc_retainAutoreleasedReturnValue();
  unaff_x21 = param_1;
LAB_105aa1d98:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 105aa1db4; end: 105aa1e8b; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaOriginalPages] */

void FUN_105aa1db4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be46d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_50 = uVar1;
  func_0x00010be46da0();
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = uVar2;
  func_0x00010be46cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_58 = FUN_105aa1e8c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_70 = uVar1;
    puStack_68 = puVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010be46d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = uVar2;
      func_0x00010be46d60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      uStack_e8 = uVar1;
      func_0x00010be46d20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      uStack_e0 = uVar4;
      func_0x00010be46ce0();
      _objc_retainAutoreleasedReturnValue();
      uStack_d8 = uVar5;
      func_0x00010be46d00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d0 = uVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e8,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar2 = uVar1;
        func_0x00010be46d60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        uStack_158 = uVar2;
        func_0x00010be46d20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        uStack_150 = uVar4;
        func_0x00010be628e0();
        _objc_retainAutoreleasedReturnValue();
        uStack_148 = uVar5;
        func_0x00010be46d00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_140 = uVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_158,4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
          ___stack_chk_fail();
          puVar16 = &uStack_1d0;
          lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar1 = uVar2;
          func_0x00010be63660();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          uStack_1d0 = uVar1;
          func_0x00010be63700();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          uStack_1c8 = uVar4;
          func_0x00010be636e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar2;
          uStack_1c0 = uVar5;
          func_0x00010be63620();
          _objc_retainAutoreleasedReturnValue();
          uStack_1b8 = uVar6;
          func_0x00010be63680();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_1b0 = uVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1d0,5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
            ___stack_chk_fail();
            lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
            _objc_retain(puVar16);
            uVar2 = uVar1;
            func_0x00010bdde860(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            uStack_2b0 = uVar2;
            func_0x00010bdde980(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar1;
            uStack_2a8 = uVar4;
            func_0x00010bdde880(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar1;
            uStack_2a0 = uVar5;
            func_0x00010bdde7c0(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar1;
            uStack_298 = uVar6;
            func_0x00010bdde940(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar1;
            uStack_290 = uVar7;
            func_0x00010bdde9e0(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar1;
            uStack_288 = uVar8;
            func_0x00010bdde9a0(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar1;
            uStack_280 = uVar9;
            func_0x00010bdde820(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar1;
            uStack_278 = uVar10;
            func_0x00010bdde960(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar1;
            uStack_270 = uVar11;
            func_0x00010bdde7e0(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar1;
            uStack_268 = uVar12;
            func_0x00010bdde8e0(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar1;
            uStack_260 = uVar13;
            func_0x00010bdde8a0(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar1;
            uStack_258 = uVar14;
            func_0x00010bdde840(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            uStack_250 = uVar15;
            func_0x00010bdde900(uVar1,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            puVar16 = &uStack_2b0;
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            uStack_248 = uVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar16,0xe);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar2);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_240) {
              ___stack_chk_fail();
              puVar3 = PTR_PTR_1126c1f10;
              _objc_retain(puVar16);
              _objc_alloc(puVar3);
              func_0x00010bddea00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e1b038,
                                  puVar16);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar16);
              func_0x00010c0333e0(0,0x3fb999999999999a,0x401e5c28f5c28f5c,puVar3,param_2,6,0,0,0,
                                  &PTR____CFConstantStringClassReference_110e1b038,uVar2);
              _objc_release(uVar2);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105aa1e8c; end: 105aa1f17; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaUpdatePages] */

void FUN_105aa1e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be46d20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_30 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = param_1;
    func_0x00010be46d60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    uStack_98 = uVar2;
    func_0x00010be46d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    uStack_90 = uVar3;
    func_0x00010be46ce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar4;
    func_0x00010be46d00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar3 = uVar2;
      func_0x00010be46d60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      uStack_108 = uVar3;
      func_0x00010be46d20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      uStack_100 = uVar4;
      func_0x00010be628e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uVar5;
      func_0x00010be46d00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_f0 = uVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_108,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        puVar16 = &uStack_180;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar2 = uVar3;
        func_0x00010be63660();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        uStack_180 = uVar2;
        func_0x00010be63700();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        uStack_178 = uVar4;
        func_0x00010be636e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        uStack_170 = uVar5;
        func_0x00010be63620();
        _objc_retainAutoreleasedReturnValue();
        uStack_168 = uVar6;
        func_0x00010be63680();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_160 = uVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_180,5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
          ___stack_chk_fail();
          lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(puVar16);
          uVar3 = uVar2;
          func_0x00010bdde860(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          uStack_260 = uVar3;
          func_0x00010bdde980(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          uStack_258 = uVar4;
          func_0x00010bdde880(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar2;
          uStack_250 = uVar5;
          func_0x00010bdde7c0(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar2;
          uStack_248 = uVar6;
          func_0x00010bdde940(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar2;
          uStack_240 = uVar7;
          func_0x00010bdde9e0(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar2;
          uStack_238 = uVar8;
          func_0x00010bdde9a0(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar2;
          uStack_230 = uVar9;
          func_0x00010bdde820(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar2;
          uStack_228 = uVar10;
          func_0x00010bdde960(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar2;
          uStack_220 = uVar11;
          func_0x00010bdde7e0(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar2;
          uStack_218 = uVar12;
          func_0x00010bdde8e0(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar2;
          uStack_210 = uVar13;
          func_0x00010bdde8a0(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar2;
          uStack_208 = uVar14;
          func_0x00010bdde840(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          uStack_200 = uVar15;
          func_0x00010bdde900(uVar2,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          puVar16 = &uStack_260;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_1f8 = uVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar16,0xe);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f0) {
            ___stack_chk_fail();
            puVar1 = PTR_PTR_1126c1f10;
            _objc_retain(puVar16);
            _objc_alloc(puVar1);
            func_0x00010bddea00(uVar3,param_2,&PTR____CFConstantStringClassReference_110e1b038,
                                puVar16);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            func_0x00010c0333e0(0,0x3fb999999999999a,0x401e5c28f5c28f5c,puVar1,param_2,6,0,0,0,
                                &PTR____CFConstantStringClassReference_110e1b038,uVar3);
            _objc_release(uVar3);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa1f18; end: 105aa2017; +[SCSpectaclesOnboardingPageViewModelsFactory _malibuPages] */

void FUN_105aa1f18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be46d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_68 = uVar1;
  func_0x00010be46d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_60 = uVar2;
  func_0x00010be46ce0();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar3;
  func_0x00010be46d00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = uVar1;
    func_0x00010be46d60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    uStack_d8 = uVar2;
    func_0x00010be46d20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    uStack_d0 = uVar3;
    func_0x00010be628e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar5;
    func_0x00010be46d00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d8,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      puVar16 = &uStack_150;
      lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = uVar2;
      func_0x00010be63660();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      uStack_150 = uVar1;
      func_0x00010be63700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      uStack_148 = uVar3;
      func_0x00010be636e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      uStack_140 = uVar5;
      func_0x00010be63620();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = uVar6;
      func_0x00010be63680();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_130 = uVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_150,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
        ___stack_chk_fail();
        lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar16);
        uVar2 = uVar1;
        func_0x00010bdde860(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        uStack_230 = uVar2;
        func_0x00010bdde980(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        uStack_228 = uVar3;
        func_0x00010bdde880(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        uStack_220 = uVar5;
        func_0x00010bdde7c0(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        uStack_218 = uVar6;
        func_0x00010bdde940(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar1;
        uStack_210 = uVar7;
        func_0x00010bdde9e0(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar1;
        uStack_208 = uVar8;
        func_0x00010bdde9a0(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar1;
        uStack_200 = uVar9;
        func_0x00010bdde820(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar1;
        uStack_1f8 = uVar10;
        func_0x00010bdde960(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar1;
        uStack_1f0 = uVar11;
        func_0x00010bdde7e0(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar1;
        uStack_1e8 = uVar12;
        func_0x00010bdde8e0(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar1;
        uStack_1e0 = uVar13;
        func_0x00010bdde8a0(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar1;
        uStack_1d8 = uVar14;
        func_0x00010bdde840(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uStack_1d0 = uVar15;
        func_0x00010bdde900(uVar1,param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        puVar16 = &uStack_230;
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_1c8 = uVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar16,0xe);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
          ___stack_chk_fail();
          puVar4 = PTR_PTR_1126c1f10;
          _objc_retain(puVar16);
          _objc_alloc(puVar4);
          func_0x00010bddea00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e1b038,puVar16
                             );
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          func_0x00010c0333e0(0,0x3fb999999999999a,0x401e5c28f5c28f5c,puVar4,param_2,6,0,0,0,
                              &PTR____CFConstantStringClassReference_110e1b038,uVar2);
          _objc_release(uVar2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105aa2018; end: 105aa2117; +[SCSpectaclesOnboardingPageViewModelsFactory _neptunePages] */

void FUN_105aa2018(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be46d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_68 = uVar1;
  func_0x00010be46d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_60 = uVar2;
  func_0x00010be628e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar3;
  func_0x00010be46d00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar16 = &uStack_e0;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = uVar1;
    func_0x00010be63660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    uStack_e0 = uVar2;
    func_0x00010be63700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    uStack_d8 = uVar3;
    func_0x00010be636e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    uStack_d0 = uVar5;
    func_0x00010be63620();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar6;
    func_0x00010be63680();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar16);
      uVar1 = uVar2;
      func_0x00010bdde860(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      uStack_1c0 = uVar1;
      func_0x00010bdde980(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      uStack_1b8 = uVar3;
      func_0x00010bdde880(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      uStack_1b0 = uVar5;
      func_0x00010bdde7c0(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      uStack_1a8 = uVar6;
      func_0x00010bdde940(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      uStack_1a0 = uVar7;
      func_0x00010bdde9e0(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      uStack_198 = uVar8;
      func_0x00010bdde9a0(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar2;
      uStack_190 = uVar9;
      func_0x00010bdde820(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar2;
      uStack_188 = uVar10;
      func_0x00010bdde960(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar2;
      uStack_180 = uVar11;
      func_0x00010bdde7e0(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      uStack_178 = uVar12;
      func_0x00010bdde8e0(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar2;
      uStack_170 = uVar13;
      func_0x00010bdde8a0(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar2;
      uStack_168 = uVar14;
      func_0x00010bdde840(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      uStack_160 = uVar15;
      func_0x00010bdde900(uVar2,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar16 = &uStack_1c0;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_158 = uVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar16,0xe);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
        ___stack_chk_fail();
        puVar4 = PTR_PTR_1126c1f10;
        _objc_retain(puVar16);
        _objc_alloc(puVar4);
        func_0x00010bddea00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e1b038,puVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        func_0x00010c0333e0(0,0x3fb999999999999a,0x401e5c28f5c28f5c,puVar4,param_2,6,0,0,0,
                            &PTR____CFConstantStringClassReference_110e1b038,uVar1);
        _objc_release(uVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105aa2118; end: 105aa2237; +[SCSpectaclesOnboardingPageViewModelsFactory _newportPages] */

void FUN_105aa2118(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar16 = &uStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be63660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_70 = uVar1;
  func_0x00010be63700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_68 = uVar2;
  func_0x00010be636e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  uStack_60 = uVar3;
  func_0x00010be63620();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar4;
  func_0x00010be63680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar16);
    uVar2 = uVar1;
    func_0x00010bdde860(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    uStack_150 = uVar2;
    func_0x00010bdde980(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    uStack_148 = uVar3;
    func_0x00010bdde880(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    uStack_140 = uVar4;
    func_0x00010bdde7c0(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    uStack_138 = uVar6;
    func_0x00010bdde940(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    uStack_130 = uVar7;
    func_0x00010bdde9e0(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    uStack_128 = uVar8;
    func_0x00010bdde9a0(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    uStack_120 = uVar9;
    func_0x00010bdde820(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    uStack_118 = uVar10;
    func_0x00010bdde960(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    uStack_110 = uVar11;
    func_0x00010bdde7e0(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    uStack_108 = uVar12;
    func_0x00010bdde8e0(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    uStack_100 = uVar13;
    func_0x00010bdde8a0(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar1;
    uStack_f8 = uVar14;
    func_0x00010bdde840(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar15;
    func_0x00010bdde900(uVar1,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    puVar16 = &uStack_150;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar16,0xe);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126c1f10;
      _objc_retain(puVar16);
      _objc_alloc(puVar5);
      func_0x00010bddea00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e1b038,puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      func_0x00010c0333e0(0,0x3fb999999999999a,0x401e5c28f5c28f5c,puVar5,param_2,6,0,0,0,
                          &PTR____CFConstantStringClassReference_110e1b038,uVar2);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105aa2238; end: 105aa24d3; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosPagesForVideoObjectModelsFuture:] */

void FUN_105aa2238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdde860(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_e0 = uVar1;
  func_0x00010bdde980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_d8 = uVar2;
  func_0x00010bdde880(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  uStack_d0 = uVar3;
  func_0x00010bdde7c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  uStack_c8 = uVar4;
  func_0x00010bdde940(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_c0 = uVar5;
  func_0x00010bdde9e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  uStack_b8 = uVar6;
  func_0x00010bdde9a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  uStack_b0 = uVar7;
  func_0x00010bdde820(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  uStack_a8 = uVar8;
  func_0x00010bdde960(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  uStack_a0 = uVar9;
  func_0x00010bdde7e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  uStack_98 = uVar10;
  func_0x00010bdde8e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  uStack_90 = uVar11;
  func_0x00010bdde8a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  uStack_88 = uVar12;
  func_0x00010bdde840(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar13;
  func_0x00010bdde900(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar15 = &uStack_e0;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar15,0xe);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar14 = PTR_PTR_1126c1f10;
    _objc_retain(puVar15);
    _objc_alloc(puVar14);
    func_0x00010bddea00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e1b038,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    func_0x00010c0333e0(0,0x3fb999999999999a,0x401e5c28f5c28f5c,puVar14,param_2,6,0,0,0,
                        &PTR____CFConstantStringClassReference_110e1b038,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105aa24d4; end: 105aa2587; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosIntroPageForVideoObjectModelsFuture:] */

void FUN_105aa24d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b038,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0,0x3fb999999999999a,0x401e5c28f5c28f5c,puVar1,param_2,6,0,0,0,
                      &PTR____CFConstantStringClassReference_110e1b038,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2588; end: 105aa263f; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosSelectFlightModePageForVideoObjectModelsFuture:] */

void FUN_105aa2588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b058,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x401e666666666666,0x401ecccccccccccd,0x402bf0a3d70a3d71,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b058,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2640; end: 105aa26f7; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosLEDIndicatorPageForVideoObjectModelsFuture:] */

void FUN_105aa2640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b078,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x402bf5c28f5c28f6,0x402c28f5c28f5c29,0x4034666666666666,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b078,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa26f8; end: 105aa27af; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosFlightPrepPageForVideoObjectModelsFuture:] */

void FUN_105aa26f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b098,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x403468f5c28f5c29,0x4034828f5c28f5c3,0x4039fae147ae147b,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b098,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa27b0; end: 105aa2867; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosPushToStartForVideoObjectModelsFuture:] */

void FUN_105aa27b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b0b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x4039fd70a3d70a3d,0x403a170a3d70a3d7,0x403d1c28f5c28f5c,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b0b8,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2868; end: 105aa291f; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosTakeOffPageForVideoObjectModelsFuture:] */

void FUN_105aa2868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b0d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x403d1eb851eb851f,0x403d3851eb851eb8,0x404199999999999a,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b0d8,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2920; end: 105aa29d7; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosStartRecordingPageForVideoObjectModelsFuture:] */

void FUN_105aa2920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b0f8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x40419ae147ae147b,0x4041a7ae147ae148,0x404403d70a3d70a4,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b0f8,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa29d8; end: 105aa2a8f; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosHoverPageForVideoObjectModelsFuture:] */

void FUN_105aa29d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b118,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x4044051eb851eb85,0x404411eb851eb852,0x404715c28f5c28f6,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b118,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2a90; end: 105aa2b47; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosRevealPageForVideoObjectModelsFuture:] */

void FUN_105aa2a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b138,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x4047170a3d70a3d7,0x404723d70a3d70a4,0x404a8147ae147ae1,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b138,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2b48; end: 105aa2bff; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosFollowPageForVideoObjectModelsFuture:] */

void FUN_105aa2b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b158,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x404a828f5c28f5c3,0x404a8f5c28f5c28f,0x404d666666666666,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b158,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2c00; end: 105aa2cb7; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosOrbitPageForVideoObjectModelsFuture:] */

void FUN_105aa2c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b178,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x404d67ae147ae148,0x404d747ae147ae14,0x4050b66666666666,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b178,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2cb8; end: 105aa2d6f; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosLandingPageForVideoObjectModelsFuture:] */

void FUN_105aa2cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b198,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x4050b70a3d70a3d7,0x4050bd70a3d70a3d,0x4052e47ae147ae14,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b198,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2d70; end: 105aa2e27; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosImportingPageForVideoObjectModelsFuture:] */

void FUN_105aa2d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b1b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x4052e51eb851eb85,0x4052eb851eb851ec,0x4053f1eb851eb852,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b1b8,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2e28; end: 105aa2edb; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosOutroPageForVideoObjectModelsFuture:] */

void FUN_105aa2e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b1d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0x4053f1eb851eb852,0x4053f1eb851eb852,0x40559eb851eb851f,puVar1,param_2,3,0,0,
                      0,&PTR____CFConstantStringClassReference_110e1b1d8,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2edc; end: 105aa2f8b; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosBasePageForVideoObjectModelsFuture:] */

void FUN_105aa2edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bddea00(param_1,param_2,&PTR____CFConstantStringClassReference_110e1b1f8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0333e0(0,0,0x40559eb851eb851f,puVar1,param_2,3,0,0,0,
                      &PTR____CFConstantStringClassReference_110e1b1f8,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa2f8c; end: 105aa3087; +[SCSpectaclesOnboardingPageViewModelsFactory _cheeriosVideoObjectFutureForAccessibilityIdentifier:videoObjectModelsFuture:] */

void FUN_105aa2f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_alloc_init();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105aa3088;
  puStack_48 = &UNK_110857d70;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  puVar2 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_4,param_2,&puStack_60,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(puStack_40);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105aa3088; end: 105aa30df;  */

void FUN_105aa3088(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aa30e0; end: 105aa318f; +[SCSpectaclesOnboardingPageViewModelsFactory _newportIntroPage] */

void FUN_105aa30e0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b218,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b238;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b238,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0,0,0x4014000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa3190; end: 105aa323f; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaMalibuVideoPage] */

void FUN_105aa3190(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b278;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b278,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b298,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0,0,0x4008000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa3240; end: 105aa32ef; +[SCSpectaclesOnboardingPageViewModelsFactory _newportVideoPage] */

void FUN_105aa3240(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b2d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b2d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b2f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b2f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4016000000000000,0x4018000000000000,0x4026000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa32f0; end: 105aa33a3; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaTapBatteryPage] */

void FUN_105aa32f0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b318;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b318,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b338;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b338,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4008000000000000,0x4010000000000000,0x401a666666666666,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa33a4; end: 105aa3457; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaMalibuPhotoPage] */

void FUN_105aa33a4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b378;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b378,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4008000000000000,0x4008000000000000,0x4016666666666666,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa3458; end: 105aa3507; +[SCSpectaclesOnboardingPageViewModelsFactory _newportPhotoPage] */

void FUN_105aa3458(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b3d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b3d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b3f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b3f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4027000000000000,0x4028000000000000,0x4031000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa3508; end: 105aa35bf; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaCaseChargingPage] */

void FUN_105aa3508(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b418;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b418,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b438;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b438,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x401a666666666666,0x401eae147ae147ae,0x4026000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa35c0; end: 105aa3673; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaMalibuBatteryAndChargingPage] */

void FUN_105aa35c0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b318;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b318,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b338;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b338,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4016666666666666,0x401c000000000000,0x4023000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa3674; end: 105aa3727; +[SCSpectaclesOnboardingPageViewModelsFactory _neptuneBatteryAndChargingPage] */

void FUN_105aa3674(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b318;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b318,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b498,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4016666666666666,0x401c000000000000,0x4023000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa3728; end: 105aa37db; +[SCSpectaclesOnboardingPageViewModelsFactory _newportBatteryAndChargingPage] */

void FUN_105aa3728(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b4b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b4b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b4d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b4d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4031800000000000,0x4032000000000000,0x4037000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa37dc; end: 105aa388b; +[SCSpectaclesOnboardingPageViewModelsFactory _lagunaMalibuNeptuneMemoriesPage] */

void FUN_105aa37dc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1b4f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b4f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1b518;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b518,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0333e0(0x4023000000000000,0x4026000000000000,0x4028000000000000,puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa388c; end: 105aa3b53; +[SCSpectaclesOnboardingPageViewModelsFactory _newportMemoriesPage] */

void FUN_105aa388c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b558;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b558,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  ppuVar6 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar6 != (undefined **)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
    func_0x00010bf069e0(puVar5);
    _objc_release(puVar7);
  }
  puVar7 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c1a9f00(puVar7);
  func_0x00010c1739e0(0,0xc014000000000000,0x4034000000000000,0x4034000000000000,puVar7);
  puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c0d3c80();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar10);
  func_0x00010bef6f20(puVar10);
  _objc_release(puVar8);
  func_0x00010bf069e0(puVar5);
  ppuVar6 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar6 != (undefined **)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
    func_0x00010bf069e0(puVar5);
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126c1f10;
  _objc_alloc(PTR_PTR_1126c1f10);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e1b5b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b5b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c0333e0(0x4037800000000000,0x4038000000000000,0x403e000000000000,puVar8);
  _objc_release(puVar11);
  _objc_release(ppuVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105aa3b54; end: 105aa3cff; -[SCSpectaclesOnboardingScrollView initWithFrame:videoOffset:onboardingFlowPages:flowType:theme:onboardingScrollViewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105aa3b54(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126ebac0;
  puVar1 = &uStack_80;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf529e0();
    lVar3 = (long)_DAT_11272e998;
    *(undefined8 *)((long)puVar1 + lVar3) = uVar2;
    func_0x00010c1d8be0(puVar1);
    func_0x00010c2025c0(puVar1);
    func_0x00010bfb68e0(puVar1);
    lVar3 = *(long *)((long)puVar1 + lVar3);
    func_0x00010bfb68e0(puVar1);
    func_0x00010c1827c0(param_3 * (double)lVar3,param_4,puVar1);
    _objc_retain(puVar1);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bf97e80(param_7);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 105aa3d00; end: 105aa3e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa3d00(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = *(long *)(param_5 + 0x20);
  lVar3 = *(long *)(lVar4 + _DAT_11272e998);
  _objc_retain(param_6);
  func_0x00010bfb68e0(lVar4);
  dVar5 = param_3 * (double)param_7;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  puVar1 = PTR_PTR_1126c1f18;
  _objc_alloc();
  func_0x00010c014a20(dVar5,0,param_3,param_4,*(undefined8 *)(param_5 + 0x38));
  _objc_release(param_6);
  if ((param_7 == 0) && (lVar3 != 1)) {
    lVar3 = *(long *)(param_5 + 0x20);
    lVar4 = (long)_DAT_11272e99c;
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(lVar3 + lVar4);
    *(undefined **)(lVar3 + lVar4) = puVar1;
    _objc_release(uVar2);
  }
  func_0x00010befbb60(*(undefined8 *)(param_5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


