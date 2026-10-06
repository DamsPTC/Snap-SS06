/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106852dbc; end: 106852e1f; -[SCSpotlightSideBySideHeaderView _badgeTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106852dbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_112751dc0) != 0) {
    puVar1 = *(undefined **)(param_1 + _DAT_112751dc4);
    if (puVar1 != (undefined *)0x0) {
      _objc_retain(puVar1);
      goto LAB_106852e10;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
LAB_106852e10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106852e20; end: 106853057; -[SCSpotlightSideBySideHeaderView _createLabelWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106852e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  
  puVar1 = PTR_PTR_1126ce748;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  dVar28 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar29 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8));
  puVar2 = puVar1;
  func_0x00010c218c60(0,0xc020000000000000);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010c212f20(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1fe720(0x4018000000000000,puVar2);
  dVar27 = 1.0;
  func_0x00010c1fe7a0(0,0x3ff0000000000000,puVar2);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  func_0x00010c04e840();
  iVar18 = (int)puVar19;
  _objc_release(param_3);
  func_0x00010c16b720(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar17 = 1;
  func_0x00010c21e900(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar17);
  lVar20 = lVar17;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar20;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112751dc8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(puVar2 + _DAT_112751ddc);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(puVar2 + _DAT_112751dd8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112751e00;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar20 = lVar7;
  if (lVar8 != 0) {
    lVar20 = lVar8;
  }
  lVar22 = (long)_DAT_112751df8;
  uVar25 = *(undefined8 *)(puVar2 + lVar22);
  _objc_retain(lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar25;
  func_0x00010bf493c0(0xc022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar2 + lVar22);
  uStack_e8 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  uVar11 = uVar10;
  func_0x00010bf493c0(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(puVar2 + lVar23);
  *(undefined **)(puVar2 + lVar23) = puVar1;
  _objc_release(uVar21);
  _objc_release(uVar11);
  _objc_release(lVar22);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar24);
  _objc_release(uVar25);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1068533a8;
  puStack_100 = &UNK_110841f80;
  puStack_f8 = puVar2;
  _objc_retain(uVar6);
  ppuVar12 = &puStack_118;
  uStack_f0 = uVar6;
  _objc_retainBlock();
  func_0x00010bedf040(puVar2);
  _objc_release(lVar17);
  if (iVar18 == 0) {
    (*(code *)ppuVar12[2])(ppuVar12);
  }
  else {
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    _objc_alloc();
    dVar27 = 5.26354424712089e-315;
    dVar28 = 5.2220990168286e-315;
    dVar29 = 5.26354424712089e-315;
    func_0x00010c0048c0(0x3e800000,0x3f800000);
    func_0x00010c168380(puVar1);
    _objc_release(puVar2);
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  _objc_release(ppuVar12);
  _objc_release(uStack_f0);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar26 = 0.0;
  lVar7 = *(long *)(*(long *)(lVar16 + 0x20) + (long)_DAT_112751dc8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar7;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  while (lVar17 != 0) {
    lVar23 = 0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(lVar7);
      }
      lVar24 = *(long *)(lVar23 * 8);
      lVar22 = *(long *)(lVar16 + 0x28);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      dVar26 = 1.0;
      if (lVar24 != lVar22) {
        dVar26 = 0.5;
      }
      puVar2 = puVar1;
      func_0x00010bf414e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(lVar24);
      _objc_release(puVar2);
      _objc_release(puVar1);
      lVar23 = lVar23 + 1;
    } while (lVar17 != lVar23);
    lVar17 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  uVar13 = *(ulong *)(*(long *)(lVar16 + 0x20) + (long)_DAT_112751df0);
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar14 = uVar13;
  func_0x00010be38d20();
  if (-1 < (long)uVar14) {
    lVar17 = (long)_DAT_112751db4;
    uVar15 = *(ulong *)(uVar13 + lVar17);
    func_0x00010bf529e0();
    if (uVar14 < uVar15) {
      uVar15 = *(ulong *)(uVar13 + lVar17);
      func_0x00010bf529e0();
      if (2 < uVar15) {
        lVar20 = (long)_DAT_112751dec;
        func_0x00010bf20c00(*(undefined8 *)(uVar13 + lVar20));
        if (uVar14 == 0) {
          func_0x00010bf4c7c0(*(undefined8 *)(uVar13 + lVar20));
          dVar27 = -dVar27;
        }
        else {
          lVar16 = *(long *)(uVar13 + lVar17);
          dVar27 = dVar28;
          func_0x00010bf529e0();
          if (uVar14 == lVar16 - 1U) {
            func_0x00010bf4d5e0();
            func_0x00010bf4c7c0(*(undefined8 *)(uVar13 + lVar20));
            dVar27 = (dVar26 - dVar28) + dVar29;
          }
          else {
            func_0x00010bf20c00(*(undefined8 *)(uVar13 + lVar20));
            uVar15 = *(ulong *)(uVar13 + lVar17);
            func_0x00010bf529e0();
            dVar29 = (dVar27 / (double)uVar15) * 0.5 + (dVar27 / (double)uVar15) * (double)uVar14;
            dVar27 = dVar29 - dVar28 * 0.5;
            func_0x00010bf4d5e0(*(undefined8 *)(uVar13 + lVar20));
            if (dVar29 - dVar28 <= dVar27) {
              dVar27 = dVar29 - dVar28;
            }
          }
          if (dVar27 <= 0.0) {
            dVar27 = 0.0;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (dVar27,0,*(undefined8 *)(uVar13 + lVar20),
                   PTR_s_setContentOffset_animated__11263e2e0,1);
        return;
      }
    }
  }
  return;
}



/* Entry: 106853058; end: 1068533a7; -[SCSpotlightSideBySideHeaderView _updateUIToSubfeed:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106853058(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,int param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar17 = param_7;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar17;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112751dc8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_5 + _DAT_112751ddc);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_5 + _DAT_112751dd8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112751e00;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar17 = lVar2;
  if (lVar3 != 0) {
    lVar17 = lVar3;
  }
  lVar14 = (long)_DAT_112751df8;
  uVar19 = *(undefined8 *)(param_5 + lVar14);
  _objc_retain(lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010bf493c0(0xc022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + lVar14);
  uStack_78 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  uVar6 = uVar5;
  func_0x00010bf493c0(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_5 + lVar16);
  *(undefined **)(param_5 + lVar16) = puVar7;
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar20);
  _objc_release(uVar19);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1068533a8;
  puStack_90 = &UNK_110841f80;
  lStack_88 = param_5;
  _objc_retain(uVar1);
  ppuVar8 = &puStack_a8;
  uStack_80 = uVar1;
  _objc_retainBlock();
  func_0x00010bedf040(param_5);
  _objc_release(param_7);
  if (param_8 == 0) {
    (*(code *)ppuVar8[2])(ppuVar8);
  }
  else {
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar7 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    puVar9 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    _objc_alloc();
    param_2 = 5.26354424712089e-315;
    param_3 = 5.2220990168286e-315;
    param_4 = 5.26354424712089e-315;
    func_0x00010c0048c0(0x3e800000,0x3f800000);
    func_0x00010c168380(puVar7);
    _objc_release(puVar9);
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  _objc_release(ppuVar8);
  _objc_release(uStack_80);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar21 = 0.0;
  lVar3 = *(long *)(*(long *)(lVar15 + 0x20) + (long)_DAT_112751dc8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar17 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      lVar14 = *(long *)(lVar20 * 8);
      lVar18 = *(long *)(lVar15 + 0x28);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      dVar21 = 1.0;
      if (lVar14 != lVar18) {
        dVar21 = 0.5;
      }
      puVar9 = puVar7;
      func_0x00010bf414e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(lVar14);
      _objc_release(puVar9);
      _objc_release(puVar7);
      lVar20 = lVar20 + 1;
    } while (lVar17 != lVar20);
    lVar17 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar10 = *(ulong *)(*(long *)(lVar15 + 0x20) + (long)_DAT_112751df0);
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = uVar10;
  func_0x00010be38d20();
  if (-1 < (long)uVar11) {
    lVar17 = (long)_DAT_112751db4;
    uVar12 = *(ulong *)(uVar10 + lVar17);
    func_0x00010bf529e0();
    if (uVar11 < uVar12) {
      uVar12 = *(ulong *)(uVar10 + lVar17);
      func_0x00010bf529e0();
      if (2 < uVar12) {
        lVar15 = (long)_DAT_112751dec;
        func_0x00010bf20c00(*(undefined8 *)(uVar10 + lVar15));
        if (uVar11 == 0) {
          func_0x00010bf4c7c0(*(undefined8 *)(uVar10 + lVar15));
          param_2 = -param_2;
        }
        else {
          lVar2 = *(long *)(uVar10 + lVar17);
          dVar22 = param_3;
          func_0x00010bf529e0();
          if (uVar11 == lVar2 - 1U) {
            func_0x00010bf4d5e0();
            func_0x00010bf4c7c0(*(undefined8 *)(uVar10 + lVar15));
            param_2 = (dVar21 - param_3) + param_4;
          }
          else {
            func_0x00010bf20c00(*(undefined8 *)(uVar10 + lVar15));
            uVar12 = *(ulong *)(uVar10 + lVar17);
            func_0x00010bf529e0();
            dVar21 = (dVar22 / (double)uVar12) * 0.5 + (dVar22 / (double)uVar12) * (double)uVar11;
            param_2 = dVar21 - param_3 * 0.5;
            func_0x00010bf4d5e0(*(undefined8 *)(uVar10 + lVar15));
            if (dVar21 - param_3 <= param_2) {
              param_2 = dVar21 - param_3;
            }
          }
          if (param_2 <= 0.0) {
            param_2 = 0.0;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,0,*(undefined8 *)(uVar10 + lVar15),
                   PTR_s_setContentOffset_animated__11263e2e0,1);
        return;
      }
    }
  }
  return;
}



/* Entry: 1068533a8; end: 10685352f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068533a8(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lVar1 = *(long *)(*(long *)(param_5 + 0x20) + (long)_DAT_112751dc8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar1);
      }
      lVar9 = *(long *)(lVar12 * 8);
      lVar11 = *(long *)(param_5 + 0x28);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      dVar13 = 1.0;
      if (lVar9 != lVar11) {
        dVar13 = 0.5;
      }
      puVar3 = puVar2;
      func_0x00010bf414e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(lVar9);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    lVar10 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  uVar4 = *(ulong *)(*(long *)(param_5 + 0x20) + (long)_DAT_112751df0);
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = uVar4;
  func_0x00010be38d20();
  if (-1 < (long)uVar5) {
    lVar10 = (long)_DAT_112751db4;
    uVar6 = *(ulong *)(uVar4 + lVar10);
    func_0x00010bf529e0();
    if (uVar5 < uVar6) {
      uVar6 = *(ulong *)(uVar4 + lVar10);
      func_0x00010bf529e0();
      if (2 < uVar6) {
        lVar8 = (long)_DAT_112751dec;
        func_0x00010bf20c00(*(undefined8 *)(uVar4 + lVar8));
        if (uVar5 == 0) {
          func_0x00010bf4c7c0(*(undefined8 *)(uVar4 + lVar8));
          param_2 = -param_2;
        }
        else {
          lVar1 = *(long *)(uVar4 + lVar10);
          dVar14 = param_3;
          func_0x00010bf529e0();
          if (uVar5 == lVar1 - 1U) {
            func_0x00010bf4d5e0();
            func_0x00010bf4c7c0(*(undefined8 *)(uVar4 + lVar8));
            param_2 = (dVar13 - param_3) + param_4;
          }
          else {
            func_0x00010bf20c00(*(undefined8 *)(uVar4 + lVar8));
            uVar6 = *(ulong *)(uVar4 + lVar10);
            func_0x00010bf529e0();
            dVar13 = (dVar14 / (double)uVar6) * 0.5 + (dVar14 / (double)uVar6) * (double)uVar5;
            param_2 = dVar13 - param_3 * 0.5;
            func_0x00010bf4d5e0(*(undefined8 *)(uVar4 + lVar8));
            if (dVar13 - param_3 <= param_2) {
              param_2 = dVar13 - param_3;
            }
          }
          if (param_2 <= 0.0) {
            param_2 = 0.0;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,0,*(undefined8 *)(uVar4 + lVar8),
                   PTR_s_setContentOffset_animated__11263e2e0,1);
        return;
      }
    }
  }
  return;
}



/* Entry: 106853530; end: 106853653; -[SCSpotlightSideBySideHeaderView _updateScrollViewToCenterSubfeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106853530(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  uVar1 = param_5;
  func_0x00010be38d20();
  if (-1 < (long)uVar1) {
    lVar5 = (long)_DAT_112751db4;
    uVar2 = *(ulong *)(param_5 + lVar5);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar2 = *(ulong *)(param_5 + lVar5);
      func_0x00010bf529e0();
      if (2 < uVar2) {
        lVar4 = (long)_DAT_112751dec;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
        if (uVar1 == 0) {
          func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar4));
          param_2 = -param_2;
        }
        else {
          lVar3 = *(long *)(param_5 + lVar5);
          dVar6 = param_3;
          func_0x00010bf529e0();
          if (uVar1 == lVar3 - 1U) {
            func_0x00010bf4d5e0();
            func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar4));
            param_2 = (param_1 - param_3) + param_4;
          }
          else {
            func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
            uVar2 = *(ulong *)(param_5 + lVar5);
            func_0x00010bf529e0();
            dVar6 = (dVar6 / (double)uVar2) * 0.5 + (dVar6 / (double)uVar2) * (double)uVar1;
            param_2 = dVar6 - param_3 * 0.5;
            func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar4));
            if (dVar6 - param_3 <= param_2) {
              param_2 = dVar6 - param_3;
            }
          }
          if (param_2 <= 0.0) {
            param_2 = 0.0;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,0,*(undefined8 *)(param_5 + lVar4),
                   PTR_s_setContentOffset_animated__11263e2e0,1);
        return;
      }
    }
  }
  return;
}



/* Entry: 106853654; end: 106853737; -[SCSpotlightSideBySideHeaderView _indexOfSubfeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106853654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112751db4;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar2,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bfa4220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bfa4220(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c0720c0(uVar5,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_106853714;
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_1 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  uVar6 = 0x7fffffffffffffff;
LAB_106853714:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106853738; end: 10685374b; -[SCSpotlightSideBySideHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106853738(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112751e04,param_3);
  return;
}



/* Entry: 10685374c; end: 10685375b; -[SCSpotlightSideBySideHeaderView currentSubfeedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685374c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751de4),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 10685375c; end: 106853777; -[SCSpotlightSideBySideHeaderView _publishCurrentSubfeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685375c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751de4),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + _DAT_112751de8));
  return;
}



/* Entry: 106853778; end: 10685377b; -[SCSpotlightSideBySideHeaderView performMoveToSubfeed:animated:] */

void FUN_106853778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUIToSubfeed_animated__112596470);
  return;
}



/* Entry: 10685377c; end: 1068537e3; -[SCSpotlightSideBySideHeaderView completeMovingToSubfeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685377c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751de8);
  *(undefined8 *)(param_1 + _DAT_112751de8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bf3aa20(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be83e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishCurrentSubfeed_11257e938);
  return;
}



/* Entry: 1068537e4; end: 1068537f7; -[SCSpotlightSideBySideHeaderView cancelMovingToSubfeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068537e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateUIToSubfeed_animated__112596470,
             *(undefined8 *)(param_1 + _DAT_112751de8),0);
  return;
}



/* Entry: 1068537f8; end: 10685383f; -[SCSpotlightSideBySideHeaderView scrollToFirstSubfeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068537f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751db4);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedf040(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106853840; end: 106853a13; -[SCSpotlightSideBySideHeaderView _didTapWithRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106853840(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_112751e08) & 1) == 0) {
    puVar2 = PTR_PTR_1126ce740;
    _objc_opt_class(PTR_PTR_1126ce740);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 != 0) {
      lVar10 = (long)_DAT_112751de8;
      uVar4 = *(ulong *)(param_1 + lVar10);
      func_0x00010c1561c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bfa4340(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c071f40();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
      if ((uVar6 & 1) == 0) {
        func_0x00010bf3aa20(param_1);
        lVar7 = param_1 + _DAT_112751e04;
        _objc_loadWeakRetained(lVar7);
        uVar3 = param_3;
        func_0x00010bfa4340(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25eb60(lVar7);
        _objc_release(uVar3);
        _objc_release(lVar7);
        func_0x00010c0f8760(*(undefined8 *)(param_1 + _DAT_112751db8));
        uVar9 = *(undefined8 *)(param_1 + _DAT_112751dcc);
        uVar3 = param_3;
        func_0x00010bfa4340(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + lVar10);
        *(undefined8 *)(param_1 + lVar10) = uVar9;
        _objc_release(uVar8);
        _objc_release(uVar3);
        func_0x00010bf3aa20(param_1);
        func_0x00010bf3c440(param_1);
        func_0x00010bee2b20(param_1);
        func_0x00010be83e60(param_1);
      }
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106853a14; end: 106853c87; -[SCSpotlightSideBySideHeaderView showTooltipForSubfeed:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106853a14(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  int param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined *unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar28;
  long lVar29;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puStack_270;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR_PTR_1126b09c0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = (long)_DAT_112751e0c;
  if (*(long *)(param_2 + lVar29) == 0) {
    _objc_retain(param_4);
    _objc_alloc();
    unaff_x22 = puVar1;
    func_0x0001068678b0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 2;
    param_6 = 7;
    func_0x00010c051640(puVar1,param_3,unaff_x22);
    uVar27 = *(undefined8 *)(param_2 + lVar29);
    *(undefined **)(param_2 + lVar29) = puVar1;
    _objc_release(uVar27);
    _objc_release(unaff_x22);
    func_0x00010c1fffa0(*(undefined8 *)(param_2 + lVar29),param_3,1);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar29),param_3,0);
    puVar1 = param_4;
    func_0x00010c1561c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    unaff_x19 = puVar1;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    unaff_x21 = *(long *)(param_2 + _DAT_112751dc8);
    param_4 = unaff_x19;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = param_2;
    if (unaff_x21 != 0) {
      func_0x00010c10c740(param_1,*(undefined8 *)(param_2 + lVar29),param_3,param_2);
      unaff_x24 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      unaff_x22 = *(undefined **)(param_2 + lVar29);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x21;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x22;
      func_0x00010bf493a0(unaff_x22,param_3,unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = *(undefined **)(param_2 + lVar29);
      puStack_88 = unaff_x25;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = unaff_x21;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = unaff_x20;
      func_0x00010bf493c0(0x4030000000000000,unaff_x20,param_3,lVar29);
      _objc_retainAutoreleasedReturnValue();
      param_5 = 2;
      unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = unaff_x27;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_88);
      _objc_retainAutoreleasedReturnValue();
      param_4 = unaff_x28;
      func_0x00010beef8c0(unaff_x24);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(lVar29);
      _objc_release(unaff_x20);
      _objc_release(unaff_x25);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
    }
    _objc_release(unaff_x21);
    param_2 = unaff_x19;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106853c88;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = unaff_x28;
  puStack_e8 = unaff_x27;
  lStack_e0 = lVar29;
  puStack_d8 = unaff_x25;
  puStack_d0 = unaff_x24;
  lStack_c8 = unaff_x23;
  puStack_c0 = unaff_x22;
  lStack_b8 = unaff_x21;
  puStack_b0 = unaff_x20;
  puStack_a8 = unaff_x19;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar28 = (long)_DAT_112751dd0;
  lVar29 = *(long *)(param_2 + lVar28);
  puVar1 = puVar26;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar29 == 0) {
    lVar29 = *(long *)(param_2 + _DAT_112751dc8);
    puVar1 = puVar26;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar29 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c219b60();
      puVar1 = param_2;
      func_0x00010bdd2660(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar2,param_3,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar2;
      func_0x00010c08c0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4010000000000000);
      _objc_release(puVar1);
      func_0x00010befbb60(lVar29,param_3,puVar2);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar3 = puVar2;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      puStack_118 = puVar4;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      puStack_110 = puVar6;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar29;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf493a0(puVar7,param_3,lVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      puStack_108 = puVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar29;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493a0(puVar9,param_3,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_118,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_3,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar13);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + lVar28),param_3,puVar2,puVar26);
      puVar1 = param_2 + _DAT_112751e04;
      _objc_loadWeakRetained(puVar1);
      puVar3 = param_4;
      func_0x00010c25eb40();
      param_5 = (int)puVar3;
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar1 = param_2;
    }
    _objc_release(lVar29);
  }
  _objc_release(puVar26);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  puVar26 = puVar1;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar26;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  lVar28 = (long)_DAT_112751dd0;
  lVar29 = *(long *)(param_4 + lVar28);
  puVar26 = puVar2;
  func_0x00010c0e00e0(lVar29,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar29 == 0) {
    lVar29 = *(long *)(param_4 + _DAT_112751dc8);
    func_0x00010c0e00e0(lVar29,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_4 + _DAT_112751ddc);
    puVar26 = puVar2;
    func_0x00010c0e00e0(lVar13,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar29 != 0 && lVar13 != 0) {
      if (param_6 == 0) {
        puVar26 = puVar1;
        func_0x00010bf3aa20(param_4,param_3,puVar1);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc();
        uVar27 = *(undefined8 *)PTR__CGRectZero_110347608;
        uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
        uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
        uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
        func_0x00010c013de0(uVar27,uVar30,uVar31,uVar32);
        func_0x00010c219b60();
        puVar26 = param_4;
        func_0x00010bdd2660(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(puVar3,param_3,puVar26);
        _objc_release(puVar26);
        uVar33 = 0x4020000000000000;
        if (param_5 == 0) {
          uVar33 = 0x4018000000000000;
        }
        puVar26 = puVar3;
        func_0x00010c08c0e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(uVar33);
        _objc_release(puVar26);
        func_0x00010befbb60(lVar13,param_3,puVar3);
        puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        if (param_5 == 0) {
          puStack_270 = puVar3;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puStack_270;
          func_0x00010bf49420(0x4028000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          puStack_258 = puVar4;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf49420(0x4028000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          puStack_250 = puVar6;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar29;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bf493c0(0x4010000000000000,puVar7,param_3,lVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          puStack_248 = puVar8;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar29;
          func_0x00010c274200(lVar29);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar9;
          func_0x00010bf493c0(0xc010000000000000,puVar9,param_3,lVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_240 = puVar11;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_258,4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar26,param_3,puVar12);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(lVar25);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(lVar10);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        else {
          puStack_270 = *(undefined **)(param_4 + _DAT_112751de0);
          func_0x00010c0e00e0(puStack_270,param_3,puVar2);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_270 != (undefined *)0x0) {
            func_0x00010c162480(puStack_270,param_3,0);
          }
          puVar4 = PTR_PTR_1126aea58;
          _objc_alloc();
          func_0x00010c013de0(uVar27,uVar30,uVar31,uVar32);
          func_0x00010c219b60();
          puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                              &PTR____CFConstantStringClassReference_110dcfe58);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(puVar4,param_3,puVar26);
          _objc_release(puVar26);
          puVar26 = param_4;
          func_0x00010bdd27a0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(puVar4,param_3,puVar26);
          _objc_release(puVar26);
          func_0x00010c21ad00(puVar4,param_3,0x18);
          func_0x00010c213040(puVar4,param_3,1);
          func_0x00010befbb60(puVar3,param_3,puVar4);
          puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar5 = puVar4;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010bf493a0(puVar5,param_3,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          puStack_238 = puVar7;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar8;
          func_0x00010bf493a0(puVar8,param_3,puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          puStack_230 = puVar11;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar12;
          func_0x00010bf49420(0x4030000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar3;
          puStack_228 = puVar14;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010bf49420(0x4030000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar3;
          puStack_220 = puVar16;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar29;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010bf493c0(0x4010000000000000,puVar17,param_3,lVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar3;
          puStack_218 = puVar18;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar29;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar19;
          func_0x00010bf493a0(puVar19,param_3,lVar25);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar13;
          puStack_210 = puVar20;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar3;
          func_0x00010c2793a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar23 = lVar21;
          func_0x00010bf493a0(lVar21,param_3,puVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_208 = lVar23;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_238,7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar26,param_3,puVar24);
          _objc_release(puVar24);
          _objc_release(lVar23);
          _objc_release(puVar22);
          _objc_release(lVar21);
          _objc_release(puVar20);
          _objc_release(lVar25);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(lVar10);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_4 + _DAT_112751dd4),param_3,puVar26,puVar2);
          _objc_release(puVar26);
          func_0x00010c1d0640(*(undefined8 *)(param_4 + _DAT_112751dd8),param_3,puVar4,puVar2);
        }
        _objc_release(puVar4);
        _objc_release(puStack_270);
        func_0x00010c1d0640(*(undefined8 *)(param_4 + lVar28),param_3,puVar3,puVar2);
        puVar26 = param_4 + _DAT_112751e04;
        _objc_loadWeakRetained(puVar26);
        func_0x00010c25eb40();
        _objc_release(puVar26);
        puVar26 = *(undefined **)(param_4 + _DAT_112751de8);
        func_0x00010bee2b20(param_4,param_3,puVar26,0);
        _objc_release(puVar3);
      }
    }
    _objc_release(lVar13);
    _objc_release(lVar29);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar26);
  puVar2 = puVar26;
  func_0x00010c1561c0(puVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar13 = (long)_DAT_112751dd4;
  lVar29 = *(long *)(puVar1 + lVar13);
  func_0x00010c0e00e0(lVar29,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = *(long *)(puVar1 + _DAT_112751dd8);
  func_0x00010c0e00e0(lVar28,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar29 != 0 && lVar28 != 0) {
    lVar10 = lVar29;
    func_0x00010c067fc0();
    if (lVar10 < 2) {
      lVar10 = 1;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar10 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(puVar1 + lVar13),param_3,puVar2,puVar3);
    _objc_release(puVar2);
    if (lVar10 + -1 == 0) {
      func_0x00010bf3aa20(puVar1,param_3,puVar26);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110dcfe58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(lVar28,param_3,puVar1);
      _objc_release(puVar1);
    }
  }
  _objc_release(lVar28);
  _objc_release(lVar29);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar26);
  return;
}



/* Entry: 106853c88; end: 106853fd3; -[SCSpotlightSideBySideHeaderView showBadgeForSubfeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106853c88(long param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puStack_1e0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar28 = (long)_DAT_112751dd0;
  lVar2 = *(long *)(param_1 + lVar28);
  lVar1 = lVar26;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_112751dc8);
    lVar1 = lVar26;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c219b60();
      lVar1 = param_1;
      func_0x00010bdd2660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar3,param_2,lVar1);
      _objc_release(lVar1);
      puVar4 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4010000000000000);
      _objc_release(puVar4);
      func_0x00010befbb60(lVar2,param_2,puVar3);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar5 = puVar3;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      puStack_88 = puVar6;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      puStack_80 = puVar8;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf493a0(puVar9,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      puStack_78 = puVar10;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = lVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf493a0(puVar11,param_2,lVar27);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4,param_2,puVar13);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(lVar27);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar1);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar28),param_2,puVar3,lVar26);
      lVar1 = param_1 + _DAT_112751e04;
      _objc_loadWeakRetained(lVar1);
      lVar28 = param_3;
      func_0x00010c25eb40();
      param_4 = (int)lVar28;
      _objc_release(lVar1);
      _objc_release(puVar3);
      lVar1 = param_1;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar26);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar1);
  lVar26 = lVar1;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar26;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  lVar27 = (long)_DAT_112751dd0;
  lVar28 = *(long *)(param_3 + lVar27);
  lVar26 = lVar2;
  func_0x00010c0e00e0(lVar28,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar28 == 0) {
    lVar28 = *(long *)(param_3 + _DAT_112751dc8);
    func_0x00010c0e00e0(lVar28,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(param_3 + _DAT_112751ddc);
    lVar26 = lVar2;
    func_0x00010c0e00e0(lVar14,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar28 != 0 && lVar14 != 0) {
      if (param_5 == 0) {
        lVar26 = lVar1;
        func_0x00010bf3aa20(param_3,param_2,lVar1);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc();
        uVar29 = *(undefined8 *)PTR__CGRectZero_110347608;
        uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
        uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
        uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
        func_0x00010c013de0(uVar29,uVar30,uVar31,uVar32);
        func_0x00010c219b60();
        lVar26 = param_3;
        func_0x00010bdd2660(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(puVar4,param_2,lVar26);
        _objc_release(lVar26);
        uVar33 = 0x4020000000000000;
        if (param_4 == 0) {
          uVar33 = 0x4018000000000000;
        }
        puVar3 = puVar4;
        func_0x00010c08c0e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(uVar33);
        _objc_release(puVar3);
        func_0x00010befbb60(lVar14,param_2,puVar4);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        if (param_4 == 0) {
          puStack_1e0 = puVar4;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puStack_1e0;
          func_0x00010bf49420(0x4028000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          puStack_1c8 = puVar5;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf49420(0x4028000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          puStack_1c0 = puVar7;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar28;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf493c0(0x4010000000000000,puVar8,param_2,lVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar4;
          puStack_1b8 = puVar9;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar28;
          func_0x00010c274200(lVar28);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf493c0(0xc010000000000000,puVar10,param_2,lVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1b0 = puVar11;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1c8,4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar3,param_2,puVar12);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(lVar25);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(lVar26);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        else {
          puStack_1e0 = *(undefined **)(param_3 + _DAT_112751de0);
          func_0x00010c0e00e0(puStack_1e0,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_1e0 != (undefined *)0x0) {
            func_0x00010c162480(puStack_1e0,param_2,0);
          }
          puVar5 = PTR_PTR_1126aea58;
          _objc_alloc();
          func_0x00010c013de0(uVar29,uVar30,uVar31,uVar32);
          func_0x00010c219b60();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110dcfe58);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(puVar5,param_2,puVar3);
          _objc_release(puVar3);
          lVar26 = param_3;
          func_0x00010bdd27a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(puVar5,param_2,lVar26);
          _objc_release(lVar26);
          func_0x00010c21ad00(puVar5,param_2,0x18);
          func_0x00010c213040(puVar5,param_2,1);
          func_0x00010befbb60(puVar4,param_2,puVar5);
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar6 = puVar5;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010bf493a0(puVar6,param_2,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          puStack_1a8 = puVar8;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar4;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar9;
          func_0x00010bf493a0(puVar9,param_2,puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar4;
          puStack_1a0 = puVar11;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf49420(0x4030000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar4;
          puStack_198 = puVar13;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010bf49420(0x4030000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar4;
          puStack_190 = puVar16;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar28;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010bf493c0(0x4010000000000000,puVar17,param_2,lVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar4;
          puStack_188 = puVar18;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar28;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar19;
          func_0x00010bf493a0(puVar19,param_2,lVar25);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar14;
          puStack_180 = puVar20;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar4;
          func_0x00010c2793a0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar23 = lVar21;
          func_0x00010bf493a0(lVar21,param_2,puVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_178 = lVar23;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a8,7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar3,param_2,puVar24);
          _objc_release(puVar24);
          _objc_release(lVar23);
          _objc_release(puVar22);
          _objc_release(lVar21);
          _objc_release(puVar20);
          _objc_release(lVar25);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(lVar26);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_3 + _DAT_112751dd4),param_2,puVar3,lVar2);
          _objc_release(puVar3);
          func_0x00010c1d0640(*(undefined8 *)(param_3 + _DAT_112751dd8),param_2,puVar5,lVar2);
        }
        _objc_release(puVar5);
        _objc_release(puStack_1e0);
        func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar27),param_2,puVar4,lVar2);
        lVar26 = param_3 + _DAT_112751e04;
        _objc_loadWeakRetained(lVar26);
        func_0x00010c25eb40();
        _objc_release(lVar26);
        lVar26 = *(long *)(param_3 + _DAT_112751de8);
        func_0x00010bee2b20(param_3,param_2,lVar26,0);
        _objc_release(puVar4);
      }
    }
    _objc_release(lVar14);
    _objc_release(lVar28);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar26);
  lVar2 = lVar26;
  func_0x00010c1561c0(lVar26);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar14 = (long)_DAT_112751dd4;
  lVar2 = *(long *)(lVar1 + lVar14);
  func_0x00010c0e00e0(lVar2,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = *(long *)(lVar1 + _DAT_112751dd8);
  func_0x00010c0e00e0(lVar27,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0 && lVar27 != 0) {
    lVar25 = lVar2;
    func_0x00010c067fc0();
    if (lVar25 < 2) {
      lVar25 = 1;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar25 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + lVar14),param_2,puVar4,lVar28);
    _objc_release(puVar4);
    if (lVar25 + -1 == 0) {
      func_0x00010bf3aa20(lVar1,param_2,lVar26);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dcfe58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(lVar27,param_2,puVar4);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar27);
  _objc_release(lVar2);
  _objc_release(lVar28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar26);
  return;
}



/* Entry: 106853fd4; end: 1068547af; -[SCSpotlightSideBySideHeaderView showNotificationBadgeForSubfeed:showBadgeCount:badgeCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106853fd4(long param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puStack_110;
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
  long lStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar26 = param_3;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar26;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  lVar27 = (long)_DAT_112751dd0;
  lVar1 = *(long *)(param_1 + lVar27);
  lVar26 = lVar25;
  func_0x00010c0e00e0(lVar1,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112751dc8);
    func_0x00010c0e00e0(lVar1,param_2,lVar25);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + _DAT_112751ddc);
    lVar26 = lVar25;
    func_0x00010c0e00e0(lVar2,param_2,lVar25);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0 && lVar2 != 0) {
      if (param_5 == 0) {
        lVar26 = param_3;
        func_0x00010bf3aa20(param_1,param_2,param_3);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc();
        uVar28 = *(undefined8 *)PTR__CGRectZero_110347608;
        uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
        uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
        uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
        func_0x00010c013de0(uVar28,uVar29,uVar30,uVar31);
        func_0x00010c219b60();
        lVar26 = param_1;
        func_0x00010bdd2660(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(puVar3,param_2,lVar26);
        _objc_release(lVar26);
        uVar32 = 0x4020000000000000;
        if (param_4 == 0) {
          uVar32 = 0x4018000000000000;
        }
        puVar4 = puVar3;
        func_0x00010c08c0e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(uVar32);
        _objc_release(puVar4);
        func_0x00010befbb60(lVar2,param_2,puVar3);
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        if (param_4 == 0) {
          puStack_110 = puVar3;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puStack_110;
          func_0x00010bf49420(0x4028000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar3;
          puStack_f8 = puVar16;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010bf49420(0x4028000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar3;
          puStack_f0 = puVar18;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar1;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar19;
          func_0x00010bf493c0(0x4010000000000000,puVar19,param_2,lVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar3;
          puStack_e8 = puVar20;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar1;
          func_0x00010c274200(lVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar21;
          func_0x00010bf493c0(0xc010000000000000,puVar21,param_2,lVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_e0 = puVar23;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar4,param_2,puVar24);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(lVar22);
          _objc_release(puVar21);
          _objc_release(puVar20);
          _objc_release(lVar26);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(puVar17);
        }
        else {
          puStack_110 = *(undefined **)(param_1 + _DAT_112751de0);
          func_0x00010c0e00e0(puStack_110,param_2,lVar25);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_110 != (undefined *)0x0) {
            func_0x00010c162480(puStack_110,param_2,0);
          }
          puVar16 = PTR_PTR_1126aea58;
          _objc_alloc();
          func_0x00010c013de0(uVar28,uVar29,uVar30,uVar31);
          func_0x00010c219b60();
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110dcfe58);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(puVar16,param_2,puVar4);
          _objc_release(puVar4);
          lVar26 = param_1;
          func_0x00010bdd27a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(puVar16,param_2,lVar26);
          _objc_release(lVar26);
          func_0x00010c21ad00(puVar16,param_2,0x18);
          func_0x00010c213040(puVar16,param_2,1);
          func_0x00010befbb60(puVar3,param_2,puVar16);
          puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar17 = puVar16;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar3;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar17;
          func_0x00010bf493a0(puVar17,param_2,puVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar16;
          puStack_d8 = puVar19;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar3;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar20;
          func_0x00010bf493a0(puVar20,param_2,puVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar3;
          puStack_d0 = puVar23;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar24;
          func_0x00010bf49420(0x4030000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          puStack_c8 = puVar5;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf49420(0x4030000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          puStack_c0 = puVar7;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar1;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf493c0(0x4010000000000000,puVar8,param_2,lVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          puStack_b8 = puVar9;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar1;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf493a0(puVar10,param_2,lVar22);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar2;
          puStack_b0 = puVar11;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar3;
          func_0x00010c2793a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar12;
          func_0x00010bf493a0(lVar12,param_2,puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_a8 = lVar14;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar4,param_2,puVar15);
          _objc_release(puVar15);
          _objc_release(lVar14);
          _objc_release(puVar13);
          _objc_release(lVar12);
          _objc_release(puVar11);
          _objc_release(lVar22);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(lVar26);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar21);
          _objc_release(puVar20);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(puVar17);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112751dd4),param_2,puVar4,lVar25);
          _objc_release(puVar4);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112751dd8),param_2,puVar16,lVar25);
        }
        _objc_release(puVar16);
        _objc_release(puStack_110);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar27),param_2,puVar3,lVar25);
        lVar26 = param_1 + _DAT_112751e04;
        _objc_loadWeakRetained(lVar26);
        func_0x00010c25eb40();
        _objc_release(lVar26);
        lVar26 = *(long *)(param_1 + _DAT_112751de8);
        func_0x00010bee2b20(param_1,param_2,lVar26,0);
        _objc_release(puVar3);
      }
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar26);
  lVar25 = lVar26;
  func_0x00010c1561c0(lVar26);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar25;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar2 = (long)_DAT_112751dd4;
  lVar25 = *(long *)(param_3 + lVar2);
  func_0x00010c0e00e0(lVar25,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = *(long *)(param_3 + _DAT_112751dd8);
  func_0x00010c0e00e0(lVar27,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar25 != 0 && lVar27 != 0) {
    lVar22 = lVar25;
    func_0x00010c067fc0();
    if (lVar22 < 2) {
      lVar22 = 1;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar22 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar2),param_2,puVar3,lVar1);
    _objc_release(puVar3);
    if (lVar22 + -1 == 0) {
      func_0x00010bf3aa20(param_3,param_2,lVar26);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dcfe58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(lVar27,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar27);
  _objc_release(lVar25);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar26);
  return;
}



/* Entry: 1068547b0; end: 10685491f; -[SCSpotlightSideBySideHeaderView decrementBadgeForSubfeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068547b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1561c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar7 = (long)_DAT_112751dd4;
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010c0e00e0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + _DAT_112751dd8);
  func_0x00010c0e00e0(lVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0 && lVar4 != 0) {
    lVar5 = lVar3;
    func_0x00010c067fc0();
    if (lVar5 < 2) {
      lVar5 = 1;
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar7),param_2,puVar6,uVar2);
    _objc_release(puVar6);
    if (lVar5 + -1 == 0) {
      func_0x00010bf3aa20(param_1,param_2,param_3);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dcfe58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(lVar4,param_2,puVar6);
      _objc_release(puVar6);
    }
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106854920; end: 106854b6b; -[SCSpotlightSideBySideHeaderView clearBadgeForSubfeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106854920(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1561c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + _DAT_112751ddc);
  func_0x00010c0e00e0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + _DAT_112751dc8);
  func_0x00010c0e00e0(lVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112751dd0;
  lVar5 = *(long *)(param_1 + lVar9);
  func_0x00010c0e00e0(lVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 != 0 && lVar4 != 0) && lVar5 != 0) {
    func_0x00010c12c960(lVar5);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar9),param_2,uVar2);
    lVar10 = (long)_DAT_112751dd8;
    lVar9 = *(long *)(param_1 + lVar10);
    func_0x00010c0e00e0(lVar9,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      func_0x00010c12c960(lVar9);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_112751dd4),param_2,uVar2);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar10),param_2,uVar2);
    }
    lVar10 = *(long *)(param_1 + _DAT_112751de0);
    func_0x00010c0e00e0(lVar10,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      func_0x00010c162480(lVar10,param_2,1);
    }
    lVar11 = (long)_DAT_112751de8;
    lVar6 = *(long *)(param_1 + lVar11);
    if (lVar6 != 0) {
      func_0x00010c1561c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c071f40();
      _objc_release(lVar7);
      _objc_release(lVar6);
      if ((int)lVar8 != 0) {
        func_0x00010bee2b20(param_1,param_2,*(undefined8 *)(param_1 + lVar11),0);
      }
    }
    param_1 = param_1 + _DAT_112751e04;
    _objc_loadWeakRetained(param_1);
    func_0x00010c25eb20();
    _objc_release(param_1);
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106854b6c; end: 106854b9f; -[SCSpotlightSideBySideHeaderView clearTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106854b6c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112751e0c;
  func_0x00010bf82f40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106854ba0; end: 106854d33; -[SCSpotlightSideBySideHeaderView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106854ba0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c102b20(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_3 + (long)_DAT_112751dc8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_120;
      do {
        lVar5 = 0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = *(ulong *)(lStack_128 + lVar5 * 8);
          func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar3);
          func_0x00010bfe3a40(uVar3,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 != 0) {
            _objc_release(lVar1);
            goto LAB_106854cec;
          }
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_4,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    _objc_retain(param_3);
    uVar3 = param_3;
  }
LAB_106854cec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return uVar3;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(param_5 + _DAT_112751e08);
}



/* Entry: 106854d34; end: 106854d43; -[SCSpotlightSideBySideHeaderView isDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106854d34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112751e08);
}



/* Entry: 106854d44; end: 106854d53; -[SCSpotlightSideBySideHeaderView setIsDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106854d44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112751e08) = param_3;
  return;
}



/* Entry: 106854d54; end: 106854ecf; -[SCSpotlightSideBySideHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106854d54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112751dc4,0);
  _objc_storeStrong(param_1 + _DAT_112751dc0,0);
  _objc_storeStrong(param_1 + _DAT_112751dfc,0);
  _objc_storeStrong(param_1 + _DAT_112751dbc,0);
  _objc_storeStrong(param_1 + _DAT_112751e0c,0);
  _objc_storeStrong(param_1 + _DAT_112751ddc,0);
  _objc_storeStrong(param_1 + _DAT_112751dd8,0);
  _objc_storeStrong(param_1 + _DAT_112751dd4,0);
  _objc_storeStrong(param_1 + _DAT_112751dd0,0);
  _objc_storeStrong(param_1 + _DAT_112751dcc,0);
  _objc_storeStrong(param_1 + _DAT_112751dc8,0);
  _objc_storeStrong(param_1 + _DAT_112751de0,0);
  _objc_storeStrong(param_1 + _DAT_112751e00,0);
  _objc_storeStrong(param_1 + _DAT_112751df8,0);
  _objc_storeStrong(param_1 + _DAT_112751df4,0);
  _objc_storeStrong(param_1 + _DAT_112751df0,0);
  _objc_storeStrong(param_1 + _DAT_112751dec,0);
  _objc_storeStrong(param_1 + _DAT_112751de8,0);
  _objc_storeStrong(param_1 + _DAT_112751de4,0);
  _objc_storeStrong(param_1 + _DAT_112751db8,0);
  _objc_storeStrong(param_1 + _DAT_112751db4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112751e04);
  return;
}



/* Entry: 106854ed0; end: 106854ed7; -[SCSpotlightStoryVisibility storyWillDisplay] */

undefined1 FUN_106854ed0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106854ed8; end: 106854edf; -[SCSpotlightStoryVisibility setStoryWillDisplay:] */

void FUN_106854ed8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106854ee0; end: 106854ee7; -[SCSpotlightStoryVisibility storyDidDisplay] */

undefined1 FUN_106854ee0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106854ee8; end: 106854eef; -[SCSpotlightStoryVisibility setStoryDidDisplay:] */

void FUN_106854ee8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106854ef0; end: 106854f53; -[SCSpotlightStoryAbandonmentTracker init] */

undefined1 * FUN_106854ef0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106854f54; end: 106854f7b; -[SCSpotlightStoryAbandonmentTracker startNewSession] */

void FUN_106854f54(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 106854f7c; end: 106854fdb; -[SCSpotlightStoryAbandonmentTracker prepareForStoryWillDisplay:] */

void FUN_106854f7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bdf0d80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e0c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106854fdc; end: 10685503b; -[SCSpotlightStoryAbandonmentTracker confirmStoryDidDisplay:] */

void FUN_106854fdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bdf0d80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20cea0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10685503c; end: 1068550df; -[SCSpotlightStoryAbandonmentTracker countOfStoriesDidDisplay] */

undefined8 FUN_10685503c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068550e0;
  puStack_50 = &UNK_110944498;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 8),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1068550e0; end: 10685511b;  */

void FUN_1068550e0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x00010c259820();
  if (param_3 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 10685511c; end: 1068551bf; -[SCSpotlightStoryAbandonmentTracker countOfStoriesStuckOnWillDisplay] */

undefined8 FUN_10685511c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068551c0;
  puStack_50 = &UNK_110944498;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 8),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1068551c0; end: 106855217;  */

void FUN_1068551c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c25ba60();
  if (((int)uVar1 != 0) && (uVar1 = param_3, func_0x00010c259820(), (uVar1 & 1) == 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106855218; end: 10685528f; -[SCSpotlightStoryAbandonmentTracker _createOrFetchExistingSpotlightStoryVisibilityObjectForIdentifier:] */

void FUN_106855218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ce750;
    _objc_opt_new(PTR_PTR_1126ce750);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106855290; end: 106855297; -[SCSpotlightStoryAbandonmentTracker playbackManagerStuckOnEndOfFeed] */

undefined1 FUN_106855290(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106855298; end: 10685529f; -[SCSpotlightStoryAbandonmentTracker setPlaybackManagerStuckOnEndOfFeed:] */

void FUN_106855298(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1068552a0; end: 1068552a7; -[SCSpotlightStoryAbandonmentTracker playlistDepleted] */

undefined1 FUN_1068552a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1068552a8; end: 1068552af; -[SCSpotlightStoryAbandonmentTracker setPlaylistDepleted:] */

void FUN_1068552a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1068552b0; end: 1068552bb; -[SCSpotlightStoryAbandonmentTracker .cxx_destruct] */

void FUN_1068552b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068552bc; end: 10685534b; -[SCSpotlightSubfeedActionLogger initWithUserTrackLogger:] */

undefined1 * FUN_1068552bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10685534c; end: 106855357; +[SCSpotlightSubfeedActionLogger announcerIdentifier] */

undefined ** FUN_10685534c(void)

{
  return &PTR____CFConstantStringClassReference_110e61eb8;
}



/* Entry: 106855358; end: 10685535f; -[SCSpotlightSubfeedActionLogger addListener:] */

void FUN_106855358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106855360; end: 106855367; -[SCSpotlightSubfeedActionLogger removeListener:] */

void FUN_106855360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106855368; end: 106855387; -[SCSpotlightSubfeedActionLogger _gestureWithActionType:] */

undefined8 FUN_106855368(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    return *(undefined8 *)(&UNK_10dde17e0 + param_3 * 8);
  }
  return 5;
}



/* Entry: 106855388; end: 1068553a7; -[SCSpotlightSubfeedActionLogger _entryEventWithActionType:] */

undefined8 FUN_106855388(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    return *(undefined8 *)(&UNK_10dde1810 + param_3 * 8);
  }
  return 0x16;
}



/* Entry: 1068553a8; end: 1068553c7; -[SCSpotlightSubfeedActionLogger _exitEventWithActionType:] */

undefined8 FUN_1068553a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    return *(undefined8 *)(&UNK_10dde1840 + param_3 * 8);
  }
  return 0xc;
}



/* Entry: 1068553c8; end: 10685555f; -[SCSpotlightSubfeedActionLogger _itemTypeSpecificForStory:] */

void FUN_1068553c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106855560;
  uStack_40 = 0x106855570;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110daafd8;
  uVar1 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(ppuStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106855560; end: 106855577;  */

void FUN_106855560(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106855578; end: 106855743;  */

void FUN_106855578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106855744; end: 106855933; -[SCSpotlightSubfeedActionLogger logSubfeedActionWithGesture:story:feedType:pageSessionId:pageType:section:itemType:operaSessionId:] */

void FUN_106855744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ce758;
  _objc_retain(param_10);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c161620();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c19b200(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010be1c940(param_1,param_2,param_3);
  func_0x00010c1a2e40(puVar1,param_2,lVar3);
  func_0x00010c21a480(puVar1,param_2,0x1c);
  func_0x00010c1d56e0(puVar1,param_2,param_10);
  _objc_release(param_10);
  func_0x00010c1d8620(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1d8800(puVar1,param_2,param_7);
  func_0x00010c1f9160(puVar1,param_2,param_8);
  func_0x00010c1b6340(puVar1,param_2,param_9);
  lVar3 = param_1;
  func_0x00010be460a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b63a0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  uVar6 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar6;
  func_0x00010c11fd40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c125a80();
  func_0x00010c1c87a0(puVar1,param_2,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106855934; end: 106855963; -[SCSpotlightSubfeedActionLogger .cxx_destruct] */

void FUN_106855934(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106855964; end: 106855a5f; -[SCSpotlightSubfeedBundle initWithMetadata:playbackManager:containerVC:emptyStateController:] */

undefined1 *
FUN_106855964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f3830;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106855a60; end: 106855a67; -[SCSpotlightSubfeedBundle metadata] */

undefined8 FUN_106855a60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106855a68; end: 106855a97; -[SCSpotlightSubfeedBundle setMetadata:] */

void FUN_106855a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106855a98; end: 106855a9f; -[SCSpotlightSubfeedBundle playbackManager] */

undefined8 FUN_106855a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106855aa0; end: 106855acf; -[SCSpotlightSubfeedBundle setPlaybackManager:] */

void FUN_106855aa0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106855ad0; end: 106855ad7; -[SCSpotlightSubfeedBundle containerVC] */

undefined8 FUN_106855ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106855ad8; end: 106855b07; -[SCSpotlightSubfeedBundle setContainerVC:] */

void FUN_106855ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106855b08; end: 106855b0f; -[SCSpotlightSubfeedBundle emptyStateController] */

undefined8 FUN_106855b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106855b10; end: 106855b3f; -[SCSpotlightSubfeedBundle setEmptyStateController:] */

void FUN_106855b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106855b40; end: 106855b87; -[SCSpotlightSubfeedBundle .cxx_destruct] */

void FUN_106855b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106855b88; end: 106855b93; +[SCSpotlightViewController announcerIdentifier] */

undefined ** FUN_106855b88(void)

{
  return &PTR____CFConstantStringClassReference_110e61f38;
}



/* Entry: 106855b94; end: 106855ba3; -[SCSpotlightViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106855b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751e50),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106855ba4; end: 106855bb3; -[SCSpotlightViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106855ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751e50),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106855bb4; end: 10685724b; -[SCSpotlightViewController initWithUserSession:businessProfileId:snapProProfilesProvider:playbackManager:playbackManagerFactory:spotlightQueryCoordinator:discoverFeedQueryCoordinator:headerButtonProvider:storiesGrapheneMetricsEmitter:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:discoverPerformanceLogging:featureSettingsService:userPreferences:storiesConfigProvider:circumstanceEngine:complianceEngine:storiesMixerNetworkRequester:currentPageTracker:pageLoadMetricManager:storiesBadgingServices:widgetServices:spotlightMediaFetcherFactory:spotlightDisplayOrdererFactory:isPresentedInChatFeed:prefersHorizontalNavigation:viewLocation:configuration:creatorsSubmissionScopeExposer:creatorsSubmissionScopeServices:managementScopeExposer:managementScopeServices:storiesMediaCoordinator:feedPageEntryType:userTrackedLogger:notificationScreenAccessor:internalDistributor:discoverFeedExpandedStoryFeedScope:spotlightSubfeedActionLogger:dismissGestureSwipeView:appStartExperimentReader:creatorsSubmissionScopeExposerV2:creatorsSubmissionScopeServicesV2:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106855bb4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined4 param_28,
             undefined4 param_29,long param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  puVar1 = &UNK_10f39c5f0;
  func_0x0001000ba800();
  puStack_98 = PTR_PTR_1126f3838;
  puVar2 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar15 = (long)_DAT_112751e54;
    uVar13 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined **)((long)puVar2 + lVar15) = puVar3;
    _objc_release(uVar13);
    func_0x00010bf77520(*(undefined8 *)((long)puVar2 + lVar15));
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751e58) = 0xbff0000000000000;
    uVar13 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112751e5c;
    uVar14 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = uVar13;
    _objc_release(uVar14);
    lVar16 = (long)_DAT_112751e60;
    _objc_retain(param_4);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_4;
    _objc_release(uVar13);
    lVar16 = (long)_DAT_112751e64;
    _objc_retain(param_5);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_5;
    _objc_release(uVar13);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751e68) = 0xffffffffffffffff;
    puVar3 = PTR_PTR_1126ce760;
    _objc_opt_new();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751e6c);
    *(undefined **)((long)puVar2 + (long)_DAT_112751e6c) = puVar3;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126ce768;
    _objc_opt_new();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751e70);
    *(undefined **)((long)puVar2 + (long)_DAT_112751e70) = puVar3;
    _objc_release(uVar13);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112751e74) = (undefined1)param_28;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112751e78) = param_28._1_1_;
    puVar3 = PTR_PTR_1126ce770;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751e7c);
    *(undefined **)((long)puVar2 + (long)_DAT_112751e7c) = puVar3;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126ce778;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751e80);
    *(undefined **)((long)puVar2 + (long)_DAT_112751e80) = puVar3;
    _objc_release(uVar13);
    if (param_30 == 0x49) {
      lVar16 = 0x62;
    }
    else {
      lVar16 = param_30;
      if (param_30 == 0x57) {
        lVar16 = 0x65;
      }
    }
    lVar23 = (long)_DAT_112751e84;
    *(long *)((long)puVar2 + lVar23) = lVar16;
    uVar13 = *(undefined8 *)((long)puVar2 + lVar15);
    func_0x00010c24afa0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = &PTR____CFConstantStringClassReference_110ee1ab8;
    _objc_retain(&PTR____CFConstantStringClassReference_110ee1ab8);
    puVar3 = PTR_PTR_1126ce808;
    func_0x00010c29d4c0();
    if ((int)puVar3 != 0) {
      ppuVar24 = &PTR____CFConstantStringClassReference_110ee1ad8;
      _objc_retain(&PTR____CFConstantStringClassReference_110ee1ad8);
      _objc_release(&PTR____CFConstantStringClassReference_110ee1ab8);
    }
    puVar3 = PTR_PTR_1126b1118;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043160();
    _objc_release(puVar4);
    _objc_release(ppuVar24);
    lVar16 = (long)_DAT_112751e88;
    uVar14 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined **)((long)puVar2 + lVar16) = puVar3;
    _objc_release(uVar14);
    _objc_release(uVar13);
    *(undefined4 *)((long)puVar2 + (long)_DAT_112751e8c) = 0x102;
    lVar17 = (long)_DAT_112751e90;
    _objc_retain(param_3);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar17);
    *(undefined8 **)((long)puVar2 + lVar17) = param_3;
    _objc_release(uVar13);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751e94);
    *(undefined **)((long)puVar2 + (long)_DAT_112751e94) = puVar3;
    _objc_release(uVar13);
    uVar19 = (undefined1)*(undefined8 *)((long)puVar2 + lVar15);
    puVar3 = PTR_PTR_1126c2470;
    func_0x00010bf91ca0(PTR_PTR_1126c2470);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f360();
    *(undefined1 *)((long)puVar2 + (long)_DAT_112751e98) = uVar19;
    _objc_release(puVar3);
    uVar19 = (undefined1)*(undefined8 *)((long)puVar2 + lVar15);
    puVar3 = PTR_PTR_1126c2470;
    func_0x00010bf91d80(PTR_PTR_1126c2470);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f360();
    *(undefined1 *)((long)puVar2 + (long)_DAT_112751e9c) = uVar19;
    _objc_release(puVar3);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar15);
    puVar3 = PTR_PTR_1126c2470;
    func_0x00010c0de760(PTR_PTR_1126c2470);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067e40();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751ea0) = uVar13;
    _objc_release(puVar3);
    lVar23 = *(long *)((long)puVar2 + lVar23);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar15);
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf926c0();
    lVar17 = (long)_DAT_112751ea4;
    *(char *)((long)puVar2 + lVar17) = (char)uVar14;
    _objc_release(uVar13);
    _objc_release(uVar5);
    if (lVar23 == 0x62) {
      bVar12 = *(byte *)((long)puVar2 + lVar17);
    }
    else {
      bVar12 = 0;
    }
    lVar22 = (long)_DAT_112751ea8;
    *(byte *)((long)puVar2 + lVar22) = bVar12 & 1;
    lVar23 = (long)_DAT_112751eac;
    *(undefined1 *)((long)puVar2 + lVar23) = 0;
    lVar18 = (long)_DAT_112751eb0;
    _objc_retain(param_7);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_7;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126ce780;
    _objc_alloc();
    func_0x00010c04b640();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751eb4);
    *(undefined **)((long)puVar2 + (long)_DAT_112751eb4) = puVar3;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126ce788;
    _objc_alloc();
    func_0x00010c04b420();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751eb8);
    *(undefined **)((long)puVar2 + (long)_DAT_112751eb8) = puVar3;
    _objc_release(uVar13);
    if ((*(byte *)((long)puVar2 + lVar22) & 1) == 0) {
      lVar18 = (long)_DAT_112751ebc;
      _objc_retain(param_6);
      uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
      *(undefined8 *)((long)puVar2 + lVar18) = param_6;
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)((long)puVar2 + lVar16);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f9480(uVar13);
      _objc_release(puVar3);
      _objc_release(uVar13);
    }
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106857250;
    puStack_b0 = &UNK_110944578;
    _objc_retain(puVar2);
    puStack_f0 = puVar3;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x10685728c;
    puStack_d8 = &UNK_1109445a8;
    puStack_a8 = puVar2;
    _objc_retain(puVar2);
    puStack_118 = puVar3;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1068572c8;
    puStack_100 = &UNK_1109445d8;
    puStack_d0 = puVar2;
    _objc_retain(puVar2);
    puStack_f8 = puVar2;
    func_0x00010c0bec00(param_31);
    lVar18 = (long)_DAT_112751ed0;
    _objc_retain(param_8);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_8;
    _objc_release(uVar13);
    lVar21 = (long)_DAT_112751ed4;
    _objc_retain(param_9);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar21);
    *(undefined8 *)((long)puVar2 + lVar21) = param_9;
    _objc_release(uVar13);
    lVar20 = (long)_DAT_112751ed8;
    _objc_retain(param_13);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_13;
    _objc_release(uVar13);
    lVar20 = (long)_DAT_112751edc;
    _objc_retain(param_14);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_14;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751e50);
    *(undefined **)((long)puVar2 + (long)_DAT_112751e50) = puVar3;
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar21);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar13);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751ee0) = 0;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751ee4) = 1;
    puVar3 = PTR_PTR_1126ce790;
    _objc_alloc();
    func_0x00010c04d180();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751ee8);
    *(undefined **)((long)puVar2 + (long)_DAT_112751ee8) = puVar3;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126ce798;
    _objc_alloc();
    func_0x00010c04cf00();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751eec);
    *(undefined **)((long)puVar2 + (long)_DAT_112751eec) = puVar3;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751ef0;
    _objc_retain(param_32);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_32;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751ef4;
    _objc_retain(param_33);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_33;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751ef8;
    _objc_retain(param_45);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_45;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751efc;
    _objc_retain(param_46);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_46;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751f00;
    _objc_retain(param_34);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_34;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751f04;
    _objc_retain(param_35);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_35;
    _objc_release(uVar13);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112751f08) = 0;
    lVar18 = (long)_DAT_112751f0c;
    _objc_retain(param_15);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_15;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751f10;
    _objc_retain(param_16);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_16;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751f14;
    _objc_retain(param_17);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_17;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751f18;
    _objc_retain(param_19);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_19;
    _objc_release(uVar13);
    lVar20 = (long)_DAT_112751f1c;
    _objc_retain(param_20);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_20;
    _objc_release(uVar13);
    lVar20 = (long)_DAT_112751f20;
    _objc_retain(param_21);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_21;
    _objc_release(uVar13);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751f24) = 0xffffffffffffffff;
    lVar20 = (long)_DAT_112751f28;
    _objc_retain(param_22);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_22;
    _objc_release(uVar13);
    lVar20 = (long)_DAT_112751f2c;
    _objc_retain(param_23);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_23;
    _objc_release(uVar13);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751f30) = 5;
    lVar20 = (long)_DAT_112751f34;
    _objc_retain(param_27);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_27;
    _objc_release(uVar13);
    lVar20 = (long)_DAT_112751f38;
    _objc_retain(param_26);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_26;
    _objc_release(uVar13);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751f3c) = 0;
    lVar20 = (long)_DAT_112751f40;
    _objc_retain(param_36);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_36;
    _objc_release(uVar13);
    uVar19 = (undefined1)*(undefined8 *)((long)puVar2 + lVar18);
    func_0x000108f4ae24();
    *(undefined1 *)((long)puVar2 + (long)_DAT_112751f44) = uVar19;
    lVar18 = (long)_DAT_112751f48;
    _objc_retain(param_24);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_24;
    _objc_release(uVar13);
    lVar18 = (long)_DAT_112751f4c;
    _objc_retain(param_25);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_25;
    _objc_release(uVar13);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112751f50,param_43);
    lVar18 = (long)_DAT_112751f54;
    _objc_retain(param_44);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_44;
    _objc_release(uVar13);
    _objc_initWeak(auStack_120,puVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_106857380;
    puStack_130 = &UNK_11084cac0;
    _objc_copyWeak(auStack_128,auStack_120);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751f58);
    *(undefined **)((long)puVar2 + (long)_DAT_112751f58) = puVar3;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751f5c);
    *(undefined **)((long)puVar2 + (long)_DAT_112751f5c) = puVar3;
    _objc_release(uVar13);
    func_0x0001068661e8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225560(puVar2);
    _objc_release(uVar13);
    if (*(char *)((long)puVar2 + lVar22) == '\x01') {
      puVar6 = puVar2;
      func_0x00010c29bf00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(puVar6);
      lVar18 = (long)_DAT_112751f60;
      _objc_retain(param_42);
      uVar13 = *(undefined8 *)((long)puVar2 + lVar18);
      *(undefined8 *)((long)puVar2 + lVar18) = param_42;
      _objc_release(uVar13);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar4 = PTR_PTR_1126ce7a0;
      _objc_alloc(PTR_PTR_1126ce7a0);
      uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
      func_0x00010bfa4340(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      puVar6 = puVar2;
      func_0x00010bebed60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c012600(puVar4);
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(uVar13);
      if (*(char *)((long)puVar2 + lVar17) == '\x01') {
        puVar6 = puVar2;
        func_0x00010beadb40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined8 *)0x0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(puVar6);
      }
      puVar4 = PTR_PTR_1126ae820;
      _objc_opt_new();
      lVar17 = (long)_DAT_112751f64;
      uVar13 = *(undefined8 *)((long)puVar2 + lVar17);
      *(undefined **)((long)puVar2 + lVar17) = puVar4;
      _objc_release(uVar13);
      func_0x00010c0d9840(*(undefined8 *)((long)puVar2 + lVar17));
      puVar4 = puVar3;
      func_0x00010bf51e00();
      uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751f68);
      *(undefined **)((long)puVar2 + (long)_DAT_112751f68) = puVar4;
      _objc_release(uVar13);
      puVar4 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751f6c);
      *(undefined **)((long)puVar2 + (long)_DAT_112751f6c) = puVar4;
      _objc_release(uVar13);
      if (*(char *)((long)puVar2 + lVar23) == '\x01') {
        puVar4 = PTR_PTR_1126ce7a8;
        _objc_alloc_init();
        uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751f70);
        *(undefined **)((long)puVar2 + (long)_DAT_112751f70) = puVar4;
        _objc_release(uVar13);
        puVar4 = PTR_PTR_1126ce7b0;
        _objc_alloc(PTR_PTR_1126ce7b0);
        func_0x00010bff2b20(0x3fb999999999999a);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lVar17 = (long)_DAT_112751f74;
        uVar13 = *(undefined8 *)((long)puVar2 + lVar17);
        *(undefined **)((long)puVar2 + lVar17) = puVar7;
        _objc_release(uVar13);
        uVar14 = *(undefined8 *)((long)puVar2 + lVar17);
        uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
        func_0x00010bfa4340(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        puVar6 = puVar2;
        func_0x00010bebed60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126ce7b8;
        func_0x00010bfb4880(PTR_PTR_1126ce7b8);
        _objc_retainAutoreleasedReturnValue();
        uStack_90 = *(undefined8 *)((long)puVar2 + lVar16);
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010bdeb7e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar14);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar13);
        _objc_release(puVar4);
      }
      puVar4 = PTR_PTR_1126ce7c0;
      _objc_alloc();
      puVar7 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff5ea0();
      _objc_release(puVar7);
      func_0x00010c18b5e0(puVar4);
      lVar16 = (long)_DAT_112751f78;
      _objc_retain(puVar4);
      uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
      *(undefined **)((long)puVar2 + lVar16) = puVar4;
      _objc_release(uVar13);
      uVar19 = *(undefined1 *)((long)puVar2 + lVar23);
      uVar14 = *(undefined8 *)((long)puVar2 + lVar16);
      func_0x00010bf60360(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_1068573c0;
      puStack_160 = &UNK_110944608;
      uStack_150 = uVar19;
      _objc_copyWeak(auStack_158,auStack_120);
      uVar13 = uVar14;
      func_0x00010c25ff60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar13);
      _objc_release(uVar14);
      _objc_destroyWeak(auStack_158);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    uVar13 = param_13;
    func_0x00010c269d40(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf82ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010c0e0ea0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_120);
    uVar11 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar13);
    func_0x00010bde5140(puVar2);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751f80) = param_37;
    lVar16 = (long)_DAT_112751f84;
    _objc_retain(param_12);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_12;
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2087a0();
    _objc_release(uVar13);
    lVar16 = (long)_DAT_112751f88;
    _objc_retain(param_39);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_39;
    _objc_release(uVar13);
    lVar16 = (long)_DAT_112751f8c;
    _objc_retain(param_40);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_40;
    _objc_release(uVar13);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112751f90) = 0;
    lVar16 = (long)_DAT_112751f94;
    _objc_retain(param_41);
    uVar13 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_41;
    _objc_release(uVar13);
    if ((param_30 == 0x62) || (param_30 == 0x49)) {
      lVar23 = *(long *)((long)puVar2 + lVar15);
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar23;
      func_0x00010bf8b980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar23);
      lVar23 = lVar16;
      func_0x00010bf926c0();
      if (((int)lVar23 != 0) && (lVar23 = lVar16, func_0x00010c29c620(), 0 < lVar23)) {
        lVar23 = lVar16;
        func_0x00010c29c620();
        *(long *)((long)puVar2 + (long)_DAT_112751f98) = lVar23;
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751f9c);
        *(undefined **)((long)puVar2 + (long)_DAT_112751f9c) = puVar3;
        _objc_release(uVar13);
      }
      _objc_release(lVar16);
    }
    uVar13 = *(undefined8 *)((long)puVar2 + lVar15);
    puVar3 = PTR_PTR_1126ce7c8;
    func_0x00010c0cee20(PTR_PTR_1126ce7c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067e20();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751fa0) = uVar13;
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_120);
    _objc_release(puStack_f8);
    _objc_release(puStack_d0);
    _objc_release(puStack_a8);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_120);
  func_0x0001000e2a84(puVar1);
  __Unwind_Resume(param_3);
  return param_3;
}



/* Entry: 10685724c; end: 10685724f;  */

void FUN_10685724c(void)

{
  return;
}



/* Entry: 106857250; end: 1068572c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857250(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ec0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ec0) = in_x6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068572c8; end: 10685737f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068572c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ec4);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ec4) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ec8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ec8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ecc);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751ecc) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106857380; end: 1068573bf;  */

void FUN_106857380(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068573c0; end: 106857483;  */

void FUN_1068573c0(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106857484;
  puStack_50 = &UNK_1108488f8;
  uStack_38 = *(undefined1 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106857484; end: 10685751b;  */

void FUN_106857484(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = *(char *)(param_1 + 0x30);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (cVar1 == '\x01') {
    func_0x00010bec95c0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar3 = lVar2;
    func_0x00010be34400();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      return;
    }
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bec9580();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10685751c; end: 106857577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685751c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c067ec0();
    *(long *)(param_1 + _DAT_112751f7c) = (long)(int)uVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106857578; end: 1068575cf; -[SCSpotlightViewController _shouldRenameSpotlightToReals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106857578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126b12d0;
  func_0x00010c12f540(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1068575d0; end: 106857617; -[SCSpotlightViewController _spotlightFeedTitle] */

void FUN_1068575d0(int param_1)

{
  func_0x00010beb53e0();
  if (param_1 == 0) {
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e61f58,
                        &PTR____CFConstantStringClassReference_110e61f78,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106867850();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106857618; end: 10685764b; -[SCSpotlightViewController _spotlightTabTitle] */

void FUN_106857618(int param_1)

{
  func_0x00010beb53e0();
  if (param_1 == 0) {
    func_0x0001005b093c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b0aeabc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10685764c; end: 106857813; -[SCSpotlightViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685764c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_10f39c7b7;
  func_0x0001000ba800(&UNK_10f39c7b7);
  puStack_48 = PTR_PTR_1126f3838;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_loadView_112604be0);
  puVar2 = PTR_PTR_1126ce7d0;
  _objc_alloc(PTR_PTR_1126ce7d0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112751e80;
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010beb3a40();
  if (((int)lVar3 != 0) && ((*(byte *)(param_1 + _DAT_112751fa4) & 1) == 0)) {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  }
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c18d940(puVar2);
  func_0x00010c2a4d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225540(puVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 106857814; end: 106857847;  */

void FUN_106857814(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee9540(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106857848; end: 106857947; -[SCSpotlightViewController _viewDidMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857848(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + _DAT_112751fa4) & 1) == 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1068578e0;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106857948; end: 106857a03; -[SCSpotlightViewController _layoutBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857948(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(ulong *)(param_2 + _DAT_112751f18);
  func_0x000108f4a4d4();
  dVar5 = 0.0;
  if ((uVar1 & 1) == 0) {
    func_0x00010c14da40(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar5 = param_1;
  }
  lVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  lVar3 = param_2;
  dVar4 = param_1;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010c19f0e0(0,dVar5,param_1,dVar4 - dVar5,*(undefined8 *)(param_2 + _DAT_112751e80));
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106857a04; end: 106857bd3; -[SCSpotlightViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857a04(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f3838;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010bedc780(param_2);
  if ((*(byte *)(param_2 + _DAT_112751fa8) & 1) == 0) {
    *(undefined1 *)(param_2 + _DAT_112751fa8) = 1;
  }
  lVar1 = *(long *)(param_2 + _DAT_112751e80);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 == lVar3) {
    func_0x00010be48da0(param_2);
  }
  lVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = param_1 * 0.254;
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  lVar2 = param_2;
  func_0x00010c2a4d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0,0,dVar4,param_1 * 0.346);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = (long)_DAT_112751fac;
  if ((*(byte *)(param_2 + lVar3) & 1) == 0) {
    _objc_initWeak(auStack_58,param_2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106857bd4;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x000100162d98("APPSTORE",&puStack_80);
    *(undefined1 *)(param_2 + lVar3) = 1;
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106857bd4; end: 106857c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857bd4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c152420(*(undefined8 *)(param_1 + _DAT_112751f78));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106857c10; end: 106857cb7; -[SCSpotlightViewController viewWillTransitionToSize:withTransitionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857c10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_viewWillTransitionToSize_withTra_112685490;
  puStack_48 = PTR_PTR_1126f3838;
  lStack_50 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(param_1,param_2,&lStack_50,puVar1,param_5);
  param_3 = param_3 + _DAT_112751fb0;
  _objc_loadWeakRetained(param_3);
  func_0x00010c2882c0(param_1,param_2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106857cb8; end: 106857eef; -[SCSpotlightViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857cb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_10f39c7ce;
  func_0x0001000ba800(&UNK_10f39c7ce);
  puStack_58 = PTR_PTR_1126f3838;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_112751e54));
  puVar2 = PTR_PTR_1126afdd8;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751f2c);
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cae0(uVar4);
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751ec4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106857ef0;
  puStack_78 = &UNK_110843540;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112751fb8);
  *(undefined8 *)(param_1 + _DAT_112751fb8) = uVar4;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751ec8);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112751fc0);
  *(undefined8 *)(param_1 + _DAT_112751fc0) = uVar4;
  _objc_release(uVar3);
  func_0x00010bde5620(param_1);
  func_0x00010bde51c0(param_1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 106857ef0; end: 106857f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112751fb4;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106857f58; end: 106857fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857f58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c067ec0();
    *(long *)(param_1 + _DAT_112751fbc) = (long)(int)uVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106857fb4; end: 106857fd3; -[SCSpotlightViewController _isEmptyOperaBaseViewFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106857fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751f18),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e61f98,0,0);
  return;
}



/* Entry: 106857fd4; end: 1068580ef; -[SCSpotlightViewController _relayoutEmptyBaseViewBeforePresentingOpera:] */

void FUN_106857fd4(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  func_0x00010be40060();
  if (param_1 != 0) {
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    while (lVar1 = lVar4, lVar1 != 0) {
      lVar4 = lVar1;
      func_0x00010bfb68e0();
      iVar3 = (int)lVar4;
      _CGRectIsEmpty();
      if (iVar3 == 0) break;
      _objc_retain(lVar1);
      _objc_release(lVar2);
      lVar4 = lVar1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar2 = lVar1;
    }
    lVar5 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    if (lVar5 != 0) {
      lVar4 = lVar5;
    }
    _objc_retain(lVar4);
    _objc_release(lVar5);
    func_0x00010c1cbe20(lVar4);
    func_0x00010c08cdc0(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068580f0; end: 1068581a7; -[SCSpotlightViewController _configureHorizontalNavSwipeDownDismissPan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068580f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + _DAT_112751e78) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_112751e74) & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_112751fc4;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068581a8; end: 10685840b; -[SCSpotlightViewController _handleHorizontalNavSwipeDownDismissPan:] */

void FUN_1068581a8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5,param_4,lVar1);
  dVar2 = param_2;
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5,param_4,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar1 - 1U < 2) {
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    _CGAffineTransformMakeTranslation(&uStack_80,0,param_2);
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
  }
  else {
    if (lVar1 == 3) {
      if (param_1 * 0.25 < param_2 + dVar2 / 3.0) {
        lVar1 = param_3;
        func_0x00010c10fd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0xc2000000;
          pcStack_d0 = FUN_10685840c;
          puStack_c8 = &UNK_110848c48;
          puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_100 = 0xc2000000;
          pcStack_f8 = FUN_106858474;
          puStack_f0 = &UNK_110841f20;
          lStack_e8 = param_3;
          lStack_c0 = param_3;
          dStack_b8 = param_1;
          func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_4,
                              &puStack_e0,&puStack_108);
          return;
        }
      }
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      uStack_120 = 0x106858528;
      puStack_118 = &UNK_110842e18;
      lStack_110 = param_3;
      func_0x00010bf03460(0x3fd0000000000000,0,0x3feb333333333333,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_4,0,&puStack_130,0);
      return;
    }
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  uStack_90 = uStack_60;
  uStack_88 = uStack_58;
  func_0x00010c219960();
  _objc_release(param_3);
  return;
}



/* Entry: 10685840c; end: 106858473;  */

void FUN_10685840c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeTranslation(auStack_50,0,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 106858474; end: 1068584cb;  */

void FUN_106858474(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1068584cc;
  puStack_20 = &UNK_110842e18;
  func_0x00010bf84b00(uStack_18,param_2,0,&puStack_38);
  return;
}



/* Entry: 1068584cc; end: 106858583;  */

void FUN_1068584cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 106858584; end: 10685866f; -[SCSpotlightViewController _configurePullToRefreshController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858584(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112751fc8;
  if ((*(long *)(param_1 + lVar4) == 0) &&
     ((*(long *)(param_1 + _DAT_112751e84) == 0x62 || (*(long *)(param_1 + _DAT_112751e84) == 0x49))
     )) {
    lVar1 = param_1;
    func_0x00010be847a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126ce7d8;
      _objc_alloc_init();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      param_1 = param_1 + _DAT_112751f50;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010c0f36c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf477e0(uVar3,param_2,lVar1,lVar4);
      _objc_release(lVar4);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106858670; end: 1068586ef; -[SCSpotlightViewController _pullToRefreshContainerView] */

void FUN_106858670(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdf6fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1068586f0; end: 10685871f; -[SCSpotlightViewController _shouldFadeSpotlightBackgroundForOperaDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1068586f0(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + _DAT_112751e78) == '\x01') {
    bVar1 = *(byte *)(param_1 + _DAT_112751e74);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 106858720; end: 1068587eb; -[SCSpotlightViewController _setSpotlightBackgroundVisibleForOperaDismissal:animated:] */

void FUN_106858720(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar1 = param_1;
  func_0x00010beb3a40();
  if ((int)uVar1 != 0) {
    uStack_38 = 0x3ff0000000000000;
    if (param_3 == 0) {
      uStack_38 = 0;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1068587ec;
    puStack_48 = &UNK_110848c48;
    uStack_40 = param_1;
    _objc_retainBlock();
    if (param_4 == 0) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    }
    else {
      func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,ppuVar2,
                          0);
    }
    _objc_release(ppuVar2);
  }
  return;
}



/* Entry: 1068587ec; end: 106858803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068587ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112751e80),
             PTR_s_setAlpha__112637810);
  return;
}


