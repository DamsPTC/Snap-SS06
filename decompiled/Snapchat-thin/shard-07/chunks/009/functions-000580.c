/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105abcf14; end: 105abcf33; -[SCSpectaclesPairingViewController pairingFooter:didTapURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abcf14(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + _DAT_11272ecec) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be325f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleURLTapped__11256a318,param_4);
  return;
}



/* Entry: 105abcf34; end: 105abcf87; -[SCSpectaclesPairingViewController _supportLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abcf34(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (*(long *)(param_1 + _DAT_11272ecb0) == 0) {
    ppuVar1 = &PTR_PTR_1108d3700;
  }
  else {
    if (*(long *)(param_1 + _DAT_11272ecb0) != 1) goto LAB_105abcf78;
    ppuVar1 = &PTR_PTR_1108d3718;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_105abcf78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 105abcf88; end: 105abd17f; -[SCSpectaclesPairingViewController _handleURLTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abcf88(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4b900();
  _objc_release(lVar2);
  if ((int)puVar3 == 0) {
    lVar2 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bec8f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if ((int)lVar5 != 0) {
      func_0x00010c293ee0(*(undefined8 *)(param_1 + _DAT_11272ecd4));
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar3);
    *(undefined1 *)(param_1 + _DAT_11272ed24) = 1;
    func_0x00010c293020(*(undefined8 *)(param_1 + _DAT_11272ecd4));
  }
  lVar2 = param_3;
  func_0x00010be84f60(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + _DAT_11272ece4) != lVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105abd180; end: 105abd19b; -[SCSpectaclesPairingViewController pairingHeaderDidTapNavButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abd180(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11272ece4) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelButtonPressed_1125a91a0);
  return;
}



/* Entry: 105abd19c; end: 105abd19f; -[SCSpectaclesPairingViewController pairingHeaderDidTapBackButton:] */

void FUN_105abd19c(void)

{
  return;
}



/* Entry: 105abd1a0; end: 105abd1ab; -[SCSpectaclesPairingViewController defaultProjectNameV2] */

void FUN_105abd1a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_spectacles_11266fb40);
  return;
}



/* Entry: 105abd1ac; end: 105abd1b7; -[SCSpectaclesPairingViewController defaultSubProjectName] */

undefined ** FUN_105abd1ac(void)

{
  return &PTR____CFConstantStringClassReference_110e1c378;
}



/* Entry: 105abd1b8; end: 105abd443; -[SCSpectaclesPairingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abd1b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ecc4,0);
  _objc_storeStrong(param_1 + _DAT_11272ecc0,0);
  _objc_storeStrong(param_1 + _DAT_11272ecbc,0);
  _objc_storeStrong(param_1 + _DAT_11272ec80,0);
  _objc_storeStrong(param_1 + _DAT_11272ecc8,0);
  _objc_storeStrong(param_1 + _DAT_11272ed14,0);
  _objc_storeStrong(param_1 + _DAT_11272ed18,0);
  _objc_storeStrong(param_1 + _DAT_11272ec84,0);
  _objc_destroyWeak(param_1 + _DAT_11272ec90);
  _objc_storeStrong(param_1 + _DAT_11272ec8c,0);
  _objc_storeStrong(param_1 + _DAT_11272ecd4,0);
  _objc_storeStrong(param_1 + _DAT_11272ecb4,0);
  _objc_storeStrong(param_1 + _DAT_11272ecd0,0);
  _objc_storeStrong(param_1 + _DAT_11272eccc,0);
  _objc_storeStrong(param_1 + _DAT_11272ecac,0);
  _objc_storeStrong(param_1 + _DAT_11272ec98,0);
  _objc_storeStrong(param_1 + _DAT_11272ec88,0);
  _objc_storeStrong(param_1 + _DAT_11272ec7c,0);
  _objc_storeStrong(param_1 + _DAT_11272ec78,0);
  _objc_storeStrong(param_1 + _DAT_11272ec74,0);
  _objc_storeStrong(param_1 + _DAT_11272ec6c,0);
  _objc_storeStrong(param_1 + _DAT_11272ec70,0);
  _objc_storeStrong(param_1 + _DAT_11272ecd8,0);
  _objc_storeStrong(param_1 + _DAT_11272ecec,0);
  _objc_storeStrong(param_1 + _DAT_11272ece8,0);
  _objc_storeStrong(param_1 + _DAT_11272ece0,0);
  _objc_storeStrong(param_1 + _DAT_11272ecdc,0);
  _objc_storeStrong(param_1 + _DAT_11272eca0,0);
  _objc_storeStrong(param_1 + _DAT_11272ec9c,0);
  _objc_storeStrong(param_1 + _DAT_11272ec68,0);
  _objc_storeStrong(param_1 + _DAT_11272ed08,0);
  _objc_storeStrong(param_1 + _DAT_11272ed00,0);
  _objc_storeStrong(param_1 + _DAT_11272ed04,0);
  _objc_storeStrong(param_1 + _DAT_11272ecf8,0);
  _objc_storeStrong(param_1 + _DAT_11272ecf4,0);
  _objc_storeStrong(param_1 + _DAT_11272ecf0,0);
  _objc_storeStrong(param_1 + _DAT_11272ecfc,0);
  _objc_storeStrong(param_1 + _DAT_11272ece4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ed10,0);
  return;
}



/* Entry: 105abd444; end: 105abe157; -[SCSpectaclesPostPairingPhaseView initWithFrame:onDemandResourceFetching:playerProvider:viewModel:navigationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105abd444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_140;
  undefined *puStack_138;
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_138 = PTR_PTR_1126ebbd8;
  puVar1 = &uStack_140;
  uStack_140 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar20 = (long)_DAT_11272ed2c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(long *)((long)puVar1 + lVar20) = param_7;
    _objc_release(uVar2);
    lVar20 = (long)_DAT_11272ed30;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined8 *)((long)puVar1 + lVar20) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272ed34,param_10);
    lVar20 = (long)_DAT_11272ed38;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined8 *)((long)puVar1 + lVar20) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar22 = (long)_DAT_11272ed3c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2a5060(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c2048;
    _objc_alloc();
    func_0x00010c00a2c0();
    lVar20 = (long)_DAT_11272ed40;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar20);
    uVar2 = param_9;
    func_0x00010c2535c0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_a8 = *(undefined8 *)((long)puVar1 + lVar22);
    uStack_a0 = *(undefined8 *)((long)puVar1 + lVar20);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar20 = (long)_DAT_11272ed44;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar6);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c207380(0x4049000000000000,*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf493c0(0x4042800000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar2;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar4;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar5;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2a5060(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar17);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(puVar19);
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar21 = (long)_DAT_11272ed48;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar17;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar4;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bfe0660(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010bf493e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar2;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfe0660(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf493e0(0x3fe70a3d70a3d70a);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar2);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126c2050;
    _objc_alloc();
    func_0x00010c00a2c0();
    lVar21 = (long)_DAT_11272ed4c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar17;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar5;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar2;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010c149040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f0 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(puVar19);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(puVar18);
    _objc_release(uVar17);
    func_0x00010bea40c0(puVar1);
    puVar3 = PTR_PTR_1126bf660;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar21 = (long)_DAT_11272ed50;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c100c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2218a0();
    _objc_release(uVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar17;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2793a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar4;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf1ff80(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar20 = (long)_DAT_11272ed54;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar4;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(puVar19);
    _objc_release(uVar17);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(uVar5);
    func_0x00010bf143e0(param_9);
    func_0x00010be91560(puVar1);
    func_0x00010bfe59e0(param_9);
    func_0x00010be91560(puVar1);
    func_0x00010c29b080(param_9);
    func_0x00010be91580(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_7 + _DAT_11272ed4c);
  puVar3 = PTR_PTR_1126c2060;
  _objc_alloc(PTR_PTR_1126c2060);
  puVar19 = *(undefined8 **)(param_7 + _DAT_11272ed38);
  func_0x00010bf259e0(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar19;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fa00(puVar3);
  func_0x00010c2226c0(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar19);
  return puVar19;
}



/* Entry: 105abe158; end: 105abe21f; -[SCSpectaclesPostPairingPhaseView _setFooterViewWithButtonLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272ed4c);
  puVar1 = PTR_PTR_1126c2060;
  _objc_alloc(PTR_PTR_1126c2060);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ed38);
  func_0x00010bf259e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fa00(puVar1,param_2,1,0,0,param_3,uVar3,1,0);
  func_0x00010c2226c0(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105abe220; end: 105abe27b; -[SCSpectaclesPostPairingPhaseView superviewWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe220(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_11272ed58) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272ed50);
    func_0x00010c100720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec9110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__suscribeToAVPlayerDidEndPlaying_11258fde8)
    ;
    return;
  }
  return;
}



/* Entry: 105abe27c; end: 105abe327; -[SCSpectaclesPostPairingPhaseView superviewDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe27c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ed50);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ed58);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0(puVar2,param_2,param_1,uVar3,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105abe328; end: 105abe3bf; -[SCSpectaclesPostPairingPhaseView _suscribeToAVPlayerDidEndPlayingNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe328(long param_1,undefined8 param_2)

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
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272ed58);
  func_0x00010bf5f0a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2,param_2,param_1,puVar1,uVar4,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105abe3c0; end: 105abe433; -[SCSpectaclesPostPairingPhaseView playerItemDidReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe3c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  func_0x00010c0fe360(*(undefined8 *)(param_1 + _DAT_11272ed58));
  _objc_release(param_3);
  return;
}



/* Entry: 105abe434; end: 105abe49f; -[SCSpectaclesPostPairingPhaseView hideAllViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe434(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272ed50),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272ed4c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272ed48));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272ed44));
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ed54),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 105abe4a0; end: 105abe50b; -[SCSpectaclesPostPairingPhaseView showAllViews] */

/* WARNING: Possible PIC construction at 0x000105abe4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105abe4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105abe4d4) */
/* WARNING: Removing unreachable block (ram,0x000105abe4f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe4a0(long param_1)

{
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11272ed54));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ed50),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 105abe50c; end: 105abe653; -[SCSpectaclesPostPairingPhaseView _requestOnDemandResourcesVideoForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11272ed2c;
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



/* Entry: 105abe654; end: 105abe6bf;  */

void FUN_105abe654(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105abe6c0; end: 105abe78b; -[SCSpectaclesPostPairingPhaseView _handleVideoForResourceType:video:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe6c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bff41a0();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ed30);
  func_0x00010c101100(uVar2,param_2,&PTR____CFConstantStringClassReference_110e1afd8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11272ed58;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar3);
  lVar4 = (long)_DAT_11272ed50;
  func_0x00010c1dda40(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c100720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe360();
  _objc_release(uVar2);
  func_0x00010bec9100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105abe78c; end: 105abe8d3; -[SCSpectaclesPostPairingPhaseView _requestOnDemandResourcesImageForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11272ed2c;
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



/* Entry: 105abe8d4; end: 105abe93f;  */

void FUN_105abe8d4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105abe940; end: 105abe9c3; -[SCSpectaclesPostPairingPhaseView _handleImageForResourceType:image:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe940(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  _objc_retain(param_4);
  piVar2 = (int *)&DAT_11272ed3c;
  lVar3 = (long)_DAT_11272ed38;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf143e0();
  if (param_3 != lVar1) {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bfe59e0();
    if (param_3 != lVar1) goto LAB_105abe9ac;
    piVar2 = (int *)&DAT_11272ed48;
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + *piVar2),param_2,param_4);
LAB_105abe9ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105abe9c4; end: 105abe9c7; -[SCSpectaclesPostPairingPhaseView pairingStatusViewDidTapButton:] */

void FUN_105abe9c4(void)

{
  return;
}



/* Entry: 105abe9c8; end: 105abea5f; -[SCSpectaclesPostPairingPhaseView pairingStatusView:didTapURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abe9c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  if (*(long *)(param_1 + _DAT_11272ed40) != param_3) {
    return;
  }
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  param_1 = param_1 + _DAT_11272ed34;
  _objc_loadWeakRetained(param_1);
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105abea60; end: 105abeaa3; -[SCSpectaclesPostPairingPhaseView pairingFooterDidTapConfirmButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abea60(long param_1,undefined8 param_2)

{
  func_0x00010bea40c0(param_1,param_2,1);
  param_1 = param_1 + _DAT_11272ed5c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c104b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abeaa4; end: 105abeaa7; -[SCSpectaclesPostPairingPhaseView pairingFooterDidTapCancelButton:] */

void FUN_105abeaa4(void)

{
  return;
}



/* Entry: 105abeaa8; end: 105abeaab; -[SCSpectaclesPostPairingPhaseView pairingFooter:didTapURL:] */

void FUN_105abeaa8(void)

{
  return;
}



/* Entry: 105abeaac; end: 105abeacb; -[SCSpectaclesPostPairingPhaseView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abeaac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272ed5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105abeacc; end: 105abeadf; -[SCSpectaclesPostPairingPhaseView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abeacc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272ed5c,param_3);
  return;
}



/* Entry: 105abeae0; end: 105abebc7; -[SCSpectaclesPostPairingPhaseView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105abeae0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ed5c);
  _objc_storeStrong(param_1 + _DAT_11272ed38,0);
  _objc_destroyWeak(param_1 + _DAT_11272ed34);
  _objc_storeStrong(param_1 + _DAT_11272ed30,0);
  _objc_storeStrong(param_1 + _DAT_11272ed2c,0);
  _objc_storeStrong(param_1 + _DAT_11272ed54,0);
  _objc_storeStrong(param_1 + _DAT_11272ed48,0);
  _objc_storeStrong(param_1 + _DAT_11272ed3c,0);
  _objc_storeStrong(param_1 + _DAT_11272ed58,0);
  _objc_storeStrong(param_1 + _DAT_11272ed50,0);
  _objc_storeStrong(param_1 + _DAT_11272ed44,0);
  _objc_storeStrong(param_1 + _DAT_11272ed4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ed40,0);
  return;
}



/* Entry: 105abebc8; end: 105abedcb; -[SCSpectaclesPairingViewModel initWithTitle:scanningStatusLabel:scanningSubtextLabel:connectingSubtextLabel:namingTitle:namingDetailLabel:settingUpStatusLabel:termOfServiceText:termOfServiceButtonTitle:isCheerios:] */

undefined8 *
FUN_105abebc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ebbe0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_12;
  }
  _objc_release(param_11);
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



/* Entry: 105abedcc; end: 105abedef; -[SCSpectaclesPairingViewModel copyWithZone:] */

undefined8 FUN_105abedcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105abedf0; end: 105abeebb; -[SCSpectaclesPairingViewModel hash] */

undefined8 * FUN_105abedf0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_78;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105abeff4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105abf000;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = (undefined8 *)puVar3[10];
                      if (puVar6 != (undefined8 *)param_3[10]) {
                        func_0x00010c071ae0();
                        goto LAB_105abf000;
                      }
                      goto LAB_105abeff4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105abf000:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105abeebc; end: 105abf01b; -[SCSpectaclesPairingViewModel isEqual:] */

long FUN_105abeebc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105abeff4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105abf000;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_105abf000;
                      }
                      goto LAB_105abeff4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105abf000:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105abf01c; end: 105abf023; -[SCSpectaclesPairingViewModel title] */

undefined8 FUN_105abf01c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105abf024; end: 105abf02b; -[SCSpectaclesPairingViewModel scanningStatusLabel] */

undefined8 FUN_105abf024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105abf02c; end: 105abf033; -[SCSpectaclesPairingViewModel scanningSubtextLabel] */

undefined8 FUN_105abf02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105abf034; end: 105abf03b; -[SCSpectaclesPairingViewModel connectingSubtextLabel] */

undefined8 FUN_105abf034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105abf03c; end: 105abf043; -[SCSpectaclesPairingViewModel namingTitle] */

undefined8 FUN_105abf03c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105abf044; end: 105abf04b; -[SCSpectaclesPairingViewModel namingDetailLabel] */

undefined8 FUN_105abf044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105abf04c; end: 105abf053; -[SCSpectaclesPairingViewModel settingUpStatusLabel] */

undefined8 FUN_105abf04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105abf054; end: 105abf05b; -[SCSpectaclesPairingViewModel termOfServiceText] */

undefined8 FUN_105abf054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105abf05c; end: 105abf063; -[SCSpectaclesPairingViewModel termOfServiceButtonTitle] */

undefined8 FUN_105abf05c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105abf064; end: 105abf06b; -[SCSpectaclesPairingViewModel isCheerios] */

undefined1 FUN_105abf064(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105abf06c; end: 105abf0ef; -[SCSpectaclesPairingViewModel .cxx_destruct] */

void FUN_105abf06c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105abf0f0; end: 105abf1b7; -[SCSpectaclesPostPairingViewModel initWithBackgroundResourceType:iconResourceType:videoResourceType:buttonText:statusViewModel:] */

undefined1 *
FUN_105abf0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ebbe8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 105abf1b8; end: 105abf1db; -[SCSpectaclesPostPairingViewModel copyWithZone:] */

undefined8 FUN_105abf1b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105abf1dc; end: 105abf25b; -[SCSpectaclesPostPairingViewModel hash] */

undefined8 * FUN_105abf1dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105abf30c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105abf318;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar5 = *(long *)((long)puVar3 + 0x20);
      if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
        if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_105abf318;
        }
        goto LAB_105abf30c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105abf318:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105abf25c; end: 105abf333; -[SCSpectaclesPostPairingViewModel isEqual:] */

long FUN_105abf25c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105abf30c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105abf318;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_105abf318;
        }
        goto LAB_105abf30c;
      }
    }
    lVar3 = 0;
  }
LAB_105abf318:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105abf334; end: 105abf33b; -[SCSpectaclesPostPairingViewModel backgroundResourceType] */

undefined8 FUN_105abf334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105abf33c; end: 105abf343; -[SCSpectaclesPostPairingViewModel iconResourceType] */

undefined8 FUN_105abf33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105abf344; end: 105abf34b; -[SCSpectaclesPostPairingViewModel videoResourceType] */

undefined8 FUN_105abf344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105abf34c; end: 105abf353; -[SCSpectaclesPostPairingViewModel buttonText] */

undefined8 FUN_105abf34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105abf354; end: 105abf35b; -[SCSpectaclesPostPairingViewModel statusViewModel] */

undefined8 FUN_105abf354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105abf35c; end: 105abf38b; -[SCSpectaclesPostPairingViewModel .cxx_destruct] */

void FUN_105abf35c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105abf38c; end: 105abf4af; -[SCSpectaclesPairingHeaderViewModel initWithTitle:subtitle:navButtonTitle:navButtonAccessibilityId:isNavButtonHidden:isBackButtonHidden:] */

undefined1 *
FUN_105abf38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ebbf0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105abf4b0; end: 105abf4d3; -[SCSpectaclesPairingHeaderViewModel copyWithZone:] */

undefined8 FUN_105abf4b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105abf4d4; end: 105abf56b; -[SCSpectaclesPairingHeaderViewModel hash] */

undefined8 * FUN_105abf4d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_58;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105abf63c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105abf648;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_105abf648;
            }
            goto LAB_105abf63c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105abf648:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105abf56c; end: 105abf663; -[SCSpectaclesPairingHeaderViewModel isEqual:] */

long FUN_105abf56c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105abf63c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105abf648;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105abf648;
            }
            goto LAB_105abf63c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105abf648:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105abf664; end: 105abf66b; -[SCSpectaclesPairingHeaderViewModel title] */

undefined8 FUN_105abf664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105abf66c; end: 105abf673; -[SCSpectaclesPairingHeaderViewModel subtitle] */

undefined8 FUN_105abf66c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105abf674; end: 105abf67b; -[SCSpectaclesPairingHeaderViewModel navButtonTitle] */

undefined8 FUN_105abf674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105abf67c; end: 105abf683; -[SCSpectaclesPairingHeaderViewModel navButtonAccessibilityId] */

undefined8 FUN_105abf67c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105abf684; end: 105abf68b; -[SCSpectaclesPairingHeaderViewModel isNavButtonHidden] */

undefined1 FUN_105abf684(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105abf68c; end: 105abf693; -[SCSpectaclesPairingHeaderViewModel isBackButtonHidden] */

undefined1 FUN_105abf68c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105abf694; end: 105abf6db; -[SCSpectaclesPairingHeaderViewModel .cxx_destruct] */

void FUN_105abf694(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105abf6dc; end: 105abf7e3; -[SCSpectaclesPairingFooterViewModel initWithIsTosHidden:tosText:isConfirmButtonHidden:isConfirmButtonLoading:confirmButtonTitle:isCancelButtonHidden:cancelButtonTitle:] */

undefined1 *
FUN_105abf6dc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ebbf8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105abf7e4; end: 105abf807; -[SCSpectaclesPairingFooterViewModel copyWithZone:] */

undefined8 FUN_105abf7e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105abf808; end: 105abf89f; -[SCSpectaclesPairingFooterViewModel hash] */

ulong * FUN_105abf808(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_105abf978:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105abf984;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(char *)((long)puVar3 + 10) == param_3[10])))) &&
       (*(char *)((long)puVar3 + 0xb) == param_3[0xb])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105abf984;
          }
          goto LAB_105abf978;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105abf984:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 105abf8a0; end: 105abf99f; -[SCSpectaclesPairingFooterViewModel isEqual:] */

long FUN_105abf8a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105abf978:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105abf984;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) &&
       (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105abf984;
          }
          goto LAB_105abf978;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105abf984:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105abf9a0; end: 105abf9a7; -[SCSpectaclesPairingFooterViewModel isTosHidden] */

undefined1 FUN_105abf9a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105abf9a8; end: 105abf9af; -[SCSpectaclesPairingFooterViewModel tosText] */

undefined8 FUN_105abf9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105abf9b0; end: 105abf9b7; -[SCSpectaclesPairingFooterViewModel isConfirmButtonHidden] */

undefined1 FUN_105abf9b0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105abf9b8; end: 105abf9bf; -[SCSpectaclesPairingFooterViewModel isConfirmButtonLoading] */

undefined1 FUN_105abf9b8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105abf9c0; end: 105abf9c7; -[SCSpectaclesPairingFooterViewModel confirmButtonTitle] */

undefined8 FUN_105abf9c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105abf9c8; end: 105abf9cf; -[SCSpectaclesPairingFooterViewModel isCancelButtonHidden] */

undefined1 FUN_105abf9c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 105abf9d0; end: 105abf9d7; -[SCSpectaclesPairingFooterViewModel cancelButtonTitle] */

undefined8 FUN_105abf9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105abf9d8; end: 105abfa13; -[SCSpectaclesPairingFooterViewModel .cxx_destruct] */

void FUN_105abf9d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105abfa14; end: 105abfb27; -[SCSpectaclesPairingStatusViewModel initWithTitle:body:bodyAccessibilityId:buttonTitle:isButtonHidden:] */

undefined1 *
FUN_105abfa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126ebc00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105abfb28; end: 105abfb4b; -[SCSpectaclesPairingStatusViewModel copyWithZone:] */

undefined8 FUN_105abfb28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105abfb4c; end: 105abfbdb; -[SCSpectaclesPairingStatusViewModel hash] */

undefined8 * FUN_105abfb4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105abfc9c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105abfca8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105abfca8;
            }
            goto LAB_105abfc9c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105abfca8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105abfbdc; end: 105abfcc3; -[SCSpectaclesPairingStatusViewModel isEqual:] */

long FUN_105abfbdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105abfc9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105abfca8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105abfca8;
            }
            goto LAB_105abfc9c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105abfca8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105abfcc4; end: 105abfccb; -[SCSpectaclesPairingStatusViewModel title] */

undefined8 FUN_105abfcc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105abfccc; end: 105abfcd3; -[SCSpectaclesPairingStatusViewModel body] */

undefined8 FUN_105abfccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105abfcd4; end: 105abfcdb; -[SCSpectaclesPairingStatusViewModel bodyAccessibilityId] */

undefined8 FUN_105abfcd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105abfcdc; end: 105abfce3; -[SCSpectaclesPairingStatusViewModel buttonTitle] */

undefined8 FUN_105abfcdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105abfce4; end: 105abfceb; -[SCSpectaclesPairingStatusViewModel isButtonHidden] */

undefined1 FUN_105abfce4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105abfcec; end: 105abfd33; -[SCSpectaclesPairingStatusViewModel .cxx_destruct] */

void FUN_105abfcec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105abfd34; end: 105abfdcf; -[SCSpectaclesPairingUserEventAnalyticsWrapper initWithAnalyticsLogger:pairingInfoProvider:] */

undefined1 *
FUN_105abfd34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebc08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105abfdd0; end: 105abfe27; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidStart] */

void FUN_105abfdd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abf80(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abfe28; end: 105abfe83; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingBeganScanning] */

void FUN_105abfe28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abdc0(uVar2,param_2,lVar1,0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abfe84; end: 105abff1b; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingBeganConnectingBLE] */

void FUN_105abfe84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abda0(uVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abe00(uVar3,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abff1c; end: 105abff73; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidConnectBLE] */

void FUN_105abff1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abde0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abff74; end: 105abffcb; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidSyncBLE] */

void FUN_105abff74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abe20(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105abffcc; end: 105abffcf; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingRequestsUnpair] */

void FUN_105abffcc(void)

{
  return;
}



/* Entry: 105abffd0; end: 105ac0027; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingBeganChoosingName] */

void FUN_105abffd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abf20(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac0028; end: 105ac002b; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingBeganRequestingLocation] */

void FUN_105ac0028(void)

{
  return;
}



/* Entry: 105ac002c; end: 105ac0083; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingBeganConnectingBTC] */

void FUN_105ac002c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf48c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b01a0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac0084; end: 105ac00db; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingBeganSettingUpBTC] */

void FUN_105ac0084(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf48c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0200(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac00dc; end: 105ac00df; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidShowBTPicker] */

void FUN_105ac00dc(void)

{
  return;
}


