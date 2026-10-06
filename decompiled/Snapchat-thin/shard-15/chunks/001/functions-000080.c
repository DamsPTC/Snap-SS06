/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b81ab14; end: 10b81ab33; -[SIGActionBarContentView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81ab14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11279434c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81ab34; end: 10b81ab47; -[SIGActionBarContentView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81ab34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11279434c,param_3);
  return;
}



/* Entry: 10b81ab48; end: 10b81ab57; -[SIGActionBarContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81ab48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11279434c);
  return;
}



/* Entry: 10b81ab58; end: 10b81ab5f; -[SIGActionBar initWithActionItems:] */

void FUN_10b81ab58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithActionItems_primaryActio_1125d9bd0,param_3,0);
  return;
}



/* Entry: 10b81ab60; end: 10b81b2af; -[SIGActionBar initWithActionItems:primaryActionButtonView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b81ab60(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar31 = (undefined8 *)PTR_PTR_1126e1640;
  _objc_alloc();
  dVar32 = *(double *)PTR__CGRectZero_110347608;
  uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(dVar32,uVar33,uVar34,uVar35);
  puStack_e0 = PTR_PTR_11270b328;
  puVar24 = &uStack_e8;
  puVar5 = puVar31;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar24,PTR_s_initWithContentView__1125de998);
  if (puVar24 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar24);
    _objc_release(puVar2);
    lVar26 = (long)_DAT_112794350;
    _objc_retain(puVar31);
    uVar3 = *(undefined8 *)((long)puVar24 + lVar26);
    *(undefined8 **)((long)puVar24 + lVar26) = puVar31;
    _objc_release(uVar3);
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126e1648;
      func_0x00010c15cf80();
      _objc_retainAutoreleasedReturnValue();
      lVar28 = (long)_DAT_112794354;
      puVar27 = *(undefined **)((long)puVar24 + lVar28);
      *(undefined **)((long)puVar24 + lVar28) = puVar2;
    }
    else {
      lVar28 = (long)_DAT_112794354;
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)((long)puVar24 + lVar28);
      *(long *)((long)puVar24 + lVar28) = param_4;
      _objc_release(uVar3);
      puVar27 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      func_0x00010bef9040(*(undefined8 *)((long)puVar24 + lVar28));
    }
    _objc_release(puVar27);
    func_0x00010c219b60(*(undefined8 *)((long)puVar24 + lVar28));
    func_0x00010befbb60(puVar31);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(dVar32,uVar33,uVar34,uVar35);
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar24);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar27 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar24;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    puStack_c8 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar24;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    puStack_c0 = puVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar24;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    puStack_b8 = puVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar14);
    puVar14 = puVar13;
    func_0x00010bf49420(1.0 / dVar32);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar14;
    uVar35 = *(undefined8 *)((long)puVar24 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar31;
    func_0x00010c274200(puVar31);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar35;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar33;
    uVar3 = *(undefined8 *)((long)puVar24 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar31;
    func_0x00010c2793a0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar3;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar31;
    uStack_a0 = uVar34;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf49420(0x4050000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar34);
    _objc_release(puVar16);
    _objc_release(uVar3);
    _objc_release(uVar33);
    _objc_release(puVar15);
    _objc_release(uVar35);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar27);
    puVar5 = puVar31;
    func_0x00010c18b5e0(puVar31);
    puVar27 = PTR_PTR_1126b66b8;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010beedf60();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar11;
    func_0x00010b885140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beedf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar5);
    puVar2 = PTR_PTR_1126b6670;
    func_0x00010beedd60();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = (long)_DAT_112794358;
    uVar33 = *(undefined8 *)((long)puVar24 + lVar28);
    *(undefined **)((long)puVar24 + lVar28) = puVar2;
    _objc_release(uVar33);
    func_0x00010c219b60(*(undefined8 *)((long)puVar24 + lVar28));
    func_0x00010befbb60(*(undefined8 *)((long)puVar24 + lVar26));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar35 = *(undefined8 *)((long)puVar24 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar24 + lVar26);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar35;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar33;
    uVar20 = *(undefined8 *)((long)puVar24 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar24 + lVar26);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar34;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar6);
    _objc_release(uVar34);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar33);
    _objc_release(uVar3);
    _objc_release(uVar35);
    puVar5 = param_3;
    func_0x00010c161aa0(puVar24);
    _objc_release(puVar27);
    _objc_release(puVar4);
  }
  _objc_release(puVar31);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar24;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lVar28 = (long)_DAT_11279435c;
  uVar22 = *(ulong *)((long)param_3 + lVar28);
  func_0x00010c071ae0();
  if ((uVar22 & 1) == 0) {
    lVar25 = (long)_DAT_112794360;
    lVar29 = *(long *)((long)param_3 + lVar25);
    _objc_retain(lVar29);
    lVar23 = lVar29;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar23 != 0) {
      lVar30 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar29);
        }
        func_0x00010c12c960(*(undefined8 *)(lVar30 * 8));
        lVar30 = lVar30 + 1;
      } while (lVar23 != lVar30);
      lVar23 = lVar29;
      func_0x00010bf52a60();
    }
    _objc_release(lVar29);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    puVar24 = puVar5;
    func_0x00010bf52a60();
    lVar23 = lRam0000000000000000;
    while (puVar24 != (undefined8 *)0x0) {
      puVar31 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar23) {
          _objc_enumerationMutation(puVar5);
        }
        puVar27 = PTR_PTR_1126b6670;
        func_0x00010beedd60(PTR_PTR_1126b6670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c219b60();
        func_0x00010befa120(puVar2);
        func_0x00010befbb60(*(undefined8 *)((long)param_3 + (long)_DAT_112794350));
        _objc_release(puVar27);
        puVar31 = (undefined8 *)((long)puVar31 + 1);
      } while (puVar24 != puVar31);
      puVar24 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    _objc_retain(puVar5);
    uVar33 = *(undefined8 *)((long)param_3 + lVar28);
    *(undefined8 **)((long)param_3 + lVar28) = puVar5;
    _objc_release(uVar33);
    uVar33 = *(undefined8 *)((long)param_3 + lVar25);
    *(undefined **)((long)param_3 + lVar25) = puVar2;
    _objc_release(uVar33);
    func_0x00010beaab60(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar24 = *(undefined8 **)((long)puVar5 + (long)_DAT_112794358);
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar24,PTR_s_setAccessibilityIdentifier__112635e10);
  return puVar24;
}



/* Entry: 10b81b2b0; end: 10b81b503; -[SIGActionBar setActionItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81b2b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11279435c;
  uVar2 = *(ulong *)(param_1 + lVar10);
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    lVar8 = (long)_DAT_112794360;
    lVar9 = *(long *)(param_1 + lVar8);
    _objc_retain(lVar9);
    lVar3 = lVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c12c960(*(undefined8 *)(lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR_PTR_1126b6670;
        func_0x00010beedd60(PTR_PTR_1126b6670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c219b60();
        func_0x00010befa120(puVar4);
        func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112794350));
        _objc_release(puVar5);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    *(long *)(param_1 + lVar10) = param_3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar4;
    _objc_release(uVar6);
    func_0x00010beaab60(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_112794358),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 10b81b504; end: 10b81b513; -[SIGActionBar setMoreButtonAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81b504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794358),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 10b81b514; end: 10b81b523; -[SIGActionBar moreButtonAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81b514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794358),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 10b81b524; end: 10b81b84b; -[SIGActionBar _setupAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81b524(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112794364;
  if (*(long *)(param_1 + lVar12) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar14 = (long)_DAT_112794368;
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar14),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112794360;
  lVar14 = *(long *)(param_1 + lVar13);
  func_0x00010bf529e0();
  if (lVar14 != 0) {
    uVar15 = 0;
    do {
      uVar1 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c0dfd40(uVar1,param_2,uVar15);
      _objc_retainAutoreleasedReturnValue();
      if (uVar15 == 0) {
        uVar3 = uVar1;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + _DAT_112794350);
        func_0x00010c08de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bf493c0(0x4030000000000000,uVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010c0dfd40(uVar3,param_2,uVar15 - 1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2793a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf493c0(0x4028000000000000,uVar5,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar3 = uVar1;
      uStack_80 = uVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)_DAT_112794350;
      uVar7 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c274200(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf493a0(uVar3,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      uStack_78 = uVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf1ff80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf493a0(uVar4,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar1);
      uVar15 = uVar15 + 1;
      uVar11 = *(ulong *)(param_1 + lVar13);
      func_0x00010bf529e0();
    } while (uVar15 < uVar11);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + _DAT_11279436c;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bf78ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b81b84c; end: 10b81b887; -[SIGActionBar _primaryActionButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81b84c(long param_1)

{
  param_1 = param_1 + _DAT_11279436c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b81b888; end: 10b81bbef; -[SIGActionBar _moreTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81b888(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11279435c);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b81ba50;
  puStack_58 = &UNK_1108e3a88;
  lStack_50 = param_1;
  _objc_retain();
  puStack_48 = puVar1;
  func_0x00010bf97e80(uVar7,param_2,&puStack_70);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010b885158();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010bf1d200(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110d62410);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar5 != 0) {
    lVar6 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar5 = lVar6;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = lVar6;
  }
  func_0x00010c10af80(lVar4,param_2,puVar3,0);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b81bbf0; end: 10b81bcaf;  */

void FUN_10b81bbf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b81bcb0; end: 10b81bcb7;  */

void FUN_10b81bcb0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 10b81bcb8; end: 10b81bf6b; -[SIGActionBar actionBarContentViewDidLayoutSubviews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81bcb8(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
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
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar7 = param_4;
  func_0x00010bf8d060();
  lVar10 = (long)_DAT_112794358;
  func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar10),param_5,1);
  dVar12 = 0.0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar1 = *(long *)(param_4 + _DAT_112794360);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar11 = *plStack_150;
    do {
      lVar6 = 0;
      lVar9 = lVar8;
      do {
        if (*plStack_150 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        lVar8 = *(long *)(lStack_158 + lVar6 * 8);
        if (lVar9 == 0) {
          dVar13 = 0.0;
        }
        else {
          func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar10));
          dVar13 = param_3 + 12.0;
        }
        func_0x00010bfb68e0(lVar8);
        if (lVar7 == 1) {
          _CGRectGetMinX();
          dVar14 = dVar12 + -8.0;
          func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_112794354));
          _CGRectGetMaxX();
          dVar12 = dVar13 + dVar12;
          if (dVar12 <= dVar14) goto LAB_10b81bdf0;
LAB_10b81be24:
          func_0x00010c1a7f60(lVar8,param_5,1);
          func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar10),param_5,0);
          _objc_retain(lVar8);
          _objc_release(lVar9);
        }
        else {
          _CGRectGetMaxX();
          dVar14 = dVar12 + 8.0;
          func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_112794354));
          _CGRectGetMinX();
          dVar12 = dVar12 - dVar13;
          if (dVar12 < dVar14) goto LAB_10b81be24;
LAB_10b81bdf0:
          func_0x00010c1a7f60(lVar8,param_5,0);
          lVar8 = lVar9;
        }
        lVar6 = lVar6 + 1;
        lVar9 = lVar8;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_5,&uStack_160,auStack_120,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar7 = (long)_DAT_112794368;
  func_0x00010c162480(*(undefined8 *)(param_4 + lVar7),param_5,0);
  uVar3 = *(undefined8 *)(param_4 + lVar7);
  *(undefined8 *)(param_4 + lVar7) = 0;
  _objc_release(uVar3);
  if (lVar8 != 0) {
    uVar4 = *(undefined8 *)(param_4 + lVar10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c08de00(lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493a0(uVar4,param_5,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar7);
    *(undefined8 *)(param_4 + lVar7) = uVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar4);
    func_0x00010c162480(*(undefined8 *)(param_4 + lVar7),param_5,1);
  }
  _objc_release(lVar8);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_6 + _DAT_11279436c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81bf6c; end: 10b81bf8b; -[SIGActionBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81bf6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11279436c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81bf8c; end: 10b81bf9f; -[SIGActionBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81bf8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11279436c,param_3);
  return;
}



/* Entry: 10b81bfa0; end: 10b81bfaf; -[SIGActionBar actionItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b81bfa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279435c);
}



/* Entry: 10b81bfb0; end: 10b81c04b; -[SIGActionBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81bfb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279435c,0);
  _objc_destroyWeak(param_1 + _DAT_11279436c);
  _objc_storeStrong(param_1 + _DAT_112794368,0);
  _objc_storeStrong(param_1 + _DAT_112794350,0);
  _objc_storeStrong(param_1 + _DAT_112794364,0);
  _objc_storeStrong(param_1 + _DAT_112794354,0);
  _objc_storeStrong(param_1 + _DAT_112794358,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794360,0);
  return;
}



/* Entry: 10b81c04c; end: 10b81c097; +[SIGActionBarButton actionBarButtonWithItem:] */

void FUN_10b81c04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6670;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01fc40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b81c098; end: 10b81c903; -[SIGActionBarButton initWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b81c098(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  long lVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_11270b330;
  uVar42 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar43 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar44 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar45 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(uVar42,uVar43,uVar44,uVar45,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar40 = (long)_DAT_112794370;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar40);
    *(undefined8 **)((long)puVar1 + lVar40) = param_3;
    _objc_release(uVar2);
    puVar41 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar41);
    puVar3 = param_3;
    func_0x00010beecec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(puVar1);
    _objc_release(puVar3);
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined8 *)0x0) {
      puVar41 = (undefined *)0x0;
    }
    else {
      puVar41 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar3 = param_3;
      func_0x00010bfe6ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      _objc_release(puVar3);
      func_0x00010c219b60(puVar41);
      func_0x00010c182220(puVar41);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(puVar41);
      _objc_release(puVar4);
    }
    _objc_release(param_3);
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    puVar4 = (undefined *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      puVar4 = PTR_PTR_1126aea58;
      _objc_alloc();
      func_0x00010c013de0(uVar42,uVar43,uVar44,uVar45);
      func_0x00010c219b60();
      func_0x00010c1cfce0(puVar4);
      func_0x00010c213040(puVar4);
      puVar3 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar4);
      _objc_release(puVar3);
      func_0x00010c1c3ae0(0x4030000000000000,puVar4);
      func_0x00010c165e00(puVar4);
      func_0x00010c21ad00(puVar4);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar4);
      _objc_release(puVar6);
      func_0x00010c23d620(puVar4);
    }
    _objc_release(param_3);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c21e900();
    func_0x00010c219b60(puVar7);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar7);
    func_0x00010befbb60(puVar7);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar41;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar41;
    puStack_f0 = puVar10;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar41;
    puStack_e8 = puVar13;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf49420(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar41;
    puStack_e0 = puVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf49420(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    puStack_d8 = puVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar41;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar4;
    puStack_d0 = puVar20;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar4;
    puStack_c8 = puVar23;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar4;
    puStack_c0 = puVar26;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar7;
    puStack_b8 = puVar29;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar7;
    puStack_b0 = puVar31;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar32;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar7;
    puStack_a8 = puVar33;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar7;
    puStack_a0 = puVar36;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar37;
    func_0x00010bf494e0(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar39 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar38;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar39);
    _objc_release(puVar38);
    _objc_release(puVar37);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar5);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar3);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = param_3;
      func_0x00010c15ac20();
      _objc_release(puVar3);
      if (puVar5 != (undefined8 *)0x0) {
        puVar6 = PTR_PTR_1126e1650;
        _objc_alloc_init();
        lVar40 = (long)_DAT_112794374;
        uVar42 = *(undefined8 *)((long)puVar1 + lVar40);
        *(undefined **)((long)puVar1 + lVar40) = puVar6;
        _objc_release(uVar42);
        uVar42 = *(undefined8 *)((long)puVar1 + lVar40);
        puVar3 = param_3;
        func_0x00010c269d40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15ac20(param_3);
        func_0x00010befbd40(uVar42);
        _objc_release(puVar3);
      }
    }
    func_0x00010befbd60(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar41);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 10b81c904; end: 10b81c917; -[SIGActionBarButton intrinsicContentSize] */

undefined1  [16] FUN_10b81c904(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4046000000000000;
  auVar1._0_8_ = 0x4048000000000000;
  return auVar1;
}



/* Entry: 10b81c918; end: 10b81c933; -[SIGActionBarButton _didPressButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81c918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794374),PTR_s_sendActionsWithSender__112634758,
             *(undefined8 *)(param_1 + _DAT_112794370));
  return;
}



/* Entry: 10b81c934; end: 10b81c973; -[SIGActionBarButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81c934(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794374,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794370,0);
  return;
}



/* Entry: 10b81c974; end: 10b81ca4f; +[SIGActionBarItem actionBarItemWithImage:title:actionSheetCellTitle:isEnabled:target:selector:accessibilityIdentifier:] */

void FUN_10b81c974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b66b8;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01c400();
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b81ca50; end: 10b81ca83; +[SIGActionBarItem actionBarItemWithImage:title:target:selector:accessibilityIdentifier:] */

void FUN_10b81ca50(void)

{
  func_0x00010beedee0();
  return;
}



/* Entry: 10b81ca84; end: 10b81cbbf; -[SIGActionBarItem initWithImage:title:actionSheetCellTitle:isEnabled:target:selector:accessibilityIdentifier:] */

undefined1 *
FUN_10b81ca84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_11270b338;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b81cbc0; end: 10b81cbc7; -[SIGActionBarItem image] */

undefined8 FUN_10b81cbc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b81cbc8; end: 10b81cbcf; -[SIGActionBarItem title] */

undefined8 FUN_10b81cbc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b81cbd0; end: 10b81cbd7; -[SIGActionBarItem actionSheetCellTitle] */

undefined8 FUN_10b81cbd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b81cbd8; end: 10b81cbdf; -[SIGActionBarItem isEnabled] */

undefined1 FUN_10b81cbd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b81cbe0; end: 10b81cbf7; -[SIGActionBarItem target] */

void FUN_10b81cbe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81cbf8; end: 10b81cbff; -[SIGActionBarItem selector] */

undefined8 FUN_10b81cbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b81cc00; end: 10b81cc07; -[SIGActionBarItem accessibilityIdentifier] */

undefined8 FUN_10b81cc00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b81cc08; end: 10b81cc57; -[SIGActionBarItem .cxx_destruct] */

void FUN_10b81cc08(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b81cc58; end: 10b81cf33; -[SIGBottomBar initWithContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b81cc58(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puStack_88 = PTR_PTR_11270b340;
  puVar14 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar14,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar14 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar14 + (long)_DAT_112794394) = 1;
    func_0x00010c219b60(puVar14);
    func_0x00010c219b60(param_3);
    lVar16 = (long)_DAT_112794398;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined8 **)((long)puVar14 + lVar16) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar14 + (long)_DAT_11279439c) = 1;
    func_0x00010befbb60(puVar14);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    puStack_80 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010c08e400(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    puStack_78 = puVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar14;
    func_0x00010c1408a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar13 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    puVar3 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar14 + (long)_DAT_1127943a0);
    *(undefined8 *)((long)puVar14 + (long)_DAT_1127943a0) = uVar2;
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(uVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar14;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_112794394;
  puVar14 = param_3;
  if ((uint)*(byte *)((long)param_3 + lVar16) != (uint)puVar3) {
    *(undefined1 *)((long)param_3 + lVar16) = 1;
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010bdf8200(param_3);
      puVar14 = *(undefined8 **)((long)param_3 + (long)_DAT_1127943a0);
      func_0x00010c162480(puVar14);
    }
    else {
      func_0x00010c162480(*(undefined8 *)((long)param_3 + (long)_DAT_1127943a0));
      func_0x00010bdc4ec0(param_3);
      func_0x00010c1a7f60(param_3);
    }
    *(char *)((long)param_3 + lVar16) = (char)puVar3;
  }
  return puVar14;
}



/* Entry: 10b81cf34; end: 10b81cfcf; -[SIGBottomBar setManagesAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81cf34(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794394;
  if (*(byte *)(param_1 + lVar1) != param_3) {
    *(undefined1 *)(param_1 + lVar1) = 1;
    if ((param_3 & 1) == 0) {
      func_0x00010bdf8200(param_1);
      func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127943a0),param_2,1);
    }
    else {
      func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127943a0),param_2,0);
      func_0x00010bdc4ec0(param_1);
      func_0x00010c1a7f60(param_1,param_2,*(undefined1 *)(param_1 + _DAT_11279439c));
    }
    *(char *)(param_1 + lVar1) = (char)param_3;
  }
  return;
}



/* Entry: 10b81cfd0; end: 10b81d0d7; -[SIGBottomBar setShown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81cfd0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  *(char *)(param_1 + _DAT_11279439c) = (char)param_3;
  if (*(char *)(param_1 + _DAT_112794394) == '\x01') {
    if (param_3 != 0) {
      func_0x00010c1a7f60(param_1,param_2,0);
    }
    lVar1 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bdcea80(param_1);
      func_0x00010bdceaa0(param_1);
      uVar2 = 0x3fc999999999999a;
      if (param_3 == 0) {
        uVar2 = 0x3fb999999999999a;
      }
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10b81d0d8;
      puStack_48 = &UNK_110845ce0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10b81d148;
      puStack_70 = &UNK_110841f20;
      lStack_68 = param_1;
      lStack_40 = param_1;
      uStack_38 = (char)param_3;
      func_0x00010bf03420(uVar2,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_60,&puStack_88);
    }
  }
  return;
}



/* Entry: 10b81d0d8; end: 10b81d147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d0d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,1);
  func_0x00010c168080(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  uVar1 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794398),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b81d148; end: 10b81d163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,
             (*(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279439c) ^ 0xff) & 1);
  return;
}



/* Entry: 10b81d164; end: 10b81d1bf; -[SIGBottomBar willMoveToSuperview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d164(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b340;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_willMoveToSuperview__112528100);
  if (*(char *)(param_1 + _DAT_112794394) == '\x01') {
    func_0x00010bdc4ec0(param_1);
  }
  return;
}



/* Entry: 10b81d1c0; end: 10b81d21b; -[SIGBottomBar didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d1c0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b340;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  if (*(char *)(param_1 + _DAT_112794394) == '\x01') {
    func_0x00010bdc4ec0(param_1);
  }
  return;
}



/* Entry: 10b81d21c; end: 10b81d277; -[SIGBottomBar didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d21c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b340;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToSuperview_1125bb968);
  if (*(char *)(param_1 + _DAT_112794394) == '\x01') {
    func_0x00010bdc4ec0(param_1);
  }
  return;
}



/* Entry: 10b81d278; end: 10b81d35b; -[SIGBottomBar _deactivateAllConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d278(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127943a4;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_1127943a8;
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_1127943ac;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_1127943b0;
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_1127943b4;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127943a0),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 10b81d35c; end: 10b81d967; -[SIGBottomBar _activateRelevantConstraints] */

/* WARNING: Possible PIC construction at 0x00010b81d628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b81d62c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d35c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1;
  if (*(char *)(param_1 + _DAT_112794394) == '\x01') {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
LAB_10b81d3e0:
      lVar13 = (long)_DAT_1127943ac;
      if (*(long *)(param_1 + lVar13) != 0) {
        func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar14 = (long)_DAT_1127943a4;
        func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        uVar1 = *(undefined8 *)(param_1 + lVar13);
        *(undefined8 *)(param_1 + lVar13) = 0;
        _objc_release(uVar1);
        uVar1 = *(undefined8 *)(param_1 + lVar14);
        *(undefined8 *)(param_1 + lVar14) = 0;
        _objc_release(uVar1);
      }
    }
    else {
      lVar14 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar13);
      if (lVar14 == 0) goto LAB_10b81d3e0;
    }
    lVar14 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar14;
    _objc_release();
    if (lVar14 != 0) {
      lVar14 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar14;
      _objc_release();
      if (lVar14 != 0) {
        lVar13 = param_1;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_1;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar12;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010c262ca0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_1;
        func_0x00010c262ca0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar7;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = (long)_DAT_1127943b4;
        uVar1 = *(undefined8 *)(param_1 + lVar15);
        *(undefined **)(param_1 + lVar15) = puVar11;
        _objc_release(uVar1);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar14);
        _objc_release(lVar12);
        _objc_release(lVar13);
        uVar1 = *(undefined8 *)(param_1 + lVar15);
        goto code_r0x00010beef8c0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar13 + _DAT_112794394) != '\x01') {
    return;
  }
  lVar12 = 0x10;
  if (*(char *)(lVar13 + _DAT_11279439c) == '\0') {
    lVar12 = 0x18;
  }
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar1 = *(undefined8 *)(lVar13 + *(int *)(&DAT_112794394 + lVar12));
code_r0x00010beef8c0:
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             uVar1);
  return;
}



/* Entry: 10b81d968; end: 10b81d9e7; -[SIGBottomBar _applyShownConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d968(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + _DAT_112794394) == '\x01') {
    bVar3 = *(char *)(param_1 + _DAT_11279439c) == '\0';
    lVar1 = 0x18;
    if (bVar3) {
      lVar1 = 0x10;
    }
    lVar2 = 0x10;
    if (bVar3) {
      lVar2 = 0x18;
    }
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + *(int *)(&DAT_112794394 + lVar1)));
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_1 + *(int *)(&DAT_112794394 + lVar2)));
    return;
  }
  return;
}



/* Entry: 10b81d9e8; end: 10b81da67; -[SIGBottomBar _applyShownKeyboardConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81d9e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + _DAT_112794394) == '\x01') {
    bVar3 = *(char *)(param_1 + _DAT_11279439c) == '\0';
    lVar1 = 0x1c;
    if (bVar3) {
      lVar1 = 0x14;
    }
    lVar2 = 0x14;
    if (bVar3) {
      lVar2 = 0x1c;
    }
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + *(int *)(&DAT_112794394 + lVar1)));
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_1 + *(int *)(&DAT_112794394 + lVar2)));
    return;
  }
  return;
}



/* Entry: 10b81da68; end: 10b81da77; -[SIGBottomBar isManagingAppearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b81da68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794394);
}



/* Entry: 10b81da78; end: 10b81da87; -[SIGBottomBar isShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b81da78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11279439c);
}



/* Entry: 10b81da88; end: 10b81db17; -[SIGBottomBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81da88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794398,0);
  _objc_storeStrong(param_1 + _DAT_1127943a0,0);
  _objc_storeStrong(param_1 + _DAT_1127943b0,0);
  _objc_storeStrong(param_1 + _DAT_1127943ac,0);
  _objc_storeStrong(param_1 + _DAT_1127943a8,0);
  _objc_storeStrong(param_1 + _DAT_1127943a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127943b4,0);
  return;
}



/* Entry: 10b81db18; end: 10b81db6b; -[SIGHorizontalCollectionViewLayout init] */

undefined1 * FUN_10b81db18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b348;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1f7ac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b81db6c; end: 10b81db9f; -[SIGHorizontalCollectionViewLayout collectionViewContentSize] */

void FUN_10b81db6c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270b348;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_collectionViewContentSize_1125adb90);
  return;
}



/* Entry: 10b81dba0; end: 10b81dba7; -[SIGHorizontalCollectionViewLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_10b81dba0(void)

{
  return 1;
}



/* Entry: 10b81dba8; end: 10b81dbe3; -[SIGHorizontalCollectionViewLayout layoutAttributesForElementsInRect:] */

void FUN_10b81dba8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270b348;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81dbe4; end: 10b81dc1f; -[SIGHorizontalCollectionViewLayout layoutAttributesForItemAtIndexPath:] */

void FUN_10b81dbe4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270b348;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_layoutAttributesForItemAtIndexPa_112600c70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81dc20; end: 10b81dc73; -[SIGHorizontalCollectionViewLayout _correctLayoutAttributesForRTL:] */

void FUN_10b81dc20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b81dc74;
  puStack_20 = &UNK_110d62430;
  uStack_18 = param_1;
  func_0x000107c31908(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81dc74; end: 10b81dc7f;  */

void FUN_10b81dc74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde9db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__correctElementAttributesForRTL__112558108,
             param_2);
  return;
}



/* Entry: 10b81dc80; end: 10b81dd27; -[SIGHorizontalCollectionViewLayout _correctElementAttributesForRTL:] */

void FUN_10b81dc80(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x00010bf51e00(param_6);
  puStack_38 = PTR_PTR_11270b348;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_collectionViewContentSize_1125adb90);
  dVar1 = param_1;
  func_0x00010bf40120(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_4);
  if (0.0 < param_3 - param_1) {
    func_0x00010bf345e0(param_6);
    func_0x00010bf345e0(param_6);
    func_0x00010c17a6a0((param_3 - param_1) + dVar1,param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 10b81dd28; end: 10b81ddab; -[SIGSelectBarItemWrapper initWithItem:type:] */

undefined1 *
FUN_10b81dd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b350;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b81ddac; end: 10b81ddb3; -[SIGSelectBarItemWrapper SIGSelectBarItemTitle] */

void FUN_10b81ddac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_SIGSelectBarItemTitle_11254e3a8);
  return;
}



/* Entry: 10b81ddb4; end: 10b81ddbb; -[SIGSelectBarItemWrapper SIGSelectBarItemType] */

void FUN_10b81ddb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_SIGSelectBarItemType_11254e3b0);
  return;
}



/* Entry: 10b81ddbc; end: 10b81ddc3; -[SIGSelectBarItemWrapper accessibilityIdentifier] */

void FUN_10b81ddbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 10b81ddc4; end: 10b81de7b; -[SIGSelectBarItemWrapper isEqual:] */

undefined8 FUN_10b81ddc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar4 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126e1658;
    _objc_opt_class(PTR_PTR_1126e1658);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x10);
      _objc_opt_respondsToSelector(uVar3,PTR_s_isSelectBarItemEqual__1125fcf98);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      if ((uVar3 & 1) == 0) {
        func_0x00010c071ae0(uVar4);
      }
      else {
        func_0x00010c07d620();
      }
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b81de7c; end: 10b81debf; -[SIGSelectBarItemWrapper hash] */

void FUN_10b81de7c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  _objc_opt_respondsToSelector(uVar1,PTR_s_selectBarItemHash_112633c48);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1588b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_selectBarItemHash_112633c48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b81dec0; end: 10b81dee3; -[SIGSelectBarItemWrapper copyWithZone:] */

undefined8 FUN_10b81dec0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b81dee4; end: 10b81df2b; -[SIGSelectBarItemWrapper customIcon] */

void FUN_10b81dee4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  _objc_opt_respondsToSelector(uVar1,PTR_s_customIcon_1125b5f40);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf61660(*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81df2c; end: 10b81df33; -[SIGSelectBarItemWrapper item] */

undefined8 FUN_10b81df2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b81df34; end: 10b81df3f; -[SIGSelectBarItemWrapper .cxx_destruct] */

void FUN_10b81df34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b81df40; end: 10b81f187; -[SIGSelectBar initWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b81df40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined *puStack_1a0;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar48 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar49 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar50 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar51 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar48,uVar49,uVar50,uVar51);
  puStack_168 = PTR_PTR_11270b358;
  puVar2 = &uStack_170;
  uStack_170 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithContentView__1125de998,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar43 = (long)_DAT_1127943c8;
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar43);
    *(undefined8 **)((long)puVar2 + lVar43) = puVar1;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar3 = uVar48;
    func_0x00010c013de0(uVar48,uVar49,uVar50,uVar51);
    lVar46 = (long)_DAT_1127943cc;
    uVar41 = *(undefined8 *)((long)puVar2 + lVar46);
    *(undefined **)((long)puVar2 + lVar46) = puVar4;
    _objc_release(uVar41);
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar43));
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar46));
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127943d0) = 0;
    *(bool *)((long)puVar2 + (long)_DAT_1127943d4) = param_3 == 0;
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127943d8) = 0;
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127943dc);
    *(undefined **)((long)puVar2 + (long)_DAT_1127943dc) = puVar4;
    _objc_release(uVar41);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127943e0);
    *(undefined **)((long)puVar2 + (long)_DAT_1127943e0) = puVar4;
    _objc_release(uVar41);
    func_0x00010bf41ac0(PTR_PTR_1126e1660);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127943e4) = uVar3;
    *(long *)((long)puVar2 + (long)_DAT_1127943e8) = param_3;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + lVar43);
    func_0x00010bf1ff80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar3;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + lVar43);
    func_0x00010c08e400(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar41;
    uVar9 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar2 + lVar43);
    func_0x00010c1408a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar42 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar42;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar11);
    _objc_release(uVar42);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar41);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar11 = PTR_PTR_1126e1668;
    _objc_alloc_init();
    func_0x00010c1f7ac0();
    func_0x00010c1c82c0(0x4010000000000000,puVar11);
    func_0x00010c1c8300(0,puVar11);
    func_0x00010c1a7960(0x4030000000000000,0,puVar11);
    puVar12 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(uVar48,uVar49,uVar50,uVar51);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127943ec);
    *(undefined **)((long)puVar2 + (long)_DAT_1127943ec) = puVar12;
    _objc_release(uVar3);
    _objc_retain(puVar12);
    func_0x00010c219b60(puVar12);
    func_0x00010c2026e0(puVar12);
    func_0x00010c2025c0(puVar12);
    func_0x00010c189840(puVar12);
    func_0x00010c18b5e0(puVar12);
    func_0x00010c1f7e20(puVar12);
    lVar43 = param_3;
    FUN_10b81f188(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar12);
    _objc_release(lVar43);
    puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    puVar14 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar13);
    func_0x00010c16e9a0(puVar12);
    _objc_opt_class(PTR_PTR_1126e1660);
    puVar4 = PTR_PTR_1126e1660;
    _objc_opt_class(PTR_PTR_1126e1660);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(puVar12);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar44 = (long)_DAT_1127943f0;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar44);
    *(undefined **)((long)puVar2 + lVar44) = puVar4;
    _objc_release(uVar3);
    uVar41 = *(undefined8 *)((long)puVar2 + lVar44);
    func_0x00010c219b60();
    puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar41;
    func_0x00010c0d0ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar41);
    func_0x00010be8ebe0(puVar2);
    puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar45 = (long)_DAT_1127943f4;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar45);
    *(undefined **)((long)puVar2 + lVar45) = puVar15;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar45));
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar16;
    func_0x00010bf414e0(0x3fa999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar45));
    _objc_release(puVar15);
    _objc_release(puVar16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4032000000000000);
    _objc_release(uVar3);
    func_0x00010be3b7a0(puVar2);
    puVar15 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar2 + lVar45));
    puVar16 = PTR_PTR_1126e1670;
    _objc_alloc();
    func_0x00010c014be0(uVar48,uVar49,uVar50,uVar51);
    func_0x00010c219b60();
    puVar17 = PTR_PTR_1126e1670;
    _objc_alloc();
    func_0x00010c014be0(uVar48,uVar49,uVar50,uVar51);
    func_0x00010c219b60();
    lVar43 = param_3;
    FUN_10b81f188(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(lVar43);
    puStack_1a0 = PTR_PTR_1126e1648;
    if (param_3 == 1) {
      func_0x00010bf1c960();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 0) {
      func_0x00010c2a4b40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_1a0 = (undefined *)0x0;
    }
    func_0x00010c219b60(puStack_1a0);
    lVar43 = (long)_DAT_1127943f8;
    _objc_retain(puStack_1a0);
    uVar48 = *(undefined8 *)((long)puVar2 + lVar43);
    *(undefined **)((long)puVar2 + lVar43) = puStack_1a0;
    _objc_release(uVar48);
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar46));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar46));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar46));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar46));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar46));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar46));
    uVar50 = *(undefined8 *)((long)puVar2 + lVar44);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar48 = uVar50;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar48;
    uVar51 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + lVar44);
    func_0x00010c2793a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar49 = uVar51;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar49;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = (long)_DAT_1127943fc;
    uVar41 = *(undefined8 *)((long)puVar2 + lVar43);
    *(undefined **)((long)puVar2 + lVar43) = puVar18;
    _objc_release(uVar41);
    _objc_release(uVar49);
    _objc_release(uVar3);
    _objc_release(uVar51);
    _objc_release(uVar48);
    _objc_release(uVar50);
    uVar50 = *(undefined8 *)((long)puVar2 + lVar44);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar48 = uVar50;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar48;
    uVar51 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + lVar44);
    func_0x00010c2793a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar49 = uVar51;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar49;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = (long)_DAT_112794400;
    uVar41 = *(undefined8 *)((long)puVar2 + lVar47);
    *(undefined **)((long)puVar2 + lVar47) = puVar18;
    _objc_release(uVar41);
    _objc_release(uVar49);
    _objc_release(uVar3);
    _objc_release(uVar51);
    _objc_release(uVar48);
    _objc_release(uVar50);
    if (param_3 == 1) {
      uVar51 = *(undefined8 *)((long)puVar2 + lVar43);
      uVar49 = *(undefined8 *)((long)puVar2 + lVar44);
      func_0x00010c08de00(uVar49);
      _objc_retainAutoreleasedReturnValue();
      uVar50 = *(undefined8 *)((long)puVar2 + lVar46);
      func_0x00010c08de00(uVar50);
      _objc_retainAutoreleasedReturnValue();
      uVar48 = uVar49;
      func_0x00010bf493c0(0,uVar49);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar2 + lVar43);
      *(undefined8 *)((long)puVar2 + lVar43) = uVar51;
      _objc_release(uVar3);
      _objc_release(uVar48);
      _objc_release(uVar50);
      _objc_release(uVar49);
      uVar51 = *(undefined8 *)((long)puVar2 + lVar47);
      uVar49 = *(undefined8 *)((long)puVar2 + lVar44);
      func_0x00010c08de00(uVar49);
      _objc_retainAutoreleasedReturnValue();
      uVar50 = *(undefined8 *)((long)puVar2 + lVar46);
      func_0x00010c08de00(uVar50);
      _objc_retainAutoreleasedReturnValue();
      uVar48 = uVar49;
      func_0x00010bf493c0(0x4030000000000000,uVar49);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar2 + lVar47);
      *(undefined8 *)((long)puVar2 + lVar47) = uVar51;
      _objc_release(uVar3);
      _objc_release(uVar48);
      _objc_release(uVar50);
      _objc_release(uVar49);
    }
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar51 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar48 = uVar51;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar48;
    lVar47 = (long)_DAT_112794404;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar47);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar49 = uVar3;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar49;
    lVar43 = (long)_DAT_112794408;
    uVar41 = *(undefined8 *)((long)puVar2 + lVar43);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = uVar41;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar50;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)((long)puVar2 + (long)_DAT_11279440c);
    *(undefined **)((long)puVar2 + (long)_DAT_11279440c) = puVar18;
    _objc_release(uVar42);
    _objc_release(uVar50);
    _objc_release(uVar41);
    _objc_release(uVar49);
    _objc_release(uVar3);
    _objc_release(uVar48);
    _objc_release(uVar51);
    uVar51 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar48 = uVar51;
    func_0x00010bf49420(0x404a000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar48;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar47);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar49 = uVar3;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar49;
    uVar41 = *(undefined8 *)((long)puVar2 + lVar43);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = uVar41;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar50;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794410);
    *(undefined **)((long)puVar2 + (long)_DAT_112794410) = puVar18;
    _objc_release(uVar42);
    _objc_release(uVar50);
    _objc_release(uVar41);
    _objc_release(uVar49);
    _objc_release(uVar3);
    _objc_release(uVar48);
    _objc_release(uVar51);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010bed5660(puVar2);
    func_0x00010bedf1e0(puVar2);
    func_0x00010bedfa40(puVar2);
    uVar41 = *(undefined8 *)((long)puVar2 + lVar44);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar48 = uVar41;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uVar48;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar44);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar49 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uVar49;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar50;
    uVar9 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uVar9;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    uStack_148 = uVar51;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar16;
    puStack_140 = puVar19;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar16;
    puStack_138 = puVar21;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar16;
    puStack_130 = puVar24;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)puVar2 + lVar45);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar17;
    puStack_128 = puVar27;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar28;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar17;
    puStack_120 = puVar29;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar17;
    puStack_118 = puVar32;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar33;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar17;
    puStack_110 = puVar35;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puStack_1a0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar36;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar38;
    uVar39 = *(undefined8 *)((long)puVar2 + lVar46);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar39;
    func_0x00010bf49420(0x4050000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_100 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar39);
    _objc_release(puVar38);
    _objc_release(puVar37);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(uVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(uVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(uVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(uVar10);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(uVar51);
    _objc_release(uVar9);
    _objc_release(uVar50);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar49);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar48);
    _objc_release(uVar42);
    _objc_release(uVar41);
    if (param_3 == 0) {
      uVar49 = *(undefined8 *)((long)puVar2 + lVar44);
      func_0x00010c08de00(uVar49);
      _objc_retainAutoreleasedReturnValue();
      uVar50 = *(undefined8 *)((long)puVar2 + lVar46);
      func_0x00010c08de00(uVar50);
      _objc_retainAutoreleasedReturnValue();
      uVar48 = uVar49;
      func_0x00010bf493c0(0x4030000000000000,uVar49);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar40;
      func_0x00010bf09f60(puVar40);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar40);
      _objc_release(uVar48);
      _objc_release(uVar50);
      _objc_release(uVar49);
      puVar40 = puVar18;
    }
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112794414) = 0;
    func_0x00010beaa6a0(puVar2);
    func_0x00010c2024e0(puVar2);
    _objc_release(puVar40);
    _objc_release(puStack_1a0);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    if ((puVar1 == (undefined8 *)0x0) || (puVar1 == (undefined8 *)0x1)) {
      puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  return puVar2;
}



/* Entry: 10b81f188; end: 10b81f1cb;  */

void FUN_10b81f188(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x88;
  }
  else {
    if (param_1 != 1) goto LAB_10b81f1c8;
    uVar1 = 0xffffffff80000029;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10b81f1c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b81f1cc; end: 10b81f253; -[SIGSelectBar addItem:] */

void FUN_10b81f1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_10b81f254;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b81f254; end: 10b81f25f;  */

void FUN_10b81f254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addItem__11254f630,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b81f260; end: 10b81f37f; -[SIGSelectBar _addItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81f260(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bdc2820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126e1658;
    _objc_alloc();
    lVar4 = (long)_DAT_1127943e8;
    func_0x00010c01fd20();
    uVar3 = *(ulong *)(param_1 + _DAT_1127943dc);
    func_0x00010bf4b900(uVar3,param_2,puVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((uVar3 & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + lVar4);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10b81f380;
      puStack_60 = &UNK_110844b80;
      lStack_58 = param_1;
      _objc_retain(puVar2);
      puStack_50 = puVar2;
      func_0x00010c0f9680(puVar1,param_2,&puStack_78);
      func_0x00010c2024e0(param_1,param_2,1);
      func_0x00010be9c100(param_1);
      func_0x00010bedc240(param_1);
      _objc_release(puStack_50);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b81f380; end: 10b81f40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81f380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_48 = FUN_10b81f40c;
  puStack_40 = &UNK_110844b80;
  lStack_38 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_1127943ec);
  uStack_50 = 0xc2000000;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x00010c0f8420(uVar2,param_2,&puStack_58,0);
  _objc_release(uStack_30);
  return;
}



/* Entry: 10b81f40c; end: 10b81f58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81f40c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_1127943dc;
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127943ec);
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010bf529e0(lVar1);
      func_0x00010bfed020(puVar2,param_2,lVar1 + -1,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128de0(uVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127943ec);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010bf529e0(lVar5);
  func_0x00010bfed020(puVar2,param_2,lVar5 + -1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066a40(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar4 = *(undefined8 *)(puVar2 + _DAT_1127943ec);
  lVar5 = *(long *)(puVar2 + _DAT_1127943dc);
  func_0x00010bf529e0(lVar5);
  func_0x00010bfed020(puVar3,param_2,lVar5 + -1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(uVar4,param_2,puVar3,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b81f58c; end: 10b81f5fb; -[SIGSelectBar _scrollToLastItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81f58c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127943ec);
  lVar1 = *(long *)(param_1 + _DAT_1127943dc);
  func_0x00010bf529e0(lVar1);
  func_0x00010bfed020(puVar2,param_2,lVar1 + -1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(uVar3,param_2,puVar2,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b81f5fc; end: 10b81f683; -[SIGSelectBar removeItem:] */

void FUN_10b81f5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_10b81f684;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b81f684; end: 10b81f68f;  */

void FUN_10b81f684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeItem__112580b10,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b81f690; end: 10b81f7af; -[SIGSelectBar _removeItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81f690(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bdc2820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126e1658;
    _objc_alloc();
    lVar4 = (long)_DAT_1127943e8;
    func_0x00010c01fd20();
    lVar5 = (long)_DAT_1127943dc;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf4b900(uVar3,param_2,puVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10b81f7b0;
      puStack_60 = &UNK_110844b80;
      lStack_58 = param_1;
      _objc_retain(puVar2);
      puStack_50 = puVar2;
      uStack_48 = uVar3;
      func_0x00010c0f9680(puVar1,param_2,&puStack_78);
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010bf529e0(lVar4);
      func_0x00010c2024e0(param_1,param_2,lVar4 != 0);
      func_0x00010bedc240(param_1);
      _objc_release(puStack_50);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b81f7b0; end: 10b81f843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81f7b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_58 = FUN_10b81f844;
  puStack_50 = &UNK_110844b80;
  lStack_48 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_1127943ec);
  uStack_60 = 0xc2000000;
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010c0f8420(uVar2,param_2,&puStack_68,0);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10b81f844; end: 10b81f9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81f844(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127943dc;
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + lVar10);
  func_0x00010bfecde0(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10));
  lVar11 = (long)_DAT_1127943ec;
  puVar9 = *(undefined **)(*(long *)(param_1 + 0x20) + lVar11);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 1;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf6c100(puVar9);
  _objc_release(puVar5);
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar10);
    func_0x00010bf529e0();
    puVar5 = (undefined *)0x0;
    if (lVar4 != 0) {
      puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + lVar10);
      func_0x00010bf529e0();
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      if (puVar2 == puVar5) {
        plVar1 = (long *)(param_1 + 0x20);
        param_1 = *(long *)(*plVar1 + lVar11);
        func_0x00010bf529e0(*(undefined8 *)(*plVar1 + lVar10));
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 1;
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_78 = puVar6;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010c128de0(param_1);
        _objc_release(puVar9);
        puVar5 = puVar6;
        _objc_release();
        puVar2 = puVar6;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10b81f9e8;
  puStack_b0 = puVar3;
  puStack_a8 = puVar9;
  puStack_a0 = puVar2;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10b81fa80;
  puStack_d0 = &UNK_110844b80;
  puStack_c8 = puVar5;
  puStack_c0 = puVar7;
  uStack_b8 = uVar8;
  _objc_retain(puVar7);
  func_0x000107c312cc("APPSTORE",&puStack_e8);
  _objc_release(puStack_c0);
  _objc_release(puVar7);
  return;
}



/* Entry: 10b81f9e8; end: 10b81fa7f; -[SIGSelectBar updateItemAtIndex:index:] */

void FUN_10b81f9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b81fa80;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10b81fa80; end: 10b81fa8f;  */

void FUN_10b81fa80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateItemAtIndex_index__112594170,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b81fa90; end: 10b81fbb3; -[SIGSelectBar _updateItemAtIndex:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81fa90(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127943dc;
  uVar2 = *(ulong *)(param_1 + lVar6);
  func_0x00010bf529e0();
  if (param_4 < uVar2) {
    puVar3 = PTR_PTR_1126e1658;
    _objc_alloc();
    func_0x00010c01fd20();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127943e0);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0dfd40(uVar4,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar5,param_2,uVar4);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b81fbb4;
    puStack_60 = &UNK_110844b80;
    lStack_58 = param_1;
    puStack_50 = puVar3;
    uStack_48 = param_4;
    _objc_retain(puVar3);
    func_0x00010c0f9680(puVar1,param_2,&puStack_78);
    func_0x00010bedc240(param_1);
    _objc_release(puStack_50);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b81fbb4; end: 10b81fc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81fbb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_48 = FUN_10b81fc40;
  puStack_40 = &UNK_110844b80;
  lStack_38 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_1127943ec);
  uStack_50 = 0xc2000000;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x00010c0f8420(uVar2,param_2,&puStack_58,0);
  _objc_release(uStack_30);
  return;
}



/* Entry: 10b81fc40; end: 10b81fd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b81fc40(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c130f40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127943dc),param_2,
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127943ec);
  puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar7;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_1127943dc;
  puVar2 = *(undefined **)(puVar7 + lVar6);
  func_0x00010bf529e0();
  if (puVar2 < (undefined *)0x2) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(puVar7 + lVar6);
    _objc_retain(puVar2);
    puVar7 = puVar2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        lVar8 = *(long *)((long)puVar9 * 8);
        lVar3 = lVar8;
        func_0x00010bdc2840();
        if ((lVar3 != 1) && (func_0x00010bdc2840(), lVar8 != 2)) {
          puVar7 = (undefined *)0x0;
          goto LAB_10b81fe20;
        }
        puVar9 = puVar9 + 1;
      } while (puVar7 != puVar9);
      puVar7 = puVar2;
      func_0x00010bf52a60();
    }
    puVar7 = (undefined *)0x1;
LAB_10b81fe20:
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((puVar2[_DAT_1127943d4] == '\x01') &&
     (puVar7 = puVar2, func_0x00010be462a0(), ((ulong)puVar7 & 1) != 0)) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = (long)_DAT_1127943d8;
    iVar1 = _DAT_112794410;
    if (puVar2[lVar4] == '\x01') {
      puVar7 = puVar2;
      func_0x00010be6cb60(puVar2);
      puVar2[lVar4] = 0;
      return puVar7;
    }
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    iVar1 = _DAT_11279440c;
  }
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(puVar2 + iVar1));
  return puVar7;
}



/* Entry: 10b81fd20; end: 10b81fe5f; -[SIGSelectBar _itemsSupportNewGroupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b81fd20(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_1127943dc;
  puVar2 = *(undefined **)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (puVar2 < (undefined *)0x2) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + lVar5);
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        lVar7 = *(long *)((long)puVar8 * 8);
        lVar3 = lVar7;
        func_0x00010bdc2840();
        if ((lVar3 != 1) && (func_0x00010bdc2840(), lVar7 != 2)) {
          puVar6 = (undefined *)0x0;
          goto LAB_10b81fe20;
        }
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar6 = puVar2;
      func_0x00010bf52a60();
    }
    puVar6 = (undefined *)0x1;
LAB_10b81fe20:
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((puVar2[_DAT_1127943d4] == '\x01') &&
     (puVar6 = puVar2, func_0x00010be462a0(), ((ulong)puVar6 & 1) != 0)) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = (long)_DAT_1127943d8;
    iVar1 = _DAT_112794410;
    if (puVar2[lVar4] == '\x01') {
      puVar6 = puVar2;
      func_0x00010be6cb60(puVar2);
      puVar2[lVar4] = 0;
      return puVar6;
    }
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    iVar1 = _DAT_11279440c;
  }
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(puVar2 + iVar1));
  return puVar6;
}



/* Entry: 10b81fe60; end: 10b81ff23; -[SIGSelectBar _updateNewGroupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81fe60(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + (long)_DAT_1127943d4) == '\x01') &&
     (uVar2 = param_1, func_0x00010be462a0(), (uVar2 & 1) != 0)) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = (long)_DAT_1127943d8;
    iVar1 = _DAT_112794410;
    if (*(char *)(param_1 + lVar3) == '\x01') {
      func_0x00010be6cb60(param_1);
      *(undefined1 *)(param_1 + lVar3) = 0;
      return;
    }
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    iVar1 = _DAT_11279440c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + (long)iVar1));
  return;
}



/* Entry: 10b81ff24; end: 10b820087; -[SIGSelectBar showTooltipFromMoreButton:forDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81ff24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = param_1;
  _objc_retain(param_7);
  func_0x00010c1c9020(param_5,param_6,1);
  lVar4 = (long)_DAT_1127943cc;
  func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar4));
  lVar5 = param_5;
  func_0x00010c07e040();
  if ((int)lVar5 != 0) {
    func_0x00010bf8d060(param_5);
    puVar1 = PTR_PTR_1126b09c0;
    _objc_alloc();
    func_0x00010c051640();
    lVar5 = (long)_DAT_112794418;
    uVar2 = *(undefined8 *)(param_5 + lVar5);
    *(undefined **)(param_5 + lVar5) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1798c0(*(undefined8 *)(param_5 + lVar5),param_6,1);
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    lVar6 = (long)_DAT_11279441c;
    uVar2 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010bfe90c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010bf513e0(uVar3,param_6,*(undefined8 *)(param_5 + lVar6));
    _objc_release(uVar2);
    uVar2 = uVar7;
    _CGRectGetMidX(uVar7,param_2,param_3,param_4);
    _CGRectGetMinY(uVar7,param_2,param_3,param_4);
    func_0x00010c10c340(uVar2,uVar7,param_1,*(undefined8 *)(param_5 + lVar5),param_6,
                        *(undefined8 *)(param_5 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b820088; end: 10b820177; -[SIGSelectBar showTooltipFromSendToButton:forDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b820088(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = param_1;
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c07e040();
  if ((int)lVar1 != 0) {
    func_0x00010bf8d060(param_2);
    puVar2 = PTR_PTR_1126b09c0;
    _objc_alloc();
    func_0x00010c051640();
    lVar4 = (long)_DAT_112794420;
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    *(undefined **)(param_2 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1798c0(*(undefined8 *)(param_2 + lVar4),param_3,1);
    lVar5 = (long)_DAT_1127943f8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
    _CGRectGetMidX();
    uVar3 = uVar6;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
    _CGRectGetMinY();
    func_0x00010c10c340(uVar6,uVar3,param_1,*(undefined8 *)(param_2 + lVar4),param_3,
                        *(undefined8 *)(param_2 + _DAT_1127943cc));
  }
  _objc_release(param_4);
  return lVar1;
}



/* Entry: 10b820178; end: 10b8201b3; -[SIGSelectBar setMoreButtonOverrideWithButton:] */

void FUN_10b820178(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdef280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8ebe0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8201b4; end: 10b820233; -[SIGSelectBar _createLeadingActivityViewWithButton:] */

void FUN_10b8201b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010befbd60(param_3,param_2,param_1,PTR_s__moreButtonTapped_112548288,0x40);
  func_0x00010c219b60(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(param_3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b820234; end: 10b8204cb; -[SIGSelectBar _replaceMoreButtonWithButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b820234(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_1;
  func_0x00010bdef280();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11279441c;
  lVar1 = *(long *)(param_1 + lVar17);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar17));
  }
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(long *)(param_1 + lVar17) = lVar15;
  _objc_retain(lVar15);
  _objc_release(uVar16);
  lVar18 = (long)_DAT_1127943f0;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13);
  _objc_release(lVar15);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = (long)_DAT_112794408;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar2 + lVar1));
  uVar3 = *(undefined8 *)(lVar2 + _DAT_1127943f4);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf49420(0x4058800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112794404);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar1);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010bf49420(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + _DAT_112794410);
  *(undefined **)(lVar2 + _DAT_112794410) = puVar13;
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(uVar3);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1677c0(0,*(undefined8 *)(puVar13 + _DAT_112794408));
  uVar16 = *(undefined8 *)(puVar13 + _DAT_112794410);
  func_0x00010c0dfd40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(0x404a000000000000);
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar13,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b8204cc; end: 10b820653; -[SIGSelectBar _showNewGroupOnboardingLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8204cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112794408;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar10));
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127943f4);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf49420(0x4058800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794404);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49420(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112794410);
  *(undefined **)(param_1 + _DAT_112794410) = puVar6;
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1677c0(0,*(undefined8 *)(puVar6 + _DAT_112794408));
  uVar7 = *(undefined8 *)(puVar6 + _DAT_112794410);
  func_0x00010c0dfd40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(0x404a000000000000);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b820654; end: 10b8206bb; -[SIGSelectBar _hideNewGroupOnboardingLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b820654(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_112794408));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794410);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(0x404a000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b8206bc; end: 10b820763; -[SIGSelectBar _onboardingNewGroupAnimation] */

void FUN_10b8206bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010beba000();
  func_0x00010c08cdc0(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b820764;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b82076c;
  puStack_58 = &UNK_110841f20;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010bf03440(0x3fd3333333333333,0x3fd999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0x10002,&puStack_48,&puStack_70);
  return;
}



/* Entry: 10b820764; end: 10b82076b;  */

void FUN_10b820764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__hideNewGroupOnboardingLabel_11256b038);
  return;
}



/* Entry: 10b82076c; end: 10b8207bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82076c(long param_1)

{
  long lVar1;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794408));
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112794424;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1587e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b8207bc; end: 10b820847; -[SIGSelectBar dismissTappedForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8207bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112794424;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c158780();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b820848; end: 10b8208d3; -[SIGSelectBar setMoreButtonVisible:] */

/* WARNING: Possible PIC construction at 0x00010b8208bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8208c0) */
/* WARNING: Removing unreachable block (ram,0x00010be03840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b820848(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + _DAT_1127943d0) = (char)param_3;
  if (param_3 == 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_112794400));
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127943fc);
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_1127943fc));
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794400);
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             uVar1);
  return;
}



/* Entry: 10b8208d4; end: 10b8209bb; -[SIGSelectBar setSecondaryLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8208d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112794428;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11279442c;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
  }
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
    lVar3 = param_1;
    func_0x00010bf8d060();
    uVar1 = 2;
    if (lVar3 != 1) {
      uVar1 = 0;
    }
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,uVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127943cc),param_2,
                        *(undefined8 *)(param_1 + lVar4));
  }
  func_0x00010bed5660(param_1);
  func_0x00010bedf1e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


