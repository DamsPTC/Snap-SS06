/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a90e14; end: 105a91003; -[SCSpectaclesLensManagementCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90e14(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11272e780;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf6f6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(lVar3);
    _objc_release(lVar4);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11272e77c));
    lVar4 = param_3;
    func_0x00010c0943a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      _objc_initWeak(auStack_38,param_1);
      lVar4 = param_3;
      func_0x00010c0943a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      lVar3 = param_3;
      _objc_retain(param_3);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a91004; end: 105a9107b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a91004(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c071ae0();
    if (iVar1 != 0) {
      func_0x00010c1a9f00(*(undefined8 *)(lVar2 + _DAT_11272e77c));
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a9107c; end: 105a9108b; -[SCSpectaclesLensManagementCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a9107c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e780);
}



/* Entry: 105a9108c; end: 105a910cb; -[SCSpectaclesLensManagementCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9108c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e780,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e77c,0);
  return;
}



/* Entry: 105a910cc; end: 105a914c3; -[SCSpectaclesLensManagementExploreLensesCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105a910cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126eb9f0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010be62f40();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e784);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11272e784) = puVar2;
    _objc_release(uVar16);
    puVar2 = puVar1;
    func_0x00010be62f20();
    lVar17 = (long)_DAT_11272e788;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar16);
    puVar2 = puVar1;
    func_0x00010be62f00();
    lVar18 = (long)_DAT_11272e78c;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined8 **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    func_0x00010c16e060();
    func_0x00010c207380(0x3ff0000000000000,puVar3);
    func_0x00010c166c00(puVar3);
    func_0x00010bef6d60(puVar3);
    func_0x00010bef6d60(puVar3);
    func_0x00010bef6d60(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf49420(0x4072c00000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar16;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf49420(0x4051800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010bf49420(0x4065400000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar6);
    _objc_release(uVar16);
    _objc_release(uVar7);
    func_0x00010c219b60(puVar3);
    func_0x00010befbb60(puVar1);
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(puVar1);
    puVar8 = puVar6;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_98 = puVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_90 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493c0(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_6 = puVar14;
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  uVar16 = *(undefined8 *)(puVar3 + _DAT_11272e790);
  *(undefined8 **)(puVar3 + _DAT_11272e790) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar16);
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puVar1 = param_6;
  func_0x00010bf13c20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41600(puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c16e440(puVar3);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 105a914c4; end: 105a91567; -[SCSpectaclesLensManagementExploreLensesCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a914c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e790);
  *(undefined8 *)(param_1 + _DAT_11272e790) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar2 = param_3;
  func_0x00010bf13c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41600(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a91568; end: 105a91607; -[SCSpectaclesLensManagementExploreLensesCell _newExploreLensesLabel] */

undefined * FUN_105a91568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x000105a94b88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,4);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 105a91608; end: 105a916a7; -[SCSpectaclesLensManagementExploreLensesCell _newExploreLensesDescriptionLabel] */

undefined * FUN_105a91608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x000105a94ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,7);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 105a916a8; end: 105a9170f; -[SCSpectaclesLensManagementExploreLensesCell _newExploreLensesButton] */

undefined * FUN_105a916a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c20eaa0();
  func_0x000105a94b70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 105a91710; end: 105a9171f; -[SCSpectaclesLensManagementExploreLensesCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a91710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e790);
}



/* Entry: 105a91720; end: 105a9177f; -[SCSpectaclesLensManagementExploreLensesCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a91720(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e790,0);
  _objc_storeStrong(param_1 + _DAT_11272e78c,0);
  _objc_storeStrong(param_1 + _DAT_11272e788,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e784,0);
  return;
}



/* Entry: 105a91780; end: 105a9183f; -[SCSpectaclesLensManagementSectionHeader setViewModel:] */

void FUN_105a91780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c27f7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStyle__1126614d0,1);
  return;
}



/* Entry: 105a91840; end: 105a9184f; -[SCSpectaclesLensManagementSectionHeader viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a91840(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e794);
}



/* Entry: 105a91850; end: 105a91863; -[SCSpectaclesLensManagementSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a91850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e794,0);
  return;
}



/* Entry: 105a91864; end: 105a91983; -[SCSpectaclesManagePinLensController initWithCurrentDevice:delegate:unlockableNetworkManagerProvider:onDemandResourceFetching:] */

undefined8 *
FUN_105a91864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_50 = PTR_PTR_1126eb9f8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_48;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 5,puVar3);
    _objc_release(puVar3);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a91984; end: 105a91afb; -[SCSpectaclesManagePinLensController fetchLenses] */

void FUN_105a91984(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c281220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ae60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfab160(uVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 105a91afc; end: 105a91b43;  */

void FUN_105a91afc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a91b44; end: 105a91b47;  */

void FUN_105a91b44(void)

{
  return;
}



/* Entry: 105a91b48; end: 105a91bdf; -[SCSpectaclesManagePinLensController _lensGroups] */

undefined1 * FUN_105a91b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 unaff_x24;
  undefined8 uVar17;
  undefined8 unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  long unaff_x28;
  long lVar18;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [128];
  long lStack_1e0;
  long lStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar12 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6790;
  _objc_alloc();
  func_0x00010c0590e0();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_105a91be0;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar12);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)ppuVar12;
  func_0x00010bfcf760();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  puVar2 = puVar16;
  puStack_168 = puVar16;
  func_0x00010c281780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x28 = *plStack_150;
    do {
      puVar16 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != unaff_x28) {
          _objc_enumerationMutation(puVar2);
        }
        uVar4 = *(undefined8 *)(lStack_158 + (long)puVar16 * 8);
        func_0x00010bfe5e40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = uVar4;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        unaff_x26 = (undefined1 *)ppuVar12;
        func_0x00010c098240();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x26;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x26);
        unaff_x27 = (undefined1 *)0x0;
        if (puVar5 != (undefined1 *)0x0) {
          unaff_x26 = (undefined1 *)ppuVar12;
          func_0x00010c098240();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar13,param_2,unaff_x27);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
        }
        _objc_release(unaff_x25);
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_160,auStack_120,0x10);
      unaff_x24 = 0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined **)(puVar1 + 0x10) = puVar13;
  _objc_release(uVar4);
  func_0x00010bee3a80(puVar1,param_2,0);
  _objc_release(puStack_168);
  puVar3 = (undefined1 *)ppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_105a91e18;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(puVar3 + 0x10);
  lStack_1d0 = unaff_x28;
  puStack_1c8 = unaff_x27;
  puStack_1c0 = unaff_x26;
  uStack_1b8 = unaff_x25;
  uStack_1b0 = unaff_x24;
  puStack_1a8 = puVar2;
  puStack_1a0 = puVar16;
  puStack_198 = puVar13;
  puStack_190 = puVar1;
  puStack_188 = (undefined1 *)ppuVar12;
  ppuStack_180 = &puStack_40;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    puVar13 = (undefined *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lVar14 = *(long *)(puVar3 + 0x10);
    _objc_retain(lVar14);
    lVar6 = lVar14;
    func_0x00010bf52a60(lVar14,param_2,&uStack_2a0,auStack_260,0x10);
    if (lVar6 != 0) {
      lVar18 = *plStack_290;
      do {
        lVar15 = 0;
        do {
          if (*plStack_290 != lVar18) {
            _objc_enumerationMutation(lVar14);
          }
          uVar17 = *(undefined8 *)(lStack_298 + lVar15 * 8);
          uVar7 = *(undefined8 *)(puVar3 + 0x38);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar17;
          func_0x00010bfe5b40(uVar17);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bfe7d80(uVar7,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar7);
          puVar13 = PTR_PTR_1126c1e18;
          _objc_alloc(PTR_PTR_1126c1e18);
          uVar4 = uVar17;
          func_0x00010c0d4f60(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf43020();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar17;
          func_0x00010bf0ea80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052e80(puVar13,param_2,uVar4,uVar7,uVar8);
          _objc_release(uVar7);
          _objc_release(uVar17);
          _objc_release(uVar4);
          func_0x00010befa120(puVar1,param_2,puVar13);
          _objc_release(puVar13);
          _objc_release(uVar8);
          lVar15 = lVar15 + 1;
        } while (lVar6 != lVar15);
        lVar6 = lVar14;
        func_0x00010bf52a60(lVar14,param_2,&uStack_2a0,auStack_260,0x10);
      } while (lVar6 != 0);
    }
    _objc_release();
    func_0x000105a94bd0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c1e20;
    _objc_alloc();
    puVar9 = puVar13;
    func_0x000105a94bb8();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf51e00();
    func_0x00010c0535c0(puVar13,param_2,puVar9,lVar14,puVar10,0);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar14);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return puVar13;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(puVar1 + 0x10);
  func_0x00010bf529e0();
  if ((lVar6 == 0) || ((puVar1[0x18] & 1) != 0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c1e28;
    _objc_alloc(PTR_PTR_1126c1e28);
    func_0x00010bff6360();
    func_0x00010befa120(puVar1,param_2,puVar9);
    puVar10 = PTR_PTR_1126c1e20;
    _objc_alloc(PTR_PTR_1126c1e20);
    puVar11 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c0535c0(puVar10,param_2,0,0,puVar11,1);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar1);
  }
  return puVar10;
}



/* Entry: 105a91be0; end: 105a91e17; -[SCSpectaclesManagePinLensController _handlePinnedLensesWithUnlockablesResponse:] */

undefined * FUN_105a91be0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  long lVar13;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
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
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bfcf760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar1 = puVar11;
  puStack_138 = puVar11;
  func_0x00010c281780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    unaff_x28 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(puVar1);
        }
        uVar2 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
        func_0x00010bfe5e40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = uVar2;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        unaff_x26 = param_3;
        func_0x00010c098240();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = unaff_x26;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x26);
        unaff_x27 = (undefined *)0x0;
        if (puVar3 != (undefined *)0x0) {
          unaff_x26 = param_3;
          func_0x00010c098240();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8,param_2,unaff_x27);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
        }
        _objc_release(unaff_x25);
        puVar11 = puVar11 + 1;
      } while (puVar7 != puVar11);
      puVar7 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x24 = 0;
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar8;
  _objc_release(uVar2);
  func_0x00010bee3a80(param_1,param_2,0);
  _objc_release(puStack_138);
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105a91e18;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(puVar7 + 0x10);
  lStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  puStack_178 = puVar1;
  puStack_170 = puVar11;
  puStack_168 = puVar8;
  lStack_160 = param_1;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    puVar8 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lVar9 = *(long *)(puVar7 + 0x10);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00010bf52a60(lVar9,param_2,&uStack_270,auStack_230,0x10);
    if (lVar4 != 0) {
      lVar13 = *plStack_260;
      do {
        lVar10 = 0;
        do {
          if (*plStack_260 != lVar13) {
            _objc_enumerationMutation(lVar9);
          }
          uVar12 = *(undefined8 *)(lStack_268 + lVar10 * 8);
          uVar5 = *(undefined8 *)(puVar7 + 0x38);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar12;
          func_0x00010bfe5b40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bfe7d80(uVar5,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(uVar5);
          puVar8 = PTR_PTR_1126c1e18;
          _objc_alloc(PTR_PTR_1126c1e18);
          uVar2 = uVar12;
          func_0x00010c0d4f60(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf43020();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar12;
          func_0x00010bf0ea80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052e80(puVar8,param_2,uVar2,uVar5,uVar6);
          _objc_release(uVar5);
          _objc_release(uVar12);
          _objc_release(uVar2);
          func_0x00010befa120(puVar11,param_2,puVar8);
          _objc_release(puVar8);
          _objc_release(uVar6);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar9;
        func_0x00010bf52a60(lVar9,param_2,&uStack_270,auStack_230,0x10);
      } while (lVar4 != 0);
    }
    _objc_release();
    func_0x000105a94bd0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c1e20;
    _objc_alloc();
    puVar1 = puVar8;
    func_0x000105a94bb8();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar11;
    func_0x00010bf51e00();
    func_0x00010c0535c0(puVar8,param_2,puVar1,lVar9,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(lVar9);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return puVar8;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(puVar11 + 0x10);
  func_0x00010bf529e0();
  if ((lVar4 == 0) || ((puVar11[0x18] & 1) != 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c1e28;
    _objc_alloc(PTR_PTR_1126c1e28);
    func_0x00010bff6360();
    func_0x00010befa120(puVar11,param_2,puVar1);
    puVar7 = PTR_PTR_1126c1e20;
    _objc_alloc(PTR_PTR_1126c1e20);
    puVar3 = puVar11;
    func_0x00010bf51e00(puVar11);
    func_0x00010c0535c0(puVar7,param_2,0,0,puVar3,1);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar11);
  }
  return puVar7;
}



/* Entry: 105a91e18; end: 105a920a7; -[SCSpectaclesManagePinLensController _newLensManagementSectionViewModel] */

undefined * FUN_105a91e18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
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
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar10 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar10);
    lVar1 = lVar10;
    func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar1 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar10);
          }
          uVar12 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          uVar3 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar12;
          func_0x00010bfe5b40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010bfe7d80(uVar3,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar3);
          puVar9 = PTR_PTR_1126c1e18;
          _objc_alloc(PTR_PTR_1126c1e18);
          uVar4 = uVar12;
          func_0x00010c0d4f60(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf43020();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar12;
          func_0x00010bf0ea80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052e80(puVar9,param_2,uVar4,uVar3,uVar5);
          _objc_release(uVar3);
          _objc_release(uVar12);
          _objc_release(uVar4);
          func_0x00010befa120(puVar2,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(uVar5);
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        lVar1 = lVar10;
        func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar1 != 0);
    }
    _objc_release();
    func_0x000105a94bd0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c1e20;
    _objc_alloc();
    puVar6 = puVar9;
    func_0x000105a94bb8();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf51e00();
    func_0x00010c0535c0(puVar9,param_2,puVar6,lVar10,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar10);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(puVar2 + 0x10);
  func_0x00010bf529e0();
  if ((lVar1 == 0) || ((puVar2[0x18] & 1) != 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c1e28;
    _objc_alloc(PTR_PTR_1126c1e28);
    func_0x00010bff6360();
    func_0x00010befa120(puVar2,param_2,puVar6);
    puVar7 = PTR_PTR_1126c1e20;
    _objc_alloc(PTR_PTR_1126c1e20);
    puVar8 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c0535c0(puVar7,param_2,0,0,puVar8,1);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
  return puVar7;
}



/* Entry: 105a920a8; end: 105a921a7; -[SCSpectaclesManagePinLensController _newExploreLensesSectionViewModel] */

undefined * FUN_105a920a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if ((lVar1 == 0) || ((*(byte *)(param_1 + 0x18) & 1) != 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c1e28;
    _objc_alloc(PTR_PTR_1126c1e28);
    func_0x00010bff6360();
    func_0x00010befa120(puVar3,param_2,puVar5);
    puVar2 = PTR_PTR_1126c1e20;
    _objc_alloc(PTR_PTR_1126c1e20);
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c0535c0(puVar2,param_2,0,0,puVar6,1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return puVar2;
}



/* Entry: 105a921a8; end: 105a921b3; -[SCSpectaclesManagePinLensController setEditing:] */

void FUN_105a921a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModelsAndNotifyForSec_112596848,0)
  ;
  return;
}



/* Entry: 105a921b4; end: 105a9228b; -[SCSpectaclesManagePinLensController _updateViewModelsAndNotifyForSection:] */

void FUN_105a921b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be63160();
  if (lVar2 != 0) {
    func_0x00010c066b00(puVar1,param_2,lVar2,0);
  }
  lVar3 = param_1;
  func_0x00010be62f60(param_1);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248fe0();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a9228c; end: 105a9249f; -[SCSpectaclesManagePinLensController removeLensAtIndex:] */

void FUN_105a9228c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bee3a80(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c281220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b4ca0(uVar3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105a924a0;
  puStack_80 = &UNK_110864d98;
  _objc_retain(uVar3);
  uStack_78 = uVar3;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010c281da0(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 105a924a0; end: 105a924f7;  */

void FUN_105a924a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a924f8; end: 105a92587; -[SCSpectaclesManagePinLensController _notifyLensDataUpdate] */

void FUN_105a924f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a92588; end: 105a9262b; -[SCSpectaclesManagePinLensController moveLensAtIndex:toIndex:] */

void FUN_105a92588(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_3 != param_4) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 < param_3) {
      param_3 = param_3 + 1;
    }
    else {
      param_4 = param_4 + 1;
    }
    func_0x00010c066b00(*(undefined8 *)(param_1 + 0x10),param_2,uVar1,param_4);
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee3a80(param_1,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a9262c; end: 105a92687; -[SCSpectaclesManagePinLensController .cxx_destruct] */

void FUN_105a9262c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a92688; end: 105a929ff; -[SCSpectaclesManagePinLensEmptyStateView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105a92688(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &uStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126eba00;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined1 *)puVar1;
  func_0x00010be63240();
  uVar13 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e7b4);
  *(undefined1 **)((long)puVar1 + (long)_DAT_11272e7b4) = puVar2;
  _objc_release(uVar13);
  puVar2 = (undefined1 *)puVar1;
  func_0x00010be63220();
  lVar14 = (long)_DAT_11272e7b8;
  uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
  *(undefined1 **)((long)puVar1 + lVar14) = puVar2;
  _objc_release(uVar13);
  puVar2 = (undefined1 *)puVar1;
  func_0x00010be62f00();
  lVar15 = (long)_DAT_11272e7bc;
  uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
  *(undefined1 **)((long)puVar1 + lVar15) = puVar2;
  _objc_release(uVar13);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  func_0x00010c16e060();
  func_0x00010c207380(0x4014000000000000,puVar3);
  func_0x00010c166c00(puVar3);
  func_0x00010bef6d60(puVar3);
  func_0x00010bef6d60(puVar3);
  func_0x00010bef6d60(puVar3);
  func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf49420(0x4072c00000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = uVar13;
  uVar5 = *(undefined8 *)((long)puVar1 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf49420(0x4051800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)((long)puVar1 + lVar15);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bf49420(0x4065400000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar6);
  _objc_release(uVar13);
  _objc_release(uVar7);
  func_0x00010befbb60(puVar1);
  func_0x00010c219b60(puVar3);
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf49420(0x4079000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_90 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar1;
  func_0x00010bf34860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar12 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar3 = puVar12;
  func_0x000105a94b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar12);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar12);
  _objc_release(puVar3);
  func_0x00010c21ad00(puVar12);
  func_0x00010c213040(puVar12);
  func_0x00010c1cfce0(puVar12);
  return puVar12;
}



/* Entry: 105a92a00; end: 105a92aa3; -[SCSpectaclesManagePinLensEmptyStateView _newNoLensesPinnedLabel] */

undefined * FUN_105a92a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x000105a94b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,0x16);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 105a92aa4; end: 105a92b47; -[SCSpectaclesManagePinLensEmptyStateView _newNoLensesPinnedDescriptionLabel] */

undefined * FUN_105a92aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x000105a94b58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,7);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 105a92b48; end: 105a92bd3; -[SCSpectaclesManagePinLensEmptyStateView _newExploreLensesButton] */

undefined * FUN_105a92b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c20eaa0();
  func_0x000105a94be8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__tappedMyLensesButton__11252c2a8,0x40);
  return puVar1;
}



/* Entry: 105a92bd4; end: 105a92c07; -[SCSpectaclesManagePinLensEmptyStateView _tappedMyLensesButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a92bd4(long param_1)

{
  param_1 = param_1 + _DAT_11272e7c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10ca60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a92c08; end: 105a92c27; -[SCSpectaclesManagePinLensEmptyStateView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a92c08(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272e7c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a92c28; end: 105a92c3b; -[SCSpectaclesManagePinLensEmptyStateView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a92c28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272e7c0,param_3);
  return;
}



/* Entry: 105a92c3c; end: 105a92c97; -[SCSpectaclesManagePinLensEmptyStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a92c3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e7c0);
  _objc_storeStrong(param_1 + _DAT_11272e7bc,0);
  _objc_storeStrong(param_1 + _DAT_11272e7b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e7b4,0);
  return;
}



/* Entry: 105a92c98; end: 105a934a7; -[SCSpectaclesManagePinLensViewController initWithCurrentDevice:delegate:lensCreatorProfileScopeExposer:lensCreatorProfileScopeServices:userSession:unlockableNetworkManagerProvider:onDemandResourceFetching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105a92c98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
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
  lStack_110 = param_3;
  uStack_100 = param_5;
  uStack_f8 = param_6;
  uStack_f0 = param_8;
  uStack_e8 = param_7;
  _objc_retain(param_3);
  _objc_initWeak(auStack_c8,param_4);
  _objc_retain(uStack_100);
  _objc_retain(uStack_f8);
  _objc_retain(uStack_e8);
  _objc_retain(uStack_f0);
  puStack_108 = param_9;
  _objc_retain(param_9);
  puStack_d0 = PTR_PTR_1126eba08;
  puVar1 = &uStack_d8;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    puVar2 = puVar1;
    func_0x00010c189400(puVar1);
    FUN_105a94b28();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(puVar2);
    puVar3 = auStack_c8;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272e7c8,puVar3);
    _objc_release(puVar3);
    uVar13 = uStack_100;
    lVar14 = (long)_DAT_11272e7cc;
    _objc_retain(uStack_100);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = uVar13;
    _objc_release(uVar4);
    uVar13 = uStack_f8;
    lVar14 = (long)_DAT_11272e7d0;
    _objc_retain(uStack_f8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = uVar13;
    _objc_release(uVar4);
    uVar13 = uStack_e8;
    lVar14 = (long)_DAT_11272e7d4;
    _objc_retain(uStack_e8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = uVar13;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126c1e30;
    _objc_alloc();
    func_0x00010c006fc0();
    uVar13 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e7d8);
    *(undefined **)((long)puVar1 + (long)_DAT_11272e7d8) = puVar5;
    _objc_release(uVar13);
    puVar5 = PTR_PTR_1126c1e38;
    _objc_alloc();
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),uVar4,uVar15);
    lVar14 = (long)_DAT_11272e7dc;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar5;
    _objc_release(uVar13);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar2 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf31fa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)((long)puVar1 + lVar14);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067a20(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lStack_e0 = (long)_DAT_11272e7e0;
    uVar13 = *(undefined8 *)((long)puVar1 + lStack_e0);
    *(undefined **)((long)puVar1 + lStack_e0) = puVar5;
    _objc_release(uVar13);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lStack_e0));
    _objc_release(puVar5);
    puVar2 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar5;
    puVar2 = puVar1;
    uStack_120 = uVar13;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar2;
    func_0x00010bfb68e0(puVar2);
    uVar13 = uStack_120;
    func_0x00010bf49420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_168 = uVar13;
    uStack_130 = uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar2;
    func_0x00010bfb68e0(puVar2);
    uVar13 = uStack_130;
    func_0x00010bf49420(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar13;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    puStack_138 = (undefined *)uVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_148 = uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uStack_148;
    puStack_150 = puVar2;
    func_0x00010bf493c0(0x405e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar13;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_158 = uVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar13;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_160);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar13);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(uVar15);
    _objc_release(uStack_158);
    _objc_release(puStack_150);
    _objc_release(puStack_140);
    _objc_release(uStack_148);
    _objc_release(puStack_138);
    _objc_release(puStack_128);
    _objc_release(uStack_130);
    _objc_release(uStack_168);
    _objc_release(puStack_118);
    _objc_release(uStack_120);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lStack_e0));
    puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar1 + lStack_e0);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = (undefined8 *)uVar13;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar13;
    uVar4 = *(undefined8 *)((long)puVar1 + lStack_e0);
    uStack_120 = uVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = (undefined8 *)uVar4;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar4;
    uVar15 = *(undefined8 *)((long)puVar1 + lStack_e0);
    uStack_130 = uVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar4;
    uVar7 = *(undefined8 *)((long)puVar1 + lStack_e0);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    param_9 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    func_0x00010bf493c0(0xc044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_138);
    _objc_release(puVar5);
    _objc_release(uVar13);
    _objc_release(param_9);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(uVar15);
    _objc_release(uStack_130);
    _objc_release(puStack_128);
    _objc_release(uStack_120);
    _objc_release(puStack_118);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lStack_e0));
  }
  _objc_release(puStack_108);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_c8);
  lVar14 = lStack_110;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  lVar10 = lVar14;
  __Unwind_Resume();
  plVar12 = &lStack_1a0;
  pcStack_178 = FUN_105a934a8;
  lVar11 = lVar10 + _DAT_11272e7c8;
  puStack_190 = param_9;
  lStack_188 = lVar14;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c248f80();
  _objc_release(lVar11);
  puStack_198 = PTR_PTR_1126eba08;
  lStack_1a0 = lVar10;
  _objc_msgSendSuper2(&lStack_1a0,PTR_s_dealloc_112525b20);
  return plVar12;
}



/* Entry: 105a934a8; end: 105a93507; -[SCSpectaclesManagePinLensViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a934a8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11272e7c8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c248f80();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126eba08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a93508; end: 105a93543; -[SCSpectaclesManagePinLensViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93508(long param_1)

{
  param_1 = param_1 + _DAT_11272e7c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a93544; end: 105a936ff; -[SCSpectaclesManagePinLensViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93544(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0);
  func_0x00010c1c82c0(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar3 = PTR_PTR_1126c1e40;
  _objc_opt_class(PTR_PTR_1126c1e40);
  puVar4 = PTR_PTR_1126c1e40;
  _objc_opt_class(PTR_PTR_1126c1e40);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar2,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126c1e48;
  _objc_opt_class(PTR_PTR_1126c1e48);
  puVar4 = PTR_PTR_1126c1e48;
  _objc_opt_class(PTR_PTR_1126c1e48);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar2,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126c1e50;
  _objc_opt_class(PTR_PTR_1126c1e50);
  uVar6 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  puVar4 = PTR_PTR_1126c1e50;
  _objc_opt_class(PTR_PTR_1126c1e50);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(puVar2,param_2,puVar3,uVar6,puVar4);
  _objc_release(puVar4);
  func_0x00010c189840(puVar2,param_2,param_1);
  func_0x00010c18b5e0(puVar2,param_2,param_1);
  func_0x00010bf40780(param_1);
  func_0x00010c181f80(puVar2);
  func_0x00010c1916a0(puVar2,param_2,1);
  func_0x00010c191640(puVar2,param_2,param_1);
  func_0x00010c192000(puVar2,param_2,param_1);
  lVar5 = (long)_DAT_11272e7e4;
  _objc_retain(puVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a93700; end: 105a93713; -[SCSpectaclesManagePinLensViewController collectionViewContentInsets] */

undefined8 FUN_105a93700(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 105a93714; end: 105a93747; -[SCSpectaclesManagePinLensViewController viewDidLoad] */

void FUN_105a93714(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eba08;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 105a93748; end: 105a93797; -[SCSpectaclesManagePinLensViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93748(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eba08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bfa7f60(*(undefined8 *)(param_1 + _DAT_11272e7d8));
  return;
}



/* Entry: 105a93798; end: 105a9380b; -[SCSpectaclesManagePinLensViewController _showTrashCan:] */

void FUN_105a93798(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105a9380c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                      &puStack_40,0);
  return;
}



/* Entry: 105a9380c; end: 105a93833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9380c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e7e0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105a93834; end: 105a938b7; -[SCSpectaclesManagePinLensViewController _growTrashIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93834(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + _DAT_11272e7c4) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11272e7c4) = 1;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_105a938b8;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fe0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 105a938b8; end: 105a93913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a938b8(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff8000000000000,0x3ff8000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e7e0),param_2,
                      &uStack_80);
  return;
}



/* Entry: 105a93914; end: 105a939df; -[SCSpectaclesManagePinLensViewController _shrinkTrashIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93914(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + _DAT_11272e7c4) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11272e7c4) = 0;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    uStack_28 = 0x105a93998;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fe0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 105a939e0; end: 105a93ab3; -[SCSpectaclesManagePinLensViewController presentLensCreatorProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a939e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b6560;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e7d4);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000105a94be8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf430e0(puVar2,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272e7d0);
  func_0x00010bf232e0(uVar3,param_2,puVar2,6,param_1,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11272e7cc),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a93ab4; end: 105a93b7f; -[SCSpectaclesManagePinLensViewController spectaclesManagePinLensController:didUpdateSectionViewModels:forSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93ab4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e7dc);
  lVar1 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010c1a7f60(uVar2,param_2,lVar1 != 0);
  lVar3 = (long)_DAT_11272e7e4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar1 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010c1a7f60(uVar2,param_2,lVar1 == 0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e7e8);
  *(long *)(param_1 + _DAT_11272e7e8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if (param_5 == 0) {
    func_0x00010c128b60(uVar2);
  }
  else {
    func_0x00010c128fa0(uVar2,param_2,param_5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105a93b80; end: 105a93bbb; -[SCSpectaclesManagePinLensViewController spectaclesManagePinLensControllerDidUpdateLensData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93b80(long param_1)

{
  param_1 = param_1 + _DAT_11272e7c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a93bbc; end: 105a93c07; -[SCSpectaclesManagePinLensViewController _isPinnedLensesSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105a93bbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11272e7e8);
  func_0x00010c0dfd40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c156900();
  _objc_release(lVar1);
  return lVar2 == 0;
}



/* Entry: 105a93c08; end: 105a93c33; -[SCSpectaclesManagePinLensViewController collectionView:shouldHighlightItemAtIndexPath:] */

void FUN_105a93c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1554e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be42a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isPinnedLensesSection__11256e430,param_4);
  return;
}



/* Entry: 105a93c34; end: 105a93c43; -[SCSpectaclesManagePinLensViewController numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e7e8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105a93c44; end: 105a93caf; -[SCSpectaclesManagePinLensViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a93c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e7e8);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105a93cb0; end: 105a93e7b; -[SCSpectaclesManagePinLensViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93cb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_4);
  uVar8 = *(ulong *)(param_1 + _DAT_11272e7e8);
  _objc_retain(param_3);
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_4);
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar8);
  puVar4 = PTR_PTR_1126c1e18;
  _objc_opt_class(PTR_PTR_1126c1e18);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  ppuVar1 = &PTR_PTR_1126c1e40;
  if ((uVar2 & 1) == 0) {
    ppuVar1 = &PTR_PTR_1126c1e48;
  }
  puVar4 = *ppuVar1;
  _objc_opt_class(puVar4);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf6e0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010bde7700(param_1);
  func_0x00010c20eaa0(lVar5);
  puVar4 = PTR_DAT_1126a4fe8;
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010010fab4(lVar5,puVar4);
  _objc_release(lVar5);
  puVar4 = PTR_DAT_1126a4fe8;
  if ((int)lVar6 != 0 && lVar5 != 0) {
    _objc_retain(lVar5);
    lVar7 = lVar5;
    func_0x00010010fab4(lVar5,puVar4);
    lVar6 = lVar5;
    if ((int)lVar7 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(lVar5);
    func_0x00010c2226c0(lVar6);
    _objc_release(lVar6);
  }
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105a93e7c; end: 105a93f73; -[SCSpectaclesManagePinLensViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a93e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c1e50;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e120(param_3,param_2,param_4,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272e7e8);
  uVar3 = param_5;
  func_0x00010c1554e0(param_5);
  _objc_release(param_5);
  func_0x00010c0dfd40(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar2,param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a93f74; end: 105a9404f; -[SCSpectaclesManagePinLensViewController _getCellHeightForCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a93f74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar3 = *(long *)(param_2 + _DAT_11272e7e8);
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c156900();
  puVar1 = PTR_PTR_1126b2780;
  if (lVar2 == 1) {
    uVar4 = 0x406b800000000000;
  }
  else {
    uVar4 = 0;
    if (lVar2 == 0) {
      func_0x00010bddc3e0(param_2);
      func_0x00010bde7700(param_2);
      func_0x00010bfe0740(puVar1);
      uVar4 = param_1;
    }
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 105a94050; end: 105a940b7; -[SCSpectaclesManagePinLensViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_105a94050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_8);
  func_0x00010bfb68e0(param_6);
  func_0x00010be1db00(param_4,param_5,param_8);
  _objc_release(param_8);
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 105a940b8; end: 105a941c7; -[SCSpectaclesManagePinLensViewController _cellStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a940b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + _DAT_11272e7e8);
  func_0x00010c1554e0(param_3);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_3);
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c1e18;
  _objc_opt_class(PTR_PTR_1126c1e18);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010bf6f6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = 8;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105a941c8; end: 105a94283; -[SCSpectaclesManagePinLensViewController _containerStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105a941c8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c142240();
  uVar5 = *(ulong *)(param_1 + _DAT_11272e7e8);
  func_0x00010c1554e0(param_3);
  _objc_release(param_3);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar4 <= lVar2 + 1U) {
    uVar1 = 4;
  }
  if (lVar2 == 0) {
    uVar1 = uVar1 + 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar5);
  auVar6._8_8_ = uVar1 | 10;
  auVar6._0_8_ = 1;
  return auVar6;
}



/* Entry: 105a94284; end: 105a943d3; -[SCSpectaclesManagePinLensViewController collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105a94284(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_6);
  lVar5 = (long)_DAT_11272e7e8;
  lVar2 = *(long *)(param_4 + lVar5);
  func_0x00010c0dfd40(lVar2,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_4 + lVar5);
    func_0x00010c0dfd40(lVar4,param_5,param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 == 0) {
      param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
      param_1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      goto LAB_105a94398;
    }
  }
  else {
    _objc_release();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_4 + lVar5);
  func_0x00010c0dfd40(lVar2,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_6);
  puVar1 = PTR_PTR_1126b78f0;
  lVar3 = lVar2;
  func_0x00010c260dc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe09e0(puVar1,param_5,lVar3 != 0);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_105a94398:
  _objc_release(param_6);
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 105a943d4; end: 105a94513; -[SCSpectaclesManagePinLensViewController collectionView:itemsForBeginningDragSession:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a943d4(int param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c1554e0(param_5);
  func_0x00010be42a40();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    lVar1 = param_3;
    func_0x00010bf33b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
    _objc_alloc(PTR__OBJC_CLASS___NSItemProvider_1126b3ab0);
    func_0x00010c030760();
    puVar3 = PTR__OBJC_CLASS___UIDragItem_1126c1e58;
    _objc_alloc();
    func_0x00010c020340();
    func_0x00010c1bf200();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bebb8e0();
                    /* WARNING: Could not recover jumptable at 0x00010c193b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + _DAT_11272e7d8),PTR_s_setEditing__1126428e0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a94514; end: 105a94547; -[SCSpectaclesManagePinLensViewController collectionView:dragSessionWillBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a94514(long param_1,undefined8 param_2)

{
  func_0x00010bebb8e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c193b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e7d8),PTR_s_setEditing__1126428e0,1);
  return;
}



/* Entry: 105a94548; end: 105a9457b; -[SCSpectaclesManagePinLensViewController collectionView:dragSessionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a94548(long param_1,undefined8 param_2)

{
  func_0x00010bebb8e0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c193b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e7d8),PTR_s_setEditing__1126428e0,0);
  return;
}



/* Entry: 105a9457c; end: 105a94583; -[SCSpectaclesManagePinLensViewController collectionView:dragSessionIsRestrictedToDraggingApplication:] */

undefined8 FUN_105a9457c(void)

{
  return 1;
}



/* Entry: 105a94584; end: 105a94657; -[SCSpectaclesManagePinLensViewController collectionView:dragPreviewParametersForItemAtIndexPath:] */

void FUN_105a94584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIDragPreviewParameters_1126c1e60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010bf33b60(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar3 = uVar2;
  func_0x00010c27f880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf19a00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223ba0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a94658; end: 105a946eb; -[SCSpectaclesManagePinLensViewController _isDropSessionOverTrashIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a94658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3,param_2,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11272e7e0));
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 105a946ec; end: 105a948ab; -[SCSpectaclesManagePinLensViewController collectionView:performDropWithCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a946ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c084fc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c247840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c15fac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be3fcc0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = param_4;
    func_0x00010bf6ec80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11272e7d8);
      lVar1 = lVar3;
      func_0x00010c142240(lVar3);
      lVar2 = param_4;
      func_0x00010bf6ec80(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c142240();
      func_0x00010c0d1600(uVar6,param_2,lVar1,lVar4);
      _objc_release(lVar2);
      lVar1 = param_4;
      func_0x00010c084fc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf89640();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010bf6ec80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8aa40(param_4,param_2,lVar4,lVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11272e7d8);
    lVar1 = lVar3;
    func_0x00010c142240(lVar3);
    func_0x00010c12cea0(uVar6,param_2,lVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a948ac; end: 105a9494b; -[SCSpectaclesManagePinLensViewController collectionView:dropSessionDidUpdate:withDestinationIndexPath:] */

void FUN_105a948ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be3fcc0(param_1,param_2,param_4);
  if ((int)uVar1 == 0) {
    func_0x00010bebbee0(param_1);
    if ((param_5 != 0) && (lVar2 = param_5, func_0x00010c1554e0(), lVar2 == 0)) {
      func_0x00010c142240(param_5);
    }
  }
  else {
    func_0x00010be24c00(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68);
  func_0x00010c00e7c0();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a9494c; end: 105a94a53; -[SCSpectaclesManagePinLensViewController collectionView:canHandleDropSession:] */

uint FUN_105a9494c(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long in_x3;
  long lVar9;
  
  _objc_retain(in_x3);
  lVar2 = in_x3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c09dcc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = in_x3;
    func_0x00010c084fc0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c09dcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c1e40;
    _objc_opt_class(PTR_PTR_1126c1e40);
    lVar9 = lVar7;
    _objc_opt_isKindOfClass(lVar7,puVar8);
    uVar1 = (uint)lVar9;
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(in_x3);
  return uVar1 & 1;
}



/* Entry: 105a94a54; end: 105a94a7b; -[SCSpectaclesManagePinLensViewController lensCreatorProfiledDismissedWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a94a54(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11272e7cc));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105a94a7c; end: 105a94b27; -[SCSpectaclesManagePinLensViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a94a7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e7c8);
  _objc_storeStrong(param_1 + _DAT_11272e7d4,0);
  _objc_storeStrong(param_1 + _DAT_11272e7d0,0);
  _objc_storeStrong(param_1 + _DAT_11272e7cc,0);
  _objc_storeStrong(param_1 + _DAT_11272e7e0,0);
  _objc_storeStrong(param_1 + _DAT_11272e7e8,0);
  _objc_storeStrong(param_1 + _DAT_11272e7e4,0);
  _objc_storeStrong(param_1 + _DAT_11272e7dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e7d8,0);
  return;
}



/* Entry: 105a94b28; end: 105a94bff;  */

void FUN_105a94b28(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1ab78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1ab78,
                      &PTR____CFConstantStringClassReference_110e1ab98,0);
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



/* Entry: 105a94c00; end: 105a94ccb; -[SCSpectaclesLensManagementCellViewModel initWithTitle:detailText:lensIconFuture:] */

undefined1 *
FUN_105a94c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eba10;
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



/* Entry: 105a94ccc; end: 105a94cef; -[SCSpectaclesLensManagementCellViewModel copyWithZone:] */

undefined8 FUN_105a94ccc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a94cf0; end: 105a94d6f; -[SCSpectaclesLensManagementCellViewModel hash] */

undefined8 * FUN_105a94cf0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105a94e08:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a94e14;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105a94e14;
          }
          goto LAB_105a94e08;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105a94e14:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105a94d70; end: 105a94e2f; -[SCSpectaclesLensManagementCellViewModel isEqual:] */

long FUN_105a94d70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a94e08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a94e14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105a94e14;
          }
          goto LAB_105a94e08;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105a94e14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a94e30; end: 105a94e37; -[SCSpectaclesLensManagementCellViewModel title] */

undefined8 FUN_105a94e30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a94e38; end: 105a94e3f; -[SCSpectaclesLensManagementCellViewModel detailText] */

undefined8 FUN_105a94e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a94e40; end: 105a94e47; -[SCSpectaclesLensManagementCellViewModel lensIconFuture] */

undefined8 FUN_105a94e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a94e48; end: 105a94e83; -[SCSpectaclesLensManagementCellViewModel .cxx_destruct] */

void FUN_105a94e48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a94e84; end: 105a94efb; -[SCSpectaclesLensManagementExploreLensesCellViewModel initWithBackground:] */

undefined1 * FUN_105a94e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eba18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a94efc; end: 105a94f1f; -[SCSpectaclesLensManagementExploreLensesCellViewModel copyWithZone:] */

undefined8 FUN_105a94efc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a94f20; end: 105a94f27; -[SCSpectaclesLensManagementExploreLensesCellViewModel hash] */

void FUN_105a94f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105a94f28; end: 105a94fb7; -[SCSpectaclesLensManagementExploreLensesCellViewModel isEqual:] */

long FUN_105a94f28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a94f9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105a94f9c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105a94f9c;
    }
  }
  lVar3 = 1;
LAB_105a94f9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a94fb8; end: 105a94fbf; -[SCSpectaclesLensManagementExploreLensesCellViewModel background] */

undefined8 FUN_105a94fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a94fc0; end: 105a94fcb; -[SCSpectaclesLensManagementExploreLensesCellViewModel .cxx_destruct] */

void FUN_105a94fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a94fcc; end: 105a950b3; -[SCSpectaclesLensManagementSectionViewModel initWithTitle:subtitle:cellViewModels:sectionType:] */

undefined1 *
FUN_105a94fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eba20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a950b4; end: 105a950d7; -[SCSpectaclesLensManagementSectionViewModel copyWithZone:] */

undefined8 FUN_105a950b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a950d8; end: 105a9515b; -[SCSpectaclesLensManagementSectionViewModel hash] */

undefined8 * FUN_105a950d8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105a95204:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105a95210;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_105a95210;
          }
          goto LAB_105a95204;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105a95210:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105a9515c; end: 105a9522b; -[SCSpectaclesLensManagementSectionViewModel isEqual:] */

long FUN_105a9515c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a95204:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a95210;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105a95210;
          }
          goto LAB_105a95204;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105a95210:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a9522c; end: 105a95233; -[SCSpectaclesLensManagementSectionViewModel title] */

undefined8 FUN_105a9522c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a95234; end: 105a9523b; -[SCSpectaclesLensManagementSectionViewModel subtitle] */

undefined8 FUN_105a95234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a9523c; end: 105a95243; -[SCSpectaclesLensManagementSectionViewModel cellViewModels] */

undefined8 FUN_105a9523c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a95244; end: 105a9524b; -[SCSpectaclesLensManagementSectionViewModel sectionType] */

undefined8 FUN_105a95244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a9524c; end: 105a95287; -[SCSpectaclesLensManagementSectionViewModel .cxx_destruct] */

void FUN_105a9524c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a95288; end: 105a9552b; -[SCSpectaclesOTAUpdatePageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a95288(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11272e80c;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    lVar1 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf48720();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar5;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0eddc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126c1e70;
    _objc_alloc(PTR_PTR_1126c1e70);
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar3 = lVar10;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11272e810;
    _objc_loadWeakRetained(lVar1);
    lVar7 = lVar1;
    func_0x00010bfb0bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00be00(puVar6,param_2,lVar5,param_1,lVar4,lVar8,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar10);
    param_1 = param_1 + _DAT_11272e814;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 105a9552c; end: 105a955b7; -[SCSpectaclesOTAUpdatePageEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9552c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11272e814;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126eba28;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


