/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ccfadc; end: 105ccfae3; -[SCMemoriesContentUnderstandingSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105ccfadc(void)

{
  return 1;
}



/* Entry: 105ccfae4; end: 105ccfaf3; -[SCMemoriesContentUnderstandingSettingsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccfae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733e94),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105ccfaf4; end: 105ccfca7; -[SCMemoriesContentUnderstandingSettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccfaf4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5a18;
  _objc_opt_class(PTR_PTR_1126b5a18);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126b5a18;
    _objc_alloc(PTR_PTR_1126b5a18);
    func_0x00010c040040();
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1faee0(param_3);
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112733e94);
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105ccfca8; end: 105ccfd37; -[SCMemoriesContentUnderstandingSettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccfca8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0840e0();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + _DAT_112733e9c) = 1;
  }
  lVar1 = param_4;
  func_0x00010c0840e0();
  if (lVar1 == 1) {
    *(undefined1 *)(param_1 + _DAT_112733ea0) = 1;
  }
  lVar1 = param_4;
  func_0x00010c0840e0();
  if ((lVar1 == 0) || (lVar1 = param_4, func_0x00010c0840e0(), lVar1 == 1)) {
    func_0x00010beb8360(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ccfd38; end: 105ccfd43; -[SCMemoriesContentUnderstandingSettingsViewController getTitle] */

undefined ** FUN_105ccfd38(void)

{
  return &PTR____CFConstantStringClassReference_110dcb678;
}



/* Entry: 105ccfd44; end: 105cd036b; -[SCMemoriesContentUnderstandingSettingsViewController _showCalendarTrayAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccfd44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x2;
  uVar25 = 0;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_alloc();
    func_0x00010c02f980();
    puVar2 = PTR__OBJC_CLASS___UICalendarView_1126c3b90;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR_PTR_1126c2580;
    func_0x00010beee1e0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = (long)_DAT_112733ea4;
    uVar25 = *(undefined8 *)(param_1 + lVar28);
    *(undefined **)(param_1 + lVar28) = puVar3;
    _objc_release(uVar25);
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar28));
    puVar3 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar7;
    func_0x00010bf49420(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493c0(0x4059000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493c0(0xc059000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar27);
    _objc_release(uVar7);
    _objc_release(uVar25);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    func_0x00010c219b60(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200(uVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(uVar25);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UICalendarSelectionSingleDate_1126c3b98;
    _objc_alloc();
    func_0x00010c00a2c0();
    func_0x00010c1fb820(puVar2);
    func_0x00010c189400(puVar1);
    puVar3 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    lVar28 = (long)_DAT_112733ea8;
    uVar25 = *(undefined8 *)(param_1 + lVar28);
    *(undefined **)(param_1 + lVar28) = puVar3;
    _objc_release(uVar25);
    func_0x00010c167420(*(undefined8 *)(param_1 + lVar28));
    func_0x00010c219c20(*(undefined8 *)(param_1 + lVar28));
    func_0x00010c16d3e0(*(undefined8 *)(param_1 + lVar28));
    uVar25 = 2;
    func_0x00010c10c5c0(0x3fe3333340000000,*(undefined8 *)(param_1 + lVar28));
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar25);
  lVar26 = (long)_DAT_112733ea4;
  func_0x00010c195460(*(undefined8 *)(puVar1 + lVar26));
  func_0x00010befbd60(*(undefined8 *)(puVar1 + lVar26));
  puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1[_DAT_112733e9c] == '\x01') {
    puVar2 = puVar3;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar1 + _DAT_112733eac);
    *(undefined **)(puVar1 + _DAT_112733eac) = puVar2;
    _objc_release(uVar27);
  }
  if (puVar1[_DAT_112733ea0] == '\x01') {
    puVar2 = puVar3;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar1 + _DAT_112733eb0);
    *(undefined **)(puVar1 + _DAT_112733eb0) = puVar2;
    _objc_release(uVar27);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar25);
  return;
}



/* Entry: 105cd036c; end: 105cd046b; -[SCMemoriesContentUnderstandingSettingsViewController dateSelection:didSelectDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd036c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112733ea4;
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                      PTR_s__actionButtonPressed_11252c838,0x40);
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_112733e9c) == '\x01') {
    puVar2 = puVar1;
    func_0x00010bf650e0(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112733eac);
    *(undefined **)(param_1 + _DAT_112733eac) = puVar2;
    _objc_release(uVar3);
  }
  if (*(char *)(param_1 + _DAT_112733ea0) == '\x01') {
    puVar2 = puVar1;
    func_0x00010bf650e0(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112733eb0);
    *(undefined **)(param_1 + _DAT_112733eb0) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cd046c; end: 105cd04db; -[SCMemoriesContentUnderstandingSettingsViewController _actionButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd046c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112733e90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7e6e0();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_112733e9c) = 0;
  *(undefined1 *)(param_1 + _DAT_112733ea0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733ea8),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 105cd04dc; end: 105cd0567; -[SCMemoriesContentUnderstandingSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd04dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733eb0,0);
  _objc_storeStrong(param_1 + _DAT_112733eac,0);
  _objc_storeStrong(param_1 + _DAT_112733ea4,0);
  _objc_storeStrong(param_1 + _DAT_112733ea8,0);
  _objc_storeStrong(param_1 + _DAT_112733e94,0);
  _objc_destroyWeak(param_1 + _DAT_112733e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733e98,0);
  return;
}



/* Entry: 105cd0568; end: 105cd0f97; -[SCMemoriesContentUnderstandingTabCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105cd0568(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
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
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR_PTR_1126ecc48;
  puVar1 = &uStack_130;
  uStack_130 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar19 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar19 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733eb8);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112733eb8) = puVar19;
    _objc_release(uVar21);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar26 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    lVar25 = (long)_DAT_112733ebc;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar2;
    _objc_release(uVar21);
    puVar19 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar25));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar19;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar21;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar18;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar20);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar18);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar21);
    _objc_release(puVar4);
    _objc_release(puVar19);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    lVar23 = (long)_DAT_112733ec0;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar21);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar23));
    _objc_release(puVar2);
    uVar21 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08c0e0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar21);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar25));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar21;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar9;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar20;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar18;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar17;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(uVar18);
    _objc_release(uVar16);
    _objc_release(uVar20);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar21);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    lVar24 = (long)_DAT_112733ec4;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar2;
    _objc_release(uVar21);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    uVar18 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c182220(uVar18);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar18;
    func_0x00010bf33840();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar8;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release(uVar21);
    _objc_release(uVar8);
    _objc_release(uVar18);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar3;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar20;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar18;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar16;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar8;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar17;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar21);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar16);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar22 = (long)_DAT_112733ec8;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar2;
    _objc_release(uVar21);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar22));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar19 = *(undefined8 **)((long)puVar1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar19;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar21;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar18;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar21);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar20);
    _objc_release(puVar19);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  return puVar19;
}



/* Entry: 105cd0f98; end: 105cd0fa3; +[SCMemoriesContentUnderstandingTabCell cellHeightForViewModel:] */

undefined8 FUN_105cd0f98(void)

{
  return 0x4049000000000000;
}



/* Entry: 105cd0fa4; end: 105cd10af; -[SCMemoriesContentUnderstandingTabCell setViewModel:snapThumbnailGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd0fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112733ecc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733ed0);
  *(undefined8 *)(param_1 + _DAT_112733ed0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c2682c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245760();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112733ec8));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be91a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestThumbnail_112582020);
  return;
}



/* Entry: 105cd10b0; end: 105cd1283; -[SCMemoriesContentUnderstandingTabCell _requestThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd10b0(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  double dStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112733ec0));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  param_3 = param_3 * param_1;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar6 = (long)_DAT_112733ecc;
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c26e2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ed100();
  _objc_release(uVar3);
  dStack_90 = param_3;
  dStack_98 = param_4 * param_1;
  if (((long)(int)uVar4 - 2U & 0xfffffffffffffffa) != 0) {
    dStack_90 = param_4 * param_1;
    dStack_98 = param_3;
  }
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105cd1284;
  uStack_60 = 0x105cd1294;
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  puStack_78 = &uStack_80;
  func_0x00010c26e2e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar4;
  _objc_initWeak(auStack_88,param_5);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105cd129c;
  puStack_b0 = &UNK_1108e46e0;
  _objc_copyWeak(auStack_a0,auStack_88);
  ppuVar5 = &puStack_c8;
  puStack_a8 = &uStack_80;
  _objc_retainBlock();
  (*(code *)ppuVar5[2])();
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 105cd1284; end: 105cd129b;  */

void FUN_105cd1284(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105cd129c; end: 105cd13d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd129c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112733eb8);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112733ed0);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c136ae0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105cd13d4; end: 105cd14ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd13d4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0720c0();
      if ((param_2 != 0) && (iVar1 != 0)) {
        func_0x00010bedadc0(lVar2);
        func_0x00010c1a9f00(*(undefined8 *)(lVar2 + _DAT_112733ec0));
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cd14ac; end: 105cd15ab; -[SCMemoriesContentUnderstandingTabCell _updateLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd14ac(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bddaac0();
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105cd15ac;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733ed4);
  *(undefined8 *)(param_1 + _DAT_112733ed4) = uVar1;
  _objc_release(uVar2);
  if (param_3 == 0) {
    _dispatch_time(0,3000000000);
    func_0x00010058c530();
  }
  else {
    func_0x00010beb6160(param_1);
  }
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cd15ac; end: 105cd15e3;  */

void FUN_105cd15ac(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb6160(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cd15e4; end: 105cd15ef; -[SCMemoriesContentUnderstandingTabCell _shouldShowLoadingIndicator:] */

void FUN_105cd15e4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopLoading_11258e610);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoading_11258daa8);
  return;
}



/* Entry: 105cd15f0; end: 105cd17cb; -[SCMemoriesContentUnderstandingTabCell _startLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd15f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112733ed8;
  lVar1 = *(long *)(param_1 + lVar11);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar11));
    lVar1 = (long)_DAT_112733ec0;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf34860(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf348e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar11);
  }
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + _DAT_112733ed8),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105cd17cc; end: 105cd17db; -[SCMemoriesContentUnderstandingTabCell _stopLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd17cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733ed8),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105cd17dc; end: 105cd181f; -[SCMemoriesContentUnderstandingTabCell _cancelMiniThumbnailBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd17dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112733ed4;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cd1820; end: 105cd1823; -[SCMemoriesContentUnderstandingTabCell startGeneratingUpdates] */

void FUN_105cd1820(void)

{
  return;
}



/* Entry: 105cd1824; end: 105cd1827; -[SCMemoriesContentUnderstandingTabCell stopGeneratingUpdates] */

void FUN_105cd1824(void)

{
  return;
}



/* Entry: 105cd1828; end: 105cd197f; -[SCMemoriesContentUnderstandingTabCell animateLongTapForTouchLocation:reverse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd1828(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_70 [8];
  double dStack_68;
  double dStack_60;
  undefined1 auStack_58 [8];
  
  dVar3 = 0.95;
  dVar6 = 1.0;
  if (param_6 == 0) {
    dVar6 = dVar3;
  }
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar4 = dVar3;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_112733ebc;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar2));
  _CGRectGetHeight();
  dVar5 = dVar6;
  if (dVar3 - param_3 < dVar4) {
    dVar4 = 1.0 - dVar6;
    dVar3 = dVar4 * (dVar3 - param_3);
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar2));
    _CGRectGetHeight();
    dVar5 = 1.0 - dVar3 / dVar4;
  }
  _objc_initWeak(auStack_58,param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_70,auStack_58);
  dStack_68 = dVar6;
  dStack_60 = dVar5;
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105cd1980; end: 105cd19eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd1980(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CGAffineTransformMakeScale
              (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(lVar1 + _DAT_112733ebc),param_2,&uStack_80);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105cd19ec; end: 105cd19ef; -[SCMemoriesContentUnderstandingTabCell setSelected:selectOverlayImage:snapIds:] */

void FUN_105cd19ec(void)

{
  return;
}



/* Entry: 105cd19f0; end: 105cd19f3; -[SCMemoriesContentUnderstandingTabCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_105cd19f0(void)

{
  return;
}



/* Entry: 105cd19f4; end: 105cd1a13; -[SCMemoriesContentUnderstandingTabCell interactionMode] */

undefined8 FUN_105cd19f4(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf803c0();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 105cd1a14; end: 105cd1a17; -[SCMemoriesContentUnderstandingTabCell setSelectMode:] */

void FUN_105cd1a14(void)

{
  return;
}



/* Entry: 105cd1a18; end: 105cd1a1f; -[SCMemoriesContentUnderstandingTabCell canSelectAtPoint:] */

undefined8 FUN_105cd1a18(void)

{
  return 1;
}



/* Entry: 105cd1a20; end: 105cd1a23; -[SCMemoriesContentUnderstandingTabCell setDisableMode:] */

void FUN_105cd1a20(void)

{
  return;
}



/* Entry: 105cd1a24; end: 105cd1a33; -[SCMemoriesContentUnderstandingTabCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cd1a24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112733eb4);
}



/* Entry: 105cd1a34; end: 105cd1a43; -[SCMemoriesContentUnderstandingTabCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cd1a34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733ecc);
}



/* Entry: 105cd1a44; end: 105cd1af3; -[SCMemoriesContentUnderstandingTabCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd1a44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733ecc,0);
  _objc_storeStrong(param_1 + _DAT_112733ed4,0);
  _objc_storeStrong(param_1 + _DAT_112733eb8,0);
  _objc_storeStrong(param_1 + _DAT_112733ed8,0);
  _objc_storeStrong(param_1 + _DAT_112733ec4,0);
  _objc_storeStrong(param_1 + _DAT_112733ec8,0);
  _objc_storeStrong(param_1 + _DAT_112733ec0,0);
  _objc_storeStrong(param_1 + _DAT_112733ebc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733ed0,0);
  return;
}



/* Entry: 105cd1af4; end: 105cd1eeb; -[SCMemoriesContentUnderstandingTabController initWithTabType:containerViewController:memoriesContentUnderstandingTabService:delegate:memoriesExperimentService:memoriesMonetizationServices:] */

undefined8 *
FUN_105cd1af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ecc50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x16] = param_3;
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 0x15,param_6);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0c9740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfbd5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0c8e80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0c9ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c25c7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0ead40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0c9760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[0x11];
    puVar1[0x11] = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c3ba0;
    _objc_alloc();
    uVar3 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c153b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02ac20();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar1[0xd]);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105cd1eec; end: 105cd1ef3; -[SCMemoriesContentUnderstandingTabController tabType] */

undefined8 FUN_105cd1eec(void)

{
  return 0xf;
}



/* Entry: 105cd1ef4; end: 105cd1efb; -[SCMemoriesContentUnderstandingTabController shouldDisplay] */

undefined8 FUN_105cd1ef4(void)

{
  return 1;
}



/* Entry: 105cd1efc; end: 105cd1f03; -[SCMemoriesContentUnderstandingTabController isPrivate] */

undefined8 FUN_105cd1efc(void)

{
  return 0;
}



/* Entry: 105cd1f04; end: 105cd1f13; -[SCMemoriesContentUnderstandingTabController isViewLoaded] */

bool FUN_105cd1f04(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}



/* Entry: 105cd1f14; end: 105cd2353; -[SCMemoriesContentUnderstandingTabController loadViewIfNeeded] */

void FUN_105cd1f14(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0834c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    func_0x00010c013de0();
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar15);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126c3958;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c014040(puVar2,param_2,puVar1);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar15);
    func_0x00010c1acea0(0x4000000000000000,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c1b6de0(*(undefined8 *)(param_1 + 0x18),param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1f7e20(*(undefined8 *)(param_1 + 0x18),param_2,1);
    func_0x00010c2025c0(*(undefined8 *)(param_1 + 0x18),param_2,0);
    func_0x00010c2026e0(*(undefined8 *)(param_1 + 0x18),param_2,0);
    func_0x00010c167a20(*(undefined8 *)(param_1 + 0x18),param_2,1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR_PTR_1126c3ba8;
    _objc_opt_class(PTR_PTR_1126c3ba8);
    puVar3 = PTR_PTR_1126c3ba8;
    _objc_opt_class(PTR_PTR_1126c3ba8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(uVar15,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x18),param_2,0);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uStack_88 = uVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = uVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uStack_78 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2793a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0(uVar12,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x18),param_2,
                        &PTR____CFConstantStringClassReference_110e27d98);
    puVar2 = PTR_PTR_1126c3bb0;
    _objc_alloc();
    func_0x00010bfff900();
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar15);
    func_0x00010c2115c0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0xb0));
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(puVar1 + 0x10);
  _objc_retain(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return;
}



/* Entry: 105cd2354; end: 105cd237b; -[SCMemoriesContentUnderstandingTabController view] */

void FUN_105cd2354(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd237c; end: 105cd23a3; -[SCMemoriesContentUnderstandingTabController collectionView] */

void FUN_105cd237c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd23a4; end: 105cd23af; -[SCMemoriesContentUnderstandingTabController allItems] */

undefined * FUN_105cd23a4(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 105cd23b0; end: 105cd23b7; -[SCMemoriesContentUnderstandingTabController galleryItemIdToSnapsMap] */

undefined8 FUN_105cd23b0(void)

{
  return 0;
}



/* Entry: 105cd23b8; end: 105cd23bf; -[SCMemoriesContentUnderstandingTabController galleryItemIdToPHAssetsMap] */

undefined8 FUN_105cd23b8(void)

{
  return 0;
}



/* Entry: 105cd23c0; end: 105cd23c7; -[SCMemoriesContentUnderstandingTabController itemIdsToExclude] */

undefined8 FUN_105cd23c0(void)

{
  return 0;
}



/* Entry: 105cd23c8; end: 105cd23cf; -[SCMemoriesContentUnderstandingTabController prefersAllItemsAreNotIterated] */

undefined8 FUN_105cd23c8(void)

{
  return 0;
}



/* Entry: 105cd23d0; end: 105cd23d7; -[SCMemoriesContentUnderstandingTabController allItemsCount] */

undefined8 FUN_105cd23d0(void)

{
  return 0;
}



/* Entry: 105cd23d8; end: 105cd23e3; -[SCMemoriesContentUnderstandingTabController itemsInRect:] */

undefined * FUN_105cd23d8(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 105cd23e4; end: 105cd23eb; -[SCMemoriesContentUnderstandingTabController indexPathForId:itemLevelIdentifier:] */

undefined8 FUN_105cd23e4(void)

{
  return 0;
}



/* Entry: 105cd23ec; end: 105cd23ef; -[SCMemoriesContentUnderstandingTabController setScrollContentOffset:animated:completion:] */

void FUN_105cd23ec(void)

{
  return;
}



/* Entry: 105cd23f0; end: 105cd2437; -[SCMemoriesContentUnderstandingTabController contentHeight] */

undefined8 FUN_105cd23f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf407a0();
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 105cd2438; end: 105cd243b; -[SCMemoriesContentUnderstandingTabController scrollToTop] */

void FUN_105cd2438(void)

{
  return;
}



/* Entry: 105cd243c; end: 105cd2443; -[SCMemoriesContentUnderstandingTabController scrollContentDistanceToTop] */

undefined8 FUN_105cd243c(void)

{
  return 0;
}



/* Entry: 105cd2444; end: 105cd2447; -[SCMemoriesContentUnderstandingTabController changeSelected:forGalleryItem:] */

void FUN_105cd2444(void)

{
  return;
}



/* Entry: 105cd2448; end: 105cd2463; -[SCMemoriesContentUnderstandingTabController selectedGalleryItems] */

void FUN_105cd2448(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd2464; end: 105cd2467; -[SCMemoriesContentUnderstandingTabController scrollToGalleryItem:animated:] */

void FUN_105cd2464(void)

{
  return;
}



/* Entry: 105cd2468; end: 105cd246f; -[SCMemoriesContentUnderstandingTabController scrollBarTopOffset] */

undefined8 FUN_105cd2468(void)

{
  return 0;
}



/* Entry: 105cd2470; end: 105cd2477; -[SCMemoriesContentUnderstandingTabController isDragging] */

undefined8 FUN_105cd2470(void)

{
  return 0;
}



/* Entry: 105cd2478; end: 105cd247f; -[SCMemoriesContentUnderstandingTabController isTracking] */

undefined8 FUN_105cd2478(void)

{
  return 0;
}



/* Entry: 105cd2480; end: 105cd2487; -[SCMemoriesContentUnderstandingTabController isEditing] */

undefined8 FUN_105cd2480(void)

{
  return 0;
}



/* Entry: 105cd2488; end: 105cd248b; -[SCMemoriesContentUnderstandingTabController endEditing] */

void FUN_105cd2488(void)

{
  return;
}



/* Entry: 105cd248c; end: 105cd2493; -[SCMemoriesContentUnderstandingTabController isInLineSearchable] */

undefined8 FUN_105cd248c(void)

{
  return 0;
}



/* Entry: 105cd2494; end: 105cd249b; -[SCMemoriesContentUnderstandingTabController shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController] */

undefined8 FUN_105cd2494(void)

{
  return 1;
}



/* Entry: 105cd249c; end: 105cd24a3; -[SCMemoriesContentUnderstandingTabController shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController] */

undefined8 FUN_105cd249c(void)

{
  return 1;
}



/* Entry: 105cd24a4; end: 105cd24a7; -[SCMemoriesContentUnderstandingTabController deeplinkToOperaWithDestinationInfo:] */

void FUN_105cd24a4(void)

{
  return;
}



/* Entry: 105cd24a8; end: 105cd24ab; -[SCMemoriesContentUnderstandingTabController galleryViewWillAppear] */

void FUN_105cd24a8(void)

{
  return;
}



/* Entry: 105cd24ac; end: 105cd24af; -[SCMemoriesContentUnderstandingTabController galleryViewDidAppear] */

void FUN_105cd24ac(void)

{
  return;
}



/* Entry: 105cd24b0; end: 105cd24b3; -[SCMemoriesContentUnderstandingTabController galleryViewDidDisappear] */

void FUN_105cd24b0(void)

{
  return;
}



/* Entry: 105cd24b4; end: 105cd24b7; -[SCMemoriesContentUnderstandingTabController changeSelected:forGallerySnapItem:] */

void FUN_105cd24b4(void)

{
  return;
}



/* Entry: 105cd24b8; end: 105cd24bf; -[SCMemoriesContentUnderstandingTabController selectedItemCount] */

undefined8 FUN_105cd24b8(void)

{
  return 0;
}



/* Entry: 105cd24c0; end: 105cd24c3; -[SCMemoriesContentUnderstandingTabController didTriggerCreateMashupForStory:] */

void FUN_105cd24c0(void)

{
  return;
}



/* Entry: 105cd24c4; end: 105cd24c7; -[SCMemoriesContentUnderstandingTabController didTriggerRefetchLatestFeaturedStories] */

void FUN_105cd24c4(void)

{
  return;
}



/* Entry: 105cd24c8; end: 105cd24cf; -[SCMemoriesContentUnderstandingTabController collectionView:numberOfItemsInSection:] */

void FUN_105cd24c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x78),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105cd24d0; end: 105cd25bf; -[SCMemoriesContentUnderstandingTabController collectionView:cellForItemAtIndexPath:] */

void FUN_105cd24d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3ba8;
  _objc_opt_class(PTR_PTR_1126c3ba8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf21f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222800(uVar1,param_2,uVar4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd25c0; end: 105cd265f; -[SCMemoriesContentUnderstandingTabController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_105cd25c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_6);
  func_0x00010bfb68e0(param_4);
  _CGRectGetWidth();
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar1 = param_6;
  uVar3 = param_1;
  func_0x00010c0840e0(param_6);
  _objc_release(param_6);
  func_0x00010c0dfd40(uVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33e60(PTR_PTR_1126c3ba8,param_3,uVar2);
  _objc_release(uVar2);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 105cd2660; end: 105cd2667; -[SCMemoriesContentUnderstandingTabController pageViewName] */

undefined8 FUN_105cd2660(void)

{
  return 0x99;
}



/* Entry: 105cd2668; end: 105cd266f; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:] */

undefined8 FUN_105cd2668(void)

{
  return 0;
}



/* Entry: 105cd2670; end: 105cd2673; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:] */

void FUN_105cd2670(void)

{
  return;
}



/* Entry: 105cd2674; end: 105cd2677; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forSnapItem:] */

void FUN_105cd2674(void)

{
  return;
}



/* Entry: 105cd2678; end: 105cd267b; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forItems:snapItems:] */

void FUN_105cd2678(void)

{
  return;
}



/* Entry: 105cd267c; end: 105cd289f; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:] */

void FUN_105cd267c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf94800(uVar6);
  lVar7 = *(long *)(param_1 + 0x78);
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c2682c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105cd28a0;
  puStack_70 = &UNK_1108e4730;
  lStack_68 = param_1;
  _objc_retain(lVar1);
  ppuVar2 = &puStack_88;
  lStack_60 = lVar1;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf85d40();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if ((int)uVar6 == 0) {
    lStack_58 = lVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c153320(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lStack_50 = lVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c153be0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(lStack_60);
  lVar7 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105cd28a0;
  uStack_b0 = uVar6;
  lStack_a8 = lVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105cd2948;
  puStack_d0 = &UNK_110848ba8;
  uVar3 = *(undefined8 *)(lVar7 + 0x28);
  uVar6 = *(undefined8 *)(lVar7 + 0x20);
  puStack_c8 = puVar5;
  _objc_retain(*(undefined8 *)(lVar7 + 0x28));
  uStack_c0 = uVar6;
  uStack_b8 = uVar3;
  _objc_retain(puVar5);
  func_0x000100162d98("APPSTORE",&puStack_e8);
  _objc_release(uStack_b8);
  _objc_release(puStack_c8);
  _objc_release(puVar5);
  return;
}



/* Entry: 105cd28a0; end: 105cd2947;  */

void FUN_105cd28a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105cd2948;
  puStack_40 = &UNK_110848ba8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_3;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_28);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105cd2948; end: 105cd2b43;  */

void FUN_105cd2948(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3bb8;
  _objc_opt_class(PTR_PTR_1126c3bb8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c0c1c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3bc0;
  _objc_alloc(PTR_PTR_1126c3bc0);
  func_0x00010c016da0();
  puVar5 = PTR_PTR_1126c3bc8;
  _objc_alloc(PTR_PTR_1126c3bc8);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010bf21f60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0633c0(puVar5);
  _objc_release(uVar6);
  _objc_copyWeak(auStack_58,*(long *)(param_1 + 0x28) + 8);
  puVar7 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0311a0(puVar7);
  func_0x00010bf0c980();
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105cd2b44; end: 105cd2bb3;  */

void FUN_105cd2b44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cd2bb4; end: 105cd2bc7;  */

void FUN_105cd2bb4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105cd2bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 105cd2bc8; end: 105cd2bcf; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewIsFullyVisible:] */

undefined8 FUN_105cd2bc8(void)

{
  return 1;
}



/* Entry: 105cd2bd0; end: 105cd2bd3; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:] */

void FUN_105cd2bd0(void)

{
  return;
}



/* Entry: 105cd2bd4; end: 105cd2bdb; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:] */

undefined8 FUN_105cd2bd4(void)

{
  return 0;
}



/* Entry: 105cd2bdc; end: 105cd2e2b; -[SCMemoriesContentUnderstandingTabController contentUnderstandingTabDataSourceDidReceiveData:viewModels:] */

void FUN_105cd2bdc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c0834c0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_4);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_4;
    _objc_release(uVar7);
    lVar3 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf529e0(param_4);
    func_0x00010c267780(lVar3);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
    func_0x000100504554(lVar3,&PTR___NSConcreteGlobalBlock_1108e4780);
    uVar7 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e47a0);
    lVar4 = lVar3;
    func_0x000107ea50c8(lVar3,uVar7,1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c13cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010bfd5320();
    if ((int)lVar4 != 0) {
      if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
        _objc_retain(param_4);
        uVar6 = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x78) = param_4;
        _objc_release(uVar6);
        func_0x00010c128b60(*(undefined8 *)(param_1 + 0x18));
        lVar4 = param_1 + 0xa8;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bf529e0(param_4);
        func_0x00010c267780(lVar4);
        _objc_release(lVar4);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bf408e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c069fe0();
        _objc_release(uVar6);
        _objc_initWeak(auStack_58,param_1);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_4);
        _objc_retain(lVar5);
        func_0x00010c0f9680(puVar1);
        _objc_release(lVar5);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
    _objc_release(lVar5);
    _objc_release(uVar7);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105cd2e2c; end: 105cd2ec3;  */

void FUN_105cd2e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3bd0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c061ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cd2ec4; end: 105cd3013;  */

void FUN_105cd2ec4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_58,lVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0f8420(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105cd3014; end: 105cd329f;  */

void FUN_105cd3014(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = uVar7;
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6d000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be38e80(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c100(uVar7,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0674e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be38e80(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066a40(uVar7,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be38e80(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128de0(uVar7,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c0d19c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar4);
          }
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          uVar2 = uVar7;
          func_0x00010bfba9a0(uVar7);
          func_0x00010bfed020(puVar5,param_2,uVar2,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010c2719c0(uVar7);
          func_0x00010bfed020(puVar6,param_2,uVar7,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d1540(*(undefined8 *)(lVar1 + 0x18),param_2,puVar5,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(lVar1 + 0x20) + 0xa8;
  _objc_loadWeakRetained(lVar3);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010bf529e0(uVar7);
  func_0x00010c267780(lVar3,param_2,uVar2,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105cd32a0; end: 105cd32ef;  */

void FUN_105cd32a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20) + 0xa8;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar3);
  func_0x00010c267780(lVar2,param_2,uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105cd32f0; end: 105cd33d7; -[SCMemoriesContentUnderstandingTabController _indexPathsFromIndexSet:] */

void FUN_105cd32f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105cd338c;
  puStack_30 = &UNK_110866258;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010bf97bc0(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cd33d8; end: 105cd33df; -[SCMemoriesContentUnderstandingTabController memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:] */

undefined8 FUN_105cd33d8(void)

{
  return 0;
}



/* Entry: 105cd33e0; end: 105cd33eb; -[SCMemoriesContentUnderstandingTabController scrollContentInset] */

undefined8 FUN_105cd33e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105cd33ec; end: 105cd33f7; -[SCMemoriesContentUnderstandingTabController setScrollContentInset:] */

void FUN_105cd33ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0xb8) = param_1;
  *(undefined8 *)(param_5 + 0xc0) = param_2;
  *(undefined8 *)(param_5 + 200) = param_3;
  *(undefined8 *)(param_5 + 0xd0) = param_4;
  return;
}



/* Entry: 105cd33f8; end: 105cd33ff; -[SCMemoriesContentUnderstandingTabController scrollContentOffset] */

undefined8 FUN_105cd33f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}


